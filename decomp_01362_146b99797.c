// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b99797 FUN_146b99797 body=7 status=ok
// SIG undefined FUN_146b99797(void)

void FUN_146b99797(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 146b9979e FUN_146b9979e body=132 status=ok
// SIG undefined FUN_146b9979e(void)

void FUN_146b9979e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b99824 FUN_146b99824 body=63 status=ok
// SIG undefined FUN_146b99824(void)

void FUN_146b99824(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146b999a8(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146b9948a(param_1);
    return;
  }
  FUN_146b99864(param_1);
  FUN_146b999a8(param_1);
  return;
}



// FUNCTION 146b99864 FUN_146b99864 body=322 status=ok
// SIG undefined FUN_146b99864(void)

void FUN_146b99864(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b999a8 FUN_146b999a8 body=313 status=ok
// SIG undefined FUN_146b999a8(void)

void FUN_146b999a8(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b99ae2 FUN_146b99ae2 body=38 status=ok
// SIG undefined FUN_146b99ae2(void)

void FUN_146b99ae2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b6fcf2(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 146b99b08 FUN_146b99b08 body=29 status=ok
// SIG undefined FUN_146b99b08(void)

undefined8 FUN_146b99b08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b99b42 FUN_146b99b42 body=93 status=ok
// SIG undefined FUN_146b99b42(void)

void FUN_146b99b42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f35f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b99ba0 FUN_146b99ba0 body=93 status=ok
// SIG undefined FUN_146b99ba0(void)

void FUN_146b99ba0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f35f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b99bfe FUN_146b99bfe body=126 status=ok
// SIG undefined FUN_146b99bfe(void)

void FUN_146b99bfe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f35f80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b99c6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b99c8a FUN_146b99c8a body=21 status=ok
// SIG undefined FUN_146b99c8a(void)

undefined8 FUN_146b99c8a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b99ca0 FUN_146b99ca0 body=74 status=ok
// SIG undefined FUN_146b99ca0(void)

void FUN_146b99ca0(longlong *param_1)

{
  switch((char)param_1[5]) {
  case '\0':
    *(undefined1 *)(param_1 + 5) = 0xff;
    FUN_146b921ae();
    return;
  case '\x01':
  case '\x04':
    *(undefined1 *)(param_1 + 5) = 0xff;
    break;
  case '\x02':
    *(undefined1 *)(param_1 + 5) = 0xff;
    if (*param_1 != 0) {
      FUN_1400020a8();
      return;
    }
    break;
  case '\x03':
    *(undefined1 *)(param_1 + 5) = 0xff;
    if (*param_1 != 0) {
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 146b99cea FUN_146b99cea body=74 status=ok
// SIG undefined FUN_146b99cea(void)

undefined8 * FUN_146b99cea(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146b99d7e(param_1,iVar1);
    FUN_146b99de0(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146b99d34 FUN_146b99d34 body=74 status=ok
// SIG undefined FUN_146b99d34(void)

undefined8 * FUN_146b99d34(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146b99d7e(param_1,iVar1);
    FUN_146b99de0(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146b99d7e FUN_146b99d7e body=98 status=ok
// SIG undefined FUN_146b99d7e(void)

undefined8 FUN_146b99d7e(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0x38,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return uVar3;
}



// FUNCTION 146b99de0 FUN_146b99de0 body=135 status=ok
// SIG undefined FUN_146b99de0(void)

void FUN_146b99de0(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)(param_2 + 0x10);
  do {
    *param_1 = 0;
    iVar1 = puVar9[-2];
    _Src = *(void **)(puVar9 + -4);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 6) = puVar9[8];
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    uVar5 = puVar9[3];
    uVar6 = puVar9[5];
    uVar7 = puVar9[6];
    uVar8 = puVar9[7];
    *(undefined4 *)(param_1 + 4) = puVar9[4];
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
    *(undefined4 *)(param_1 + 5) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    param_1 = param_1 + 7;
    puVar9 = puVar9 + 0xe;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 146b99e68 FUN_146b99e68 body=190 status=ok
// SIG undefined FUN_146b99e68(void)

undefined8 * FUN_146b99e68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 5) != -1) {
    switch(*(char *)(param_2 + 5)) {
    case '\0':
      FUN_146b99ca0(param_1);
      FUN_146b99cea(param_1,param_2);
      FUN_146b99d34(param_1 + 2,param_2 + 2);
      *(undefined1 *)(param_1 + 5) = 0;
      break;
    case '\x01':
      FUN_146b99ca0(param_1);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      *(undefined1 *)(param_1 + 5) = 1;
      break;
    case '\x02':
      FUN_146b99f26(param_1,param_2);
      break;
    case '\x03':
      FUN_146b99f8e(param_1,param_2);
      break;
    case '\x04':
    case '\x05':
      FUN_146b99ca0(param_1);
      *(undefined1 *)(param_1 + 5) = 4;
      break;
    default:
      FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h",0x18e,L"Unrecognized TUnion subtype"
                   );
    }
  }
  return param_1;
}



// FUNCTION 146b99f26 FUN_146b99f26 body=104 status=ok
// SIG undefined FUN_146b99f26(void)

undefined8 * FUN_146b99f26(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_146b99ca0();
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
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 5) = 2;
  return param_1;
}



// FUNCTION 146b99f8e FUN_146b99f8e body=112 status=ok
// SIG undefined FUN_146b99f8e(void)

undefined8 * FUN_146b99f8e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  FUN_146b99ca0();
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
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 5) = 3;
  return param_1;
}



// FUNCTION 146b99ffe FUN_146b99ffe body=322 status=ok
// SIG undefined FUN_146b99ffe(void)

void FUN_146b99ffe(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b9a142 FUN_146b9a142 body=285 status=ok
// SIG undefined FUN_146b9a142(void)

void FUN_146b9a142(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x10 + (longlong)iStack_44 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9a260 FUN_146b9a260 body=322 status=ok
// SIG undefined FUN_146b9a260(void)

void FUN_146b9a260(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b9a3a4 FUN_146b9a3a4 body=308 status=ok
// SIG undefined FUN_146b9a3a4(void)

void FUN_146b9a3a4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54;
      if (*(longlong *)(lVar1 + 0x10 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9a4da FUN_146b9a4da body=135 status=ok
// SIG undefined FUN_146b9a4da(void)

longlong FUN_146b9a4da(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_146b9a562();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_146b9a514;
  }
  local_30 = param_3;
  FUN_146b9a5d6(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_146b9a514:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9a562 FUN_146b9a562 body=115 status=ok
// SIG undefined FUN_146b9a562(void)

int FUN_146b9a562(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b9a5d6 FUN_146b9a5d6 body=277 status=ok
// SIG undefined FUN_146b9a5d6(void)

undefined4 * FUN_146b9a5d6(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b9a6ec(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_146b9a7d2(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146b9a8b8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9a6ec FUN_146b9a6ec body=230 status=ok
// SIG undefined FUN_146b9a6ec(void)

int * FUN_146b9a6ec(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146b9a7d2 FUN_146b9a7d2 body=115 status=ok
// SIG undefined FUN_146b9a7d2(void)

undefined8 FUN_146b9a7d2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_146b9a562(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    if (*(longlong *)(puVar1 + 4) != 0) {
      FUN_1400020a8();
    }
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
    FUN_146b9a846(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 146b9a846 FUN_146b9a846 body=114 status=ok
// SIG undefined FUN_146b9a846(void)

void FUN_146b9a846(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 146b9a8b8 FUN_146b9a8b8 body=443 status=ok
// SIG undefined FUN_146b9a8b8(void)

void FUN_146b9a8b8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b9aa74 FUN_146b9aa74 body=132 status=ok
// SIG undefined FUN_146b9aa74(void)

void FUN_146b9aa74(longlong param_1,int param_2)

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



// FUNCTION 146b9aafa FUN_146b9aafa body=135 status=ok
// SIG undefined FUN_146b9aafa(void)

longlong FUN_146b9aafa(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_146b9ab82();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_146b9ab34;
  }
  local_30 = param_3;
  FUN_146b9ac4e(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_146b9ab34:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9ab82 FUN_146b9ab82 body=203 status=ok
// SIG undefined FUN_146b9ab82(void)

int FUN_146b9ab82(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_146b9abcc:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_146b9ac42;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146b9ac42;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146b9ac33;
    }
  }
  return -1;
LAB_146b9ac42:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146b9ac33:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146b9abcc;
}



// FUNCTION 146b9ac4e FUN_146b9ac4e body=272 status=ok
// SIG undefined FUN_146b9ac4e(void)

undefined4 * FUN_146b9ac4e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b9ad60(param_1,local_48);
  FUN_146b9aec6(param_4,local_40);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar1 = FUN_146b9ae46(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146b9af94(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9ad60 FUN_146b9ad60 body=230 status=ok
// SIG undefined FUN_146b9ad60(void)

int * FUN_146b9ad60(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146b9ae46 FUN_146b9ae46 body=128 status=ok
// SIG undefined FUN_146b9ae46(void)

undefined8 FUN_146b9ae46(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_146b9ab82(), iVar9 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
    if (plVar1[2] != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(plVar1 + 2) = param_3[4];
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
    *(undefined4 *)(plVar1 + 3) = uVar7;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_146b9af22(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 146b9aec6 FUN_146b9aec6 body=92 status=ok
// SIG undefined FUN_146b9aec6(void)

undefined8 * FUN_146b9aec6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  return param_2;
}



// FUNCTION 146b9af22 FUN_146b9af22 body=114 status=ok
// SIG undefined FUN_146b9af22(void)

void FUN_146b9af22(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 146b9af94 FUN_146b9af94 body=476 status=ok
// SIG undefined FUN_146b9af94(void)

void FUN_146b9af94(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9b172 FUN_146b9b172 body=143 status=ok
// SIG undefined FUN_146b9b172(void)

void FUN_146b9b172(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b9b202 FUN_146b9b202 body=289 status=ok
// SIG undefined FUN_146b9b202(void)

undefined4 * FUN_146b9b202(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b9b324(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_146b9b40a(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b9b4fc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9b324 FUN_146b9b324 body=230 status=ok
// SIG undefined FUN_146b9b324(void)

int * FUN_146b9b324(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146b9b40a FUN_146b9b40a body=128 status=ok
// SIG undefined FUN_146b9b40a(void)

undefined8 FUN_146b9b40a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146b9b48a(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b9b48a FUN_146b9b48a body=114 status=ok
// SIG undefined FUN_146b9b48a(void)

void FUN_146b9b48a(longlong *param_1,int param_2)

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



// FUNCTION 146b9b4fc FUN_146b9b4fc body=419 status=ok
// SIG undefined FUN_146b9b4fc(void)

void FUN_146b9b4fc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b9b6a0 FUN_146b9b6a0 body=285 status=ok
// SIG undefined FUN_146b9b6a0(void)

undefined4 * FUN_146b9b6a0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b9b7be(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_146b9b8a4(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b9b996(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9b7be FUN_146b9b7be body=229 status=ok
// SIG undefined FUN_146b9b7be(void)

int * FUN_146b9b7be(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146b9b8a4 FUN_146b9b8a4 body=127 status=ok
// SIG undefined FUN_146b9b8a4(void)

undefined8 FUN_146b9b8a4(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146b9b924(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b9b924 FUN_146b9b924 body=114 status=ok
// SIG undefined FUN_146b9b924(void)

void FUN_146b9b924(longlong *param_1,int param_2)

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



// FUNCTION 146b9b996 FUN_146b9b996 body=422 status=ok
// SIG undefined FUN_146b9b996(void)

void FUN_146b9b996(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b9bb3d FUN_146b9bb3d body=47 status=ok
// SIG undefined FUN_146b9bb3d(void)

void FUN_146b9bb3d(longlong param_1,int param_2)

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



// FUNCTION 146b9bb6c FUN_146b9bb6c body=48 status=ok
// SIG undefined FUN_146b9bb6c(void)

void FUN_146b9bb6c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 146b9bb9c FUN_146b9bb9c body=48 status=ok
// SIG undefined FUN_146b9bb9c(void)

void FUN_146b9bb9c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 146b9bbcc FUN_146b9bbcc body=132 status=ok
// SIG undefined FUN_146b9bbcc(void)

void FUN_146b9bbcc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b9bc52 FUN_146b9bc52 body=132 status=ok
// SIG undefined FUN_146b9bc52(void)

void FUN_146b9bc52(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b9bcd8 FUN_146b9bcd8 body=84 status=ok
// SIG undefined FUN_146b9bcd8(void)

void FUN_146b9bcd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f34240;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 3);
  return;
}



// FUNCTION 146b9bd2c FUN_146b9bd2c body=188 status=ok
// SIG undefined FUN_146b9bd2c(void)

void FUN_146b9bd2c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f35300;
  plVar3 = (longlong *)param_1[0x1e];
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
  plVar3 = (longlong *)param_1[0x1b];
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
  FUN_1449db362(param_1 + 0x18);
  FUN_1449db362(param_1 + 0x16);
  if (param_1[0xc] != 0) {
    plVar3 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_146b32214(param_1 + 1);
  return;
}



// FUNCTION 146b9bde8 FUN_146b9bde8 body=83 status=ok
// SIG undefined FUN_146b9bde8(void)

void FUN_146b9bde8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f355f0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_146b9be3c(param_1 + 6);
  return;
}



// FUNCTION 146b9be3c FUN_146b9be3c body=52 status=ok
// SIG undefined FUN_146b9be3c(void)

void FUN_146b9be3c(longlong *param_1)

{
  FUN_146b999a8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b9be70 FUN_146b9be70 body=249 status=ok
// SIG undefined FUN_146b9be70(void)

void FUN_146b9be70(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f35930;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_146b9bb3d(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0xb);
  plVar3 = (longlong *)param_1[9];
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
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b9bf6a FUN_146b9bf6a body=63 status=ok
// SIG undefined FUN_146b9bf6a(void)

void FUN_146b9bf6a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b9bfaa(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146b9bfaa FUN_146b9bfaa body=97 status=ok
// SIG undefined FUN_146b9bfaa(void)

ulonglong FUN_146b9bfaa(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146b9c00c FUN_146b9c00c body=96 status=ok
// SIG undefined FUN_146b9c00c(void)

void FUN_146b9c00c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146b9c06c FUN_146b9c06c body=118 status=ok
// SIG undefined FUN_146b9c06c(void)

void FUN_146b9c06c(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  puVar1 = param_1 + 1;
  FUN_146beceb6(puVar1,1,0);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    _Dst = (void *)FUN_14001cc68(0x1000);
    memset(_Dst,0,0x1000);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_146becfc2(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 146b9c0e2 FUN_146b9c0e2 body=218 status=ok
// SIG undefined FUN_146b9c0e2(void)

void FUN_146b9c0e2(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar3 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (((int)uVar3 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar3 = 1;
    if (1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    plVar1 = (longlong *)(param_1 + 2);
    puVar2 = (uint *)(param_1 + 4);
    iVar6 = uVar3 - *puVar2;
    if (iVar6 == 0 || (int)uVar3 < (int)*puVar2) {
      if (uVar3 < *puVar2) {
        FUN_146beceb6(plVar1,uVar3,0);
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x1000);
        memset(_Dst,0,0x1000);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_146becfc2(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    iVar5 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    *param_1 = iVar5;
    param_1[1] = iVar6;
  }
  return;
}



// FUNCTION 146b9c1bc FUN_146b9c1bc body=154 status=ok
// SIG undefined FUN_146b9c1bc(void)

void FUN_146b9c1bc(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar3 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x1000);
      memset(_Dst,0,0x1000);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_146becfc2(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar3 = 0;
  }
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) + (ulonglong)uVar3 * 8) =
       *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146b9c256 FUN_146b9c256 body=93 status=ok
// SIG undefined FUN_146b9c256(void)

void FUN_146b9c256(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  uVar2 = (uint)param_3;
  if (uVar1 != uVar2) {
    if (uVar2 <= uVar1) {
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 8) = *param_2;
      return;
    }
    FUN_146b9c0e2(param_1,param_3 & 0xffffffff);
  }
  FUN_146b9c1bc(param_1,param_2);
  return;
}



// FUNCTION 146b9c2b3 FUN_146b9c2b3 body=2091 status=ok
// SIG undefined FUN_146b9c2b3(void)

void FUN_146b9c2b3(longlong param_1,longlong *param_2,double *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  void *pvVar6;
  int iVar7;
  double *pdVar8;
  longlong *plVar9;
  longlong lVar10;
  double *pdVar11;
  uint uVar12;
  longlong lVar13;
  double *pdVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  int *piVar25;
  ulonglong uVar26;
  int iVar27;
  bool bVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  uint local_174;
  double *local_170;
  longlong local_168;
  undefined1 local_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  longlong *local_150;
  int local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  void *local_128;
  ulonglong uStack_120;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  double local_f0;
  double dStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar17 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  local_128 = (void *)0x0;
  uStack_120 = 0;
  local_174 = uVar17;
  local_170 = param_3;
  if ((int)uVar17 < 1) {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar17);
    }
  }
  else {
    uStack_120 = (ulonglong)uVar17;
    FUN_14296c5b0(&local_128);
    uVar22 = 0;
    memset(local_128,0,(ulonglong)uVar17 << 5);
    lVar19 = 0x18;
    do {
      pvVar6 = local_128;
      if ((longlong)uVar22 <
          (longlong)(*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
        uVar26 = uVar22 >> 9 & 0x7fffff;
        uVar24 = (ulonglong)((uint)uVar22 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar26 * 8) +
                               uVar24 * 2) - 1U) < 0xfffe) {
          local_188 = (longlong)local_128 + lVar19;
          lVar10 = *(longlong *)(param_1 + 0x10);
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar26 * 8);
          uVar20 = *(uint *)(lVar13 + uVar24 * 0xc);
          lVar5 = *(longlong *)(lVar10 + (ulonglong)(uVar20 >> 9) * 8);
          uVar26 = (ulonglong)uVar20 & 0x1ff;
          puVar1 = (undefined8 *)(lVar5 + uVar26 * 0x18);
          local_108 = *puVar1;
          uStack_100 = puVar1[1];
          local_f8 = *(undefined8 *)(lVar5 + 0x10 + uVar26 * 0x18);
          uVar20 = *(uint *)(lVar13 + 4 + uVar24 * 0xc);
          lVar5 = *(longlong *)(lVar10 + (ulonglong)(uVar20 >> 9) * 8);
          uVar26 = (ulonglong)uVar20 & 0x1ff;
          local_e0 = *(undefined8 *)(lVar5 + 0x10 + uVar26 * 0x18);
          pdVar8 = (double *)(lVar5 + uVar26 * 0x18);
          local_f0 = *pdVar8;
          dStack_e8 = pdVar8[1];
          uVar20 = *(uint *)(lVar13 + 8 + uVar24 * 0xc);
          lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar20 >> 9) * 8);
          uVar26 = (ulonglong)uVar20 & 0x1ff;
          local_c8 = *(undefined8 *)(lVar10 + 0x10 + uVar26 * 0x18);
          puVar2 = (undefined4 *)(lVar10 + uVar26 * 0x18);
          local_d8 = *puVar2;
          uStack_d4 = puVar2[1];
          uStack_d0 = puVar2[2];
          uStack_cc = puVar2[3];
          local_168 = local_188;
          FUN_146b9cae0(&local_160,&local_108,&local_f0);
          *(longlong **)((longlong)pvVar6 + lVar19 + -8) = local_150;
          puVar1 = (undefined8 *)((longlong)pvVar6 + lVar19 + -0x18);
          *puVar1 = CONCAT71(uStack_15f,local_160);
          puVar1[1] = uStack_158;
        }
      }
      uVar22 = uVar22 + 1;
      lVar19 = lVar19 + 0x20;
    } while (uVar17 != uVar22);
  }
  uVar17 = local_174;
  FUN_144a127d2(param_2,local_174,1);
  FUN_144a127d2(param_2 + 2,uVar17,1);
  pdVar8 = local_170;
  if (0 < (int)uVar17) {
    uVar22 = 0;
    do {
      uVar15 = 0;
      uVar20 = 0xffffffff;
      if ((longlong)uVar22 <
          (longlong)(*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
        bVar28 = (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x148) + (uVar22 >> 9 & 0x7fffff) * 8
                                      ) + (ulonglong)((uint)uVar22 & 0x1ff) * 2) - 1U) < 0xfffe;
        uVar15 = (uint)bVar28;
        uVar20 = 0xffffffff;
        if (bVar28) {
          uVar20 = (uint)uVar22;
        }
      }
      *(uint *)(*param_2 + uVar22 * 4) = uVar20;
      *(uint *)(param_2[2] + uVar22 * 4) = uVar15;
      uVar22 = uVar22 + 1;
    } while (uVar17 != uVar22);
  }
  iVar21 = *(int *)(param_1 + 0x1d0);
  iVar27 = *(int *)(param_1 + 0x1d4);
  local_160 = 0;
  FUN_146bd2140(&uStack_158);
  local_138 = 0;
  uStack_130 = 0;
  FUN_146bd223a(&uStack_158);
  local_10c = 0xffffffff;
  FUN_1448156a8(&local_138,&local_10c,iVar21 * 0x200 + iVar27);
  local_140 = 0;
  uVar20 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
  uVar17 = 0;
  if ((uVar20 != 0) &&
     (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x1d8) - 1U))) {
    uVar15 = 1;
    uVar12 = 1;
    if (1 < (int)uVar20) {
      uVar15 = uVar20;
    }
    do {
      uVar17 = uVar15;
      if (uVar15 == uVar12) break;
      uVar16 = uVar12 >> 9;
      uVar23 = uVar12 & 0x1ff;
      uVar17 = uVar12;
      uVar12 = uVar12 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x1d8))[uVar16] +
                                         (ulonglong)uVar23 * 2) - 1U));
  }
  if (uVar17 != uVar20) {
    uVar34 = 0;
    uVar35 = 0x3cb00000;
    dVar3 = pdVar8[1];
    if (2.220446049250313e-16 <= dVar3) {
      uVar34 = SUB84(dVar3,0);
      uVar35 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    fVar36 = (float)*pdVar8;
    do {
      if ((param_4 != (longlong *)0x0) && ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34))) {
        plVar9 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar9 = param_4 + 7;
        }
        iVar21 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_4[9] - 1U & uVar17) * 4);
        if (iVar21 != -1) {
          do {
            if (*(uint *)(*param_4 + (longlong)iVar21 * 0xc) == uVar17) goto LAB_146b9c6e9;
            iVar21 = *(int *)(*param_4 + (longlong)iVar21 * 0xc + 4);
          } while (iVar21 != -1);
        }
      }
      uVar22 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar17 >> 9) * 8) + 8 +
                (ulonglong)((uVar17 & 0x1ff) << 4));
      if (uVar22 < 0xffffffff00000000 && (int)uVar22 != -1) {
        lVar19 = (longlong)(int)uVar22 * 0x20;
        fVar29 = 0.0;
        pdVar8 = (double *)((longlong)local_128 + lVar19 + 0x18);
        if (((double)CONCAT44(uVar35,uVar34) < *pdVar8 || (double)CONCAT44(uVar35,uVar34) == *pdVar8
            ) && (lVar10 = ((longlong)uVar22 >> 0x20) * 0x20,
                 pdVar8 = (double *)((longlong)local_128 + lVar10 + 0x18),
                 (double)CONCAT44(uVar35,uVar34) < *pdVar8 ||
                 (double)CONCAT44(uVar35,uVar34) == *pdVar8)) {
          pdVar8 = (double *)(lVar10 + (longlong)local_128);
          fVar29 = 1.0 - (float)(*(double *)((longlong)local_128 + lVar19 + 0x10) * pdVar8[2] +
                                *(double *)((longlong)local_128 + lVar19) * *pdVar8 +
                                *(double *)((longlong)local_128 + lVar19 + 8) * pdVar8[1]);
        }
        if (fVar29 < fVar36) {
          FUN_146b9cbf0(&local_160,uVar17);
        }
      }
LAB_146b9c6e9:
      pdVar8 = local_170;
      uVar15 = uVar17 + 1;
      if ((int)(uVar17 + 1) < (int)uVar20) {
        uVar15 = uVar20;
      }
      do {
        uVar12 = uVar15;
        if (uVar15 - 1 == uVar17) break;
        uVar17 = uVar17 + 1;
        uVar12 = uVar17;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x1d8) +
                                             (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
      uVar17 = uVar12;
    } while (uVar17 != uVar20);
    if (0 < local_140) {
      iVar21 = *(int *)(param_1 + 0x170);
      do {
        uVar17 = *(uint *)(*local_150 + 0xc);
        FUN_146bd26ea(&local_160,1);
        iVar18 = -1;
        iVar27 = -1;
        if (*(char *)((longlong)pdVar8 + 0x14) == '\x01') {
          lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar17 >> 9) * 8);
          uVar22 = (ulonglong)((uVar17 & 0x1ff) << 4);
          iVar27 = *(int *)(lVar19 + 8 + uVar22);
          iVar18 = *(int *)(lVar19 + 0xc + uVar22);
          lVar19 = *param_2;
          lVar10 = (longlong)iVar27;
          iVar7 = *(int *)(lVar19 + lVar10 * 4);
          if (iVar7 != iVar27) {
            piVar25 = (int *)(lVar19 + lVar10 * 4);
            do {
              *piVar25 = *(int *)(lVar19 + (longlong)iVar7 * 4);
              lVar19 = *param_2;
              iVar27 = *(int *)(lVar19 + lVar10 * 4);
              lVar10 = (longlong)iVar27;
              piVar25 = (int *)(lVar19 + lVar10 * 4);
              iVar7 = *piVar25;
            } while (iVar7 != iVar27);
          }
          lVar13 = (longlong)iVar18;
          iVar7 = *(int *)(lVar19 + lVar13 * 4);
          if (iVar7 != iVar18) {
            piVar25 = (int *)(lVar19 + lVar13 * 4);
            do {
              *piVar25 = *(int *)(lVar19 + (longlong)iVar7 * 4);
              lVar19 = *param_2;
              iVar18 = *(int *)(lVar19 + lVar13 * 4);
              lVar13 = (longlong)iVar18;
              piVar25 = (int *)(lVar19 + lVar13 * 4);
              iVar7 = *piVar25;
            } while (iVar7 != iVar18);
          }
          fVar29 = 3.4028235e+38;
          if (iVar27 != iVar18) {
            pdVar11 = (double *)((longlong)local_128 + lVar10 * 0x20 + 0x18);
            fVar29 = 0.0;
            if (((double)CONCAT44(uVar35,uVar34) < *pdVar11 ||
                 (double)CONCAT44(uVar35,uVar34) == *pdVar11) &&
               (pdVar11 = (double *)((longlong)local_128 + lVar13 * 0x20 + 0x18), fVar29 = 0.0,
               (double)CONCAT44(uVar35,uVar34) < *pdVar11 ||
               (double)CONCAT44(uVar35,uVar34) == *pdVar11)) {
              pdVar11 = (double *)(lVar10 * 0x20 + (longlong)local_128);
              pdVar14 = (double *)(lVar13 * 0x20 + (longlong)local_128);
              fVar29 = 1.0 - (float)(pdVar11[2] * pdVar14[2] +
                                    *pdVar11 * *pdVar14 + pdVar11[1] * pdVar14[1]);
            }
          }
          if (fVar29 < fVar36) {
            if ((local_140 < 1) ||
               (fVar29 < *(float *)(*local_150 + 0x10) || fVar29 == *(float *)(*local_150 + 0x10)))
            goto LAB_146b9c96d;
            FUN_146b9cbf0(&local_160,uVar17);
          }
        }
        else {
LAB_146b9c96d:
          iVar7 = FUN_146b9cc7c(param_2,iVar27,iVar18);
          lVar10 = (longlong)iVar27 * 0x20;
          lVar13 = (longlong)iVar18 * 0x20;
          lVar19 = (longlong)iVar7 * 0x20;
          pdVar11 = (double *)((longlong)local_128 + lVar19);
          dVar3 = *(double *)((longlong)local_128 + lVar10 + 0x18);
          dVar4 = *(double *)((longlong)local_128 + lVar13 + 0x18);
          dVar30 = *(double *)((longlong)local_128 + lVar13 + 0x10) * dVar4 +
                   *(double *)((longlong)local_128 + lVar10 + 0x10) * dVar3;
          dVar31 = *(double *)((longlong)local_128 + lVar13 + 8) * dVar4 +
                   *(double *)((longlong)local_128 + lVar10 + 8) * dVar3;
          dVar32 = *(double *)((longlong)local_128 + lVar13) * dVar4 +
                   *(double *)((longlong)local_128 + lVar10) * dVar3;
          *(double *)((longlong)local_128 + lVar19) = dVar32;
          *(double *)((longlong)local_128 + lVar19 + 8) = dVar31;
          *(double *)((longlong)local_128 + lVar19 + 0x10) = dVar30;
          dVar33 = dVar30 * dVar30 + dVar32 * dVar32 + dVar31 * dVar31;
          if (9.99999993922529e-09 < dVar33) {
            dVar33 = 1.0 / SQRT(dVar33);
            *pdVar11 = dVar32 * dVar33;
            pdVar11[1] = dVar31 * dVar33;
            pdVar11[2] = dVar30 * dVar33;
          }
          pdVar11[3] = dVar3 + dVar4;
          if (iVar21 <= *(int *)(pdVar8 + 2)) break;
          iVar21 = iVar21 + -1;
        }
      } while (0 < local_140);
    }
  }
  FUN_146b9cd14(&local_160);
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b9cae0 FUN_146b9cae0 body=271 status=ok
// SIG undefined FUN_146b9cae0(void)

void FUN_146b9cae0(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar4 = param_3[2] - param_2[2];
  dVar8 = param_3[1] - param_2[1];
  dVar6 = *param_3 - *param_2;
  dVar7 = param_4[2] - param_2[2];
  dVar3 = param_4[1] - param_2[1];
  dVar1 = *param_4 - *param_2;
  dVar2 = dVar1 * dVar8 - dVar6 * dVar3;
  dVar6 = dVar7 * dVar6 - dVar4 * dVar1;
  dVar3 = dVar3 * dVar4 - dVar7 * dVar8;
  dVar5 = SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar6 * dVar6);
  dVar4 = 0.0;
  dVar8 = 0.0;
  dVar7 = 0.0;
  dVar1 = 0.0;
  if (0.0 < dVar5) {
    dVar7 = 1.0 / dVar5;
    dVar4 = dVar3 * dVar7;
    dVar8 = dVar6 * dVar7;
    dVar7 = dVar2 * dVar7;
    dVar1 = dVar5 * 0.5;
  }
  *param_1 = dVar4;
  param_1[1] = dVar8;
  param_1[2] = dVar7;
  *param_5 = dVar1;
  return;
}



// FUNCTION 146b9cbf0 FUN_146b9cbf0 body=138 status=ok
// SIG undefined FUN_146b9cbf0(void)

void FUN_146b9cbf0(longlong param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = *(int *)(param_1 + 0x20) + 1;
  *(int *)(param_1 + 0x20) = local_14;
  *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 4) = local_14;
  local_1c = param_2;
  local_18 = param_3;
  FUN_146bd23d8(param_1 + 8,&local_1c,*(undefined4 *)(param_1 + 0x20));
  FUN_146bd243e(param_1,*(undefined4 *)
                         (*(longlong *)
                           (*(longlong *)(param_1 + 0x10) +
                           (ulonglong)(*(uint *)(param_1 + 0x20) >> 9) * 8) + 8 +
                         (ulonglong)(*(uint *)(param_1 + 0x20) & 0x1ff) * 0xc));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9cc7c FUN_146b9cc7c body=152 status=ok
// SIG undefined FUN_146b9cc7c(void)

void FUN_146b9cc7c(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2;
  iVar4 = *(int *)(lVar1 + lVar3 * 4);
  if (iVar4 != param_2) {
    piVar2 = (int *)(lVar1 + lVar3 * 4);
    do {
      *piVar2 = *(int *)(lVar1 + (longlong)iVar4 * 4);
      lVar1 = *param_1;
      param_2 = *(int *)(lVar1 + lVar3 * 4);
      lVar3 = (longlong)param_2;
      piVar2 = (int *)(lVar1 + lVar3 * 4);
      iVar4 = *piVar2;
    } while (iVar4 != param_2);
  }
  lVar5 = (longlong)param_3;
  iVar4 = *(int *)(lVar1 + lVar5 * 4);
  if (iVar4 != param_3) {
    piVar2 = (int *)(lVar1 + lVar5 * 4);
    do {
      *piVar2 = *(int *)(lVar1 + (longlong)iVar4 * 4);
      lVar1 = *param_1;
      param_3 = *(int *)(lVar1 + lVar5 * 4);
      lVar5 = (longlong)param_3;
      piVar2 = (int *)(lVar1 + lVar5 * 4);
      iVar4 = *piVar2;
    } while (iVar4 != param_3);
  }
  if (param_2 != param_3) {
    iVar4 = param_2;
    if (*(int *)(param_1[2] + lVar3 * 4) <= *(int *)(param_1[2] + lVar5 * 4)) {
      iVar4 = param_3;
      param_3 = param_2;
    }
    *(int *)(lVar1 + (longlong)param_3 * 4) = iVar4;
    piVar2 = (int *)(param_1[2] + (longlong)iVar4 * 4);
    *piVar2 = *piVar2 + *(int *)(param_1[2] + (longlong)param_3 * 4);
  }
  return;
}



// FUNCTION 146b9cd14 FUN_146b9cd14 body=59 status=ok
// SIG undefined FUN_146b9cd14(void)

void FUN_146b9cd14(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_146bd29b2(param_1 + 0x10,0);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b9cd4f FUN_146b9cd4f body=630 status=ok
// SIG undefined FUN_146b9cd4f(void)

void FUN_146b9cd4f(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  longlong local_98 [9];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  FUN_146b9c2b3(param_1,local_98 + 4);
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  uVar3 = FUN_146b9cfc8(local_98 + 4,local_98 + 2,local_98,1);
  FUN_140bfc200(param_2,uVar3,1);
  if (0 < (int)uVar3) {
    uVar11 = 0;
    do {
      iVar1 = *(int *)(local_98[2] + uVar11 * 4);
      lVar4 = (longlong)iVar1;
      iVar5 = *(int *)(local_98[4] + lVar4 * 4);
      if (iVar5 != iVar1) {
        piVar9 = (int *)(local_98[4] + lVar4 * 4);
        do {
          *piVar9 = *(int *)(local_98[4] + (longlong)iVar5 * 4);
          iVar1 = *(int *)(local_98[4] + lVar4 * 4);
          lVar4 = (longlong)iVar1;
          piVar9 = (int *)(local_98[4] + lVar4 * 4);
          iVar5 = *piVar9;
        } while (iVar5 != iVar1);
      }
      iVar1 = *(int *)(local_98[6] + lVar4 * 4);
      if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar1);
      }
      if (*(int *)(uVar11 * 0x10 + *param_2 + 0xc) < iVar1) {
        FUN_14481578e();
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar3);
  }
  uVar7 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar3 = 0;
  if ((uVar7 != 0) &&
     (uVar3 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar7) {
      uVar12 = uVar7;
    }
    do {
      uVar3 = uVar12;
      if (uVar12 == uVar13) break;
      uVar6 = uVar13 >> 9;
      uVar8 = uVar13 & 0x1ff;
      uVar3 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar6] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  do {
    if (uVar3 == uVar7) {
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (local_98[2] != 0) {
        FUN_1400020a8();
      }
      if (local_98[6] != 0) {
        FUN_1400020a8();
      }
      if (local_98[4] != 0) {
        FUN_1400020a8();
      }
      if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar4 = (longlong)(int)uVar3;
    uVar12 = *(uint *)(local_98[4] + lVar4 * 4);
    if (uVar12 != uVar3) {
      puVar10 = (uint *)(local_98[4] + lVar4 * 4);
      do {
        *puVar10 = *(uint *)(local_98[4] + (longlong)(int)uVar12 * 4);
        uVar13 = *(uint *)(local_98[4] + lVar4 * 4);
        lVar4 = (longlong)(int)uVar13;
        puVar10 = (uint *)(local_98[4] + lVar4 * 4);
        uVar12 = *puVar10;
      } while (uVar12 != uVar13);
    }
    lVar2 = *param_2;
    lVar4 = (longlong)*(int *)(local_98[0] + lVar4 * 4) * 0x10;
    iVar1 = *(int *)(lVar2 + 8 + lVar4);
    *(uint *)(lVar2 + 8 + lVar4) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0xc + lVar4) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(lVar2 + lVar4),iVar1);
    }
    *(uint *)(*(longlong *)(lVar2 + lVar4) + (longlong)iVar1 * 4) = uVar3;
    uVar12 = uVar3 + 1;
    if ((int)(uVar3 + 1) < (int)uVar7) {
      uVar12 = uVar7;
    }
    uVar13 = uVar3;
    do {
      uVar3 = uVar12;
      if (uVar12 - 1 == uVar13) break;
      uVar3 = uVar13 + 1;
      uVar13 = uVar3;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x148) +
                                           (ulonglong)(uVar3 >> 9) * 8) +
                                         (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 146b9cfc8 FUN_146b9cfc8 body=362 status=ok
// SIG undefined FUN_146b9cfc8(void)

int FUN_146b9cfc8(longlong *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  uint *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = 1;
  if (1 < param_4) {
    local_5c = param_4;
  }
  uVar1 = *(uint *)(param_1 + 3);
  local_58 = param_3;
  if ((param_2 != (longlong *)0x0) &&
     (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) < 0)) {
    FUN_14481578e(param_2,0);
  }
  if (local_58 != (longlong *)0x0) {
    local_4c = 0xffffffff;
    FUN_1448156a8(local_58,&local_4c,(ulonglong)uVar1);
  }
  if ((int)uVar1 < 1) {
    iVar7 = 0;
  }
  else {
    uVar12 = 0;
    iVar7 = 0;
    plVar8 = local_58;
    iVar10 = local_5c;
    do {
      lVar4 = *param_1;
      uVar6 = (ulonglong)*(uint *)(lVar4 + uVar12 * 4);
      if (uVar6 != 0xffffffff) {
        uVar11 = uVar12 & 0xffffffff;
        uVar5 = uVar12;
        if (uVar12 != uVar6) {
          puVar9 = (uint *)(lVar4 + uVar12 * 4);
          do {
            *puVar9 = *(uint *)(lVar4 + (longlong)(int)uVar6 * 4);
            lVar4 = *param_1;
            uVar2 = *(uint *)(lVar4 + uVar5 * 4);
            uVar11 = (ulonglong)uVar2;
            uVar5 = (ulonglong)(int)uVar2;
            puVar9 = (uint *)(lVar4 + uVar5 * 4);
            uVar6 = (ulonglong)*puVar9;
          } while (*puVar9 != uVar2);
        }
        if ((uVar12 == uVar11) && (iVar10 <= *(int *)(param_1[2] + uVar5 * 4))) {
          if (param_2 != (longlong *)0x0) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_1446f48e2(param_2,iVar3);
              plVar8 = local_58;
              iVar10 = local_5c;
            }
            *(int *)(*param_2 + (longlong)iVar3 * 4) = (int)uVar11;
          }
          if (plVar8 != (longlong *)0x0) {
            *(int *)(*plVar8 + uVar12 * 4) = iVar7;
          }
          iVar7 = iVar7 + 1;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9d133 FUN_146b9d133 body=532 status=ok
// SIG undefined FUN_146b9d133(void)

void FUN_146b9d133(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  uint local_ac;
  int *local_a8;
  longlong *local_a0;
  longlong *local_98;
  code *local_90;
  int **local_88;
  int local_7c;
  longlong local_78 [5];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_b8 = param_2;
  FUN_146b9c2b3(0,local_78);
  uVar4 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  uVar6 = 0;
  if ((uVar4 != 0) &&
     (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
    uVar7 = 1;
    uVar2 = 1;
    if (1 < (int)uVar4) {
      uVar7 = uVar4;
    }
    do {
      uVar6 = uVar7;
      if (uVar7 == uVar2) break;
      uVar3 = uVar2 >> 9;
      uVar5 = uVar2 & 0x1ff;
      uVar6 = uVar2;
      uVar2 = uVar2 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar3] +
                                         (ulonglong)uVar5 * 2) - 1U));
  }
  if (uVar6 != uVar4) {
    local_ac = uVar4;
    do {
      local_50 = 0xffffffff;
      local_78[4] = 0xffffffffffffffff;
      local_7c = 0;
      local_90 = FUN_14296c6a4;
      local_a8 = &local_7c;
      local_a0 = local_78;
      local_98 = local_78 + 4;
      local_88 = &local_a8;
      FUN_146c03fd0(param_1,uVar6,&local_90);
      if (2 < local_7c) {
        iVar1 = (int)local_b8[1];
        *(uint *)(local_b8 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)local_b8 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(local_b8,iVar1);
        }
        *(uint *)(*local_b8 + (longlong)iVar1 * 4) = uVar6;
        uVar4 = local_ac;
      }
      uVar7 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar4) {
        uVar7 = uVar4;
      }
      do {
        uVar2 = uVar7;
        if (uVar7 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar2 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x28) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      uVar6 = uVar2;
    } while (uVar6 != uVar4);
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b9d348 FUN_146b9d348 body=1749 status=ok
// SIG undefined FUN_146b9d348(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146b9d348(longlong param_1,undefined1 (*param_2) [16],double param_3,double *param_4,
                  undefined8 *param_5)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  ulonglong uVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar17;
  double dVar15;
  undefined4 uVar18;
  double dVar16;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  uint uVar23;
  double dVar24;
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  longlong local_100;
  char local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  double *local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 == (double *)0x0) {
LAB_146b9d5a3:
    cVar11 = '\0';
LAB_146b9d5a5:
    if ((param_5 != (undefined8 *)0x0) ||
       (dVar15 = *(double *)(param_1 + 0x2a0) - *(double *)(param_1 + 0x288),
       dVar19 = *(double *)(param_1 + 0x2a8) - *(double *)(param_1 + 0x290),
       dVar4 = *(double *)(param_1 + 0x2b0) - *(double *)(param_1 + 0x298),
       dVar15 = SQRT(dVar4 * dVar4 + dVar15 * dVar15 + dVar19 * dVar19) * 0.5 + param_3,
       dVar16 = *(double *)*param_2 -
                (*(double *)(param_1 + 0x2a0) + *(double *)(param_1 + 0x288)) * 0.5,
       dVar4 = *(double *)(*param_2 + 8) -
               (*(double *)(param_1 + 0x2a8) + *(double *)(param_1 + 0x290)) * 0.5,
       dVar19 = *(double *)param_2[1] -
                (*(double *)(param_1 + 0x2b0) + *(double *)(param_1 + 0x298)) * 0.5,
       dVar19 * dVar19 + dVar4 * dVar4 + dVar16 * dVar16 <= dVar15 * dVar15)) {
      local_f0 = *(undefined4 *)*param_2;
      uStack_ec = *(undefined4 *)(*param_2 + 4);
      uStack_e8 = *(undefined4 *)(*param_2 + 8);
      uStack_e4 = *(undefined4 *)(*param_2 + 0xc);
      local_e0 = *(undefined8 *)param_2[1];
      dVar4 = 0.0;
      dVar19 = 0.0;
      local_100 = param_1;
      local_f8 = cVar11;
      local_d8 = param_4;
      if (0 < *(int *)(param_1 + 0x238)) {
        dVar19 = param_3 * param_3;
        lVar13 = 0;
        uVar12 = 0;
        bVar9 = false;
        do {
          pdVar1 = (double *)(*(longlong *)(param_1 + 0x230) + lVar13);
          local_128 = *pdVar1;
          dStack_120 = pdVar1[1];
          pdVar1 = (double *)(*(longlong *)(param_1 + 0x230) + 0x10 + lVar13);
          local_118 = *pdVar1;
          dStack_110 = pdVar1[1];
          uVar14 = SUB84(local_128,0);
          uVar17 = (undefined4)((ulonglong)local_128 >> 0x20);
          if (((((local_128 != DAT_14c8464e0) || (NAN(local_128) || NAN(DAT_14c8464e0))) ||
               (dStack_120 != DAT_14c8464e8)) ||
              ((NAN(dStack_120) || NAN(DAT_14c8464e8) || (local_118 != DAT_14c8464f0)))) ||
             (NAN(local_118) || NAN(DAT_14c8464f0))) {
            if (cVar11 != '\0') {
              FUN_146b9da1e(&local_128,param_4);
              uVar14 = SUB84(local_128,0);
              uVar17 = (undefined4)((ulonglong)local_128 >> 0x20);
            }
            dVar15 = (local_118 * *(double *)param_2[1] +
                     (double)CONCAT44(uVar17,uVar14) * *(double *)*param_2 +
                     dStack_120 * *(double *)(*param_2 + 8)) - dStack_110;
            if (param_3 < dVar15) goto LAB_146b9d845;
            if (dVar4 <= dVar15) {
              dVar4 = dVar15;
            }
            dVar16 = dVar19;
            if (0.0 < param_3) {
              dVar20 = 0.0;
              if (0.0 <= dVar4 + -1e-08) {
                dVar20 = dVar4 + -1e-08;
              }
              if (dVar20 < dVar15) {
                dVar15 = (double)FUN_14295d06c(&local_100,uVar12 & 0xffffffff);
                bVar9 = (bool)(dVar15 < dVar19 | bVar9);
                dVar16 = dVar15;
                if (dVar19 <= dVar15) {
                  dVar16 = dVar19;
                }
                if ((param_5 == (undefined8 *)0x0) && (dVar15 < dVar19)) goto LAB_146b9da0a;
              }
            }
            uVar14 = SUB84(dVar16,0);
            dVar16 = (double)((ulonglong)dVar16 & 0xffffffff00000000);
          }
          else {
            dVar15 = (double)FUN_14295d06c(&local_100,uVar12 & 0xffffffff);
            if ((param_5 == (undefined8 *)0x0) && (dVar15 < dVar19)) goto LAB_146b9da0a;
            dVar16 = dVar15;
            if (dVar19 <= dVar15) {
              dVar16 = dVar19;
            }
            uVar14 = SUB84(dVar16,0);
            bVar9 = (bool)(bVar9 | dVar15 < dVar19);
          }
          uVar23 = (uint)((ulonglong)dVar16 >> 0x20);
          dVar19 = (double)CONCAT44(uVar23,uVar14);
          uVar12 = uVar12 + 1;
          uVar10 = (ulonglong)*(int *)(param_1 + 0x238);
          lVar13 = lVar13 + 0x20;
        } while ((longlong)uVar12 < (longlong)uVar10);
        dVar19 = 0.0;
        if (0 < *(int *)(param_1 + 0x238) && 0.0 < dVar4) {
          lVar13 = 0;
          uVar12 = 0;
          do {
            pdVar1 = (double *)(*(longlong *)(param_1 + 0x230) + lVar13);
            local_128 = *pdVar1;
            dStack_120 = pdVar1[1];
            pdVar1 = (double *)(*(longlong *)(param_1 + 0x230) + 0x10 + lVar13);
            local_118 = *pdVar1;
            dStack_110 = pdVar1[1];
            uVar17 = SUB84(local_128,0);
            uVar18 = (undefined4)((ulonglong)local_128 >> 0x20);
            if ((((local_128 != DAT_14c8464e0) || (NAN(local_128) || NAN(DAT_14c8464e0))) ||
                (dStack_120 != DAT_14c8464e8)) || (NAN(dStack_120) || NAN(DAT_14c8464e8))) {
LAB_146b9d930:
              if (cVar11 != '\0') {
                FUN_146b9da1e(&local_128,param_4);
                uVar17 = SUB84(local_128,0);
                uVar18 = (undefined4)((ulonglong)local_128 >> 0x20);
              }
              dVar15 = (local_118 * *(double *)param_2[1] +
                       (double)CONCAT44(uVar18,uVar17) * *(double *)*param_2 +
                       dStack_120 * *(double *)(*param_2 + 8)) - dStack_110;
              if (dVar19 <= dVar15) {
                dVar19 = dVar15;
              }
              dVar16 = 0.0;
              if (0.0 <= dVar19 + -1e-08) {
                dVar16 = dVar19 + -1e-08;
              }
              if (dVar15 <= dVar16) {
                dVar16 = (double)FUN_14295d06c(&local_100,uVar12 & 0xffffffff);
                bVar9 = (bool)((dVar16 <= (double)CONCAT44(uVar23,uVar14) &&
                               (double)CONCAT44(uVar23,uVar14) != dVar16) | bVar9);
                dVar15 = dVar16;
                if ((double)CONCAT44(uVar23,uVar14) <= dVar16) {
                  dVar15 = (double)CONCAT44(uVar23,uVar14);
                }
                if ((param_5 == (undefined8 *)0x0) &&
                   (dVar16 <= (double)CONCAT44(uVar23,uVar14) &&
                    (double)CONCAT44(uVar23,uVar14) != dVar16)) goto LAB_146b9da0a;
              }
              else {
                dVar15 = (double)CONCAT44(uVar23,uVar14);
              }
              uVar10 = (ulonglong)*(uint *)(param_1 + 0x238);
              uVar14 = SUB84(dVar15,0);
              uVar23 = (uint)((ulonglong)dVar15 >> 0x20);
            }
            else if ((local_118 != DAT_14c8464f0) || (NAN(local_118) || NAN(DAT_14c8464f0)))
            goto LAB_146b9d930;
            dVar16 = (double)((ulonglong)uVar23 << 0x20);
            uVar12 = uVar12 + 1;
            lVar13 = lVar13 + 0x20;
          } while ((longlong)uVar12 < (longlong)(int)uVar10);
        }
        dVar19 = dVar4;
        if ((param_5 != (undefined8 *)0x0) && (bVar9)) {
          *param_5 = CONCAT44((int)((ulonglong)dVar16 >> 0x20),uVar14);
LAB_146b9da0a:
          bVar9 = true;
          goto LAB_146b9d847;
        }
      }
      bVar9 = dVar19 <= 0.0;
      goto LAB_146b9d847;
    }
  }
  else {
    auVar2 = *(undefined1 (*) [16])(param_4 + 8);
    dVar4 = auVar2._0_8_;
    cVar11 = '\x01';
    if (((9.999999747378752e-05 < ABS(dVar4 - param_4[9])) ||
        (dVar19 = param_4[10], 9.999999747378752e-05 < ABS(dVar4 - dVar19))) ||
       (9.999999747378752e-05 < ABS(param_4[9] - dVar19))) goto LAB_146b9d5a5;
    if ((dVar4 != 0.0) || (NAN(dVar4))) {
      param_3 = ABS(param_3 / dVar4);
      dVar3 = *(double *)*param_2 - param_4[4];
      dVar15 = *(double *)(*param_2 + 8) - param_4[5];
      dVar21 = *(double *)param_2[1] - param_4[6];
      dVar16 = param_4[2] * -1.0;
      dVar20 = param_4[3] * 1.0;
      dVar5 = -*param_4;
      dVar6 = -param_4[1];
      dVar24 = dVar3 * dVar16 - dVar5 * dVar21;
      dVar7 = dVar15 * dVar5 - dVar3 * dVar6;
      dVar8 = dVar21 * dVar6 - dVar15 * dVar16;
      dVar8 = dVar8 + dVar8;
      dVar24 = dVar24 + dVar24;
      dVar7 = dVar7 + dVar7;
      auVar22 = divpd(_DAT_149934d80,auVar2);
      dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar22._8_8_) *
               (*param_4 * dVar7 + dVar16 * dVar8 + dVar20 * dVar24 + dVar15);
      auVar2._8_4_ = SUB84(dVar15,0);
      auVar2._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar4)) & auVar22._0_8_) *
                     ((dVar7 * dVar6 - dVar24 * dVar16) + dVar20 * dVar8 + dVar3);
      auVar2._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      *param_2 = auVar2;
      *(double *)param_2[1] =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar19)) & (ulonglong)(1.0 / dVar19)) *
           (dVar20 * dVar7 + dVar21 + (dVar24 * dVar5 - dVar8 * dVar6));
      goto LAB_146b9d5a3;
    }
  }
LAB_146b9d845:
  bVar9 = false;
LAB_146b9d847:
  if ((local_d0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 146b9da1e FUN_146b9da1e body=406 status=ok
// SIG undefined FUN_146b9da1e(void)

void FUN_146b9da1e(double *param_1,double *param_2)

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
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = param_1[3];
  dVar6 = dVar1 * *param_1 * param_2[8];
  dVar7 = param_1[1] * dVar1 * param_2[9];
  dVar11 = param_1[2] * dVar1 * param_2[10];
  dVar8 = *param_2;
  dVar9 = param_2[1];
  dVar10 = param_2[2];
  dVar1 = param_2[3];
  dVar2 = param_2[3];
  dVar12 = dVar7 * dVar8 - dVar6 * dVar9;
  dVar13 = dVar11 * dVar9 - dVar7 * dVar10;
  dVar14 = dVar6 * dVar10 - dVar8 * dVar11;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar12 + dVar12;
  dVar4 = param_2[4];
  dVar5 = param_2[5];
  dVar3 = param_2[6];
  FUN_146bed2a4(&local_78,dVar11,param_1);
  param_1[2] = local_68;
  *param_1 = local_78;
  param_1[1] = dStack_70;
  param_1[3] = (dVar12 * dVar1 + dVar11 + (dVar14 * dVar8 - dVar13 * dVar9) + dVar3) * param_1[2] +
               *param_1 * ((dVar12 * dVar9 - dVar14 * dVar10) + dVar1 * dVar13 + dVar6 + dVar4) +
               ((dVar10 * dVar13 - dVar8 * dVar12) + dVar2 * dVar14 + dVar7 + dVar5) * param_1[1];
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9dbb6 FUN_146b9dbb6 body=9584 status=ok
// SIG undefined FUN_146b9dbb6(void)

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_146b9dbb6(code ******param_1,code ******param_2,code ******param_3,char param_4)

{
  code ****ppppcVar1;
  double dVar2;
  code *****pppppcVar3;
  code ******ppppppcVar4;
  byte bVar5;
  double dVar6;
  double dVar7;
  undefined **ppuVar8;
  longlong lVar9;
  code ******ppppppcVar10;
  code *******pppppppcVar11;
  code ******ppppppcVar12;
  undefined1 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  code *******pppppppcVar16;
  code ******ppppppcVar17;
  code ******ppppppcVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  int *piVar22;
  ulonglong uVar23;
  uint uVar24;
  code ******ppppppcVar25;
  uint *puVar26;
  int *piVar27;
  longlong lVar28;
  int *piVar29;
  code *******pppppppcVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int *piVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  int *piVar40;
  longlong lVar41;
  double *pdVar42;
  bool bVar43;
  ulonglong uVar44;
  undefined4 uVar45;
  float fVar46;
  undefined4 uVar47;
  double dVar48;
  code *****pppppcVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auStack_d18 [32];
  undefined4 local_cf8;
  code ******local_cf0;
  code ******local_ce8;
  code ******local_ce0;
  double local_cd8;
  double local_cd0;
  int local_cc4;
  uint *local_cc0;
  int local_cb4;
  code ******local_cb0;
  double local_ca8;
  undefined8 uStack_ca0;
  undefined4 local_c98;
  undefined4 uStack_c94;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  code ******local_c88;
  undefined4 local_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  code ******local_c68;
  code *******local_c58;
  uint local_c50;
  double local_c48;
  undefined4 local_c40;
  double local_c38;
  double dStack_c30;
  code *****local_c28;
  undefined8 uStack_c20;
  undefined1 *local_c18;
  undefined8 *local_c10;
  code *****local_c08;
  undefined4 local_c00;
  double local_bf8;
  double dStack_bf0;
  double local_be8;
  code *******local_bd8;
  undefined8 uStack_bd0;
  code *****local_bc8;
  undefined8 uStack_bc0;
  code ******local_bb8;
  undefined1 *local_bb0;
  undefined1 *local_ba8;
  undefined8 *local_ba0;
  undefined1 *local_b98;
  undefined8 *local_b90;
  undefined1 local_b88 [8];
  undefined8 local_b80;
  undefined4 local_b78;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 local_b60;
  code ******local_b50;
  double dStack_b48;
  double local_b40;
  undefined4 local_b38;
  undefined4 uStack_b34;
  undefined4 uStack_b30;
  undefined4 uStack_b2c;
  undefined8 local_b28;
  undefined4 local_b00;
  uint *local_af8;
  undefined8 uStack_af0;
  longlong local_ae8;
  undefined8 uStack_ae0;
  code ******local_ad8;
  double local_ad0;
  double local_ac8;
  double local_ac0;
  double local_ab8;
  double local_ab0;
  double local_aa8;
  undefined1 local_a99;
  code *******local_a98;
  code ******ppppppcStack_a90;
  code ******local_a88;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  int local_a78;
  int iStack_a74;
  undefined4 uStack_a70;
  undefined4 uStack_a6c;
  code *******local_a68;
  code ******ppppppcStack_a60;
  code ******local_a58;
  undefined1 local_9e0 [136];
  int local_958;
  int local_954;
  undefined8 *local_950;
  double adStack_888 [2];
  undefined8 local_878;
  undefined8 uStack_870;
  code ******local_868;
  undefined8 local_860;
  undefined8 uStack_858;
  code ******local_850;
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  code ******local_838;
  undefined8 local_828;
  undefined8 uStack_820;
  code *****local_818;
  code *******local_788;
  code ******ppppppcStack_780;
  code ******local_778;
  code ******ppppppcStack_770;
  code *******local_768;
  code ******ppppppcStack_760;
  code *******local_758;
  code ******ppppppcStack_750;
  undefined8 local_748;
  double local_740;
  double local_738;
  double local_730;
  double local_728;
  double local_720;
  double local_718;
  double local_710;
  undefined1 local_708;
  undefined1 local_707;
  undefined4 local_704;
  undefined8 local_700;
  code *local_6f8;
  undefined8 local_6e8;
  undefined **local_6d8;
  undefined1 *local_6d0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined4 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined4 uStack_630;
  undefined4 local_62c;
  undefined4 uStack_628;
  undefined8 uStack_624;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined1 local_5f8;
  undefined8 local_5f0;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined8 uStack_5dc;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined4 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined ***local_558;
  longlong local_550 [4];
  longlong local_530;
  undefined4 local_528;
  undefined8 local_524;
  undefined4 local_51c;
  longlong local_510;
  undefined4 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined **local_4e8;
  code ******local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined1 *local_4c8;
  undefined8 local_4b8;
  undefined **local_4a8;
  undefined1 *local_4a0;
  undefined8 local_488;
  undefined1 local_468 [8];
  longlong local_460;
  undefined1 local_450 [8];
  longlong local_448;
  undefined1 local_438 [24];
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  code ******local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  code *******local_3e8;
  code ******ppppppcStack_3e0;
  code ******local_3d8;
  undefined1 local_3c8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_d18;
  local_a99 = 0;
  FUN_146ba0128(*param_2,&local_ad0);
  if (param_4 == '\0') {
    uVar37 = 0x3ff00000;
  }
  else {
    uVar37 = 0xbff00000;
  }
  local_ce0 = (code ******)((ulonglong)uVar37 << 0x20);
  local_cf0 = param_3;
  local_cb0 = param_1;
  if (*(byte *)param_3 == 0) {
    dVar50 = (double)param_3[4] + (double)param_3[3];
    local_ab8 = local_ab8 + dVar50;
    local_ab0 = local_ab0 + dVar50;
    local_aa8 = local_aa8 + dVar50;
    local_ad0 = local_ad0 - dVar50;
    local_ac8 = local_ac8 - dVar50;
    local_ac0 = local_ac0 - dVar50;
    dVar2 = local_aa8 - local_ac0;
    dVar48 = (double)(-(ulonglong)(0.0 <= dVar2) & (ulonglong)dVar2);
    dVar7 = local_ab0 - local_ac8;
    dVar50 = (double)(-(ulonglong)(0.0 <= dVar7) & (ulonglong)dVar7);
    uVar44 = -(ulonglong)(dVar48 <= dVar50);
    dVar51 = (double)(~uVar44 & (ulonglong)dVar48 | uVar44 & (ulonglong)dVar50);
    dVar48 = local_ab8 - local_ad0;
    dVar50 = (double)(-(ulonglong)(0.0 <= dVar48) & (ulonglong)dVar48);
    uVar44 = -(ulonglong)(dVar51 <= dVar50);
    pppppcVar49 = (code *****)
                  ((double)(uVar44 & (ulonglong)dVar50 | ~uVar44 & (ulonglong)dVar51) /
                  (double)*(int *)((longlong)param_3 + 4));
    pppppcVar3 = param_3[1];
    if ((double)param_3[1] <= (double)pppppcVar49) {
      pppppcVar3 = pppppcVar49;
    }
    if (((double)pppppcVar3 != 0.0) || (NAN((double)pppppcVar3))) {
      iVar34 = (int)(dVar2 / (double)pppppcVar3);
      if ((int)(dVar2 / (double)pppppcVar3) < 2) {
        iVar34 = 1;
      }
      iVar35 = (int)(dVar7 / (double)pppppcVar3);
      if ((int)(dVar7 / (double)pppppcVar3) < 2) {
        iVar35 = 1;
      }
      iVar31 = (int)(dVar48 / (double)pppppcVar3);
      iVar32 = 1;
      if (iVar31 < 2) {
        iVar31 = 1;
      }
      dVar50 = pow((double)*(int *)((longlong)param_3 + 4) / (double)(iVar31 * iVar35 * iVar34),
                   0.3333333333333333);
      uVar45 = 0;
      uVar47 = 0x3ff00000;
      if (dVar50 <= 1.0) {
        uVar45 = SUB84(dVar50,0);
        uVar47 = (undefined4)((ulonglong)dVar50 >> 0x20);
      }
      dVar50 = (double)iVar31 * (double)CONCAT44(uVar47,uVar45);
      local_cc4 = -((int)ROUND(-0.5 - (dVar50 + dVar50)) >> 1);
      if (local_cc4 < 2) {
        local_cc4 = iVar32;
      }
      dVar50 = (double)iVar35 * (double)CONCAT44(uVar47,uVar45);
      iVar35 = -((int)ROUND(-0.5 - (dVar50 + dVar50)) >> 1);
      if (iVar35 < 2) {
        iVar35 = iVar32;
      }
      dVar50 = (double)iVar34 * (double)CONCAT44(uVar47,uVar45);
      iVar34 = -((int)ROUND(-0.5 - (dVar50 + dVar50)) >> 1);
      if (iVar34 < 2) {
        iVar34 = iVar32;
      }
      local_cd0 = (double)CONCAT44(local_cd0._4_4_,iVar35);
      local_cd8 = (double)CONCAT44(local_cd8._4_4_,iVar34);
      iVar34 = iVar35 * local_cc4 * iVar34;
      iVar35 = *(int *)(param_1 + 1) + iVar34;
      if (iVar35 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar35);
      }
      if (*(int *)((longlong)param_1 + 0xc) < iVar35) {
        FUN_1447a8aa0(param_1);
      }
      ppppppcVar25 = local_cf0;
      iVar34 = iVar34 + *(int *)(param_1 + 3);
      if (iVar34 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar34);
      }
      dVar50 = (double)local_cd8._0_4_;
      dVar51 = (double)local_cd0._0_4_;
      dVar53 = (double)local_cc4;
      local_ce8 = param_1 + 2;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar34) {
        FUN_140cb0586(local_ce8,iVar34);
      }
      local_ca8 = dVar48 * (1.0 / dVar53);
      puVar26 = (uint *)0x0;
      uStack_ca0 = 0;
      ppppppcVar18 = local_ce0;
      iVar34 = 0;
      do {
        local_cb4 = iVar34;
        ppuVar8 = (undefined **)(((double)puVar26 + 0.5) * local_ca8 + local_ad0);
        dVar48 = 0.0;
        iVar34 = 0;
        local_cc0 = puVar26;
        do {
          dVar6 = (dVar48 + 0.5) * dVar7 * (1.0 / dVar51) + local_ac8;
          dVar53 = 0.0;
          iVar35 = local_cd8._0_4_;
          do {
            local_818 = (code *****)((dVar53 + 0.5) * dVar2 * (1.0 / dVar50) + local_ac0);
            local_828 = ppuVar8;
            uStack_820 = dVar6;
            local_418 = (code *******)ppuVar8;
            uStack_410 = (code ******)dVar6;
            local_408 = (code ******)local_818;
            dVar55 = (double)FUN_146bed438(param_2,*(undefined4 *)((longlong)*param_2 + 0xcc),
                                           &local_418);
            if (dVar55 * (double)ppppppcVar18 <= 0.5) {
              local_418 = (code *******)0x7fefffffffffffff;
              local_408 = (code ******)0x0;
              local_3f8 = (code *******)0x0;
              local_3c8 = 0;
              (*(code *)(**param_2)[4])(*param_2,&local_828,&local_a98,&local_418);
              if (local_408 != (code ******)0x0) {
                pppppppcVar16 = local_3f8;
                if (local_3f8 == (code *******)0x0) {
                  pppppppcVar16 = (code *******)&local_3e8;
                }
                (*(code *)(*pppppppcVar16)[2])();
              }
              uVar45 = SUB84(local_a98,0);
              if ((double)local_a98 < 0.0) {
                dVar55 = sqrt((double)local_a98);
                uVar45 = SUB84(dVar55,0);
              }
              if (ppppppcVar25[10] != (code *****)0x0) {
                FUN_146ba0218(uVar45,&local_828);
              }
              if ((double)local_a98 < 0.0) {
                dVar55 = sqrt((double)local_a98);
              }
              else {
                dVar55 = SQRT((double)local_a98);
              }
              ppppppcVar17 = local_cb0;
              pppppcVar3 = ppppppcVar25[3];
              ppppppcVar18 = local_ce0;
              if ((double)ppppppcVar25[4] <= dVar55 - (double)pppppcVar3) {
                local_a99 = 1;
                iVar31 = *(int *)(local_cb0 + 1);
                *(uint *)(local_cb0 + 1) = iVar31 + 1U;
                if (*(uint *)((longlong)local_cb0 + 0xc) < iVar31 + 1U) {
                  FUN_1403e3958(local_cb0,iVar31);
                }
                pppppcVar49 = *ppppppcVar17;
                pppppcVar49[(longlong)iVar31 * 3 + 2] = (code ****)local_818;
                pppppcVar49 = pppppcVar49 + (longlong)iVar31 * 3;
                *(undefined4 *)pppppcVar49 = (undefined4)local_828;
                *(undefined4 *)((longlong)pppppcVar49 + 4) = local_828._4_4_;
                *(undefined4 *)(pppppcVar49 + 1) = (undefined4)uStack_820;
                *(undefined4 *)((longlong)pppppcVar49 + 0xc) = uStack_820._4_4_;
                iVar31 = *(int *)(ppppppcVar17 + 3);
                *(uint *)(ppppppcVar17 + 3) = iVar31 + 1U;
                if (*(uint *)((longlong)ppppppcVar17 + 0x1c) < iVar31 + 1U) {
                  FUN_144941252(local_ce8,iVar31);
                }
                (*local_ce8)[iVar31] = (code ****)(dVar55 - (double)pppppcVar3);
                ppppppcVar25 = local_cf0;
                ppppppcVar18 = local_ce0;
              }
            }
            dVar53 = dVar53 + 1.0;
            iVar35 = iVar35 + -1;
          } while (iVar35 != 0);
          dVar48 = dVar48 + 1.0;
          iVar34 = iVar34 + 1;
        } while (iVar34 != local_cd0._0_4_);
        puVar26 = (uint *)((double)local_cc0 + 1.0);
        uVar13 = local_a99;
        iVar34 = local_cb4 + 1;
      } while (local_cb4 + 1 != local_cc4);
    }
    else {
      uVar13 = 0;
    }
  }
  else {
    uVar13 = local_a99;
    if (*(byte *)param_3 - 1 < 2) {
      local_ad8 = (code ******)(*param_2)[1];
      local_828 = (undefined **)&local_ad8;
      local_b88[0] = 0;
      local_b80 = 0;
      local_b78 = 0xffffffff;
      local_b70 = 0xffefffffffffffff;
      local_b68 = 0xffefffffffffffff;
      local_b60 = 0;
      local_b50 = DAT_14c8464e0;
      dStack_b48 = DAT_14c8464e8;
      local_b40 = DAT_14c8464f0;
      local_b38 = (undefined4)DAT_14c8463a0;
      uStack_b34 = DAT_14c8463a0._4_4_;
      uStack_b30 = (undefined4)DAT_14c8463a8;
      uStack_b2c = DAT_14c8463a8._4_4_;
      local_b28 = DAT_14c8463b0;
      local_b00 = 0;
      local_af8 = (uint *)0x0;
      uStack_af0 = 0;
      local_ae8 = 0;
      uStack_ae0 = 0;
      local_b90 = &local_418;
      local_b98 = &LAB_14296c750;
      local_ba0 = &local_828;
      local_ba8 = &LAB_14296c71a;
      local_418 = (code *******)local_828;
      FUN_146ba039e(local_b88,*(int *)(local_ad8 + 4) * 0x200 + *(int *)((longlong)local_ad8 + 0x24)
                   );
      local_bb8 = local_ad8;
      local_4e8 = &PTR_FUN_149f36200;
      local_4d8 = 0;
      local_4d0 = 3;
      local_4b8 = 0;
      local_4a8 = &PTR_LAB_149f3aac0;
      local_4a0 = &LAB_14296c78c;
      local_4c8 = &LAB_146beded0;
      local_488 = 0x3e45798ee2308c3a;
      local_bb0 = local_b88;
      FUN_141040b84();
      FUN_141040be6(local_468);
      FUN_141040be6(local_450);
      FUN_141040b84(local_438);
      local_420 = -1;
      local_4d8 = 0;
      local_4e0 = (code ******)&local_bb8;
      FUN_14296c7aa(&local_4e8);
      local_530 = 0;
      local_528 = 0;
      local_550[0] = 0;
      local_550[1] = 0;
      local_524 = 0xffffffff00000080;
      local_51c = 0;
      local_510 = 0;
      local_508 = 0;
      local_500 = 0;
      local_4f8 = 0x4000000000000000;
      local_4f0 = 2;
      local_558 = &local_4e8;
      FUN_14296d806(&local_558);
      lVar39 = local_420;
      ppppppcVar25 = local_cf0;
      uVar37 = local_420._4_4_;
      if (local_420 < 0) {
        dVar7 = 1.79769313486232e+308;
        dVar50 = -1.79769313486232e+308;
        dVar2 = dVar7;
        dVar48 = dVar7;
        dVar51 = dVar50;
        dVar53 = dVar50;
      }
      else {
        lVar28 = *(longlong *)(local_460 + (ulonglong)(local_420._4_4_ >> 9) * 8);
        lVar9 = (ulonglong)((local_420._4_4_ & 0x1ff) << 3) * 3;
        lVar41 = *(longlong *)(local_448 + (ulonglong)(local_420._4_4_ >> 9) * 8);
        dVar50 = *(double *)(lVar28 + 0x10 + lVar9);
        dVar2 = *(double *)(lVar41 + 0x10 + lVar9);
        dVar7 = dVar50 - dVar2;
        dVar51 = *(double *)(lVar28 + 8 + lVar9);
        dVar53 = *(double *)(lVar41 + 8 + lVar9);
        dVar50 = dVar50 + dVar2;
        dVar2 = dVar51 - dVar53;
        dVar48 = *(double *)(lVar28 + lVar9) - *(double *)(lVar41 + lVar9);
        dVar51 = dVar51 + dVar53;
        dVar53 = *(double *)(lVar28 + lVar9) + *(double *)(lVar41 + lVar9);
      }
      dVar6 = (double)local_cf0[9] * (double)local_cf0[0x12];
      memset(&uStack_820,0,0x91);
      local_828 = &PTR_FUN_149f361f0;
      local_788 = (code *******)0x0;
      local_778 = (code ******)0x0;
      local_707 = 1;
      local_704 = 0x1000;
      local_6e8 = 0;
      local_6d8 = &PTR_LAB_149f36510;
      local_6d0 = &LAB_146bd3270;
      local_6f8 = FUN_146bd3274;
      local_6b8 = 0;
      uStack_6b0 = 0x7fffffff00000000;
      local_6a8 = 0x7fffffff7fffffff;
      uStack_6a0 = 0x8000000180000001;
      local_698 = 0x7fffffff80000001;
      uStack_690 = 0x7fffffff7fffffff;
      local_688 = 0x8000000180000001;
      local_680 = 0x80000001;
      local_678 = 0x1000000000000000;
      local_670 = 0x2000000000000000;
      local_668 = 0x4000000000000000;
      local_660 = 0x40;
      uStack_628 = 0;
      uStack_624 = 0;
      uStack_638 = 0;
      uStack_630 = 0;
      local_62c = 0;
      local_648 = 0;
      uStack_640 = 0;
      local_658 = 0;
      uStack_650 = 0;
      local_618 = 0;
      uStack_610 = 0;
      local_608 = 0;
      uStack_600 = 0;
      local_5f8 = 0;
      local_5f0 = 0;
      uStack_5e8 = 0;
      uStack_5e4 = 0;
      uStack_5e0 = 0;
      uStack_5dc = 0;
      local_5d0 = 0;
      uStack_5c8 = 0;
      local_5c0 = 0;
      uStack_5b8 = 0;
      local_5b0 = 0;
      local_5a8 = 0x40;
      local_5a0 = 0;
      uStack_598 = 0;
      local_590 = 0;
      uStack_588 = 0;
      local_580 = 0x40;
      local_578 = 0;
      uStack_570 = 0;
      local_568 = 0;
      uStack_560 = 0;
      local_710 = (double)ppppppcVar25[7] * (double)ppppppcVar25[3];
      dVar52 = (dVar50 + dVar6) - (dVar7 - dVar6);
      dVar52 = (double)(-(ulonglong)(0.0 <= dVar52) & (ulonglong)dVar52);
      dVar54 = (dVar51 + dVar6) - (dVar2 - dVar6);
      dVar54 = (double)(-(ulonglong)(0.0 <= dVar54) & (ulonglong)dVar54);
      dVar56 = (double)(~-(ulonglong)(dVar54 <= dVar52) & (ulonglong)dVar52 |
                       -(ulonglong)(dVar54 <= dVar52) & (ulonglong)dVar54);
      dVar55 = (dVar53 + dVar6) - (dVar48 - dVar6);
      dVar55 = (double)(-(ulonglong)(0.0 <= dVar55) & (ulonglong)dVar55);
      uVar44 = -(ulonglong)(dVar55 <= dVar56);
      dVar56 = (double)(uVar44 & (ulonglong)dVar55 | ~uVar44 & (ulonglong)dVar56) * 0.5;
      if (dVar56 <= local_710) {
        local_710 = dVar56;
      }
      dVar56 = (double)(~-(ulonglong)(dVar52 <= dVar54) & (ulonglong)dVar52 |
                       -(ulonglong)(dVar52 <= dVar54) & (ulonglong)dVar54);
      uVar44 = -(ulonglong)(dVar56 <= dVar55);
      dVar55 = (double)(uVar44 & (ulonglong)dVar55 | ~uVar44 & (ulonglong)dVar56) /
               (double)*(int *)((longlong)ppppppcVar25 + 0x2c);
      if (local_710 <= dVar55) {
        local_710 = dVar55;
      }
      local_700 = 0x500000002;
      local_748 = 0;
      local_708 = 1;
      if (*(byte *)ppppppcVar25 == 1) {
        local_a98 = (code *******)0x0;
        local_a88 = (code ******)0x0;
        local_740 = dVar48 - dVar6;
        local_738 = dVar2 - dVar6;
        local_730 = dVar7 - dVar6;
        local_728 = dVar53 + dVar6;
        local_720 = dVar51 + dVar6;
        local_718 = dVar50 + dVar6;
        puVar14 = (undefined8 *)FUN_14001cc68(0x28,8);
        ppppppcVar4 = ppppppcStack_750;
        pppppppcVar30 = local_758;
        local_a88 = local_778;
        ppppppcVar17 = ppppppcStack_780;
        pppppppcVar16 = local_788;
        ppppppcVar18 = local_ce0;
        *puVar14 = &PTR_FUN_149f36310;
        puVar14[1] = &local_558;
        puVar14[2] = param_2;
        puVar14[3] = local_ce0;
        puVar14[4] = ppppppcVar25;
        if (puVar14 + 1 != (longlong *)0x0) {
          local_a98 = (code *******)FUN_14297003a;
        }
        local_3e8 = local_758;
        ppppppcStack_3e0 = ppppppcStack_750;
        local_3f8 = local_768;
        pppppppcVar11 = local_3f8;
        uStack_3f0 = ppppppcStack_760;
        ppppppcVar12 = uStack_3f0;
        local_408 = local_778;
        uStack_400 = ppppppcStack_770;
        ppppppcVar10 = uStack_400;
        local_418 = local_788;
        uStack_410 = ppppppcStack_780;
        local_758 = local_a68;
        ppppppcStack_750 = ppppppcStack_a60;
        local_778 = (code ******)puVar14;
        local_788 = local_a98;
        ppppppcStack_780 = ppppppcStack_a90;
        uStack_400._0_4_ = SUB84(ppppppcStack_770,0);
        uStack_400._4_4_ = (undefined4)((ulonglong)ppppppcStack_770 >> 0x20);
        local_3f8._0_4_ = (int)local_768;
        local_3f8._4_4_ = (int)((ulonglong)local_768 >> 0x20);
        uStack_3f0._0_4_ = SUB84(ppppppcStack_760,0);
        uStack_3f0._4_4_ = (undefined4)((ulonglong)ppppppcStack_760 >> 0x20);
        local_a68 = pppppppcVar30;
        ppppppcStack_a60 = ppppppcVar4;
        local_a78 = (int)local_3f8;
        iStack_a74 = local_3f8._4_4_;
        uStack_a70 = (undefined4)uStack_3f0;
        uStack_a6c = uStack_3f0._4_4_;
        uStack_a80 = (undefined4)uStack_400;
        uStack_a7c = uStack_400._4_4_;
        local_a98 = pppppppcVar16;
        ppppppcStack_a90 = ppppppcVar17;
        uStack_400 = ppppppcVar10;
        local_3f8 = pppppppcVar11;
        uStack_3f0 = ppppppcVar12;
        if (pppppppcVar16 != (code *******)0x0) {
          ppppppcVar17 = local_a88;
          if (local_a88 == (code ******)0x0) {
            ppppppcVar17 = (code ******)&local_a78;
          }
          (*(code *)(*ppppppcVar17)[2])();
        }
      }
      else {
        if (lVar39 < 0) {
          local_728 = -1.79769313486232e+308;
          local_740 = 1.79769313486232e+308;
          local_738 = 1.79769313486232e+308;
          local_730 = 1.79769313486232e+308;
          local_720 = -1.79769313486232e+308;
          local_718 = -1.79769313486232e+308;
        }
        else {
          uVar44 = (ulonglong)(uVar37 >> 9);
          lVar39 = *(longlong *)(local_460 + uVar44 * 8);
          lVar41 = (ulonglong)((uVar37 & 0x1ff) << 3) * 3;
          lVar28 = *(longlong *)(local_448 + uVar44 * 8);
          local_718 = *(double *)(lVar39 + 0x10 + lVar41);
          dVar50 = *(double *)(lVar28 + 0x10 + lVar41);
          local_730 = local_718 - dVar50;
          local_720 = *(double *)(lVar39 + 8 + lVar41);
          dVar7 = *(double *)(lVar28 + 8 + lVar41);
          local_738 = local_720 - dVar7;
          local_740 = *(double *)(lVar39 + lVar41) - *(double *)(lVar28 + lVar41);
          local_718 = local_718 + dVar50;
          local_720 = local_720 + dVar7;
          local_728 = *(double *)(lVar39 + lVar41) + *(double *)(lVar28 + lVar41);
        }
        pppppcVar3 = ppppppcVar25[4];
        dVar50 = (double)ppppppcVar25[3] + (double)pppppcVar3 + 0.0001;
        local_728 = local_728 + dVar50;
        local_720 = local_720 + dVar50;
        local_718 = local_718 + dVar50;
        local_740 = local_740 - dVar50;
        local_738 = local_738 - dVar50;
        local_730 = local_730 - dVar50;
        dVar7 = (double)(-(ulonglong)(0.0 <= local_718 - local_730) &
                        (ulonglong)(local_718 - local_730));
        dVar50 = (double)(-(ulonglong)(0.0 <= local_720 - local_738) &
                         (ulonglong)(local_720 - local_738));
        uVar44 = -(ulonglong)(dVar7 <= dVar50);
        dVar7 = (double)(~uVar44 & (ulonglong)dVar7 | uVar44 & (ulonglong)dVar50);
        dVar50 = (double)(-(ulonglong)(0.0 <= local_728 - local_740) &
                         (ulonglong)(local_728 - local_740));
        uVar44 = -(ulonglong)(dVar7 <= dVar50);
        dVar50 = (double)(uVar44 & (ulonglong)dVar50 | ~uVar44 & (ulonglong)dVar7) /
                 (double)*(int *)((longlong)ppppppcVar25 + 0x2c);
        if (local_710 <= dVar50) {
          local_710 = dVar50;
        }
        local_a98 = (code *******)0x0;
        local_a88 = (code ******)0x0;
        puVar14 = (undefined8 *)FUN_14001cc68(0x38,8);
        ppppppcVar17 = ppppppcStack_750;
        pppppppcVar30 = local_758;
        local_a88 = local_778;
        ppppppcVar18 = ppppppcStack_780;
        pppppppcVar16 = local_788;
        *puVar14 = &PTR_FUN_149f36330;
        puVar14[1] = &local_bb8;
        puVar14[2] = &local_4e8;
        puVar14[3] = param_2;
        puVar14[4] = local_ce0;
        puVar14[5] = ppppppcVar25;
        puVar14[6] = (double)pppppcVar3 * (double)pppppcVar3;
        if (puVar14 + 1 != (longlong *)0x0) {
          local_a98 = (code *******)FUN_142970848;
        }
        local_3e8 = local_758;
        ppppppcStack_3e0 = ppppppcStack_750;
        local_3f8 = local_768;
        pppppppcVar11 = local_3f8;
        uStack_3f0 = ppppppcStack_760;
        ppppppcVar10 = uStack_3f0;
        local_408 = local_778;
        uStack_400 = ppppppcStack_770;
        ppppppcVar4 = uStack_400;
        local_418 = local_788;
        uStack_410 = ppppppcStack_780;
        local_758 = local_a68;
        ppppppcStack_750 = ppppppcStack_a60;
        local_778 = (code ******)puVar14;
        local_788 = local_a98;
        ppppppcStack_780 = ppppppcStack_a90;
        uStack_400._0_4_ = SUB84(ppppppcStack_770,0);
        uStack_400._4_4_ = (undefined4)((ulonglong)ppppppcStack_770 >> 0x20);
        local_3f8._0_4_ = (int)local_768;
        local_3f8._4_4_ = (int)((ulonglong)local_768 >> 0x20);
        uStack_3f0._0_4_ = SUB84(ppppppcStack_760,0);
        uStack_3f0._4_4_ = (undefined4)((ulonglong)ppppppcStack_760 >> 0x20);
        local_a68 = pppppppcVar30;
        ppppppcStack_a60 = ppppppcVar17;
        local_a78 = (int)local_3f8;
        iStack_a74 = local_3f8._4_4_;
        uStack_a70 = (undefined4)uStack_3f0;
        uStack_a6c = uStack_3f0._4_4_;
        uStack_a80 = (undefined4)uStack_400;
        uStack_a7c = uStack_400._4_4_;
        local_a98 = pppppppcVar16;
        ppppppcStack_a90 = ppppppcVar18;
        ppppppcVar18 = local_ce0;
        uStack_400 = ppppppcVar4;
        local_3f8 = pppppppcVar11;
        uStack_3f0 = ppppppcVar10;
        if (pppppppcVar16 != (code *******)0x0) {
          ppppppcVar18 = local_a88;
          if (local_a88 == (code ******)0x0) {
            ppppppcVar18 = (code ******)&local_a78;
          }
          (*(code *)(*ppppppcVar18)[2])();
          ppppppcVar18 = local_ce0;
        }
      }
      if (*(byte *)((longlong)ppppppcVar25 + 0x29) == 1) {
        local_bc8 = (code *****)0x0;
        uStack_bc0 = 0;
        uVar45 = SUB84(local_710,0);
        uVar47 = (undefined4)((ulonglong)local_710 >> 0x20);
        pppppcVar3 = ppppppcVar25[3];
        if (local_710 <= (double)pppppcVar3) {
          uVar45 = SUB84(pppppcVar3,0);
          uVar47 = (undefined4)((ulonglong)pppppcVar3 >> 0x20);
        }
        local_bd8 = (code *******)0x0;
        uStack_bd0 = 0;
        if ((longlong)(int)uStack_af0 == 0) {
          uStack_bc0._0_4_ = 0;
        }
        else {
          local_cc0 = local_af8 + (longlong)(int)uStack_af0 * 3;
          puVar26 = local_af8;
          do {
            pppppcVar3 = local_ad8[2];
            uVar44 = (ulonglong)puVar26[2] & 0x1ff;
            ppppcVar1 = pppppcVar3[puVar26[2] >> 9] + uVar44 * 3;
            local_a98 = (code *******)*ppppcVar1;
            ppppppcStack_a90 = (code ******)ppppcVar1[1];
            local_a88 = (code ******)pppppcVar3[puVar26[2] >> 9][uVar44 * 3 + 2];
            uVar44 = (ulonglong)puVar26[1] & 0x1ff;
            local_868 = (code ******)pppppcVar3[puVar26[1] >> 9][uVar44 * 3 + 2];
            ppppcVar1 = pppppcVar3[puVar26[1] >> 9] + uVar44 * 3;
            local_878 = (code ******)*ppppcVar1;
            uStack_870 = (code *******)ppppcVar1[1];
            uVar44 = (ulonglong)*puVar26 & 0x1ff;
            ppppcVar1 = pppppcVar3[*puVar26 >> 9] + uVar44 * 3;
            local_408 = (code ******)pppppcVar3[*puVar26 >> 9][uVar44 * 3 + 2];
            local_418 = (code *******)*ppppcVar1;
            uStack_410 = (code ******)ppppcVar1[1];
            uStack_3f0 = local_868;
            uStack_400 = local_878;
            local_3f8 = uStack_870;
            local_3d8 = local_a88;
            local_3e8 = local_a98;
            ppppppcStack_3e0 = ppppppcStack_a90;
            uVar37 = uStack_bd0._4_4_;
            iVar34 = 0;
            if ((longlong)uStack_bd0 < 0) {
              uStack_bd0 = (ulonglong)uStack_bd0._4_4_ << 0x20;
              FUN_146bee700(&local_bd8,0);
              uVar37 = uStack_bd0._4_4_;
              iVar34 = (uint)uStack_bd0;
            }
            uStack_bd0 = CONCAT44(uStack_bd0._4_4_,iVar34 + 1U);
            if (uVar37 < iVar34 + 1U) {
              FUN_146bee820(&local_bd8,iVar34);
            }
            puVar14 = &local_418;
            pppppppcVar16 = local_bd8 + (longlong)iVar34 * 9;
            for (lVar39 = 9; lVar39 != 0; lVar39 = lVar39 + -1) {
              *pppppppcVar16 = (code ******)*puVar14;
              puVar14 = puVar14 + 1;
              pppppppcVar16 = pppppppcVar16 + 1;
            }
            if (*(byte *)local_cf0 == 2) {
              FUN_146baf581(&local_a98,&local_418,&uStack_400,&local_3e8);
              pppppcVar3 = local_cf0[4];
              local_cd0 = (double)local_a88 * (double)pppppcVar3;
              local_cd8 = (double)ppppppcStack_a90 * (double)pppppcVar3;
              local_ce8 = (code ******)((double)pppppcVar3 * (double)local_a98);
            }
            else {
              local_ce8 = DAT_14c8464e0;
              local_cd8 = DAT_14c8464e8;
              local_cd0 = DAT_14c8464f0;
            }
            uVar37 = (uint)uStack_bd0;
            while (uVar37 != 0) {
              pppppppcVar16 = local_bd8 + (longlong)(int)uVar37 * 9 + -9;
              pppppppcVar30 = (code *******)&local_a98;
              for (lVar39 = 9; lVar39 != 0; lVar39 = lVar39 + -1) {
                *pppppppcVar30 = *pppppppcVar16;
                pppppppcVar16 = pppppppcVar16 + 1;
                pppppppcVar30 = pppppppcVar30 + 1;
              }
              uStack_bd0 = CONCAT44(uStack_bd0._4_4_,uVar37 - 1);
              FUN_146bee772(&local_bd8);
              dVar50 = (double)local_a68 - (double)CONCAT44(uStack_a7c,uStack_a80);
              dVar51 = (double)ppppppcStack_a60 - (double)CONCAT44(iStack_a74,local_a78);
              dVar7 = (double)local_a58 - (double)CONCAT44(uStack_a6c,uStack_a70);
              dVar53 = (double)CONCAT44(uStack_a7c,uStack_a80) - (double)local_a98;
              dVar48 = (double)CONCAT44(iStack_a74,local_a78) - (double)ppppppcStack_a90;
              dVar2 = (double)CONCAT44(uStack_a6c,uStack_a70) - (double)local_a88;
              local_bf8 = ((double)local_a88 - (double)local_a58) *
                          ((double)local_a88 - (double)local_a58) +
                          ((double)ppppppcStack_a90 - (double)ppppppcStack_a60) *
                          ((double)ppppppcStack_a90 - (double)ppppppcStack_a60) +
                          ((double)local_a98 - (double)local_a68) *
                          ((double)local_a98 - (double)local_a68);
              dStack_bf0 = dVar2 * dVar2 + dVar48 * dVar48 + dVar53 * dVar53;
              local_be8 = dVar7 * dVar7 + dVar51 * dVar51 + dVar50 * dVar50;
              iVar34 = 0;
              lVar39 = 2;
              pdVar42 = &local_bf8;
              uVar57 = (int)ppppppcStack_a60;
              uVar58 = (int)((ulonglong)ppppppcStack_a60 >> 0x20);
              uVar59 = (int)local_a68;
              uVar60 = (int)((ulonglong)local_a68 >> 0x20);
              uVar61 = (int)local_a58;
              uVar62 = (int)((ulonglong)local_a58 >> 0x20);
              do {
                uVar44 = uStack_bc0;
                ppppppcVar25 = (code ******)(&local_a98)[lVar39];
                dVar50 = (&local_aa8)[lVar39];
                dVar7 = *(double *)(&stack0xfffffffffffff560 + lVar39 * 8);
                dVar53 = ((double)CONCAT44(uVar62,uVar61) + (double)ppppppcVar25) * 0.5;
                dVar51 = ((double)CONCAT44(uVar58,uVar57) + dVar7) * 0.5;
                dVar48 = ((double)CONCAT44(uVar60,uVar59) + dVar50) * 0.5;
                adStack_888[lVar39] = dVar48;
                adStack_888[lVar39 + 1] = dVar51;
                (&local_878)[lVar39] = dVar53;
                dVar2 = *pdVar42;
                if ((double)CONCAT44(uVar47,uVar45) * 4.0 * (double)CONCAT44(uVar47,uVar45) < dVar2)
                {
                  lVar28 = (longlong)(int)uStack_bc0;
                  uVar37 = (int)uStack_bc0 + 1;
                  uStack_bc0 = CONCAT44(uStack_bc0._4_4_,uVar37);
                  if (uStack_bc0._4_4_ < uVar37) {
                    FUN_1403e3958(&local_bc8,uVar44 & 0xffffffff);
                  }
                  local_bc8[lVar28 * 3] = (code ****)(dVar48 + (double)local_ce8);
                  local_bc8[lVar28 * 3 + 1] = (code ****)(dVar51 + local_cd8);
                  local_bc8[lVar28 * 3 + 2] = (code ****)(dVar53 + local_cd0);
                }
                uVar44 = uStack_bd0;
                iVar34 = iVar34 + (uint)((double)CONCAT44(uVar47,uVar45) * 16.0 *
                                         (double)CONCAT44(uVar47,uVar45) < dVar2);
                lVar39 = lVar39 + 3;
                pdVar42 = pdVar42 + 1;
                uVar57 = SUB84(dVar7,0);
                uVar58 = (int)((ulonglong)dVar7 >> 0x20);
                uVar59 = SUB84(dVar50,0);
                uVar60 = (int)((ulonglong)dVar50 >> 0x20);
                uVar61 = (int)ppppppcVar25;
                uVar62 = (int)((ulonglong)ppppppcVar25 >> 0x20);
              } while (lVar39 != 0xb);
              uVar37 = (uint)uStack_bd0;
              if (iVar34 != 0) {
                uVar24 = (uint)uStack_bd0 + 1;
                uStack_bd0._0_4_ = uVar24;
                if (uStack_bd0._4_4_ < uVar24) {
                  FUN_146bee820(&local_bd8,uVar44 & 0xffffffff);
                  uVar24 = (uint)uStack_bd0;
                }
                puVar14 = &local_878;
                pppppppcVar16 = local_bd8 + (longlong)(int)uVar37 * 9;
                for (lVar39 = 9; lVar39 != 0; lVar39 = lVar39 + -1) {
                  *pppppppcVar16 = (code ******)*puVar14;
                  puVar14 = puVar14 + 1;
                  pppppppcVar16 = pppppppcVar16 + 1;
                }
                uStack_bd0._0_4_ = uVar24 + 1;
                uVar37 = (uint)uStack_bd0;
                if (uStack_bd0._4_4_ < (uint)uStack_bd0) {
                  FUN_146bee820(&local_bd8,uVar24);
                  uVar37 = (uint)uStack_bd0;
                }
                lVar39 = (longlong)(int)uVar24;
                local_bd8[lVar39 * 9 + 2] = local_a88;
                local_bd8[lVar39 * 9] = (code ******)local_a98;
                (local_bd8 + lVar39 * 9)[1] = ppppppcStack_a90;
                local_bd8[lVar39 * 9 + 3] = local_878;
                (local_bd8 + lVar39 * 9 + 3)[1] = (code ******)uStack_870;
                local_bd8[lVar39 * 9 + 5] = local_868;
                pppppppcVar16 = local_bd8 + lVar39 * 9 + 6;
                *(undefined4 *)pppppppcVar16 = (undefined4)local_860;
                *(undefined4 *)((longlong)pppppppcVar16 + 4) = local_860._4_4_;
                *(undefined4 *)(pppppppcVar16 + 1) = (undefined4)uStack_858;
                *(undefined4 *)((longlong)pppppppcVar16 + 0xc) = uStack_858._4_4_;
                local_bd8[lVar39 * 9 + 8] = local_850;
                uStack_bd0._0_4_ = uVar37 + 1;
                uVar24 = (uint)uStack_bd0;
                if (uStack_bd0._4_4_ < (uint)uStack_bd0) {
                  FUN_146bee820(&local_bd8,uVar37);
                  uVar24 = (uint)uStack_bd0;
                }
                lVar39 = (longlong)(int)uVar37;
                local_bd8[lVar39 * 9 + 2] = (code ******)CONCAT44(uStack_a6c,uStack_a70);
                local_bd8[lVar39 * 9] = (code ******)CONCAT44(uStack_a7c,uStack_a80);
                (local_bd8 + lVar39 * 9)[1] = (code ******)CONCAT44(iStack_a74,local_a78);
                local_bd8[lVar39 * 9 + 3] = local_860;
                (local_bd8 + lVar39 * 9 + 3)[1] = uStack_858;
                local_bd8[lVar39 * 9 + 5] = local_850;
                pppppppcVar16 = local_bd8 + lVar39 * 9 + 6;
                *(undefined4 *)pppppppcVar16 = local_848;
                *(undefined4 *)((longlong)pppppppcVar16 + 4) = uStack_844;
                *(undefined4 *)(pppppppcVar16 + 1) = uStack_840;
                *(undefined4 *)((longlong)pppppppcVar16 + 0xc) = uStack_83c;
                local_bd8[lVar39 * 9 + 8] = local_838;
                uVar37 = uVar24 + 1;
                uStack_bd0 = CONCAT44(uStack_bd0._4_4_,uVar37);
                if (uStack_bd0._4_4_ < uVar37) {
                  FUN_146bee820(&local_bd8,uVar24);
                  uVar37 = (uint)uStack_bd0;
                }
                lVar39 = (longlong)(int)uVar24;
                local_bd8[lVar39 * 9 + 2] = local_a58;
                local_bd8[lVar39 * 9] = (code ******)local_a68;
                (local_bd8 + lVar39 * 9)[1] = ppppppcStack_a60;
                local_bd8[lVar39 * 9 + 3] = (code ******)CONCAT44(uStack_844,local_848);
                (local_bd8 + lVar39 * 9 + 3)[1] = (code ******)CONCAT44(uStack_83c,uStack_840);
                local_bd8[lVar39 * 9 + 5] = local_838;
                pppppppcVar16 = local_bd8 + lVar39 * 9 + 6;
                *(undefined4 *)pppppppcVar16 = (undefined4)local_878;
                *(undefined4 *)((longlong)pppppppcVar16 + 4) = local_878._4_4_;
                *(undefined4 *)(pppppppcVar16 + 1) = (undefined4)uStack_870;
                *(undefined4 *)((longlong)pppppppcVar16 + 0xc) = uStack_870._4_4_;
                local_bd8[lVar39 * 9 + 8] = local_868;
              }
            }
            puVar26 = puVar26 + 3;
          } while (puVar26 != local_cc0);
          ppppppcVar25 = local_cf0;
          ppppppcVar18 = local_ce0;
        }
        local_c08 = local_bc8;
        local_c00 = (int)uStack_bc0;
        FUN_14295d4ee(&local_828);
        if (local_bd8 != (code *******)0x0) {
          FUN_1400020a8();
        }
        if (local_bc8 != (code *****)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_14295d6bc(&local_828);
      }
      FUN_146c00d92(&local_a98,&local_828);
      FUN_146c017d0(&local_a98);
      FUN_146c09afc(&local_a98,0);
      local_878 = local_cb0;
      uStack_870 = &local_ad8;
      uStack_858 = (code ******)&local_a99;
      local_bf8 = 0.0;
      dStack_bf0 = 0.0;
      local_868 = param_2;
      local_860 = ppppppcVar25;
      local_850 = ppppppcVar18;
      FUN_144aa29e6(&local_bf8,local_a78 * 0x200 + iStack_a74,1);
      local_bc8 = (code *****)0x0;
      uStack_bc0 = 0;
      FUN_146ba0be8(&local_bc8,local_958 * 0x200 + local_954,1);
      uVar24 = local_958 * 0x200 + local_954;
      uVar37 = 0;
      if ((uVar24 != 0) && (uVar37 = 0, 0xfffd < (ushort)(*(short *)*local_950 - 1U))) {
        uVar38 = 1;
        uVar15 = 1;
        if (1 < (int)uVar24) {
          uVar38 = uVar24;
        }
        do {
          uVar37 = uVar38;
          if (uVar38 == uVar15) break;
          uVar21 = uVar15 >> 9;
          uVar33 = uVar15 & 0x1ff;
          uVar37 = uVar15;
          uVar15 = uVar15 + 1;
        } while (0xfffd < (ushort)(*(short *)(local_950[uVar21] + (ulonglong)uVar33 * 2) - 1U));
      }
      if (uVar37 != uVar24) {
        do {
          FUN_146c13dec(&local_a98,&local_418,uVar37);
          local_bc8[(longlong)(int)uVar37 * 3 + 2] = (code ****)local_408;
          pppppcVar3 = local_bc8 + (longlong)(int)uVar37 * 3;
          *(undefined4 *)pppppcVar3 = (undefined4)local_418;
          *(undefined4 *)((longlong)pppppcVar3 + 4) = local_418._4_4_;
          *(undefined4 *)(pppppcVar3 + 1) = (undefined4)uStack_410;
          *(undefined4 *)((longlong)pppppcVar3 + 0xc) = uStack_410._4_4_;
          uVar38 = uVar37 + 1;
          if ((int)(uVar37 + 1) < (int)uVar24) {
            uVar38 = uVar24;
          }
          do {
            uVar15 = uVar38;
            if (uVar38 - 1 == uVar37) break;
            uVar37 = uVar37 + 1;
            uVar15 = uVar37;
          } while (0xfffd < (ushort)(*(short *)(local_950[uVar37 >> 9] +
                                               (ulonglong)(uVar37 & 0x1ff) * 2) - 1U));
          uVar37 = uVar15;
        } while (uVar37 != uVar24);
      }
      local_bd8 = (code *******)0x0;
      uStack_bd0 = 0;
      FUN_146ba0be8(&local_bd8,local_a78 * 0x200 + iStack_a74,1);
      uVar24 = local_a78 * 0x200 + iStack_a74;
      uVar37 = 0;
      if ((uVar24 != 0) &&
         (uVar37 = 0, 0xfffd < (ushort)(**(short **)CONCAT44(uStack_a6c,uStack_a70) - 1U))) {
        uVar38 = 1;
        uVar15 = 1;
        if (1 < (int)uVar24) {
          uVar38 = uVar24;
        }
        do {
          uVar37 = uVar38;
          if (uVar38 == uVar15) break;
          uVar21 = uVar15 >> 9;
          uVar33 = uVar15 & 0x1ff;
          uVar37 = uVar15;
          uVar15 = uVar15 + 1;
        } while (0xfffd < (ushort)(*(short *)(((undefined8 *)CONCAT44(uStack_a6c,uStack_a70))
                                              [uVar21] + (ulonglong)uVar33 * 2) - 1U));
      }
      if (uVar37 != uVar24) {
        do {
          lVar39 = (longlong)(int)uVar37;
          pppppcVar3 = local_a88[uVar37 >> 9] + (ulonglong)(uVar37 & 0x1ff) * 3;
          uVar45 = *(undefined4 *)pppppcVar3;
          uVar47 = *(undefined4 *)((longlong)pppppcVar3 + 4);
          uVar57 = *(undefined4 *)(pppppcVar3 + 1);
          uVar58 = *(undefined4 *)((longlong)pppppcVar3 + 0xc);
          local_bd8[lVar39 * 3 + 2] =
               (code ******)local_a88[uVar37 >> 9][(ulonglong)(uVar37 & 0x1ff) * 3 + 2];
          pppppppcVar16 = local_bd8 + lVar39 * 3;
          *(undefined4 *)pppppppcVar16 = uVar45;
          *(undefined4 *)((longlong)pppppppcVar16 + 4) = uVar47;
          *(undefined4 *)(pppppppcVar16 + 1) = uVar57;
          *(undefined4 *)((longlong)pppppppcVar16 + 0xc) = uVar58;
          local_c28 = (code *****)((ulonglong)local_c28 & 0xffffffff00000000);
          local_408 = &local_bc8;
          local_c10 = &local_418;
          local_c18 = &LAB_142970bca;
          local_418 = (code *******)&local_a98;
          uStack_410 = &local_c28;
          FUN_146bd7d34(local_9e0,uVar37,&local_c18);
          *(undefined4 *)((longlong)local_bf8 + lVar39 * 4) = local_c28._0_4_;
          uVar38 = uVar37 + 1;
          if ((int)(uVar37 + 1) < (int)uVar24) {
            uVar38 = uVar24;
          }
          do {
            uVar15 = uVar38;
            if (uVar38 - 1 == uVar37) break;
            uVar37 = uVar37 + 1;
            uVar15 = uVar37;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (CONCAT44(uStack_a6c,uStack_a70) +
                                                 (ulonglong)(uVar37 >> 9) * 8) +
                                               (ulonglong)(uVar37 & 0x1ff) * 2) - 1U));
          uVar37 = uVar15;
        } while (uVar37 != uVar24);
      }
      ppppppcVar25 = local_cf0;
      if (*(byte *)(local_cf0 + 6) != 0) {
        local_c28 = (code *****)0x0;
        uStack_c20 = 0;
        FUN_144a127d2(&local_c28,uStack_bd0 & 0xffffffff,1);
        pppppcVar3 = local_c28;
        iVar34 = (int)uStack_c20;
        if (0 < (int)uStack_c20) {
          lVar39 = 0;
          do {
            *(int *)((longlong)local_c28 + lVar39 * 4) = (int)lVar39;
            lVar39 = lVar39 + 1;
            lVar28 = (longlong)(int)uStack_c20;
          } while (lVar39 < lVar28);
          if (1 < (int)uStack_c20) {
            memset(&local_408,0,0x2f0);
            local_418 = (code *******)pppppcVar3;
            uStack_410 = (code ******)((longlong)pppppcVar3 + lVar28 * 4 + -4);
            fVar46 = logf((float)iVar34);
            local_408 = (code ******)CONCAT44(local_408._4_4_,(int)(longlong)(fVar46 + fVar46));
            puVar14 = &local_418;
            do {
              piVar20 = (int *)*puVar14;
              piVar36 = (int *)puVar14[1];
              iVar34 = *(int *)(puVar14 + 2);
              iVar35 = (int)((ulonglong)((longlong)piVar36 - (longlong)piVar20) >> 2);
              uVar37 = iVar35 + 1;
              if (iVar34 != 0) {
LAB_146b9f0a0:
                if (8 < (int)uVar37) {
                  iVar35 = piVar20[uVar37 >> 1];
                  piVar20[uVar37 >> 1] = *piVar20;
                  *piVar20 = iVar35;
                  piVar19 = piVar20;
                  piVar22 = piVar36 + 1;
                  do {
                    piVar19 = piVar19 + 1;
                    if (piVar19 <= piVar36) {
                      lVar39 = (longlong)*piVar20;
                      ppppppcVar18 = local_bd8[lVar39 * 3];
                      ppppppcVar17 = local_bd8[lVar39 * 3 + 1];
                      do {
                        lVar28 = (longlong)*piVar19;
                        ppppppcVar4 = local_bd8[lVar28 * 3];
                        if ((double)ppppppcVar18 < (double)ppppppcVar4) break;
                        if (((double)ppppppcVar18 == (double)ppppppcVar4) &&
                           (!NAN((double)ppppppcVar18) && !NAN((double)ppppppcVar4))) {
                          ppppppcVar4 = local_bd8[lVar28 * 3 + 1];
                          if ((double)ppppppcVar17 < (double)ppppppcVar4) break;
                          if ((((double)ppppppcVar17 == (double)ppppppcVar4) &&
                              (!NAN((double)ppppppcVar17) && !NAN((double)ppppppcVar4))) &&
                             ((double)local_bd8[lVar39 * 3 + 2] < (double)local_bd8[lVar28 * 3 + 2])
                             ) break;
                        }
                        piVar19 = piVar19 + 1;
                      } while (piVar19 <= piVar36);
                    }
                    piVar29 = piVar22 + -1;
                    if (piVar20 < piVar29) {
                      lVar39 = (longlong)*piVar20;
                      ppppppcVar18 = local_bd8[lVar39 * 3];
                      lVar28 = (longlong)*piVar29;
                      ppppppcVar17 = local_bd8[lVar28 * 3];
                      if ((double)ppppppcVar18 <= (double)ppppppcVar17) {
                        ppppppcVar4 = local_bd8[lVar39 * 3 + 1];
                        piVar40 = piVar22 + -2;
                        piVar27 = piVar22;
                        do {
                          piVar22 = piVar29;
                          if (((double)ppppppcVar17 == (double)ppppppcVar18) &&
                             (!NAN((double)ppppppcVar17) && !NAN((double)ppppppcVar18))) {
                            ppppppcVar17 = local_bd8[lVar28 * 3 + 1];
                            if ((double)ppppppcVar4 <= (double)ppppppcVar17) {
                              if ((((double)ppppppcVar17 != (double)ppppppcVar4) ||
                                  (NAN((double)ppppppcVar17) || NAN((double)ppppppcVar4))) ||
                                 ((double)local_bd8[lVar39 * 3 + 2] <
                                  (double)local_bd8[lVar28 * 3 + 2] ||
                                  (double)local_bd8[lVar39 * 3 + 2] ==
                                  (double)local_bd8[lVar28 * 3 + 2])) goto LAB_146b9f1c9;
                              piVar27 = piVar40 + 2;
                            }
                            piVar29 = piVar40 + 1;
                            piVar22 = piVar27;
                            break;
                          }
LAB_146b9f1c9:
                          piVar29 = piVar22 + -1;
                          if (piVar40 <= piVar20) break;
                          lVar28 = (longlong)*piVar40;
                          ppppppcVar17 = local_bd8[lVar28 * 3];
                          piVar40 = piVar40 + -1;
                          piVar27 = piVar22;
                        } while ((double)ppppppcVar18 <= (double)ppppppcVar17);
                      }
                    }
                    if (piVar29 < piVar19) goto LAB_146b9f20e;
                    iVar35 = *piVar19;
                    *piVar19 = *piVar29;
                    *piVar29 = iVar35;
                    piVar22 = piVar29;
                  } while( true );
                }
                for (; piVar22 = piVar20, piVar19 = piVar20, piVar20 < piVar36;
                    piVar36 = (int *)((longlong)piVar36 + 0xfffffffffffffffc)) {
joined_r0x000146b9f577:
                  piVar19 = piVar19 + 1;
                  if (piVar19 <= piVar36) {
                    lVar28 = (longlong)*piVar19;
                    lVar39 = (longlong)*piVar22;
                    ppppppcVar18 = local_bd8[lVar39 * 3];
                    ppppppcVar17 = local_bd8[lVar28 * 3];
                    if ((double)ppppppcVar17 <= (double)ppppppcVar18) goto LAB_146b9f5cf;
                    goto LAB_146b9f5c1;
                  }
                  iVar34 = *piVar22;
                  *piVar22 = *piVar36;
                  *piVar36 = iVar34;
                }
                goto LAB_146b9f605;
              }
LAB_146b9f295:
              if (uVar37 != 0) {
                iVar34 = (iVar35 - (iVar35 + -1 >> 0x1f)) + -1 >> 1;
                iVar35 = iVar34;
                do {
                  while (uVar45 = iVar34 * 2 + 1, (int)uVar45 < (int)uVar37) {
                    iVar31 = iVar34 * 2 + 2;
                    if (iVar31 < (int)uVar37) {
                      lVar39 = (longlong)iVar31;
                      lVar41 = (longlong)piVar20[(int)uVar45];
                      lVar28 = (longlong)piVar20[lVar39];
                      ppppppcVar18 = local_bd8[lVar28 * 3];
                      ppppppcVar17 = local_bd8[lVar41 * 3];
                      if ((double)ppppppcVar18 < (double)ppppppcVar17) goto LAB_146b9f30d;
                      if (((double)ppppppcVar18 == (double)ppppppcVar17) &&
                         (!NAN((double)ppppppcVar18) && !NAN((double)ppppppcVar17))) {
                        ppppppcVar18 = local_bd8[lVar28 * 3 + 1];
                        ppppppcVar17 = local_bd8[lVar41 * 3 + 1];
                        if ((double)ppppppcVar17 <= (double)ppppppcVar18) {
                          if ((((double)ppppppcVar18 != (double)ppppppcVar17) ||
                              (NAN((double)ppppppcVar18) || NAN((double)ppppppcVar17))) ||
                             ((double)local_bd8[lVar41 * 3 + 2] < (double)local_bd8[lVar28 * 3 + 2]
                              || (double)local_bd8[lVar41 * 3 + 2] ==
                                 (double)local_bd8[lVar28 * 3 + 2])) goto LAB_146b9f310;
                        }
                        goto LAB_146b9f30d;
                      }
                    }
                    else {
LAB_146b9f30d:
                      lVar39 = (longlong)(int)uVar45;
                      iVar31 = uVar45;
                    }
LAB_146b9f310:
                    lVar41 = (longlong)piVar20[lVar39];
                    iVar32 = piVar20[iVar34];
                    lVar28 = (longlong)iVar32;
                    ppppppcVar18 = local_bd8[lVar28 * 3];
                    ppppppcVar17 = local_bd8[lVar41 * 3];
                    if ((double)ppppppcVar17 <= (double)ppppppcVar18) {
                      if (((double)ppppppcVar18 != (double)ppppppcVar17) ||
                         (NAN((double)ppppppcVar18) || NAN((double)ppppppcVar17))) break;
                      ppppppcVar18 = local_bd8[lVar28 * 3 + 1];
                      ppppppcVar17 = local_bd8[lVar41 * 3 + 1];
                      if ((double)ppppppcVar17 <= (double)ppppppcVar18) {
                        if ((((double)ppppppcVar18 != (double)ppppppcVar17) ||
                            (NAN((double)ppppppcVar18) || NAN((double)ppppppcVar17))) ||
                           ((double)local_bd8[lVar41 * 3 + 2] < (double)local_bd8[lVar28 * 3 + 2] ||
                            (double)local_bd8[lVar41 * 3 + 2] == (double)local_bd8[lVar28 * 3 + 2]))
                        break;
                      }
                    }
                    piVar20[iVar34] = piVar20[lVar39];
                    piVar20[lVar39] = iVar32;
                    iVar34 = iVar31;
                  }
                  bVar43 = iVar35 != 0;
                  iVar34 = iVar35 + -1;
                  iVar35 = iVar34;
                } while (bVar43);
                if (1 < (int)uVar37) {
                  uVar44 = (ulonglong)uVar37;
                  iVar34 = *piVar20;
                  *piVar20 = piVar20[uVar44 - 1];
                  piVar20[uVar44 - 1] = iVar34;
                  if (uVar37 != 2) {
                    do {
                      uVar23 = uVar44 - 1;
                      iVar35 = 0;
                      iVar34 = 1;
                      iVar31 = 0;
                      do {
                        iVar32 = iVar35 + 2;
                        lVar39 = (longlong)iVar32;
                        if (lVar39 < (longlong)uVar23) {
                          lVar41 = (longlong)piVar20[iVar34];
                          lVar28 = (longlong)piVar20[lVar39];
                          ppppppcVar18 = local_bd8[lVar28 * 3];
                          ppppppcVar17 = local_bd8[lVar41 * 3];
                          if ((double)ppppppcVar18 < (double)ppppppcVar17) goto LAB_146b9f466;
                          if (((double)ppppppcVar18 == (double)ppppppcVar17) &&
                             (!NAN((double)ppppppcVar18) && !NAN((double)ppppppcVar17))) {
                            ppppppcVar18 = local_bd8[lVar28 * 3 + 1];
                            ppppppcVar17 = local_bd8[lVar41 * 3 + 1];
                            if ((double)ppppppcVar17 <= (double)ppppppcVar18) {
                              if ((((double)ppppppcVar18 != (double)ppppppcVar17) ||
                                  (NAN((double)ppppppcVar18) || NAN((double)ppppppcVar17))) ||
                                 ((double)local_bd8[lVar41 * 3 + 2] <
                                  (double)local_bd8[lVar28 * 3 + 2] ||
                                  (double)local_bd8[lVar41 * 3 + 2] ==
                                  (double)local_bd8[lVar28 * 3 + 2])) goto LAB_146b9f469;
                            }
                            goto LAB_146b9f466;
                          }
                        }
                        else {
LAB_146b9f466:
                          lVar39 = (longlong)iVar34;
                          iVar32 = iVar34;
                        }
LAB_146b9f469:
                        lVar28 = (longlong)piVar20[lVar39];
                        iVar34 = piVar20[iVar31];
                        lVar41 = (longlong)iVar34;
                        ppppppcVar18 = local_bd8[lVar41 * 3];
                        ppppppcVar17 = local_bd8[lVar28 * 3];
                        if ((double)ppppppcVar17 <= (double)ppppppcVar18) {
                          if (((double)ppppppcVar18 != (double)ppppppcVar17) ||
                             (NAN((double)ppppppcVar18) || NAN((double)ppppppcVar17))) break;
                          ppppppcVar18 = local_bd8[lVar41 * 3 + 1];
                          ppppppcVar17 = local_bd8[lVar28 * 3 + 1];
                          if (((double)ppppppcVar17 <= (double)ppppppcVar18) &&
                             ((((double)ppppppcVar18 != (double)ppppppcVar17 ||
                               (NAN((double)ppppppcVar18) || NAN((double)ppppppcVar17))) ||
                              ((double)local_bd8[lVar28 * 3 + 2] < (double)local_bd8[lVar41 * 3 + 2]
                               || (double)local_bd8[lVar28 * 3 + 2] ==
                                  (double)local_bd8[lVar41 * 3 + 2])))) break;
                        }
                        piVar20[iVar31] = piVar20[lVar39];
                        piVar20[lVar39] = iVar34;
                        iVar35 = iVar32 * 2;
                        iVar34 = iVar32 * 2 + 1;
                        iVar31 = iVar32;
                      } while ((longlong)iVar34 < (longlong)uVar23);
                      iVar34 = *piVar20;
                      *piVar20 = piVar20[uVar44 - 2];
                      piVar20[uVar44 - 2] = iVar34;
                      uVar44 = uVar23;
                    } while (2 < uVar23);
                  }
                }
              }
LAB_146b9f605:
              puVar14 = puVar14 + -3;
            } while (&local_418 <= puVar14);
          }
        }
        local_418 = (code *******)0x0;
        uStack_410 = (code ******)0x0;
        local_c38 = 0.0;
        dStack_c30 = 0.0;
        FUN_140b463b8(&local_418,uStack_bd0 & 0xffffffff,1);
        FUN_144a12820(&local_c38,uStack_bd0 & 0xffffffff,1);
        uVar44 = uStack_bd0;
        pppppppcVar16 = local_bd8;
        if (0 < (int)(uint)uStack_bd0) {
          lVar39 = 0;
          lVar28 = 0;
          do {
            lVar41 = (longlong)*(int *)((longlong)local_c28 + lVar28 * 4);
            *(code *******)((longlong)local_418 + lVar39 + 0x10) = local_bd8[lVar41 * 3 + 2];
            ppppppcVar18 = (local_bd8 + lVar41 * 3)[1];
            *(undefined8 *)((longlong)local_418 + lVar39) = local_bd8[lVar41 * 3];
            ((undefined8 *)((longlong)local_418 + lVar39))[1] = ppppppcVar18;
            *(undefined4 *)((longlong)local_c38 + lVar28 * 4) =
                 *(undefined4 *)
                  ((longlong)local_bf8 + (longlong)*(int *)((longlong)local_c28 + lVar28 * 4) * 4);
            lVar28 = lVar28 + 1;
            lVar39 = lVar39 + 0x18;
          } while (lVar28 < (int)(uint)uStack_bd0);
        }
        local_bd8 = local_418;
        uStack_bd0 = (ulonglong)uStack_410;
        local_418 = pppppppcVar16;
        uStack_410 = (code ******)uVar44;
        dVar50 = local_c38;
        dVar7 = dStack_c30;
        local_c38 = local_bf8;
        dStack_c30 = dStack_bf0;
        bVar43 = local_bf8 != 0.0;
        local_bf8 = dVar50;
        dStack_bf0 = dVar7;
        if (bVar43) {
          FUN_1400020a8();
        }
        if (local_418 != (code *******)0x0) {
          FUN_1400020a8();
        }
        if (local_c28 != (code *****)0x0) {
          FUN_1400020a8();
        }
      }
      uVar37 = *(uint *)((longlong)ppppppcVar25 + 4);
      if ((int)(uint)uStack_bd0 < (int)*(uint *)((longlong)ppppppcVar25 + 4)) {
        uVar37 = (uint)uStack_bd0;
      }
      local_418 = (code *******)CONCAT44(local_418._4_4_,10);
      uStack_410 = (code ******)0x0;
      local_408 = (code ******)0x0;
      uVar24 = 0xffffffff;
      if (*(byte *)(ppppppcVar25 + 5) == 0) {
        uVar24 = uVar37;
      }
      local_c48 = local_bf8;
      local_c40 = dStack_bf0._0_4_;
      local_c58 = local_bd8;
      local_c50 = (uint)uStack_bd0;
      local_cf8 = 4;
      FUN_146c85058(&local_418,&local_c58,&local_c48,uVar24);
      bVar5 = *(byte *)ppppppcVar25;
      if (0 < (int)uVar37) {
        uVar44 = 0;
        do {
          lVar39 = (longlong)*(int *)((longlong)uStack_410 + uVar44 * 4);
          pppppppcVar16 = local_bd8 + lVar39 * 3;
          local_c78 = *(undefined4 *)pppppppcVar16;
          uStack_c74 = *(undefined4 *)((longlong)pppppppcVar16 + 4);
          uStack_c70 = *(undefined4 *)(pppppppcVar16 + 1);
          uStack_c6c = *(undefined4 *)((longlong)pppppppcVar16 + 0xc);
          local_c68 = local_bd8[lVar39 * 3 + 2];
          FUN_14295d802(&local_878,&local_c78,0,bVar5 == 1);
          uVar44 = uVar44 + 1;
        } while (uVar37 != uVar44);
      }
      if ((*(byte *)(local_cf0 + 5) != 0) && ((int)uVar37 < (int)local_408)) {
        pppppcVar3 = local_cf0[1];
        lVar39 = (longlong)(int)uVar37;
        do {
          lVar28 = (longlong)*(int *)((longlong)uStack_410 + lVar39 * 4);
          local_c88 = local_bd8[lVar28 * 3 + 2];
          pppppppcVar16 = local_bd8 + lVar28 * 3;
          local_c98 = *(undefined4 *)pppppppcVar16;
          uStack_c94 = *(undefined4 *)((longlong)pppppppcVar16 + 4);
          uStack_c90 = *(undefined4 *)(pppppppcVar16 + 1);
          uStack_c8c = *(undefined4 *)((longlong)pppppppcVar16 + 0xc);
          FUN_14295d802(&local_878,&local_c98,0.0 < (double)pppppcVar3 * (double)pppppcVar3,
                        bVar5 == 1);
          lVar39 = lVar39 + 1;
        } while (lVar39 < (int)local_408);
      }
      if (uStack_410 != (code ******)0x0) {
        FUN_1400020a8();
      }
      if (local_bd8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_bc8 != (code *****)0x0) {
        FUN_1400020a8();
      }
      if (local_bf8 != 0.0) {
        FUN_1400020a8();
      }
      FUN_141082778(&local_a98);
      FUN_146ba0c6a(&local_828);
      local_508 = 0;
      if (local_510 != 0) {
        FUN_1400020a8();
      }
      FUN_142964e9e(local_550);
      if (local_530 != 0) {
        FUN_1400020a8();
      }
      if (local_550[0] != 0) {
        FUN_1400020a8();
      }
      FUN_14295dcfc(&local_4e8);
      if (local_ae8 != 0) {
        FUN_1400020a8();
      }
      uVar13 = local_a99;
      if (local_af8 != (uint *)0x0) {
        FUN_1400020a8();
        uVar13 = local_a99;
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_d18) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
LAB_146b9f20e:
  iVar35 = *piVar20;
  *piVar20 = *piVar29;
  *piVar29 = iVar35;
  iVar34 = iVar34 + -1;
  piVar22 = piVar22 + -2;
  if ((longlong)piVar22 - (longlong)piVar20 < (longlong)piVar36 - (longlong)piVar19) {
    if (piVar19 < piVar36) {
      *puVar14 = piVar19;
      puVar14[1] = piVar36;
      *(int *)(puVar14 + 2) = iVar34;
      puVar14 = puVar14 + 3;
    }
    if (piVar29 <= piVar20 + 1) goto LAB_146b9f605;
  }
  else {
    if (piVar20 + 1 < piVar29) {
      *puVar14 = piVar20;
      puVar14[1] = piVar22;
      *(int *)(puVar14 + 2) = iVar34;
      puVar14 = puVar14 + 3;
    }
    piVar22 = piVar36;
    piVar20 = piVar19;
    if (piVar36 <= piVar19) goto LAB_146b9f605;
  }
  iVar35 = (int)((ulonglong)((longlong)piVar22 - (longlong)piVar20) >> 2);
  uVar37 = iVar35 + 1;
  piVar36 = piVar22;
  if (iVar34 == 0) goto LAB_146b9f295;
  goto LAB_146b9f0a0;
LAB_146b9f5cf:
  if (((double)ppppppcVar18 == (double)ppppppcVar17) &&
     (!NAN((double)ppppppcVar18) && !NAN((double)ppppppcVar17))) {
    ppppppcVar18 = local_bd8[lVar39 * 3 + 1];
    ppppppcVar17 = local_bd8[lVar28 * 3 + 1];
    if ((double)ppppppcVar17 <= (double)ppppppcVar18) {
      if ((((double)ppppppcVar18 != (double)ppppppcVar17) ||
          (NAN((double)ppppppcVar18) || NAN((double)ppppppcVar17))) ||
         ((double)local_bd8[lVar28 * 3 + 2] < (double)local_bd8[lVar39 * 3 + 2] ||
          (double)local_bd8[lVar28 * 3 + 2] == (double)local_bd8[lVar39 * 3 + 2]))
      goto joined_r0x000146b9f577;
    }
LAB_146b9f5c1:
    piVar22 = piVar19;
  }
  goto joined_r0x000146b9f577;
}



// FUNCTION 146ba0128 FUN_146ba0128 body=240 status=ok
// SIG undefined FUN_146ba0128(void)

void FUN_146ba0128(longlong param_1,double *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar1 = *(uint *)(param_1 + 0xcc);
  if ((int)uVar1 < 0) {
    dVar5 = -1.79769313486232e+308;
    dVar7 = 1.79769313486232e+308;
    dVar6 = dVar5;
    dVar8 = dVar5;
    dVar9 = dVar7;
    dVar10 = dVar7;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar1 >> 9) * 8);
    lVar4 = (ulonglong)((uVar1 & 0x1ff) << 3) * 3;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar1 >> 9) * 8);
    dVar6 = *(double *)(lVar2 + 0x10 + lVar4);
    dVar8 = *(double *)(lVar3 + 0x10 + lVar4);
    dVar7 = dVar6 - dVar8;
    dVar9 = *(double *)(lVar2 + 8 + lVar4);
    dVar10 = *(double *)(lVar3 + 8 + lVar4);
    dVar5 = *(double *)(lVar2 + lVar4) + *(double *)(lVar3 + lVar4);
    dVar6 = dVar6 + dVar8;
    dVar8 = dVar9 + dVar10;
    dVar9 = dVar9 - dVar10;
    dVar10 = *(double *)(lVar2 + lVar4) - *(double *)(lVar3 + lVar4);
  }
  *param_2 = dVar10;
  param_2[1] = dVar9;
  param_2[2] = dVar7;
  param_2[3] = dVar5;
  param_2[4] = dVar8;
  param_2[5] = dVar6;
  return;
}



// FUNCTION 146ba0218 FUN_146ba0218 body=388 status=ok
// SIG undefined FUN_146ba0218(void)

void FUN_146ba0218(longlong param_1,double *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar9 = *param_2 * *(double *)(param_1 + 0xe0);
  dVar10 = param_2[1] * *(double *)(param_1 + 0xe8);
  dVar7 = param_2[2] * *(double *)(param_1 + 0xf0);
  dVar2 = *(double *)(param_1 + 0xa0);
  dVar3 = *(double *)(param_1 + 0xa8);
  dVar4 = *(double *)(param_1 + 0xb0);
  dVar8 = *(double *)(param_1 + 0xb8);
  dVar11 = dVar10 * dVar2 - dVar9 * dVar3;
  dVar12 = dVar7 * dVar3 - dVar10 * dVar4;
  dVar13 = dVar9 * dVar4 - dVar2 * dVar7;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  dVar10 = (dVar4 * dVar12 - dVar2 * dVar11) + *(double *)(param_1 + 0xb8) * dVar13 + dVar10 +
           *(double *)(param_1 + 200);
  local_68 = dVar11 * dVar8 + dVar7 + (dVar13 * dVar2 - dVar12 * dVar3) +
             *(double *)(param_1 + 0xd0);
  local_78._8_4_ = SUB84(dVar10,0);
  local_78._0_8_ =
       (dVar11 * dVar3 - dVar13 * dVar4) + dVar8 * dVar12 + dVar9 + *(double *)(param_1 + 0xc0);
  local_78._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  pcVar1 = *(code **)(param_1 + 0x50);
  plVar6 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x60);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  dVar8 = (double)(*pcVar1)(uVar5,local_78);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar8 * *(double *)(param_1 + 0x90));
}



// FUNCTION 146ba039e FUN_146ba039e body=2121 status=ok
// SIG undefined FUN_146ba039e(void)

ulonglong FUN_146ba039e(char *param_1,int param_2,double *param_3,double *param_4)

{
  char *pcVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  code *pcVar6;
  double dVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_2a8 [32];
  double *local_288;
  double local_280;
  undefined4 local_26c;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  double dStack_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  pcVar1 = param_1 + 0x90;
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = '\0';
  param_1[0x9b] = '\0';
  if (*(int *)(param_1 + 0x9c) < 0) {
    FUN_146be7820(pcVar1,0);
  }
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  local_1c8 = *param_4;
  uStack_1c0 = param_4[1];
  local_88 = *param_3;
  dStack_80 = param_3[1];
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = 0.0;
  uStack_128 = 0.0;
  local_120 = 0.0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0.0;
  local_e0 = 0.0;
  dStack_d8 = 0.0;
  local_288 = (double *)0x3cb0000000000000;
  FUN_146ba91a4(&local_148,param_2);
  *(int *)(param_1 + 0x30) = (int)local_148;
  if ((int)local_148 < 3) {
    if ((int)local_148 == 2) {
      *(double *)(param_1 + 0x78) = dStack_d8;
      *(undefined4 *)(param_1 + 0x68) = (undefined4)uStack_e8;
      *(undefined4 *)(param_1 + 0x6c) = uStack_e8._4_4_;
      *(undefined4 *)(param_1 + 0x70) = (undefined4)local_e0;
      *(undefined4 *)(param_1 + 0x74) = local_e0._4_4_;
      *(double *)(param_1 + 0x80) =
           dStack_d8 * local_120 + uStack_e8 * local_130 + local_e0 * uStack_128;
    }
    else if ((int)local_148 == 1) {
      local_1b8 = local_120;
      local_1c8 = local_130;
      uStack_1c0 = uStack_128;
      uStack_1a0 = uStack_108;
      uStack_1b0 = uStack_118;
      uStack_1a8 = local_110;
      *(undefined4 *)(param_1 + 0x38) = (undefined4)local_130;
      *(undefined4 *)(param_1 + 0x3c) = local_130._4_4_;
      *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_128;
      *(undefined4 *)(param_1 + 0x44) = uStack_128._4_4_;
      *(double *)(param_1 + 0x48) = local_120;
      *(undefined8 *)(param_1 + 0x50) = uStack_118;
      *(undefined8 *)(param_1 + 0x58) = local_110;
      *(undefined8 *)(param_1 + 0x60) = uStack_108;
    }
  }
  else {
    local_1c8._0_4_ = local_138;
    (*(code *)*param_3)(&local_1e0,param_3[1],&local_1c8);
    local_1c8._0_4_ = uStack_140._4_4_;
    (*(code *)*param_3)(&local_1f8,param_3[1],&local_1c8);
    local_1c8._0_4_ = (undefined4)uStack_140;
    (*(code *)*param_3)(&local_210,param_3[1],&local_1c8);
    local_1c8 = (double)CONCAT44(local_1c8._4_4_,local_148._4_4_);
    (*(code *)*param_3)(&local_228,param_3[1],&local_1c8);
    local_1c8 = local_228;
    uStack_1c0 = local_220;
    local_1b8 = dStack_218;
    local_88 = local_210;
    dStack_80 = local_208;
    local_78 = dStack_200;
    local_a8 = local_1f8;
    dStack_a0 = dStack_1f0;
    local_98 = local_1e8;
    local_c8 = local_1e0;
    local_c0 = local_1d8;
    local_b8 = local_1d0;
    dVar17 = (double)FUN_146bb2dfa(&local_1c8);
    if ((dVar17 != 0.0) || (NAN(dVar17))) {
      uVar18 = (undefined4)uStack_140;
      uVar19 = uStack_140._4_4_;
      iVar3 = *(int *)(param_1 + 0x98);
      lVar15 = (longlong)iVar3;
      *(uint *)(param_1 + 0x98) = iVar3 + 1U;
      uVar14 = local_138;
      if (*(uint *)(param_1 + 0x9c) < iVar3 + 1U) {
        local_26c = local_138;
        FUN_146bd78c8(pcVar1,iVar3);
        uVar14 = local_26c;
      }
      uVar9 = local_138;
      lVar4 = *(longlong *)(param_1 + 0x90);
      *(undefined4 *)(lVar4 + lVar15 * 0xc) = uVar18;
      *(undefined4 *)(lVar4 + 4 + lVar15 * 0xc) = uVar19;
      *(undefined4 *)(lVar4 + 8 + lVar15 * 0xc) = uVar14;
      uVar18 = local_148._4_4_;
      iVar3 = *(int *)(param_1 + 0x98);
      lVar15 = (longlong)iVar3;
      *(uint *)(param_1 + 0x98) = iVar3 + 1U;
      uVar19 = uStack_140._4_4_;
      if (*(uint *)(param_1 + 0x9c) < iVar3 + 1U) {
        local_26c = uStack_140._4_4_;
        FUN_146bd78c8(pcVar1,iVar3);
        uVar19 = local_26c;
      }
      lVar4 = *(longlong *)(param_1 + 0x90);
      *(undefined4 *)(lVar4 + lVar15 * 0xc) = uVar18;
      *(undefined4 *)(lVar4 + 4 + lVar15 * 0xc) = uVar9;
      *(undefined4 *)(lVar4 + 8 + lVar15 * 0xc) = uVar19;
      uVar18 = local_148._4_4_;
      uVar19 = (undefined4)uStack_140;
      iVar3 = *(int *)(param_1 + 0x98);
      lVar15 = (longlong)iVar3;
      *(uint *)(param_1 + 0x98) = iVar3 + 1U;
      uVar14 = local_138;
      if (*(uint *)(param_1 + 0x9c) < iVar3 + 1U) {
        local_26c = local_138;
        FUN_146bd78c8(pcVar1,iVar3);
        uVar14 = local_26c;
      }
      lVar4 = *(longlong *)(param_1 + 0x90);
      *(undefined4 *)(lVar4 + lVar15 * 0xc) = uVar18;
      *(undefined4 *)(lVar4 + 4 + lVar15 * 0xc) = uVar19;
      *(undefined4 *)(lVar4 + 8 + lVar15 * 0xc) = uVar14;
      uVar18 = local_148._4_4_;
      uVar19 = uStack_140._4_4_;
      iVar3 = *(int *)(param_1 + 0x98);
      lVar15 = (longlong)iVar3;
      *(uint *)(param_1 + 0x98) = iVar3 + 1U;
      uVar14 = (undefined4)uStack_140;
      if (*(uint *)(param_1 + 0x9c) < iVar3 + 1U) {
        local_26c = (undefined4)uStack_140;
        FUN_146bd78c8(pcVar1,iVar3);
        uVar14 = local_26c;
      }
      lVar4 = *(longlong *)(param_1 + 0x90);
      *(undefined4 *)(lVar4 + lVar15 * 0xc) = uVar18;
      *(undefined4 *)(lVar4 + 4 + lVar15 * 0xc) = uVar19;
      *(undefined4 *)(lVar4 + 8 + lVar15 * 0xc) = uVar14;
      param_1[0x88] = '\x04';
      param_1[0x89] = '\0';
      param_1[0x8a] = '\0';
      param_1[0x8b] = '\0';
      iVar3 = *(int *)(param_1 + 0x10);
      iVar8 = param_2;
      if (0 < iVar3) {
        iVar8 = iVar3;
      }
      dVar17 = *(double *)(param_1 + 8);
      local_188 = 0;
      local_180 = 0;
      local_1c8 = 0.0;
      uStack_1c0 = 0.0;
      local_1b8 = 0.0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      local_17c = 0xffffffff00000080;
      local_174 = 0;
      local_168 = 0;
      local_160 = 0;
      dVar2 = *(double *)(param_1 + 0x18);
      uVar18 = SUB84(dVar2,0);
      uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (0.0 < *(double *)(param_1 + 0x20)) {
        local_a8 = (double)CONCAT44(local_a8._4_4_,local_148._4_4_);
        (*(code *)*param_3)(&local_88,param_3[1]);
        local_c8 = CONCAT44(local_c8._4_4_,(undefined4)uStack_140);
        (*(code *)*param_3)(&local_a8,param_3[1]);
        dVar7 = SQRT((local_78 - local_98) * (local_78 - local_98) +
                     (local_88 - local_a8) * (local_88 - local_a8) +
                     (dStack_80 - dStack_a0) * (dStack_80 - dStack_a0)) *
                *(double *)(param_1 + 0x20);
        uVar16 = -(ulonglong)(dVar7 <= dVar2);
        uVar16 = uVar16 & (ulonglong)dVar2 | ~uVar16 & (ulonglong)dVar7;
        uVar18 = (undefined4)uVar16;
        uVar19 = (undefined4)(uVar16 >> 0x20);
      }
      local_158 = CONCAT44(uVar19,uVar18);
      FUN_146badfa4(&local_1c8,pcVar1);
      local_238 = *param_4;
      local_288 = &local_238;
      local_230 = param_4[1];
      local_248 = *param_3;
      local_240 = param_3[1];
      FUN_146bae1fa(&local_1c8,pcVar1,param_2);
      iVar11 = *(int *)(param_1 + 0x88);
      if (iVar11 < iVar8) {
        do {
          pcVar5 = *(char **)(param_1 + 0x28);
          if ((iVar11 * -0x3d70a3d7 + 0x51eb850U >> 2 | iVar11 * 0x40000000) < 0x28f5c29 &&
              pcVar5 != (char *)0x0) {
            if (*pcVar5 == '\0') {
              pcVar6 = *(code **)(pcVar5 + 0x70);
              plVar13 = (longlong *)(pcVar5 + 0x90);
              if (*(longlong **)(pcVar5 + 0x80) != (longlong *)0x0) {
                plVar13 = *(longlong **)(pcVar5 + 0x80);
              }
              uVar12 = (**(code **)(*plVar13 + 8))();
              cVar10 = (*pcVar6)(uVar12);
              *pcVar5 = cVar10;
              if (cVar10 == '\0') goto LAB_146ba0ad9;
            }
            uVar16 = 0;
            goto LAB_146ba0bd2;
          }
LAB_146ba0ad9:
          FUN_146bae788(&local_1c8,&local_88,0 < iVar3);
          if ((int)local_88 == -1) break;
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
          local_258 = *param_3;
          local_250 = param_3[1];
          local_288 = (double *)CONCAT44(local_288._4_4_,local_88._4_4_);
          local_280 = dVar17 * dVar17;
          cVar10 = FUN_146bae97e(&local_1c8,pcVar1,&local_258);
          if (cVar10 == '\0') {
            local_268 = *param_3;
            local_260 = param_3[1];
            FUN_146baf48c(&local_1c8,local_88,&local_268);
          }
          iVar11 = *(int *)(param_1 + 0x88);
        } while (iVar11 < iVar8);
      }
      uVar16 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      if ((*param_1 == '\x01') && ((double *)(param_1 + 0xa0) != &local_1c8)) {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_1400020a8();
        }
        *(double *)(param_1 + 0xa0) = local_1c8;
        local_1c8 = 0.0;
        *(undefined4 *)(param_1 + 0xa8) = (undefined4)uStack_1c0;
        *(undefined4 *)(param_1 + 0xac) = uStack_1c0._4_4_;
        uStack_1c0 = 0.0;
      }
LAB_146ba0bd2:
      FUN_146baf522(&local_1c8);
      goto LAB_146ba056f;
    }
    *(double *)(param_1 + 0x78) = dStack_d8;
    *(undefined4 *)(param_1 + 0x68) = (undefined4)uStack_e8;
    *(undefined4 *)(param_1 + 0x6c) = uStack_e8._4_4_;
    *(undefined4 *)(param_1 + 0x70) = (undefined4)local_e0;
    *(undefined4 *)(param_1 + 0x74) = local_e0._4_4_;
    *(double *)(param_1 + 0x80) =
         dStack_d8 * local_120 + uStack_e8 * local_130 + local_e0 * uStack_128;
    param_1[0x30] = '\x02';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
  }
  uVar16 = 0;
LAB_146ba056f:
  if ((local_70 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba0be8 FUN_146ba0be8 body=128 status=ok
// SIG undefined FUN_146ba0be8(void)

void FUN_146ba0be8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1403e3958(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x18 + *param_1),0,(longlong)(param_2 - iVar1) * 0x18);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140704026(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ba0c6a FUN_146ba0c6a body=339 status=ok
// SIG undefined FUN_146ba0c6a(void)

void FUN_146ba0c6a(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f361f0;
  FUN_146bd4869(param_1[0x58],*(undefined4 *)(param_1 + 0x59));
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_146bd42bb(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_146bd4656(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_146bd42bb(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_146bd7fc0(param_1 + 0x47);
  FUN_146bd8008(param_1 + 0x3e);
  FUN_146bd42bb(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_146bd4024(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    plVar1 = param_1 + 0x2a;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x28];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_146bd8050(param_1);
  return;
}



// FUNCTION 146ba0dbe FUN_146ba0dbe body=671 status=ok
// SIG undefined FUN_146ba0dbe(void)

void FUN_146ba0dbe(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_348 [32];
  undefined1 local_328;
  longlong local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined4 local_300;
  uint local_2fc;
  uint *local_2f8;
  undefined4 *puStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined2 local_2c0;
  undefined1 local_2be;
  undefined1 local_2b8 [544];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (*(char *)(param_1 + 0x2c8) == '\0') {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_328 = 0;
    FUN_1411b354a(local_2b8,0,0,0);
    if ((longlong)*(int *)(param_1 + 0x228) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x220);
      local_320 = lVar6 + (longlong)*(int *)(param_1 + 0x228) * 0xc;
      do {
        lVar7 = 0;
        do {
          local_2fc = *(uint *)(lVar6 + lVar7 * 4);
          if ((int)uStack_90 != local_64) {
            puVar4 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar4 = local_60;
            }
            iVar3 = *(int *)(puVar4 + (ulonglong)(local_50 - 1U & local_2fc) * 4);
            while (iVar3 != -1) {
              lVar1 = local_98 + (longlong)iVar3 * 0x10;
              if (*(uint *)(local_98 + (longlong)iVar3 * 0x10) == local_2fc) {
                if ((lVar1 != 0) &&
                   (puVar5 = (undefined4 *)(lVar1 + 4), puVar5 != (undefined4 *)0x0))
                goto LAB_146ba0fc2;
                break;
              }
              iVar3 = *(int *)(lVar1 + 8);
            }
          }
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(local_2fc >> 9) * 8);
          local_308 = *(undefined8 *)(lVar1 + 0x10 + (ulonglong)(local_2fc & 0x1ff) * 0x18);
          puVar2 = (undefined8 *)(lVar1 + (ulonglong)(local_2fc & 0x1ff) * 0x18);
          local_318 = *(undefined4 *)puVar2;
          uStack_314 = *(undefined4 *)((longlong)puVar2 + 4);
          local_2f8 = (uint *)*puVar2;
          uStack_310 = *(undefined4 *)(puVar2 + 1);
          uStack_30c = *(undefined4 *)((longlong)puVar2 + 0xc);
          puStack_2f0 = (undefined4 *)puVar2[1];
          local_2d8 = DAT_14c846338;
          local_2e0 = DAT_14c846330;
          local_2cc = DAT_14c846338;
          local_2d4 = DAT_14c846330;
          local_2c8 = DAT_14c84635c;
          local_2c0 = 0;
          local_2be = 0;
          local_2e8 = local_308;
          local_300 = FUN_146c02208(local_2b8,&local_2f8);
          local_2f8 = &local_2fc;
          puStack_2f0 = &local_300;
          FUN_140263e2a(&local_98,&local_318,&local_2f8,0);
          puVar5 = &local_300;
LAB_146ba0fc2:
          *(undefined4 *)(lVar6 + lVar7 * 4) = *puVar5;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
        lVar6 = lVar6 + 0xc;
      } while (lVar6 != local_320);
    }
    FUN_146c00942(param_1,local_2b8);
    *(undefined1 *)(param_1 + 0x2c8) = 1;
    FUN_141082778(local_2b8);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba105e FUN_146ba105e body=104 status=ok
// SIG undefined FUN_146ba105e(void)

void FUN_146ba105e(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_68[0] = param_3;
  FUN_146ba10c8(param_1,param_2,local_68);
  if (local_58 != 0) {
    plVar1 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar1 = local_38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba10c8 FUN_146ba10c8 body=178 status=ok
// SIG undefined FUN_146ba10c8(void)

void FUN_146ba10c8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  FUN_146bee8b4(plVar1);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_1447ab16c(plVar1,0);
  }
  lVar3 = FUN_14001cc68(0x2d0,0x10);
  FUN_146ba11ba(lVar3,param_2,param_3,param_1 + 0x60);
  if (*(char *)(lVar3 + 0x2c9) == '\x01') {
    if (lVar3 != 0) {
      FUN_146ba12c2(lVar3);
      FUN_1400020a8(lVar3);
      return;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
      FUN_1456bd870(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar3;
  }
  return;
}



// FUNCTION 146ba117a FUN_146ba117a body=62 status=ok
// SIG undefined FUN_146ba117a(void)

void FUN_146ba117a(longlong param_1,int param_2)

{
  FUN_146bee8b4();
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1447ab16c(param_1,param_2);
  return;
}



// FUNCTION 146ba11ba FUN_146ba11ba body=263 status=ok
// SIG undefined FUN_146ba11ba(void)

longlong FUN_146ba11ba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1411b354a(param_1,0,0,0,0);
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0xffefffffffffffff;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x270) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x274) = uVar1;
  *(undefined4 *)(param_1 + 0x278) = uVar2;
  *(undefined4 *)(param_1 + 0x27c) = uVar3;
  *(undefined8 *)(param_1 + 0x280) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x288) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x290) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x298) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x2a8) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x2b0) = 0xffefffffffffffff;
  *(undefined2 *)(param_1 + 0x2b8) = 0;
  *(undefined1 *)(param_1 + 0x2ba) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0x7fefffffffffffff;
  *(undefined2 *)(param_1 + 0x2c8) = 0;
  FUN_146c005f0(param_1,param_2,0,0,0,0);
  FUN_146ba130a(param_1,param_3,param_4);
  return param_1;
}



// FUNCTION 146ba12c2 FUN_146ba12c2 body=72 status=ok
// SIG undefined FUN_146ba12c2(void)

void FUN_146ba12c2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  FUN_141082778(param_1);
  return;
}



// FUNCTION 146ba130a FUN_146ba130a body=1096 status=ok
// SIG undefined FUN_146ba130a(void)

void FUN_146ba130a(double param_1,char *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_148 [32];
  undefined **local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  double local_e0;
  undefined **local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_145c688c4(param_1,&local_c8,0);
  dVar12 = (double)(-(ulonglong)(0.0 <= dStack_a0 - local_b8) & (ulonglong)(dStack_a0 - local_b8));
  dVar11 = (double)(-(ulonglong)(0.0 <= local_a8 - dStack_c0) & (ulonglong)(local_a8 - dStack_c0));
  uVar4 = -(ulonglong)(dVar12 <= dVar11);
  dVar11 = (double)(~uVar4 & (ulonglong)dVar12 | uVar4 & (ulonglong)dVar11);
  dVar12 = (double)(-(ulonglong)(0.0 <= dStack_b0 - (double)local_c8) &
                   (ulonglong)(dStack_b0 - (double)local_c8));
  uVar4 = -(ulonglong)(dVar11 <= dVar12);
  dVar12 = (double)(uVar4 & (ulonglong)dVar12 | ~uVar4 & (ulonglong)dVar11);
  if (100000000.0 <= dVar12) {
    dVar12 = 100000000.0;
  }
  if (dVar12 <= 9.999999747378752e-05) {
    dVar12 = 9.999999747378752e-05;
  }
  dVar11 = 1.0 / dVar12;
  if (*param_2 == '\x01') {
    local_128 = &PTR_FUN_149f36300;
    dStack_110 = (double)((ulonglong)dStack_110 & 0xffffffffffffff00);
    local_e0 = 0.0;
    local_118 = dVar11 * 9.999999974752427e-07;
    if (local_118 <= 2.220446049250313e-16) {
      local_118 = 2.220446049250313e-16;
    }
    local_108 = 0.0;
    dStack_100 = 0.0;
    local_f8._0_4_ = (uint)local_f8 & 0xffffff00;
    local_f8._4_4_ = 0;
    uStack_f0._0_4_ = 0;
    uStack_f0._4_4_ = 0;
    dStack_e8._0_4_ = 0;
    dStack_120 = param_1;
    FUN_146c3d996();
  }
  pcVar1 = *(code **)(param_2 + 0x10);
  if (pcVar1 == (code *)0x0) {
    uVar5 = SUB84(dStack_a0,0);
    uVar6 = (undefined4)((ulonglong)dStack_a0 >> 0x20);
    uVar7 = SUB84(local_a8,0);
    uVar8 = (undefined4)((ulonglong)local_a8 >> 0x20);
    uVar9 = SUB84(dStack_b0,0);
    uVar10 = (undefined4)((ulonglong)dStack_b0 >> 0x20);
  }
  else {
    plVar3 = (longlong *)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_2 + 0x20);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,param_1,&local_c8);
    FUN_145c688c4(param_1,&local_128,0);
    local_a8 = local_108;
    dStack_a0 = dStack_100;
    local_b8 = local_118;
    dStack_b0 = dStack_110;
    local_c8 = local_128;
    dStack_c0 = dStack_120;
    uVar7 = SUB84(local_108,0);
    uVar8 = (undefined4)((ulonglong)local_108 >> 0x20);
    uVar5 = SUB84(dStack_100,0);
    uVar6 = (undefined4)((ulonglong)dStack_100 >> 0x20);
    uVar9 = SUB84(dStack_110,0);
    uVar10 = (undefined4)((ulonglong)dStack_110 >> 0x20);
    dVar11 = (double)(-(ulonglong)(0.0 <= dStack_100 - local_118) &
                     (ulonglong)(dStack_100 - local_118));
    dVar12 = (double)(-(ulonglong)(0.0 <= local_108 - dStack_120) &
                     (ulonglong)(local_108 - dStack_120));
    uVar4 = -(ulonglong)(dVar11 <= dVar12);
    dVar11 = (double)(~uVar4 & (ulonglong)dVar11 | uVar4 & (ulonglong)dVar12);
    dVar12 = (double)(-(ulonglong)(0.0 <= dStack_110 - (double)local_128) &
                     (ulonglong)(dStack_110 - (double)local_128));
    uVar4 = -(ulonglong)(dVar11 <= dVar12);
    dVar12 = (double)(uVar4 & (ulonglong)dVar12 | ~uVar4 & (ulonglong)dVar11);
    if (100000000.0 <= dVar12) {
      dVar12 = 100000000.0;
    }
    if (dVar12 <= 9.999999747378752e-05) {
      dVar12 = 9.999999747378752e-05;
    }
    dVar11 = 1.0 / dVar12;
  }
  local_108 = -dVar11;
  local_f8 = ((double)CONCAT44(uVar6,uVar5) + local_b8) * 0.5 * local_108;
  dStack_100 = ((double)CONCAT44(uVar8,uVar7) + dStack_c0) * 0.5 * local_108;
  local_108 = local_108 * ((double)CONCAT44(uVar10,uVar9) + (double)local_c8) * 0.5;
  local_128 = (undefined **)0x0;
  dStack_120 = 0.0;
  local_118 = 0.0;
  dStack_110 = 1.0;
  local_e0 = DAT_14c846520 * dVar11;
  dStack_e8 = DAT_14c846518 * dVar11;
  uStack_f0 = dVar11 * DAT_14c846510;
  FUN_146c3cd49(param_1,&local_128,0);
  param_3[2] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[3] = 0x3ff0000000000000;
  param_3[4] = ((double)local_c8 + dStack_b0) * 0.5;
  param_3[5] = (dStack_c0 + local_a8) * 0.5;
  param_3[6] = (local_b8 + dStack_a0) * 0.5;
  param_3[7] = dVar12;
  param_3[8] = dVar12;
  param_3[9] = dVar12;
  FUN_146ba19b8(param_1);
  FUN_146ba1b50(param_1);
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba1754 FUN_146ba1754 body=611 status=ok
// SIG undefined FUN_146ba1754(void)

longlong FUN_146ba1754(longlong param_1,longlong *param_2,undefined8 *param_3,undefined1 param_4,
                      undefined8 param_5,int param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  longlong local_68;
  undefined2 local_60;
  undefined1 local_5e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FUN_1411b354a(param_1,0,0,0);
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0xffefffffffffffff;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x270) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x274) = uVar4;
  *(undefined4 *)(param_1 + 0x278) = uVar5;
  *(undefined4 *)(param_1 + 0x27c) = uVar6;
  *(undefined8 *)(param_1 + 0x280) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x288) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x290) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x298) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x2a8) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x2b0) = 0xffefffffffffffff;
  *(undefined2 *)(param_1 + 0x2b8) = 0;
  *(undefined1 *)(param_1 + 0x2ba) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0x7fefffffffffffff;
  *(undefined2 *)(param_1 + 0x2c8) = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar8 = 0;
    do {
      local_88 = (double)*(float *)(lVar2 + 8 + lVar8);
      local_90 = (double)*(float *)(lVar2 + 4 + lVar8);
      local_98 = (double)*(float *)(lVar2 + lVar8);
      local_78 = DAT_14c846338;
      local_80 = DAT_14c846330;
      local_6c = DAT_14c846338;
      uStack_74 = (undefined4)DAT_14c846330;
      uStack_70 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
      local_68 = DAT_14c84635c;
      local_60 = 0;
      local_5e = 0;
      FUN_146c02208(param_1,&local_98);
      lVar8 = lVar8 + 0xc;
    } while ((longlong)(int)lVar3 * 0xc != lVar8);
  }
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    piVar9 = (int *)*param_3;
    piVar1 = piVar9 + (longlong)*(int *)(param_3 + 1) * 3;
    do {
      local_98 = (double)CONCAT44(piVar9[1] + param_6,*piVar9 + param_6);
      local_90 = (double)CONCAT44(local_90._4_4_,piVar9[2] + param_6);
      FUN_146c01152(param_1,&local_98,0);
      piVar9 = piVar9 + 3;
    } while (piVar9 != piVar1);
  }
  local_88 = 0.0;
  local_78 = 0;
  uStack_74 = 0;
  local_98 = (double)CONCAT71(local_98._1_7_,param_4);
  FUN_146ba130a(param_1,&local_98,param_5);
  if (local_88 != 0.0) {
    plVar7 = (longlong *)CONCAT44(uStack_74,local_78);
    if ((longlong *)CONCAT44(uStack_74,local_78) == (longlong *)0x0) {
      plVar7 = &local_68;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba19b8 FUN_146ba19b8 body=407 status=ok
// SIG undefined FUN_146ba19b8(void)

undefined4 FUN_146ba19b8(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined1 *local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8[0] = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 0xffefffffffffffff;
  local_a8 = 0xffefffffffffffff;
  local_a0 = 0;
  local_90 = DAT_14c8464e0;
  uStack_88 = DAT_14c8464e8;
  local_80 = DAT_14c8464f0;
  local_78 = DAT_14c8463a0;
  uStack_70 = DAT_14c8463a8;
  local_68 = DAT_14c8463b0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_d0 = &local_e0;
  local_d8 = &LAB_142970c98;
  local_e8 = &local_f8;
  local_f0 = &LAB_142970c64;
  local_f8 = param_1;
  local_e0 = param_1;
  uVar1 = FUN_146ba039e(local_c8,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24));
  if ((char)uVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x2c9) = 1;
  }
  else {
    if ((longlong *)(param_1 + 0x220) != &local_38) {
      if (*(longlong *)(param_1 + 0x220) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x220) = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x228) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0x22c) = uStack_30._4_4_;
      uStack_30 = 0;
    }
    FUN_146ba2b00(param_1);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba1b50 FUN_146ba1b50 body=312 status=ok
// SIG undefined FUN_146ba1b50(void)

void FUN_146ba1b50(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = param_1;
  FUN_146ba2d40(&local_98,param_1);
  *(undefined8 *)(param_1 + 0x280) = local_88;
  *(undefined8 *)(param_1 + 0x270) = local_98;
  *(undefined8 *)(param_1 + 0x278) = uStack_90;
  local_48 = *(undefined4 *)(param_1 + 0x270);
  uStack_44 = *(undefined4 *)(param_1 + 0x274);
  uStack_40 = *(undefined4 *)(param_1 + 0x278);
  uStack_3c = *(undefined4 *)(param_1 + 0x27c);
  local_38 = *(undefined8 *)(param_1 + 0x280);
  uVar2 = FUN_14295ddb0(param_1);
  *(undefined8 *)(param_1 + 0x260) = uVar2;
  local_68 = *(undefined4 *)(param_1 + 0x270);
  uStack_64 = *(undefined4 *)(param_1 + 0x274);
  uStack_60 = *(undefined4 *)(param_1 + 0x278);
  uStack_5c = *(undefined4 *)(param_1 + 0x27c);
  local_58 = *(undefined8 *)(param_1 + 0x280);
  uVar2 = FUN_14295dfac(&local_28);
  *(undefined8 *)(param_1 + 600) = uVar2;
  FUN_145c688c4(param_1,&local_98,0);
  *(undefined4 *)(param_1 + 0x2a8) = local_78;
  *(undefined4 *)(param_1 + 0x2ac) = uStack_74;
  *(undefined4 *)(param_1 + 0x2b0) = uStack_70;
  *(undefined4 *)(param_1 + 0x2b4) = uStack_6c;
  *(undefined8 *)(param_1 + 0x298) = local_88;
  *(undefined8 *)(param_1 + 0x2a0) = uStack_80;
  *(undefined8 *)(param_1 + 0x288) = local_98;
  *(undefined8 *)(param_1 + 0x290) = uStack_90;
  dVar1 = *(double *)(param_1 + 0x260);
  uVar3 = SUB84(dVar1,0);
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 < 0.0) {
    *(undefined1 *)(param_1 + 0x2b8) = 1;
    *(undefined8 *)(param_1 + 0x260) = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  *(double *)(param_1 + 0x2c0) = *(double *)(param_1 + 600) - (double)CONCAT44(uVar4,uVar3);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba1c8a FUN_146ba1c8a body=258 status=ok
// SIG undefined FUN_146ba1c8a(void)

void FUN_146ba1c8a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x50);
  FUN_146bee8b4(plVar1);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_1447ab16c(plVar1,0);
  }
  lVar3 = FUN_14001cc68(0x2d0,0x10);
  local_78 = param_1 + 0x60;
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_70 = param_5;
  FUN_146ba1754(lVar3,&local_68,&local_58,param_4);
  if (*(char *)(lVar3 + 0x2c9) == '\x01') {
    if (lVar3 != 0) {
      FUN_146ba12c2(lVar3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
      FUN_1456bd870(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba1da4 FUN_146ba1da4 body=1073 status=ok
// SIG undefined FUN_146ba1da4(void)

bool FUN_146ba1da4(longlong param_1,double *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  double *pdVar3;
  longlong *plVar4;
  double *pdVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_398 [40];
  longlong local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  double local_358;
  double local_348;
  double local_340;
  double local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  double local_320;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  double local_308;
  longlong *local_2f8;
  longlong local_2e8 [4];
  undefined1 local_2c8;
  double local_2b8 [4];
  double local_298;
  char local_278;
  double local_268;
  longlong *local_258 [2];
  longlong local_248 [4];
  double local_228 [2];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  longlong local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148 [216];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_398;
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 1) {
    FUN_146ba21d6(local_148,**(undefined8 **)(param_1 + 0x50),1);
    local_190 = 0;
    local_188 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_184 = 0xffffffff00000080;
    local_17c = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0x4000000000000000;
    local_150 = 2;
    local_1b8 = local_148;
    FUN_146bef8a8(&local_1b8,1);
    pdVar3 = param_2;
    pdVar5 = local_2b8;
    for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *pdVar5 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      pdVar5 = pdVar5 + 1;
    }
    local_268 = param_2[10];
    local_258[0] = (longlong *)0x0;
    if (local_268 != 0.0) {
      pdVar3 = param_2 + 0xe;
      if ((double *)param_2[0xc] != (double *)0x0) {
        pdVar3 = (double *)param_2[0xc];
      }
      (**(code **)*pdVar3)(pdVar3,local_258);
    }
    pdVar3 = param_2 + 0x12;
    pdVar5 = local_228;
    for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
      *pdVar5 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      pdVar5 = pdVar5 + 1;
    }
    local_218 = *(undefined4 *)(param_1 + 0x60);
    uStack_214 = *(undefined4 *)(param_1 + 100);
    uStack_210 = *(undefined4 *)(param_1 + 0x68);
    uStack_20c = *(undefined4 *)(param_1 + 0x6c);
    local_208 = *(undefined8 *)(param_1 + 0x70);
    uStack_200 = *(undefined8 *)(param_1 + 0x78);
    local_1f8 = *(undefined8 *)(param_1 + 0x80);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
    local_1e8 = *(undefined8 *)(param_1 + 0x90);
    uStack_1d0 = *(undefined8 *)(param_1 + 0xa0);
    local_1d8 = local_1d8 / *(double *)(param_1 + 0x98);
    local_1c8 = *(undefined8 *)(param_1 + 0xa8);
    local_2b8[1] = local_2b8[1] * local_1d8;
    local_2b8[3] = local_2b8[3] * local_1d8;
    local_298 = local_298 * local_1d8;
    local_228[0] = local_1d8 * local_228[0];
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    lVar2 = param_1 + 0x110;
    local_1d8 = *(double *)(param_1 + 0x98);
    FUN_146ba22a4(lVar2);
    local_370 = lVar2;
    FUN_146b9dbb6(lVar2,&local_1b8,local_2b8,0);
    if ((longlong)(int)param_3[1] != 0) {
      lVar2 = *param_3;
      lVar6 = (longlong)(int)param_3[1] * 0x18;
      do {
        FUN_146ba22f0(param_1 + 0x60,&local_330,lVar2);
        if (local_278 == '\0') {
          FUN_146bef8a8(&local_1b8,0);
          local_308 = local_320;
          local_318 = CONCAT44(uStack_32c,local_330);
          uStack_310 = uStack_328;
          uStack_30c = uStack_324;
          dVar7 = (double)FUN_146bed438(&local_1b8,*(undefined4 *)(local_1b8 + 0xcc),&local_318);
          if (dVar7 <= 0.5) goto LAB_146ba2082;
        }
        else {
LAB_146ba2082:
          local_318 = 0x7fefffffffffffff;
          local_308 = 0.0;
          local_2f8 = (longlong *)0x0;
          local_2c8 = 0;
          FUN_146ba2472(local_148,&local_348,&local_330,&local_318);
          if (local_308 != 0.0) {
            plVar4 = local_2f8;
            if (local_2f8 == (longlong *)0x0) {
              plVar4 = local_2e8;
            }
            (**(code **)(*plVar4 + 0x10))();
          }
          dVar7 = local_348 - (double)CONCAT44(uStack_32c,local_330);
          dVar8 = local_340 - (double)CONCAT44(uStack_324,uStack_328);
          dVar7 = SQRT((local_338 - local_320) * (local_338 - local_320) +
                       dVar8 * dVar8 + dVar7 * dVar7) - local_2b8[3];
          dVar8 = 0.0;
          if (0.0 <= dVar7) {
            dVar8 = dVar7;
          }
          local_368 = local_330;
          uStack_364 = uStack_32c;
          uStack_360 = uStack_328;
          uStack_35c = uStack_324;
          local_358 = local_320;
          FUN_146ba2518(local_370,&local_368,dVar8);
        }
        lVar2 = lVar2 + 0x18;
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != 0);
    }
    FUN_146ba2590(param_1);
    if (local_268 != 0.0) {
      plVar4 = local_258[0];
      if (local_258[0] == (longlong *)0x0) {
        plVar4 = local_248;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    local_168 = 0;
    if (local_170 != 0) {
      FUN_1400020a8();
    }
    FUN_146bddd50(&local_1b0);
    FUN_1457e5b52(local_148);
  }
  if ((local_70 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return iVar1 == 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba21d6 FUN_146ba21d6 body=206 status=ok
// SIG undefined FUN_146ba21d6(void)

undefined8 * FUN_146ba21d6(undefined8 *param_1,undefined8 param_2,char param_3)

{
  *param_1 = &PTR_FUN_149f3a9a0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_149f3aac0;
  param_1[9] = &LAB_146bee8fa;
  param_1[4] = &LAB_146beded0;
  param_1[0xc] = 0x3e45798ee2308c3a;
  FUN_141040b84(param_1 + 0xd);
  FUN_141040be6(param_1 + 0x10);
  FUN_141040be6(param_1 + 0x13);
  FUN_141040b84(param_1 + 0x16);
  param_1[0x19] = 0xffffffffffffffff;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (param_3 != '\0') {
    FUN_146bee918(param_1,0);
    param_1[2] = (ulonglong)(uint)(*(int *)(param_1[1] + 0x214) + *(int *)(param_1[1] + 0x218));
  }
  return param_1;
}



// FUNCTION 146ba22a4 FUN_146ba22a4 body=76 status=ok
// SIG undefined FUN_146ba22a4(void)

void FUN_146ba22a4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1447a8aa0(param_1,0);
  }
  if (-1 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_140cb0586(param_1 + 0x10,0);
  return;
}



// FUNCTION 146ba22f0 FUN_146ba22f0 body=385 status=ok
// SIG undefined FUN_146ba22f0(void)

double * FUN_146ba22f0(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar1 = *(double *)(param_1 + 0x38);
  dVar2 = *(double *)(param_1 + 0x40);
  uVar4 = -(ulonglong)(-dVar1 <= dVar1);
  uVar5 = -(ulonglong)(-dVar2 <= dVar2);
  dVar3 = *(double *)(param_1 + 0x48);
  uVar6 = -(ulonglong)(-dVar3 <= dVar3);
  local_70 = param_3[2] - *(double *)(param_1 + 0x30);
  local_78 = param_3[1] - *(double *)(param_1 + 0x28);
  local_80 = *param_3 - *(double *)(param_1 + 0x20);
  FUN_146bf2028(local_70,&local_68);
  *param_2 = (double)(-(ulonglong)
                       (1e-08 < (double)(uVar4 & (ulonglong)dVar1 | ~uVar4 & (ulonglong)-dVar1)) &
                     (ulonglong)(1.0 / dVar1)) * local_68;
  param_2[1] = (double)(-(ulonglong)
                         (1e-08 < (double)(uVar5 & (ulonglong)dVar2 | ~uVar5 & (ulonglong)-dVar2)) &
                       (ulonglong)(1.0 / dVar2)) * local_60;
  param_2[2] = (double)(-(ulonglong)
                         (1e-08 < (double)(uVar6 & (ulonglong)dVar3 | ~uVar6 & (ulonglong)-dVar3)) &
                       (ulonglong)(1.0 / dVar3)) * local_58;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba2472 FUN_146ba2472 body=165 status=ok
// SIG undefined FUN_146ba2472(void)

undefined4 * FUN_146ba2472(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_b8 [8];
  undefined1 local_b0 [120];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,local_b8);
  if (iVar1 < 0) {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
  }
  else {
    local_d8 = *param_3;
    uStack_d4 = param_3[1];
    uStack_d0 = param_3[2];
    uStack_cc = param_3[3];
    local_c8 = *(undefined8 *)(param_3 + 4);
    FUN_146bd7ec2(local_b0,param_1[1],iVar1);
    *(undefined8 *)(param_2 + 4) = local_28;
  }
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba2518 FUN_146ba2518 body=119 status=ok
// SIG undefined FUN_146ba2518(void)

void FUN_146ba2518(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1403e3958(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(param_2 + 4);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_144941252(param_1 + 2,iVar2);
  }
  *(undefined8 *)(param_1[2] + (longlong)iVar2 * 8) = param_3;
  return;
}



// FUNCTION 146ba2590 FUN_146ba2590 body=222 status=ok
// SIG undefined FUN_146ba2590(void)

void FUN_146ba2590(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  longlong *local_38;
  longlong local_30;
  undefined1 *local_28;
  longlong *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = param_1;
  if (*(int *)(param_1 + 0x58) == 1) {
    local_20 = &local_30;
    local_28 = &LAB_142970cd2;
    local_30 = param_1;
    FUN_14296236a(&local_18);
    FUN_146ba283c(param_1 + 0x110,0);
    FUN_144a127d2(**(longlong **)(param_1 + 0x50) + 0x248,*(undefined4 *)(param_1 + 0x118),1);
    if (0 < *(int *)(param_1 + 0x118)) {
      lVar1 = 0;
      do {
        *(int *)(*(longlong *)(**(longlong **)(param_1 + 0x50) + 0x248) + lVar1 * 4) = (int)lVar1;
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x118));
    }
  }
  else {
    local_38 = &local_30;
    local_40 = FUN_142970cf4;
    FUN_14296236a(&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ba2670 FUN_146ba2670 body=458 status=ok
// SIG undefined FUN_146ba2670(void)

void FUN_146ba2670(longlong param_1,double param_2,double param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_d8 [32];
  double *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x118) != 0) {
    local_b0 = param_1 + 0x110;
    uVar9 = 0;
    uVar10 = 0;
    if (0.0 <= param_3) {
      uVar9 = SUB84(param_3,0);
      uVar10 = (undefined4)((ulonglong)param_3 >> 0x20);
    }
    if (0 < *(int *)(param_1 + 0x58)) {
      uVar11 = 0;
      uVar12 = 0;
      if (0.0 <= param_2) {
        uVar11 = SUB84(param_2,0);
        uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
      }
      lVar7 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar7 * 8);
        iVar2 = *(int *)(lVar4 + 0x250);
        if ((longlong)iVar2 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x248);
          lVar5 = 0;
          do {
            lVar6 = (longlong)*(int *)(lVar4 + lVar5);
            local_88 = 0.0;
            dVar8 = *(double *)(*(longlong *)(param_1 + 0x120) + lVar6 * 8);
            if ((double)CONCAT44(uVar10,uVar9) <= dVar8 && dVar8 != (double)CONCAT44(uVar10,uVar9))
            {
              local_98 = *(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x10 + lVar6 * 0x18);
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + lVar6 * 0x18);
              local_a8 = *puVar1;
              uStack_a0 = puVar1[1];
              local_b8 = &local_88;
              cVar3 = FUN_146b9d348(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar7 * 8),
                                    &local_a8,dVar8,0);
              if (cVar3 != '\0') {
                if (local_88 < 0.0) {
                  dVar8 = sqrt(local_88);
                }
                else {
                  dVar8 = SQRT(local_88);
                }
                *(double *)(*(longlong *)(param_1 + 0x120) + lVar6 * 8) =
                     dVar8 - (double)CONCAT44(uVar12,uVar11);
              }
            }
            lVar5 = lVar5 + 4;
          } while ((longlong)iVar2 * 4 != lVar5);
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar7 * 8);
        }
        if (*(int *)(lVar4 + 0x254) < 0) {
          *(undefined4 *)(lVar4 + 0x250) = 0;
          FUN_14481578e(lVar4 + 0x248,0);
        }
        else {
          *(undefined4 *)(lVar4 + 0x250) = 0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x58));
    }
    FUN_146ba283c(local_b0,CONCAT44(uVar10,uVar9));
  }
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ba283c FUN_146ba283c body=199 status=ok
// SIG undefined FUN_146ba283c(void)

void FUN_146ba283c(longlong *param_1,double param_2)

{
  double *pdVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[3];
  if (0 < iVar3) {
    uVar5 = 0;
    do {
      lVar2 = param_1[2];
      lVar7 = (longlong)(int)uVar5;
      pdVar1 = (double *)(lVar2 + lVar7 * 8);
      if (*pdVar1 <= param_2 && param_2 != *pdVar1) {
        iVar6 = iVar3 + ~uVar5;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar2 + lVar7 * 8),(void *)(lVar2 + (longlong)(iVar3 - iVar6) * 8),
                  (longlong)iVar6 << 3);
          iVar3 = (int)param_1[3];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 3) = iVar3;
        iVar6 = (int)param_1[1];
        iVar4 = ~uVar5 + iVar6;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar7 * 0x18),
                  (void *)(*param_1 + (longlong)(iVar6 - iVar4) * 0x18),(longlong)iVar4 * 0x18);
          iVar6 = (int)param_1[1];
          iVar3 = (int)param_1[3];
        }
        *(int *)(param_1 + 1) = iVar6 + -1;
        uVar5 = uVar5 - 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar3);
  }
  return;
}



// FUNCTION 146ba2904 FUN_146ba2904 body=272 status=ok
// SIG undefined FUN_146ba2904(void)

void FUN_146ba2904(longlong param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  int param_6,undefined1 param_7)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 unaff_RBP;
  int iVar7;
  uint uVar8;
  
  iVar5 = param_6;
  if (param_2 < param_6) {
    iVar5 = param_2;
  }
  if (param_6 < 1) {
    iVar5 = param_2;
  }
  iVar1 = *(int *)(param_1 + 0x118);
  uVar6 = param_3 + iVar5;
  if (uVar6 != 0 && SCARRY4(param_3,iVar5) == (int)uVar6 < 0) {
    uVar8 = 0;
    iVar7 = *(int *)(param_1 + 0x58);
    do {
      iVar3 = iVar7 + 1;
      do {
        cVar4 = FUN_146ba2e02(param_1,uVar8 & 0xffffff01,param_4,
                              CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff,
                              0xbff0000000000000);
        if (cVar4 != '\0') break;
        bVar2 = 0 < iVar3;
        iVar3 = iVar3 + -1;
      } while (bVar2);
    } while ((*(int *)(param_1 + 0x58) != iVar7) &&
            (uVar8 = uVar8 + 1, iVar7 = *(int *)(param_1 + 0x58), uVar8 != uVar6));
  }
  if (0 < iVar1) {
    FUN_146ba2670(param_1,0x3f1a36e2eb1c432d,0xeb1c432d);
  }
  FUN_146ba2a14(param_1,iVar5,param_4,param_5,1,0,param_6,0,0);
  return;
}



// FUNCTION 146ba2a14 FUN_146ba2a14 body=234 status=ok
// SIG undefined FUN_146ba2a14(void)

undefined4
FUN_146ba2a14(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined4 local_c0;
  undefined4 uStack_b8;
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [4];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = 1;
  local_a8 = 0;
  local_98 = (longlong *)0x0;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  local_c8 = param_5;
  local_c7 = param_6;
  local_d4 = param_7;
  local_c0 = param_8;
  uStack_b8 = param_9;
  local_e8[0] = param_2;
  local_e0 = param_3;
  local_d0 = param_4;
  uVar1 = FUN_146ba5abc(param_8,local_e8);
  if (local_68 != 0) {
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar2 = local_48;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_a8 != 0) {
    plVar2 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar2 = local_88;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba2b00 FUN_146ba2b00 body=503 status=ok
// SIG undefined FUN_146ba2b00(void)

void FUN_146ba2b00(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_108 [32];
  double *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_146ba2cf8(param_1 + 0x230,*(undefined4 *)(param_1 + 0x228));
  if (0 < *(int *)(param_1 + 0x228)) {
    lVar12 = 8;
    lVar13 = 0;
    lVar14 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x220);
      uVar3 = *(uint *)(lVar4 + -8 + lVar12);
      lVar5 = *(longlong *)(param_1 + 0x10);
      lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8);
      uVar11 = (ulonglong)uVar3 & 0x1ff;
      local_68 = *(double *)(lVar6 + 0x10 + uVar11 * 0x18);
      pdVar10 = (double *)(lVar6 + uVar11 * 0x18);
      local_78 = *pdVar10;
      dStack_70 = pdVar10[1];
      local_80 = 0.0;
      lVar6 = *(longlong *)(lVar5 + (ulonglong)(*(uint *)(lVar4 + lVar12) >> 9) * 8);
      uVar11 = (ulonglong)*(uint *)(lVar4 + lVar12) & 0x1ff;
      local_a8 = *(undefined8 *)(lVar6 + 0x10 + uVar11 * 0x18);
      puVar1 = (undefined8 *)(lVar6 + uVar11 * 0x18);
      local_b8 = *puVar1;
      uStack_b0 = puVar1[1];
      uVar3 = *(uint *)(lVar4 + -4 + lVar12);
      lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8);
      uVar11 = (ulonglong)uVar3 & 0x1ff;
      local_c8 = *(undefined8 *)(lVar4 + 0x10 + uVar11 * 0x18);
      puVar2 = (undefined4 *)(lVar4 + uVar11 * 0x18);
      local_d8 = *puVar2;
      uStack_d4 = puVar2[1];
      uStack_d0 = puVar2[2];
      uStack_cc = puVar2[3];
      local_e8 = &local_80;
      FUN_146b9cae0(&local_98,&local_78,&local_d8,&local_b8);
      dVar7 = 0.0;
      pdVar10 = (double *)&DAT_14c8464e0;
      if (1e-08 <= local_80) {
        dVar7 = local_88 * local_68 + local_98 * local_78 + local_90 * dStack_70;
        pdVar10 = &local_98;
      }
      lVar4 = *(longlong *)(param_1 + 0x230);
      dVar8 = *pdVar10;
      dVar9 = pdVar10[1];
      *(double *)(lVar4 + 0x10 + lVar13) = pdVar10[2];
      *(double *)(lVar4 + lVar13) = dVar8;
      ((double *)(lVar4 + lVar13))[1] = dVar9;
      *(double *)(lVar4 + 0x18 + lVar13) = dVar7;
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x20;
      lVar12 = lVar12 + 0xc;
    } while (lVar14 < *(int *)(param_1 + 0x228));
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba2cf8 FUN_146ba2cf8 body=71 status=ok
// SIG undefined FUN_146ba2cf8(void)

void FUN_146ba2cf8(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bf2270();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146bf22f6();
      return;
    }
  }
  return;
}



// FUNCTION 146ba2d40 FUN_146ba2d40 body=193 status=ok
// SIG undefined FUN_146ba2d40(void)

void FUN_146ba2d40(double *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar2 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  if ((int)uVar2 < 1) {
    dVar5 = 0.0;
    dVar7 = 0.0;
    dVar6 = 0.0;
  }
  else {
    dVar6 = 0.0;
    uVar4 = 0;
    dVar7 = 0.0;
    dVar5 = 0.0;
    do {
      uVar3 = (ulonglong)(uVar4 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar4 >> 9) * 8) +
                             uVar3 * 2) - 1U) < 0xfffe) {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
        dVar6 = dVar6 + *(double *)(lVar1 + uVar3 * 0x18);
        dVar7 = dVar7 + *(double *)(lVar1 + 8 + uVar3 * 0x18);
        dVar5 = dVar5 + *(double *)(lVar1 + 0x10 + uVar3 * 0x18);
      }
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  *param_1 = dVar6;
  param_1[1] = dVar7;
  param_1[2] = dVar5;
  if (0 < *(int *)(param_2 + 0x50)) {
    dVar8 = 1.0 / (double)*(int *)(param_2 + 0x50);
    *param_1 = dVar6 * dVar8;
    param_1[1] = dVar7 * dVar8;
    param_1[2] = dVar5 * dVar8;
  }
  return;
}



// FUNCTION 146ba2e02 FUN_146ba2e02 body=5688 status=ok
// SIG undefined FUN_146ba2e02(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_146ba2e02(longlong param_1,char param_2,double param_3,char param_4,double param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  void *_Dst;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 unaff_RBP;
  undefined7 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  bool bVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 local_4b8 [32];
  double *local_498;
  double local_490;
  undefined8 local_488;
  longlong local_480;
  undefined1 local_478;
  undefined1 local_470;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  longlong local_440;
  undefined8 local_438;
  longlong local_430;
  double local_428;
  ulonglong local_420;
  int local_414;
  double local_410;
  longlong *local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a0;
  undefined4 local_398;
  longlong local_390;
  undefined4 local_388;
  longlong local_380;
  undefined4 local_378;
  uint local_370 [2];
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  longlong local_338;
  undefined8 uStack_330;
  longlong local_328;
  undefined8 uStack_320;
  longlong local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined8 uStack_300;
  double local_2f0 [3];
  longlong local_2d8;
  undefined8 uStack_2d0;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8 [3];
  double local_290;
  undefined4 uStack_28c;
  double local_288;
  double local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double local_250;
  undefined4 uStack_24c;
  double local_248;
  double local_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  char local_228;
  double local_218;
  double dStack_210;
  double adStack_208 [4];
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  longlong lStack_1c8;
  double local_1c0;
  double local_1b8;
  longlong lStack_1b0;
  double local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 local_180;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  undefined4 local_140 [6];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  char local_118;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_4b8;
  uVar11 = *(uint *)(param_1 + 0x58);
  uVar26 = (ulonglong)uVar11;
  uVar16 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar19 = CONCAT71(uVar16,1);
  if (uVar26 == 0) goto LAB_146ba2ff8;
  if (param_5 <= 0.0) {
    dVar30 = *(double *)(param_1 + 0xa8);
    uVar28 = (undefined4)*(undefined8 *)(param_1 + 0x98);
    uVar29 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    dVar32 = *(double *)(param_1 + 0xa0);
  }
  else {
    dVar30 = *(double *)(param_1 + 0xa8);
    dVar35 = *(double *)(param_1 + 0x98);
    uVar28 = SUB84(dVar35,0);
    uVar29 = (undefined4)((ulonglong)dVar35 >> 0x20);
    dVar32 = *(double *)(param_1 + 0xa0);
    if (dVar35 <= dVar32) {
      dVar35 = dVar32;
    }
    if (dVar35 <= dVar30) {
      dVar35 = dVar30;
    }
    if (dVar35 <= 2.220446049250313e-16) {
      dVar35 = 2.220446049250313e-16;
    }
    param_5 = param_5 / dVar35;
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  dVar35 = *(double *)(param_1 + 0x40);
  if ((0 < (int)uVar11) && (0 < *(int *)(param_1 + 0x118))) {
    uVar18 = 0;
    do {
      lVar22 = *(longlong *)(*plVar1 + uVar18 * 8);
      if (((*(char *)(lVar22 + 0x2b9) == '\0') &&
          (dVar36 = *(double *)(lVar22 + 0x2b0) - *(double *)(lVar22 + 0x298),
          dVar36 = (double)(-(ulonglong)(0.0 <= dVar36) & (ulonglong)dVar36),
          dVar41 = *(double *)(lVar22 + 0x2a8) - *(double *)(lVar22 + 0x290),
          dVar41 = (double)(-(ulonglong)(0.0 <= dVar41) & (ulonglong)dVar41),
          uVar27 = -(ulonglong)(dVar36 <= dVar41),
          dVar37 = *(double *)(lVar22 + 0x2a0) - *(double *)(lVar22 + 0x288),
          dVar41 = (double)(~uVar27 & (ulonglong)dVar36 | uVar27 & (ulonglong)dVar41),
          dVar37 = (double)(-(ulonglong)(0.0 <= dVar37) & (ulonglong)dVar37),
          uVar27 = -(ulonglong)(dVar41 <= dVar37),
          param_5 <= (double)(uVar27 & (ulonglong)dVar37 | ~uVar27 & (ulonglong)dVar41))) &&
         (*(int *)(lVar22 + 0x250) != 0)) {
        bVar21 = true;
        goto LAB_146ba3082;
      }
      uVar18 = uVar18 + 1;
    } while (uVar26 != uVar18);
  }
  if (param_4 != '\0') goto LAB_146ba2ff8;
  bVar21 = false;
LAB_146ba3082:
  if ((int)uVar11 < 1) goto LAB_146ba2ff8;
  if ((double)CONCAT44(uVar29,uVar28) <= dVar32) {
    uVar28 = SUB84(dVar32,0);
    uVar29 = (undefined4)((ulonglong)dVar32 >> 0x20);
  }
  if ((double)CONCAT44(uVar29,uVar28) <= dVar30) {
    uVar28 = SUB84(dVar30,0);
    uVar29 = (undefined4)((ulonglong)dVar30 >> 0x20);
  }
  if ((double)CONCAT44(uVar29,uVar28) <= 2.220446049250313e-16) {
    uVar28 = 0;
    uVar29 = 0x3cb00000;
  }
  param_3 = param_3 / (double)CONCAT44(uVar29,uVar28);
  bVar20 = 1;
  uVar18 = 0xffffffff;
  dVar30 = -1.79769313486232e+308;
  uVar19 = 0;
  bVar7 = false;
  do {
    lVar22 = *(longlong *)(*plVar1 + uVar19 * 8);
    if (((*(char *)(lVar22 + 0x2b9) == '\0') &&
        (dVar32 = *(double *)(lVar22 + 0x2b0) - *(double *)(lVar22 + 0x298),
        dVar32 = (double)(-(ulonglong)(0.0 <= dVar32) & (ulonglong)dVar32),
        dVar36 = *(double *)(lVar22 + 0x2a8) - *(double *)(lVar22 + 0x290),
        dVar36 = (double)(-(ulonglong)(0.0 <= dVar36) & (ulonglong)dVar36),
        uVar27 = -(ulonglong)(dVar32 <= dVar36),
        dVar41 = *(double *)(lVar22 + 0x2a0) - *(double *)(lVar22 + 0x288),
        dVar32 = (double)(~uVar27 & (ulonglong)dVar32 | uVar27 & (ulonglong)dVar36),
        dVar41 = (double)(-(ulonglong)(0.0 <= dVar41) & (ulonglong)dVar41),
        uVar27 = -(ulonglong)(dVar32 <= dVar41),
        param_5 <= (double)(uVar27 & (ulonglong)dVar41 | ~uVar27 & (ulonglong)dVar32))) &&
       (!(bool)(bVar21 & *(int *)(lVar22 + 0x250) == 0))) {
      dVar32 = *(double *)(lVar22 + 0x2c0);
      bVar7 = (bool)(bVar7 | param_3 * param_3 * param_3 < dVar32);
      if (dVar30 < dVar32) {
        if (param_2 == '\0') {
          if ((bVar20 & 1) != 0) goto LAB_146ba31c5;
LAB_146ba31d1:
          bVar20 = 0;
          uVar18 = uVar19 & 0xffffffff;
          dVar30 = dVar32;
        }
        else if ((bVar20 & 1) == 0) {
          if (*(char *)(lVar22 + 0x2b8) == '\0') goto LAB_146ba31d1;
        }
        else {
LAB_146ba31c5:
          uVar18 = uVar19 & 0xffffffff;
          bVar20 = *(byte *)(lVar22 + 0x2b8);
          dVar30 = dVar32;
        }
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar26 != uVar19);
  uVar19 = CONCAT71(uVar16,1);
  iVar25 = (int)uVar18;
  if ((iVar25 == -1) || (!bVar21 && !bVar7)) goto LAB_146ba2ff8;
  local_3d0 = (longlong)iVar25;
  local_430 = *(longlong *)(*plVar1 + local_3d0 * 8);
  uVar44 = (undefined4)*(undefined8 *)(local_430 + 600);
  uVar45 = (undefined4)((ulonglong)*(undefined8 *)(local_430 + 600) >> 0x20);
  local_2d8 = 0;
  uStack_2d0 = 0;
  dVar30 = *(double *)(local_430 + 0x298);
  dVar32 = *(double *)(local_430 + 0x2b0);
  dVar41 = *(double *)(local_430 + 0x288);
  dVar36 = *(double *)(local_430 + 0x290);
  dVar37 = *(double *)(local_430 + 0x2a8);
  dVar38 = *(double *)(local_430 + 0x2a0);
  local_2f0[2] = (dVar32 - dVar30) * 0.5;
  local_2f0[1] = (dVar37 - dVar36) * 0.5;
  local_2f0[0] = (dVar38 - dVar41) * 0.5;
  uVar26 = (ulonglong)((uint)(local_2f0[0] <= local_2f0[2]) * 2);
  if (local_2f0[0] <= local_2f0[1]) {
    uVar26 = (ulonglong)(local_2f0[1] <= local_2f0[2]) + 1;
  }
  uVar19 = 0;
  uVar18 = 0;
  local_414 = iVar25;
  local_408 = plVar1;
  do {
    uVar27 = uStack_2d0;
    if ((uVar26 == uVar19) || (param_5 <= local_2f0[uVar19])) {
      local_188 = DAT_14c8464f0;
      local_198 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_190 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      (&local_198)[uVar19] = 0x3ff0000000000000;
      lVar22 = (longlong)(int)uStack_2d0;
      uVar11 = (int)uStack_2d0 + 1;
      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar11);
      if (uStack_2d0._4_4_ < uVar11) {
        FUN_146bf2270(&local_2d8,uVar27 & 0xffffffff);
      }
      lVar22 = lVar22 * 0x20;
      *(double *)(local_2d8 + 0x10 + lVar22) = local_188;
      *(double *)(local_2d8 + lVar22) = local_198;
      ((double *)(local_2d8 + lVar22))[1] = uStack_190;
      *(double *)(local_2d8 + 0x18 + lVar22) =
           local_188 * (dVar30 + dVar32) * 0.5 +
           local_198 * (dVar41 + dVar38) * 0.5 + uStack_190 * (dVar36 + dVar37) * 0.5;
      if (uVar26 == uVar19) {
        uVar18 = uVar27 & 0xffffffff;
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != 3);
  local_420 = CONCAT44(local_420._4_4_,(int)uVar18);
  local_3d8 = param_1 + 0x110;
  dVar30 = cos(*(double *)(param_1 + 0x20) * 0.017453292519943295 * 0.5);
  local_440 = param_1;
  dVar32 = cos(*(double *)(param_1 + 0x28) * 0.017453292519943295 * 0.5);
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_338 = 0;
  uStack_330 = 0;
  uStack_330._0_4_ = 0;
  uVar24 = *(int *)(local_430 + 0x1d0) * 0x200 + *(int *)(local_430 + 0x1d4);
  uVar11 = 0;
  if (uVar24 != 0) {
    uVar11 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_430 + 0x1d8) - 1U)) {
      uVar26 = 1;
      uVar12 = 1;
      if (1 < (int)uVar24) {
        uVar12 = uVar24;
      }
      do {
        uVar14 = (uint)uVar26;
        uVar11 = uVar12;
        if (uVar12 == uVar14) break;
        uVar19 = uVar26 >> 9;
        uVar26 = (ulonglong)(uVar14 + 1);
        uVar11 = uVar14;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_430 + 0x1d8))[uVar19] +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    }
  }
  lVar22 = local_430;
  if (uVar11 == uVar24) {
    uStack_320._0_4_ = 0;
    uStack_310._0_4_ = 0;
  }
  else {
    do {
      lVar15 = *(longlong *)(*(longlong *)(lVar22 + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8);
      uVar26 = (ulonglong)((uVar11 & 0x1ff) << 4);
      uVar12 = *(uint *)(lVar15 + uVar26);
      uVar14 = *(uint *)(lVar15 + 4 + uVar26);
      iVar25 = *(int *)(lVar15 + 0xc + uVar26);
      FUN_146c13dec(lVar22,&local_350,*(undefined4 *)(lVar15 + 8 + uVar26));
      if (-1 < iVar25) {
        local_438 = CONCAT44(uVar45,uVar44);
        FUN_146c13dec(lVar22,&local_368,iVar25);
        dVar36 = local_340 + local_358;
        dVar41 = local_348 + local_360;
        dVar38 = local_350 + local_368;
        dVar37 = dVar36 * dVar36 + dVar38 * dVar38 + dVar41 * dVar41;
        dVar34 = local_450;
        if (9.99999993922529e-09 < dVar37) {
          FUN_146c12888(lVar22,local_370,uVar11);
          lVar15 = *(longlong *)(lVar22 + 0x10);
          lVar17 = *(longlong *)(lVar15 + (ulonglong)(uVar12 >> 9) * 8);
          uVar26 = (ulonglong)(uVar12 & 0x1ff);
          dVar4 = *(double *)(lVar17 + uVar26 * 0x18);
          local_448 = *(double *)(lVar17 + 8 + uVar26 * 0x18);
          local_460 = *(double *)(lVar17 + 0x10 + uVar26 * 0x18);
          lVar17 = *(longlong *)(lVar15 + (ulonglong)(uVar14 >> 9) * 8);
          uVar26 = (ulonglong)(uVar14 & 0x1ff);
          local_3e0 = *(double *)(lVar17 + uVar26 * 0x18);
          local_3e8 = *(double *)(lVar17 + 8 + uVar26 * 0x18);
          local_3f0 = *(double *)(lVar17 + 0x10 + uVar26 * 0x18);
          local_458 = local_460 - local_3f0;
          dVar5 = local_448 - local_3e8;
          dVar6 = dVar4 - local_3e0;
          dVar39 = local_458 * local_458 + dVar6 * dVar6 + dVar5 * dVar5;
          dVar34 = local_450;
          if (9.99999993922529e-09 < dVar39) {
            lVar15 = *(longlong *)(lVar15 + (ulonglong)(local_370[0] >> 9) * 8);
            uVar26 = (ulonglong)(local_370[0] & 0x1ff);
            dVar31 = *(double *)(lVar15 + uVar26 * 0x18) - dVar4;
            dVar34 = *(double *)(lVar15 + 8 + uVar26 * 0x18) - local_448;
            dVar33 = *(double *)(lVar15 + 0x10 + uVar26 * 0x18) - local_460;
            dVar39 = 1.0 / SQRT(dVar39);
            dVar6 = dVar6 * dVar39;
            dVar5 = dVar5 * dVar39;
            local_458 = local_458 * dVar39;
            dVar39 = dVar33 * local_458 + dVar31 * dVar6 + dVar5 * dVar34;
            dVar33 = dVar33 - local_458 * dVar39;
            dVar34 = dVar34 - dVar5 * dVar39;
            dVar31 = dVar31 - dVar39 * dVar6;
            dVar39 = dVar33 * dVar33 + dVar31 * dVar31 + dVar34 * dVar34;
            local_428 = dVar4;
            if (9.99999993922529e-09 < dVar39) {
              dVar37 = 1.0 / SQRT(dVar37);
              dVar38 = dVar38 * dVar37;
              dVar41 = dVar41 * dVar37;
              dVar36 = dVar36 * dVar37;
              dVar37 = 1.0 / SQRT(dVar39);
              dVar31 = dVar31 * dVar37;
              local_450 = dVar34 * dVar37;
              dVar33 = dVar33 * dVar37;
              dVar37 = dVar36 * dVar33 + dVar38 * dVar31 + dVar41 * local_450;
              if (dVar32 <= dVar37) {
                dVar34 = dVar33 - dVar36 * dVar37;
                dVar39 = local_450 - dVar41 * dVar37;
                dVar40 = dVar31 - dVar38 * dVar37;
                local_3f8 = dVar33 - (dVar34 + dVar34);
                dVar34 = local_450 - (dVar39 + dVar39);
                dVar39 = dVar31 - (dVar40 + dVar40);
                local_2a8[2] = dVar6 * dVar41 - dVar38 * dVar5;
                local_400 = local_458 * dVar38 - dVar36 * dVar6;
                local_2a8[0] = dVar5 * dVar36 - dVar41 * local_458;
                local_2a8[1] = local_400;
                local_280 = dVar6 * local_450 - dVar31 * dVar5;
                local_288 = local_458 * dVar31 - dVar33 * dVar6;
                local_290 = dVar5 * dVar33 - local_450 * local_458;
                local_268 = dVar6 * dVar34 - dVar39 * dVar5;
                uStack_270 = local_458 * dVar39 - local_3f8 * dVar6;
                local_278 = dVar5 * local_3f8 - dVar34 * local_458;
                iVar25 = 3;
                if (dVar37 < dVar30) {
                  uStack_260 = local_290 + local_2a8[0];
                  local_258 = local_288 + local_400;
                  local_250 = local_280 + local_2a8[2];
                  local_248 = local_278 + local_2a8[0];
                  local_240 = uStack_270 + local_400;
                  local_238 = local_268 + local_2a8[2];
                  iVar25 = 5;
                }
                adStack_208[0] = DAT_14c8464f0;
                local_218 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                dStack_210 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                local_1d0 = local_218;
                lStack_1c8 = (longlong)dStack_210;
                local_1c0 = DAT_14c8464f0;
                local_1b8 = local_218;
                lStack_1b0 = (longlong)dStack_210;
                local_1a8 = DAT_14c8464f0;
                dVar41 = *(double *)(local_440 + 0x10);
                adStack_208[1] = local_350 * dVar41;
                adStack_208[2] = local_348 * dVar41;
                adStack_208[3] = local_340 * dVar41;
                local_1e8 = dVar41 * local_368;
                local_1e0 = local_360 * dVar41;
                local_1d8 = local_358 * dVar41;
                dVar41 = (local_460 + local_3f0) * 0.5;
                dVar38 = (local_448 + local_3e8) * 0.5;
                dVar36 = (dVar4 + local_3e0) * 0.5;
                local_f8 = 0x500000000;
                lVar15 = 0;
                local_410 = dVar37;
                do {
                  dVar37 = *(double *)((longlong)local_2a8 + lVar15);
                  dVar34 = *(double *)((longlong)local_2a8 + lVar15 + 8);
                  dVar4 = *(double *)((longlong)local_2a8 + lVar15 + 0x10);
                  dVar5 = dVar4 * dVar4 + dVar37 * dVar37 + dVar34 * dVar34;
                  if (9.99999993922529e-09 < dVar5) {
                    dVar31 = 1.0 / SQRT(dVar5);
                    *(double *)((longlong)local_2a8 + lVar15) = dVar37 * dVar31;
                    *(double *)((longlong)local_2a8 + lVar15 + 8) = dVar34 * dVar31;
                    *(double *)((longlong)local_2a8 + lVar15 + 0x10) = dVar4 * dVar31;
                    uVar26 = local_f8;
                    dVar39 = *(double *)((longlong)adStack_208 + lVar15) + dVar41;
                    dVar6 = *(double *)((longlong)adStack_208 + lVar15 + -8) + dVar38;
                    dVar5 = *(double *)((longlong)&local_218 + lVar15) + dVar36;
                    lVar17 = (longlong)(int)local_f8;
                    uVar12 = (int)local_f8 + 1;
                    local_f8 = CONCAT44(local_f8._4_4_,uVar12);
                    if (local_f8._4_4_ < uVar12) {
                      local_460 = dVar41;
                      local_448 = dVar38;
                      local_428 = dVar36;
                      FUN_146be4dcc(&local_198,uVar26 & 0xffffffff);
                      dVar41 = local_460;
                      dVar36 = local_428;
                      dVar38 = local_448;
                    }
                    (&local_188)[lVar17 * 4] = *(double *)((longlong)local_2a8 + lVar15 + 0x10);
                    uVar8 = *(undefined8 *)((longlong)local_2a8 + lVar15 + 8);
                    (&local_198)[lVar17 * 4] = *(undefined8 *)((longlong)local_2a8 + lVar15);
                    (&uStack_190)[lVar17 * 4] = uVar8;
                    *(double *)((longlong)&local_180 + lVar17 * 0x20) =
                         dVar4 * dVar31 * dVar39 + dVar37 * dVar31 * dVar5 + dVar34 * dVar31 * dVar6
                    ;
                  }
                  uVar26 = uStack_330;
                  lVar15 = lVar15 + 0x18;
                } while ((ulonglong)(uint)(iVar25 << 3) * 3 != lVar15);
                iVar25 = (int)local_f8;
                lVar15 = (longlong)(int)local_f8;
                dVar34 = local_450;
                if (lVar15 != 0) {
                  lVar22 = (longlong)(int)uStack_330;
                  uVar12 = (int)uStack_330 + 1;
                  uStack_330 = CONCAT44(uStack_330._4_4_,uVar12);
                  if (uStack_330._4_4_ < uVar12) {
                    FUN_1403e3958(&local_338,uVar26 & 0xffffffff);
                  }
                  uVar26 = uStack_300;
                  *(double *)(local_338 + lVar22 * 0x18) = dVar36;
                  *(double *)(local_338 + 8 + lVar22 * 0x18) = dVar38;
                  *(double *)(local_338 + 0x10 + lVar22 * 0x18) = dVar41;
                  lVar22 = (longlong)(int)uStack_300;
                  uVar12 = (int)uStack_300 + 1;
                  uStack_300 = CONCAT44(uStack_300._4_4_,uVar12);
                  if (uStack_300._4_4_ < uVar12) {
                    FUN_146be4df2(&local_308,uVar26 & 0xffffffff);
                  }
                  _Dst = (void *)(local_308 + lVar22 * 0xa8);
                  *(int *)(local_308 + 0xa0 + lVar22 * 0xa8) = iVar25;
                  FUN_146be4e86(_Dst);
                  memcpy(_Dst,&local_198,lVar15 << 5);
                  local_2c0 = dVar36;
                  local_2b8 = dVar38;
                  local_2b0 = dVar41;
                  dVar41 = (double)FUN_146be4cf2(local_430,&local_2c0);
                  uVar26 = uStack_320;
                  lVar22 = (longlong)(int)uStack_320;
                  uVar12 = (int)uStack_320 + 1;
                  uStack_320 = CONCAT44(uStack_320._4_4_,uVar12);
                  if (uStack_320._4_4_ < uVar12) {
                    FUN_14475e4ac(&local_328,uVar26 & 0xffffffff);
                  }
                  uVar26 = uStack_310;
                  *(float *)(local_328 + lVar22 * 4) = (float)dVar41;
                  lVar22 = (longlong)(int)uStack_310;
                  uVar12 = (int)uStack_310 + 1;
                  uStack_310 = CONCAT44(uStack_310._4_4_,uVar12);
                  if (uStack_310._4_4_ < uVar12) {
                    FUN_14475e4ac(&local_318,uVar26 & 0xffffffff);
                  }
                  *(float *)(local_318 + lVar22 * 4) = (float)local_410;
                  lVar22 = local_430;
                  dVar34 = local_450;
                }
              }
            }
          }
        }
        local_450 = dVar34;
        uVar44 = (undefined4)local_438;
        uVar45 = (undefined4)((ulonglong)local_438 >> 0x20);
      }
      uVar12 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar24) {
        uVar12 = uVar24;
      }
      do {
        uVar14 = uVar12;
        if (uVar12 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar14 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar22 + 0x1d8) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar14;
    } while (uVar11 != uVar24);
  }
  lVar15 = local_440;
  iVar25 = (int)uStack_2d0;
  local_218 = (double)CONCAT44(local_218._4_4_,10);
  dStack_210 = 0.0;
  adStack_208[0] = 0.0;
  local_498 = (double *)CONCAT44(local_498._4_4_,*(undefined4 *)(local_440 + 0x38));
  local_490 = (double)CONCAT44(local_490._4_4_,4);
  local_3a0 = local_338;
  local_398 = (int)uStack_330;
  local_390 = local_328;
  local_388 = (int)uStack_320;
  local_380 = local_318;
  local_378 = (int)uStack_310;
  FUN_146c86138(&local_218);
  if (0 < adStack_208[0]._0_4_) {
    lVar17 = 0;
    iVar13 = adStack_208[0]._0_4_;
    do {
      uVar26 = uStack_2d0;
      lVar9 = local_308;
      iVar10 = (int)uStack_2d0;
      lVar23 = (longlong)(int)uStack_2d0;
      if (*(int *)(lVar15 + 0x38) + iVar25 <= (int)uStack_2d0) break;
      lVar15 = (longlong)*(int *)((longlong)dStack_210 + lVar17 * 4) * 0xa8;
      uVar11 = *(uint *)(local_308 + 0xa0 + lVar15);
      if ((longlong)(int)uVar11 != 0) {
        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0 + uVar11);
        if (uStack_2d0._4_4_ - iVar10 < uVar11) {
          FUN_146bf2270(&local_2d8,uVar26 & 0xffffffff);
        }
        memcpy((void *)(lVar23 * 0x20 + local_2d8),(void *)(lVar9 + lVar15),
               (longlong)(int)uVar11 << 5);
        iVar13 = adStack_208[0]._0_4_;
      }
      lVar17 = lVar17 + 1;
      lVar15 = local_440;
    } while (lVar17 < iVar13);
  }
  memset(&local_198,0,0x81);
  if ((int)uStack_2d0 < 1) {
LAB_146ba3b6f:
    *(undefined1 *)(*(longlong *)(*local_408 + local_3d0 * 8) + 0x2b9) = 1;
    uVar19 = 0;
  }
  else {
    local_438 = CONCAT71(local_438._1_7_,(*(byte *)(lVar22 + 0x2b8) ^ 1) & *(byte *)(lVar15 + 0x3d))
    ;
    local_420 = local_420 & 0xffffffff;
    uVar42 = 0xffffffff;
    uVar43 = 0x7fefffff;
    local_460 = (double)CONCAT44(local_460._4_4_,0xffffffff);
    local_458 = 0.0;
    uVar26 = 0;
    do {
      lVar22 = local_430;
      local_498 = (double *)CONCAT71(local_498._1_7_,(undefined1)local_438);
      local_490 = dVar35 / (double)CONCAT44(uVar29,uVar28);
      FUN_14295e168(local_2a8,local_430,uVar26 * 0x20 + local_2d8,*(undefined8 *)(lVar15 + 0x10));
      if (local_228 == '\x01') {
        dVar30 = (local_238 + (double)CONCAT44(uStack_22c,uStack_230)) - *(double *)(lVar22 + 0x260)
        ;
        if (uVar26 == local_420) {
          dVar30 = dVar30 * *(double *)(lVar15 + 0x18);
        }
        if (dVar30 <= (double)CONCAT44(uVar43,uVar42) && (double)CONCAT44(uVar43,uVar42) != dVar30)
        {
          if (local_458 != 0.0) {
            FUN_1400020a8();
          }
          uStack_190 = local_2a8[1];
          local_458 = local_2a8[0];
          local_198 = local_2a8[0];
          local_2a8[0] = 0.0;
          local_2a8[1] = 0.0;
          bVar21 = false;
          lVar22 = 0;
          do {
            if ((&local_188)[lVar22 * 2] != 0.0) {
              FUN_1400020a8();
            }
            (&local_188)[lVar22 * 2] = local_2a8[lVar22 * 2 + 2];
            local_2a8[lVar22 * 2 + 2] = 0.0;
            *(undefined4 *)((longlong)&local_180 + lVar22 * 0x10) =
                 *(undefined4 *)(&stack0xfffffffffffffd70 + lVar22 * 2);
            *(undefined4 *)((longlong)&local_180 + lVar22 * 0x10 + 4U) = (&uStack_28c)[lVar22 * 4];
            (&stack0xfffffffffffffd70)[lVar22 * 2] = 0.0;
            lVar22 = 1;
            bVar7 = !bVar21;
            bVar21 = true;
          } while (bVar7);
          if (CONCAT44(uStack_164,local_168) != 0) {
            FUN_1400020a8();
          }
          local_168 = (undefined4)local_278;
          uStack_164 = local_278._4_4_;
          uStack_160 = (undefined4)uStack_270;
          uStack_15c = uStack_270._4_4_;
          local_278 = 0.0;
          uStack_270 = 0.0;
          if (CONCAT44(uStack_154,local_158) != 0) {
            FUN_1400020a8();
          }
          local_158 = (undefined4)local_268;
          uStack_154 = local_268._4_4_;
          uStack_150 = (undefined4)uStack_260;
          uStack_14c = uStack_260._4_4_;
          local_268 = 0.0;
          uStack_260 = 0.0;
          bVar21 = false;
          lVar22 = 0;
          do {
            if ((&local_148)[lVar22 * 2] != 0.0) {
              FUN_1400020a8();
            }
            (&local_148)[lVar22 * 2] = (&local_258)[lVar22 * 2];
            (&local_258)[lVar22 * 2] = 0.0;
            local_140[lVar22 * 4] = *(undefined4 *)(&stack0xfffffffffffffdb0 + lVar22 * 2);
            local_140[lVar22 * 4 + 1] = (&uStack_24c)[lVar22 * 4];
            (&stack0xfffffffffffffdb0)[lVar22 * 2] = 0.0;
            lVar22 = 1;
            bVar7 = !bVar21;
            bVar21 = true;
          } while (bVar7);
          local_118 = local_228;
          local_128 = (undefined4)local_238;
          uStack_124 = local_238._4_4_;
          uStack_120 = uStack_230;
          uStack_11c = uStack_22c;
          local_460 = (double)CONCAT44(local_460._4_4_,(int)uVar26);
          lVar15 = local_440;
        }
        else {
          dVar30 = (double)CONCAT44(uVar43,uVar42);
        }
      }
      else {
        dVar30 = (double)CONCAT44(uVar43,uVar42);
      }
      FUN_14295f382(local_2a8);
      iVar25 = local_414;
      uVar26 = uVar26 + 1;
      uVar42 = SUB84(dVar30,0);
      uVar43 = (undefined4)((ulonglong)dVar30 >> 0x20);
    } while ((longlong)uVar26 < (longlong)(int)uStack_2d0);
    if (local_460._0_4_ == -1) goto LAB_146ba3b6f;
    uVar28 = *(undefined4 *)(lVar15 + 0x58);
    local_2a8[0] = (double)CONCAT44(local_2a8[0]._4_4_,0xffffffff);
    local_470 = *(undefined1 *)(lVar15 + 0x3c);
    local_488 = *(undefined8 *)(lVar15 + 8);
    local_490 = *(double *)(lVar15 + 0x10);
    lVar22 = (longlong)local_460._0_4_ * 0x20;
    local_478 = (undefined1)local_438;
    local_480 = local_3d8;
    local_498 = local_2a8;
    FUN_14295f3f8(&local_198,local_408,local_414,local_2d8 + lVar22);
    puVar2 = (undefined4 *)(local_2d8 + lVar22);
    local_3c8 = *puVar2;
    uStack_3c4 = puVar2[1];
    uStack_3c0 = puVar2[2];
    uStack_3bc = puVar2[3];
    puVar3 = (undefined8 *)(local_2d8 + 0x10 + lVar22);
    local_3b8 = *puVar3;
    uStack_3b0 = puVar3[1];
    local_490 = (double)CONCAT44(uVar45,uVar44);
    local_498 = (double *)CONCAT44(local_498._4_4_,local_2a8[0]._0_4_);
    FUN_146ba443c(lVar15,iVar25,uVar28);
    uVar19 = CONCAT71((uint7)(uint3)((uint)uVar28 >> 8),1);
  }
  FUN_14295f382(&local_198);
  if (dStack_210 != 0.0) {
    FUN_1400020a8();
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  if (local_328 != 0) {
    FUN_1400020a8();
  }
  if (local_338 != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != 0) {
    FUN_1400020a8();
  }
LAB_146ba2ff8:
  if ((local_f0 ^ (ulonglong)local_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffff;
}



// FUNCTION 146ba443c FUN_146ba443c body=1565 status=ok
// SIG undefined FUN_146ba443c(void)

void FUN_146ba443c(double *param_1,uint param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  double dVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  double dVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  longlong local_c0;
  double *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  double *local_a0;
  undefined8 local_98;
  int local_8c;
  longlong local_88;
  int *piStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  double *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar13 = (int)param_3;
  if (param_5 == iVar13) {
    local_c4 = CONCAT31((int3)((uint)(iVar13 + 1) >> 8),iVar13 + 1 == *(int *)(param_1 + 0xb));
  }
  else {
    local_c4 = 0;
  }
  local_b8 = param_1 + 0x16;
  local_68 = 0;
  uStack_60 = 0;
  local_d0 = param_3;
  local_b0 = param_4;
  local_50 = param_1;
  if (*(int *)(param_1 + 0x21) == 0) {
LAB_146ba44c1:
    FUN_146ba4a5a(param_1,&local_68);
    uVar18 = local_b0;
    uVar6 = FUN_142961638(&local_50,param_2,local_b0);
    local_d8 = CONCAT71(local_d8._1_7_,uVar6);
    local_88 = 0;
    piStack_80 = (int *)0x0;
    iVar13 = (int)local_d0;
    FUN_1448c4dd6(&local_88,param_5 - iVar13,1);
    if (iVar13 < param_5) {
      lVar10 = (longlong)(int)local_d0;
      lVar16 = 0;
      do {
        uVar6 = FUN_142961638(&local_50,iVar13 + (int)lVar16,uVar18);
        *(undefined1 *)(local_88 + lVar16) = uVar6;
        lVar16 = lVar16 + 1;
      } while (param_5 - lVar10 != lVar16);
    }
    local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(param_1 + 0x17));
    local_98 = uVar18;
    local_a0 = param_1;
    if (param_5 < *(int *)(param_1 + 0xb)) {
      iVar15 = param_5;
      do {
        cVar7 = FUN_142961638(&local_50,iVar15,uVar18);
        if (cVar7 != '\0') {
          if ((char)local_d8 != '\0') {
            FUN_142961746(&local_a0,iVar15,param_2);
          }
          if ((int)local_d0 < param_5) {
            lVar10 = 0;
            do {
              if (*(char *)(local_88 + lVar10) == '\x01') {
                FUN_142961746(&local_a0,iVar15,iVar13 + (int)lVar10);
              }
              lVar10 = lVar10 + 1;
            } while (param_5 - iVar13 != (int)lVar10);
          }
        }
        iVar15 = iVar15 + 1;
        uVar18 = local_b0;
      } while (iVar15 < *(int *)(param_1 + 0xb));
    }
    if ((char)local_c4 != '\0') {
      if (*(int *)(param_1 + 0x17) == (int)local_c0 + 1) {
        *(undefined8 *)((longlong)*(int *)(param_1 + 0x17) * 0x38 + -8 + (longlong)*local_b8) =
             param_6;
      }
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  iVar15 = *(int *)(param_1 + 0x17);
  pdVar1 = param_1 + 0x18;
  pdVar12 = param_1 + 0x1f;
  if ((double *)param_1[0x20] != (double *)0x0) {
    pdVar12 = (double *)param_1[0x20];
  }
  iVar14 = *(int *)((longlong)pdVar12 + (longlong)(int)(*(int *)(param_1 + 0x21) - 1U & param_2) * 4
                   );
  do {
    iVar9 = iVar14;
    if (iVar9 == -1) goto LAB_146ba44c1;
    dVar11 = *pdVar1;
    iVar14 = *(int *)((longlong)dVar11 + 8 + (longlong)iVar9 * 0x10);
  } while (*(uint *)((longlong)dVar11 + (longlong)iVar9 * 0x10) != param_2);
  local_c0 = (longlong)(int)param_2;
  local_a8 = (ulonglong)iVar13;
  do {
    iVar13 = *(int *)((longlong)dVar11 + 4 + (longlong)iVar9 * 0x10);
    dVar11 = *local_b8;
    lVar10 = (longlong)iVar13 * 0x38;
    plVar2 = (longlong *)((longlong)dVar11 + 8 + lVar10);
    local_88 = *plVar2;
    piStack_80 = (int *)plVar2[1];
    puVar3 = (undefined8 *)((longlong)dVar11 + 0x18 + lVar10);
    local_78 = *puVar3;
    uStack_70 = puVar3[1];
    uVar8 = *(uint *)((longlong)dVar11 + lVar10);
    if (uVar8 == param_2) {
      uVar8 = *(uint *)((longlong)dVar11 + 4 + lVar10);
    }
    local_d8 = (ulonglong)uVar8;
    cVar7 = FUN_142961638(&local_50,param_2,&local_88);
    uVar17 = uStack_60;
    if (cVar7 == '\0') {
LAB_146ba47f6:
      lVar10 = (longlong)(int)uStack_60;
      uVar8 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar8);
      if (uStack_60._4_4_ < uVar8) {
        FUN_1446f48e2(&local_68,uVar17 & 0xffffffff);
      }
      *(int *)(local_68 + lVar10 * 4) = iVar13;
    }
    else {
      dVar4 = *param_1;
      lVar16 = *(longlong *)((longlong)param_1[10] + local_c0 * 8);
      lVar5 = *(longlong *)((longlong)param_1[10] + (longlong)(int)local_d8 * 8);
      if ((((*(double *)(lVar5 + 0x2a0) <= *(double *)(lVar16 + 0x288) - dVar4) ||
           (*(double *)(lVar16 + 0x2a0) + dVar4 <= *(double *)(lVar5 + 0x288))) ||
          (*(double *)(lVar5 + 0x2a8) <= *(double *)(lVar16 + 0x290) - dVar4)) ||
         (((*(double *)(lVar16 + 0x2a8) + dVar4 <= *(double *)(lVar5 + 0x290) ||
           (*(double *)(lVar5 + 0x2b0) <= *(double *)(lVar16 + 0x298) - dVar4)) ||
          (dVar4 + *(double *)(lVar16 + 0x2b0) <= *(double *)(lVar5 + 0x298))))) goto LAB_146ba47f6;
      *(undefined8 *)((longlong)dVar11 + 0x30 + lVar10) = 0x7fefffffffffffff;
    }
    iVar13 = *(int *)(param_1 + 0xb);
    if ((int)local_d0 < iVar13) {
      iVar9 = (int)local_d8;
      local_d8 = local_d8 << 0x20;
      uVar17 = local_a8;
      do {
        cVar7 = FUN_142961638(&local_50,uVar17 & 0xffffffff,&local_88);
        if (cVar7 != '\0') {
          dVar11 = *param_1;
          lVar10 = *(longlong *)((longlong)param_1[10] + uVar17 * 8);
          lVar16 = *(longlong *)((longlong)param_1[10] + (longlong)iVar9 * 8);
          if (((*(double *)(lVar10 + 0x288) - dVar11 < *(double *)(lVar16 + 0x2a0)) &&
              (*(double *)(lVar16 + 0x288) < *(double *)(lVar10 + 0x2a0) + dVar11)) &&
             ((*(double *)(lVar10 + 0x290) - dVar11 < *(double *)(lVar16 + 0x2a8) &&
              (((*(double *)(lVar16 + 0x290) < *(double *)(lVar10 + 0x2a8) + dVar11 &&
                (*(double *)(lVar10 + 0x298) - dVar11 < *(double *)(lVar16 + 0x2b0))) &&
               (*(double *)(lVar16 + 0x298) < dVar11 + *(double *)(lVar10 + 0x2b0))))))) {
            iVar13 = *(int *)(param_1 + 0x17);
            *(uint *)(param_1 + 0x17) = iVar13 + 1U;
            if (*(uint *)((longlong)param_1 + 0xbc) < iVar13 + 1U) {
              FUN_146bf2438(local_b8,iVar13);
            }
            dVar11 = param_1[0x16];
            lVar10 = (longlong)iVar13 * 0x38;
            *(ulonglong *)((longlong)dVar11 + lVar10) = uVar17 & 0xffffffff | local_d8;
            plVar2 = (longlong *)((longlong)dVar11 + 8 + lVar10);
            *plVar2 = local_88;
            plVar2[1] = (longlong)piStack_80;
            puVar3 = (undefined8 *)((longlong)dVar11 + 0x18 + lVar10);
            *puVar3 = local_78;
            puVar3[1] = uStack_70;
            *(undefined2 *)((longlong)dVar11 + 0x28 + lVar10) = 0x101;
            *(undefined8 *)((longlong)dVar11 + 0x30 + lVar10) = 0x7fefffffffffffff;
            iVar13 = *(int *)(param_1 + 0xb);
          }
        }
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < (longlong)iVar13);
    }
    do {
      iVar9 = iVar14;
      if (iVar9 == -1) {
        local_8c = iVar15;
        if (iVar15 < *(int *)(param_1 + 0x17)) {
          do {
            local_88 = (longlong)iVar15 * 0x38 + (longlong)param_1[0x16];
            local_8c = iVar15;
            piStack_80 = &local_8c;
            FUN_1406b2a14(pdVar1,&local_a0,&local_88,0);
            local_88 = (longlong)local_8c * 0x38 + (longlong)param_1[0x16] + 4;
            piStack_80 = &local_8c;
            FUN_1406b2a14(pdVar1,&local_a0,&local_88);
            iVar15 = local_8c + 1;
            local_8c = iVar15;
          } while (iVar15 < *(int *)(param_1 + 0x17));
        }
        goto LAB_146ba44c1;
      }
      dVar11 = *pdVar1;
      iVar14 = *(int *)((longlong)dVar11 + 8 + (longlong)iVar9 * 0x10);
    } while (*(uint *)((longlong)dVar11 + (longlong)iVar9 * 0x10) != param_2);
  } while( true );
}



// FUNCTION 146ba4a5a FUN_146ba4a5a body=514 status=ok
// SIG undefined FUN_146ba4a5a(void)

void FUN_146ba4a5a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  uint local_64;
  undefined4 *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (int)param_2[1]) {
    lVar7 = param_1 + 0xc0;
    lVar11 = 1;
    lVar12 = 0;
    local_70 = param_2;
    do {
      local_64 = *(uint *)(*local_70 + lVar12 * 4);
      lVar9 = (longlong)(int)local_64;
      lVar6 = *(longlong *)(param_1 + 0xb0);
      FUN_146ba769a(lVar7,*(undefined4 *)(lVar6 + lVar9 * 0x38));
      FUN_146ba769a(lVar7,*(undefined4 *)(lVar6 + 4 + lVar9 * 0x38),local_64);
      iVar4 = *(int *)(param_1 + 0xb8);
      uVar5 = iVar4 - 1;
      iVar8 = ~local_64 + iVar4;
      if (local_64 == uVar5) {
        uVar5 = local_64;
        if (iVar8 != 0) {
          lVar7 = (longlong)(int)local_64 * 0x38;
          memmove((void *)(*(longlong *)(param_1 + 0xb0) + lVar7),
                  (void *)(lVar7 + *(longlong *)(param_1 + 0xb0) + 0x38),(longlong)iVar8 * 0x38);
          uVar5 = *(int *)(param_1 + 0xb8) - 1;
        }
        *(uint *)(param_1 + 0xb8) = uVar5;
        break;
      }
      uVar10 = uVar5;
      if (iVar8 != 0) {
        if (0 < iVar8) {
          iVar8 = 1;
        }
        memmove((void *)((longlong)(int)local_64 * 0x38 + *(longlong *)(param_1 + 0xb0)),
                (void *)((longlong)(iVar4 - iVar8) * 0x38 + *(longlong *)(param_1 + 0xb0)),
                (longlong)iVar8 * 0x38);
        uVar10 = *(int *)(param_1 + 0xb8) - 1;
      }
      *(uint *)(param_1 + 0xb8) = uVar10;
      lVar6 = *(longlong *)(param_1 + 0xb0);
      lVar9 = (longlong)(int)local_64;
      puVar3 = (undefined4 *)(lVar6 + lVar9 * 0x38);
      puVar13 = puVar3 + 1;
      FUN_146ba769a(lVar7,*puVar3,uVar5);
      FUN_146ba769a(lVar7,*puVar13,uVar5);
      local_58 = &local_64;
      local_60 = (undefined4 *)(lVar6 + lVar9 * 0x38);
      FUN_1406b2a14(lVar7,local_4c,&local_60,0);
      local_58 = &local_64;
      local_60 = puVar13;
      FUN_1406b2a14(lVar7,local_4c,&local_60,0);
      lVar9 = (longlong)(int)local_70[1];
      lVar6 = lVar11;
      do {
        if (lVar9 <= lVar6) goto LAB_146ba4bef;
        lVar1 = lVar6 + 1;
        lVar2 = lVar6 * 4;
        lVar6 = lVar1;
      } while (uVar5 != *(uint *)(*local_70 + lVar2));
      *(uint *)(*local_70 + -4 + lVar1 * 4) = local_64;
      lVar9 = (longlong)(int)local_70[1];
LAB_146ba4bef:
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar12 < lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ba4c5e FUN_146ba4c5e body=1329 status=ok
// SIG undefined FUN_146ba4c5e(void)

void FUN_146ba4c5e(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  undefined1 auStack_1a8 [40];
  undefined8 *local_180;
  longlong local_178;
  longlong *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  int local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar8 = (longlong *)(param_1 + 0x50);
  local_178 = param_1;
  FUN_146ba117a(plVar8);
  local_180 = (undefined8 *)CONCAT44(local_180._4_4_,param_2);
  if (0 < param_2) {
    iVar5 = 0;
    local_170 = plVar8;
    local_168 = param_4;
    local_160 = param_3;
    do {
      lVar3 = FUN_14001cc68(0x2d0,0x10);
      FUN_146ba5190(lVar3);
      *(int *)(lVar3 + 0x240) = iVar5;
      *(undefined1 *)(lVar3 + 0x2b8) = 0;
      *(undefined1 *)(lVar3 + 0x2ba) = 0;
      local_138._0_4_ = iVar5;
      uVar11 = (*(code *)*param_3)(param_3[1],&local_138);
      *(undefined8 *)(lVar3 + 0x260) = uVar11;
      *(undefined8 *)(lVar3 + 600) = uVar11;
      *(undefined8 *)(lVar3 + 0x270) = 0;
      *(undefined8 *)(lVar3 + 0x278) = 0;
      *(undefined8 *)(lVar3 + 0x280) = 0;
      local_138 = (undefined8 *)CONCAT44(local_138._4_4_,iVar5);
      iVar2 = (*(code *)*param_4)(param_4[1],&local_138);
      dVar17 = -1.79769313486232e+308;
      dVar15 = -1.79769313486232e+308;
      dVar19 = 1.79769313486232e+308;
      dVar21 = 1.79769313486232e+308;
      dVar23 = 1.79769313486232e+308;
      uVar10 = 0xffffffff;
      uVar13 = 0xffefffff;
      if (0 < iVar2) {
        iVar6 = 0;
        uVar9 = 0xffffffff;
        uVar12 = 0xffefffff;
        dVar14 = -1.79769313486232e+308;
        dVar16 = -1.79769313486232e+308;
        dVar18 = 1.79769313486232e+308;
        dVar20 = 1.79769313486232e+308;
        dVar22 = 1.79769313486232e+308;
        do {
          local_138 = (undefined8 *)CONCAT44(local_138._4_4_,iVar6);
          local_13c = iVar5;
          (*(code *)*param_5)(&local_158,param_5[1],&local_13c,&local_138);
          *(double *)(lVar3 + 0x270) =
               (double)CONCAT44(uStack_154,local_158) + *(double *)(lVar3 + 0x270);
          *(double *)(lVar3 + 0x278) =
               (double)CONCAT44(uStack_14c,uStack_150) + *(double *)(lVar3 + 0x278);
          *(double *)(lVar3 + 0x280) = local_148 + *(double *)(lVar3 + 0x280);
          local_128 = local_148;
          local_138 = (undefined8 *)CONCAT44(uStack_154,local_158);
          uStack_130 = (int *)CONCAT44(uStack_14c,uStack_150);
          local_118 = DAT_14c846338;
          local_120 = DAT_14c846330;
          local_10c = DAT_14c846338;
          local_114 = DAT_14c846330;
          local_108 = DAT_14c84635c;
          local_100 = 0;
          local_fe = 0;
          FUN_146c02208(lVar3,&local_138);
          dVar15 = (double)CONCAT44(uStack_154,local_158);
          dVar23 = (double)CONCAT44(uStack_14c,uStack_150);
          dVar19 = dVar15;
          if (dVar18 <= dVar15) {
            dVar19 = dVar18;
          }
          if (dVar15 <= dVar14) {
            dVar15 = dVar14;
          }
          dVar21 = dVar23;
          if (dVar20 <= dVar23) {
            dVar21 = dVar20;
          }
          uVar10 = uStack_150;
          uVar13 = uStack_14c;
          if (dVar23 <= (double)CONCAT44(uVar12,uVar9)) {
            uVar10 = uVar9;
            uVar13 = uVar12;
          }
          dVar23 = local_148;
          if (dVar22 <= local_148) {
            dVar23 = dVar22;
          }
          dVar17 = local_148;
          if (local_148 <= dVar16) {
            dVar17 = dVar16;
          }
          iVar6 = iVar6 + 1;
          uVar9 = uVar10;
          uVar12 = uVar13;
          dVar14 = dVar15;
          dVar16 = dVar17;
          dVar18 = dVar19;
          dVar20 = dVar21;
          dVar22 = dVar23;
        } while (iVar2 != iVar6);
        dVar14 = 1.0 / (double)iVar2;
        *(double *)(lVar3 + 0x270) = *(double *)(lVar3 + 0x270) * dVar14;
        *(double *)(lVar3 + 0x278) = *(double *)(lVar3 + 0x278) * dVar14;
        *(double *)(lVar3 + 0x280) = dVar14 * *(double *)(lVar3 + 0x280);
        param_4 = local_168;
        param_3 = local_160;
        plVar8 = local_170;
      }
      *(double *)(lVar3 + 0x288) = dVar19;
      *(double *)(lVar3 + 0x290) = dVar21;
      *(double *)(lVar3 + 0x298) = dVar23;
      *(double *)(lVar3 + 0x2a0) = dVar15;
      *(ulonglong *)(lVar3 + 0x2a8) = CONCAT44(uVar13,uVar10);
      *(double *)(lVar3 + 0x2b0) = dVar17;
      iVar2 = *(int *)(local_178 + 0x58);
      *(uint *)(local_178 + 0x58) = iVar2 + 1U;
      if (*(uint *)(local_178 + 0x5c) < iVar2 + 1U) {
        FUN_1456bd870(plVar8,iVar2);
      }
      *(longlong *)(*plVar8 + (longlong)iVar2 * 8) = lVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 != (int)local_180);
  }
  if ((longlong)(int)param_6[1] != 0) {
    puVar7 = (undefined8 *)*param_6;
    local_180 = puVar7 + (int)param_6[1];
    plVar8 = (longlong *)(local_178 + 0xb0);
    lVar3 = local_178 + 0xc0;
    do {
      uVar11 = *puVar7;
      iVar5 = *(int *)(local_178 + 0xb8);
      *(uint *)(local_178 + 0xb8) = iVar5 + 1U;
      if (*(uint *)(local_178 + 0xbc) < iVar5 + 1U) {
        FUN_146bf2438(plVar8,iVar5);
      }
      lVar1 = *plVar8;
      lVar4 = (longlong)iVar5 * 0x38;
      *(undefined8 *)(lVar1 + lVar4) = uVar11;
      *(undefined2 *)(lVar1 + 0x28 + lVar4) = 0x100;
      *(undefined8 *)(lVar1 + 0x30 + lVar4) = 0x7fefffffffffffff;
      local_13c = iVar5;
      local_138 = puVar7;
      uStack_130 = &local_13c;
      FUN_1406b2a14(lVar3,&local_158,&local_138,0);
      local_138 = (undefined8 *)((longlong)puVar7 + 4);
      uStack_130 = &local_13c;
      FUN_1406b2a14(lVar3,&local_158,&local_138);
      puVar7 = puVar7 + 1;
    } while (puVar7 != local_180);
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ba5190 FUN_146ba5190 body=209 status=ok
// SIG undefined FUN_146ba5190(void)

longlong FUN_146ba5190(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1411b354a(param_1,0,0,0,0);
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0xffefffffffffffff;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x270) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x278) = uVar1;
  *(undefined8 *)(param_1 + 0x280) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x288) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x290) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x298) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x2a8) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x2b0) = 0xffefffffffffffff;
  *(undefined2 *)(param_1 + 0x2b8) = 0;
  *(undefined1 *)(param_1 + 0x2ba) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0x7fefffffffffffff;
  *(undefined2 *)(param_1 + 0x2c8) = 1;
  return param_1;
}



// FUNCTION 146ba5262 FUN_146ba5262 body=111 status=ok
// SIG undefined FUN_146ba5262(void)

void FUN_146ba5262(double *param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *param_2;
  if (dVar1 < *param_1) {
    *param_1 = dVar1;
    dVar1 = *param_2;
  }
  if (param_1[3] <= dVar1 && dVar1 != param_1[3]) {
    param_1[3] = dVar1;
  }
  dVar1 = param_2[1];
  if (dVar1 < param_1[1]) {
    param_1[1] = dVar1;
    dVar1 = param_2[1];
  }
  if (param_1[4] <= dVar1 && dVar1 != param_1[4]) {
    param_1[4] = dVar1;
  }
  dVar1 = param_2[2];
  if (dVar1 < param_1[2]) {
    param_1[2] = dVar1;
    dVar1 = param_2[2];
  }
  if (param_1[5] <= dVar1 && dVar1 != param_1[5]) {
    param_1[5] = dVar1;
  }
  return;
}



// FUNCTION 146ba52d2 FUN_146ba52d2 body=1913 status=ok
// SIG undefined FUN_146ba52d2(void)

void FUN_146ba52d2(longlong param_1,double param_2,double param_3,double param_4)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_3b8 [32];
  double local_398;
  longlong *local_390;
  double local_388;
  double local_380;
  double local_378;
  longlong local_370;
  undefined1 local_368 [16];
  double local_358;
  undefined8 uStack_350;
  int local_340;
  int local_33c;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  int local_2fc;
  longlong local_2f8;
  ulonglong uStack_2f0;
  longlong local_2e8 [2];
  int *local_2d8;
  int *local_2d0;
  undefined1 local_2c4 [4];
  double local_2c0 [58];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_390 = (longlong *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_146bf24c8(local_390);
  }
  local_370 = param_1 + 0xc0;
  FUN_146bf24f8();
  local_2e8[0] = 0;
  local_2e8[1] = 0;
  FUN_146ba5a4c(local_2e8,*(undefined4 *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x58) < 1) {
    dVar21 = -1.79769313486232e+308;
    dVar20 = 1.79769313486232e+308;
    dVar19 = 1.79769313486232e+308;
    local_398 = 1.79769313486232e+308;
    dVar18 = -1.79769313486232e+308;
    dVar16 = -1.79769313486232e+308;
    dVar22 = 0.0;
  }
  else {
    dVar18 = -1.79769313486232e+308;
    dVar16 = -1.79769313486232e+308;
    lVar8 = 5;
    lVar9 = 0;
    uStack_350 = 0;
    local_398 = 1.79769313486232e+308;
    dVar19 = 1.79769313486232e+308;
    dVar20 = 1.79769313486232e+308;
    dVar22 = 0.0;
    dVar21 = -1.79769313486232e+308;
    do {
      local_358 = dVar21;
      local_378 = dVar22;
      local_380 = dVar20;
      local_388 = dVar19;
      local_368._8_8_ = 0;
      local_368._0_8_ = dVar16;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar9 * 8);
      dVar21 = *(double *)(lVar12 + 0x2b0) - *(double *)(lVar12 + 0x298);
      dVar22 = *(double *)(lVar12 + 0x2a8) - *(double *)(lVar12 + 0x290);
      dVar21 = (double)(-(ulonglong)(0.0 <= dVar21) & (ulonglong)dVar21);
      dVar22 = (double)(-(ulonglong)(0.0 <= dVar22) & (ulonglong)dVar22);
      dVar19 = *(double *)(lVar12 + 0x2a0) - *(double *)(lVar12 + 0x288);
      dVar19 = (double)(-(ulonglong)(0.0 <= dVar19) & (ulonglong)dVar19);
      dVar20 = (double)(~-(ulonglong)(dVar21 <= dVar22) & (ulonglong)dVar21 |
                       -(ulonglong)(dVar21 <= dVar22) & (ulonglong)dVar22);
      dVar22 = (double)(~-(ulonglong)(dVar22 <= dVar21) & (ulonglong)dVar21 |
                       -(ulonglong)(dVar22 <= dVar21) & (ulonglong)dVar22);
      uVar14 = -(ulonglong)(dVar19 <= dVar22);
      uVar15 = -(ulonglong)(dVar20 <= dVar19);
      dVar21 = (double)(uVar14 & (ulonglong)dVar19 | ~uVar14 & (ulonglong)dVar22) * param_2;
      dVar22 = param_4;
      if (param_4 <= dVar21) {
        dVar22 = dVar21;
      }
      dVar19 = (double)(uVar15 & (ulonglong)dVar19 | ~uVar15 & (ulonglong)dVar20) * param_3;
      if (dVar22 <= dVar19) {
        dVar22 = dVar19;
      }
      dVar4 = *(double *)(lVar12 + 0x2a0) + dVar22;
      dVar20 = *(double *)(lVar12 + 0x2a8) + dVar22;
      dVar21 = *(double *)(lVar12 + 0x2b0) + dVar22;
      dVar17 = *(double *)(lVar12 + 0x288) - dVar22;
      dVar19 = *(double *)(lVar12 + 0x290) - dVar22;
      dVar22 = *(double *)(lVar12 + 0x298) - dVar22;
      if (dVar19 <= local_398) {
        local_398 = dVar19;
      }
      if (dVar18 <= dVar20) {
        dVar18 = dVar20;
      }
      if (dVar16 <= dVar21) {
        dVar16 = dVar21;
      }
      *(double *)(local_2e8[0] + -0x28 + lVar8 * 8) = dVar17;
      *(double *)(local_2e8[0] + -0x20 + lVar8 * 8) = dVar19;
      *(double *)(local_2e8[0] + -0x18 + lVar8 * 8) = dVar22;
      *(double *)(local_2e8[0] + -0x10 + lVar8 * 8) = dVar4;
      *(double *)(local_2e8[0] + -8 + lVar8 * 8) = dVar20;
      *(double *)(local_2e8[0] + lVar8 * 8) = dVar21;
      dVar21 = (double)(-(ulonglong)(0.0 <= dVar21 - dVar22) & (ulonglong)(dVar21 - dVar22));
      dVar19 = (double)(-(ulonglong)(0.0 <= dVar20 - dVar19) & (ulonglong)(dVar20 - dVar19));
      uVar14 = -(ulonglong)(dVar21 <= dVar19);
      dVar5 = (double)(~uVar14 & (ulonglong)dVar21 | uVar14 & (ulonglong)dVar19);
      dVar21 = local_358;
      if (local_358 <= dVar4) {
        dVar21 = dVar4;
      }
      dVar19 = local_388;
      if (dVar17 <= local_388) {
        dVar19 = dVar17;
      }
      dVar20 = local_380;
      if (dVar22 <= local_380) {
        dVar20 = dVar22;
      }
      dVar22 = (double)(-(ulonglong)(0.0 <= dVar4 - dVar17) & (ulonglong)(dVar4 - dVar17));
      uVar14 = -(ulonglong)(dVar5 <= dVar22);
      dVar4 = (double)(uVar14 & (ulonglong)dVar22 | ~uVar14 & (ulonglong)dVar5);
      dVar22 = local_378;
      if (local_378 <= dVar4) {
        dVar22 = dVar4;
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 6;
    } while (lVar9 < *(int *)(param_1 + 0x58));
  }
  FUN_1458481c0(local_2c0);
  dVar16 = (double)(-(ulonglong)(0.0 <= dVar16 - dVar20) & (ulonglong)(dVar16 - dVar20));
  dVar18 = (double)(-(ulonglong)(0.0 <= dVar18 - local_398) & (ulonglong)(dVar18 - local_398));
  uVar14 = -(ulonglong)(dVar16 <= dVar18);
  dVar16 = (double)(~uVar14 & (ulonglong)dVar16 | uVar14 & (ulonglong)dVar18);
  dVar19 = (double)(-(ulonglong)(0.0 <= dVar21 - dVar19) & (ulonglong)(dVar21 - dVar19));
  uVar14 = -(ulonglong)(dVar16 <= dVar19);
  dVar16 = (double)(uVar14 & (ulonglong)dVar19 | ~uVar14 & (ulonglong)dVar16) * 0.5;
  local_2c0[0] = dVar22;
  if (dVar22 <= dVar16) {
    local_2c0[0] = dVar16;
  }
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2fc = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      lVar8 = (longlong)local_2fc * 0x30;
      local_338 = *(double *)(local_2e8[0] + lVar8);
      dStack_330 = ((double *)(local_2e8[0] + lVar8))[1];
      pdVar1 = (double *)(local_2e8[0] + 0x10 + lVar8);
      local_328 = *pdVar1;
      dStack_320 = pdVar1[1];
      pdVar1 = (double *)(local_2e8[0] + 0x20 + lVar8);
      local_318 = *pdVar1;
      dStack_310 = pdVar1[1];
      bVar13 = (longlong)uStack_2f0 < 0;
      uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
      if (bVar13) {
        FUN_14481578e(&local_2f8,0);
      }
      FUN_146c88a30(local_2c0,&local_338,&local_2f8);
      lVar8 = local_2f8;
      lVar9 = (longlong)(int)uStack_2f0;
      if (lVar9 != 0) {
        lVar12 = 0;
        do {
          iVar7 = local_2fc;
          iVar2 = *(int *)(lVar8 + lVar12);
          lVar10 = (longlong)iVar2 * 0x30;
          local_33c = iVar2;
          if ((((local_338 < *(double *)(local_2e8[0] + 0x18 + lVar10)) &&
               (*(double *)(local_2e8[0] + lVar10) < dStack_320)) &&
              (dStack_330 < *(double *)(local_2e8[0] + 0x20 + lVar10))) &&
             (((*(double *)(local_2e8[0] + 8 + lVar10) < local_318 &&
               (local_328 < *(double *)(local_2e8[0] + 0x28 + lVar10))) &&
              (*(double *)(local_2e8[0] + 0x10 + lVar10) < dStack_310)))) {
            iVar3 = *(int *)(param_1 + 0xb8);
            *(uint *)(param_1 + 0xb8) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0xbc) < iVar3 + 1U) {
              FUN_146bf2438(local_390,iVar3);
            }
            lVar6 = local_370;
            lVar10 = *local_390;
            lVar11 = (longlong)iVar3 * 0x38;
            *(ulonglong *)(lVar10 + lVar11) = CONCAT44(iVar7,iVar2);
            *(undefined2 *)(lVar10 + 0x28 + lVar11) = 0x100;
            *(undefined8 *)(lVar10 + 0x30 + lVar11) = 0x7fefffffffffffff;
            local_2d8 = &local_33c;
            local_340 = iVar3;
            local_2d0 = &local_340;
            FUN_1406b2a14(local_370,local_2c4,&local_2d8,0);
            local_2d8 = &local_2fc;
            local_2d0 = &local_340;
            FUN_1406b2a14(lVar6,local_2c4,&local_2d8);
          }
          lVar12 = lVar12 + 4;
        } while (lVar9 * 4 != lVar12);
      }
      FUN_146c86256(local_2c0,(longlong)local_2fc,(longlong)local_2fc * 0x30 + local_2e8[0]);
      local_2fc = local_2fc + 1;
    } while (local_2fc < *(int *)(param_1 + 0x58));
    if (local_2f8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_145820e5c(local_2c0);
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ba5a4c FUN_146ba5a4c body=110 status=ok
// SIG undefined FUN_146ba5a4c(void)

void FUN_146ba5a4c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bf26b8(param_1,iVar1);
    }
    FUN_146bf267f((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146bf274c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ba5abc FUN_146ba5abc body=6699 status=ok
// SIG undefined FUN_146ba5abc(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_146ba5abc(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  ulonglong ***pppuVar6;
  ulonglong ***pppuVar7;
  ulonglong ***pppuVar8;
  ulonglong ****ppppuVar9;
  undefined8 ****ppppuVar10;
  byte bVar11;
  char cVar12;
  bool bVar13;
  ulonglong ****ppppuVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  ulonglong *puVar17;
  int *piVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  byte bVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong *plVar31;
  undefined1 auVar32 [8];
  longlong lVar33;
  uint *puVar34;
  longlong lVar35;
  ulonglong uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_378 [32];
  undefined8 *local_358;
  double local_350;
  undefined8 *local_348;
  longlong local_340;
  undefined1 local_338;
  undefined1 local_330;
  char local_321;
  ulonglong ****local_320;
  uint local_314;
  longlong local_310;
  longlong local_308;
  uint local_2fc;
  longlong *local_2f8;
  ulonglong local_2f0;
  int *local_2e8;
  undefined8 local_2e0;
  int local_2d8;
  int local_2d4;
  longlong local_2d0;
  longlong *local_2c8;
  int local_2bc;
  longlong *local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 *local_2a0;
  ulonglong ****local_298;
  undefined8 uStack_290;
  undefined8 *local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  ulonglong ***local_270;
  undefined1 local_268 [8];
  uint local_260;
  uint local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  longlong local_218;
  double *local_210;
  longlong local_208;
  undefined8 uStack_200;
  ulonglong ***local_1f8;
  ulonglong ***pppuStack_1f0;
  ulonglong ***local_1e8;
  ulonglong ***pppuStack_1e0;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 *puStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_19c [4];
  undefined8 ****local_198;
  undefined8 *puStack_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined8 local_178;
  int local_170;
  undefined8 local_16c;
  undefined4 local_164;
  longlong local_158;
  undefined4 local_150;
  char local_118;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  iVar23 = 1;
  if (1 < *param_2) {
    iVar23 = *param_2;
  }
  dVar2 = *(double *)(param_2 + 2);
  local_314 = CONCAT31(local_314._1_3_,(char)param_2[8]);
  local_321 = *(char *)((longlong)param_2 + 0x21);
  local_2bc = param_2[5];
  local_2d4 = local_2bc;
  if (iVar23 < local_2bc) {
    local_2d4 = iVar23;
  }
  local_2d0 = *(longlong *)(param_2 + 10);
  if (local_2bc < 1) {
    local_2d4 = iVar23;
  }
  local_2a8 = *(undefined8 *)(param_2 + 0xc);
  dVar3 = *(double *)(param_1 + 0x98);
  uVar41 = SUB84(dVar3,0);
  uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar39 = *(double *)(param_1 + 0xa0);
  if (dVar3 <= dVar39) {
    uVar41 = SUB84(dVar39,0);
    uVar42 = (undefined4)((ulonglong)dVar39 >> 0x20);
  }
  dVar3 = *(double *)(param_1 + 0xa8);
  if ((double)CONCAT44(uVar42,uVar41) <= dVar3) {
    uVar41 = SUB84(dVar3,0);
    uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  if ((double)CONCAT44(uVar42,uVar41) <= 2.220446049250313e-16) {
    uVar41 = 0;
    uVar42 = 0x3cb00000;
  }
  dVar3 = *(double *)(param_1 + 0x40);
  dVar39 = *(double *)(param_2 + 6) / (double)CONCAT44(uVar42,uVar41);
  uVar29 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_2e8 = param_2;
  local_1d0 = dVar39;
  if ((0.0 < dVar39) && (0 < *(int *)(param_1 + 0x58))) {
    plVar20 = (longlong *)(param_1 + 0x50);
    lVar33 = 0;
    uVar29 = 0;
    bVar27 = 0;
    do {
      lVar35 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar33 * 8);
      bVar27 = bVar27 | *(byte *)(lVar35 + 0x2c8);
      bVar11 = FUN_14296191e(&local_1d0);
      *(byte *)(lVar35 + 0x2ba) = bVar11;
      uVar28 = (int)uVar29 + (uint)bVar11;
      uVar29 = (ulonglong)uVar28;
      lVar33 = lVar33 + 1;
      plVar31 = (longlong *)(longlong)*(int *)(param_1 + 0x58);
    } while (lVar33 < (longlong)plVar31);
    if (uVar28 != 0 && (bVar27 & 1) == 0) {
      uVar29 = 0;
      local_258 = 0;
      uStack_250 = 0;
      if (0 < *(int *)(param_1 + 0x58)) {
        local_2f8 = (longlong *)(param_1 + 0xf8);
        local_310 = param_1 + 0x110;
        uVar29 = 0;
        local_2c8 = plVar31;
        do {
          lVar33 = *(longlong *)(*plVar20 + uVar29 * 8);
          if ((*(char *)(lVar33 + 0x2ba) == '\x01') &&
             (dVar37 = *(double *)(lVar33 + 0x2b0) - *(double *)(lVar33 + 0x298),
             dVar37 = (double)(-(ulonglong)(0.0 <= dVar37) & (ulonglong)dVar37),
             dVar40 = *(double *)(lVar33 + 0x2a8) - *(double *)(lVar33 + 0x290),
             dVar40 = (double)(-(ulonglong)(0.0 <= dVar40) & (ulonglong)dVar40),
             uVar36 = -(ulonglong)(dVar37 <= dVar40),
             dVar38 = *(double *)(lVar33 + 0x2a0) - *(double *)(lVar33 + 0x288),
             dVar37 = (double)(~uVar36 & (ulonglong)dVar37 | uVar36 & (ulonglong)dVar40),
             dVar38 = (double)(-(ulonglong)(0.0 <= dVar38) & (ulonglong)dVar38),
             uVar36 = -(ulonglong)(dVar37 <= dVar38),
             dVar39 < (double)(uVar36 & (ulonglong)dVar38 | ~uVar36 & (ulonglong)dVar37))) {
            local_298 = (ulonglong ****)0x0;
            uStack_290 = (ulonglong ****)0x0;
            iVar23 = *(int *)(param_1 + 0x108);
            if (iVar23 != 0) {
              plVar31 = (longlong *)*(longlong *)(param_1 + 0x100);
              if (*(longlong *)(param_1 + 0x100) == 0) {
                plVar31 = local_2f8;
              }
              iVar22 = *(int *)((longlong)plVar31 +
                               (ulonglong)((uint)uVar29 & iVar23 + 0x7fffffffU) * 4);
              while (iVar21 = iVar22, iVar21 != -1) {
                lVar33 = *(longlong *)(param_1 + 0xc0);
                iVar22 = *(int *)(lVar33 + 8 + (longlong)iVar21 * 0x10);
                if (uVar29 == *(uint *)(lVar33 + (longlong)iVar21 * 0x10)) {
                  ppppuVar14 = (ulonglong ****)0x0;
                  do {
                    lVar35 = *(longlong *)(param_1 + 0xb0);
                    lVar24 = (longlong)*(int *)(lVar33 + 4 + (longlong)iVar21 * 0x10) * 0x38;
                    uVar28 = *(uint *)(lVar35 + lVar24);
                    uVar30 = *(uint *)(lVar35 + 4 + lVar24);
                    uVar26 = (uint)&DAT_ffffffff;
                    if (uVar29 == uVar30) {
                      uVar26 = uVar28;
                    }
                    if (uVar29 != uVar28) {
                      uVar30 = uVar26;
                    }
                    if (iVar23 != 0) {
                      plVar31 = (longlong *)*(longlong *)(param_1 + 0x100);
                      if (*(longlong *)(param_1 + 0x100) == 0) {
                        plVar31 = local_2f8;
                      }
                      iVar23 = *(int *)((longlong)plVar31 +
                                       (longlong)(int)(iVar23 - 1U & uVar30) * 4);
                      while (iVar21 = iVar23, iVar21 != -1) {
                        iVar23 = *(int *)(lVar33 + 8 + (longlong)iVar21 * 0x10);
                        if (*(uint *)(lVar33 + (longlong)iVar21 * 0x10) == uVar30) {
                          do {
                            lVar33 = (longlong)*(int *)(lVar33 + 4 + (longlong)iVar21 * 0x10) * 0x38
                            ;
                            if (((*(char *)(lVar35 + 0x28 + lVar33) == '\x01') &&
                                (puVar34 = (uint *)(lVar35 + lVar33), uVar29 != *puVar34)) &&
                               (uVar29 != puVar34[1])) {
                              lVar33 = (longlong)(int)uStack_290;
                              uVar28 = (int)uStack_290 + 1;
                              uStack_290 = (ulonglong ****)CONCAT44(uStack_290._4_4_,uVar28);
                              if (uStack_290._4_4_ < uVar28) {
                                FUN_146bf2270(&local_298);
                                ppppuVar14 = local_298;
                              }
                              pppuVar7 = *(ulonglong ****)(puVar34 + 2);
                              pppuVar8 = *(ulonglong ****)(puVar34 + 4);
                              pppuVar6 = *(ulonglong ****)(puVar34 + 8);
                              ppppuVar14[lVar33 * 4 + 2] = *(ulonglong ****)(puVar34 + 6);
                              (ppppuVar14 + lVar33 * 4 + 2)[1] = pppuVar6;
                              ppppuVar14[lVar33 * 4] = pppuVar7;
                              (ppppuVar14 + lVar33 * 4)[1] = pppuVar8;
                            }
                            do {
                              iVar21 = iVar23;
                              if (iVar21 == -1) goto LAB_146ba5ee3;
                              lVar33 = *(longlong *)(param_1 + 0xc0);
                              iVar23 = *(int *)(lVar33 + 8 + (longlong)iVar21 * 0x10);
                            } while (*(uint *)(lVar33 + (longlong)iVar21 * 0x10) != uVar30);
                            lVar35 = *(longlong *)(param_1 + 0xb0);
                          } while( true );
                        }
                      }
                    }
LAB_146ba5ee3:
                    do {
                      iVar21 = iVar22;
                      if (iVar21 == -1) goto LAB_146ba5f11;
                      lVar33 = *(longlong *)(param_1 + 0xc0);
                      iVar22 = *(int *)(lVar33 + 8 + (longlong)iVar21 * 0x10);
                    } while (uVar29 != *(uint *)(lVar33 + (longlong)iVar21 * 0x10));
                    iVar23 = *(int *)(param_1 + 0x108);
                  } while( true );
                }
              }
            }
LAB_146ba5f11:
            uVar28 = uStack_250._4_4_;
            iVar23 = 0;
            if ((longlong)uStack_250 < 0) {
              uStack_250 = (ulonglong)uStack_250._4_4_ << 0x20;
              FUN_14481578e(&local_258);
              uVar28 = uStack_250._4_4_;
              iVar23 = (int)uStack_250;
            }
            uStack_250 = CONCAT44(uStack_250._4_4_,iVar23 + 1U);
            if (uVar28 < iVar23 + 1U) {
              FUN_1446f48e2(&local_258);
            }
            *(uint *)(local_258 + (longlong)iVar23 * 4) = (uint)uVar29;
            if ((longlong)(int)uStack_290 != 0) {
              local_320 = local_298 + (longlong)(int)uStack_290 * 4;
              ppppuVar14 = local_298;
              local_2f0 = uVar29;
              do {
                lVar33 = (longlong)(int)uStack_250;
                if (0 < lVar33) {
                  lVar35 = 0;
                  do {
                    iVar23 = *(int *)(local_258 + lVar35 * 4);
                    lVar24 = *(longlong *)(*plVar20 + (longlong)iVar23 * 8);
                    dVar37 = *(double *)(lVar24 + 0x2b0) - *(double *)(lVar24 + 0x298);
                    dVar37 = (double)(-(ulonglong)(0.0 <= dVar37) & (ulonglong)dVar37);
                    dVar40 = *(double *)(lVar24 + 0x2a8) - *(double *)(lVar24 + 0x290);
                    dVar40 = (double)(-(ulonglong)(0.0 <= dVar40) & (ulonglong)dVar40);
                    uVar29 = -(ulonglong)(dVar37 <= dVar40);
                    dVar38 = *(double *)(lVar24 + 0x2a0) - *(double *)(lVar24 + 0x288);
                    dVar37 = (double)(~uVar29 & (ulonglong)dVar37 | uVar29 & (ulonglong)dVar40);
                    dVar38 = (double)(-(ulonglong)(0.0 <= dVar38) & (ulonglong)dVar38);
                    uVar29 = -(ulonglong)(dVar37 <= dVar38);
                    if (dVar39 <= (double)(uVar29 & (ulonglong)dVar38 | ~uVar29 & (ulonglong)dVar37)
                       ) {
                      local_358 = (undefined8 *)
                                  CONCAT71(local_358._1_7_,*(undefined1 *)(param_1 + 0x3d));
                      local_350 = dVar3 / (double)CONCAT44(uVar42,uVar41);
                      FUN_14295e168(&local_198,lVar24,ppppuVar14);
                      if (local_118 == '\x01') {
                        dVar37 = *(double *)(lVar24 + 600);
                        iVar22 = *(int *)(param_1 + 0x58);
                        local_1c8 = (ulonglong ****)CONCAT44(local_1c8._4_4_,0xffffffff);
                        local_330 = *(undefined1 *)(param_1 + 0x3c);
                        local_338 = *(undefined1 *)(param_1 + 0x3d);
                        local_348 = *(undefined8 **)(param_1 + 8);
                        local_350 = *(double *)(param_1 + 0x10);
                        local_340 = local_310;
                        local_358 = &local_1c8;
                        FUN_14295f3f8(&local_198,plVar20,iVar23,ppppuVar14);
                        local_1f8 = *ppppuVar14;
                        pppuStack_1f0 = ppppuVar14[1];
                        local_1e8 = ppppuVar14[2];
                        pppuStack_1e0 = ppppuVar14[3];
                        local_358 = (undefined8 *)CONCAT44(local_358._4_4_,(undefined4)local_1c8);
                        local_350 = dVar37;
                        FUN_146ba443c(param_1,iVar23,iVar22,&local_1f8);
                        *(undefined1 *)(lVar24 + 0x2ba) = 1;
                        if (iVar22 < *(int *)(param_1 + 0x58)) {
                          lVar24 = (longlong)iVar22;
                          do {
                            lVar19 = (longlong)(int)uStack_250;
                            uVar28 = (int)uStack_250 + 1;
                            uStack_250 = CONCAT44(uStack_250._4_4_,uVar28);
                            if (uStack_250._4_4_ < uVar28) {
                              FUN_1446f48e2(&local_258);
                            }
                            *(int *)(local_258 + lVar19 * 4) = (int)lVar24;
                            *(undefined1 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar24 * 8) + 0x2ba) = 1
                            ;
                            lVar24 = lVar24 + 1;
                          } while (lVar24 < *(int *)(param_1 + 0x58));
                        }
                      }
                      FUN_14295f382(&local_198);
                    }
                    lVar35 = lVar35 + 1;
                  } while (lVar35 != lVar33);
                }
                ppppuVar14 = ppppuVar14 + 4;
                uVar29 = local_2f0;
              } while (ppppuVar14 != local_320);
            }
            plVar31 = local_2c8;
            if (local_298 != (ulonglong ****)0x0) {
              FUN_1400020a8(local_298);
            }
          }
          uVar29 = uVar29 + 1;
        } while ((longlong *)uVar29 != plVar31);
        uVar29 = 0;
        if (0 < (longlong)*(int *)(param_1 + 0x58)) {
          lVar33 = 0;
          uVar29 = 0;
          do {
            uVar29 = (ulonglong)
                     ((int)uVar29 + (uint)*(byte *)(*(longlong *)(*plVar20 + lVar33 * 8) + 0x2ba));
            lVar33 = lVar33 + 1;
          } while (*(int *)(param_1 + 0x58) != lVar33);
        }
        if (local_258 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  local_308 = param_1;
  if (((char)local_314 != '\0') && (iVar23 = *(int *)(param_1 + 0x58), (longlong)iVar23 != 0)) {
    lVar33 = *(longlong *)(param_1 + 0x50);
    lVar35 = 0;
    do {
      FUN_146ba0dbe(*(undefined8 *)(lVar33 + lVar35));
      lVar35 = lVar35 + 8;
    } while ((longlong)iVar23 * 8 != lVar35);
  }
  lVar33 = local_308;
  dVar2 = dVar2 / (double)CONCAT44(uVar42,uVar41);
  iVar23 = *(int *)(local_308 + 0x58);
  if ((longlong)iVar23 != 0) {
    lVar35 = *(longlong *)(local_308 + 0x50);
    lVar24 = 0;
    do {
      lVar19 = *(longlong *)(lVar35 + lVar24);
      if ((*(double *)(lVar19 + 0x268) == -1.79769313486232e+308) &&
         (!NAN(*(double *)(lVar19 + 0x268)))) {
        *(undefined8 *)(lVar19 + 0x268) = *(undefined8 *)(lVar19 + 600);
      }
      lVar24 = lVar24 + 8;
    } while ((longlong)iVar23 * 8 != lVar24);
  }
  local_208 = 0;
  uStack_200 = 0;
  if (*(longlong *)(local_2e8 + 0x10) != 0) {
    FUN_144a127d2(&local_208,*(undefined4 *)(local_308 + 0x58),1);
    if (0 < (int)uStack_200) {
      lVar35 = 0;
      do {
        *(int *)(local_208 + lVar35 * 4) = (int)lVar35;
        lVar35 = lVar35 + 1;
      } while (lVar35 < (int)uStack_200);
    }
  }
  dVar2 = dVar2 * dVar2 * dVar2;
  local_2f8 = (longlong *)(lVar33 + 0x50);
  local_218 = lVar33;
  local_210 = &local_1d0;
  local_320 = (ulonglong ****)(lVar33 + 0xb0);
  local_2c8 = (longlong *)(local_2e8 + 0x28);
  local_2a0 = (undefined8 *)(lVar33 + 0x110);
  local_2f0 = lVar33 + 0xc0;
  local_2b8 = (longlong *)(local_2e8 + 0x18);
  local_2d8 = 0;
LAB_146ba63d4:
  if (((0.0 < dVar2) || (0 < (int)uVar29)) || (local_2d4 < *(int *)(lVar33 + 0x58))) {
    if (((dVar2 == 0.0) && (!NAN(dVar2))) || ((char)local_2e8[4] == '\0')) {
      local_2e0 = CONCAT44(local_2e0._4_4_,
                           CONCAT31((int3)((uint)local_2d4 >> 8),
                                    *(int *)(lVar33 + 0x58) <= local_2d4));
    }
    else {
      local_2e0 = (ulonglong)local_2e0._4_4_ << 0x20;
    }
    local_268 = (undefined1  [8])((ulonglong)local_268 & 0xffffffff00000000);
    if (0 < *(int *)(lVar33 + 0xb8)) {
      uVar28 = 0xffffffff;
      auVar32 = (undefined1  [8])0x0;
      ppppuVar14 = local_320;
      iVar23 = 0;
      dVar3 = 1.79769313486232e+308;
      local_2b0 = uVar29;
      do {
        lVar35 = (longlong)*ppppuVar14;
        lVar24 = (longlong)SUB84(auVar32,0);
        iVar22 = iVar23;
        dVar39 = dVar3;
        if (*(char *)(lVar35 + 0x29 + lVar24 * 0x38) == '\x01') {
          piVar18 = (int *)(lVar24 * 0x38 + lVar35);
          iVar22 = iVar23 + 1;
          if (*(int *)(lVar33 + 0x48) < 0) {
            iVar21 = *piVar18;
          }
          else {
            iVar21 = *piVar18;
            if (uVar28 != 0xffffffff && *(int *)(lVar33 + 0x48) <= iVar23) {
              uVar15 = *(undefined8 *)(lVar35 + (longlong)(int)uVar28 * 0x38);
              iVar23 = (int)uVar15;
              if (((iVar21 != iVar23) &&
                  (iVar25 = (int)((ulonglong)uVar15 >> 0x20), iVar21 != iVar25)) &&
                 ((piVar18[1] != iVar23 && (piVar18[1] != iVar25)))) goto LAB_146ba64b7;
            }
          }
          local_310 = CONCAT44(local_310._4_4_,uVar28);
          lVar33 = *(longlong *)(*local_2f8 + (longlong)iVar21 * 8);
          bVar27 = *(byte *)(lVar33 + 0x2ba);
          lVar19 = *(longlong *)(*local_2f8 + (longlong)piVar18[1] * 8);
          bVar11 = *(byte *)(lVar19 + 0x2ba);
          pcVar5 = *(code **)(local_2e8 + 0x20);
          if (pcVar5 != (code *)0x0) {
            plVar20 = *(longlong **)(local_2e8 + 0x24);
            if (*(longlong **)(local_2e8 + 0x24) == (longlong *)0x0) {
              plVar20 = local_2c8;
            }
            uVar15 = (**(code **)(*plVar20 + 8))();
            cVar12 = (*pcVar5)(uVar15,lVar33,lVar19);
            if (cVar12 == '\0') {
              ppppuVar14 = local_320;
              lVar33 = local_308;
              uVar28 = (uint)local_310;
              goto LAB_146ba64b7;
            }
            auVar32 = (undefined1  [8])((ulonglong)local_268 & 0xffffffff);
            lVar35 = (longlong)*local_320;
            lVar24 = (longlong)(int)local_268._0_4_;
          }
          lVar33 = lVar35 + lVar24 * 0x38;
          dVar39 = *(double *)(lVar35 + 0x30 + lVar24 * 0x38);
          uVar30 = (int)uStack_100 - local_d4;
          if ((dVar39 == 1.79769313486232e+308) && (!NAN(dVar39))) {
            FUN_142961e9c(&local_218,&local_258);
            local_198 = (undefined8 ****)local_268;
            puStack_190 = &local_258;
            FUN_146bf27fa(&local_108,&local_298,&local_198);
            lVar35 = local_108;
            lVar33 = local_258;
            lVar24 = (longlong)(int)local_298;
            if (local_258 != 0) {
              FUN_146ba12c2(local_258);
              FUN_1400020a8(lVar33);
            }
            auVar32 = (undefined1  [8])(longlong)(int)local_268._0_4_;
            *(undefined8 *)((longlong)*local_320 + 0x30 + (longlong)auVar32 * 0x38) =
                 *(undefined8 *)(*(longlong *)(lVar35 + lVar24 * 0x18 + 8) + 600);
            lVar35 = (longlong)*local_320;
            lVar33 = (longlong)auVar32 * 0x38 + lVar35;
          }
          dVar39 = (double)FUN_146ba74e8(lVar33,local_2f8);
          if (local_2bc < 1) {
            bVar13 = false;
          }
          else {
            bVar13 = local_2bc < *(int *)(local_308 + 0x58);
          }
          uVar28 = SUB84(auVar32,0);
          lVar33 = local_308;
          if (((bVar27 | bVar11) & 1) == 0) {
            bVar27 = (bVar13 ^ 1U) & 0.0 < dVar2 & dVar2 < dVar39;
            if ((byte)((byte)local_2e0 | bVar27) != 1) goto LAB_146ba66af;
            ppppuVar14 = local_320;
            uVar28 = (uint)local_310;
            dVar39 = dVar3;
            if (((int)uVar30 < 0x2711 & (bVar27 ^ 1)) != 0) goto LAB_146ba64b7;
          }
          else {
            if ((bVar27 & bVar11) == 0) {
              dVar39 = dVar39 - *(double *)(local_308 + 0x30);
            }
LAB_146ba66af:
            if (((*(int *)(local_308 + 0x118) != 0) ||
                ((local_2d0 != 0 && (0 < *(int *)(local_2d0 + 8))))) && (dVar39 < dVar3)) {
              if ((int)uStack_100 != local_d4) {
                puVar16 = local_c8;
                if (local_c8 == (undefined1 *)0x0) {
                  puVar16 = local_d0;
                }
                uVar26 = *(uint *)(puVar16 + (ulonglong)(local_c0 - 1U & uVar28) * 4);
                while (uVar26 != 0xffffffff) {
                  puVar34 = (uint *)(local_108 + (longlong)(int)uVar26 * 0x18);
                  if (*puVar34 == uVar28) {
                    if (puVar34 != (uint *)0x0) goto LAB_146ba6841;
                    break;
                  }
                  uVar26 = puVar34[4];
                }
              }
              FUN_142961e9c(&local_218,&local_258,lVar35 + (longlong)(int)uVar28 * 0x38);
              local_198 = (undefined8 ****)local_268;
              puStack_190 = &local_258;
              FUN_146bf27fa(&local_108,&local_298,&local_198);
              lVar35 = local_108;
              lVar33 = local_258;
              lVar24 = (longlong)(int)local_298;
              if (local_258 != 0) {
                FUN_146ba12c2(local_258);
                FUN_1400020a8(lVar33);
              }
              puVar34 = (uint *)(lVar35 + lVar24 * 0x18);
LAB_146ba6841:
              lVar33 = local_308;
              local_314 = uVar30;
              if (local_2d0 == 0) {
                local_2fc = 0;
              }
              else {
                local_188 = *(undefined8 *)(puVar34 + 2);
                local_1c8 = (ulonglong ****)local_2a8;
                local_270 = (ulonglong ***)((ulonglong)local_270 & 0xffffffffffffff00);
                local_198 = &local_270;
                puStack_190 = (undefined8 *)local_2d0;
                local_180 = &local_1c8;
                local_258 = 0;
                uStack_250 = uStack_250 & 0xffffffff00000000;
                local_298 = (ulonglong ****)FUN_14296c520;
                uStack_290 = (ulonglong ****)&local_198;
                local_348 = &local_258;
                local_350 = (double)((ulonglong)local_350 & 0xffffffff00000000);
                uVar15 = FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(local_2d0 + 8),1,
                                       &local_298);
                local_2fc = (uint)CONCAT71((int7)((ulonglong)uVar15 >> 8),local_270._0_1_);
              }
              local_180 = &local_1c8;
              local_348 = &local_258;
              uStack_290 = (ulonglong ****)&local_198;
              local_198 = &local_270;
              local_188 = *(undefined8 *)(puVar34 + 2);
              local_1c8 = (ulonglong ****)0x0;
              local_270 = (ulonglong ***)((ulonglong)local_270 & 0xffffffffffffff00);
              puStack_190 = local_2a0;
              local_258 = 0;
              uStack_250 = uStack_250 & 0xffffffff00000000;
              local_298 = (ulonglong ****)FUN_14296c520;
              local_350 = (double)((ulonglong)local_350 & 0xffffffff00000000);
              FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(lVar33 + 0x118),1,&local_298);
              ppppuVar14 = local_320;
              uVar28 = (uint)local_310;
              if ((((ulonglong)local_270 & 1) != 0) || (uVar30 = local_314, (local_2fc & 1) != 0)) {
                *(undefined1 *)((longlong)*local_320 + 0x29 + (longlong)(int)local_268._0_4_ * 0x38)
                     = 0;
                FUN_146bf2cc6(&local_108,(ulonglong)local_268 & 0xffffffff);
                dVar39 = dVar3;
                goto LAB_146ba64b7;
              }
            }
            ppppuVar14 = local_320;
            uVar28 = local_268._0_4_;
            if ((dVar39 < dVar3) ||
               (uVar28 = (uint)local_310, dVar39 = dVar3, auVar32 = local_268, (int)uVar30 < 0x2711)
               ) goto LAB_146ba64b7;
          }
          FUN_146bf2cc6(&local_108,(ulonglong)auVar32 & 0xffffffff);
          ppppuVar14 = local_320;
          dVar39 = dVar3;
        }
LAB_146ba64b7:
        uVar30 = local_268._0_4_ + 1;
        auVar32 = (undefined1  [8])(ulonglong)uVar30;
        local_268._0_4_ = uVar30;
        iVar23 = iVar22;
        dVar3 = dVar39;
      } while ((int)uVar30 < *(int *)(lVar33 + 0xb8));
      if (uVar28 != 0xffffffff) {
        lVar35 = (longlong)*ppppuVar14;
        lVar19 = (longlong)(int)uVar28 * 0x38;
        local_228 = *(undefined8 *)(lVar35 + 0x30 + lVar19);
        lVar24 = *(longlong *)(lVar35 + lVar19);
        uStack_250 = ((longlong *)(lVar35 + lVar19))[1];
        puVar1 = (undefined8 *)(lVar35 + 0x10 + lVar19);
        local_248 = *puVar1;
        uStack_240 = puVar1[1];
        puVar1 = (undefined8 *)(lVar35 + 0x20 + lVar19);
        local_238 = *puVar1;
        uStack_230 = puVar1[1];
        local_258._0_4_ = (uint)lVar24;
        local_258._4_4_ = (uint)((ulonglong)lVar24 >> 0x20);
        local_25c = local_258._4_4_;
        if ((int)(uint)local_258 < (int)local_258._4_4_) {
          local_25c = (uint)local_258;
        }
        uVar30 = local_258._4_4_;
        if ((int)local_258._4_4_ < (int)(uint)local_258) {
          uVar30 = (uint)local_258;
        }
        lVar35 = *(longlong *)(*local_2f8 + (longlong)(int)local_25c * 8);
        local_2e0 = (longlong)(int)uVar30;
        local_310 = CONCAT44(local_310._4_4_,(uint)*(byte *)(lVar35 + 0x2ba));
        local_314 = (uint)*(byte *)(*(longlong *)(*local_2f8 + local_2e0 * 8) + 0x2ba);
        local_258 = lVar24;
        if ((int)uStack_100 != local_d4) {
          puVar16 = local_c8;
          if (local_c8 == (undefined1 *)0x0) {
            puVar16 = local_d0;
          }
          uVar26 = *(uint *)(puVar16 + (ulonglong)(local_c0 - 1U & uVar28) * 4);
          for (uVar4 = uVar26; uVar4 != 0xffffffff;
              uVar4 = *(uint *)(local_108 + (longlong)(int)uVar4 * 0x18 + 0x10)) {
            if (*(uint *)(local_108 + (longlong)(int)uVar4 * 0x18) == uVar28) goto LAB_146ba73a3;
          }
        }
        FUN_142961e9c(&local_218,&local_198,&local_258);
        ppppuVar10 = local_198;
        FUN_146ba7556(*(undefined8 *)(*local_2f8 + (longlong)(int)local_25c * 8),local_198);
        if (ppppuVar10 != (undefined8 ****)0x0) {
          FUN_146ba12c2(ppppuVar10);
          FUN_1400020a8();
        }
        goto LAB_146ba6bd1;
      }
    }
  }
  if ((local_321 != '\0') && (iVar23 = *(int *)(lVar33 + 0x58), (longlong)iVar23 != 0)) {
    lVar33 = *(longlong *)(lVar33 + 0x50);
    lVar35 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar33 + lVar35) + 0x228) == 0) {
        FUN_146ba19b8();
      }
      lVar35 = lVar35 + 8;
    } while ((longlong)iVar23 * 8 != lVar35);
  }
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146be74d6(&local_108);
  if ((local_b0 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return local_2d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (uVar26 = puVar34[4], uVar26 != 0xffffffff) {
LAB_146ba73a3:
    puVar34 = (uint *)(local_108 + (longlong)(int)uVar26 * 0x18);
    if (*puVar34 == uVar28) goto LAB_146ba73bc;
  }
  puVar34 = (uint *)0x0;
LAB_146ba73bc:
  FUN_146ba7556(lVar35,*(undefined8 *)(puVar34 + 2));
  FUN_146bf2cc6(&local_108,uVar28);
LAB_146ba6bd1:
  uVar29 = (ulonglong)(int)local_25c;
  local_2fc = (uint)*(byte *)(*(longlong *)(*(longlong *)(lVar33 + 0x50) + uVar29 * 8) + 0x2ba);
  local_178 = 0;
  local_170 = 0;
  local_198 = (undefined8 ****)0x0;
  puStack_190 = (undefined8 *)0x0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_260 = 0;
  uVar28 = *(uint *)(lVar33 + 0xb8);
  if (0 < (int)uVar28) {
    do {
      local_1c8 = *(ulonglong *****)((longlong)*ppppuVar14 + (longlong)(int)local_260 * 0x38);
      if ((((uVar30 == (uint)local_1c8) ||
           (uVar26 = (uint)((ulonglong)local_1c8 >> 0x20), uVar30 == uVar26)) ||
          (local_25c == (uint)local_1c8)) || (local_25c == uVar26)) {
        *(undefined8 *)((longlong)*ppppuVar14 + 0x30 + (longlong)(int)local_260 * 0x38) =
             0x7fefffffffffffff;
        FUN_146bf2cc6(&local_108);
        FUN_1447cbafe(&local_198,&local_298,&local_1c8,0);
        FUN_1447cbafe(&local_198,&local_298,(longlong)&local_1c8 + 4,0);
        uVar29 = local_2f0;
        FUN_146ba769a(local_2f0,(ulonglong)local_1c8 & 0xffffffff,local_260);
        FUN_146ba769a(uVar29,local_1c8._4_4_,local_260);
        iVar23 = *(int *)(lVar33 + 0xb8);
        uVar26 = iVar23 - 1;
        iVar22 = ~local_260 + iVar23;
        uVar28 = uVar26;
        if (iVar22 != 0) {
          if (0 < iVar22) {
            iVar22 = 1;
          }
          memmove((void *)((longlong)(int)local_260 * 0x38 + *(longlong *)(lVar33 + 0xb0)),
                  (void *)((longlong)(iVar23 - iVar22) * 0x38 + *(longlong *)(lVar33 + 0xb0)),
                  (longlong)iVar22 * 0x38);
          uVar28 = *(int *)(lVar33 + 0xb8) - 1;
        }
        uVar29 = local_2f0;
        *(uint *)(lVar33 + 0xb8) = uVar28;
        if ((int)local_260 < (int)uVar26) {
          local_268 = *(undefined1 (*) [8])((longlong)*ppppuVar14 + (longlong)(int)local_260 * 0x38)
          ;
          FUN_146ba769a(local_2f0,local_268,uVar26);
          FUN_146ba769a(uVar29,local_268._4_4_,uVar26);
          local_298 = (ulonglong ****)local_268;
          uStack_290 = (ulonglong ****)&local_260;
          FUN_1406b2a14(uVar29,&local_270,&local_298,0);
          local_298 = (ulonglong ****)(local_268 + 4);
          uStack_290 = (ulonglong ****)&local_260;
          FUN_1406b2a14(uVar29,&local_270,&local_298,0);
          if ((int)uStack_100 != local_d4) {
            puVar16 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar16 = local_d0;
            }
            uVar28 = *(uint *)(puVar16 + (ulonglong)(local_c0 - 1U & uVar26) * 4);
            while (uVar28 != 0xffffffff) {
              puVar34 = (uint *)(local_108 + (longlong)(int)uVar28 * 0x18);
              if (*puVar34 == uVar26) {
                puVar17 = (ulonglong *)(puVar34 + 2);
                if (puVar17 != (ulonglong *)0x0 && puVar34 != (uint *)0x0) {
                  pppuVar6 = (ulonglong ***)*puVar17;
                  *puVar17 = 0;
                  FUN_146bf2cc6(&local_108,uVar26);
                  local_298 = (ulonglong ****)&local_260;
                  uStack_290 = &local_270;
                  local_270 = pppuVar6;
                  FUN_146bf27fa(&local_108,local_19c,&local_298);
                  pppuVar6 = local_270;
                  lVar33 = local_308;
                  if (local_270 != (ulonglong ***)0x0) {
                    FUN_146ba12c2(local_270);
                    FUN_1400020a8(pppuVar6);
                    lVar33 = local_308;
                  }
                }
                break;
              }
              uVar28 = puVar34[4];
            }
          }
          local_260 = local_260 - 1;
          uVar28 = *(uint *)(lVar33 + 0xb8);
        }
      }
      local_260 = local_260 + 1;
    } while ((int)local_260 < (int)uVar28);
    uVar29 = (ulonglong)local_25c;
  }
  FUN_144a7cc9e(&local_198,uVar29);
  FUN_144a7cc9e(&local_198,uVar30);
  pcVar5 = *(code **)(local_2e8 + 0x10);
  if (pcVar5 != (code *)0x0) {
    local_298 = (ulonglong ****)CONCAT44(local_298._4_4_,*(undefined4 *)(local_208 + local_2e0 * 4))
    ;
    local_1c8 = (ulonglong ****)
                CONCAT44(local_1c8._4_4_,*(undefined4 *)(local_208 + (longlong)(int)local_25c * 4));
    plVar20 = *(longlong **)(local_2e8 + 0x14);
    if (*(longlong **)(local_2e8 + 0x14) == (longlong *)0x0) {
      plVar20 = local_2b8;
    }
    uVar15 = (**(code **)(*plVar20 + 8))();
    (*pcVar5)(uVar15,&local_1c8,&local_298);
  }
  uVar29 = local_2f0;
  uVar28 = *(int *)(lVar33 + 0x58) - 1;
  if (uVar30 != uVar28) {
    if (*(longlong *)(local_2e8 + 0x10) != 0) {
      *(undefined4 *)(local_208 + local_2e0 * 4) =
           *(undefined4 *)(local_208 + -4 + (longlong)*(int *)(lVar33 + 0x58) * 4);
    }
    local_270 = (ulonglong ***)CONCAT44(local_270._4_4_,uVar30);
    local_1c8 = (ulonglong ****)0x0;
    puStack_1c0 = (undefined8 *)0x0;
    FUN_146be72fa(local_2f0,uVar28,&local_1c8,0);
    FUN_146be73f8(uVar29,uVar28);
    ppppuVar9 = local_1c8;
    lVar33 = (longlong)(int)puStack_1c0;
    if (lVar33 != 0) {
      lVar35 = 0;
      do {
        local_19c = *(undefined1 (*) [4])((longlong)ppppuVar9 + lVar35);
        lVar24 = (longlong)*ppppuVar14 + (longlong)(int)local_19c * 0x38;
        if (*(uint *)((longlong)*ppppuVar14 + (longlong)(int)local_19c * 0x38) == uVar28) {
          lVar19 = 0;
        }
        else {
          lVar19 = (ulonglong)(*(uint *)(lVar24 + 4) == uVar28) * 2 + -1;
        }
        *(undefined4 *)(lVar24 + lVar19 * 4) = local_270._0_4_;
        local_298 = &local_270;
        uStack_290 = (ulonglong ****)local_19c;
        FUN_1406b2a14(local_2f0,local_268,&local_298,0);
        lVar35 = lVar35 + 4;
      } while (lVar33 * 4 != lVar35);
    }
    if (local_1c8 != (ulonglong ****)0x0) {
      FUN_1400020a8(local_1c8);
    }
  }
  FUN_146ba771c(local_2f8,uVar30);
  local_1c8 = (ulonglong ****)&DAT_100000000;
  puStack_1c0 = &local_188;
  local_1b8 = 0xffffffff;
  local_1b0 = 0;
  iVar23 = 0;
  if (local_170 != 0) {
    FUN_1449c0562(&local_1c8);
    iVar23 = local_170;
  }
  local_280 = local_1b8;
  uVar15 = local_280;
  local_278 = local_1b0;
  local_274 = local_1ac;
  uStack_290 = local_1c8;
  local_288 = puStack_1c0;
  local_280._4_4_ = (int)((ulonglong)local_1b8 >> 0x20);
  iVar22 = local_280._4_4_;
  local_298 = (ulonglong ****)&local_198;
  if ((local_280._4_4_ != iVar23) || (local_280 = uVar15, puStack_1c0 != &local_188)) {
    do {
      local_280 = uVar15;
      uVar4 = local_25c;
      uVar26 = *(uint *)((longlong)*local_298 + (longlong)iVar22 * 0xc);
      if (uVar26 == uVar28) {
        uVar26 = uVar30;
      }
      local_270 = (ulonglong ***)CONCAT44(local_270._4_4_,uVar26);
      iVar22 = *(int *)(local_308 + 0xb8);
      *(uint *)(local_308 + 0xb8) = iVar22 + 1U;
      if (*(uint *)(local_308 + 0xbc) < iVar22 + 1U) {
        FUN_146bf2438(local_320,iVar22);
      }
      uVar29 = local_2f0;
      lVar33 = (longlong)*local_320;
      lVar35 = (longlong)iVar22 * 0x38;
      *(ulonglong *)(lVar33 + lVar35) = CONCAT44(uVar26,uVar4);
      *(undefined2 *)(lVar33 + 0x28 + lVar35) = 0x100;
      *(undefined8 *)(lVar33 + 0x30 + lVar35) = 0x7fefffffffffffff;
      local_1c8 = (ulonglong ****)&local_25c;
      puStack_1c0 = (undefined8 *)local_19c;
      local_19c = (undefined1  [4])iVar22;
      FUN_1406b2a14(local_2f0,local_268,&local_1c8,0);
      local_1c8 = &local_270;
      puStack_1c0 = (undefined8 *)local_19c;
      FUN_1406b2a14(uVar29,local_268,&local_1c8);
      local_280 = CONCAT44(local_280._4_4_,(uint)local_280 & ~uStack_290._4_4_);
      FUN_1449c0562(&uStack_290);
      iVar22 = local_280._4_4_;
      uVar15 = local_280;
    } while ((undefined8 *****)local_298 != &local_198 ||
             (local_288 != &local_188 || local_280._4_4_ != iVar23));
  }
  local_150 = 0;
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  uVar29 = (ulonglong)(((int)local_2b0 - (local_314 + (uint)local_310)) + local_2fc);
  FUN_1447a082e(&local_198);
  local_2d8 = local_2d8 + 1;
  lVar33 = local_308;
  goto LAB_146ba63d4;
}



// FUNCTION 146ba74e8 FUN_146ba74e8 body=110 status=ok
// SIG undefined FUN_146ba74e8(void)

double FUN_146ba74e8(uint *param_1,longlong *param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  
  dVar1 = *(double *)(param_1 + 0xc);
  dVar4 = 1.79769313486232e+308;
  if ((dVar1 != 1.79769313486232e+308) || (NAN(dVar1))) {
    uVar2 = *param_1;
    if (((int)uVar2 < (int)param_2[1] && -1 < (int)uVar2) &&
       (uVar3 = param_1[1], (int)uVar3 < (int)param_2[1] && -1 < (int)uVar3)) {
      dVar4 = (dVar1 - *(double *)(*(longlong *)(*param_2 + (ulonglong)uVar2 * 8) + 0x268)) -
              *(double *)(*(longlong *)(*param_2 + (ulonglong)uVar3 * 8) + 0x268);
    }
  }
  return dVar4;
}



// FUNCTION 146ba7556 FUN_146ba7556 body=324 status=ok
// SIG undefined FUN_146ba7556(void)

longlong FUN_146ba7556(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146c00942();
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  }
  else {
    if (*(longlong *)(param_1 + 0x220) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
    *(undefined8 *)(param_2 + 0x228) = 0;
    if (*(longlong *)(param_1 + 0x230) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
    *(undefined8 *)(param_2 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x23c);
    *(undefined8 *)(param_2 + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
    if (*(longlong *)(param_1 + 0x248) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
    *(undefined8 *)(param_2 + 0x248) = 0;
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
    *(undefined8 *)(param_2 + 0x250) = 0;
  }
  puVar2 = (undefined8 *)(param_2 + 600);
  puVar3 = (undefined8 *)(param_1 + 600);
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x2c8) = *(undefined2 *)(param_2 + 0x2c8);
  return param_1;
}



// FUNCTION 146ba769a FUN_146ba769a body=129 status=ok
// SIG undefined FUN_146ba769a(void)

undefined8 FUN_146ba769a(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0;
  if ((int)param_1[9] != 0) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    do {
      iVar6 = iVar5;
      if (iVar6 == -1) {
        return 0;
      }
      lVar1 = *param_1;
      lVar3 = (longlong)iVar6 * 0x10;
      iVar5 = *(int *)(lVar1 + 8 + lVar3);
    } while (*(uint *)(lVar1 + lVar3) != param_2);
    while (*(int *)(lVar1 + 4 + lVar3) != param_3) {
      do {
        iVar6 = iVar5;
        if (iVar6 == -1) {
          return 0;
        }
        lVar3 = (longlong)iVar6 * 0x10;
        iVar5 = *(int *)(lVar1 + 8 + lVar3);
      } while (*(uint *)(lVar1 + lVar3) != param_2);
    }
    FUN_146be7476(param_1,iVar6);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 146ba771c FUN_146ba771c body=114 status=ok
// SIG undefined FUN_146ba771c(void)

void FUN_146ba771c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(*param_1 + (longlong)(int)param_2 * 8);
  if (lVar1 != 0) {
    FUN_146ba12c2(lVar1);
    FUN_1400020a8(lVar1);
  }
  iVar2 = (int)param_1[1];
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*param_1 + (longlong)(int)param_2 * 8),
            (void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146ba778e FUN_146ba778e body=635 status=ok
// SIG undefined FUN_146ba778e(void)

ulonglong FUN_146ba778e(int *param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 2);
  param_1[4] = 0;
  if (param_1[5] < 0) {
    FUN_14481578e(plVar1,0);
  }
  param_1[0] = 0;
  param_1[1] = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_1[5] < param_2) {
    FUN_14481578e(plVar1,param_2);
  }
  if (param_2 != 0) {
    iVar7 = 0;
    do {
      local_88 = (undefined8 *)CONCAT44(local_88._4_4_,iVar7);
      cVar2 = (*(code *)*param_4)(param_4[1],&local_88);
      if (cVar2 != '\0') {
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
        if ((uint)param_1[5] < iVar4 + 1U) {
          FUN_1446f48e2(plVar1,iVar4);
        }
        *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (param_2 != iVar7);
  }
  local_88 = param_3;
  FUN_146bf2db1(*(undefined8 *)(param_1 + 2),param_1[4]);
  uVar3 = FUN_146bf3251(*(undefined8 *)(param_1 + 2),param_1[4],param_3);
  FUN_144a1a59e(plVar1,uVar3,1);
  iVar7 = param_1[4];
  param_1[1] = iVar7;
  if (iVar7 < 3) {
    iVar4 = 1;
    if (1 < iVar7) {
      iVar4 = iVar7;
    }
    *param_1 = iVar4 + -1;
  }
  else {
    local_68._0_4_ = **(undefined4 **)(param_1 + 2);
    (*(code *)*param_3)(&local_88,param_3[1],&local_68);
    local_68 = (undefined8 *)
               CONCAT44(local_68._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 2) + 4));
    (*(code *)*param_3)(&uStack_80,param_3[1],&local_68);
    if (2 < param_1[4]) {
      lVar5 = 2;
      do {
        local_68 = (undefined8 *)CONCAT44(local_68._4_4_,*(undefined4 *)(*plVar1 + lVar5 * 4));
        (*(code *)*param_3)(&local_90,param_3[1],&local_68);
        local_68 = local_88;
        local_70 = uStack_80;
        local_78 = local_90;
        fVar8 = (float)FUN_146bb358a(&local_68,&local_70,&local_78);
        if ((fVar8 != 0.0) || (NAN(fVar8))) {
          *param_1 = 2;
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          FUN_144a1a59e(&local_88,param_1[1],1);
          local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
          local_70 = CONCAT44(local_70._4_4_,param_1[1] + -1);
          local_a0 = *param_3;
          local_98 = param_3[1];
          local_a8 = &local_70;
          FUN_146ba7a0c(param_1,&local_a0,&local_88,&local_68);
          FUN_144a1a59e(plVar1,((int)local_70 - (int)local_68) + 1,1);
          if (local_88 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_146ba7947;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_1[4]);
    }
    *param_1 = 1;
  }
  uVar6 = 0;
LAB_146ba7947:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba7a0c FUN_146ba7a0c body=333 status=ok
// SIG undefined FUN_146ba7a0c(void)

void FUN_146ba7a0c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int *param_4,
                  int *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int local_b0;
  int local_a8;
  int *local_a0;
  int *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = *param_5;
  iVar2 = *param_4;
  if (iVar2 < iVar1) {
    local_50 = (iVar2 + iVar1) / 2;
    local_b8 = &local_50;
    local_54 = local_50 + 1;
    local_68 = *param_2;
    local_60 = param_2[1];
    local_58 = iVar1;
    local_4c = iVar2;
    FUN_146ba7a0c(param_1,&local_68,param_3,&local_4c);
    local_78 = *param_2;
    local_70 = param_2[1];
    local_b8 = &local_58;
    FUN_146ba7a0c(param_1,&local_78,param_3,&local_54);
    local_88 = *param_2;
    local_80 = param_2[1];
    local_98 = param_5;
    local_a8 = local_58;
    local_b0 = local_54;
    local_b8 = (int *)CONCAT44(local_b8._4_4_,local_50);
    local_a0 = param_4;
    FUN_146ba7b5a(param_1,&local_88,param_3,local_4c);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba7b5a FUN_146ba7b5a body=1004 status=ok
// SIG undefined FUN_146ba7b5a(void)

void FUN_146ba7b5a(longlong param_1,undefined8 *param_2,longlong *param_3,float param_4,int param_5,
                  int param_6,uint param_7,float *param_8,int *param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined1 auStack_f8 [32];
  float local_d8;
  uint local_d0;
  float *local_c8;
  float *local_c0;
  float local_ac;
  longlong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  float local_7c;
  undefined8 local_78;
  undefined8 local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  ulonglong local_48;
  
  uVar6 = (ulonglong)(uint)param_4;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = (longlong)(int)param_4;
  local_5c = *(float *)(*(longlong *)(param_1 + 8) + lVar4 * 4);
  local_a0 = param_3;
  (*(code *)*param_2)(&local_54,param_2[1]);
  local_ac = param_4;
  local_a8 = lVar4;
  if ((int)param_4 < param_5) {
    do {
      param_4 = (float)((int)param_4 + 1);
      local_64 = *(float *)(*(longlong *)(param_1 + 8) + 4 + lVar4 * 4);
      (*(code *)*param_2)(&local_5c,param_2[1],&local_64);
      if (local_5c <= local_54) {
        if (((local_54 == local_5c) && (!NAN(local_54) && !NAN(local_5c))) && (local_50 < local_58))
        goto LAB_146ba7c2e;
      }
      else {
LAB_146ba7c2e:
        local_54 = local_5c;
        local_50 = local_58;
        local_ac = param_4;
      }
      lVar4 = lVar4 + 1;
    } while (param_5 != lVar4);
  }
  lVar4 = (longlong)param_6;
  local_64 = *(float *)(*(longlong *)(param_1 + 8) + lVar4 * 4);
  local_98 = uVar6;
  (*(code *)*param_2)(&local_5c,param_2[1]);
  iVar8 = param_6;
  if (param_6 < (int)param_7) {
    iVar7 = param_6;
    do {
      iVar7 = iVar7 + 1;
      local_4c = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar4 * 4);
      (*(code *)*param_2)(&local_64,param_2[1],&local_4c);
      if (local_5c <= local_64) {
        if (((local_64 == local_5c) && (!NAN(local_64) && !NAN(local_5c))) && (local_60 < local_58))
        goto LAB_146ba7d0c;
      }
      else {
LAB_146ba7d0c:
        local_5c = local_64;
        local_58 = local_60;
        iVar8 = iVar7;
      }
      lVar4 = lVar4 + 1;
    } while ((int)param_7 != lVar4);
  }
  uVar6 = local_98;
  fVar9 = local_ac;
  local_64 = local_ac;
  local_c0 = (float *)&local_4c;
  local_78 = *param_2;
  local_70 = param_2[1];
  local_c8 = &local_64;
  local_d0 = param_7;
  local_d8 = (float)param_6;
  local_4c = iVar8;
  FUN_146ba7f48(param_1,&local_78,local_98 & 0xffffffff,param_5);
  local_c0 = &local_7c;
  local_7c = fVar9;
  local_c8 = (float *)&local_80;
  local_90 = *param_2;
  local_88 = param_2[1];
  local_d0 = param_5;
  fVar9 = (float)uVar6;
  local_d8 = fVar9;
  local_80 = iVar8;
  FUN_146ba7f48(param_1,&local_90,param_6,param_7);
  uVar2 = 0;
  if ((int)fVar9 <= param_5) {
    uVar2 = (param_5 - (int)fVar9) + 1;
    uVar6 = 0;
    fVar5 = local_7c;
    do {
      *(undefined4 *)(*local_a0 + uVar6 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)(int)fVar5 * 4);
      if (fVar5 == local_64) {
        uVar2 = (int)uVar6 + 1;
        break;
      }
      uVar6 = uVar6 + 1;
      bVar1 = param_5 <= (int)fVar5;
      fVar5 = (float)((int)fVar5 + 1);
      if (bVar1) {
        fVar5 = fVar9;
      }
    } while (uVar2 != uVar6);
  }
  uVar3 = uVar2;
  if (param_6 <= (int)param_7) {
    lVar4 = (longlong)(int)uVar2;
    uVar3 = (param_7 - param_6) + uVar2 + 1;
    iVar7 = 0;
    iVar8 = local_4c;
    do {
      *(undefined4 *)(*local_a0 + lVar4 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar8 * 4);
      if (iVar8 == local_80) {
        uVar3 = (uVar2 - iVar7) + 1;
        break;
      }
      bVar1 = (int)param_7 <= iVar8;
      iVar8 = iVar8 + 1;
      if (bVar1) {
        iVar8 = param_6;
      }
      iVar7 = iVar7 + -1;
      lVar4 = lVar4 + 1;
    } while (~param_7 + param_6 != iVar7);
  }
  fVar5 = fVar9;
  if (0 < (int)uVar3) {
    uVar6 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + local_a8 * 4 + uVar6 * 4) =
           *(undefined4 *)(*local_a0 + uVar6 * 4);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
    fVar5 = (float)((int)uVar6 + (int)fVar9);
  }
  *param_8 = fVar9;
  *param_9 = (int)fVar5 - 1;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ba7f48 FUN_146ba7f48 body=431 status=ok
// SIG undefined FUN_146ba7f48(void)

void FUN_146ba7f48(longlong param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
                  int param_6,int *param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  int local_70;
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (param_6 - param_5) + (param_4 - param_3) + 2;
  local_78 = param_3;
  local_74 = param_4;
  if (0 < local_70) {
    iVar4 = 0;
    do {
      local_4c = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)*param_7 * 4);
      (*(code *)*param_2)(local_5c,param_2[1],&local_4c);
      local_4c = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)*param_8 * 4);
      (*(code *)*param_2)(local_64,param_2[1],&local_4c);
      if (param_4 - param_3 < 1) {
LAB_146ba7ff9:
        if (param_6 - param_5 < 1) break;
        iVar3 = *param_8 + 1;
        if (param_6 <= *param_8) {
          iVar3 = param_5;
        }
        local_4c = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 4);
        (*(code *)*param_2)(local_6c,param_2[1],&local_4c);
        iVar1 = FUN_146ba80f8(local_5c,local_64,local_6c);
        if (iVar1 - 3U < 0xfffffffe) break;
        *param_8 = iVar3;
      }
      else {
        iVar3 = *param_7 + -1;
        if (*param_7 <= local_78) {
          iVar3 = local_74;
        }
        local_4c = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 4);
        (*(code *)*param_2)(local_54,param_2[1],&local_4c);
        uVar2 = FUN_146ba80f8(local_64,local_54,local_5c);
        if ((uVar2 & 0xfffffffd) != 1) goto LAB_146ba7ff9;
        *param_7 = iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba80f8 FUN_146ba80f8 body=254 status=ok
// SIG undefined FUN_146ba80f8(void)

char FUN_146ba80f8(float *param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  ulonglong uVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar1 = *param_1;
  local_44 = param_1[1];
  fVar2 = *param_2;
  local_4c = param_2[1];
  local_58 = *param_3;
  local_54 = param_3[1];
  local_50 = fVar2;
  local_48 = fVar1;
  fVar5 = (float)FUN_146bb358a();
  cVar3 = '\0';
  if ((fVar5 <= 0.0) && (cVar3 = '\x01', 0.0 <= fVar5)) {
    uVar4 = (ulonglong)((-(uint)(fVar1 == fVar2) & 1) << 2);
    fVar1 = *(float *)((longlong)param_1 + uVar4);
    fVar2 = *(float *)((longlong)param_2 + uVar4);
    cVar3 = '\x04';
    if (fVar2 < fVar1 != fVar1 <= *(float *)((longlong)param_3 + uVar4)) {
      cVar3 = (fVar2 < fVar1 != *(float *)((longlong)param_3 + uVar4) <= fVar2) + '\x02';
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba81f8 FUN_146ba81f8 body=1093 status=ok
// SIG undefined FUN_146ba81f8(void)

void FUN_146ba81f8(int *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_138 [40];
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_1[0] = 0;
  param_1[1] = 0;
  local_110 = (longlong *)(param_1 + 2);
  FUN_144a9ff88();
  local_a8._0_4_ = 0;
  (*(code *)*param_3)(&local_d8,param_3[1],&local_a8);
  dVar13 = dStack_d0;
  dVar3 = local_d8;
  local_a8 = (double)CONCAT44(local_a8._4_4_,param_2 + -1);
  (*(code *)*param_3)(&local_e8,param_3[1],&local_a8);
  dVar3 = dVar13 * local_e8 - dVar3 * local_e0;
  iVar8 = 0;
  iVar10 = 1;
  uVar11 = SUB84(local_d8,0);
  uVar12 = (int)((ulonglong)local_d8 >> 0x20);
  dVar13 = dStack_d0;
  do {
    local_b8 = CONCAT44(local_b8._4_4_,iVar10);
    (*(code *)*param_3)(&local_a8,param_3[1],&local_b8);
    if (local_d8 <= local_a8) {
      if (((local_a8 == local_d8) && (!NAN(local_a8) && !NAN(local_d8))) && (dStack_a0 < dStack_d0))
      goto LAB_146ba8310;
    }
    else {
LAB_146ba8310:
      local_d8 = local_a8;
      dStack_d0 = dStack_a0;
      iVar8 = iVar10;
    }
    dVar3 = dVar3 + ((double)CONCAT44(uVar12,uVar11) * dStack_a0 - dVar13 * local_a8);
    iVar10 = iVar10 + 1;
    uVar11 = SUB84(local_a8,0);
    uVar12 = (int)((ulonglong)local_a8 >> 0x20);
    dVar13 = dStack_a0;
    if (param_2 == iVar10) {
      iVar10 = param_1[4];
      param_1[4] = iVar10 + 1U;
      if ((uint)param_1[5] < iVar10 + 1U) {
        FUN_1446f48e2(local_110,iVar10);
      }
      dVar3 = (double)(&DAT_149931160)[0.0 <= dVar3];
      *(int *)(*local_110 + (longlong)iVar10 * 4) = iVar8;
      uVar11 = SUB84(local_d8,0);
      uVar12 = (undefined4)((ulonglong)local_d8 >> 0x20);
      iVar10 = iVar8 + 1;
      if (param_2 <= iVar10) {
        iVar10 = 0;
      }
      uVar14 = SUB84(dStack_d0,0);
      uVar15 = (undefined4)((ulonglong)dStack_d0 >> 0x20);
      local_a8 = (double)CONCAT44(local_a8._4_4_,iVar10);
      (*(code *)*param_3)(&local_f8,param_3[1]);
      if (iVar10 != iVar8) {
        iVar5 = iVar10 + 1;
        if (param_2 <= iVar10 + 1) {
          iVar5 = 0;
        }
        do {
          iVar4 = iVar5;
          local_a8 = (double)CONCAT44(local_a8._4_4_,iVar4);
          (*(code *)*param_3)(&local_108,param_3[1],&local_a8);
          local_a8 = (double)CONCAT44(uVar12,uVar11);
          dStack_a0 = (double)CONCAT44(uVar15,uVar14);
          local_b8 = local_f8;
          uStack_b0 = uStack_f0;
          local_c8 = local_108;
          uStack_c4 = uStack_104;
          uStack_c0 = uStack_100;
          uStack_bc = uStack_fc;
          dVar13 = (double)FUN_146bb2d66(&local_a8,&local_b8);
          if (dVar13 * dVar3 <= 0.0) {
            do {
              lVar9 = (longlong)param_1[4];
              if (lVar9 < 2) goto LAB_146ba852d;
              local_f8 = CONCAT44(uVar12,uVar11);
              uStack_f0 = CONCAT44(uVar15,uVar14);
              uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 2) + -4 + lVar9 * 4);
              param_1[4] = param_1[4] + -1;
              local_b8 = CONCAT44(local_b8._4_4_,
                                  *(undefined4 *)(*(longlong *)(param_1 + 2) + -8 + lVar9 * 4));
              (*(code *)*param_3)(&local_a8,param_3[1],&local_b8);
              uVar11 = SUB84(local_a8,0);
              uVar12 = (undefined4)((ulonglong)local_a8 >> 0x20);
              uVar14 = SUB84(dStack_a0,0);
              uVar15 = (undefined4)((ulonglong)dStack_a0 >> 0x20);
              local_b8 = local_f8;
              uStack_b0 = uStack_f0;
              local_c8 = local_108;
              uStack_c4 = uStack_104;
              uStack_c0 = uStack_100;
              uStack_bc = uStack_fc;
              dVar13 = (double)FUN_146bb2d66(&local_a8,&local_b8);
            } while (dVar13 * dVar3 <= 0.0);
            iVar10 = param_1[4];
            param_1[4] = iVar10 + 1U;
            if ((uint)param_1[5] < iVar10 + 1U) {
              FUN_1446f48e2(local_110,iVar10);
            }
            *(undefined4 *)(*local_110 + (longlong)iVar10 * 4) = uVar1;
          }
          else {
            iVar5 = param_1[4];
            param_1[4] = iVar5 + 1U;
            if ((uint)param_1[5] < iVar5 + 1U) {
              FUN_1446f48e2(local_110,iVar5);
            }
            *(int *)(*local_110 + (longlong)iVar5 * 4) = iVar10;
          }
          uVar11 = (undefined4)local_f8;
          uVar12 = (undefined4)((ulonglong)local_f8 >> 0x20);
          uVar14 = (undefined4)uStack_f0;
          uVar15 = (undefined4)((ulonglong)uStack_f0 >> 0x20);
LAB_146ba852d:
          local_f8 = CONCAT44(uStack_104,local_108);
          uStack_f0 = CONCAT44(uStack_fc,uStack_100);
          iVar5 = iVar4 + 1;
          if (param_2 <= iVar4 + 1) {
            iVar5 = 0;
          }
          iVar10 = iVar4;
        } while (iVar4 != iVar8);
      }
      uVar7 = param_1[4];
      if ((dVar3 < 0.0) && (1 < (int)uVar7)) {
        puVar2 = (undefined4 *)*local_110;
        lVar9 = 0;
        puVar6 = puVar2;
        do {
          uVar11 = *puVar6;
          *puVar6 = puVar2[(ulonglong)uVar7 + lVar9 + -1];
          puVar2[(ulonglong)uVar7 + lVar9 + -1] = uVar11;
          lVar9 = lVar9 + -1;
          puVar6 = puVar6 + 1;
        } while (-lVar9 != (ulonglong)(uVar7 >> 1));
        uVar7 = param_1[4];
      }
      *param_1 = (uint)(2 < (int)uVar7) * 2;
      if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 146ba863e FUN_146ba863e body=688 status=ok
// SIG undefined FUN_146ba863e(void)

ulonglong FUN_146ba863e(int *param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  double dVar8;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 2);
  param_1[4] = 0;
  if (param_1[5] < 0) {
    FUN_14481578e(plVar1,0);
  }
  param_1[0] = 0;
  param_1[1] = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_1[5] < param_2) {
    FUN_14481578e(plVar1,param_2);
  }
  if (param_2 != 0) {
    iVar7 = 0;
    do {
      local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,iVar7);
      cVar2 = (*(code *)*param_4)(param_4[1],&local_b8);
      if (cVar2 != '\0') {
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
        if ((uint)param_1[5] < iVar4 + 1U) {
          FUN_1446f48e2(plVar1,iVar4);
        }
        *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (param_2 != iVar7);
  }
  local_b8 = param_3;
  FUN_146bf334f(*(undefined8 *)(param_1 + 2),param_1[4]);
  uVar3 = FUN_146bf37f3(*(undefined8 *)(param_1 + 2),param_1[4],param_3);
  FUN_144a1a59e(plVar1,uVar3,1);
  iVar7 = param_1[4];
  param_1[1] = iVar7;
  if (iVar7 < 3) {
    iVar4 = 1;
    if (1 < iVar7) {
      iVar4 = iVar7;
    }
    *param_1 = iVar4 + -1;
  }
  else {
    local_78._0_4_ = **(undefined4 **)(param_1 + 2);
    (*(code *)*param_3)(&local_b8,param_3[1],&local_78);
    local_78 = (undefined8 *)
               CONCAT44(local_78._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 2) + 4));
    (*(code *)*param_3)(&local_a8,param_3[1],&local_78);
    if (2 < param_1[4]) {
      lVar5 = 2;
      do {
        local_78 = (undefined8 *)CONCAT44(local_78._4_4_,*(undefined4 *)(*plVar1 + lVar5 * 4));
        (*(code *)*param_3)(&local_c8,param_3[1],&local_78);
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        local_88 = local_a8;
        uStack_84 = uStack_a4;
        uStack_80 = uStack_a0;
        uStack_7c = uStack_9c;
        local_98 = local_c8;
        uStack_94 = uStack_c4;
        uStack_90 = uStack_c0;
        uStack_8c = uStack_bc;
        dVar8 = (double)FUN_146bb2d66(&local_78,&local_88,&local_98);
        if ((dVar8 != 0.0) || (NAN(dVar8))) {
          *param_1 = 2;
          local_b8 = (undefined8 *)0x0;
          uStack_b0 = 0;
          uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          FUN_144a1a59e(&local_b8,param_1[1],1);
          local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
          local_88 = param_1[1] + -1;
          local_d8 = *param_3;
          local_d0 = param_3[1];
          local_e8 = &local_88;
          FUN_146ba88f0(param_1,&local_d8,&local_b8,&local_78);
          FUN_144a1a59e(plVar1,(local_88 - (int)local_78) + 1,1);
          if (local_b8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_146ba881b;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_1[4]);
    }
    *param_1 = 1;
  }
  uVar6 = 0;
LAB_146ba881b:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba88f0 FUN_146ba88f0 body=333 status=ok
// SIG undefined FUN_146ba88f0(void)

void FUN_146ba88f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int *param_4,
                  int *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int local_b0;
  int local_a8;
  int *local_a0;
  int *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = *param_5;
  iVar2 = *param_4;
  if (iVar2 < iVar1) {
    local_50 = (iVar2 + iVar1) / 2;
    local_b8 = &local_50;
    local_54 = local_50 + 1;
    local_68 = *param_2;
    local_60 = param_2[1];
    local_58 = iVar1;
    local_4c = iVar2;
    FUN_146ba88f0(param_1,&local_68,param_3,&local_4c);
    local_78 = *param_2;
    local_70 = param_2[1];
    local_b8 = &local_58;
    FUN_146ba88f0(param_1,&local_78,param_3,&local_54);
    local_88 = *param_2;
    local_80 = param_2[1];
    local_98 = param_5;
    local_a8 = local_58;
    local_b0 = local_54;
    local_b8 = (int *)CONCAT44(local_b8._4_4_,local_50);
    local_a0 = param_4;
    FUN_146ba8ae8(param_1,&local_88,param_3,local_4c);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba8a3e FUN_146ba8a3e body=170 status=ok
// SIG undefined FUN_146ba8a3e(void)

void FUN_146ba8a3e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  
  uVar3 = DAT_14c8463f8;
  if (*(int *)(param_1 + 0x10) < 2) {
    *param_2 = DAT_14c8463f0;
    param_2[1] = uVar3;
    dVar6 = 0.0;
    uVar7 = 0x3ff0000000000000;
  }
  else {
    lVar1 = *param_3;
    lVar5 = (longlong)(*(int **)(param_1 + 8))[1] * 0x10;
    lVar4 = (longlong)**(int **)(param_1 + 8) * 0x10;
    dVar2 = *(double *)(lVar1 + 8 + lVar5) - *(double *)(lVar1 + 8 + lVar4);
    dVar8 = *(double *)(lVar1 + lVar5) - *(double *)(lVar1 + lVar4);
    dVar9 = SQRT(dVar8 * dVar8 + dVar2 * dVar2);
    dVar6 = 0.0;
    uVar7 = -(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar8 * (1.0 / dVar9));
    if (0.0 < dVar9) {
      dVar6 = dVar2 * (1.0 / dVar9);
    }
    uVar3 = ((undefined8 *)(lVar1 + lVar4))[1];
    *param_2 = *(undefined8 *)(lVar1 + lVar4);
    param_2[1] = uVar3;
  }
  param_2[2] = uVar7;
  param_2[3] = dVar6;
  return;
}



// FUNCTION 146ba8ae8 FUN_146ba8ae8 body=1007 status=ok
// SIG undefined FUN_146ba8ae8(void)

void FUN_146ba8ae8(longlong param_1,undefined8 *param_2,longlong *param_3,uint param_4,int param_5,
                  int param_6,uint param_7,uint *param_8,int *param_9)

{
  bool bVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_108 [32];
  uint local_e8;
  uint local_e0;
  uint *local_d8;
  uint *local_d0;
  uint local_c4;
  longlong local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  int local_4c;
  ulonglong local_48;
  
  uVar6 = (ulonglong)param_4;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = (longlong)(int)param_4;
  local_70 = (double)CONCAT44(local_70._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 8) + lVar4 * 4)
                             );
  local_b8 = param_3;
  (*(code *)*param_2)(&local_60,param_2[1]);
  local_c4 = param_4;
  local_c0 = lVar4;
  if ((int)param_4 < param_5) {
    do {
      param_4 = param_4 + 1;
      local_80 = *(uint *)(*(longlong *)(param_1 + 8) + 4 + lVar4 * 4);
      (*(code *)*param_2)(&local_70,param_2[1],&local_80);
      if (local_70 <= local_60) {
        if (((local_60 == local_70) && (!NAN(local_60) && !NAN(local_70))) && (local_58 < local_68))
        goto LAB_146ba8bbd;
      }
      else {
LAB_146ba8bbd:
        local_60 = local_70;
        local_58 = local_68;
        local_c4 = param_4;
      }
      lVar4 = lVar4 + 1;
    } while (param_5 != lVar4);
  }
  lVar4 = (longlong)param_6;
  local_80 = *(uint *)(*(longlong *)(param_1 + 8) + lVar4 * 4);
  local_b0 = uVar6;
  (*(code *)*param_2)(&local_70,param_2[1]);
  iVar8 = param_6;
  if (param_6 < (int)param_7) {
    iVar7 = param_6;
    do {
      iVar7 = iVar7 + 1;
      local_4c = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar4 * 4);
      (*(code *)*param_2)(&local_80,param_2[1],&local_4c);
      dVar2 = (double)CONCAT44(uStack_7c,local_80);
      if (local_70 <= dVar2) {
        if (((dVar2 == local_70) && (!NAN(dVar2) && !NAN(local_70))) && (local_78 < local_68))
        goto LAB_146ba8c9e;
      }
      else {
LAB_146ba8c9e:
        local_68 = local_78;
        iVar8 = iVar7;
        local_70 = dVar2;
      }
      lVar4 = lVar4 + 1;
    } while ((int)param_7 != lVar4);
  }
  uVar6 = local_b0;
  uVar5 = local_c4;
  local_80 = local_c4;
  local_d0 = (uint *)&local_4c;
  local_90 = *param_2;
  local_88 = param_2[1];
  local_d8 = &local_80;
  local_e0 = param_7;
  local_e8 = param_6;
  local_4c = iVar8;
  FUN_146ba8ed8(param_1,&local_90,local_b0 & 0xffffffff,param_5);
  local_d0 = &local_94;
  local_94 = uVar5;
  local_d8 = (uint *)&local_98;
  local_a8 = *param_2;
  local_a0 = param_2[1];
  local_e0 = param_5;
  uVar9 = (uint)uVar6;
  local_e8 = uVar9;
  local_98 = iVar8;
  FUN_146ba8ed8(param_1,&local_a8,param_6,param_7);
  uVar5 = 0;
  if ((int)uVar9 <= param_5) {
    uVar5 = (param_5 - uVar9) + 1;
    uVar6 = 0;
    uVar3 = local_94;
    do {
      *(undefined4 *)(*local_b8 + uVar6 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar3 * 4);
      if (uVar3 == local_80) {
        uVar5 = (int)uVar6 + 1;
        break;
      }
      uVar6 = uVar6 + 1;
      bVar1 = param_5 <= (int)uVar3;
      uVar3 = uVar3 + 1;
      if (bVar1) {
        uVar3 = uVar9;
      }
    } while (uVar5 != uVar6);
  }
  uVar3 = uVar5;
  if (param_6 <= (int)param_7) {
    lVar4 = (longlong)(int)uVar5;
    uVar3 = (param_7 - param_6) + uVar5 + 1;
    iVar7 = 0;
    iVar8 = local_4c;
    do {
      *(undefined4 *)(*local_b8 + lVar4 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar8 * 4);
      if (iVar8 == local_98) {
        uVar3 = (uVar5 - iVar7) + 1;
        break;
      }
      bVar1 = (int)param_7 <= iVar8;
      iVar8 = iVar8 + 1;
      if (bVar1) {
        iVar8 = param_6;
      }
      iVar7 = iVar7 + -1;
      lVar4 = lVar4 + 1;
    } while (~param_7 + param_6 != iVar7);
  }
  uVar5 = uVar9;
  if (0 < (int)uVar3) {
    uVar6 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + local_c0 * 4 + uVar6 * 4) =
           *(undefined4 *)(*local_b8 + uVar6 * 4);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
    uVar5 = (int)uVar6 + uVar9;
  }
  *param_8 = uVar9;
  *param_9 = uVar5 - 1;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ba8ed8 FUN_146ba8ed8 body=443 status=ok
// SIG undefined FUN_146ba8ed8(void)

void FUN_146ba8ed8(longlong param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
                  int param_6,int *param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_c8 [44];
  int local_9c;
  int local_98;
  int local_94;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [20];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_94 = (param_6 - param_5) + (param_4 - param_3) + 2;
  local_9c = param_3;
  local_98 = param_4;
  if (0 < local_94) {
    iVar4 = 0;
    do {
      local_4c = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)*param_7 * 4);
      (*(code *)*param_2)(local_70,param_2[1],&local_4c);
      local_4c = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)*param_8 * 4);
      (*(code *)*param_2)(local_80,param_2[1],&local_4c);
      if (param_4 - param_3 < 1) {
LAB_146ba8f8f:
        if (param_6 - param_5 < 1) break;
        iVar3 = *param_8 + 1;
        if (param_6 <= *param_8) {
          iVar3 = param_5;
        }
        local_4c = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 4);
        (*(code *)*param_2)(local_90,param_2[1],&local_4c);
        iVar1 = FUN_146ba9094(local_70,local_80,local_90);
        if (iVar1 - 3U < 0xfffffffe) break;
        *param_8 = iVar3;
      }
      else {
        iVar3 = *param_7 + -1;
        if (*param_7 <= local_9c) {
          iVar3 = local_98;
        }
        local_4c = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 4);
        (*(code *)*param_2)(local_60,param_2[1],&local_4c);
        uVar2 = FUN_146ba9094(local_80,local_60,local_70);
        if ((uVar2 & 0xfffffffd) != 1) goto LAB_146ba8f8f;
        *param_7 = iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_94);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba9094 FUN_146ba9094 body=270 status=ok
// SIG undefined FUN_146ba9094(void)

char FUN_146ba9094(double *param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = *param_1;
  local_50 = param_1[1];
  dVar2 = *param_2;
  local_60 = param_2[1];
  local_78 = *param_3;
  local_70 = param_3[1];
  local_68 = dVar2;
  local_58 = dVar1;
  dVar5 = (double)FUN_146bb2d66();
  cVar3 = '\0';
  if ((dVar5 <= 0.0) && (cVar3 = '\x01', 0.0 <= dVar5)) {
    uVar4 = (ulonglong)((-(uint)(dVar1 == dVar2) & 1) << 3);
    dVar1 = *(double *)((longlong)param_1 + uVar4);
    dVar2 = *(double *)((longlong)param_2 + uVar4);
    cVar3 = '\x04';
    if (dVar2 < dVar1 != dVar1 <= *(double *)((longlong)param_3 + uVar4)) {
      cVar3 = (dVar2 < dVar1 != *(double *)((longlong)param_3 + uVar4) <= dVar2) + '\x02';
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba91a4 FUN_146ba91a4 body=2070 status=ok
// SIG undefined FUN_146ba91a4(void)

void FUN_146ba91a4(undefined4 *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,
                  double param_5)

{
  ulonglong *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 *puVar9;
  char cVar10;
  double *pdVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  double *pdVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  undefined1 local_198 [36];
  uint local_174;
  ulonglong local_170;
  undefined4 *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  uint local_140 [4];
  uint local_130;
  uint local_12c;
  undefined8 local_128;
  undefined8 local_110;
  uint local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_198;
  if (0 < (int)param_2) {
    uVar19 = 0;
    do {
      uVar15 = (uint)uVar19;
      local_110._0_4_ = uVar15;
      cVar10 = (*(code *)*param_4)(param_4[1],&local_110);
      if (cVar10 != '\0') {
        local_168 = param_1;
        local_128._0_4_ = uVar15;
        (*(code *)*param_3)(&local_110,param_3[1],&local_128);
        local_128._0_4_ = uVar15;
        (*(code *)*param_3)(&local_110,param_3[1],&local_128);
        local_158._0_4_ = uVar15;
        (*(code *)*param_3)(&local_128,param_3[1]);
        local_140[3] = uVar15;
        local_130 = uVar15;
        local_12c = uVar15;
        local_140[0] = uVar15;
        local_140[1] = uVar15;
        local_140[2] = uVar15;
        uVar15 = uVar15 + 1;
        local_170 = uVar19;
        if ((int)uVar15 < (int)param_2) {
          local_174 = param_2;
          local_160 = param_4;
          do {
            local_158._0_4_ = uVar15;
            cVar10 = (*(code *)*local_160)(local_160[1],&local_158);
            if (cVar10 != '\0') {
              pdVar16 = (double *)&local_128;
              lVar17 = 0;
              lVar18 = 0;
              do {
                local_f4 = uVar15;
                (*(code *)*param_3)(&local_158,param_3[1],&local_f4);
                dVar3 = *(double *)((longlong)&local_158 + lVar17 * 2);
                if (*(double *)((longlong)&local_110 + lVar17 * 2) <= dVar3) {
                  pdVar2 = (double *)((longlong)&local_128 + lVar17 * 2);
                  pdVar11 = pdVar16;
                  puVar12 = local_140;
                  if (*pdVar2 <= dVar3 && dVar3 != *pdVar2) goto LAB_146ba93e4;
                }
                else {
                  pdVar11 = (double *)(&local_110 + lVar18);
                  puVar12 = local_140 + 3;
LAB_146ba93e4:
                  *pdVar11 = dVar3;
                  *(uint *)((longlong)puVar12 + lVar17) = uVar15;
                }
                lVar18 = lVar18 + 1;
                lVar17 = lVar17 + 4;
                pdVar16 = pdVar16 + 1;
              } while (lVar17 != 0xc);
            }
            uVar15 = uVar15 + 1;
            param_4 = local_160;
            param_2 = local_174;
          } while (uVar15 != local_174);
        }
        puVar9 = local_168;
        dVar3 = (double)CONCAT44(local_128._4_4_,(uint)local_128) -
                (double)CONCAT44(local_110._4_4_,(uint)local_110);
        uVar19 = 0;
        uVar13 = 1;
        do {
          if (dVar3 < (double)(&local_128)[uVar13] - (double)(&local_110)[uVar13]) {
            uVar19 = uVar13 & 0xffffffff;
            dVar3 = (double)(&local_128)[uVar13] - (double)(&local_110)[uVar13];
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != 3);
        uVar15 = local_140[(longlong)(int)uVar19 + 3];
        local_168[1] = uVar15;
        local_168[2] = local_140[(int)uVar19];
        if (dVar3 <= param_5) {
          *local_168 = 0;
          local_168[2] = uVar15;
LAB_146ba9566:
          puVar9[3] = uVar15;
        }
        else {
          local_f4 = uVar15;
          (*(code *)*param_3)(&local_158,param_3[1],&local_f4);
          *(double *)(puVar9 + 10) = local_148;
          puVar9[6] = (uint)local_158;
          puVar9[7] = local_158._4_4_;
          puVar9[8] = uStack_150;
          puVar9[9] = uStack_14c;
          local_f4 = puVar9[2];
          (*(code *)*param_3)(&local_158,param_3[1],&local_f4);
          uVar19 = local_170;
          dVar4 = *(double *)(puVar9 + 10);
          dVar7 = local_148 - dVar4;
          dVar5 = *(double *)(puVar9 + 6);
          dVar6 = *(double *)(puVar9 + 8);
          dVar26 = (double)CONCAT44(uStack_14c,uStack_150) - dVar6;
          dVar8 = (double)CONCAT44(local_158._4_4_,(uint)local_158) - dVar5;
          dVar20 = SQRT(dVar7 * dVar7 + dVar8 * dVar8 + dVar26 * dVar26);
          dVar22 = 0.0;
          dVar21 = 1.0 / dVar20;
          if (0.0 < dVar20) {
            dVar8 = dVar8 * dVar21;
            dVar26 = dVar26 * dVar21;
          }
          else {
            dVar8 = 0.0;
            dVar26 = 0.0;
          }
          dVar7 = (double)(-(ulonglong)(0.0 < dVar20) & (ulonglong)(dVar7 * dVar21));
          *(double *)(puVar9 + 0xc) = dVar8;
          *(double *)(puVar9 + 0xe) = dVar26;
          *(double *)(puVar9 + 0x10) = dVar7;
          iVar14 = (int)local_170;
          if (iVar14 < (int)param_2) {
            uVar13 = local_170 & 0xffffffff;
            dVar22 = 0.0;
            do {
              uVar15 = (uint)uVar13;
              local_158._0_4_ = uVar15;
              cVar10 = (*(code *)*param_4)(param_4[1],&local_158);
              if (cVar10 != '\0') {
                local_f4 = uVar15;
                (*(code *)*param_3)(&local_158,param_3[1],&local_f4);
                dVar20 = (local_148 - dVar4) * dVar7 +
                         ((double)CONCAT44(local_158._4_4_,(uint)local_158) - dVar5) * dVar8 +
                         ((double)CONCAT44(uStack_14c,uStack_150) - dVar6) * dVar26;
                dVar21 = (dVar7 * dVar20 + dVar4) - local_148;
                dVar23 = (dVar26 * dVar20 + dVar6) - (double)CONCAT44(uStack_14c,uStack_150);
                dVar20 = (dVar20 * dVar8 + dVar5) -
                         (double)CONCAT44(local_158._4_4_,(uint)local_158);
                dVar20 = dVar21 * dVar21 + dVar20 * dVar20 + dVar23 * dVar23;
                if (dVar22 < dVar20) {
                  puVar9[3] = uVar15;
                  dVar22 = dVar20;
                }
              }
              uVar13 = (ulonglong)(uVar15 + 1);
            } while (param_2 != uVar15 + 1);
          }
          if (dVar22 < 0.0) {
            dVar22 = sqrt(dVar22);
          }
          else {
            dVar22 = SQRT(dVar22);
          }
          dVar3 = dVar3 * param_5;
          if (dVar22 <= dVar3) {
LAB_146ba9989:
            *puVar9 = 1;
            uVar15 = puVar9[2];
            goto LAB_146ba9566;
          }
          local_f4 = puVar9[3];
          (*(code *)*param_3)(&local_158,param_3[1]);
          dVar4 = *(double *)(puVar9 + 10);
          dVar21 = local_148 - dVar4;
          dVar5 = *(double *)(puVar9 + 6);
          dVar6 = *(double *)(puVar9 + 8);
          dVar26 = (double)CONCAT44(uStack_14c,uStack_150) - dVar6;
          dVar23 = (double)CONCAT44(local_158._4_4_,(uint)local_158) - dVar5;
          dVar7 = *(double *)(puVar9 + 0xc);
          dVar22 = *(double *)(puVar9 + 0xe);
          dVar8 = *(double *)(puVar9 + 0x10);
          dVar20 = dVar8 * dVar21 + dVar7 * dVar23 + dVar26 * dVar22;
          dVar23 = dVar23 - dVar20 * dVar7;
          *(double *)(puVar9 + 0x12) = dVar23;
          dVar26 = dVar26 - dVar22 * dVar20;
          *(double *)(puVar9 + 0x14) = dVar26;
          dVar21 = dVar21 - dVar8 * dVar20;
          *(double *)(puVar9 + 0x16) = dVar21;
          dVar20 = dVar21 * dVar21 + dVar23 * dVar23 + dVar26 * dVar26;
          if (dVar20 <= param_5) goto LAB_146ba9989;
          dVar20 = 1.0 / SQRT(dVar20);
          dVar23 = dVar23 * dVar20;
          *(double *)(puVar9 + 0x12) = dVar23;
          dVar26 = dVar26 * dVar20;
          *(double *)(puVar9 + 0x14) = dVar26;
          dVar21 = dVar21 * dVar20;
          *(double *)(puVar9 + 0x16) = dVar21;
          dVar20 = dVar7 * dVar26 - dVar23 * dVar22;
          dVar23 = dVar8 * dVar23 - dVar21 * dVar7;
          dVar7 = dVar22 * dVar21 - dVar26 * dVar8;
          *(double *)(puVar9 + 0x18) = dVar7;
          *(double *)(puVar9 + 0x1a) = dVar23;
          *(double *)(puVar9 + 0x1c) = dVar20;
          dVar22 = dVar20 * dVar20 + dVar7 * dVar7 + dVar23 * dVar23;
          if (dVar22 <= param_5) goto LAB_146ba9989;
          dVar22 = 1.0 / SQRT(dVar22);
          dVar7 = dVar7 * dVar22;
          *(double *)(puVar9 + 0x18) = dVar7;
          dVar23 = dVar23 * dVar22;
          *(double *)(puVar9 + 0x1a) = dVar23;
          dVar20 = dVar20 * dVar22;
          *(double *)(puVar9 + 0x1c) = dVar20;
          if (iVar14 < (int)param_2) {
            dVar22 = 0.0;
            uVar24 = 0;
            uVar25 = 0;
            do {
              uVar15 = (uint)uVar19;
              local_158._0_4_ = uVar15;
              cVar10 = (*(code *)*param_4)(param_4[1],&local_158);
              if (cVar10 != '\0') {
                local_f4 = uVar15;
                (*(code *)*param_3)(&local_158,param_3[1],&local_f4);
                dVar8 = (local_148 * dVar20 +
                        (double)CONCAT44(local_158._4_4_,(uint)local_158) * dVar7 +
                        (double)CONCAT44(uStack_14c,uStack_150) * dVar23) -
                        (dVar4 * dVar20 + dVar5 * dVar7 + dVar6 * dVar23);
                uVar19 = -(ulonglong)(-dVar8 <= dVar8);
                dVar21 = (double)(~uVar19 & (ulonglong)-dVar8 | uVar19 & (ulonglong)dVar8);
                if ((double)CONCAT44(uVar25,uVar24) <= dVar21 &&
                    dVar21 != (double)CONCAT44(uVar25,uVar24)) {
                  dVar22 = (double)(-(ulonglong)(0.0 < dVar8) & 0x3ff0000000000000 |
                                   ~-(ulonglong)(0.0 < dVar8) &
                                   (ulonglong)
                                   ((uint)(-(ulonglong)(dVar8 < 0.0) >> 0x20) & 0xbff00000) << 0x20)
                  ;
                  puVar9[4] = uVar15;
                  uVar24 = SUB84(dVar21,0);
                  uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
                }
              }
              uVar19 = (ulonglong)(uVar15 + 1);
            } while (param_2 != uVar15 + 1);
            if (dVar3 < (double)CONCAT44(uVar25,uVar24)) {
              if (0.0 < dVar22) {
                puVar1 = (ulonglong *)(puVar9 + 3);
                *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
              }
LAB_146ba99a2:
              *puVar9 = 3;
              goto LAB_146ba9276;
            }
          }
          else if (dVar3 < 0.0) goto LAB_146ba99a2;
          *puVar9 = 2;
          uVar15 = puVar9[3];
        }
        puVar9[4] = uVar15;
        goto LAB_146ba9276;
      }
      uVar19 = (ulonglong)(uVar15 + 1);
    } while (param_2 != uVar15 + 1);
  }
  *param_1 = 0;
LAB_146ba9276:
  if ((local_f0 ^ (ulonglong)local_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba99bc FUN_146ba99bc body=41 status=ok
// SIG undefined FUN_146ba99bc(void)

void FUN_146ba99bc(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146be7820();
  return;
}



// FUNCTION 146ba99e6 FUN_146ba99e6 body=308 status=ok
// SIG undefined FUN_146ba99e6(void)

undefined8 FUN_146ba99e6(float *param_1,float *param_2,float *param_3,float *param_4)

{
  double dVar1;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = (double)*param_1;
  local_20 = (double)param_1[1];
  local_18 = (double)param_1[2];
  local_48 = (double)*param_2;
  local_40 = (double)param_2[1];
  local_38 = (double)param_2[2];
  local_68 = (double)*param_3;
  local_60 = (double)param_3[1];
  local_58 = (double)param_3[2];
  local_88 = (double)*param_4;
  local_80 = (double)param_4[1];
  local_78 = (double)param_4[2];
  dVar1 = (double)FUN_146bb2dfa(&local_28,&local_48,&local_68,&local_88);
  dVar1 = (double)(-(ulonglong)(0.0 < dVar1) & 0x3ff0000000000000 |
                  ~-(ulonglong)(0.0 < dVar1) & -(ulonglong)(dVar1 < 0.0) & 0xbff0000000000000);
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ba9b1c FUN_146ba9b1c body=596 status=ok
// SIG undefined FUN_146ba9b1c(void)

void FUN_146ba9b1c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined8 local_b0;
  int *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_b4 = 0;
  iVar4 = (int)param_2[1];
  local_c8 = param_2;
  if (0 < iVar4) {
    do {
      lVar9 = (longlong)local_b4 * 0xc + *local_c8;
      lVar11 = 2;
      lVar5 = 0;
      do {
        local_b8 = *(undefined4 *)(lVar9 + lVar5 * 4);
        local_bc = *(undefined4 *)(lVar9 + lVar11 * 4);
        local_b0 = &local_bc;
        local_a8 = &local_b4;
        FUN_146be7a00(&local_98,local_9c,&local_b0);
        lVar10 = lVar5 + 1;
        lVar11 = lVar5;
        lVar5 = lVar10;
      } while (lVar10 != 3);
      local_b4 = local_b4 + 1;
      iVar4 = (int)local_c8[1];
    } while (local_b4 < iVar4);
  }
  plVar8 = local_c8;
  FUN_146bd783c(param_1,iVar4,1);
  if (0 < (int)plVar8[1]) {
    lVar11 = 0;
    do {
      lVar10 = *plVar8 + lVar11 * 0xc;
      lVar5 = 0;
      lVar9 = 2;
      do {
        lVar3 = lVar5;
        local_b0 = (undefined4 *)
                   CONCAT44(*(undefined4 *)(lVar10 + lVar9 * 4),*(undefined4 *)(lVar10 + lVar3 * 4))
        ;
        uVar2 = FUN_1448eb174(&local_b0,8,0);
        iVar4 = -1;
        if ((int)uStack_90 != local_64) {
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = local_60;
          }
          iVar6 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & uVar2) * 4);
          if (iVar6 != -1) {
            do {
              piVar1 = (int *)(local_98 + (longlong)iVar6 * 0x14);
              if ((*piVar1 == (int)local_b0) &&
                 (*(int *)(local_98 + 4 + (longlong)iVar6 * 0x14) == local_b0._4_4_)) {
                if (piVar1 + 2 != (int *)0x0 && piVar1 != (int *)0x0) {
                  iVar4 = piVar1[2];
                }
                break;
              }
              iVar6 = piVar1[3];
            } while (iVar6 != -1);
          }
        }
        *(int *)(*param_1 + lVar11 * 0xc + lVar9 * 4) = iVar4;
        lVar5 = lVar3 + 1;
        lVar9 = lVar3;
      } while (lVar3 + 1 != 3);
      lVar11 = lVar11 + 1;
      plVar8 = local_c8;
    } while (lVar11 < (int)local_c8[1]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146be7e8c(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ba9d72 FUN_146ba9d72 body=928 status=ok
// SIG undefined FUN_146ba9d72(void)

void FUN_146ba9d72(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  double *pdVar2;
  code *pcVar3;
  undefined8 uVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_128 [36];
  uint local_104;
  longlong local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  longlong local_e0;
  int local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  longlong local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = (longlong *)(param_1 + 0x10);
  local_f0 = param_4;
  FUN_146bf38f8(local_f8,(int)param_2[1],1);
  local_c8[0] = 0;
  local_c8[1] = 0;
  FUN_1403ed7b2(local_c8,param_3,1);
  if (0 < (int)param_2[1]) {
    lVar8 = 0;
    do {
      local_a0 = *(undefined4 *)(*param_2 + 8 + lVar8 * 0xc);
      local_a8 = *(undefined8 *)(*param_2 + lVar8 * 0xc);
      lVar10 = 0;
      do {
        *(undefined1 *)(local_c8[0] + *(int *)((longlong)&local_a8 + lVar10 * 4)) = 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_2[1]);
    local_d8 = 0;
    if (0 < (int)param_2[1]) {
      local_e8 = param_1 + 0x20;
      local_104 = param_3;
      local_e0 = param_1;
      do {
        pcVar3 = (code *)*local_f0;
        uVar4 = local_f0[1];
        lVar8 = *param_2;
        lVar9 = (longlong)local_d8;
        local_b8 = *(undefined4 *)(lVar8 + lVar9 * 0xc);
        (*pcVar3)(&local_a8,uVar4,&local_b8);
        local_ac = *(undefined4 *)(lVar8 + 4 + lVar9 * 0xc);
        (*pcVar3)(&local_b8,uVar4,&local_ac);
        lVar10 = local_e0;
        uVar7 = local_104;
        local_94 = local_b0;
        local_9c = CONCAT44(uStack_b4,local_b8);
        local_ac = *(undefined4 *)(lVar8 + 8 + lVar9 * 0xc);
        (*pcVar3)(&local_b8,uVar4,&local_ac);
        local_88 = local_b0;
        local_90 = CONCAT44(uStack_b4,local_b8);
        FUN_146bf3980((longlong)local_d8 * 0x40 + *local_f8,&local_a8);
        if (0 < (int)uVar7) {
          uVar12 = 0;
          do {
            uVar11 = (undefined4)uVar12;
            local_b8 = uVar11;
            cVar6 = (*(code *)*param_5)(param_5[1],&local_b8);
            if ((cVar6 != '\0') && (*(char *)(local_c8[0] + uVar12) == '\0')) {
              local_b8 = uVar11;
              (*(code *)*local_f0)(&local_d4,local_f0[1],&local_b8);
              lVar8 = *(longlong *)(lVar10 + 0x10);
              lVar9 = (longlong)local_d8 * 0x40;
              dVar5 = ((double)local_cc * *(double *)(lVar8 + 0x30 + lVar9) +
                      (double)local_d4 * *(double *)(lVar8 + 0x20 + lVar9) +
                      (double)local_d0 * *(double *)(lVar8 + 0x28 + lVar9)) -
                      *(double *)(lVar8 + 0x38 + lVar9);
              if (((*(double *)(lVar10 + 0x70) < 0.0) || (*(double *)(lVar10 + 0x70) < dVar5)) &&
                 (fVar13 = (float)FUN_146ba99e6(&local_a8,&local_9c,&local_90,&local_d4),
                 0.0 < fVar13)) {
                lVar9 = (longlong)local_d8;
                lVar8 = *local_f8;
                if (*(int *)(lVar8 + 8 + lVar9 * 0x40) == 0) {
                  FUN_1447cbafe(local_e8,&local_b8,&local_d8,0);
                  lVar9 = (longlong)local_d8;
                  lVar8 = *(longlong *)(lVar10 + 0x10);
                }
                plVar1 = (longlong *)(lVar8 + lVar9 * 0x40);
                pdVar2 = (double *)(lVar8 + 0x18 + lVar9 * 0x40);
                if (*pdVar2 <= dVar5 && dVar5 != *pdVar2) {
                  plVar1[3] = (longlong)dVar5;
                  *(undefined4 *)(plVar1 + 2) = uVar11;
                }
                lVar8 = (longlong)(int)plVar1[1];
                uVar7 = (int)plVar1[1] + 1;
                *(uint *)(plVar1 + 1) = uVar7;
                if (*(uint *)((longlong)plVar1 + 0xc) < uVar7) {
                  local_100 = lVar8;
                  FUN_1446f48e2(plVar1,lVar8);
                  lVar8 = local_100;
                }
                *(undefined4 *)(*plVar1 + lVar8 * 4) = uVar11;
                *(undefined1 *)(local_c8[0] + uVar12) = 1;
              }
            }
            uVar12 = uVar12 + 1;
          } while (param_3 != uVar12);
        }
        local_d8 = local_d8 + 1;
      } while (local_d8 < (int)param_2[1]);
    }
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146baa114 FUN_146baa114 body=501 status=ok
// SIG undefined FUN_146baa114(void)

int * FUN_146baa114(longlong param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong lStack_78;
  ulonglong local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[0] = -1;
  param_2[1] = -1;
  if (param_3 == '\0') {
    local_a0 = param_1 + 0x30;
    local_a8 = (longlong *)&DAT_100000000;
    uStack_98 = 0xffffffff;
    local_90 = local_90 & 0xffffffff00000000;
    if (*(int *)(param_1 + 0x48) == 0) {
      uStack_98._4_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_a8);
    }
    if (uStack_98._4_4_ < *(int *)(local_a0 + 0x18)) {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)uStack_98._4_4_ * 0xc);
      *param_2 = iVar7;
      param_2[1] = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10 + (longlong)iVar7 * 0x40);
    }
    goto LAB_146baa25a;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar2 = param_1 + 0x30;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  uStack_68 = 0;
  lStack_78 = lVar2;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    iVar7 = *(int *)(param_1 + 0x48);
  }
  uStack_88 = CONCAT44(uStack_64,uStack_68);
  local_90 = local_70;
  uVar4 = local_90;
  local_a0 = local_80;
  uStack_98 = lStack_78;
  local_90._4_4_ = (int)(local_70 >> 0x20);
  local_a8 = plVar1;
  if (local_90._4_4_ == iVar7) {
    iVar8 = -1;
    iVar9 = -1;
    if (lStack_78 != lVar2) goto LAB_146baa1d1;
  }
  else {
LAB_146baa1d1:
    iVar9 = -1;
    uVar10 = 0;
    uVar11 = 0xbff00000;
    iVar8 = -1;
    iVar5 = local_90._4_4_;
    local_90 = uVar4;
    do {
      iVar5 = *(int *)(*local_a8 + (longlong)iVar5 * 0xc);
      lVar6 = (longlong)iVar5 * 0x40;
      dVar3 = *(double *)(*(longlong *)(param_1 + 0x10) + 0x18 + lVar6);
      if ((double)CONCAT44(uVar11,uVar10) <= dVar3 && dVar3 != (double)CONCAT44(uVar11,uVar10)) {
        iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar6);
        uVar10 = SUB84(dVar3,0);
        uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
        iVar9 = iVar5;
      }
      local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
      FUN_1449c0562(&local_a0);
      iVar5 = local_90._4_4_;
      uVar4 = local_90;
    } while (local_a8 != plVar1 || (uStack_98 != lVar2 || local_90._4_4_ != iVar7));
  }
  local_90 = uVar4;
  *param_2 = iVar9;
  param_2[1] = iVar8;
LAB_146baa25a:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146baa30a FUN_146baa30a body=2199 status=ok
// SIG undefined FUN_146baa30a(void)

ulonglong FUN_146baa30a(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
                       undefined4 param_5,float param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  undefined1 auStack_228 [32];
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  int local_1c4;
  ulonglong local_1c0;
  ulonglong local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  int local_18c;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  float local_14c;
  float local_148;
  float local_144;
  undefined8 local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  float local_110;
  uint uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8 [2];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  plVar15 = local_e8;
  local_e8[0] = CONCAT44(local_e8[0]._4_4_,param_5);
  (*(code *)*param_3)(&local_14c,param_3[1],plVar15);
  local_208 = &local_168;
  local_168 = 0;
  uStack_160 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_1f8 = &local_178;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = *param_3;
  local_180 = param_3[1];
  local_1e0 = 0.0 < param_6;
  local_1e8 = 0xffffffff;
  local_200 = plVar15;
  local_1f0 = param_4;
  local_1d8 = param_2;
  FUN_146bf3c3a(param_1,param_2,&local_188,&local_14c);
  lVar1 = local_178;
  if (0.0 < param_6) {
    if ((uint)uStack_170 != 0) {
      lVar11 = (longlong)(int)(uint)uStack_170;
      lVar13 = 0;
      do {
        local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(lVar1 + lVar13));
        (*(code *)*param_3)(&local_118,param_3[1],&local_140);
        if ((local_110 - local_144) * (local_110 - local_144) +
            (local_118._4_4_ - local_148) * (local_118._4_4_ - local_148) +
            ((float)local_118 - local_14c) * ((float)local_118 - local_14c) < param_6) {
          uVar12 = 0;
          goto LAB_146baab02;
        }
        lVar13 = lVar13 + 0xc;
      } while (lVar11 * 0xc != lVar13);
    }
    local_140 = 0x100000000;
    local_130 = 0xffffffff;
    local_128 = 0;
    iVar16 = 0;
    local_138 = local_d8;
    if (local_c0 != 0) {
      FUN_1449c0562(&local_140);
      iVar16 = local_c0;
    }
    local_100 = local_130;
    uVar8 = local_100;
    local_f8 = local_128;
    local_f4 = local_124;
    local_110 = (float)local_140;
    uStack_10c = (uint)((ulonglong)local_140 >> 0x20);
    local_108 = SUB84(local_138,0);
    uStack_104 = (undefined4)((ulonglong)local_138 >> 0x20);
    local_100._4_4_ = (int)((ulonglong)local_130 >> 0x20);
    local_118 = plVar15;
    if ((local_100._4_4_ != iVar16) || (local_138 != local_d8)) {
      iVar10 = local_100._4_4_;
      local_100 = uVar8;
      do {
        FUN_146bf3fd2(param_1,*(undefined4 *)(*local_118 + (longlong)iVar10 * 0xc),&local_168);
        local_100 = CONCAT44(local_100._4_4_,(uint)local_100 & ~uStack_10c);
        FUN_1449c0562(&local_110);
        iVar10 = local_100._4_4_;
        uVar8 = local_100;
      } while (local_118 != plVar15 ||
               ((undefined1 *)CONCAT44(uStack_104,local_108) != local_d8 ||
               local_100._4_4_ != iVar16));
    }
    local_100 = uVar8;
  }
  local_1c0 = (ulonglong)(uint)uStack_170;
  if (0 < (int)(uint)uStack_170) {
    local_1c4 = (int)local_1d8[1];
    local_1a0 = (ulonglong)((uint)uStack_170 - 1);
    local_1a8 = param_1 + 2;
    local_1b0 = param_1 + 4;
    uVar12 = 0;
    local_1b8 = local_1c0;
    do {
      lVar1 = local_178;
      uVar3 = *(undefined4 *)(local_178 + uVar12 * 0xc);
      uVar4 = *(undefined4 *)(local_178 + 4 + uVar12 * 0xc);
      iVar16 = (int)local_1d8[1];
      *(uint *)(local_1d8 + 1) = iVar16 + 1U;
      local_1d0 = uVar12;
      if (*(uint *)((longlong)local_1d8 + 0xc) < iVar16 + 1U) {
        FUN_146bd78c8(local_1d8,iVar16);
      }
      lVar13 = (longlong)iVar16;
      lVar11 = *local_1d8;
      *(undefined4 *)(lVar11 + lVar13 * 0xc) = param_5;
      *(undefined4 *)(lVar11 + 4 + lVar13 * 0xc) = uVar3;
      *(undefined4 *)(lVar11 + 8 + lVar13 * 0xc) = uVar4;
      iVar14 = ((int)local_1a0 + (int)local_1d0) % (int)local_1c0;
      local_1d0 = local_1d0 + 1;
      iVar10 = (int)local_1d0;
      if (local_1d0 == local_1b8) {
        iVar10 = 0;
      }
      lVar1 = lVar1 + uVar12 * 0xc;
      iVar5 = *(int *)(lVar1 + 8);
      iVar6 = (int)param_1[1];
      lVar11 = (longlong)iVar6;
      *(uint *)(param_1 + 1) = iVar6 + 1U;
      local_18c = iVar16;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
        FUN_146bd78c8(param_1,iVar6);
      }
      lVar13 = *param_1;
      *(int *)(lVar13 + lVar11 * 0xc) = iVar14 + local_1c4;
      *(int *)(lVar13 + 4 + lVar11 * 0xc) = iVar5;
      *(int *)(lVar13 + 8 + lVar11 * 0xc) = iVar10 + local_1c4;
      lVar11 = (longlong)iVar5 * 0xc;
      lVar13 = 3;
      do {
        if (*(int *)(*local_1d8 + lVar11) == *(int *)(lVar1 + 4)) {
          *(int *)(*param_1 + lVar11) = local_18c;
          break;
        }
        lVar11 = lVar11 + 4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      iVar16 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar16 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar16 + 1U) {
        FUN_146bf3abe(local_1a8,iVar16);
      }
      lVar1 = param_1[2];
      lVar11 = (longlong)iVar16 * 0x40;
      plVar15 = (longlong *)(lVar1 + lVar11);
      puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar11);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar1 + 0x30 + lVar11);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar11);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar1 + lVar11) = 0;
      ((undefined8 *)(lVar1 + lVar11))[1] = 0;
      *(undefined4 *)(lVar1 + 0x10 + lVar11) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x18 + lVar11) = 0xffefffffffffffff;
      pcVar7 = (code *)*param_3;
      uVar8 = param_3[1];
      lVar11 = (longlong)local_18c;
      lVar1 = *local_1d8;
      local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(lVar1 + lVar11 * 0xc));
      local_198 = uVar8;
      (*pcVar7)(&local_118,uVar8,&local_140);
      local_11c = *(undefined4 *)(lVar1 + 4 + lVar11 * 0xc);
      (*pcVar7)(&local_140,uVar8,&local_11c);
      uStack_104 = local_138._0_4_;
      uStack_10c = (uint)local_140;
      local_108 = (undefined4)((ulonglong)local_140 >> 0x20);
      local_11c = *(undefined4 *)(lVar1 + 8 + lVar11 * 0xc);
      (*pcVar7)(&local_140,local_198,&local_11c);
      local_f8 = local_138._0_4_;
      local_100 = local_140;
      FUN_146bf3980(plVar15,&local_118);
      if ((double)param_1[0xe] <= 0.0) {
        if (0 < (int)uStack_160) {
          uVar17 = 0;
          do {
            uVar3 = *(undefined4 *)(local_168 + (longlong)(int)uVar17 * 4);
            local_11c = uVar3;
            (*(code *)*param_3)(&local_140,param_3[1],&local_11c);
            fVar18 = (float)FUN_146ba99e6(&local_118,&uStack_10c,&local_100,&local_140);
            if (fVar18 <= 0.0) {
              iVar16 = (int)uStack_160;
            }
            else {
              FUN_146bf4096(plVar15,uVar3,&local_140);
              iVar16 = ~uVar17 + (int)uStack_160;
              if (iVar16 != 0) {
                if (0 < iVar16) {
                  iVar16 = 1;
                }
                memmove((void *)(local_168 + (longlong)(int)uVar17 * 4),
                        (void *)(local_168 + (longlong)((int)uStack_160 - iVar16) * 4),
                        (longlong)iVar16 << 2);
              }
              iVar16 = (int)uStack_160 + -1;
              uStack_160 = CONCAT44(uStack_160._4_4_,iVar16);
              uVar17 = uVar17 - 1;
            }
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < iVar16);
        }
      }
      else if (0 < (int)uStack_160) {
        uVar17 = 0;
        do {
          uVar3 = *(undefined4 *)(local_168 + (longlong)(int)uVar17 * 4);
          local_11c = uVar3;
          (*(code *)*param_3)(&local_140,param_3[1],&local_11c);
          dVar9 = ((double)local_138._0_4_ * (double)plVar15[6] +
                  (double)(float)local_140 * (double)plVar15[4] +
                  (double)local_140._4_4_ * (double)plVar15[5]) - (double)plVar15[7];
          if (((double)param_1[0xe] <= dVar9 && dVar9 != (double)param_1[0xe]) &&
             (fVar18 = (float)FUN_146ba99e6(&local_118,&uStack_10c,&local_100,&local_140),
             0.0 < fVar18)) {
            if ((double)plVar15[3] <= dVar9 && dVar9 != (double)plVar15[3]) {
              plVar15[3] = (longlong)dVar9;
              *(undefined4 *)(plVar15 + 2) = uVar3;
            }
            iVar16 = (int)plVar15[1];
            *(uint *)(plVar15 + 1) = iVar16 + 1U;
            if (*(uint *)((longlong)plVar15 + 0xc) < iVar16 + 1U) {
              FUN_1446f48e2(plVar15,iVar16);
            }
            *(undefined4 *)(*plVar15 + (longlong)iVar16 * 4) = uVar3;
            iVar16 = ~uVar17 + (int)uStack_160;
            if (iVar16 != 0) {
              if (0 < iVar16) {
                iVar16 = 1;
              }
              memmove((void *)(local_168 + (longlong)(int)uVar17 * 4),
                      (void *)(local_168 + (longlong)((int)uStack_160 - iVar16) * 4),
                      (longlong)iVar16 << 2);
            }
            uStack_160 = CONCAT44(uStack_160._4_4_,(int)uStack_160 + -1);
            uVar17 = uVar17 - 1;
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)uStack_160);
      }
      if (0 < (int)plVar15[1]) {
        FUN_1447cbafe(local_1b0,&local_140,&local_18c,0);
      }
      uVar12 = local_1d0;
    } while (local_1d0 != local_1b8);
  }
  FUN_146bf4106(param_1,local_1d8,local_e8);
  uVar12 = CONCAT71((int7)((ulonglong)plVar15 >> 8),1);
LAB_146baab02:
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_e8);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 146baaba2 FUN_146baaba2 body=131 status=ok
// SIG undefined FUN_146baaba2(void)

void FUN_146baaba2(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (longlong)(int)param_2 * 0x40;
  local_30 = *param_3;
  local_28 = param_3[1];
  FUN_146bf4690(*(longlong *)(param_1 + 0x10) + lVar1,param_2 >> 0x20,&local_30);
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146baac38 FUN_146baac38 body=95 status=ok
// SIG undefined FUN_146baac38(void)

void FUN_146baac38(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 4);
  FUN_146be7657(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146baac98 FUN_146baac98 body=1507 status=ok
// SIG undefined FUN_146baac98(void)

void FUN_146baac98(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int *piVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_188 [32];
  longlong *local_168;
  byte local_159;
  longlong *local_158;
  longlong *local_150;
  uint local_144;
  char *local_140;
  undefined8 *local_138;
  undefined1 local_130 [8];
  float local_128;
  longlong *local_120;
  uint *local_118;
  undefined1 *local_110;
  longlong **local_108;
  undefined4 local_fc [3];
  undefined4 local_f0 [3];
  int local_e4 [3];
  float local_d8;
  float fStack_d4;
  float local_d0;
  uint local_cc;
  longlong local_c8 [3];
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined4 local_8c;
  undefined4 local_88 [3];
  undefined1 local_7c [12];
  undefined1 local_70 [16];
  ulonglong local_60;
  int iVar14;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*param_1 == '\x01') && (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x58))) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_c8[2] = 0;
    uStack_b0 = 0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_88[0] = 0xffffffff;
    FUN_1448156a8();
    iVar4 = *(int *)(param_1 + 0x58);
    if (0 < iVar4) {
      local_158 = (longlong *)(param_1 + 0x60);
      local_150 = (longlong *)(param_1 + 0x50);
      uVar9 = 0;
      uVar5 = 0;
      local_140 = param_1;
      local_138 = param_2;
      do {
        if (*(int *)(local_c8[0] + uVar9 * 4) < 0) {
          *(uint *)(local_c8[0] + uVar9 * 4) = uVar5;
          bVar16 = (longlong)uStack_b0 < 0;
          uStack_b0 = uStack_b0 & 0xffffffff00000000;
          local_144 = uVar5;
          local_cc = uVar5;
          if (bVar16) {
            FUN_14481578e(local_c8 + 2,0);
          }
          lVar8 = *local_150;
          lVar12 = uVar9 * 0xc;
          puVar7 = (undefined4 *)(*local_158 + lVar12);
          local_120._0_4_ = *(undefined4 *)(lVar8 + lVar12);
          (*(code *)*param_3)(local_88,param_3[1],&local_120);
          local_120._0_4_ = *(undefined4 *)(lVar8 + 4 + lVar12);
          (*(code *)*param_3)(local_7c,param_3[1],&local_120);
          local_120 = (longlong *)CONCAT44(local_120._4_4_,*(undefined4 *)(lVar8 + 8 + lVar12));
          (*(code *)*param_3)(local_70,param_3[1],&local_120);
          FUN_146bab27c(&local_d8,local_88,local_7c,local_70);
          local_159 = 0.0 < local_d0 * local_d0 + local_d8 * local_d8 + fStack_d4 * fStack_d4;
          lVar10 = (longlong)(int)(uint)uStack_b0;
          uVar5 = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < uVar5) {
            uVar6 = uStack_b0 & 0xffffffff;
            uStack_b0._0_4_ = uVar5;
            FUN_1446f48e2(local_c8 + 2,uVar6);
            uVar5 = (uint)uStack_b0;
          }
          uStack_b0._0_4_ = uVar5;
          uVar5 = (uint)uStack_b0;
          *(undefined4 *)(local_c8[2] + lVar10 * 4) = *puVar7;
          lVar10 = (longlong)(int)(uint)uStack_b0;
          uStack_b0._0_4_ = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < (uint)uStack_b0) {
            FUN_1446f48e2(local_c8 + 2,uVar5);
          }
          uVar5 = (uint)uStack_b0;
          *(undefined4 *)(local_c8[2] + lVar10 * 4) = puVar7[1];
          lVar10 = (longlong)(int)(uint)uStack_b0;
          uStack_b0._0_4_ = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < (uint)uStack_b0) {
            FUN_1446f48e2(local_c8 + 2,uVar5);
          }
          *(undefined4 *)(local_c8[2] + lVar10 * 4) = puVar7[2];
          if (0 < (int)(uint)uStack_b0) {
            piVar15 = (int *)(lVar8 + lVar12);
            uVar5 = (uint)uStack_b0;
            do {
              lVar8 = (longlong)*(int *)(local_c8[2] + -4 + (ulonglong)uVar5 * 4);
              uVar5 = uVar5 - 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
              iVar4 = *(int *)(local_c8[0] + lVar8 * 4);
              if ((iVar4 < 0) && ((int)~local_cc <= iVar4)) {
                puVar7 = (undefined4 *)(*local_150 + lVar8 * 0xc);
                iVar4 = -1;
                local_e4[0] = -1;
                lVar12 = 0;
                do {
                  iVar1 = puVar7[lVar12];
                  iVar13 = iVar1;
                  iVar14 = iVar1;
                  if (iVar1 == piVar15[2]) {
                    iVar13 = local_e4[0];
                    iVar14 = iVar4;
                  }
                  if (iVar1 == piVar15[1]) {
                    iVar13 = local_e4[0];
                    iVar14 = iVar4;
                  }
                  local_e4[0] = iVar13;
                  if (iVar1 == *piVar15) {
                    local_e4[0] = iVar4;
                    iVar14 = iVar4;
                  }
                  iVar4 = iVar14;
                  lVar12 = lVar12 + 1;
                } while (lVar12 != 3);
                (*(code *)*param_3)(&local_120,param_3[1],local_e4);
                fVar17 = (float)FUN_146ba99e6(local_88,local_7c,local_70,&local_120);
                if ((fVar17 != 0.0) || (NAN(fVar17))) {
                  *(uint *)(local_c8[0] + lVar8 * 4) = -2 - local_cc;
                }
                else {
                  *(uint *)(local_c8[0] + lVar8 * 4) = local_cc;
                  bVar16 = true;
                  if ((local_159 & 1) == 0) {
                    local_f0[0] = puVar7[2];
                    (*(code *)*param_3)(local_e4,param_3[1],local_f0);
                    local_fc[0] = puVar7[1];
                    (*(code *)*param_3)(local_f0,param_3[1],local_fc);
                    local_8c = *puVar7;
                    (*(code *)*param_3)(local_fc,param_3[1],&local_8c);
                    FUN_146bab27c(&local_d8,local_fc,local_f0,local_e4);
                    bVar16 = 0.0 < local_d0 * local_d0 + local_d8 * local_d8 + fStack_d4 * fStack_d4
                    ;
                  }
                  lVar12 = *local_158;
                  lVar10 = 0;
                  local_159 = bVar16;
                  do {
                    uVar6 = uStack_b0;
                    iVar4 = *(int *)(lVar8 * 0xc + lVar12 + lVar10 * 4);
                    iVar1 = *(int *)(local_c8[0] + (longlong)iVar4 * 4);
                    if ((-1 < iVar1) || (iVar1 < (int)~local_cc)) {
                      lVar11 = (longlong)(int)(uint)uStack_b0;
                      uVar5 = (uint)uStack_b0 + 1;
                      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
                      if (uStack_b0._4_4_ < uVar5) {
                        FUN_1446f48e2(local_c8 + 2,uVar6 & 0xffffffff);
                      }
                      *(int *)(local_c8[2] + lVar11 * 4) = iVar4;
                    }
                    lVar10 = lVar10 + 1;
                  } while (lVar10 != 3);
                }
                uVar5 = (uint)uStack_b0;
              }
            } while (0 < (int)uVar5);
          }
          puVar3 = local_138;
          pcVar2 = local_140;
          bVar16 = (longlong)uStack_a0 < 0;
          uStack_a0 = uStack_a0 & 0xffffffff00000000;
          if (bVar16) {
            FUN_14481578e(&local_a8,0);
          }
          uVar5 = local_144 + 1;
          local_120 = local_c8;
          local_118 = &local_cc;
          local_108 = &local_120;
          local_110 = &LAB_146bf47d8;
          local_168 = &local_a8;
          FUN_146bab44c(local_150,local_158,&local_110,uVar9 & 0xffffffff);
          local_128 = local_d0;
          (*(code *)*puVar3)(puVar3[1],&local_a8,local_130);
          iVar4 = *(int *)(pcVar2 + 0x58);
        }
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)iVar4);
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bab27c FUN_146bab27c body=463 status=ok
// SIG undefined FUN_146bab27c(void)

void FUN_146bab27c(uint *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = param_3[2] - param_2[2];
  fVar4 = param_3[1] - param_2[1];
  fVar5 = *param_3 - *param_2;
  fVar6 = param_4[2] - param_2[2];
  fVar2 = param_4[1] - param_2[1];
  fVar1 = *param_4 - *param_2;
  fVar9 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4);
  fVar3 = 0.0;
  fVar8 = 1.0 / fVar9;
  if (0.0 < fVar9) {
    fVar5 = fVar5 * fVar8;
    fVar4 = fVar4 * fVar8;
  }
  else {
    fVar5 = 0.0;
    fVar4 = 0.0;
  }
  fVar7 = (float)(-(uint)(0.0 < fVar9) & (uint)(fVar7 * fVar8));
  fVar9 = SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar8 = 1.0 / fVar9;
  fVar6 = (float)(-(uint)(0.0 < fVar9) & (uint)(fVar6 * fVar8));
  if (0.0 < fVar9) {
    fVar1 = fVar1 * fVar8;
    fVar2 = fVar2 * fVar8;
  }
  else {
    fVar2 = 0.0;
    fVar1 = 0.0;
  }
  fVar8 = fVar1 * fVar4 - fVar5 * fVar2;
  fVar5 = fVar6 * fVar5 - fVar7 * fVar1;
  fVar1 = fVar2 * fVar7 - fVar4 * fVar6;
  fVar4 = SQRT(fVar8 * fVar8 + fVar1 * fVar1 + fVar5 * fVar5);
  fVar2 = 1.0 / fVar4;
  if (0.0 < fVar4) {
    fVar8 = fVar8 * fVar2;
    fVar3 = fVar5 * fVar2;
  }
  else {
    fVar8 = 0.0;
  }
  *param_1 = -(uint)(0.0 < fVar4) & (uint)(fVar1 * fVar2);
  param_1[1] = (uint)fVar3;
  param_1[2] = (uint)fVar8;
  return;
}



// FUNCTION 146bab44c FUN_146bab44c body=1307 status=ok
// SIG undefined FUN_146bab44c(void)

void FUN_146bab44c(longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,
                  longlong *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  ulonglong uVar8;
  int iVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78[0] = 0;
  local_78[1] = 0;
  local_90 = param_2;
  FUN_1403ed7b2(local_78,(int)param_1[1],1);
  local_88 = 0;
  uStack_80 = 0;
  iVar9 = (int)param_1[1];
  local_98 = param_1;
  if (iVar9 < -2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9 / 3);
  }
  if (2 < iVar9) {
    FUN_146bf5832(&local_88);
  }
  uVar11 = 0x100000000;
  *(undefined1 *)(local_78[0] + param_4) = 1;
  lVar12 = (longlong)param_4 * 0xc;
  uVar1 = *(uint *)(*local_90 + 8 + lVar12);
  lVar13 = *local_98;
  iVar9 = *(int *)(lVar13 + lVar12);
  if (*(int *)(lVar13 + (longlong)(int)uVar1 * 0xc) == iVar9) {
    uVar11 = 0;
  }
  else {
    lVar13 = lVar13 + (longlong)(int)uVar1 * 0xc;
    if ((*(int *)(lVar13 + 4) != iVar9) && (uVar11 = 0xff00000000, *(int *)(lVar13 + 8) == iVar9)) {
      uVar11 = 0x200000000;
    }
  }
  lVar13 = (longlong)(int)(uint)uStack_80;
  uVar5 = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < uVar5) {
    uVar8 = uStack_80 & 0xffffffff;
    uStack_80._0_4_ = uVar5;
    FUN_146bf5892(&local_88,uVar8);
    uVar5 = (uint)uStack_80;
  }
  uStack_80._0_4_ = uVar5;
  uVar5 = (uint)uStack_80;
  *(ulonglong *)(local_88 + lVar13 * 8) = uVar11 | uVar1;
  uVar1 = *(uint *)(*local_90 + 4 + lVar12);
  lVar13 = *local_98;
  iVar9 = *(int *)(lVar13 + 8 + lVar12);
  if (*(int *)(lVar13 + (longlong)(int)uVar1 * 0xc) == iVar9) {
    uVar11 = 0;
  }
  else {
    lVar13 = lVar13 + (longlong)(int)uVar1 * 0xc;
    uVar11 = 0x100000000;
    if ((*(int *)(lVar13 + 4) != iVar9) && (uVar11 = 0xff00000000, *(int *)(lVar13 + 8) == iVar9)) {
      uVar11 = 0x200000000;
    }
  }
  lVar13 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_146bf5892(&local_88,uVar5);
  }
  uVar5 = (uint)uStack_80;
  *(ulonglong *)(local_88 + lVar13 * 8) = uVar11 | uVar1;
  uVar1 = *(uint *)(*local_90 + lVar12);
  lVar13 = *local_98;
  iVar9 = *(int *)(lVar13 + 4 + lVar12);
  if (*(int *)(lVar13 + (longlong)(int)uVar1 * 0xc) == iVar9) {
    uVar11 = 0;
  }
  else {
    lVar13 = lVar13 + (longlong)(int)uVar1 * 0xc;
    uVar11 = 0x100000000;
    if ((*(int *)(lVar13 + 4) != iVar9) && (uVar11 = 0xff00000000, *(int *)(lVar13 + 8) == iVar9)) {
      uVar11 = 0x200000000;
    }
  }
  lVar13 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_146bf5892(&local_88,uVar5);
  }
  *(ulonglong *)(local_88 + lVar13 * 8) = uVar11 | uVar1;
  if ((uint)uStack_80 != 0) {
    do {
      uVar2 = *(undefined8 *)(local_88 + -8);
      uStack_80._0_4_ = 0xffffffff;
      iVar9 = (int)uVar2;
      local_64 = iVar9;
      cVar4 = (*(code *)*param_3)(param_3[1],&local_64);
      uVar1 = (uint)uStack_80;
      lVar13 = (longlong)iVar9;
      cVar10 = (char)((ulonglong)uVar2 >> 0x20);
      if (cVar4 == '\0') {
        lVar12 = *local_98;
        iVar9 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar9 + 1U) {
          FUN_1446f48e2(param_5,iVar9);
        }
        *(undefined4 *)(*param_5 + (longlong)iVar9 * 4) =
             *(undefined4 *)(lVar13 * 0xc + lVar12 + (longlong)cVar10 * 4);
      }
      else if (*(char *)(local_78[0] + lVar13) == '\0') {
        *(undefined1 *)(local_78[0] + lVar13) = 1;
        sVar7 = (short)(cVar10 + 2) % 3;
        lVar13 = lVar13 * 0xc;
        uVar5 = *(uint *)(*local_90 + lVar13 + (longlong)sVar7 * 4);
        lVar12 = *local_98;
        sVar6 = sVar7 + 1;
        if (1 < sVar7) {
          sVar6 = 0;
        }
        iVar9 = *(int *)(lVar12 + lVar13 + (longlong)sVar6 * 4);
        if (*(int *)(lVar12 + (longlong)(int)uVar5 * 0xc) == iVar9) {
          uVar11 = 0;
        }
        else {
          lVar12 = lVar12 + (longlong)(int)uVar5 * 0xc;
          uVar11 = 0x100000000;
          if ((*(int *)(lVar12 + 4) != iVar9) &&
             (uVar11 = 0xff00000000, *(int *)(lVar12 + 8) == iVar9)) {
            uVar11 = 0x200000000;
          }
        }
        lVar12 = (longlong)(int)(uint)uStack_80;
        uStack_80._0_4_ = (uint)uStack_80 + 1;
        if (uStack_80._4_4_ < (uint)uStack_80) {
          FUN_146bf5892(&local_88,uVar1);
        }
        uVar3 = (uint)uStack_80;
        *(ulonglong *)(local_88 + lVar12 * 8) = uVar11 | uVar5;
        sVar6 = (short)((uint)(((short)cVar10 + 1) * 0x5556) >> 0x10);
        sVar6 = (short)((short)cVar10 + 1) + (sVar6 - (sVar6 >> 0xf)) * -3;
        uVar1 = *(uint *)(*local_90 + lVar13 + (longlong)sVar6 * 4);
        lVar12 = *local_98;
        sVar7 = sVar6 + 1;
        if (1 < sVar6) {
          sVar7 = 0;
        }
        iVar9 = *(int *)(lVar13 + lVar12 + (longlong)sVar7 * 4);
        if (*(int *)(lVar12 + (longlong)(int)uVar1 * 0xc) == iVar9) {
          uVar11 = 0;
        }
        else {
          lVar12 = lVar12 + (longlong)(int)uVar1 * 0xc;
          uVar11 = 0x100000000;
          if ((*(int *)(lVar12 + 4) != iVar9) &&
             (uVar11 = 0xff00000000, *(int *)(lVar12 + 8) == iVar9)) {
            uVar11 = 0x200000000;
          }
        }
        lVar13 = (longlong)(int)(uint)uStack_80;
        uStack_80._0_4_ = (uint)uStack_80 + 1;
        if (uStack_80._4_4_ < (uint)uStack_80) {
          FUN_146bf5892(&local_88,uVar3);
        }
        *(ulonglong *)(local_88 + lVar13 * 8) = uVar11 | uVar1;
      }
    } while ((uint)uStack_80 != 0);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bab96a FUN_146bab96a body=370 status=ok
// SIG undefined FUN_146bab96a(void)

void FUN_146bab96a(char *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98 [3];
  undefined8 local_80;
  longlong local_78 [3];
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*param_1 == '\x01') && (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x58))) {
    local_78[2] = 0;
    uStack_60 = 0;
    local_b0 = local_78;
    local_78[0] = 0;
    local_78[1] = 0;
    local_98[2] = *param_3;
    local_80 = param_3[1];
    local_b8 = param_5;
    FUN_146babade(param_5,local_78 + 2,local_98 + 2);
    local_98[0] = 0;
    local_98[1] = 0;
    if (0 < (int)uStack_60) {
      lVar4 = 10;
      lVar1 = 0;
      lVar2 = 0;
      do {
        lVar3 = local_78[2] + lVar1;
        FUN_144a9ff88(local_98,*(undefined4 *)(local_78[2] + lVar4 * 4));
        FUN_146bad7fa(local_98,lVar3);
        local_a8 = *(undefined8 *)(local_78[0] + -10 + lVar4);
        local_a0 = *(undefined4 *)(local_78[0] + -2 + lVar4);
        (*(code *)*param_2)(param_2[1],local_98,&local_a8);
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + 0xc;
        lVar1 = lVar1 + 0x30;
      } while (lVar2 < (int)uStack_60);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    FUN_146bf47ee(local_78[2],uStack_60 & 0xffffffff);
    if (local_78[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146babade FUN_146babade body=7450 status=ok
// SIG undefined FUN_146babade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146babade(char *param_1,longlong *param_2,undefined8 *param_3,float param_4,
                  undefined4 param_5,longlong *param_6)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong **pplVar17;
  longlong *plVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  void *pvVar23;
  longlong lVar24;
  undefined1 *puVar25;
  char *pcVar26;
  longlong lVar27;
  uint *puVar28;
  longlong lVar29;
  undefined8 *puVar30;
  longlong lVar31;
  byte bVar32;
  byte bVar33;
  float fVar34;
  longlong lVar35;
  longlong *plVar36;
  void *_Dst;
  int *piVar37;
  longlong lVar38;
  int iVar39;
  longlong *plVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  uint uVar44;
  int *piVar45;
  bool bVar46;
  bool bVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  int local_37c;
  char *local_378;
  longlong *local_370;
  int *local_368;
  longlong *local_360;
  longlong *local_358;
  undefined8 *local_350;
  int *local_348;
  code *local_340;
  longlong **local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong *local_320;
  undefined8 *local_318;
  code *local_310;
  longlong **local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 *local_2e0;
  longlong **local_2d8;
  undefined1 *local_2d0;
  undefined8 *local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined8 *puStack_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined4 local_278;
  byte local_269;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_250;
  longlong *local_248;
  longlong *local_240;
  undefined8 *local_238;
  undefined8 local_230;
  longlong local_228 [10];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined8 *local_198;
  int local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  plVar40 = param_6;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uStack_1c8 = (double)CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8);
  local_1b8 = (double)CONCAT44(local_1b8._4_4_,(undefined4)local_1b8);
  uStack_1b0 = (double)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
  local_1d8 = (longlong **)CONCAT44(local_1d8._4_4_,(float)local_1d8);
  uStack_1d0 = (longlong **)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
  if ((*param_1 != '\x01') ||
     (uStack_1c8 = (double)CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8),
     local_1b8 = (double)CONCAT44(local_1b8._4_4_,(undefined4)local_1b8),
     uStack_1b0 = (double)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
     local_1d8 = (longlong **)CONCAT44(local_1d8._4_4_,(float)local_1d8),
     uStack_1d0 = (longlong **)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0),
     *(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x58))) goto LAB_146babb80;
  uVar44 = *(uint *)((longlong)param_2 + 0xc);
  plVar36 = (longlong *)(ulonglong)uVar44;
  FUN_146bf47ee(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if (((int)uVar44 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_146bf481e(param_2);
  }
  local_370 = param_2;
  local_350 = param_3;
  if ((plVar40 != (longlong *)0x0) &&
     (*(undefined4 *)(plVar40 + 1) = 0, *(int *)((longlong)plVar40 + 0xc) < 0)) {
    FUN_140678446(plVar40,0);
  }
  plVar40 = (longlong *)(param_1 + 0x50);
  if (60.0 <= param_4) {
    param_4 = 60.0;
  }
  fVar48 = cosf(param_4 * 0.017453292);
  iVar21 = *(int *)(param_1 + 0x58);
  piVar45 = (int *)(longlong)iVar21;
  local_228[8] = 0;
  local_228[9] = 0;
  local_228[6] = 0;
  local_228[7] = 0;
  local_378 = param_1;
  FUN_146bad868(local_228 + 6,iVar21);
  local_228[4] = 0;
  local_228[5] = 0;
  FUN_140b463b8(local_228 + 4,iVar21,1);
  local_228[2] = 0;
  local_228[3] = 0;
  FUN_146bad8b2(local_228 + 2,iVar21,1);
  local_228[0] = 0;
  local_228[1] = 0;
  FUN_140b463b8(local_228,iVar21,1);
  local_238 = local_350;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_37c = 0;
  local_368 = piVar45;
  if (0 < (longlong)piVar45) {
    plVar36 = (longlong *)0x0;
    piVar37 = (int *)0x0;
    local_37c = 0;
    do {
      lVar27 = *plVar40;
      fVar4 = *(float *)(lVar27 + 8 + (longlong)plVar36);
      fVar5 = *(float *)(lVar27 + (longlong)plVar36);
      fVar34 = *(float *)(lVar27 + 4 + (longlong)plVar36);
      if ((int)fVar34 < (int)fVar4) {
        fVar34 = fVar4;
      }
      if ((int)fVar34 <= (int)fVar5) {
        fVar34 = fVar5;
      }
      iVar21 = (int)fVar34 + 1;
      if ((int)fVar34 + 1 <= local_37c) {
        iVar21 = local_37c;
      }
      local_37c = iVar21;
      local_250._0_4_ = fVar5;
      (*(code *)*local_238)(&local_2b8,local_238[1],&local_250);
      uStack_1c8 = (double)puStack_2b0._0_4_;
      uStack_1d0 = (longlong **)(double)local_2b8._4_4_;
      local_1d8 = (longlong **)(double)(float)local_2b8;
      local_268 = (int *)CONCAT44(local_268._4_4_,*(undefined4 *)(lVar27 + 4 + (longlong)plVar36));
      (*(code *)*local_238)(&local_250,local_238[1],&local_268);
      uStack_1b0 = (double)local_248._0_4_;
      local_1b8 = (double)local_250._4_4_;
      dStack_1c0 = (double)(float)local_250;
      local_158 = (int *)CONCAT44(local_158._4_4_,*(undefined4 *)(lVar27 + 8 + (longlong)plVar36));
      (*(code *)*local_238)(&local_268,local_238[1],&local_158);
      piVar45 = local_368;
      local_198 = (undefined8 *)(double)(float)uStack_260;
      dStack_1a0 = (double)local_268._4_4_;
      local_1a8 = (double)(float)local_268;
      local_250 = (longlong *)0x0;
      local_388 = &local_250;
      FUN_146b9cae0(&local_2b8,&local_1d8,&dStack_1c0,&local_1a8);
      *(double *)(local_228[4] + 0x10 + (longlong)plVar36 * 2) = local_2a8;
      plVar1 = (longlong *)(local_228[4] + (longlong)plVar36 * 2);
      *plVar1 = (longlong)local_2b8;
      plVar1[1] = (longlong)puStack_2b0;
      *(longlong **)(local_228[2] + (longlong)piVar37 * 8) = local_250;
      *(double *)(local_228[0] + (longlong)plVar36 * 2) =
           ((double)local_1d8 + dStack_1c0 + local_1a8) * 0.3333333333333333;
      *(double *)(local_228[0] + 8 + (longlong)plVar36 * 2) =
           ((double)uStack_1d0 + local_1b8 + dStack_1a0) * 0.3333333333333333;
      *(double *)(local_228[0] + 0x10 + (longlong)plVar36 * 2) =
           (uStack_1c8 + uStack_1b0 + (double)local_198) * 0.3333333333333333;
      piVar37 = (int *)((longlong)piVar37 + 1);
      plVar36 = (longlong *)((longlong)plVar36 + 0xc);
    } while (piVar45 != piVar37);
  }
  local_358 = (longlong *)(local_378 + 0x60);
  local_250 = local_228 + 6;
  local_248 = local_228 + 2;
  local_240 = local_228 + 4;
  local_230 = 0x3e45798ee2308c3a;
  local_268 = (int *)0x0;
  uStack_260 = 0;
  local_360 = plVar40;
  if ((int)piVar45 < 1) {
    uVar22 = 0;
  }
  else {
    piVar37 = (int *)0x0;
    do {
      lVar24 = *local_358;
      lVar29 = 0;
      lVar27 = 0;
      lVar38 = 2;
      do {
        lVar31 = lVar27;
        uVar44 = *(uint *)((longlong)piVar37 * 0xc + lVar24 + lVar38 * 4);
        if ((longlong)piVar37 < (longlong)(int)uVar44) {
          plVar36 = (longlong *)(((ulonglong)uVar44 << 0x20) + (longlong)piVar37);
          dVar49 = (double)FUN_146bad902(&local_250,plVar36,lVar38 + lVar29,0);
          uVar22 = uStack_260;
          if (dVar49 < (double)(1.0 - fVar48)) {
            lVar27 = (longlong)(int)(float)uStack_260;
            uVar44 = (int)(float)uStack_260 + 1;
            uStack_260 = CONCAT44(uStack_260._4_4_,uVar44);
            if (uStack_260._4_4_ < uVar44) {
              FUN_146bf484e(&local_268,uVar22 & 0xffffffff);
            }
            *(longlong **)(local_268 + lVar27 * 6) = plVar36;
            *(longlong *)(local_268 + lVar27 * 6 + 2) = lVar38 + lVar29;
            *(double *)(local_268 + lVar27 * 6 + 4) = dVar49;
            piVar45 = local_368;
          }
        }
        lVar27 = lVar31 + 1;
        lVar29 = lVar29 + 0x100000000;
        lVar38 = lVar31;
      } while (lVar27 != 3);
      piVar37 = (int *)((longlong)piVar37 + 1);
    } while (piVar37 != piVar45);
    uVar22 = uStack_260 & 0xffffffff;
  }
  plVar40 = local_370;
  pcVar26 = local_378;
  FUN_146bf48e2(local_268,uVar22);
  if ((longlong)(int)(float)uStack_260 != 0) {
    local_348 = local_268 + (longlong)(int)(float)uStack_260 * 6;
    piVar45 = local_268;
    dVar49 = (double)uStack_1d0;
    do {
      local_368 = piVar45;
      uStack_1d0 = (longlong **)dVar49;
      dVar50 = (double)FUN_146bad902(&local_250,*(undefined8 *)piVar45,*(undefined8 *)(piVar45 + 2),
                                     1);
      piVar45 = local_368;
      dVar49 = (double)uStack_1d0;
      if (dVar50 < (double)(1.0 - fVar48)) {
        iVar21 = *local_368;
        lVar27 = (longlong)iVar21;
        iVar20 = *(int *)(local_228[6] + lVar27 * 4);
        if (iVar20 != iVar21) {
          piVar45 = (int *)(local_228[6] + lVar27 * 4);
          do {
            *piVar45 = *(int *)(local_228[6] + (longlong)iVar20 * 4);
            iVar21 = *(int *)(local_228[6] + lVar27 * 4);
            lVar27 = (longlong)iVar21;
            piVar45 = (int *)(local_228[6] + lVar27 * 4);
            iVar20 = *piVar45;
          } while (iVar20 != iVar21);
        }
        iVar20 = local_368[1];
        lVar24 = (longlong)iVar20;
        iVar39 = *(int *)(local_228[6] + lVar24 * 4);
        if (iVar39 != iVar20) {
          piVar45 = (int *)(local_228[6] + lVar24 * 4);
          do {
            *piVar45 = *(int *)(local_228[6] + (longlong)iVar39 * 4);
            iVar20 = *(int *)(local_228[6] + lVar24 * 4);
            lVar24 = (longlong)iVar20;
            piVar45 = (int *)(local_228[6] + lVar24 * 4);
            iVar39 = *piVar45;
          } while (iVar39 != iVar20);
        }
        local_158 = (int *)CONCAT44(iVar20,iVar21);
        plVar36 = (longlong *)(longlong)iVar21;
        iVar39 = *(int *)(local_228[6] + (longlong)plVar36 * 4);
        plVar40 = plVar36;
        if (iVar39 != iVar21) {
          piVar45 = (int *)(local_228[6] + (longlong)plVar36 * 4);
          do {
            *piVar45 = *(int *)(local_228[6] + (longlong)iVar39 * 4);
            iVar7 = *(int *)(local_228[6] + (longlong)plVar40 * 4);
            plVar40 = (longlong *)(longlong)iVar7;
            piVar45 = (int *)(local_228[6] + (longlong)plVar40 * 4);
            iVar39 = *piVar45;
          } while (iVar39 != iVar7);
        }
        uVar6 = *(undefined4 *)(local_228[8] + (longlong)plVar40 * 4);
        lVar38 = (longlong)iVar20;
        iVar39 = *(int *)(local_228[6] + lVar38 * 4);
        if (iVar39 != iVar20) {
          piVar45 = (int *)(local_228[6] + lVar38 * 4);
          do {
            *piVar45 = *(int *)(local_228[6] + (longlong)iVar39 * 4);
            iVar7 = *(int *)(local_228[6] + lVar38 * 4);
            lVar38 = (longlong)iVar7;
            piVar45 = (int *)(local_228[6] + lVar38 * 4);
            iVar39 = *piVar45;
          } while (iVar39 != iVar7);
        }
        local_168 = CONCAT44(*(undefined4 *)(local_228[8] + lVar38 * 4),uVar6);
        dVar50 = *(double *)(local_228[2] + lVar27 * 8);
        dVar3 = *(double *)(local_228[2] + lVar24 * 8);
        dVar12 = dVar50 + dVar3;
        pdVar2 = (double *)(local_228[0] + lVar27 * 0x18);
        if (dVar12 <= 0.0001) {
          dVar14 = (pdVar2[2] + *(double *)(local_228[0] + 0x10 + lVar24 * 0x18)) * 0.5;
          dVar11 = (pdVar2[1] + *(double *)(local_228[0] + 8 + lVar24 * 0x18)) * 0.5;
          dVar15 = (*pdVar2 + *(double *)(local_228[0] + lVar24 * 0x18)) * 0.5;
        }
        else {
          dVar15 = dVar50 / dVar12;
          dVar51 = dVar3 / dVar12;
          dVar14 = *(double *)(local_228[0] + 0x10 + lVar24 * 0x18) * dVar51 + pdVar2[2] * dVar15;
          dVar11 = *(double *)(local_228[0] + 8 + lVar24 * 0x18) * dVar51 + pdVar2[1] * dVar15;
          dVar15 = dVar51 * *(double *)(local_228[0] + lVar24 * 0x18) + dVar15 * *pdVar2;
        }
        dVar51 = *(double *)(local_228[4] + 0x10 + lVar24 * 0x18) * dVar3 +
                 *(double *)(local_228[4] + 0x10 + lVar27 * 0x18) * dVar50;
        dVar13 = *(double *)(local_228[4] + 8 + lVar24 * 0x18) * dVar3 +
                 *(double *)(local_228[4] + 8 + lVar27 * 0x18) * dVar50;
        dVar3 = dVar3 * *(double *)(local_228[4] + lVar24 * 0x18) +
                dVar50 * *(double *)(local_228[4] + lVar27 * 0x18);
        dVar50 = dVar51 * dVar51 + dVar3 * dVar3 + dVar13 * dVar13;
        if (9.99999993922529e-09 < dVar50) {
          dVar50 = 1.0 / SQRT(dVar50);
          dVar3 = dVar3 * dVar50;
          dVar13 = dVar13 * dVar50;
          dVar51 = dVar51 * dVar50;
        }
        local_269 = 1;
        local_2b8 = &local_269;
        puStack_2b0 = local_350;
        local_2a8 = dVar15;
        local_2a0 = dVar11;
        local_298 = dVar14;
        local_290 = dVar3;
        local_288 = dVar13;
        local_280 = dVar51;
        local_278 = param_5;
        bVar32 = 1;
        piVar45 = (int *)&local_168;
        puVar28 = (uint *)&local_158;
        do {
          uStack_1d0._4_4_ = (undefined4)((ulonglong)dVar49 >> 0x20);
          uVar44 = *puVar28;
          if (*piVar45 == 1) {
            uStack_1d0._0_4_ = (float)*(undefined4 *)(*local_360 + 8 + (longlong)(int)uVar44 * 0xc);
            uVar10 = *(undefined8 *)(*local_360 + (longlong)(int)uVar44 * 0xc);
            local_1d8._0_4_ = (float)uVar10;
            local_1d8._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
            uVar22 = 0;
            do {
              cVar19 = FUN_146badb20(&local_2b8,*(undefined4 *)((longlong)&local_1d8 + uVar22 * 4));
              local_1d8 = (longlong **)CONCAT44(local_1d8._4_4_,(float)local_1d8);
              dVar49 = (double)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
              if (1 < uVar22) break;
              uVar22 = uVar22 + 1;
              local_1d8 = (longlong **)CONCAT44(local_1d8._4_4_,(float)local_1d8);
              dVar49 = (double)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
            } while (cVar19 != '\0');
          }
          else {
            if ((int)uStack_140 != local_114) {
              puVar25 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar25 = local_110;
              }
              iVar39 = *(int *)(puVar25 + (ulonglong)(local_100 - 1U & uVar44) * 4);
              while (iVar39 != -1) {
                lVar27 = local_148 + (longlong)iVar39 * 0x60;
                if (*(uint *)(local_148 + (longlong)iVar39 * 0x60) == uVar44) goto LAB_146bac9e3;
                iVar39 = *(int *)(lVar27 + 0x58);
              }
            }
            lVar27 = 0;
LAB_146bac9e3:
            lVar24 = lVar27 + 8;
            if (*(longlong *)(lVar27 + 0x48) != 0) {
              lVar24 = *(longlong *)(lVar27 + 0x48);
            }
            iVar39 = *(int *)(lVar27 + 0x50);
            if ((longlong)iVar39 != 0) {
              lVar27 = 0;
              uStack_1d0 = (longlong **)dVar49;
              do {
                cVar19 = FUN_146badb20(&local_2b8,*(undefined4 *)(lVar24 + lVar27));
                dVar49 = (double)uStack_1d0;
                if (cVar19 == '\0') break;
                bVar46 = (longlong)iVar39 * 4 + -4 != lVar27;
                lVar27 = lVar27 + 4;
              } while (bVar46);
            }
          }
          bVar33 = bVar32 & local_269;
          piVar45 = (int *)((longlong)&local_168 + 4);
          puVar28 = (uint *)((longlong)&local_158 + 4);
          bVar32 = 0;
        } while (bVar33 != 0);
        piVar45 = local_368;
        pcVar26 = local_378;
        plVar40 = local_370;
        if ((local_269 & 1) != 0) {
          uStack_1d0 = (longlong **)dVar49;
          FUN_146b9cc7c(local_228 + 6,iVar21,iVar20);
          iVar20 = *(int *)(local_228[6] + (longlong)plVar36 * 4);
          iVar39 = iVar21;
          if (iVar20 != iVar21) {
            piVar45 = (int *)(local_228[6] + (longlong)plVar36 * 4);
            do {
              *piVar45 = *(int *)(local_228[6] + (longlong)iVar20 * 4);
              iVar39 = *(int *)(local_228[6] + (longlong)plVar36 * 4);
              plVar36 = (longlong *)(longlong)iVar39;
              piVar45 = (int *)(local_228[6] + (longlong)plVar36 * 4);
              iVar20 = *piVar45;
            } while (iVar20 != iVar39);
          }
          local_2c0 = (longlong *)CONCAT44(local_2c0._4_4_,iVar39);
          uVar22 = (ulonglong)(iVar21 != iVar39);
          uVar41 = (ulonglong)(iVar21 == iVar39);
          uVar44 = *(uint *)((longlong)&local_158 + uVar41 * 4);
          lVar27 = (longlong)plVar36 * 0x18;
          *(double *)(local_228[4] + lVar27) = dVar3;
          *(double *)(local_228[4] + 8 + lVar27) = dVar13;
          *(double *)(local_228[4] + 0x10 + lVar27) = dVar51;
          *(double *)(local_228[0] + lVar27) = dVar15;
          *(double *)(local_228[0] + 8 + lVar27) = dVar11;
          *(double *)(local_228[0] + 0x10 + lVar27) = dVar14;
          *(double *)(local_228[2] + (longlong)plVar36 * 8) = dVar12;
          dVar49 = (double)uStack_1d0;
          if (*(int *)((longlong)&local_168 + uVar22 * 4) < 2) {
            lVar24 = (longlong)*(int *)((longlong)&local_158 + uVar22 * 4);
            lVar27 = *local_360;
            uVar6 = *(undefined4 *)(lVar27 + lVar24 * 0xc);
            uVar8 = *(undefined4 *)(lVar27 + 4 + lVar24 * 0xc);
            uVar9 = *(undefined4 *)(lVar27 + 8 + lVar24 * 0xc);
            local_1d8 = &local_2c0;
            FUN_146bf4e60(&local_148,&local_320,&local_1d8);
            lVar27 = local_148 + (longlong)(int)local_320 * 0x60;
            lVar24 = lVar27 + 8;
            iVar21 = *(int *)(lVar27 + 0x50);
            *(uint *)(lVar27 + 0x50) = iVar21 + 1U;
            if (*(uint *)(lVar27 + 0x54) < iVar21 + 1U) {
              FUN_1401fcbb6(lVar24,iVar21);
            }
            lVar38 = *(longlong *)(lVar27 + 0x48);
            if (*(longlong *)(lVar27 + 0x48) == 0) {
              lVar38 = lVar24;
            }
            *(undefined4 *)(lVar38 + (longlong)iVar21 * 4) = uVar6;
            iVar21 = *(int *)(lVar27 + 0x50);
            *(uint *)(lVar27 + 0x50) = iVar21 + 1U;
            if (*(uint *)(lVar27 + 0x54) < iVar21 + 1U) {
              FUN_1401fcbb6(lVar24,iVar21);
            }
            lVar38 = *(longlong *)(lVar27 + 0x48);
            if (*(longlong *)(lVar27 + 0x48) == 0) {
              lVar38 = lVar24;
            }
            *(undefined4 *)(lVar38 + (longlong)iVar21 * 4) = uVar8;
            iVar21 = *(int *)(lVar27 + 0x50);
            plVar36 = (longlong *)(longlong)iVar21;
            *(uint *)(lVar27 + 0x50) = iVar21 + 1U;
            dVar49 = (double)uStack_1d0;
            if (*(uint *)(lVar27 + 0x54) < iVar21 + 1U) {
              FUN_1401fcbb6(lVar24,iVar21);
              dVar49 = (double)uStack_1d0;
            }
            lVar38 = *(longlong *)(lVar27 + 0x48);
            if (*(longlong *)(lVar27 + 0x48) == 0) {
              lVar38 = lVar24;
            }
            *(undefined4 *)(lVar38 + (longlong)plVar36 * 4) = uVar9;
          }
          plVar40 = local_370;
          pcVar26 = local_378;
          uStack_1d0._4_4_ = (undefined4)((ulonglong)dVar49 >> 0x20);
          if (*(int *)((longlong)&local_168 + uVar41 * 4) < 2) {
            if ((int)uStack_140 != local_114) {
              puVar25 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar25 = local_110;
              }
              iVar21 = *(int *)(puVar25 + (ulonglong)(local_100 - 1U & (uint)local_2c0) * 4);
              while (iVar21 != -1) {
                lVar27 = local_148 + (longlong)iVar21 * 0x60;
                if (*(uint *)(local_148 + (longlong)iVar21 * 0x60) == (uint)local_2c0)
                goto LAB_146bacec1;
                iVar21 = *(int *)(lVar27 + 0x58);
              }
            }
            lVar27 = 0;
LAB_146bacec1:
            uStack_1d0._0_4_ = (float)*(undefined4 *)(*local_360 + 8 + (longlong)(int)uVar44 * 0xc);
            uVar10 = *(undefined8 *)(*local_360 + (longlong)(int)uVar44 * 0xc);
            local_1d8._0_4_ = (float)uVar10;
            local_1d8._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
            lVar24 = 0;
            piVar45 = local_368;
            do {
              iVar21 = *(int *)((longlong)&local_1d8 + lVar24 * 4);
              if ((piVar45[2] != iVar21) && (piVar45[3] != iVar21)) {
                iVar20 = *(int *)(lVar27 + 0x50);
                plVar36 = (longlong *)(longlong)iVar20;
                *(uint *)(lVar27 + 0x50) = iVar20 + 1U;
                if (*(uint *)(lVar27 + 0x54) < iVar20 + 1U) {
                  FUN_1401fcbb6(lVar27 + 8,iVar20);
                  piVar45 = local_368;
                }
                lVar38 = *(longlong *)(lVar27 + 0x48);
                if (*(longlong *)(lVar27 + 0x48) == 0) {
                  lVar38 = lVar27 + 8;
                }
                *(int *)(lVar38 + (longlong)plVar36 * 4) = iVar21;
              }
              lVar24 = lVar24 + 1;
              pcVar26 = local_378;
              dVar49 = (double)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
            } while (lVar24 != 3);
          }
          else {
            if ((int)uStack_140 == local_114) {
              iVar20 = -1;
            }
            else {
              puVar25 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar25 = local_110;
              }
              iVar21 = *(int *)(puVar25 + (ulonglong)(local_100 - 1U & uVar44) * 4);
              while ((iVar20 = -1, iVar21 != -1 &&
                     (iVar20 = iVar21, *(uint *)(local_148 + (longlong)iVar21 * 0x60) != uVar44))) {
                iVar21 = *(int *)((longlong)iVar21 * 0x60 + local_148 + 0x58);
              }
            }
            lVar27 = local_148 + (longlong)iVar20 * 0x60;
            local_198 = *(undefined8 **)(lVar27 + 0x48);
            if (local_198 == (undefined8 *)0x0) {
              local_1d8 = *(longlong ***)(lVar27 + 8);
              dVar49 = *(double *)(lVar27 + 0x10);
              uStack_1c8 = *(double *)(lVar27 + 0x18);
              dStack_1c0 = *(double *)(lVar27 + 0x20);
              local_1b8 = *(double *)(lVar27 + 0x28);
              uStack_1b0 = *(double *)(lVar27 + 0x30);
              local_1a8 = *(double *)(lVar27 + 0x38);
              dStack_1a0 = *(double *)(lVar27 + 0x40);
              local_198 = *(undefined8 **)(lVar27 + 0x48);
            }
            *(undefined8 *)(lVar27 + 0x48) = 0;
            local_190 = *(int *)(lVar27 + 0x50);
            local_18c = *(undefined4 *)(lVar27 + 0x54);
            *(undefined8 *)(lVar27 + 0x50) = 0x1000000000;
            uStack_1d0 = (longlong **)dVar49;
            FUN_146bf5342(&local_148);
            if ((int)uStack_140 != local_114) {
              puVar25 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar25 = local_110;
              }
              iVar21 = *(int *)(puVar25 + (ulonglong)(local_100 - 1U & (uint)local_2c0) * 4);
              while (iVar21 != -1) {
                lVar27 = local_148 + (longlong)iVar21 * 0x60;
                if (*(uint *)(local_148 + (longlong)iVar21 * 0x60) == (uint)local_2c0)
                goto LAB_146bacda9;
                iVar21 = *(int *)(lVar27 + 0x58);
              }
            }
            lVar27 = 0;
LAB_146bacda9:
            iVar21 = local_190 + *(int *)(lVar27 + 0x50) + -2;
            if (local_190 + *(int *)(lVar27 + 0x50) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar21);
            }
            lVar24 = lVar27 + 8;
            if (*(int *)(lVar27 + 0x54) < iVar21) {
              FUN_146bf53da(lVar24);
            }
            puVar30 = local_198;
            if (local_198 == (undefined8 *)0x0) {
              puVar30 = &local_1d8;
            }
            if (local_190 != 0) {
              lVar38 = (longlong)local_190;
              lVar29 = 0;
              piVar45 = local_368;
              do {
                iVar21 = *(int *)((longlong)puVar30 + lVar29);
                if ((piVar45[2] != iVar21) && (piVar45[3] != iVar21)) {
                  iVar20 = *(int *)(lVar27 + 0x50);
                  plVar36 = (longlong *)(longlong)iVar20;
                  *(uint *)(lVar27 + 0x50) = iVar20 + 1U;
                  if (*(uint *)(lVar27 + 0x54) < iVar20 + 1U) {
                    FUN_1401fcbb6(lVar24,iVar20);
                    piVar45 = local_368;
                  }
                  lVar31 = *(longlong *)(lVar27 + 0x48);
                  if (*(longlong *)(lVar27 + 0x48) == 0) {
                    lVar31 = lVar24;
                  }
                  *(int *)(lVar31 + (longlong)plVar36 * 4) = iVar21;
                }
                lVar29 = lVar29 + 4;
                pcVar26 = local_378;
              } while (lVar38 * 4 != lVar29);
            }
            piVar45 = local_368;
            plVar40 = local_370;
            dVar49 = (double)uStack_1d0;
            if (local_198 != (undefined8 *)0x0) {
              FUN_1400020a8();
              piVar45 = local_368;
              plVar40 = local_370;
              dVar49 = (double)uStack_1d0;
            }
          }
        }
      }
      uStack_1d0._4_4_ = (undefined4)((ulonglong)dVar49 >> 0x20);
      piVar45 = piVar45 + 6;
    } while (piVar45 != local_348);
  }
  local_2b8 = (byte *)0x0;
  puStack_2b0 = (undefined8 *)0x0;
  local_1d8._0_4_ = -NAN;
  local_1d8._4_4_ = -NAN;
  uStack_1d0._0_4_ = -NAN;
  FUN_146badbc8(&local_2b8,&local_1d8,local_37c);
  plVar18 = local_370;
  plVar1 = (longlong *)CONCAT44(local_1d8._4_4_,(float)local_1d8);
  local_2c0 = &local_2b8;
  if (*(int *)(pcVar26 + 0x58) < 1) {
LAB_146bad016:
    pplVar17 = (longlong **)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
    uStack_150 = 0;
    local_158 = (int *)0x0;
    uStack_160 = 0;
    local_168 = 0;
    iVar21 = (int)plVar40[1];
    iVar20 = local_37c;
  }
  else {
    uVar22 = 0;
    do {
      uVar41 = (ulonglong)*(uint *)(local_228[6] + uVar22 * 4);
      uVar44 = (uint)uVar22;
      if (uVar22 != uVar41) {
        puVar28 = (uint *)(local_228[6] + uVar22 * 4);
        uVar43 = uVar22;
        do {
          *puVar28 = *(uint *)(local_228[6] + (longlong)(int)uVar41 * 4);
          uVar44 = *(uint *)(local_228[6] + uVar43 * 4);
          uVar43 = (ulonglong)(int)uVar44;
          puVar28 = (uint *)(local_228[6] + uVar43 * 4);
          uVar41 = (ulonglong)*puVar28;
        } while (*puVar28 != uVar44);
      }
      uStack_1d0._0_4_ = *(float *)(*local_360 + 8 + uVar22 * 0xc);
      pplVar17 = (longlong **)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
      plVar1 = *(longlong **)(*local_360 + uVar22 * 0xc);
      local_1d8._0_4_ = SUB84(plVar1,0);
      local_1d8._4_4_ = (float)((ulonglong)plVar1 >> 0x20);
      lVar27 = 0;
      do {
        iVar21 = *(int *)((longlong)&local_1d8 + lVar27 * 4);
        uVar41 = 0;
        while (lVar24 = uVar41 * 4,
              *(uint *)(local_2b8 + lVar24 + (longlong)iVar21 * 0xc) != 0xffffffff) {
          if ((1 < uVar41) ||
             (uVar41 = uVar41 + 1, *(uint *)(local_2b8 + lVar24 + (longlong)iVar21 * 0xc) == uVar44)
             ) goto LAB_146bac1f1;
        }
        *(uint *)(local_2b8 + uVar41 * 4 + (longlong)iVar21 * 0xc) = uVar44;
LAB_146bac1f1:
        lVar27 = lVar27 + 1;
      } while (lVar27 != 3);
      uVar22 = uVar22 + 1;
    } while ((longlong)uVar22 < (longlong)*(int *)(pcVar26 + 0x58));
    local_158 = (int *)0x0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    if (*(int *)(pcVar26 + 0x58) < 1) goto LAB_146bad016;
    uVar22 = 0;
    bVar46 = false;
    local_1d8 = (longlong **)plVar1;
    do {
      uVar41 = (ulonglong)*(uint *)(local_228[6] + uVar22 * 4);
      if (uVar22 == uVar41) {
        uVar42 = uVar22 & 0xffffffff;
      }
      else {
        puVar28 = (uint *)(local_228[6] + uVar22 * 4);
        uVar43 = uVar22;
        do {
          *puVar28 = *(uint *)(local_228[6] + (longlong)(int)uVar41 * 4);
          uVar44 = *(uint *)(local_228[6] + uVar43 * 4);
          uVar42 = (ulonglong)uVar44;
          uVar43 = (ulonglong)(int)uVar44;
          puVar28 = (uint *)(local_228[6] + uVar43 * 4);
          uVar41 = (ulonglong)*puVar28;
        } while (*puVar28 != uVar44);
      }
      local_320 = (longlong *)CONCAT44(local_320._4_4_,(int)uVar42);
      bVar47 = bVar46;
      if (uVar22 == uVar42) {
        uVar43 = (ulonglong)*(uint *)(local_228[6] + uVar22 * 4);
        uVar41 = uVar22;
        if (uVar22 != uVar43) {
          puVar28 = (uint *)(local_228[6] + uVar22 * 4);
          do {
            *puVar28 = *(uint *)(local_228[6] + (longlong)(int)uVar43 * 4);
            uVar44 = *(uint *)(local_228[6] + uVar41 * 4);
            uVar41 = (ulonglong)(int)uVar44;
            puVar28 = (uint *)(local_228[6] + uVar41 * 4);
            uVar43 = (ulonglong)*puVar28;
          } while (*puVar28 != uVar44);
        }
        uStack_1d0 = pplVar17;
        if (*(int *)(local_228[8] + uVar41 * 4) == 1) {
          lVar27 = *local_360;
          iVar21 = *(int *)(lVar27 + uVar22 * 0xc);
          lVar24 = *local_2c0;
          bVar47 = true;
          if (((*(int *)(lVar24 + 8 + (longlong)iVar21 * 0xc) != -1) &&
              (iVar20 = *(int *)(lVar27 + 4 + uVar22 * 0xc),
              *(int *)(lVar24 + 8 + (longlong)iVar20 * 0xc) != -1)) &&
             (iVar39 = *(int *)(lVar27 + 8 + uVar22 * 0xc),
             *(int *)(lVar24 + 8 + (longlong)iVar39 * 0xc) != -1)) {
            iVar7 = (int)plVar18[1];
            *(uint *)(plVar18 + 1) = iVar7 + 1U;
            if (*(uint *)((longlong)plVar18 + 0xc) < iVar7 + 1U) {
              FUN_146bf5440(plVar18,iVar7);
            }
            lVar27 = *plVar18;
            lVar24 = (longlong)iVar7 * 0x30;
            *(undefined8 *)(lVar27 + 0x20 + lVar24) = 0;
            *(int *)(lVar27 + lVar24) = iVar21;
            *(int *)(lVar27 + 4 + lVar24) = iVar20;
            *(undefined8 *)(lVar27 + 0x28 + lVar24) = 0x800000003;
            *(int *)(lVar27 + 8 + lVar24) = iVar39;
LAB_146bac373:
            uVar41 = uStack_160;
            plVar36 = param_6;
            pplVar17 = uStack_1d0;
            if (param_6 == (longlong *)0x0) {
              plVar36 = (longlong *)(longlong)(int)uStack_160;
              uVar44 = (int)uStack_160 + 1;
              uStack_160 = CONCAT44(uStack_160._4_4_,uVar44);
              if (uStack_160._4_4_ < uVar44) {
                FUN_1446f48e2(&local_168,uVar41 & 0xffffffff);
                pplVar17 = uStack_1d0;
              }
              *(int *)(local_168 + (longlong)plVar36 * 4) = (int)local_320;
              bVar47 = bVar46;
            }
            else {
              lVar27 = (longlong)(int)local_320;
              dVar49 = *(double *)(local_228[4] + 0x10 + lVar27 * 0x18);
              dVar50 = *(double *)(local_228[4] + 8 + lVar27 * 0x18);
              dVar3 = *(double *)(local_228[4] + lVar27 * 0x18);
              iVar21 = (int)param_6[1];
              lVar27 = (longlong)iVar21;
              *(uint *)(param_6 + 1) = iVar21 + 1U;
              if (*(uint *)((longlong)param_6 + 0xc) < iVar21 + 1U) {
                FUN_140c0b6f2(param_6,iVar21);
                pplVar17 = uStack_1d0;
              }
              lVar24 = *plVar36;
              *(float *)(lVar24 + lVar27 * 0xc) = (float)dVar3;
              *(float *)(lVar24 + 4 + lVar27 * 0xc) = (float)dVar50;
              *(float *)(lVar24 + 8 + lVar27 * 0xc) = (float)dVar49;
              bVar47 = bVar46;
            }
          }
        }
        else {
          bVar47 = (longlong)uStack_150 < 0;
          uStack_150 = uStack_150 & 0xffffffff00000000;
          if (bVar47) {
            FUN_14481578e(&local_158,0);
          }
          local_1d8 = (longlong **)(local_228 + 6);
          uStack_1d0 = &local_320;
          local_2c8 = &local_1d8;
          local_2d0 = &LAB_146bf54d4;
          local_388 = &local_158;
          FUN_146bab44c(local_360,local_358,&local_2d0,uVar22 & 0xffffffff);
          lVar27 = (longlong)(int)(uint)uStack_150;
          piVar45 = local_158;
          if (lVar27 != 0) {
            lVar24 = lVar27 << 2;
            piVar37 = local_158;
            do {
              if (*(int *)(*local_2c0 + 8 + (longlong)*piVar37 * 0xc) == -1) {
                piVar45 = piVar37;
                if (lVar24 != 4) {
                  lVar27 = 4;
                  do {
                    iVar21 = *(int *)((longlong)piVar37 + lVar27);
                    plVar36 = (longlong *)((longlong)iVar21 * 3);
                    if (*(int *)(*local_2c0 + 8 + (longlong)iVar21 * 0xc) != -1) {
                      *piVar45 = iVar21;
                      piVar45 = piVar45 + 1;
                    }
                    lVar27 = lVar27 + 4;
                  } while (lVar24 != lVar27);
                }
                break;
              }
              piVar37 = piVar37 + 1;
              lVar24 = lVar24 + -4;
              piVar45 = local_158 + lVar27;
            } while (lVar24 != 0);
          }
          uVar41 = (ulonglong)((longlong)piVar45 - (longlong)local_158) >> 2;
          bVar47 = true;
          pplVar17 = uStack_1d0;
          if (2 < (int)uVar41) {
            FUN_144a1a59e(&local_158,uVar41,0);
            plVar40 = local_370;
            iVar21 = (int)local_370[1];
            *(uint *)(local_370 + 1) = iVar21 + 1U;
            if (*(uint *)((longlong)local_370 + 0xc) < iVar21 + 1U) {
              FUN_146bf5440(local_370,iVar21);
            }
            lVar27 = *plVar40;
            lVar24 = (longlong)iVar21 * 0x30;
            *(undefined8 *)(lVar27 + 0x20 + lVar24) = 0;
            *(undefined8 *)(lVar27 + 0x28 + lVar24) = 0x800000000;
            lVar38 = (longlong)(int)(uint)uStack_150;
            if (lVar38 != 0) {
              _Dst = (void *)(lVar27 + lVar24);
              *(uint *)((longlong)_Dst + 0x28) = (uint)uStack_150;
              if ((uint)uStack_150 < 9) {
                pvVar23 = (void *)0x0;
              }
              else {
                FUN_1400cc390(_Dst,0);
                pvVar23 = *(void **)((longlong)_Dst + 0x20);
              }
              if (pvVar23 != (void *)0x0) {
                _Dst = pvVar23;
              }
              memcpy(_Dst,local_158,lVar38 << 2);
            }
            goto LAB_146bac373;
          }
        }
      }
      uStack_1d0._4_4_ = (undefined4)((ulonglong)pplVar17 >> 0x20);
      uVar22 = uVar22 + 1;
      bVar46 = bVar47;
    } while ((longlong)uVar22 < (longlong)*(int *)(local_378 + 0x58));
    iVar21 = (int)local_370[1];
    pcVar26 = local_378;
    plVar40 = local_370;
    iVar20 = local_37c;
    plVar1 = (longlong *)local_1d8;
    if ((bVar47) && (3 < iVar21)) {
      do {
        plVar40 = local_370;
        pcVar26 = local_378;
        local_1d8._0_4_ = -NAN;
        local_1d8._4_4_ = -NAN;
        uStack_1d0._0_4_ = -NAN;
        FUN_146badbc8(&local_2b8,&local_1d8,iVar20);
        iVar21 = (int)plVar40[1];
        plVar1 = (longlong *)CONCAT44(local_1d8._4_4_,(float)local_1d8);
        pplVar17 = (longlong **)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
        if (iVar21 < 1) goto LAB_146bad361;
        uVar22 = 0;
        do {
          iVar39 = *(int *)(*plVar40 + 0x28 + uVar22 * 0x30);
          if (0 < iVar39) {
            lVar27 = *plVar40 + uVar22 * 0x30;
            lVar24 = 0;
            do {
              lVar38 = *(longlong *)(lVar27 + 0x20);
              if (*(longlong *)(lVar27 + 0x20) == 0) {
                lVar38 = lVar27;
              }
              iVar21 = *(int *)(lVar38 + lVar24 * 4);
              uVar41 = 0;
              while (lVar38 = uVar41 * 4,
                    (ulonglong)*(uint *)(local_2b8 + lVar38 + (longlong)iVar21 * 0xc) != 0xffffffff)
              {
                if ((1 < uVar41) ||
                   (uVar41 = uVar41 + 1,
                   uVar22 == *(uint *)(local_2b8 + lVar38 + (longlong)iVar21 * 0xc)))
                goto LAB_146bad68c;
              }
              *(int *)(local_2b8 + uVar41 * 4 + (longlong)iVar21 * 0xc) = (int)uVar22;
              iVar39 = *(int *)(lVar27 + 0x28);
LAB_146bad68c:
              lVar24 = lVar24 + 1;
            } while (lVar24 < iVar39);
            iVar21 = (int)plVar40[1];
          }
          uVar22 = uVar22 + 1;
        } while ((longlong)uVar22 < (longlong)iVar21);
        plVar1 = (longlong *)CONCAT44(local_1d8._4_4_,(float)local_1d8);
        pplVar17 = (longlong **)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
        if (iVar21 < 1) goto LAB_146bad361;
        uVar44 = 0;
        bVar32 = 0;
        do {
          lVar27 = *plVar40;
          lVar24 = (longlong)(int)uVar44;
          plVar36 = (longlong *)(lVar24 * 0x30 + lVar27);
          iVar21 = FUN_146badcb0(plVar36,&local_2c0);
          iVar20 = local_37c;
          if (iVar21 != *(int *)(lVar27 + 0x28 + lVar24 * 0x30)) {
            if (iVar21 < 3) {
              FUN_146bf55be(local_370,uVar44);
              iVar20 = local_37c;
              plVar40 = param_6;
              if (param_6 == (longlong *)0x0) {
                iVar21 = ~uVar44 + (int)uStack_160;
                if (iVar21 != 0) {
                  if (0 < iVar21) {
                    iVar21 = 1;
                  }
                  memmove((void *)(local_168 + lVar24 * 4),
                          (void *)(local_168 + (longlong)((int)uStack_160 - iVar21) * 4),
                          (longlong)iVar21 << 2);
                }
                plVar36 = &uStack_160;
                iVar21 = (int)uStack_160;
              }
              else {
                plVar36 = param_6 + 1;
                iVar21 = (int)param_6[1];
                iVar39 = ~uVar44 + iVar21;
                if (iVar39 != 0) {
                  if (0 < iVar39) {
                    iVar39 = 1;
                  }
                  memmove((void *)(*param_6 + lVar24 * 0xc),
                          (void *)(*param_6 + (longlong)(iVar21 - iVar39) * 0xc),
                          (longlong)iVar39 * 0xc);
                  iVar21 = (int)plVar40[1];
                }
              }
              *(int *)plVar36 = iVar21 + -1;
              uVar44 = uVar44 - 1;
              bVar32 = 1;
            }
            else {
              FUN_146badd38(plVar36,iVar21);
              iVar20 = local_37c;
            }
          }
          pplVar17 = (longlong **)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
          plVar1 = (longlong *)CONCAT44(local_1d8._4_4_,(float)local_1d8);
          uVar44 = uVar44 + 1;
          iVar21 = (int)local_370[1];
          plVar40 = local_370;
        } while ((int)uVar44 < iVar21);
        pcVar26 = local_378;
      } while (!(bool)(~bVar32 & 1) && 3 < iVar21);
    }
  }
  if (iVar21 < 1) {
LAB_146bad361:
    iVar21 = *(int *)((longlong)plVar40 + 0xc);
    local_1d8 = (longlong **)plVar1;
    uStack_1d0 = pplVar17;
    FUN_146bf47ee(*plVar40);
    *(undefined4 *)(plVar40 + 1) = 0;
    dVar49 = uStack_1c8;
    if ((iVar21 < 0) && (*(int *)((longlong)plVar40 + 0xc) != 0)) {
      FUN_146bf481e(plVar40);
      dVar49 = uStack_1c8;
    }
    uStack_1c8._4_4_ = (undefined4)((ulonglong)dVar49 >> 0x20);
    if ((param_6 != (longlong *)0x0) &&
       (*(undefined4 *)(param_6 + 1) = 0, *(int *)((longlong)param_6 + 0xc) < 0)) {
      uStack_1c8 = dVar49;
      FUN_140678446(param_6,0);
    }
    puVar30 = local_350;
    local_1d8._4_4_ = 0.0;
    uStack_1d0._0_4_ = -NAN;
    uStack_1d0._4_4_ = 0xff7fffff;
    uStack_1c8._0_4_ = 0xff7fffff;
    dStack_1c0 = 0.0;
    local_1b8._4_4_ = (undefined4)DAT_14c846330;
    uStack_1b0._0_4_ = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
    uStack_1b0._4_4_ = DAT_14c846338;
    local_1a8 = _DAT_14c84637c;
    dStack_1a0 = (double)CONCAT44(dStack_1a0._4_4_,DAT_14c846384);
    local_18c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    local_17c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    local_16c = 0;
    local_1d8._0_4_ = (float)CONCAT31(local_1d8._1_3_,1);
    local_2d8 = &local_2c0;
    local_2e0 = &LAB_146bf5634;
    local_2f0 = *local_350;
    local_2e8 = local_350[1];
    cVar19 = FUN_140ab3054(&local_1d8,iVar20);
    if (cVar19 == '\0') {
      local_328 = puVar30[1];
      local_338 = &local_320;
      local_340 = FUN_146bf573e;
      local_330 = *puVar30;
    }
    else {
      local_2f8 = puVar30[1];
      local_308 = &local_320;
      local_310 = FUN_146bf564a;
      pcVar26 = (char *)&local_1d8;
      local_300 = *puVar30;
    }
    local_318 = &param_6;
    local_320 = plVar40;
    FUN_146baac98(pcVar26);
    if (CONCAT44(uStack_174,uStack_178) != 0) {
      FUN_1400020a8();
    }
    pplVar17 = (longlong **)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
    plVar1 = (longlong *)CONCAT44(local_1d8._4_4_,(float)local_1d8);
    if (CONCAT44(uStack_184,uStack_188) != 0) {
      FUN_1400020a8();
      pplVar17 = (longlong **)CONCAT44(uStack_1d0._4_4_,(float)uStack_1d0);
      plVar1 = (longlong *)CONCAT44(local_1d8._4_4_,(float)local_1d8);
    }
  }
  else {
    uVar22 = CONCAT71((int7)((ulonglong)plVar36 >> 8),1);
    lVar27 = 0;
    local_358 = param_6;
    do {
      puVar30 = local_350;
      local_360 = (longlong *)CONCAT44(local_360._4_4_,(int)uVar22);
      if (local_358 == (longlong *)0x0) {
        lVar24 = (longlong)*(int *)(local_168 + lVar27 * 4);
        dVar49 = *(double *)(local_228[4] + lVar24 * 0x18);
        dVar50 = *(double *)(local_228[4] + 8 + lVar24 * 0x18);
        dVar3 = *(double *)(local_228[4] + 0x10 + lVar24 * 0x18);
      }
      else {
        lVar24 = *local_358;
        dVar3 = (double)*(float *)(lVar24 + 8 + lVar27 * 0xc);
        dVar50 = (double)*(float *)(lVar24 + 4 + lVar27 * 0xc);
        dVar49 = (double)*(float *)(lVar24 + lVar27 * 0xc);
      }
      lVar38 = *plVar40;
      lVar31 = lVar27 * 0x30;
      lVar24 = lVar38 + lVar31;
      lVar29 = *(longlong *)(lVar38 + 0x20 + lVar31);
      if (lVar29 == 0) {
        lVar29 = lVar24;
      }
      iVar21 = *(int *)(lVar38 + 0x28 + lVar31);
      lVar35 = (longlong)iVar21;
      local_320._0_4_ = *(undefined4 *)(lVar29 + -8 + lVar35 * 4);
      local_1d8 = (longlong **)plVar1;
      uStack_1d0 = pplVar17;
      (*(code *)*local_350)(&local_1d8,local_350[1],&local_320);
      dVar14 = (double)(float)uStack_1d0;
      dVar15 = (double)local_1d8._4_4_;
      dVar12 = (double)(float)local_1d8;
      lVar38 = *(longlong *)(lVar38 + 0x20 + lVar31);
      if (lVar38 == 0) {
        lVar38 = lVar24;
      }
      local_320 = (longlong *)CONCAT44(local_320._4_4_,*(undefined4 *)(lVar38 + -4 + lVar35 * 4));
      (*(code *)*puVar30)(&local_1d8,puVar30[1],&local_320);
      dVar14 = (double)(float)uStack_1d0 - dVar14;
      dVar15 = (double)local_1d8._4_4_ - dVar15;
      dVar12 = (double)(float)local_1d8 - dVar12;
      dVar11 = dVar14 * dVar14 + dVar12 * dVar12 + dVar15 * dVar15;
      if (9.99999993922529e-09 < dVar11) {
        dVar51 = 1.0 / SQRT(dVar11);
        dVar12 = dVar12 * dVar51;
        dVar15 = dVar15 * dVar51;
        dVar14 = dVar14 * dVar51;
      }
      uVar22 = (ulonglong)local_360 & 0xffffffff;
      plVar1 = (longlong *)local_1d8;
      pplVar17 = uStack_1d0;
      if ((0 < iVar21 & (byte)local_360) == 1) {
        lVar38 = 0;
        dVar51 = (double)(float)uStack_1d0;
        dVar13 = (double)local_1d8._4_4_;
        dVar16 = (double)(float)local_1d8;
        do {
          bVar46 = 9.99999993922529e-09 < dVar11;
          lVar29 = *(longlong *)(lVar24 + 0x20);
          if (*(longlong *)(lVar24 + 0x20) == 0) {
            lVar29 = lVar24;
          }
          local_320 = (longlong *)CONCAT44(local_320._4_4_,*(undefined4 *)(lVar29 + lVar38 * 4));
          (*(code *)*local_350)(&local_1d8,local_350[1],&local_320);
          dVar51 = (double)(float)uStack_1d0 - dVar51;
          dVar52 = (double)local_1d8._4_4_ - dVar13;
          dVar53 = (double)(float)local_1d8 - dVar16;
          dVar11 = dVar51 * dVar51 + dVar53 * dVar53 + dVar52 * dVar52;
          pplVar17 = uStack_1d0;
          plVar1 = (longlong *)local_1d8;
          if (9.99999993922529e-09 < dVar11) {
            dVar13 = 1.0 / SQRT(dVar11);
            dVar53 = dVar53 * dVar13;
            dVar52 = dVar52 * dVar13;
            dVar51 = dVar51 * dVar13;
            if ((bVar46) &&
               ((dVar12 * dVar50 - dVar49 * dVar15) * dVar51 +
                (dVar15 * dVar3 - dVar50 * dVar14) * dVar53 +
                (dVar14 * dVar49 - dVar3 * dVar12) * dVar52 < -0.0001)) {
              uVar22 = 0;
              break;
            }
          }
          dVar14 = dVar51;
          lVar38 = lVar38 + 1;
          dVar51 = (double)(float)uStack_1d0;
          dVar13 = (double)local_1d8._4_4_;
          dVar16 = (double)(float)local_1d8;
          dVar12 = dVar53;
          dVar15 = dVar52;
        } while (lVar35 != lVar38);
      }
      lVar27 = lVar27 + 1;
      plVar40 = local_370;
    } while ((lVar27 < (int)local_370[1]) && ((uVar22 & 1) != 0));
    pcVar26 = local_378;
    iVar20 = local_37c;
    if (((byte)uVar22 & 3 < (int)local_370[1]) == 0) goto LAB_146bad361;
  }
  local_1d8 = (longlong **)plVar1;
  uStack_1d0 = pplVar17;
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_2b8 != (byte *)0x0) {
    FUN_1400020a8();
  }
  if (local_268 != (int *)0x0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146be7682(&local_148);
  if (local_228[0] != 0) {
    FUN_1400020a8();
  }
  if (local_228[2] != 0) {
    FUN_1400020a8();
  }
  if (local_228[4] != 0) {
    FUN_1400020a8();
  }
  if (local_228[8] != 0) {
    FUN_1400020a8();
  }
  if (local_228[6] != 0) {
    FUN_1400020a8();
  }
LAB_146babb80:
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bad7fa FUN_146bad7fa body=109 status=ok
// SIG undefined FUN_146bad7fa(void)

void FUN_146bad7fa(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x28);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446f48e2(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    memcpy((void *)((longlong)iVar2 * 4 + *param_1),_Src,(longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 146bad868 FUN_146bad868 body=73 status=ok
// SIG undefined FUN_146bad868(void)

void FUN_146bad868(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  FUN_144a127d2(param_1,param_2,1);
  FUN_144a127d2(param_1 + 2,param_2 & 0xffffffff,1);
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      *(int *)(*param_1 + uVar1 * 4) = (int)uVar1;
      *(undefined4 *)(param_1[2] + uVar1 * 4) = 1;
      uVar1 = uVar1 + 1;
    } while ((param_2 & 0xffffffff) != uVar1);
  }
  return;
}



// FUNCTION 146bad8b2 FUN_146bad8b2 body=78 status=ok
// SIG undefined FUN_146bad8b2(void)

void FUN_146bad8b2(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144941252();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_140704066();
      return;
    }
  }
  return;
}



// FUNCTION 146bad902 FUN_146bad902 body=541 status=ok
// SIG undefined FUN_146bad902(void)

void FUN_146bad902(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_98 [40];
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = (int)((ulonglong)param_2 >> 0x20);
  iVar7 = (int)param_2;
  if (param_4 != '\0') {
    plVar6 = (longlong *)*param_1;
    lVar5 = *plVar6;
    lVar10 = (longlong)iVar7;
    iVar9 = *(int *)(lVar5 + lVar10 * 4);
    if (iVar9 != iVar7) {
      piVar8 = (int *)(lVar5 + lVar10 * 4);
      do {
        *piVar8 = *(int *)(lVar5 + (longlong)iVar9 * 4);
        lVar5 = *plVar6;
        iVar7 = *(int *)(lVar5 + lVar10 * 4);
        lVar10 = (longlong)iVar7;
        piVar8 = (int *)(lVar5 + lVar10 * 4);
        iVar9 = *piVar8;
      } while (iVar9 != iVar7);
      plVar6 = (longlong *)*param_1;
      lVar5 = *plVar6;
    }
    param_2 = param_2 >> 0x20;
    iVar9 = *(int *)(lVar5 + param_2 * 4);
    if (iVar9 != iVar4) {
      piVar8 = (int *)(lVar5 + param_2 * 4);
      do {
        *piVar8 = *(int *)(lVar5 + (longlong)iVar9 * 4);
        lVar5 = *plVar6;
        iVar4 = *(int *)(lVar5 + param_2 * 4);
        param_2 = (longlong)iVar4;
        piVar8 = (int *)(lVar5 + param_2 * 4);
        iVar9 = *piVar8;
      } while (iVar9 != iVar4);
    }
    if (iVar7 == iVar4) {
      dVar11 = 4.0;
      goto LAB_146bada26;
    }
  }
  lVar10 = (longlong)iVar7;
  dVar11 = *(double *)(*(longlong *)param_1[1] + lVar10 * 8);
  lVar5 = (longlong)iVar4;
  dVar1 = *(double *)(*(longlong *)param_1[1] + lVar5 * 8);
  if (dVar11 < 1e-08 == dVar1 < 1e-08) {
    if ((1e-08 <= dVar11) || (dVar11 = 0.0, 1e-08 <= dVar1)) {
      lVar2 = *(longlong *)param_1[2];
      dVar11 = 1.0 - (*(double *)(lVar2 + 0x10 + lVar10 * 0x18) *
                      *(double *)(lVar2 + 0x10 + lVar5 * 0x18) +
                     *(double *)(lVar2 + lVar10 * 0x18) * *(double *)(lVar2 + lVar5 * 0x18) +
                     *(double *)(lVar2 + 8 + lVar10 * 0x18) * *(double *)(lVar2 + 8 + lVar5 * 0x18))
      ;
    }
  }
  else {
    local_64 = (undefined4)param_3;
    (**(code **)param_1[3])(&local_70,((undefined8 *)param_1[3])[1],&local_64);
    dVar11 = (double)local_68;
    dVar1 = (double)local_6c;
    dVar3 = (double)local_70;
    local_64 = (undefined4)((ulonglong)param_3 >> 0x20);
    (**(code **)param_1[3])(&local_70,((undefined8 *)param_1[3])[1],&local_64);
    dVar11 = -(((double)local_68 - dVar11) * ((double)local_68 - dVar11) +
              ((double)local_6c - dVar1) * ((double)local_6c - dVar1) +
              ((double)local_70 - dVar3) * ((double)local_70 - dVar3));
  }
LAB_146bada26:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(dVar11);
  }
  return;
}



// FUNCTION 146badb20 FUN_146badb20 body=166 status=ok
// SIG undefined FUN_146badb20(void)

bool FUN_146badb20(undefined8 *param_1,undefined4 param_2)

{
  float fVar1;
  double dVar2;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  (**(code **)param_1[1])(&local_28,((undefined8 *)param_1[1])[1]);
  dVar2 = ABS(((double)local_20 - (double)param_1[4]) * (double)param_1[7] +
              ((double)local_28 - (double)param_1[2]) * (double)param_1[5] +
              ((double)local_24 - (double)param_1[3]) * (double)param_1[6]);
  fVar1 = *(float *)(param_1 + 8);
  if ((double)fVar1 < dVar2) {
    *(undefined1 *)*param_1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return dVar2 <= (double)fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146badbc8 FUN_146badbc8 body=124 status=ok
// SIG undefined FUN_146badbc8(void)

void FUN_146badbc8(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_146be7820(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_146bd78c8(param_1,iVar1);
    }
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *param_2;
  }
  return;
}



// FUNCTION 146badc46 FUN_146badc46 body=106 status=ok
// SIG undefined FUN_146badc46(void)

void FUN_146badc46(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar2) < uVar1) {
      FUN_1400cc390(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar3 = param_1;
    }
    memcpy((void *)(lVar3 + (longlong)iVar2 * 4),(void *)*param_2,(longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 146badcb0 FUN_146badcb0 body=136 status=ok
// SIG undefined FUN_146badcb0(void)

ulonglong FUN_146badcb0(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    piVar3 = param_1;
  }
  lVar2 = (longlong)param_1[10];
  piVar1 = piVar3;
  if (lVar2 != 0) {
    piVar1 = piVar3 + lVar2;
    lVar4 = 0;
    do {
      if (*(int *)(*(longlong *)*param_2 + 8 + (longlong)*(int *)((longlong)piVar3 + lVar4) * 0xc)
          == -1) {
        piVar1 = (int *)((longlong)piVar3 + lVar4);
        if (lVar2 * 4 + -4 != lVar4) {
          lVar4 = lVar4 + 4;
          do {
            if (*(int *)(*(longlong *)*param_2 + 8 +
                        (longlong)*(int *)((longlong)piVar3 + lVar4) * 0xc) != -1) {
              *piVar1 = *(int *)((longlong)piVar3 + lVar4);
              piVar1 = piVar1 + 1;
            }
            lVar4 = lVar4 + 4;
          } while (lVar2 * 4 != lVar4);
        }
        break;
      }
      lVar4 = lVar4 + 4;
    } while (lVar2 * 4 != lVar4);
  }
  return (ulonglong)((longlong)piVar1 - (longlong)piVar3) >> 2;
}



// FUNCTION 146badd38 FUN_146badd38 body=110 status=ok
// SIG undefined FUN_146badd38(void)

void FUN_146badd38(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1400cc390(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 0x28) = param_2;
  FUN_146bf5518(param_1);
  return;
}



// FUNCTION 146badda6 FUN_146badda6 body=508 status=ok
// SIG undefined FUN_146badda6(void)

double FUN_146badda6(longlong *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [40];
  longlong *local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_80;
  int *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  longlong **local_50;
  undefined1 local_41;
  undefined1 *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108[0] = 0;
  local_100 = 0;
  local_f8 = 0xffffffff;
  local_f0 = 0xffefffffffffffff;
  local_e8 = 0xffefffffffffffff;
  local_e0 = 0;
  local_d0 = DAT_14c8464e0;
  uStack_c8 = DAT_14c8464e8;
  local_c0 = DAT_14c8464f0;
  local_b8 = DAT_14c8463a0;
  uStack_b0 = DAT_14c8463a8;
  local_a8 = DAT_14c8463b0;
  local_80 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = &local_110;
  local_38 = &local_41;
  local_40 = &LAB_146bf67ae;
  local_58 = &LAB_146bf5918;
  local_110 = param_1;
  cVar5 = FUN_146ba039e(local_108,(int)param_1[1]);
  dVar4 = 0.0;
  if (cVar5 != '\0') {
    if ((longlong)(int)uStack_70 != 0) {
      lVar3 = *param_1;
      piVar6 = local_78;
      dVar4 = 0.0;
      do {
        lVar7 = (longlong)*piVar6;
        lVar8 = (longlong)piVar6[1];
        lVar9 = (longlong)piVar6[2];
        dVar1 = *(double *)(lVar3 + 8 + lVar7 * 0x18);
        dVar2 = *(double *)(lVar3 + 0x10 + lVar7 * 0x18);
        dVar4 = dVar4 + (*(double *)(lVar3 + lVar7 * 0x18) + *(double *)(lVar3 + lVar8 * 0x18) +
                        *(double *)(lVar3 + lVar9 * 0x18)) *
                        ((*(double *)(lVar3 + 8 + lVar9 * 0x18) - dVar1) *
                         (*(double *)(lVar3 + 0x10 + lVar8 * 0x18) - dVar2) -
                        (*(double *)(lVar3 + 0x10 + lVar9 * 0x18) - dVar2) *
                        (*(double *)(lVar3 + 8 + lVar8 * 0x18) - dVar1));
        piVar6 = piVar6 + 3;
      } while (piVar6 != local_78 + (longlong)(int)uStack_70 * 3);
    }
    dVar4 = dVar4 / 6.0;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return dVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146badfa4 FUN_146badfa4 body=596 status=ok
// SIG undefined FUN_146badfa4(void)

void FUN_146badfa4(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined8 local_b0;
  int *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_b4 = 0;
  iVar4 = (int)param_2[1];
  local_c8 = param_2;
  if (0 < iVar4) {
    do {
      lVar9 = (longlong)local_b4 * 0xc + *local_c8;
      lVar11 = 2;
      lVar5 = 0;
      do {
        local_b8 = *(undefined4 *)(lVar9 + lVar5 * 4);
        local_bc = *(undefined4 *)(lVar9 + lVar11 * 4);
        local_b0 = &local_bc;
        local_a8 = &local_b4;
        FUN_146be7a00(&local_98,local_9c,&local_b0);
        lVar10 = lVar5 + 1;
        lVar11 = lVar5;
        lVar5 = lVar10;
      } while (lVar10 != 3);
      local_b4 = local_b4 + 1;
      iVar4 = (int)local_c8[1];
    } while (local_b4 < iVar4);
  }
  plVar8 = local_c8;
  FUN_146bd783c(param_1,iVar4,1);
  if (0 < (int)plVar8[1]) {
    lVar11 = 0;
    do {
      lVar10 = *plVar8 + lVar11 * 0xc;
      lVar5 = 0;
      lVar9 = 2;
      do {
        lVar3 = lVar5;
        local_b0 = (undefined4 *)
                   CONCAT44(*(undefined4 *)(lVar10 + lVar9 * 4),*(undefined4 *)(lVar10 + lVar3 * 4))
        ;
        uVar2 = FUN_1448eb174(&local_b0,8,0);
        iVar4 = -1;
        if ((int)uStack_90 != local_64) {
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = local_60;
          }
          iVar6 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & uVar2) * 4);
          if (iVar6 != -1) {
            do {
              piVar1 = (int *)(local_98 + (longlong)iVar6 * 0x14);
              if ((*piVar1 == (int)local_b0) &&
                 (*(int *)(local_98 + 4 + (longlong)iVar6 * 0x14) == local_b0._4_4_)) {
                if (piVar1 + 2 != (int *)0x0 && piVar1 != (int *)0x0) {
                  iVar4 = piVar1[2];
                }
                break;
              }
              iVar6 = piVar1[3];
            } while (iVar6 != -1);
          }
        }
        *(int *)(*param_1 + lVar11 * 0xc + lVar9 * 4) = iVar4;
        lVar5 = lVar3 + 1;
        lVar9 = lVar3;
      } while (lVar3 + 1 != 3);
      lVar11 = lVar11 + 1;
      plVar8 = local_c8;
    } while (lVar11 < (int)local_c8[1]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146be7e8c(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bae1fa FUN_146bae1fa body=1420 status=ok
// SIG undefined FUN_146bae1fa(void)

void FUN_146bae1fa(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  double *pdVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  double dVar22;
  undefined1 auStack_1d8 [44];
  uint local_1ac;
  longlong *local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  double local_190;
  longlong local_188;
  int local_17c;
  longlong local_178 [2];
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (longlong *)(param_1 + 0x10);
  local_1a0 = param_4;
  FUN_146bf593a(local_1a8,(int)param_2[1],1);
  local_178[0] = 0;
  local_178[1] = 0;
  local_1ac = param_3;
  FUN_1403ed7b2(local_178,param_3,1);
  if (0 < (int)param_2[1]) {
    lVar16 = 0;
    do {
      local_100 = (double)CONCAT44(local_100._4_4_,*(undefined4 *)(*param_2 + 8 + lVar16 * 0xc));
      local_108 = *(double *)(*param_2 + lVar16 * 0xc);
      lVar18 = 0;
      do {
        *(undefined1 *)(local_178[0] + *(int *)((longlong)&local_108 + lVar18 * 4)) = 1;
        lVar18 = lVar18 + 1;
      } while (lVar18 != 3);
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)param_2[1]);
    local_17c = 0;
    if (0 < (int)param_2[1]) {
      uVar19 = (ulonglong)local_1ac;
      local_198 = param_1 + 0x20;
      local_188 = param_1;
      do {
        pcVar4 = (code *)*local_1a0;
        uVar5 = local_1a0[1];
        lVar16 = *param_2;
        lVar17 = (longlong)local_17c;
        local_128._0_4_ = *(undefined4 *)(lVar16 + lVar17 * 0xc);
        (*pcVar4)(&local_108,uVar5,&local_128);
        dVar12 = local_f8;
        dVar9 = local_100;
        dVar6 = local_108;
        local_128._0_4_ = *(undefined4 *)(lVar16 + 4 + lVar17 * 0xc);
        (*pcVar4)(&local_108,uVar5,&local_128);
        dVar13 = local_f8;
        dVar10 = local_100;
        dVar7 = local_108;
        lVar18 = local_188;
        local_128 = (double)CONCAT44(local_128._4_4_,*(undefined4 *)(lVar16 + 8 + lVar17 * 0xc));
        (*pcVar4)(&local_108,uVar5,&local_128);
        dVar14 = local_f8;
        dVar11 = local_100;
        dVar8 = local_108;
        lVar16 = *local_1a8;
        lVar17 = (longlong)local_17c * 0x40;
        local_128 = local_108;
        local_120 = local_100;
        local_118 = local_f8;
        local_148 = dVar7;
        local_140 = dVar10;
        local_138 = dVar13;
        local_190 = dVar6;
        local_168 = dVar6;
        local_160 = dVar9;
        local_158 = dVar12;
        FUN_146baf581(&local_108,&local_168,&local_148,&local_128);
        *(double *)(lVar16 + 0x20 + lVar17) = local_108;
        *(double *)(lVar16 + 0x28 + lVar17) = local_100;
        *(double *)(lVar16 + 0x30 + lVar17) = local_f8;
        *(double *)(lVar16 + 0x38 + lVar17) =
             local_158 * local_f8 + local_168 * local_108 + local_160 * local_100;
        if (0 < (int)local_1ac) {
          uVar21 = 0;
          do {
            uVar20 = (undefined4)uVar21;
            local_108 = (double)CONCAT44(local_108._4_4_,uVar20);
            cVar15 = (*(code *)*param_5)(param_5[1],&local_108);
            if ((cVar15 != '\0') && (*(char *)(local_178[0] + uVar21) == '\0')) {
              local_128 = (double)CONCAT44(local_128._4_4_,uVar20);
              (*(code *)*local_1a0)(&local_108,local_1a0[1],&local_128);
              dVar22 = local_108;
              lVar16 = *(longlong *)(lVar18 + 0x10);
              lVar17 = (longlong)local_17c * 0x40;
              dVar6 = (*(double *)(lVar16 + 0x30 + lVar17) * local_f8 +
                      *(double *)(lVar16 + 0x20 + lVar17) * local_108 +
                      *(double *)(lVar16 + 0x28 + lVar17) * local_100) -
                      *(double *)(lVar16 + 0x38 + lVar17);
              if ((*(double *)(lVar18 + 0x70) < 0.0) || (*(double *)(lVar18 + 0x70) < dVar6)) {
                local_108 = local_190;
                local_128 = dVar7;
                local_120 = dVar10;
                local_118 = dVar13;
                local_148 = dVar8;
                local_140 = dVar11;
                local_138 = dVar14;
                local_168 = dVar22;
                local_160 = local_100;
                local_158 = local_f8;
                local_100 = dVar9;
                local_f8 = dVar12;
                dVar22 = (double)FUN_146bb2dfa(&local_108,&local_128,&local_148,&local_168);
                if (0.0 < dVar22) {
                  lVar17 = (longlong)local_17c;
                  lVar16 = *local_1a8;
                  if (*(int *)(lVar16 + 8 + lVar17 * 0x40) == 0) {
                    FUN_1447cbafe(local_198,&local_108,&local_17c,0);
                    lVar17 = (longlong)local_17c;
                    lVar16 = *(longlong *)(lVar18 + 0x10);
                  }
                  plVar1 = (longlong *)(lVar16 + lVar17 * 0x40);
                  pdVar2 = (double *)(lVar16 + 0x18 + lVar17 * 0x40);
                  if (*pdVar2 <= dVar6 && dVar6 != *pdVar2) {
                    plVar1[3] = (longlong)dVar6;
                    *(undefined4 *)(plVar1 + 2) = uVar20;
                  }
                  iVar3 = (int)plVar1[1];
                  *(uint *)(plVar1 + 1) = iVar3 + 1U;
                  if (*(uint *)((longlong)plVar1 + 0xc) < iVar3 + 1U) {
                    FUN_1446f48e2(plVar1,iVar3);
                  }
                  *(undefined4 *)(*plVar1 + (longlong)iVar3 * 4) = uVar20;
                  *(undefined1 *)(local_178[0] + uVar21) = 1;
                }
              }
            }
            uVar21 = uVar21 + 1;
          } while (uVar19 != uVar21);
        }
        local_17c = local_17c + 1;
      } while (local_17c < (int)param_2[1]);
    }
  }
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bae788 FUN_146bae788 body=501 status=ok
// SIG undefined FUN_146bae788(void)

int * FUN_146bae788(longlong param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong lStack_78;
  ulonglong local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[0] = -1;
  param_2[1] = -1;
  if (param_3 == '\0') {
    local_a0 = param_1 + 0x30;
    local_a8 = (longlong *)&DAT_100000000;
    uStack_98 = 0xffffffff;
    local_90 = local_90 & 0xffffffff00000000;
    if (*(int *)(param_1 + 0x48) == 0) {
      uStack_98._4_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_a8);
    }
    if (uStack_98._4_4_ < *(int *)(local_a0 + 0x18)) {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)uStack_98._4_4_ * 0xc);
      *param_2 = iVar7;
      param_2[1] = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10 + (longlong)iVar7 * 0x40);
    }
    goto LAB_146bae8ce;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar2 = param_1 + 0x30;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  uStack_68 = 0;
  lStack_78 = lVar2;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    iVar7 = *(int *)(param_1 + 0x48);
  }
  uStack_88 = CONCAT44(uStack_64,uStack_68);
  local_90 = local_70;
  uVar4 = local_90;
  local_a0 = local_80;
  uStack_98 = lStack_78;
  local_90._4_4_ = (int)(local_70 >> 0x20);
  local_a8 = plVar1;
  if (local_90._4_4_ == iVar7) {
    iVar8 = -1;
    iVar9 = -1;
    if (lStack_78 != lVar2) goto LAB_146bae845;
  }
  else {
LAB_146bae845:
    iVar9 = -1;
    uVar10 = 0;
    uVar11 = 0xbff00000;
    iVar8 = -1;
    iVar5 = local_90._4_4_;
    local_90 = uVar4;
    do {
      iVar5 = *(int *)(*local_a8 + (longlong)iVar5 * 0xc);
      lVar6 = (longlong)iVar5 * 0x40;
      dVar3 = *(double *)(*(longlong *)(param_1 + 0x10) + 0x18 + lVar6);
      if ((double)CONCAT44(uVar11,uVar10) <= dVar3 && dVar3 != (double)CONCAT44(uVar11,uVar10)) {
        iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar6);
        uVar10 = SUB84(dVar3,0);
        uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
        iVar9 = iVar5;
      }
      local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
      FUN_1449c0562(&local_a0);
      iVar5 = local_90._4_4_;
      uVar4 = local_90;
    } while (local_a8 != plVar1 || (uStack_98 != lVar2 || local_90._4_4_ != iVar7));
  }
  local_90 = uVar4;
  *param_2 = iVar9;
  param_2[1] = iVar8;
LAB_146bae8ce:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bae97e FUN_146bae97e body=2829 status=ok
// SIG undefined FUN_146bae97e(void)

ulonglong FUN_146bae97e(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
                       undefined4 param_5,double param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_2d8 [32];
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined1 local_290;
  longlong *local_288;
  ulonglong local_280;
  int local_274;
  ulonglong local_270;
  ulonglong local_268;
  longlong local_260;
  undefined8 local_258;
  longlong *local_250;
  longlong *local_248;
  ulonglong local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *plStack_228;
  int local_21c;
  undefined8 local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong local_198 [4];
  undefined8 local_178;
  int local_170;
  undefined8 local_16c;
  undefined4 local_164;
  longlong local_158;
  undefined4 local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong *local_128;
  longlong *local_120;
  longlong *plStack_118;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  plVar21 = local_198;
  local_198[0] = CONCAT44(local_198[0]._4_4_,param_5);
  (*(code *)*param_3)(&local_1e0,param_3[1],plVar21);
  local_2b8 = &local_1f8;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198[0] = 0;
  local_198[1] = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_2a8 = &local_208;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = *param_3;
  local_210 = param_3[1];
  local_290 = 0.0 < param_6;
  local_298 = 0xffffffff;
  local_2b0 = plVar21;
  local_2a0 = param_4;
  local_288 = param_2;
  FUN_146bf5b66(param_1,param_2,&local_218,&local_1e0);
  lVar1 = local_208;
  if (0.0 < param_6) {
    if ((uint)uStack_200 != 0) {
      lVar17 = (longlong)(int)(uint)uStack_200;
      lVar19 = 0;
      do {
        local_148 = (longlong *)CONCAT44(local_148._4_4_,*(undefined4 *)(lVar1 + lVar19));
        (*(code *)*param_3)(&local_1c8,param_3[1],&local_148);
        if (((double)local_1b8 - local_1d0) * ((double)local_1b8 - local_1d0) +
            ((double)local_1c0 - local_1d8) * ((double)local_1c0 - local_1d8) +
            ((double)local_1c8 - local_1e0) * ((double)local_1c8 - local_1e0) < param_6) {
          uVar18 = 0;
          goto LAB_146baf3b6;
        }
        lVar19 = lVar19 + 0xc;
      } while (lVar17 * 0xc != lVar19);
    }
    plVar3 = local_198 + 2;
    local_148 = (longlong *)&DAT_100000000;
    local_140 = plVar3;
    local_138 = (longlong *)&DAT_ffffffff;
    local_130 = 0;
    iVar22 = 0;
    if (local_170 != 0) {
      FUN_1449c0562(&local_148);
      iVar22 = local_170;
    }
    local_1b0 = local_138;
    plVar16 = local_1b0;
    local_1a8 = local_130;
    local_1a4 = local_12c;
    local_1c0 = local_148;
    local_1b8 = local_140;
    local_1b0._4_4_ = (int)((ulonglong)local_138 >> 0x20);
    local_1c8 = plVar21;
    if ((local_1b0._4_4_ != iVar22) || (local_140 != plVar3)) {
      iVar20 = local_1b0._4_4_;
      local_1b0 = plVar16;
      do {
        FUN_146bf5fb2(param_1,*(undefined4 *)(*local_1c8 + (longlong)iVar20 * 0xc),&local_1f8);
        local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,(uint)local_1b0 & ~local_1c0._4_4_);
        FUN_1449c0562(&local_1c0);
        iVar20 = local_1b0._4_4_;
        plVar16 = local_1b0;
      } while (local_1c8 != plVar21 || (local_1b8 != plVar3 || local_1b0._4_4_ != iVar22));
    }
    local_1b0 = plVar16;
  }
  local_270 = (ulonglong)(uint)uStack_200;
  if (0 < (int)(uint)uStack_200) {
    local_274 = (int)local_288[1];
    local_240 = (ulonglong)((uint)uStack_200 - 1);
    local_248 = param_1 + 2;
    local_250 = param_1 + 4;
    uVar18 = 0;
    local_268 = local_270;
    do {
      lVar1 = local_208;
      uVar4 = *(undefined4 *)(local_208 + uVar18 * 0xc);
      uVar5 = *(undefined4 *)(local_208 + 4 + uVar18 * 0xc);
      iVar22 = (int)local_288[1];
      *(uint *)(local_288 + 1) = iVar22 + 1U;
      local_280 = uVar18;
      if (*(uint *)((longlong)local_288 + 0xc) < iVar22 + 1U) {
        FUN_146bd78c8(local_288,iVar22);
      }
      lVar19 = (longlong)iVar22;
      lVar17 = *local_288;
      *(undefined4 *)(lVar17 + lVar19 * 0xc) = param_5;
      *(undefined4 *)(lVar17 + 4 + lVar19 * 0xc) = uVar4;
      *(undefined4 *)(lVar17 + 8 + lVar19 * 0xc) = uVar5;
      iVar20 = ((int)local_240 + (int)local_280) % (int)local_270;
      local_280 = local_280 + 1;
      iVar23 = (int)local_280;
      if (local_280 == local_268) {
        iVar23 = 0;
      }
      lVar1 = lVar1 + uVar18 * 0xc;
      iVar6 = *(int *)(lVar1 + 8);
      iVar7 = (int)param_1[1];
      lVar17 = (longlong)iVar7;
      *(uint *)(param_1 + 1) = iVar7 + 1U;
      local_21c = iVar22;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
        FUN_146bd78c8(param_1,iVar7);
      }
      lVar19 = *param_1;
      *(int *)(lVar19 + lVar17 * 0xc) = iVar20 + local_274;
      *(int *)(lVar19 + 4 + lVar17 * 0xc) = iVar6;
      *(int *)(lVar19 + 8 + lVar17 * 0xc) = iVar23 + local_274;
      lVar17 = (longlong)iVar6 * 0xc;
      lVar19 = 3;
      do {
        if (*(int *)(*local_288 + lVar17) == *(int *)(lVar1 + 4)) {
          *(int *)(*param_1 + lVar17) = local_21c;
          break;
        }
        lVar17 = lVar17 + 4;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      iVar22 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar22 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar22 + 1U) {
        FUN_146bf59ea(local_248,iVar22);
      }
      lVar1 = param_1[2];
      lVar19 = (longlong)iVar22 * 0x40;
      plVar21 = (longlong *)(lVar1 + lVar19);
      puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar19);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar1 + 0x30 + lVar19);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar19);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar1 + lVar19) = 0;
      ((undefined8 *)(lVar1 + lVar19))[1] = 0;
      *(undefined4 *)(lVar1 + 0x10 + lVar19) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x18 + lVar19) = 0xffefffffffffffff;
      pcVar8 = (code *)*param_3;
      local_258 = param_3[1];
      lVar17 = (longlong)local_21c;
      local_260 = *local_288;
      local_148._0_4_ = *(undefined4 *)(local_260 + lVar17 * 0xc);
      (*pcVar8)(&local_1c8,local_258,&local_148);
      plVar13 = local_1b8;
      plVar10 = local_1c0;
      plVar3 = local_1c8;
      local_148._0_4_ = *(undefined4 *)(local_260 + 4 + lVar17 * 0xc);
      (*pcVar8)(&local_1c8,local_258,&local_148);
      plVar14 = local_1b8;
      plVar11 = local_1c0;
      plVar16 = local_1c8;
      local_148 = (longlong *)
                  CONCAT44(local_148._4_4_,*(undefined4 *)(local_260 + 8 + lVar17 * 0xc));
      (*pcVar8)(&local_1c8,local_258,&local_148);
      plVar15 = local_1b8;
      plVar12 = local_1c0;
      plVar9 = local_1c8;
      local_148 = local_1c8;
      local_140 = local_1c0;
      local_138 = local_1b8;
      local_108 = plVar16;
      local_100 = plVar11;
      local_f8 = plVar14;
      local_128 = plVar3;
      local_120 = plVar10;
      plStack_118 = plVar13;
      FUN_146baf581(&local_1c8,&local_128,&local_108,&local_148);
      *(longlong **)(lVar1 + 0x20 + lVar19) = local_1c8;
      *(longlong **)(lVar1 + 0x28 + lVar19) = local_1c0;
      *(longlong **)(lVar1 + 0x30 + lVar19) = local_1b8;
      *(double *)(lVar1 + 0x38 + lVar19) =
           (double)plStack_118 * (double)local_1b8 +
           (double)local_128 * (double)local_1c8 + (double)local_120 * (double)local_1c0;
      if ((double)param_1[0xe] <= 0.0) {
        if (0 < (int)uStack_1f0) {
          uVar24 = 0;
          do {
            uVar4 = *(undefined4 *)(local_1f8 + (longlong)(int)uVar24 * 4);
            local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,uVar4);
            (*(code *)*param_3)(&local_238,param_3[1],&local_1c8);
            local_148 = plVar16;
            local_140 = plVar11;
            local_138 = plVar14;
            local_108 = plVar9;
            local_100 = plVar12;
            local_f8 = plVar15;
            local_128 = local_238;
            local_120 = local_230;
            plStack_118 = plStack_228;
            local_1c8 = plVar3;
            local_1c0 = plVar10;
            local_1b8 = plVar13;
            dVar26 = (double)FUN_146bb2dfa(&local_1c8,&local_148,&local_108,&local_128);
            if (dVar26 <= 0.0) {
              iVar22 = (int)uStack_1f0;
            }
            else {
              FUN_146bf6076(plVar21,uVar4,&local_238);
              iVar22 = ~uVar24 + (int)uStack_1f0;
              if (iVar22 != 0) {
                if (0 < iVar22) {
                  iVar22 = 1;
                }
                memmove((void *)(local_1f8 + (longlong)(int)uVar24 * 4),
                        (void *)(local_1f8 + (longlong)((int)uStack_1f0 - iVar22) * 4),
                        (longlong)iVar22 << 2);
              }
              iVar22 = (int)uStack_1f0 + -1;
              uStack_1f0 = CONCAT44(uStack_1f0._4_4_,iVar22);
              uVar24 = uVar24 - 1;
            }
            uVar24 = uVar24 + 1;
          } while ((int)uVar24 < iVar22);
        }
      }
      else if (0 < (int)uStack_1f0) {
        uVar24 = 0;
        do {
          uVar4 = *(undefined4 *)(local_1f8 + (longlong)(int)uVar24 * 4);
          local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,uVar4);
          (*(code *)*param_3)(&local_238,param_3[1],&local_1c8);
          dVar26 = ((double)plVar21[6] * (double)plStack_228 +
                   (double)plVar21[4] * (double)local_238 + (double)plVar21[5] * (double)local_230)
                   - (double)plVar21[7];
          if ((double)param_1[0xe] <= dVar26 && dVar26 != (double)param_1[0xe]) {
            local_148 = plVar16;
            local_140 = plVar11;
            local_138 = plVar14;
            local_108 = plVar9;
            local_100 = plVar12;
            local_f8 = plVar15;
            local_128 = local_238;
            local_120 = local_230;
            plStack_118 = plStack_228;
            local_1c8 = plVar3;
            local_1c0 = plVar10;
            local_1b8 = plVar13;
            dVar25 = (double)FUN_146bb2dfa(&local_1c8,&local_148,&local_108,&local_128);
            if (0.0 < dVar25) {
              if ((double)plVar21[3] <= dVar26 && dVar26 != (double)plVar21[3]) {
                plVar21[3] = (longlong)dVar26;
                *(undefined4 *)(plVar21 + 2) = uVar4;
              }
              iVar22 = (int)plVar21[1];
              *(uint *)(plVar21 + 1) = iVar22 + 1U;
              if (*(uint *)((longlong)plVar21 + 0xc) < iVar22 + 1U) {
                FUN_1446f48e2(plVar21,iVar22);
              }
              *(undefined4 *)(*plVar21 + (longlong)iVar22 * 4) = uVar4;
              iVar22 = ~uVar24 + (int)uStack_1f0;
              if (iVar22 != 0) {
                if (0 < iVar22) {
                  iVar22 = 1;
                }
                memmove((void *)(local_1f8 + (longlong)(int)uVar24 * 4),
                        (void *)(local_1f8 + (longlong)((int)uStack_1f0 - iVar22) * 4),
                        (longlong)iVar22 << 2);
              }
              uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0 + -1);
              uVar24 = uVar24 - 1;
            }
          }
          uVar24 = uVar24 + 1;
        } while ((int)uVar24 < (int)uStack_1f0);
      }
      if (0 < (int)plVar21[1]) {
        FUN_1447cbafe(local_250,&local_1c8,&local_21c,0);
      }
      uVar18 = local_280;
    } while (local_280 != local_268);
  }
  FUN_146bf60e6(param_1,local_288,local_198);
  uVar18 = CONCAT71((int7)((ulonglong)plVar21 >> 8),1);
LAB_146baf3b6:
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  local_150 = 0;
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_198);
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 146baf48c FUN_146baf48c body=131 status=ok
// SIG undefined FUN_146baf48c(void)

void FUN_146baf48c(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (longlong)(int)param_2 * 0x40;
  local_30 = *param_3;
  local_28 = param_3[1];
  FUN_146bf6670(*(longlong *)(param_1 + 0x10) + lVar1,param_2 >> 0x20,&local_30);
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146baf522 FUN_146baf522 body=95 status=ok
// SIG undefined FUN_146baf522(void)

void FUN_146baf522(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 4);
  FUN_146be77f4(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146baf581 FUN_146baf581 body=491 status=ok
// SIG undefined FUN_146baf581(void)

void FUN_146baf581(ulonglong *param_1,double *param_2,double *param_3,double *param_4)

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
  
  dVar8 = param_3[2] - param_2[2];
  dVar7 = param_3[1] - param_2[1];
  dVar9 = *param_3 - *param_2;
  dVar5 = param_4[2] - param_2[2];
  dVar4 = param_4[1] - param_2[1];
  dVar2 = *param_4 - *param_2;
  dVar3 = SQRT(dVar8 * dVar8 + dVar9 * dVar9 + dVar7 * dVar7);
  dVar6 = 0.0;
  dVar1 = 1.0 / dVar3;
  if (0.0 < dVar3) {
    dVar9 = dVar9 * dVar1;
    dVar7 = dVar7 * dVar1;
  }
  else {
    dVar9 = 0.0;
    dVar7 = 0.0;
  }
  dVar8 = (double)(-(ulonglong)(0.0 < dVar3) & (ulonglong)(dVar8 * dVar1));
  dVar3 = SQRT(dVar5 * dVar5 + dVar2 * dVar2 + dVar4 * dVar4);
  dVar1 = 1.0 / dVar3;
  dVar5 = (double)(-(ulonglong)(0.0 < dVar3) & (ulonglong)(dVar5 * dVar1));
  if (0.0 < dVar3) {
    dVar2 = dVar2 * dVar1;
    dVar4 = dVar4 * dVar1;
  }
  else {
    dVar4 = 0.0;
    dVar2 = 0.0;
  }
  dVar3 = dVar2 * dVar7 - dVar9 * dVar4;
  dVar1 = dVar5 * dVar9 - dVar8 * dVar2;
  dVar5 = dVar4 * dVar8 - dVar7 * dVar5;
  dVar2 = SQRT(dVar3 * dVar3 + dVar5 * dVar5 + dVar1 * dVar1);
  dVar8 = 1.0 / dVar2;
  if (0.0 < dVar2) {
    dVar3 = dVar3 * dVar8;
    dVar6 = dVar1 * dVar8;
  }
  else {
    dVar3 = 0.0;
  }
  *param_1 = -(ulonglong)(0.0 < dVar2) & (ulonglong)(dVar5 * dVar8);
  param_1[1] = (ulonglong)dVar6;
  param_1[2] = (ulonglong)dVar3;
  return;
}



// FUNCTION 146baf76c FUN_146baf76c body=93 status=ok
// SIG undefined FUN_146baf76c(void)

longlong * FUN_146baf76c(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (-1 < param_2) {
    if (param_2 != 0) {
      FUN_14481578e(param_1,param_2);
      iVar2 = 0;
      do {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_1,iVar1);
        }
        *(int *)(*param_1 + (longlong)iVar1 * 4) = iVar2;
        iVar2 = iVar2 + 1;
      } while (param_2 != iVar2);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146baf7ca FUN_146baf7ca body=325 status=ok
// SIG undefined FUN_146baf7ca(void)

ulonglong FUN_146baf7ca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  *puVar4 = FUN_146bf67b1;
  puVar4[1] = 0;
  puVar5 = puVar4 + 2;
  uVar1 = *(undefined1 *)(param_1 + 10);
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
  puVar4[10] = 0;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  *(undefined2 *)(puVar4 + 0xe) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x72) = uVar1;
  puVar4[0x13] = 0;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  *(undefined8 *)((longlong)puVar4 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0xac) = 0;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = 0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
  }
  *(bool *)(param_1 + 0x18) = 0 < *(int *)(param_3 + 1);
  local_68 = *(undefined1 *)(param_1 + 8);
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_60 = (undefined4 *)(param_1 + 0x1c);
  cVar3 = FUN_146baf910(param_1,puVar5);
  if (cVar3 != '\0') {
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (*(char *)(param_1 + 9) != '\x01') goto LAB_146baf8ed;
    local_38 = *(undefined4 *)param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = *(undefined4 *)(param_3 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    cVar3 = FUN_146bb260a(param_1);
    if (cVar3 != '\0') goto LAB_146baf8ed;
    *(undefined4 *)(param_1 + 0x1c) = 4;
  }
  uVar6 = 0;
LAB_146baf8ed:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146baf910 FUN_146baf910 body=1551 status=ok
// SIG undefined FUN_146baf910(void)

ulonglong FUN_146baf910(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                       undefined1 param_5,int *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int *piVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auStack_208 [32];
  double *local_1e8;
  undefined4 local_1e0;
  int *local_1d8;
  longlong local_1c8;
  longlong *local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  undefined4 local_140;
  int local_138 [2];
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_110 [2];
  longlong local_108;
  undefined8 uStack_100;
  int local_f4;
  undefined4 local_f0;
  undefined1 local_ec [4];
  undefined4 *local_e8;
  int *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *param_6 = 5;
  FUN_146bf6832(param_2,(int)param_3[1]);
  if ((int)param_3[1] < 3) {
    *param_6 = 3 - (uint)((int)param_3[1] == 0);
    uVar11 = 0;
    goto LAB_146baf9a2;
  }
  local_110[0] = 10;
  local_108 = 0;
  uStack_100 = 0;
  local_b8 = 0.0;
  local_e8 = (undefined4 *)0x7fefffffffffffff;
  local_e0 = (int *)0x7fefffffffffffff;
  local_d8 = 0xffefffffffffffff;
  local_d0 = 0xffefffffffffffff;
  local_128 = (undefined4)*param_3;
  uStack_124 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_120 = (undefined4)param_3[1];
  uStack_11c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1c0 = param_3;
  local_1a8 = param_4;
  local_1a0 = param_1;
  FUN_146c89846(local_110);
  lVar16 = local_108;
  iVar14 = (int)uStack_100;
  lVar17 = (longlong)(int)uStack_100;
  if (1 < lVar17) {
    local_1b0 = (longlong)*(int *)(local_108 + -4 + lVar17 * 4);
    lVar7 = *local_1c0;
    puVar1 = *(undefined4 **)(lVar7 + local_1b0 * 0x10);
    piVar2 = *(int **)(lVar7 + 8 + local_1b0 * 0x10);
    uVar11 = (ulonglong)((int)uStack_100 - 2);
    lVar20 = 0;
    do {
      lVar10 = (longlong)*(int *)(local_108 + uVar11 * 4 + lVar20 * 4) * 0x10;
      dVar3 = *(double *)(lVar7 + lVar10);
      dVar4 = *(double *)(lVar7 + 8 + lVar10);
      if (((((double)puVar1 != dVar3) || (NAN((double)puVar1) || NAN(dVar3))) ||
          ((double)piVar2 != dVar4)) || (NAN((double)piVar2) || NAN(dVar4))) {
        uVar11 = uVar11 + lVar20;
        lVar10 = uVar11 << 0x20;
        piVar13 = (int *)(local_108 + (uVar11 & 0xffffffff) * 4);
        iVar19 = (int)lVar20;
        iVar18 = (int)uStack_100 + -1 + iVar19;
        local_1c8 = param_2;
        local_1b8 = lVar17 - 1;
        goto LAB_146bafb3a;
      }
      lVar10 = lVar20 + uVar11;
      lVar20 = lVar20 + -1;
    } while (0 < lVar10);
  }
  *param_6 = 3;
LAB_146bafaf6:
  uVar11 = 0;
  goto LAB_146bafaf8;
  while( true ) {
    local_c8 = *(double *)(lVar7 + (longlong)*piVar13 * 0x10);
    local_c0 = *(undefined8 *)(lVar7 + 8 + (longlong)*piVar13 * 0x10);
    local_e8 = puVar1;
    local_e0 = piVar2;
    local_b8 = dVar3;
    local_b0 = dVar4;
    dVar21 = (double)FUN_146bb2d66(&local_e8,&local_b8,&local_c8);
    lVar10 = lVar10 + -0x100000000;
    if ((dVar21 != 0.0) || (NAN(dVar21))) break;
LAB_146bafb3a:
    piVar13 = piVar13 + -1;
    iVar18 = iVar18 + -1;
    if (iVar18 < 1) {
      *param_6 = 3;
      goto LAB_146bafaf6;
    }
  }
  uVar5 = *(undefined4 *)(lVar16 + (lVar10 >> 0x1e));
  uVar11 = uVar11 & 0xffffffff;
  uVar6 = *(undefined4 *)(lVar16 + uVar11 * 4);
  uVar8 = uVar5;
  if (dVar21 < 0.0) {
    uVar8 = uVar6;
    uVar6 = uVar5;
  }
  local_b8 = (double)CONCAT44(uVar6,(int)local_1b0);
  local_b0 = (double)CONCAT44(local_b0._4_4_,uVar8);
  FUN_146bf6878(local_1c8,&local_b8);
  plVar12 = local_1c0;
  iVar9 = (int)uStack_100 - iVar14;
  uVar15 = local_1b8;
  if (iVar9 != 0) {
    memmove((void *)(local_108 + local_1b8 * 4),(void *)(local_108 + local_1b8 * 4 + 4),
            (longlong)iVar9 << 2);
    uVar15 = (ulonglong)((int)uStack_100 - 1);
  }
  uStack_100 = CONCAT44(uStack_100._4_4_,(int)uVar15);
  FUN_14479f406(&local_108);
  iVar14 = (1 - iVar14) + (int)uStack_100;
  if (iVar14 != iVar19) {
    memmove((void *)(local_108 + uVar11 * 4),(void *)(local_108 + uVar11 * 4 + 4),
            (longlong)(iVar14 - iVar19) << 2);
  }
  uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + -1);
  FUN_14479f406(&local_108);
  if ((int)uStack_100 - iVar18 != 0) {
    memmove((void *)(local_108 + (lVar10 >> 0x20) * 4),
            (void *)(local_108 + (lVar10 >> 0x20) * 4 + 4),(longlong)((int)uStack_100 - iVar18) << 2
           );
    iVar18 = (int)uStack_100;
  }
  uStack_100 = CONCAT44(uStack_100._4_4_,iVar18 + -1);
  FUN_14479f406(&local_108);
  local_c0 = CONCAT44(local_c0._4_4_,local_b0._0_4_);
  local_c8 = local_b8;
  if (0 < (int)uStack_100) {
    lVar16 = local_1c8 + 0x68;
    uVar11 = 0;
    do {
      lVar17 = local_1c8;
      uVar5 = *(undefined4 *)(local_108 + uVar11 * 4);
      local_12c = -1;
      local_148 = local_c8;
      local_140 = (undefined4)local_c0;
      local_158 = (undefined4)*plVar12;
      uStack_154 = *(undefined4 *)((longlong)plVar12 + 4);
      uStack_150 = (undefined4)plVar12[1];
      uStack_14c = *(undefined4 *)((longlong)plVar12 + 0xc);
      local_1e8 = &local_148;
      local_1e0 = uVar5;
      local_1d8 = &local_12c;
      FUN_146bf6914(local_138,local_1a0,local_1c8,&local_158);
      plVar12 = local_1c0;
      if (local_12c < 0) {
        if (local_138[0] != -2) {
          local_160 = local_130;
          local_178 = (undefined4)*local_1c0;
          uStack_174 = *(undefined4 *)((longlong)local_1c0 + 4);
          uStack_170 = (undefined4)local_1c0[1];
          uStack_16c = *(undefined4 *)((longlong)local_1c0 + 0xc);
          local_1e8 = (double *)CONCAT44(local_1e8._4_4_,uVar5);
          FUN_146bf6b50(&local_c8,local_1c8,&local_178,&local_168);
        }
      }
      else {
        *(undefined1 *)(lVar17 + 0x61) = 1;
        if (*(char *)(lVar17 + 0x62) == '\x01') {
          local_f4 = local_12c;
          local_e8 = &local_f0;
          local_e0 = &local_f4;
          local_f0 = uVar5;
          FUN_140263e2a(lVar16,local_ec,&local_e8,0);
        }
      }
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)(int)uStack_100);
  }
  local_188 = *local_1a8;
  uStack_180 = local_1a8[1];
  local_198 = (undefined4)*plVar12;
  uStack_194 = *(undefined4 *)((longlong)plVar12 + 4);
  uStack_190 = (undefined4)plVar12[1];
  uStack_18c = *(undefined4 *)((longlong)plVar12 + 0xc);
  FUN_146bb06de(local_1c8,&local_198,&local_188,param_5);
  *param_6 = 0;
  uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
  lVar16 = local_108;
LAB_146bafaf8:
  if (lVar16 != 0) {
    FUN_1400020a8(lVar16);
  }
LAB_146baf9a2:
  if ((local_a0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146baff20 FUN_146baff20 body=325 status=ok
// SIG undefined FUN_146baff20(void)

ulonglong FUN_146baff20(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  *puVar4 = FUN_146bf67b1;
  puVar4[1] = 0;
  puVar5 = puVar4 + 2;
  uVar1 = *(undefined1 *)(param_1 + 10);
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
  puVar4[10] = 0;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  *(undefined2 *)(puVar4 + 0xe) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x72) = uVar1;
  puVar4[0x13] = 0;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  *(undefined8 *)((longlong)puVar4 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0xac) = 0;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = 0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
  }
  *(bool *)(param_1 + 0x18) = 0 < *(int *)(param_3 + 1);
  local_68 = *(undefined1 *)(param_1 + 8);
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_60 = (undefined4 *)(param_1 + 0x1c);
  cVar3 = FUN_146bb0066(param_1,puVar5);
  if (cVar3 != '\0') {
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (*(char *)(param_1 + 9) != '\x01') goto LAB_146bb0043;
    local_38 = *(undefined4 *)param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = *(undefined4 *)(param_3 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    cVar3 = FUN_146bb260a(param_1);
    if (cVar3 != '\0') goto LAB_146bb0043;
    *(undefined4 *)(param_1 + 0x1c) = 4;
  }
  uVar6 = 0;
LAB_146bb0043:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb0066 FUN_146bb0066 body=1496 status=ok
// SIG undefined FUN_146bb0066(void)

ulonglong FUN_146bb0066(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                       undefined1 param_5,int *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined4 local_1c0;
  int *local_1b8;
  longlong local_1a8;
  longlong *local_1a0;
  ulonglong local_198;
  longlong local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  int local_118 [2];
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f0 [2];
  longlong local_e8;
  undefined8 uStack_e0;
  int local_d4;
  undefined4 local_d0;
  undefined1 local_cc [4];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  int *piStack_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *param_6 = 5;
  FUN_146bf6832(param_2,(int)param_3[1]);
  if ((int)param_3[1] < 3) {
    *param_6 = 3 - (uint)((int)param_3[1] == 0);
    uVar10 = 0;
    goto LAB_146bb00f3;
  }
  local_f0[0] = 10;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0;
  local_b0 = (undefined4 *)0x7f7fffff7f7fffff;
  piStack_a8 = (int *)&DAT_ff7fffffff7fffff;
  local_108 = (undefined4)*param_3;
  uStack_104 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_100 = (undefined4)param_3[1];
  uStack_fc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1a0 = param_3;
  local_188 = param_4;
  local_180 = param_1;
  FUN_146c89ba4(local_f0);
  lVar15 = local_e8;
  iVar13 = (int)uStack_e0;
  lVar16 = (longlong)(int)uStack_e0;
  if (1 < lVar16) {
    local_190 = (longlong)*(int *)(local_e8 + -4 + lVar16 * 4);
    lVar7 = *local_1a0;
    fVar1 = *(float *)(lVar7 + local_190 * 8);
    fVar2 = *(float *)(lVar7 + 4 + local_190 * 8);
    uVar10 = (ulonglong)((int)uStack_e0 - 2);
    lVar19 = 0;
    do {
      lVar9 = (longlong)*(int *)(local_e8 + uVar10 * 4 + lVar19 * 4);
      fVar3 = *(float *)(lVar7 + lVar9 * 8);
      fVar4 = *(float *)(lVar7 + 4 + lVar9 * 8);
      if ((((fVar1 != fVar3) || (NAN(fVar1) || NAN(fVar3))) || (fVar2 != fVar4)) ||
         (NAN(fVar2) || NAN(fVar4))) {
        uVar10 = uVar10 + lVar19;
        lVar9 = uVar10 << 0x20;
        piVar12 = (int *)(local_e8 + (uVar10 & 0xffffffff) * 4);
        iVar18 = (int)lVar19;
        iVar17 = (int)uStack_e0 + -1 + iVar18;
        local_1a8 = param_2;
        local_198 = lVar16 - 1;
        goto LAB_146bb0266;
      }
      lVar9 = lVar19 + uVar10;
      lVar19 = lVar19 + -1;
    } while (0 < lVar9);
  }
  *param_6 = 3;
LAB_146bb0223:
  uVar10 = 0;
  goto LAB_146bb0225;
  while( true ) {
    local_b0 = (undefined4 *)CONCAT44(fVar2,fVar1);
    local_bc = CONCAT44(fVar4,fVar3);
    local_c8 = CONCAT44(*(undefined4 *)(lVar7 + 4 + (longlong)*piVar12 * 8),
                        *(undefined4 *)(lVar7 + (longlong)*piVar12 * 8));
    fVar20 = (float)FUN_146bb358a(&local_b0,&local_bc,&local_c8);
    lVar9 = lVar9 + -0x100000000;
    if ((fVar20 != 0.0) || (NAN(fVar20))) break;
LAB_146bb0266:
    piVar12 = piVar12 + -1;
    iVar17 = iVar17 + -1;
    if (iVar17 < 1) {
      *param_6 = 3;
      goto LAB_146bb0223;
    }
  }
  uVar5 = *(undefined4 *)(lVar15 + (lVar9 >> 0x1e));
  uVar10 = uVar10 & 0xffffffff;
  uVar6 = *(undefined4 *)(lVar15 + uVar10 * 4);
  local_b4 = uVar5;
  if (fVar20 < 0.0) {
    local_b4 = uVar6;
    uVar6 = uVar5;
  }
  local_bc = CONCAT44(uVar6,(int)local_190);
  FUN_146bf6878(local_1a8,&local_bc);
  plVar11 = local_1a0;
  iVar8 = (int)uStack_e0 - iVar13;
  uVar14 = local_198;
  if (iVar8 != 0) {
    memmove((void *)(local_e8 + local_198 * 4),(void *)(local_e8 + local_198 * 4 + 4),
            (longlong)iVar8 << 2);
    uVar14 = (ulonglong)((int)uStack_e0 - 1);
  }
  uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uVar14);
  FUN_14479f406(&local_e8);
  iVar13 = (1 - iVar13) + (int)uStack_e0;
  if (iVar13 != iVar18) {
    memmove((void *)(local_e8 + uVar10 * 4),(void *)(local_e8 + uVar10 * 4 + 4),
            (longlong)(iVar13 - iVar18) << 2);
  }
  uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0 + -1);
  FUN_14479f406(&local_e8);
  if ((int)uStack_e0 - iVar17 != 0) {
    lVar9 = lVar9 >> 0x20;
    memmove((void *)(local_e8 + lVar9 * 4),(void *)(local_e8 + lVar9 * 4 + 4),
            (longlong)((int)uStack_e0 - iVar17) << 2);
    iVar17 = (int)uStack_e0;
  }
  uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar17 + -1);
  FUN_14479f406(&local_e8);
  local_c0 = local_b4;
  local_c8 = local_bc;
  if (0 < (int)uStack_e0) {
    lVar15 = local_1a8 + 0x68;
    lVar9 = 0;
    do {
      lVar16 = local_1a8;
      uVar5 = *(undefined4 *)(local_e8 + lVar9 * 4);
      local_10c = -1;
      local_128 = local_c8;
      local_120 = local_c0;
      local_138 = (undefined4)*plVar11;
      uStack_134 = *(undefined4 *)((longlong)plVar11 + 4);
      uStack_130 = (undefined4)plVar11[1];
      uStack_12c = *(undefined4 *)((longlong)plVar11 + 0xc);
      local_1c8 = &local_128;
      local_1c0 = uVar5;
      local_1b8 = &local_10c;
      FUN_146bf76ec(local_118,local_180,local_1a8,&local_138);
      plVar11 = local_1a0;
      if (local_10c < 0) {
        if (local_118[0] != -2) {
          local_140 = local_110;
          local_158 = (undefined4)*local_1a0;
          uStack_154 = *(undefined4 *)((longlong)local_1a0 + 4);
          uStack_150 = (undefined4)local_1a0[1];
          uStack_14c = *(undefined4 *)((longlong)local_1a0 + 0xc);
          local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,uVar5);
          FUN_146bf78e6(&local_c8,local_1a8,&local_158,&local_148);
        }
      }
      else {
        *(undefined1 *)(lVar16 + 0x61) = 1;
        if (*(char *)(lVar16 + 0x62) == '\x01') {
          local_d4 = local_10c;
          local_b0 = &local_d0;
          piStack_a8 = &local_d4;
          local_d0 = uVar5;
          FUN_140263e2a(lVar15,local_cc,&local_b0,0);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_e0);
  }
  local_168 = *local_188;
  uStack_160 = local_188[1];
  local_178 = (undefined4)*plVar11;
  uStack_174 = *(undefined4 *)((longlong)plVar11 + 4);
  uStack_170 = (undefined4)plVar11[1];
  uStack_16c = *(undefined4 *)((longlong)plVar11 + 0xc);
  FUN_146bb0968(local_1a8,&local_178,&local_168,param_5);
  *param_6 = 0;
  uVar10 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
  lVar15 = local_e8;
LAB_146bb0225:
  if (lVar15 != 0) {
    FUN_1400020a8(lVar15);
  }
LAB_146bb00f3:
  if ((local_a0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb0640 FUN_146bb0640 body=157 status=ok
// SIG undefined FUN_146bb0640(void)

ulonglong FUN_146bb0640(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  bVar1 = true;
  if (*(char *)(param_1 + 0x18) == '\0') {
    bVar1 = 0 < *(int *)(param_3 + 1);
  }
  *(bool *)(param_1 + 0x18) = bVar1;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146bb06de(*(undefined8 *)(param_1 + 0x10),&local_58,&local_48,*(undefined1 *)(param_1 + 8));
  if (*(char *)(param_1 + 9) == '\x01') {
    local_38 = *(undefined4 *)param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = *(undefined4 *)(param_3 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    cVar2 = FUN_146bb260a(param_1);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x1c) = 4;
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb06de FUN_146bb06de body=491 status=ok
// SIG undefined FUN_146bb06de(void)

void FUN_146bb06de(longlong param_1,undefined4 *param_2,longlong *param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_81;
  undefined8 local_80;
  longlong local_78 [2];
  undefined4 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_4 != '\0') || (iVar2 = (int)param_3[1], 4 < iVar2)) {
    FUN_146bf80aa(param_1,param_2[2]);
    iVar2 = (int)param_3[1];
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_146baf76c(local_78,iVar2);
  if (0 < (int)param_3[1]) {
    lVar6 = 0;
    do {
      local_80 = *(undefined8 *)(*param_3 + (longlong)*(int *)(local_78[0] + lVar6 * 4) * 8);
      if (*(char *)(param_1 + 0x62) == '\x01') {
        FUN_146bb26b4(param_1,&local_80);
      }
      local_98 = *param_2;
      uStack_94 = param_2[1];
      uStack_90 = param_2[2];
      uStack_8c = param_2[3];
      local_c0 = &local_81;
      local_c8 = &local_58;
      iVar2 = FUN_146bf81e8(param_1,&local_98,&local_80,&local_68);
      if (iVar2 != (int)local_80) {
        lVar4 = (longlong)(int)(uint)uStack_60;
        if (1 < lVar4) {
          lVar5 = 0;
          puVar3 = local_68;
          do {
            uVar1 = *puVar3;
            *puVar3 = local_68[lVar4 + lVar5 + -1];
            local_68[lVar4 + lVar5 + -1] = uVar1;
            lVar5 = lVar5 + -1;
            puVar3 = puVar3 + 1;
          } while (-(ulonglong)((uint)uStack_60 >> 1) != lVar5);
        }
        local_a8 = *param_2;
        uStack_a4 = param_2[1];
        uStack_a0 = param_2[2];
        uStack_9c = param_2[3];
        FUN_146bf85ea(param_1,&local_a8,&local_68);
        local_b8 = *param_2;
        uStack_b4 = param_2[1];
        uStack_b0 = param_2[2];
        uStack_ac = param_2[3];
        FUN_146bf85ea(param_1,&local_b8,&local_58);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_3[1]);
  }
  if (param_4 == '\0') {
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_14481578e(param_1 + 0x50,0);
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  lVar6 = 0x20;
  do {
    if (*(longlong *)((longlong)local_78 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != 0);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bb08ca FUN_146bb08ca body=157 status=ok
// SIG undefined FUN_146bb08ca(void)

ulonglong FUN_146bb08ca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  bVar1 = true;
  if (*(char *)(param_1 + 0x18) == '\0') {
    bVar1 = 0 < *(int *)(param_3 + 1);
  }
  *(bool *)(param_1 + 0x18) = bVar1;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146bb0968(*(undefined8 *)(param_1 + 0x10),&local_58,&local_48,*(undefined1 *)(param_1 + 8));
  if (*(char *)(param_1 + 9) == '\x01') {
    local_38 = *(undefined4 *)param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = *(undefined4 *)(param_3 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    cVar2 = FUN_146bb260a(param_1);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x1c) = 4;
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb0968 FUN_146bb0968 body=491 status=ok
// SIG undefined FUN_146bb0968(void)

void FUN_146bb0968(longlong param_1,undefined4 *param_2,longlong *param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_81;
  undefined8 local_80;
  longlong local_78 [2];
  undefined4 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_4 != '\0') || (iVar2 = (int)param_3[1], 4 < iVar2)) {
    FUN_146bf80aa(param_1,param_2[2]);
    iVar2 = (int)param_3[1];
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_146baf76c(local_78,iVar2);
  if (0 < (int)param_3[1]) {
    lVar6 = 0;
    do {
      local_80 = *(undefined8 *)(*param_3 + (longlong)*(int *)(local_78[0] + lVar6 * 4) * 8);
      if (*(char *)(param_1 + 0x62) == '\x01') {
        FUN_146bb26b4(param_1,&local_80);
      }
      local_98 = *param_2;
      uStack_94 = param_2[1];
      uStack_90 = param_2[2];
      uStack_8c = param_2[3];
      local_c0 = &local_81;
      local_c8 = &local_58;
      iVar2 = FUN_146bf8dec(param_1,&local_98,&local_80,&local_68);
      if (iVar2 != (int)local_80) {
        lVar4 = (longlong)(int)(uint)uStack_60;
        if (1 < lVar4) {
          lVar5 = 0;
          puVar3 = local_68;
          do {
            uVar1 = *puVar3;
            *puVar3 = local_68[lVar4 + lVar5 + -1];
            local_68[lVar4 + lVar5 + -1] = uVar1;
            lVar5 = lVar5 + -1;
            puVar3 = puVar3 + 1;
          } while (-(ulonglong)((uint)uStack_60 >> 1) != lVar5);
        }
        local_a8 = *param_2;
        uStack_a4 = param_2[1];
        uStack_a0 = param_2[2];
        uStack_9c = param_2[3];
        FUN_146bf91d0(param_1,&local_a8,&local_68);
        local_b8 = *param_2;
        uStack_b4 = param_2[1];
        uStack_b0 = param_2[2];
        uStack_ac = param_2[3];
        FUN_146bf91d0(param_1,&local_b8,&local_58);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_3[1]);
  }
  if (param_4 == '\0') {
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_14481578e(param_1 + 0x50,0);
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  lVar6 = 0x20;
  do {
    if (*(longlong *)((longlong)local_78 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != 0);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bb0b54 FUN_146bb0b54 body=42 status=ok
// SIG undefined FUN_146bb0b54(void)

undefined8 * FUN_146bb0b54(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_146bb0b7e(*(longlong *)(param_1 + 0x10),param_2);
  }
  return param_2;
}



// FUNCTION 146bb0b7e FUN_146bb0b7e body=458 status=ok
// SIG undefined FUN_146bb0b7e(void)

longlong * FUN_146bb0b7e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 < -2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8 / 3);
  }
  if (2 < iVar8) {
    FUN_146be7820(param_2);
  }
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = (int)param_1[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_1;
  if ((iStack_54 != iVar8) || (uStack_60 != plVar1)) {
    do {
      lVar7 = *local_90;
      lVar9 = (longlong)iStack_74;
      iVar3 = *(int *)(lVar7 + 8 + lVar9 * 0x14);
      iVar4 = *(int *)(lVar7 + lVar9 * 0x14);
      iVar5 = *(int *)(lVar7 + 4 + lVar9 * 0x14);
      if (iVar3 < iVar5 && ((iVar3 < iVar4 && iVar3 != -1) && (iVar5 != -1 && iVar4 != -1))) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_146bd78c8(param_2,iVar3);
        }
        puVar2 = (undefined8 *)(lVar7 + lVar9 * 0x14);
        lVar7 = *param_2;
        uVar6 = *(undefined4 *)(puVar2 + 1);
        *(undefined8 *)(lVar7 + (longlong)iVar3 * 0xc) = *puVar2;
        *(undefined4 *)(lVar7 + 8 + (longlong)iVar3 * 0xc) = uVar6;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146bb0d4a FUN_146bb0d4a body=14 status=ok
// SIG undefined FUN_146bb0d4a(void)

void FUN_146bb0d4a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  undefined1 auStack_108 [40];
  longlong *plStack_e0;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int *piStack_c0;
  longlong *plStack_b8;
  uint uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_9c [4];
  longlong *plStack_98;
  undefined8 uStack_90;
  longlong *plStack_88;
  uint uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  int iStack_64;
  undefined1 auStack_60 [8];
  undefined1 *puStack_58;
  int iStack_50;
  ulonglong uStack_48;
  
  plVar9 = *(longlong **)(param_1 + 0x10);
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plStack_e0 = param_3;
  FUN_146ba99bc(param_2,((int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34)) / 3);
  plVar1 = plVar9 + 2;
  piStack_c0 = (int *)&DAT_100000000;
  uStack_b0 = 0xffffffff;
  iStack_ac = 0;
  uStack_a8 = 0;
  iVar16 = 0;
  plStack_b8 = plVar1;
  if ((int)plVar9[5] != 0) {
    FUN_1449c0562(&piStack_c0);
    iVar16 = (int)plVar9[5];
  }
  uStack_80 = uStack_b0;
  iStack_7c = iStack_ac;
  uStack_78 = CONCAT44(uStack_a4,uStack_a8);
  uStack_90 = piStack_c0;
  plStack_88 = plStack_b8;
  plStack_98 = plVar9;
  if ((iStack_ac != iVar16) || (plStack_b8 != plVar1)) {
    do {
      lVar13 = *plStack_98;
      lVar11 = (longlong)iStack_7c;
      iVar5 = *(int *)(lVar13 + 8 + lVar11 * 0x14);
      iVar6 = *(int *)(lVar13 + lVar11 * 0x14);
      iVar7 = *(int *)(lVar13 + 4 + lVar11 * 0x14);
      if (iVar5 < iVar7 && ((iVar5 < iVar6 && iVar5 != -1) && (iVar7 != -1 && iVar6 != -1))) {
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_146bd78c8(param_2,iVar5);
        }
        puVar2 = (undefined8 *)(lVar13 + lVar11 * 0x14);
        lVar13 = *param_2;
        uVar8 = *(undefined4 *)(puVar2 + 1);
        *(undefined8 *)(lVar13 + (longlong)iVar5 * 0xc) = *puVar2;
        *(undefined4 *)(lVar13 + 8 + (longlong)iVar5 * 0xc) = uVar8;
      }
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      FUN_1449c0562(&uStack_90);
    } while (plStack_98 != plVar9 || (plStack_88 != plVar1 || iStack_7c != iVar16));
  }
  plStack_98 = (longlong *)0xffffffffffffffff;
  uStack_90 = (int *)CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_146badbc8(plStack_e0,&plStack_98,(int)param_2[1]);
  uStack_78 = 0;
  uStack_70 = 0;
  plStack_98 = (longlong *)0x0;
  uStack_90 = (int *)0x0;
  uStack_6c = 0xffffffff00000080;
  iStack_64 = 0;
  puStack_58 = (undefined1 *)0x0;
  iStack_50 = 0;
  iStack_c4 = 0;
  if ((int)param_2[1] < 1) {
    iStack_50 = 0;
  }
  else {
    do {
      lVar17 = (longlong)iStack_c4 * 0xc + *param_2;
      lVar13 = 0;
      lVar11 = 2;
      do {
        lVar12 = lVar13;
        iStack_c8 = *(int *)(lVar17 + lVar11 * 4);
        iStack_cc = *(int *)(lVar17 + lVar12 * 4);
        uVar10 = FUN_1448eb174(&iStack_cc,8,0);
        if ((int)uStack_90 != iStack_64) {
          puVar14 = puStack_58;
          if (puStack_58 == (undefined1 *)0x0) {
            puVar14 = auStack_60;
          }
          iVar16 = *(int *)(puVar14 + (ulonglong)(iStack_50 - 1U & uVar10) * 4);
          while (iVar16 != -1) {
            piVar3 = (int *)((longlong)plStack_98 + (longlong)iVar16 * 0x14);
            if ((*piVar3 == iStack_cc) &&
               (*(int *)((longlong)plStack_98 + (longlong)iVar16 * 0x14 + 4) == iStack_c8)) {
              piVar18 = piVar3 + 2;
              if (piVar18 != (int *)0x0 && piVar3 != (int *)0x0) {
                FUN_146be7892(&plStack_98,&iStack_cc);
                lVar13 = (longlong)*piVar18;
                if (*(int *)(*param_2 + lVar13 * 0xc) == iStack_cc) {
                  lVar15 = 0;
                }
                else {
                  lVar4 = *param_2 + lVar13 * 0xc;
                  lVar15 = 1;
                  if (*(int *)(lVar4 + 4) != iStack_cc) {
                    lVar15 = (ulonglong)(*(int *)(lVar4 + 8) == iStack_cc) * 3 + -1;
                  }
                }
                *(int *)(lVar13 * 0xc + *plStack_e0 + lVar15 * 4) = iStack_c4;
                *(int *)((longlong)iStack_c4 * 0xc + *plStack_e0 + lVar11 * 4) = *piVar18;
                goto LAB_146bb0fdb;
              }
              break;
            }
            iVar16 = piVar3[3];
          }
        }
        iStack_d4 = iStack_c8;
        iStack_d0 = iStack_cc;
        piStack_c0 = &iStack_d4;
        plStack_b8 = (longlong *)&iStack_c4;
        FUN_146be7a00(&plStack_98,auStack_9c);
LAB_146bb0fdb:
        lVar13 = lVar12 + 1;
        lVar11 = lVar12;
      } while (lVar12 + 1 != 3);
      iStack_c4 = iStack_c4 + 1;
    } while (iStack_c4 < (int)param_2[1]);
    iStack_50 = 0;
    if (puStack_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_146be7e8c(&plStack_98);
  if ((uStack_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb0d58 FUN_146bb0d58 body=1008 status=ok
// SIG undefined FUN_146bb0d58(void)

void FUN_146bb0d58(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int *local_c0;
  longlong *local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  longlong *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = param_3;
  FUN_146ba99bc(param_2,((int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) / 3);
  plVar1 = param_1 + 2;
  local_c0 = (int *)&DAT_100000000;
  local_b0 = 0xffffffff;
  iStack_ac = 0;
  local_a8 = 0;
  iVar15 = 0;
  local_b8 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_c0);
    iVar15 = (int)param_1[5];
  }
  local_80 = local_b0;
  iStack_7c = iStack_ac;
  local_78 = CONCAT44(local_a4,local_a8);
  uStack_90 = local_c0;
  local_88 = local_b8;
  local_98 = param_1;
  if ((iStack_ac != iVar15) || (local_b8 != plVar1)) {
    do {
      lVar12 = *local_98;
      lVar10 = (longlong)iStack_7c;
      iVar5 = *(int *)(lVar12 + 8 + lVar10 * 0x14);
      iVar6 = *(int *)(lVar12 + lVar10 * 0x14);
      iVar7 = *(int *)(lVar12 + 4 + lVar10 * 0x14);
      if (iVar5 < iVar7 && ((iVar5 < iVar6 && iVar5 != -1) && (iVar7 != -1 && iVar6 != -1))) {
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_146bd78c8(param_2,iVar5);
        }
        puVar2 = (undefined8 *)(lVar12 + lVar10 * 0x14);
        lVar12 = *param_2;
        uVar8 = *(undefined4 *)(puVar2 + 1);
        *(undefined8 *)(lVar12 + (longlong)iVar5 * 0xc) = *puVar2;
        *(undefined4 *)(lVar12 + 8 + (longlong)iVar5 * 0xc) = uVar8;
      }
      local_80 = local_80 & ~uStack_90._4_4_;
      FUN_1449c0562(&uStack_90);
    } while (local_98 != param_1 || (local_88 != plVar1 || iStack_7c != iVar15));
  }
  local_98 = (longlong *)0xffffffffffffffff;
  uStack_90 = (int *)CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_146badbc8(local_e0,&local_98,(int)param_2[1]);
  local_78 = 0;
  local_70 = 0;
  local_98 = (longlong *)0x0;
  uStack_90 = (int *)0x0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_c4 = 0;
  if ((int)param_2[1] < 1) {
    local_50 = 0;
  }
  else {
    do {
      lVar16 = (longlong)local_c4 * 0xc + *param_2;
      lVar12 = 0;
      lVar10 = 2;
      do {
        lVar11 = lVar12;
        local_c8 = *(int *)(lVar16 + lVar10 * 4);
        local_cc = *(int *)(lVar16 + lVar11 * 4);
        uVar9 = FUN_1448eb174(&local_cc,8,0);
        if ((int)uStack_90 != local_64) {
          puVar13 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar13 = local_60;
          }
          iVar15 = *(int *)(puVar13 + (ulonglong)(local_50 - 1U & uVar9) * 4);
          while (iVar15 != -1) {
            piVar3 = (int *)((longlong)local_98 + (longlong)iVar15 * 0x14);
            if ((*piVar3 == local_cc) &&
               (*(int *)((longlong)local_98 + (longlong)iVar15 * 0x14 + 4) == local_c8)) {
              piVar17 = piVar3 + 2;
              if (piVar17 != (int *)0x0 && piVar3 != (int *)0x0) {
                FUN_146be7892(&local_98,&local_cc);
                lVar12 = (longlong)*piVar17;
                if (*(int *)(*param_2 + lVar12 * 0xc) == local_cc) {
                  lVar14 = 0;
                }
                else {
                  lVar4 = *param_2 + lVar12 * 0xc;
                  lVar14 = 1;
                  if (*(int *)(lVar4 + 4) != local_cc) {
                    lVar14 = (ulonglong)(*(int *)(lVar4 + 8) == local_cc) * 3 + -1;
                  }
                }
                *(int *)(lVar12 * 0xc + *local_e0 + lVar14 * 4) = local_c4;
                *(int *)((longlong)local_c4 * 0xc + *local_e0 + lVar10 * 4) = *piVar17;
                goto LAB_146bb0fdb;
              }
              break;
            }
            iVar15 = piVar3[3];
          }
        }
        local_d4 = local_c8;
        local_d0 = local_cc;
        local_c0 = &local_d4;
        local_b8 = (longlong *)&local_c4;
        FUN_146be7a00(&local_98,local_9c);
LAB_146bb0fdb:
        lVar12 = lVar11 + 1;
        lVar10 = lVar11;
      } while (lVar11 + 1 != 3);
      local_c4 = local_c4 + 1;
    } while (local_c4 < (int)param_2[1]);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_146be7e8c(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb114a FUN_146bb114a body=77 status=ok
// SIG undefined FUN_146bb114a(void)

undefined8 FUN_146bb114a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    uVar1 = FUN_146bb1198();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb1198 FUN_146bb1198 body=2215 status=ok
// SIG undefined FUN_146bb1198(void)

ulonglong FUN_146bb1198(longlong *param_1,longlong *param_2,ulonglong *param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_1e8 [36];
  uint local_1c4;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  longlong *local_1b0;
  int local_1a4;
  int local_1a0;
  int local_19c;
  undefined8 local_198;
  undefined8 local_190;
  longlong *local_188;
  uint local_180;
  uint uStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  int local_170 [2];
  undefined8 *local_168;
  longlong *local_160;
  undefined8 **local_158;
  undefined8 *local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined1 local_12c [4];
  undefined8 local_128;
  longlong *local_120;
  uint local_118;
  uint uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8 [2];
  undefined8 local_e8;
  uint local_e0;
  undefined8 local_dc;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar12 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar11 = (uint)param_3[1];
  if ((longlong)(int)uVar11 != 0) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar11);
    }
    FUN_146be81cc(&local_b8,uVar11);
    iVar13 = 1;
    if (3 < uVar11) {
      uVar11 = (uVar11 | 1) + 0xe;
      iVar13 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      iVar13 = 1 << ((byte)iVar13 & 0x1f);
    }
    if ((local_70 == 0) || (local_70 < iVar13)) {
      local_70 = iVar13;
      FUN_146be7ccc();
    }
    uVar4 = param_3[1];
    if ((longlong)(int)uVar4 != 0) {
      local_1c0 = *param_3;
      lVar9 = 0;
      local_1c4 = -(uint)(param_4 != 0) | 1;
      do {
        uVar5 = *(ulonglong *)(local_1c0 + lVar9);
        local_108 = uVar5;
        if (*(char *)((longlong)param_1 + 0x62) == '\x01') {
          FUN_146bb26b4(param_1,&local_108);
          uVar5 = local_108 & 0xffffffff;
          iVar13 = local_108._4_4_;
        }
        else {
          iVar13 = (int)(uVar5 >> 0x20);
        }
        uVar11 = 1;
        if (iVar13 < (int)uVar5) {
          local_108 = CONCAT44((int)uVar5,iVar13);
          uVar11 = local_1c4;
        }
        local_198 = (longlong *)((ulonglong)local_198 & 0xffffffff00000000);
        uVar2 = FUN_1448eb174(&local_108,8,0);
        piVar6 = (int *)FUN_146be8360(&local_b8,uVar2,&local_108,&local_198);
        *piVar6 = *piVar6 + uVar11;
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)uVar4 * 8 != lVar9);
    }
  }
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_160 = &local_148;
  local_148 = 0;
  uStack_140 = 0;
  local_168 = &local_b8;
  local_158 = &local_150;
  plVar10 = param_1 + 2;
  local_128 = (longlong **)&DAT_100000000;
  local_118 = 0xffffffff;
  uStack_114 = 0;
  local_110 = 0;
  local_170[0] = param_4;
  local_150 = local_168;
  local_120 = plVar10;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_128);
    uVar12 = (ulonglong)*(uint *)(param_1 + 5);
  }
  local_180 = local_118;
  uStack_17c = uStack_114;
  local_178 = local_110;
  local_174 = local_10c;
  local_190 = local_128;
  local_188 = local_120;
  uVar4 = (ulonglong)uStack_114;
  local_198 = param_1;
  if ((uStack_114 != (uint)uVar12) || (local_1c4 = 0, local_120 != plVar10)) {
    local_1c4 = 0;
    do {
      if (*(int *)(*local_198 + 8 + (longlong)(int)uVar4 * 0x14) == -1) {
        FUN_146be7f44(local_170,*local_198 + (longlong)(int)uVar4 * 0x14,0);
        local_1c4 = local_1c4 + 1;
      }
      local_180 = local_180 & ~local_190._4_4_;
      FUN_1449c0562(&local_190);
      uVar4 = (ulonglong)uStack_17c;
    } while (local_198 != param_1 || (local_188 != plVar10 || uStack_17c != (uint)uVar12));
  }
  uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
  if ((int)uStack_140 != 0) {
    uVar11 = 0;
    local_1c0 = CONCAT44(local_1c0._4_4_,(int)CONCAT71((int7)(uVar4 >> 8),1));
    do {
      uVar11 = (int)(uVar11 + 1) % (int)uStack_140;
      lVar9 = (longlong)(int)uVar11;
      local_128 = *(longlong ***)(local_148 + lVar9 * 0xc);
      local_120 = (longlong *)CONCAT44(local_120._4_4_,*(undefined4 *)(local_148 + 8 + lVar9 * 0xc))
      ;
      iVar13 = ~uVar11 + (int)uStack_140;
      if (iVar13 != 0) {
        if (0 < iVar13) {
          iVar13 = 1;
        }
        memmove((void *)(local_148 + lVar9 * 0xc),
                (void *)(local_148 + (longlong)((int)uStack_140 - iVar13) * 0xc),
                (longlong)iVar13 * 0xc);
      }
      uStack_140 = CONCAT44(uStack_140._4_4_,(int)uStack_140 + -1);
      uVar1 = FUN_1448eb174(&local_128,8,0);
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = param_1 + 7;
        }
        iVar13 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar1) * 4);
        if (iVar13 != -1) {
          do {
            piVar6 = (int *)(*param_1 + (longlong)iVar13 * 0x14);
            if ((*piVar6 == (int)local_128) &&
               (*(int *)(*param_1 + 4 + (longlong)iVar13 * 0x14) == local_128._4_4_))
            goto LAB_146bb1410;
            iVar13 = piVar6[3];
          } while (iVar13 != -1);
        }
      }
      piVar6 = (int *)0x0;
LAB_146bb1410:
      iVar13 = piVar6[2];
      local_19c = local_128._4_4_;
      local_1a0 = (int)local_128;
      local_1a4 = iVar13;
      if ((int)local_128 < local_128._4_4_) {
        if ((int)local_128 <= iVar13) {
          local_1a4 = (int)local_128;
          local_19c = iVar13;
          local_1a0 = local_128._4_4_;
        }
      }
      else if (local_128._4_4_ <= iVar13) {
        local_1a4 = local_128._4_4_;
        local_19c = (int)local_128;
        local_1a0 = iVar13;
      }
      if (-1 < local_1a4) {
        uVar2 = FUN_1448eb174(&local_1a4,0xc,0);
        iVar3 = FUN_146be86d0(&local_108,uVar2,&local_1a4);
        lVar9 = 0;
        if (iVar3 != -1) {
          lVar9 = (longlong)iVar3 * 0x18 + local_108;
        }
        if (lVar9 == 0) {
          local_198 = (longlong *)&local_1a4;
          local_190 = &local_120;
          FUN_146be8736(&local_108,local_12c,&local_198,0);
          local_198 = (longlong *)CONCAT44(iVar13,local_128._4_4_);
          FUN_146be7f44(local_170,&local_198,(ulonglong)local_120 & 0xffffffff);
          local_198 = (longlong *)CONCAT44((int)local_128,iVar13);
          FUN_146be7f44(local_170,&local_198,(ulonglong)local_120 & 0xffffffff);
        }
        else if ((local_1c0 & 1) == 0) {
          local_1c0 = (ulonglong)local_1c0._4_4_ << 0x20;
        }
        else {
          local_1c0 = CONCAT44(local_1c0._4_4_,
                               CONCAT31((int3)((uint)*(int *)(lVar9 + 0xc) >> 8),
                                        *(int *)(lVar9 + 0xc) == (int)local_120));
        }
      }
    } while ((int)uStack_140 != 0);
    uVar12 = local_1c0 & 0xffffffff;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146be7820(param_2,0);
  }
  if (param_4 == 0) {
    iVar13 = (local_d4 - (local_1c4 + (int)uStack_100)) +
             ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) / 3;
    if (iVar13 < 0) {
LAB_146bb1a31:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar13);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar13) {
      FUN_146be7820(param_2);
    }
    local_1b8 = &local_108;
    local_1b0 = param_2;
    FUN_146be80aa(param_1);
  }
  else {
    iVar13 = (int)uStack_100 - local_d4;
    if (iVar13 < 0) goto LAB_146bb1a31;
    local_1c0 = CONCAT44(local_1c0._4_4_,(int)uVar12);
    if (*(int *)((longlong)param_2 + 0xc) < iVar13) {
      FUN_146be7820(param_2);
    }
    local_120 = local_f8;
    local_128 = (longlong **)&DAT_100000000;
    local_118 = 0xffffffff;
    uStack_114 = 0;
    local_110 = 0;
    uVar11 = 0;
    if (local_e0 != 0) {
      FUN_1449c0562(&local_128);
      uVar11 = local_e0;
    }
    local_180 = local_118;
    uStack_17c = uStack_114;
    local_178 = local_110;
    local_174 = local_10c;
    local_190 = local_128;
    local_188 = local_120;
    local_198 = &local_108;
    if ((uStack_114 != uVar11) || (local_120 != local_f8)) {
      do {
        lVar9 = *local_198;
        lVar7 = (longlong)(int)uStack_17c;
        uVar1 = *(uint *)(lVar9 + 0xc + lVar7 * 0x18);
        if ((((param_4 == 3 && (int)uVar1 < 0) || (param_4 == 2 && uVar1 != 0)) ||
            (param_4 == 1 && 0 < (int)uVar1)) || ((param_4 == 4 && ((uVar1 & 1) != 0)))) {
          iVar13 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar13 + 1U) {
            FUN_146bd78c8(param_2,iVar13);
          }
          puVar8 = (undefined8 *)(lVar7 * 0x18 + lVar9);
          lVar9 = *param_2;
          *(undefined4 *)(lVar9 + 8 + (longlong)iVar13 * 0xc) = *(undefined4 *)(puVar8 + 1);
          *(undefined8 *)(lVar9 + (longlong)iVar13 * 0xc) = *puVar8;
        }
        local_180 = local_180 & ~local_190._4_4_;
        FUN_1449c0562(&local_190);
      } while (local_198 != &local_108 || (local_188 != local_f8 || uStack_17c != uVar11));
    }
    uVar12 = local_1c0 & 0xffffffff;
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_146be8cc8(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146be7e8c(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffffffffff01;
}



// FUNCTION 146bb1a42 FUN_146bb1a42 body=101 status=ok
// SIG undefined FUN_146bb1a42(void)

undefined8
FUN_146bb1a42(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    local_18 = *param_4;
    uStack_10 = param_4[1];
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_38 = param_5;
    uVar1 = FUN_142962492();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb1aa8 FUN_146bb1aa8 body=230 status=ok
// SIG undefined FUN_146bb1aa8(void)

undefined8 *
FUN_146bb1aa8(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x1c) == 3) {
    local_38 = *param_5;
    uStack_30 = param_5[1];
    local_28 = *(undefined4 *)(param_5 + 2);
    uStack_24 = *(undefined4 *)((longlong)param_5 + 0x14);
    uStack_20 = *(undefined4 *)(param_5 + 3);
    uStack_1c = *(undefined4 *)((longlong)param_5 + 0x1c);
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    local_88 = param_6;
    FUN_146bb1b8f(param_2,&local_48,param_4,&local_38);
  }
  else {
    if ((*(longlong *)(param_1 + 0x10) == 0) || (*(char *)(param_1 + 0x18) != '\0')) {
      *param_2 = 0;
      param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_a8);
    }
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_58 = *(undefined4 *)(param_5 + 2);
    uStack_54 = *(undefined4 *)((longlong)param_5 + 0x14);
    uStack_50 = *(undefined4 *)(param_5 + 3);
    uStack_4c = *(undefined4 *)((longlong)param_5 + 0x1c);
    local_88 = &local_68;
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_80 = param_6;
    FUN_146bb224a(param_2);
  }
  if ((local_10 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146bb1b8f FUN_146bb1b8f body=1722 status=ok
// SIG undefined FUN_146bb1b8f(void)

longlong *
FUN_146bb1b8f(longlong *param_1,longlong *param_2,char param_3,double *param_4,double param_5)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  int iVar14;
  double *pdVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
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
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  double local_100;
  double local_f8;
  longlong *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d0;
  ulonglong uVar15;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 == '\0') goto LAB_146bb1c1a;
  uVar3 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar3 == 0) goto LAB_146bb1c1a;
  pdVar13 = (double *)*param_2;
  dVar1 = *pdVar13;
  dVar2 = pdVar13[1];
  uVar15 = 0xffffffff;
  iVar14 = -1;
  if (1 < (int)uVar3) {
    pdVar16 = pdVar13 + 3;
    uVar21 = 0;
    uVar22 = 0;
    uVar17 = 1;
    do {
      dVar23 = dVar1 - pdVar16[-1];
      dVar25 = dVar2 - *pdVar16;
      dVar23 = dVar25 * dVar25 + dVar23 * dVar23;
      bVar6 = dVar23 != (double)CONCAT44(uVar22,uVar21);
      bVar7 = (double)CONCAT44(uVar22,uVar21) <= dVar23;
      if (dVar23 <= (double)CONCAT44(uVar22,uVar21)) {
        dVar23 = (double)CONCAT44(uVar22,uVar21);
      }
      if (bVar7 && bVar6) {
        uVar15 = uVar17 & 0xffffffff;
      }
      iVar14 = (int)uVar15;
      uVar17 = uVar17 + 1;
      pdVar16 = pdVar16 + 2;
      uVar21 = SUB84(dVar23,0);
      uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
    } while (uVar3 != uVar17);
  }
  pdVar16 = pdVar13 + (longlong)(int)uVar3 * 2;
  uVar21 = 0xffffffff;
  uVar22 = 0xffefffff;
  uVar30 = 0xffffffff;
  uVar32 = 0x7fefffff;
  uVar34 = 0xffffffff;
  uVar36 = 0xffefffff;
  uVar38 = 0xffffffff;
  uVar40 = 0x7fefffff;
  do {
    dVar23 = *pdVar13;
    uVar37 = (undefined4)((ulonglong)dVar23 >> 0x20);
    dVar25 = pdVar13[1];
    uVar29 = (undefined4)((ulonglong)dVar25 >> 0x20);
    uVar31 = SUB84(dVar23,0);
    uVar33 = uVar37;
    if ((double)CONCAT44(uVar32,uVar30) <= dVar23) {
      uVar31 = uVar30;
      uVar33 = uVar32;
    }
    uVar35 = SUB84(dVar23,0);
    if (dVar23 <= (double)CONCAT44(uVar36,uVar34)) {
      uVar35 = uVar34;
      uVar37 = uVar36;
    }
    uVar39 = SUB84(dVar25,0);
    uVar41 = uVar29;
    if ((double)CONCAT44(uVar40,uVar38) <= dVar25) {
      uVar39 = uVar38;
      uVar41 = uVar40;
    }
    uVar28 = SUB84(dVar25,0);
    if (dVar25 <= (double)CONCAT44(uVar22,uVar21)) {
      uVar28 = uVar21;
      uVar29 = uVar22;
    }
    pdVar13 = pdVar13 + 2;
    uVar21 = uVar28;
    uVar22 = uVar29;
    uVar30 = uVar31;
    uVar32 = uVar33;
    uVar34 = uVar35;
    uVar36 = uVar37;
    uVar38 = uVar39;
    uVar40 = uVar41;
  } while (pdVar13 != pdVar16);
  dVar23 = 9.99999993922529e-09;
  if (9.99999993922529e-09 <= param_5) {
    dVar23 = param_5;
  }
  dVar9 = (double)CONCAT44(uVar37,uVar35) + dVar23;
  dVar25 = (double)CONCAT44(uVar29,uVar28) + dVar23;
  dVar8 = (double)CONCAT44(uVar33,uVar31) - dVar23;
  dVar23 = (double)CONCAT44(uVar41,uVar39) - dVar23;
  if (param_4[2] < *param_4) {
LAB_146bb1dab:
    *param_4 = dVar8;
    param_4[1] = dVar23;
    param_4[2] = dVar9;
    param_4[3] = dVar25;
  }
  else {
    if (param_4[3] < param_4[1]) goto LAB_146bb1dab;
    dVar24 = param_4[2] + param_5;
    param_4[2] = dVar24;
    dVar27 = param_4[3] + param_5;
    param_4[3] = dVar27;
    dVar26 = *param_4 - param_5;
    *param_4 = dVar26;
    param_5 = param_4[1] - param_5;
    param_4[1] = param_5;
    if (dVar26 <= dVar8) {
      dVar8 = dVar26;
    }
    if (param_5 <= dVar23) {
      dVar23 = param_5;
    }
    if (dVar9 <= dVar24) {
      dVar9 = dVar24;
    }
    if (dVar25 <= dVar27) {
      dVar25 = dVar27;
    }
  }
  FUN_146bf9916(param_1,(int)param_2[1],1);
  if (iVar14 == -1) {
    plVar4 = (longlong *)*param_1;
    iVar14 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar14 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar14 + 1U) {
      FUN_14489624a(plVar4,iVar14);
    }
    lVar11 = *plVar4;
    *(double *)(lVar11 + (longlong)iVar14 * 0x10) = dVar8;
    *(double *)(lVar11 + 8 + (longlong)iVar14 * 0x10) = dVar23;
    iVar14 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar14 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar14 + 1U) {
      FUN_14489624a(plVar4,iVar14);
    }
    lVar11 = *plVar4;
    *(double *)(lVar11 + (longlong)iVar14 * 0x10) = dVar9;
    *(double *)(lVar11 + 8 + (longlong)iVar14 * 0x10) = dVar23;
    iVar14 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar14 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar14 + 1U) {
      FUN_14489624a(plVar4,iVar14);
    }
    lVar11 = *plVar4;
    *(double *)(lVar11 + (longlong)iVar14 * 0x10) = dVar9;
    *(double *)(lVar11 + 8 + (longlong)iVar14 * 0x10) = dVar25;
    iVar14 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar14 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar14 + 1U) {
      FUN_14489624a(plVar4,iVar14);
    }
    lVar11 = *plVar4;
    *(double *)(lVar11 + (longlong)iVar14 * 0x10) = dVar8;
    *(double *)(lVar11 + 8 + (longlong)iVar14 * 0x10) = dVar25;
  }
  else {
    dVar2 = *(double *)(*param_2 + 8 + (longlong)iVar14 * 0x10) - dVar2;
    dVar1 = *(double *)(*param_2 + (longlong)iVar14 * 0x10) - dVar1;
    dVar24 = dVar1 * dVar1 + dVar2 * dVar2;
    if (9.99999993922529e-09 < dVar24) {
      dVar1 = dVar1 * (1.0 / SQRT(dVar24));
    }
    else {
      dVar1 = 0.0;
    }
    dVar2 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar24) &
                    (ulonglong)(dVar2 * (1.0 / SQRT(dVar24))));
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_144a127d2(&local_e8,(int)param_2[1],1);
    if (0 < (int)param_2[1]) {
      lVar11 = 0;
      do {
        *(int *)(local_e8 + lVar11 * 4) = (int)lVar11;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_2[1]);
    }
    local_100 = dVar1;
    local_f8 = dVar2;
    local_f0 = param_2;
    FUN_146bf9aa5(local_e8,uStack_e0 & 0xffffffff);
    if (0 < (int)uStack_e0) {
      dVar23 = SQRT((dVar9 - dVar8) * (dVar9 - dVar8) + (dVar25 - dVar23) * (dVar25 - dVar23));
      dVar25 = -dVar1 * dVar23;
      dVar2 = dVar2 * dVar23;
      iVar14 = -1;
      iVar18 = 0;
      do {
        lVar11 = (longlong)iVar18;
        iVar10 = iVar18 + 1;
        if (iVar18 + 1 < (int)uStack_e0) {
          iVar10 = (int)uStack_e0;
        }
        lVar5 = *param_2;
        lVar12 = (longlong)*(int *)(local_e8 + lVar11 * 4) * 0x10;
        pdVar13 = (double *)(lVar5 + lVar12);
        while (lVar11 = lVar11 + 1, lVar11 < (int)uStack_e0) {
          lVar20 = (longlong)*(int *)(local_e8 + lVar11 * 4) * 0x10;
          dVar8 = *pdVar13;
          uVar21 = SUB84(dVar8,0);
          uVar22 = (undefined4)((ulonglong)dVar8 >> 0x20);
          pdVar16 = (double *)(lVar5 + lVar20);
          iVar19 = (int)lVar11;
          if ((dVar8 != *pdVar16) || (NAN(dVar8) || NAN(*pdVar16))) goto LAB_146bb2062;
          pdVar16 = (double *)(lVar20 + lVar5 + 8);
          if ((pdVar13[1] != *pdVar16) || (NAN(pdVar13[1]) || NAN(*pdVar16))) goto LAB_146bb2062;
        }
        uVar21 = SUB84(*pdVar13,0);
        uVar22 = (undefined4)((ulonglong)*pdVar13 >> 0x20);
        iVar19 = iVar10;
LAB_146bb2062:
        dVar8 = *(double *)(lVar5 + 8 + lVar12);
        if (iVar14 == -1) {
          dVar9 = dVar8 - dVar2;
          dVar24 = (double)CONCAT44(uVar22,uVar21) - dVar23 * dVar1;
        }
        else {
          lVar20 = (longlong)*(int *)(local_e8 + (longlong)iVar14 * 4) * 0x10;
          dVar9 = (*(double *)(lVar5 + 8 + lVar20) + dVar8) * 0.5;
          dVar24 = (*(double *)(lVar5 + lVar20) + (double)CONCAT44(uVar22,uVar21)) * 0.5;
        }
        if (lVar11 < (int)uStack_e0) {
          lVar11 = (longlong)*(int *)(local_e8 + (longlong)iVar19 * 4) * 0x10;
          dVar8 = (dVar8 + *(double *)(lVar5 + 8 + lVar11)) * 0.5;
          dVar26 = ((double)CONCAT44(uVar22,uVar21) + *(double *)(lVar5 + lVar11)) * 0.5;
        }
        else {
          dVar8 = dVar8 + dVar2;
          dVar26 = (double)CONCAT44(uVar22,uVar21) + dVar23 * dVar1;
        }
        lVar11 = *param_1;
        plVar4 = (longlong *)(lVar11 + lVar12);
        iVar14 = *(int *)(lVar11 + 8 + lVar12);
        *(uint *)(lVar11 + 8 + lVar12) = iVar14 + 1U;
        if (*(uint *)(lVar11 + 0xc + lVar12) < iVar14 + 1U) {
          FUN_14489624a(plVar4,iVar14);
        }
        lVar11 = *plVar4;
        *(double *)(lVar11 + (longlong)iVar14 * 0x10) = dVar24 - dVar2;
        *(double *)(lVar11 + 8 + (longlong)iVar14 * 0x10) = dVar9 - dVar25;
        iVar14 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar14 + 1U) {
          FUN_14489624a(plVar4,iVar14);
        }
        lVar11 = *plVar4;
        *(double *)(lVar11 + (longlong)iVar14 * 0x10) = dVar24 + dVar2;
        *(double *)(lVar11 + 8 + (longlong)iVar14 * 0x10) = dVar9 + dVar25;
        iVar14 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar14 + 1U) {
          FUN_14489624a(plVar4,iVar14);
        }
        lVar11 = *plVar4;
        *(double *)(lVar11 + (longlong)iVar14 * 0x10) = dVar2 + dVar26;
        *(double *)(lVar11 + 8 + (longlong)iVar14 * 0x10) = dVar25 + dVar8;
        iVar14 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar14 + 1U) {
          FUN_14489624a(plVar4,iVar14);
        }
        lVar11 = *plVar4;
        *(double *)(lVar11 + (longlong)iVar14 * 0x10) = dVar26 - dVar2;
        *(double *)(lVar11 + 8 + (longlong)iVar14 * 0x10) = dVar8 - dVar25;
        local_118 = param_4[2];
        dStack_110 = param_4[3];
        local_128 = *(undefined4 *)param_4;
        uStack_124 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_120 = *(undefined4 *)(param_4 + 1);
        uStack_11c = *(undefined4 *)((longlong)param_4 + 0xc);
        FUN_142970d3b(plVar4,&local_128,&local_118);
        iVar14 = iVar18;
        iVar18 = iVar19;
      } while (iVar19 < (int)uStack_e0);
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
LAB_146bb1c1a:
  if ((local_d0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bb224a FUN_146bb224a body=958 status=ok
// SIG undefined FUN_146bb224a(void)

undefined8 *
FUN_146bb224a(undefined8 *param_1,longlong param_2,longlong *param_3,char param_4,double *param_5,
             double param_6)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_1a8 [40];
  undefined4 local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  longlong lStack_168;
  longlong **local_160;
  char *local_158;
  longlong **local_150;
  double *local_148;
  longlong *local_140;
  bool *local_138;
  double *local_130;
  longlong *local_128;
  double *local_120;
  double *local_118;
  longlong *local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  bool local_e1;
  undefined8 **local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  char local_b9;
  undefined1 *local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  local_b9 = param_4;
  if ((*(char *)(param_2 + 0x60) == '\x01') && (*(int *)(param_2 + 0x58) == (int)param_3[1] + 1)) {
    local_e0 = (undefined8 **)(param_2 + 0x50);
  }
  else {
    FUN_146bfa01a(param_2,&local_170);
    local_e0 = &local_d8;
    local_d8 = local_170;
    uStack_d0 = lStack_168;
  }
  if (*param_5 <= param_5[2]) {
    dVar8 = param_5[1];
    dVar7 = param_5[3];
    local_e1 = dVar8 <= dVar7;
    if (dVar8 <= dVar7) {
      param_5[2] = param_5[2] + param_6;
      param_5[3] = dVar7 + param_6;
      *param_5 = *param_5 - param_6;
      param_5[1] = dVar8 - param_6;
    }
  }
  else {
    local_e1 = false;
  }
  local_108 = 1.79769313486232e+308;
  local_100 = 1.79769313486232e+308;
  local_f8 = -1.79769313486232e+308;
  local_f0 = -1.79769313486232e+308;
  iVar2 = (int)param_3[1];
  if (param_4 != '\0') {
    if (iVar2 != 0) {
      lVar3 = *param_3;
      uVar5 = 0xffffffff;
      uVar6 = 0xffefffff;
      dVar7 = 1.79769313486232e+308;
      lVar4 = 0;
      dVar9 = 1.79769313486232e+308;
      dVar8 = -1.79769313486232e+308;
      do {
        dVar1 = *(double *)(lVar3 + lVar4);
        dVar10 = dVar1;
        if (dVar1 < dVar7) {
          dVar7 = dVar1;
          dVar10 = *(double *)(lVar3 + lVar4);
          local_108 = dVar1;
        }
        if ((double)CONCAT44(uVar6,uVar5) <= dVar10 && dVar10 != (double)CONCAT44(uVar6,uVar5)) {
          uVar5 = SUB84(dVar10,0);
          uVar6 = (undefined4)((ulonglong)dVar10 >> 0x20);
          local_f8 = dVar10;
        }
        dVar1 = *(double *)(lVar3 + 8 + lVar4);
        dVar10 = dVar1;
        if (dVar1 < dVar9) {
          dVar9 = dVar1;
          dVar10 = *(double *)(lVar3 + 8 + lVar4);
          local_100 = dVar1;
        }
        if (dVar8 < dVar10) {
          dVar8 = dVar10;
          local_f0 = dVar10;
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar4);
    }
    local_118 = &local_108;
    local_110 = param_3;
    FUN_146bfa13e(param_2);
    dVar8 = 9.99999993922529e-09;
    if (9.99999993922529e-09 <= param_6) {
      dVar8 = param_6;
    }
    local_f8 = local_f8 + dVar8;
    local_f0 = local_f0 + dVar8;
    local_108 = local_108 - dVar8;
    if (*param_5 <= local_108) {
      local_108 = *param_5;
    }
    local_100 = local_100 - dVar8;
    if (param_5[1] <= local_100) {
      local_100 = param_5[1];
    }
    if (local_f8 <= param_5[2]) {
      local_f8 = param_5[2];
    }
    if (local_f0 <= param_5[3]) {
      local_f0 = param_5[3];
    }
    iVar2 = (int)param_3[1];
  }
  local_120 = &local_108;
  *param_1 = 0;
  param_1[1] = 0;
  local_128 = param_3;
  local_98 = local_108;
  local_90 = local_100;
  local_88 = local_f8;
  local_80 = local_100;
  local_78 = local_f8;
  local_70 = local_f0;
  local_68 = local_108;
  local_60 = local_f0;
  FUN_146bf9916(param_1,iVar2);
  local_b0 = &local_170;
  local_160 = (longlong **)&local_e0;
  local_158 = &local_b9;
  local_138 = &local_e1;
  local_130 = param_5;
  local_178 = &local_a8;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = &LAB_146bfa430;
  local_180 = 0;
  local_170 = param_1;
  lStack_168 = param_2;
  local_150 = &local_128;
  local_148 = &local_98;
  local_140 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",(int)param_3[1],1);
  if (local_d8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bb260a FUN_146bb260a body=168 status=ok
// SIG undefined FUN_146bb260a(void)

undefined8 FUN_146bb260a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)param_2[1];
    if ((longlong)iVar1 == 0) {
      uVar3 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
    }
    else {
      lVar2 = *param_2;
      lVar4 = 0;
      do {
        local_40 = *(undefined8 *)(lVar2 + lVar4);
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        if (*(char *)(param_1 + 10) == '\x01') {
          FUN_146bb26b4(uVar3,&local_40);
        }
        uVar3 = FUN_146bb27b0(uVar3,&local_40);
      } while (((char)uVar3 != '\0') &&
              (bVar5 = (longlong)iVar1 * 8 + -8 != lVar4, lVar4 = lVar4 + 8, bVar5));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146bb26b4 FUN_146bb26b4 body=252 status=ok
// SIG undefined FUN_146bb26b4(void)

void FUN_146bb26b4(longlong param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x9c);
  if (iVar2 != iVar3) {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      lVar1 = param_1 + 0xa0;
    }
    iVar4 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & *param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 0x10) == *param_2) {
          if ((uint *)(lVar1 + 4) != (uint *)0x0 && lVar1 != 0) {
            *param_2 = *(uint *)(lVar1 + 4);
            iVar2 = *(int *)(param_1 + 0x70);
            iVar3 = *(int *)(param_1 + 0x9c);
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 8);
      } while (iVar4 != -1);
    }
    if (iVar2 != iVar3) {
      lVar1 = param_1 + 0xa0;
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        lVar1 = *(longlong *)(param_1 + 0xa8);
      }
      iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & param_2[1]) * 4);
      if (iVar2 != -1) {
        do {
          lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 0x10;
          if (*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 0x10) == param_2[1]) {
            if ((uint *)(lVar1 + 4) == (uint *)0x0 || lVar1 == 0) {
              return;
            }
            param_2[1] = *(uint *)(lVar1 + 4);
            return;
          }
          iVar2 = *(int *)(lVar1 + 8);
        } while (iVar2 != -1);
      }
    }
  }
  return;
}



// FUNCTION 146bb27b0 FUN_146bb27b0 body=139 status=ok
// SIG undefined FUN_146bb27b0(void)

undefined1 FUN_146bb27b0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  uVar2 = FUN_1448eb174(param_2,8,0);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar4;
        if (*(int *)(lVar1 + 4 + lVar5 * 0x14) == param_2[1] &&
            *(int *)(lVar1 + lVar5 * 0x14) == *param_2) {
          return 1;
        }
        iVar4 = *(int *)(lVar1 + lVar5 * 0x14 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 146bb283c FUN_146bb283c body=9 status=ok
// SIG undefined FUN_146bb283c(void)

void FUN_146bb283c(longlong param_1)

{
  FUN_146bb26b4(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 146bb2846 FUN_146bb2846 body=120 status=ok
// SIG undefined FUN_146bb2846(void)

void FUN_146bb2846(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 != '\0') {
    local_28 = *param_2;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    FUN_146bb26b4(uVar1,&local_28);
    FUN_146bb27b0(uVar1,&local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_146bb27b0(*(undefined8 *)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 146bb28ca FUN_146bb28ca body=8 status=ok
// SIG undefined FUN_146bb28ca(void)

undefined8 FUN_146bb28ca(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x61));
}



// FUNCTION 146bb28d2 FUN_146bb28d2 body=114 status=ok
// SIG undefined FUN_146bb28d2(void)

uint FUN_146bb28d2(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar1 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xa8);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 0x10) == param_2) {
          if ((uint *)(lVar1 + 4) == (uint *)0x0 || lVar1 == 0) {
            return param_2;
          }
          return *(uint *)(lVar1 + 4);
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return param_2;
}



// FUNCTION 146bb2944 FUN_146bb2944 body=1057 status=ok
// SIG undefined FUN_146bb2944(void)

undefined8
FUN_146bb2944(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switch(param_2) {
  case 0:
    local_48 = (undefined8 *)0x0;
    uStack_40 = CONCAT44(uStack_40._4_4_,6);
    FUN_1405b70fe(&local_48,6,0);
    *local_48 = 0;
    local_48[1] = 0x3ff0000000000000;
    local_48[2] = 0x3fe3c6ef372fe950;
    local_48[3] = 0;
    local_48[4] = 0x3ff0000000000000;
    local_48[5] = 0xbfe3c6ef372fe950;
    local_48[6] = 0x3ff0000000000000;
    local_48[7] = 0x3fe3c6ef372fe950;
    local_48[8] = 0;
    local_48[9] = 0x3ff0000000000000;
    local_48[10] = 0xbfe3c6ef372fe950;
    local_48[0xb] = 0;
    local_48[0xc] = 0x3fe3c6ef372fe950;
    local_48[0xd] = 0;
    local_48[0xe] = 0x3ff0000000000000;
    local_48[0xf] = 0x3fe3c6ef372fe950;
    local_48[0x10] = 0;
    local_48[0x11] = 0xbff0000000000000;
    break;
  case 1:
    local_48 = (undefined8 *)0x0;
    uStack_40 = CONCAT44(uStack_40._4_4_,7);
    FUN_1405b70fe(&local_48,7,0);
    *local_48 = 0x3ffbb67ae8584caa;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0x3ffbb67ae8584caa;
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    local_48[8] = 0x3ffbb67ae8584caa;
    local_48[9] = 0x3ff0000000000000;
    local_48[10] = 0x3ff0000000000000;
    local_48[0xb] = 0x3ff0000000000000;
    local_48[0xc] = 0x3ff0000000000000;
    local_48[0xd] = 0x3ff0000000000000;
    local_48[0xe] = 0xbff0000000000000;
    local_48[0xf] = 0x3ff0000000000000;
    local_48[0x10] = 0xbff0000000000000;
    local_48[0x11] = 0x3ff0000000000000;
    local_48[0x12] = 0x3ff0000000000000;
    local_48[0x13] = 0xbff0000000000000;
    local_48[0x14] = 0xbff0000000000000;
    break;
  case 2:
    local_48 = (undefined8 *)0x0;
    uStack_40 = CONCAT44(uStack_40._4_4_,10);
    FUN_1405b70fe(&local_48,10,0);
    *local_48 = 0;
    local_48[1] = 0x3fe3c6ef372fe950;
    local_48[2] = 0x3ff9e3779b97f4a8;
    local_48[3] = 0;
    local_48[4] = 0x3fe3c6ef372fe950;
    local_48[5] = 0xbff9e3779b97f4a8;
    local_48[6] = 0x3fe3c6ef372fe950;
    local_48[7] = 0x3ff9e3779b97f4a8;
    local_48[8] = 0;
    local_48[9] = 0x3fe3c6ef372fe950;
    local_48[10] = 0xbff9e3779b97f4a8;
    local_48[0xb] = 0;
    local_48[0xc] = 0x3ff9e3779b97f4a8;
    local_48[0xd] = 0;
    local_48[0xe] = 0x3fe3c6ef372fe950;
    local_48[0xf] = 0x3ff9e3779b97f4a8;
    local_48[0x10] = 0;
    local_48[0x11] = 0xbfe3c6ef372fe950;
    local_48[0x12] = 0x3ff0000000000000;
    local_48[0x13] = 0x3ff0000000000000;
    local_48[0x14] = 0x3ff0000000000000;
    local_48[0x15] = 0x3ff0000000000000;
    local_48[0x16] = 0x3ff0000000000000;
    local_48[0x17] = 0xbff0000000000000;
    local_48[0x18] = 0x3ff0000000000000;
    local_48[0x19] = 0xbff0000000000000;
    local_48[0x1a] = 0x3ff0000000000000;
    local_48[0x1b] = 0x3ff0000000000000;
    local_48[0x1c] = 0xbff0000000000000;
    local_48[0x1d] = 0xbff0000000000000;
    break;
  case 3:
    local_48 = (undefined8 *)0x0;
    uStack_40 = CONCAT44(uStack_40._4_4_,0xd);
    FUN_1405b70fe(&local_48,0xd,0);
    *local_48 = 0x3ffbb67ae8584caa;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0x3ffbb67ae8584caa;
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    local_48[8] = 0x3ffbb67ae8584caa;
    local_48[9] = 0x3ff0000000000000;
    local_48[10] = 0x3ff0000000000000;
    local_48[0xb] = 0x3ff0000000000000;
    local_48[0xc] = 0x3ff0000000000000;
    local_48[0xd] = 0x3ff0000000000000;
    local_48[0xe] = 0xbff0000000000000;
    local_48[0xf] = 0x3ff0000000000000;
    local_48[0x10] = 0xbff0000000000000;
    local_48[0x11] = 0x3ff0000000000000;
    local_48[0x12] = 0x3ff0000000000000;
    local_48[0x13] = 0xbff0000000000000;
    local_48[0x14] = 0xbff0000000000000;
    local_48[0x15] = 0x3ff3988e1409212e;
    local_48[0x16] = 0x3ff3988e1409212e;
    local_48[0x17] = 0;
    local_48[0x18] = 0x3ff3988e1409212e;
    local_48[0x19] = 0xbff3988e1409212e;
    local_48[0x1a] = 0;
    local_48[0x1b] = 0x3ff3988e1409212e;
    local_48[0x1c] = 0;
    local_48[0x1d] = 0x3ff3988e1409212e;
    local_48[0x1e] = 0x3ff3988e1409212e;
    local_48[0x1f] = 0;
    local_48[0x20] = 0xbff3988e1409212e;
    local_48[0x21] = 0;
    local_48[0x22] = 0x3ff3988e1409212e;
    local_48[0x23] = 0x3ff3988e1409212e;
    local_48[0x24] = 0;
    local_48[0x25] = 0x3ff3988e1409212e;
    local_48[0x26] = 0xbff3988e1409212e;
    break;
  default:
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
  }
  local_58 = *param_4;
  local_50 = param_4[1];
  FUN_1429626ba(param_1,&local_48,param_3);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bb2d66 FUN_146bb2d66 body=148 status=ok
// SIG undefined FUN_146bb2d66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146bb2d66(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_278 [32];
  undefined1 *puStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  undefined1 auStack_1b8 [128];
  undefined1 auStack_138 [96];
  undefined1 auStack_d8 [64];
  double adStack_98 [5];
  ulonglong uStack_70;
  
  dVar7 = (param_2[1] - param_3[1]) * (*param_1 - *param_3);
  dVar6 = (*param_2 - *param_3) * (param_1[1] - param_3[1]);
  if (dVar7 <= 0.0) {
    if (0.0 <= dVar7) {
      return;
    }
    if (0.0 <= dVar6) {
      return;
    }
    dVar8 = -dVar7 - dVar6;
  }
  else {
    if (dVar6 <= 0.0) {
      return;
    }
    dVar8 = dVar7 + dVar6;
  }
  if ((DAT_14c992038 * dVar8 <= dVar7 - dVar6) || (DAT_14c992038 * dVar8 <= -(dVar7 - dVar6))) {
    return;
  }
  uStack_70 = DAT_14c707940 ^ (ulonglong)auStack_278;
  dStack_1f8 = *param_1 - *param_3;
  dStack_208 = *param_2 - *param_3;
  dStack_200 = param_1[1] - param_3[1];
  dStack_210 = param_2[1] - param_3[1];
  dStack_1f0 = dStack_1f8 * dStack_210;
  dVar6 = DAT_14c992028 * dStack_1f8 - (DAT_14c992028 * dStack_1f8 - dStack_1f8);
  dVar10 = DAT_14c992028 * dStack_210 - (DAT_14c992028 * dStack_210 - dStack_210);
  dStack_1e0 = dStack_200 * dStack_208;
  dVar7 = DAT_14c992028 * dStack_200 - (DAT_14c992028 * dStack_200 - dStack_200);
  dVar6 = (dStack_210 - dVar10) * (dStack_1f8 - dVar6) -
          (((dStack_1f0 - dVar6 * dVar10) - dVar10 * (dStack_1f8 - dVar6)) -
          dVar6 * (dStack_210 - dVar10));
  dStack_248 = DAT_14c992028 * dStack_208;
  dStack_238 = dStack_248 - dStack_208;
  dVar10 = dStack_248 - dStack_238;
  dVar10 = (dStack_208 - dVar10) * (dStack_200 - dVar7) -
           (((dStack_1e0 - dVar7 * dVar10) - dVar10 * (dStack_200 - dVar7)) -
           dVar7 * (dStack_208 - dVar10));
  dVar7 = dVar6 - dVar10;
  dVar6 = (dVar6 - (dVar7 + (dVar6 - dVar7))) + ((dVar6 - dVar7) - dVar10);
  adStack_98[0] = dVar6;
  dStack_230 = dStack_1f0 + dVar7;
  dVar7 = (dStack_1f0 - (dStack_230 - (dStack_230 - dStack_1f0))) +
          (dVar7 - (dStack_230 - dStack_1f0));
  dStack_240 = dVar7 - dStack_1e0;
  adStack_98[1] =
       (dVar7 - (dStack_240 + (dVar7 - dStack_240))) + ((dVar7 - dStack_240) - dStack_1e0);
  dStack_1e8 = dStack_230 + dStack_240;
  dStack_250 = dStack_1e8 - dStack_230;
  adStack_98[2] = (dStack_230 - (dStack_1e8 - dStack_250)) + (dStack_240 - dStack_250);
  adStack_98[3] = dStack_1e8;
  lVar5 = 1;
  do {
    dVar6 = dVar6 + adStack_98[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  if ((dVar6 < DAT_14c992040 * dVar8) && (-dVar6 < DAT_14c992040 * dVar8)) {
    dVar2 = (*param_1 - (dStack_1f8 + (*param_1 - dStack_1f8))) +
            ((*param_1 - dStack_1f8) - *param_3);
    dVar7 = (*param_2 - (dStack_208 + (*param_2 - dStack_208))) +
            ((*param_2 - dStack_208) - *param_3);
    dVar1 = (param_1[1] - (dStack_200 + (param_1[1] - dStack_200))) +
            ((param_1[1] - dStack_200) - param_3[1]);
    dStack_250 = param_2[1] - dStack_210;
    dVar10 = (param_2[1] - (dStack_210 + dStack_250)) + (dStack_250 - param_3[1]);
    if ((((dVar2 != 0.0) ||
         ((((NAN(dVar2) || (dVar1 != 0.0)) || (NAN(dVar1))) || ((dVar7 != 0.0 || (NAN(dVar7)))))))
        || (dVar10 != 0.0)) || (NAN(dVar10))) {
      dVar8 = dVar8 * _DAT_14c992048 +
              (double)(~-(ulonglong)(0.0 <= dVar6) & (ulonglong)-dVar6 |
                      -(ulonglong)(0.0 <= dVar6) & (ulonglong)dVar6) * _DAT_14c992030;
      dVar6 = ((dStack_210 * dVar2 + dStack_1f8 * dVar10) -
              (dStack_208 * dVar1 + dStack_200 * dVar7)) + dVar6;
      if ((dVar6 < dVar8) && (-dVar6 < dVar8)) {
        dStack_228 = dStack_210 * dVar2;
        dVar6 = DAT_14c992028 * dVar2 - (DAT_14c992028 * dVar2 - dVar2);
        dVar8 = DAT_14c992028 * dStack_210 - (DAT_14c992028 * dStack_210 - dStack_210);
        dVar6 = (dStack_210 - dVar8) * (dVar2 - dVar6) -
                (((dStack_228 - dVar6 * dVar8) - dVar8 * (dVar2 - dVar6)) -
                dVar6 * (dStack_210 - dVar8));
        dStack_220 = dStack_208 * dVar1;
        dVar8 = DAT_14c992028 * dVar1 - (DAT_14c992028 * dVar1 - dVar1);
        dStack_248 = DAT_14c992028 * dStack_208;
        dStack_238 = dStack_248 - dStack_208;
        dVar9 = dStack_248 - dStack_238;
        dVar9 = (dStack_208 - dVar9) * (dVar1 - dVar8) -
                (((dStack_220 - dVar8 * dVar9) - dVar9 * (dVar1 - dVar8)) -
                dVar8 * (dStack_208 - dVar9));
        dVar8 = dVar6 - dVar9;
        dStack_1d8 = (dVar6 - (dVar8 + (dVar6 - dVar8))) + ((dVar6 - dVar8) - dVar9);
        dStack_230 = dStack_228 + dVar8;
        dVar6 = (dStack_228 - (dStack_230 - (dStack_230 - dStack_228))) +
                (dVar8 - (dStack_230 - dStack_228));
        dStack_240 = dVar6 - dStack_220;
        dStack_1d0 = (dVar6 - (dStack_240 + (dVar6 - dStack_240))) +
                     ((dVar6 - dStack_240) - dStack_220);
        dStack_218 = dStack_230 + dStack_240;
        dStack_250 = dStack_218 - dStack_230;
        dStack_1c8 = (dStack_230 - (dStack_218 - dStack_250)) + (dStack_240 - dStack_250);
        puStack_258 = auStack_d8;
        dStack_1c0 = dStack_218;
        uVar3 = FUN_146bb7cdf(4,adStack_98,4,&dStack_1d8);
        dStack_228 = dStack_1f8 * dVar10;
        dVar6 = DAT_14c992028 * dStack_1f8 - (DAT_14c992028 * dStack_1f8 - dStack_1f8);
        dVar8 = DAT_14c992028 * dVar10 - (DAT_14c992028 * dVar10 - dVar10);
        dVar6 = (dVar10 - dVar8) * (dStack_1f8 - dVar6) -
                (((dStack_228 - dVar6 * dVar8) - dVar8 * (dStack_1f8 - dVar6)) -
                dVar6 * (dVar10 - dVar8));
        dStack_220 = dStack_200 * dVar7;
        dVar8 = DAT_14c992028 * dStack_200 - (DAT_14c992028 * dStack_200 - dStack_200);
        dStack_248 = DAT_14c992028 * dVar7;
        dStack_238 = dStack_248 - dVar7;
        dVar9 = dStack_248 - dStack_238;
        dVar9 = (dVar7 - dVar9) * (dStack_200 - dVar8) -
                (((dStack_220 - dVar8 * dVar9) - dVar9 * (dStack_200 - dVar8)) -
                dVar8 * (dVar7 - dVar9));
        dVar8 = dVar6 - dVar9;
        dStack_1d8 = (dVar6 - (dVar8 + (dVar6 - dVar8))) + ((dVar6 - dVar8) - dVar9);
        dStack_230 = dStack_228 + dVar8;
        dVar6 = (dStack_228 - (dStack_230 - (dStack_230 - dStack_228))) +
                (dVar8 - (dStack_230 - dStack_228));
        dStack_240 = dVar6 - dStack_220;
        dStack_1d0 = (dVar6 - (dStack_240 + (dVar6 - dStack_240))) +
                     ((dVar6 - dStack_240) - dStack_220);
        dStack_218 = dStack_230 + dStack_240;
        dStack_250 = dStack_218 - dStack_230;
        dStack_1c8 = (dStack_230 - (dStack_218 - dStack_250)) + (dStack_240 - dStack_250);
        puStack_258 = auStack_138;
        dStack_1c0 = dStack_218;
        uVar3 = FUN_146bb7cdf(uVar3,auStack_d8,4,&dStack_1d8);
        dStack_228 = dVar2 * dVar10;
        dVar6 = DAT_14c992028 * dVar2 - (DAT_14c992028 * dVar2 - dVar2);
        dVar8 = DAT_14c992028 * dVar10 - (DAT_14c992028 * dVar10 - dVar10);
        dVar8 = (dVar10 - dVar8) * (dVar2 - dVar6) -
                (((dStack_228 - dVar6 * dVar8) - dVar8 * (dVar2 - dVar6)) - dVar6 * (dVar10 - dVar8)
                );
        dStack_220 = dVar7 * dVar1;
        dVar6 = DAT_14c992028 * dVar1 - (DAT_14c992028 * dVar1 - dVar1);
        dStack_248 = DAT_14c992028 * dVar7;
        dStack_238 = dStack_248 - dVar7;
        dVar10 = dStack_248 - dStack_238;
        dVar6 = (dVar7 - dVar10) * (dVar1 - dVar6) -
                (((dStack_220 - dVar6 * dVar10) - dVar10 * (dVar1 - dVar6)) -
                dVar6 * (dVar7 - dVar10));
        dVar7 = dVar8 - dVar6;
        dStack_1d8 = (dVar8 - (dVar7 + (dVar8 - dVar7))) + ((dVar8 - dVar7) - dVar6);
        dStack_230 = dStack_228 + dVar7;
        dVar6 = (dStack_228 - (dStack_230 - (dStack_230 - dStack_228))) +
                (dVar7 - (dStack_230 - dStack_228));
        dStack_240 = dVar6 - dStack_220;
        dStack_1d0 = (dVar6 - (dStack_240 + (dVar6 - dStack_240))) +
                     ((dVar6 - dStack_240) - dStack_220);
        dStack_218 = dStack_230 + dStack_240;
        dStack_250 = dStack_218 - dStack_230;
        dStack_1c8 = (dStack_230 - (dStack_218 - dStack_250)) + (dStack_240 - dStack_250);
        puStack_258 = auStack_1b8;
        dStack_1c0 = dStack_218;
        iVar4 = FUN_146bb7cdf(uVar3,auStack_138,4,&dStack_1d8);
        dVar6 = *(double *)(auStack_1b8 + (longlong)iVar4 * 8 + -8);
      }
    }
  }
  if ((uStack_70 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar6);
}



// FUNCTION 146bb2dfa FUN_146bb2dfa body=673 status=ok
// SIG undefined FUN_146bb2dfa(void)

void FUN_146bb2dfa(double *param_1,double *param_2,double *param_3,double *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  
  dVar10 = *param_4;
  dVar13 = param_4[1];
  dVar12 = param_4[2];
  dVar18 = param_1[2] - dVar12;
  dVar15 = param_2[2] - dVar12;
  dVar12 = param_3[2] - dVar12;
  dVar16 = (*param_3 - dVar10) * (param_1[1] - dVar13);
  dVar11 = (param_1[1] - dVar13) * (*param_2 - dVar10);
  dVar19 = (*param_2 - dVar10) * (param_3[1] - dVar13);
  dVar17 = (*param_3 - dVar10) * (param_2[1] - dVar13);
  dVar14 = (param_3[1] - dVar13) * (*param_1 - dVar10);
  dVar13 = (param_2[1] - dVar13) * (*param_1 - dVar10);
  dVar10 = (dVar13 - dVar11) * dVar12 + (dVar19 - dVar17) * dVar18 + (dVar16 - dVar14) * dVar15;
  uVar1 = -(ulonglong)(-dVar19 <= dVar19);
  uVar2 = -(ulonglong)(-dVar17 <= dVar17);
  uVar3 = -(ulonglong)(-dVar18 <= dVar18);
  uVar4 = -(ulonglong)(-dVar16 <= dVar16);
  uVar5 = -(ulonglong)(-dVar14 <= dVar14);
  uVar6 = -(ulonglong)(-dVar15 <= dVar15);
  uVar7 = -(ulonglong)(-dVar13 <= dVar13);
  uVar8 = -(ulonglong)(-dVar11 <= dVar11);
  uVar9 = -(ulonglong)(-dVar12 <= dVar12);
  dVar13 = DAT_14c992050 *
           ((double)(~uVar9 & (ulonglong)-dVar12 | (ulonglong)dVar12 & uVar9) *
            ((double)(~uVar8 & (ulonglong)-dVar11 | (ulonglong)dVar11 & uVar8) +
            (double)(~uVar7 & (ulonglong)-dVar13 | (ulonglong)dVar13 & uVar7)) +
           (double)(~uVar3 & (ulonglong)-dVar18 | (ulonglong)dVar18 & uVar3) *
           ((double)(~uVar2 & (ulonglong)-dVar17 | (ulonglong)dVar17 & uVar2) +
           (double)(~uVar1 & (ulonglong)-dVar19 | (ulonglong)dVar19 & uVar1)) +
           (double)(~uVar6 & (ulonglong)-dVar15 | (ulonglong)dVar15 & uVar6) *
           ((double)(~uVar5 & (ulonglong)-dVar14 | (ulonglong)dVar14 & uVar5) +
           (double)(~uVar4 & (ulonglong)-dVar16 | (ulonglong)dVar16 & uVar4)));
  if ((dVar10 <= dVar13) && (-dVar10 <= dVar13)) {
    FUN_146bb8fdd();
  }
  return;
}



// FUNCTION 146bb309b FUN_146bb309b body=661 status=ok
// SIG undefined FUN_146bb309b(void)

void FUN_146bb309b(double *param_1,double *param_2,double *param_3,double *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  
  dVar10 = *param_1 - *param_3;
  dVar19 = *param_2 - *param_3;
  dVar11 = param_1[1] - param_3[1];
  dVar13 = param_2[1] - param_3[1];
  dVar18 = param_1[2] - param_3[2];
  dVar14 = param_2[2] - param_3[2];
  dVar12 = param_4[2];
  dVar16 = *param_4 * dVar11;
  dVar11 = dVar11 * dVar19;
  dVar19 = dVar19 * param_4[1];
  dVar17 = *param_4 * dVar13;
  dVar15 = param_4[1] * dVar10;
  dVar13 = dVar13 * dVar10;
  dVar10 = (dVar13 - dVar11) * dVar12 + (dVar19 - dVar17) * dVar18 + (dVar16 - dVar15) * dVar14;
  uVar1 = -(ulonglong)(-dVar19 <= dVar19);
  uVar2 = -(ulonglong)(-dVar17 <= dVar17);
  uVar3 = -(ulonglong)(-dVar18 <= dVar18);
  uVar4 = -(ulonglong)(-dVar16 <= dVar16);
  uVar5 = -(ulonglong)(-dVar15 <= dVar15);
  uVar6 = -(ulonglong)(-dVar14 <= dVar14);
  uVar7 = -(ulonglong)(-dVar13 <= dVar13);
  uVar8 = -(ulonglong)(-dVar11 <= dVar11);
  uVar9 = -(ulonglong)(-dVar12 <= dVar12);
  dVar12 = DAT_14c992050 *
           ((double)(uVar9 & (ulonglong)dVar12 | ~uVar9 & (ulonglong)-dVar12) *
            ((double)(~uVar8 & (ulonglong)-dVar11 | (ulonglong)dVar11 & uVar8) +
            (double)(~uVar7 & (ulonglong)-dVar13 | (ulonglong)dVar13 & uVar7)) +
           (double)(~uVar3 & (ulonglong)-dVar18 | (ulonglong)dVar18 & uVar3) *
           ((double)(~uVar2 & (ulonglong)-dVar17 | (ulonglong)dVar17 & uVar2) +
           (double)(~uVar1 & (ulonglong)-dVar19 | (ulonglong)dVar19 & uVar1)) +
           (double)(~uVar6 & (ulonglong)-dVar14 | (ulonglong)dVar14 & uVar6) *
           ((double)(~uVar5 & (ulonglong)-dVar15 | (ulonglong)dVar15 & uVar5) +
           (double)(~uVar4 & (ulonglong)-dVar16 | (ulonglong)dVar16 & uVar4)));
  if ((dVar10 <= dVar12) && (-dVar10 <= dVar12)) {
    FUN_146bbdacb();
  }
  return;
}



// FUNCTION 146bb3330 FUN_146bb3330 body=602 status=ok
// SIG undefined FUN_146bb3330(void)

void FUN_146bb3330(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
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
  
  dVar11 = *param_4;
  dVar8 = param_4[1];
  dVar12 = *param_1 - dVar11;
  dVar15 = *param_2 - dVar11;
  dVar11 = *param_3 - dVar11;
  dVar9 = param_1[1] - dVar8;
  dVar13 = param_2[1] - dVar8;
  dVar8 = param_3[1] - dVar8;
  dVar14 = dVar11 * dVar9;
  dVar10 = dVar9 * dVar15;
  dVar16 = dVar15 * dVar8;
  dVar17 = dVar11 * dVar13;
  dVar9 = dVar12 * dVar12 + dVar9 * dVar9;
  dVar1 = dVar12 * dVar8;
  dVar12 = dVar12 * dVar13;
  dVar13 = dVar15 * dVar15 + dVar13 * dVar13;
  dVar8 = dVar11 * dVar11 + dVar8 * dVar8;
  dVar11 = (dVar12 - dVar10) * dVar8 + (dVar16 - dVar17) * dVar9 + (dVar14 - dVar1) * dVar13;
  uVar2 = -(ulonglong)(-dVar16 <= dVar16);
  uVar3 = -(ulonglong)(-dVar17 <= dVar17);
  uVar4 = -(ulonglong)(-dVar14 <= dVar14);
  uVar5 = -(ulonglong)(-dVar1 <= dVar1);
  uVar6 = -(ulonglong)(-dVar12 <= dVar12);
  uVar7 = -(ulonglong)(-dVar10 <= dVar10);
  dVar8 = DAT_14c992068 *
          (((double)(~uVar7 & (ulonglong)-dVar10 | (ulonglong)dVar10 & uVar7) +
           (double)(~uVar6 & (ulonglong)-dVar12 | (ulonglong)dVar12 & uVar6)) * dVar8 +
          ((double)(~uVar3 & (ulonglong)-dVar17 | (ulonglong)dVar17 & uVar3) +
          (double)(~uVar2 & (ulonglong)-dVar16 | (ulonglong)dVar16 & uVar2)) * dVar9 +
          ((double)(~uVar5 & (ulonglong)-dVar1 | (ulonglong)dVar1 & uVar5) +
          (double)(~uVar4 & (ulonglong)-dVar14 | (ulonglong)dVar14 & uVar4)) * dVar13);
  if ((dVar11 <= dVar8) && (-dVar11 <= dVar8)) {
    FUN_146bc0395();
  }
  return;
}



// FUNCTION 146bb358a FUN_146bb358a body=137 status=ok
// SIG undefined FUN_146bb358a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146bb358a(float *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_188 [36];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_118 [64];
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [32];
  float afStack_88 [6];
  ulonglong uStack_70;
  
  fVar5 = (param_2[1] - param_3[1]) * (*param_1 - *param_3);
  fVar4 = (*param_2 - *param_3) * (param_1[1] - param_3[1]);
  if (fVar5 <= 0.0) {
    if (0.0 <= fVar5) {
      return;
    }
    if (0.0 <= fVar4) {
      return;
    }
    fVar6 = -fVar5 - fVar4;
  }
  else {
    if (fVar4 <= 0.0) {
      return;
    }
    fVar6 = fVar5 + fVar4;
  }
  if ((DAT_14c992018 * fVar6 <= fVar5 - fVar4) || (DAT_14c992018 * fVar6 <= -(fVar5 - fVar4))) {
    return;
  }
  uStack_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  fStack_138 = *param_1 - *param_3;
  fStack_140 = *param_2 - *param_3;
  fStack_13c = param_1[1] - param_3[1];
  fStack_144 = param_2[1] - param_3[1];
  fStack_134 = fStack_138 * fStack_144;
  fVar4 = DAT_14c992010 * fStack_138 - (DAT_14c992010 * fStack_138 - fStack_138);
  fVar8 = DAT_14c992010 * fStack_144 - (DAT_14c992010 * fStack_144 - fStack_144);
  fStack_12c = fStack_13c * fStack_140;
  fVar5 = DAT_14c992010 * fStack_13c - (DAT_14c992010 * fStack_13c - fStack_13c);
  fVar4 = (fStack_144 - fVar8) * (fStack_138 - fVar4) -
          (((fStack_134 - fVar4 * fVar8) - fVar8 * (fStack_138 - fVar4)) -
          fVar4 * (fStack_144 - fVar8));
  fStack_160 = DAT_14c992010 * fStack_140;
  fStack_158 = fStack_160 - fStack_140;
  fVar8 = fStack_160 - fStack_158;
  fVar8 = (fStack_140 - fVar8) * (fStack_13c - fVar5) -
          (((fStack_12c - fVar5 * fVar8) - fVar8 * (fStack_13c - fVar5)) -
          fVar5 * (fStack_140 - fVar8));
  fVar5 = fVar4 - fVar8;
  fVar4 = (fVar4 - (fVar5 + (fVar4 - fVar5))) + ((fVar4 - fVar5) - fVar8);
  afStack_88[0] = fVar4;
  fStack_154 = fStack_134 + fVar5;
  fVar5 = (fStack_134 - (fStack_154 - (fStack_154 - fStack_134))) +
          (fVar5 - (fStack_154 - fStack_134));
  fStack_15c = fVar5 - fStack_12c;
  afStack_88[1] =
       (fVar5 - (fStack_15c + (fVar5 - fStack_15c))) + ((fVar5 - fStack_15c) - fStack_12c);
  fStack_130 = fStack_154 + fStack_15c;
  fStack_164 = fStack_130 - fStack_154;
  afStack_88[2] = (fStack_154 - (fStack_130 - fStack_164)) + (fStack_15c - fStack_164);
  afStack_88[3] = fStack_130;
  lVar3 = 1;
  do {
    fVar4 = fVar4 + afStack_88[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  if ((fVar4 < DAT_14c99201c * fVar6) && (-fVar4 < DAT_14c99201c * fVar6)) {
    fVar10 = (*param_1 - (fStack_138 + (*param_1 - fStack_138))) +
             ((*param_1 - fStack_138) - *param_3);
    fVar5 = (*param_2 - (fStack_140 + (*param_2 - fStack_140))) +
            ((*param_2 - fStack_140) - *param_3);
    fVar9 = (param_1[1] - (fStack_13c + (param_1[1] - fStack_13c))) +
            ((param_1[1] - fStack_13c) - param_3[1]);
    fStack_164 = param_2[1] - fStack_144;
    fVar8 = (param_2[1] - (fStack_144 + fStack_164)) + (fStack_164 - param_3[1]);
    if ((((fVar10 != 0.0) ||
         ((((NAN(fVar10) || (fVar9 != 0.0)) || (NAN(fVar9))) || ((fVar5 != 0.0 || (NAN(fVar5)))))))
        || (fVar8 != 0.0)) || (NAN(fVar8))) {
      fVar6 = fVar6 * _DAT_14c992020 +
              (float)(~-(uint)(0.0 <= fVar4) & (uint)-fVar4 | -(uint)(0.0 <= fVar4) & (uint)fVar4) *
              _DAT_14c992014;
      fVar4 = ((fStack_144 * fVar10 + fStack_138 * fVar8) -
              (fStack_140 * fVar9 + fStack_13c * fVar5)) + fVar4;
      if ((fVar4 < fVar6) && (-fVar4 < fVar6)) {
        fStack_150 = fStack_144 * fVar10;
        fVar4 = DAT_14c992010 * fVar10 - (DAT_14c992010 * fVar10 - fVar10);
        fVar6 = DAT_14c992010 * fStack_144 - (DAT_14c992010 * fStack_144 - fStack_144);
        fVar4 = (fStack_144 - fVar6) * (fVar10 - fVar4) -
                (((fStack_150 - fVar4 * fVar6) - fVar6 * (fVar10 - fVar4)) -
                fVar4 * (fStack_144 - fVar6));
        fStack_14c = fStack_140 * fVar9;
        fVar6 = DAT_14c992010 * fVar9 - (DAT_14c992010 * fVar9 - fVar9);
        fStack_160 = DAT_14c992010 * fStack_140;
        fStack_158 = fStack_160 - fStack_140;
        fVar7 = fStack_160 - fStack_158;
        fVar7 = (fStack_140 - fVar7) * (fVar9 - fVar6) -
                (((fStack_14c - fVar6 * fVar7) - fVar7 * (fVar9 - fVar6)) -
                fVar6 * (fStack_140 - fVar7));
        fVar6 = fVar4 - fVar7;
        fStack_128 = (fVar4 - (fVar6 + (fVar4 - fVar6))) + ((fVar4 - fVar6) - fVar7);
        fStack_154 = fStack_150 + fVar6;
        fVar4 = (fStack_150 - (fStack_154 - (fStack_154 - fStack_150))) +
                (fVar6 - (fStack_154 - fStack_150));
        fStack_15c = fVar4 - fStack_14c;
        fStack_124 = (fVar4 - (fStack_15c + (fVar4 - fStack_15c))) +
                     ((fVar4 - fStack_15c) - fStack_14c);
        fStack_148 = fStack_154 + fStack_15c;
        fStack_164 = fStack_148 - fStack_154;
        fStack_120 = (fStack_154 - (fStack_148 - fStack_164)) + (fStack_15c - fStack_164);
        fStack_11c = fStack_148;
        uVar1 = FUN_146bb6cd0(4,afStack_88,&fStack_128,auStack_a8);
        fStack_150 = fStack_138 * fVar8;
        fVar4 = DAT_14c992010 * fStack_138 - (DAT_14c992010 * fStack_138 - fStack_138);
        fVar6 = DAT_14c992010 * fVar8 - (DAT_14c992010 * fVar8 - fVar8);
        fVar4 = (fVar8 - fVar6) * (fStack_138 - fVar4) -
                (((fStack_150 - fVar4 * fVar6) - fVar6 * (fStack_138 - fVar4)) -
                fVar4 * (fVar8 - fVar6));
        fStack_14c = fStack_13c * fVar5;
        fVar6 = DAT_14c992010 * fStack_13c - (DAT_14c992010 * fStack_13c - fStack_13c);
        fStack_160 = DAT_14c992010 * fVar5;
        fStack_158 = fStack_160 - fVar5;
        fVar7 = fStack_160 - fStack_158;
        fVar7 = (fVar5 - fVar7) * (fStack_13c - fVar6) -
                (((fStack_14c - fVar6 * fVar7) - fVar7 * (fStack_13c - fVar6)) -
                fVar6 * (fVar5 - fVar7));
        fVar6 = fVar4 - fVar7;
        fStack_128 = (fVar4 - (fVar6 + (fVar4 - fVar6))) + ((fVar4 - fVar6) - fVar7);
        fStack_154 = fStack_150 + fVar6;
        fVar4 = (fStack_150 - (fStack_154 - (fStack_154 - fStack_150))) +
                (fVar6 - (fStack_154 - fStack_150));
        fStack_15c = fVar4 - fStack_14c;
        fStack_124 = (fVar4 - (fStack_15c + (fVar4 - fStack_15c))) +
                     ((fVar4 - fStack_15c) - fStack_14c);
        fStack_148 = fStack_154 + fStack_15c;
        fStack_164 = fStack_148 - fStack_154;
        fStack_120 = (fStack_154 - (fStack_148 - fStack_164)) + (fStack_15c - fStack_164);
        fStack_11c = fStack_148;
        uVar1 = FUN_146bb6cd0(uVar1,auStack_a8,&fStack_128,auStack_d8);
        fStack_150 = fVar10 * fVar8;
        fVar4 = DAT_14c992010 * fVar10 - (DAT_14c992010 * fVar10 - fVar10);
        fVar6 = DAT_14c992010 * fVar8 - (DAT_14c992010 * fVar8 - fVar8);
        fVar8 = (fVar8 - fVar6) * (fVar10 - fVar4) -
                (((fStack_150 - fVar4 * fVar6) - fVar6 * (fVar10 - fVar4)) - fVar4 * (fVar8 - fVar6)
                );
        fStack_14c = fVar5 * fVar9;
        fVar4 = DAT_14c992010 * fVar9 - (DAT_14c992010 * fVar9 - fVar9);
        fStack_160 = DAT_14c992010 * fVar5;
        fStack_158 = fStack_160 - fVar5;
        fVar6 = fStack_160 - fStack_158;
        fVar5 = (fVar5 - fVar6) * (fVar9 - fVar4) -
                (((fStack_14c - fVar4 * fVar6) - fVar6 * (fVar9 - fVar4)) - fVar4 * (fVar5 - fVar6))
        ;
        fVar4 = fVar8 - fVar5;
        fStack_128 = (fVar8 - (fVar4 + (fVar8 - fVar4))) + ((fVar8 - fVar4) - fVar5);
        fStack_154 = fStack_150 + fVar4;
        fVar4 = (fStack_150 - (fStack_154 - (fStack_154 - fStack_150))) +
                (fVar4 - (fStack_154 - fStack_150));
        fStack_15c = fVar4 - fStack_14c;
        fStack_124 = (fVar4 - (fStack_15c + (fVar4 - fStack_15c))) +
                     ((fVar4 - fStack_15c) - fStack_14c);
        fStack_148 = fStack_154 + fStack_15c;
        fStack_164 = fStack_148 - fStack_154;
        fStack_120 = (fStack_154 - (fStack_148 - fStack_164)) + (fStack_15c - fStack_164);
        fStack_11c = fStack_148;
        iVar2 = FUN_146bb6cd0(uVar1,auStack_d8,&fStack_128,auStack_118);
        fVar4 = *(float *)(auStack_118 + (longlong)iVar2 * 4 + -4);
      }
    }
  }
  if ((uStack_70 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar4);
}



// FUNCTION 146bb3613 FUN_146bb3613 body=977 status=ok
// SIG undefined FUN_146bb3613(void)

double * FUN_146bb3613(double *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  double *pdVar3;
  double *pdVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  longlong **local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  longlong *local_b0;
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong lStack_80;
  ulonglong local_78;
  undefined4 *local_70;
  undefined1 *local_68;
  undefined4 **local_60;
  undefined1 local_51 [49];
  
  local_51._1_8_ = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar1 = (int)param_2[1];
  if ((longlong)iVar1 < 2) {
    if (iVar1 == 0) {
      uVar6 = 0xffffffff;
      uVar7 = 0xffefffff;
      dVar8 = 1.79769313486232e+308;
      dVar10 = 1.79769313486232e+308;
      dVar9 = -1.79769313486232e+308;
    }
    else {
      pdVar4 = (double *)*param_2;
      pdVar3 = pdVar4 + (longlong)iVar1 * 2;
      uVar15 = 0xffffffff;
      uVar16 = 0x7fefffff;
      dVar11 = -1.79769313486232e+308;
      dVar12 = 1.79769313486232e+308;
      uVar13 = 0xffffffff;
      uVar14 = 0xffefffff;
      do {
        dVar10 = *pdVar4;
        dVar9 = pdVar4[1];
        dVar8 = dVar10;
        if ((double)CONCAT44(uVar16,uVar15) <= dVar10) {
          dVar8 = (double)CONCAT44(uVar16,uVar15);
        }
        uVar6 = SUB84(dVar10,0);
        uVar7 = (int)((ulonglong)dVar10 >> 0x20);
        if (dVar10 <= (double)CONCAT44(uVar14,uVar13)) {
          uVar6 = uVar13;
          uVar7 = uVar14;
        }
        dVar10 = dVar9;
        if (dVar12 <= dVar9) {
          dVar10 = dVar12;
        }
        if (dVar9 <= dVar11) {
          dVar9 = dVar11;
        }
        pdVar4 = pdVar4 + 2;
        uVar15 = SUB84(dVar8,0);
        uVar16 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar11 = dVar9;
        dVar12 = dVar10;
        uVar13 = uVar6;
        uVar14 = uVar7;
      } while (pdVar4 != pdVar3);
    }
    *param_1 = (dVar8 + (double)CONCAT44(uVar7,uVar6)) * 0.5;
    param_1[1] = (dVar10 + dVar9) * 0.5;
    param_1[2] = 1.0;
    param_1[3] = 0.0;
    param_1[4] = ((double)CONCAT44(uVar7,uVar6) - dVar8) * 0.5;
    param_1[5] = (dVar9 - dVar10) * 0.5;
  }
  else {
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    local_98 = (undefined4)*param_2;
    uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_90 = (undefined4)param_2[1];
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_70 = &local_98;
    local_b0 = (longlong *)local_51;
    local_b8 = (longlong *)&LAB_146bf38f4;
    local_60 = &local_70;
    local_68 = &LAB_146bf38dc;
    cVar2 = FUN_146ba863e(&local_88,uStack_90,&local_68,&local_b8);
    if (cVar2 == '\0') {
      if ((int)local_88 == 0) {
        dVar9 = ((double *)*param_2)[1];
        *param_1 = *(double *)*param_2;
        param_1[1] = dVar9;
        uVar13 = DAT_14c8463f8._4_4_;
        uVar7 = (undefined4)DAT_14c8463f8;
        uVar6 = DAT_14c8463f0._4_4_;
        *(undefined4 *)(param_1 + 4) = (undefined4)DAT_14c8463f0;
        *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
        *(undefined4 *)(param_1 + 5) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar13;
        param_1[2] = 1.0;
        param_1[3] = 0.0;
      }
      else {
        local_c8 = (undefined4)*param_2;
        uStack_c4 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_c0 = (undefined4)param_2[1];
        uStack_bc = *(undefined4 *)((longlong)param_2 + 0xc);
        FUN_146ba8a3e(&local_88);
        if ((longlong)(int)param_2[1] == 0) {
          dVar9 = -1.79769313486232e+308;
          dVar8 = 1.79769313486232e+308;
        }
        else {
          lVar5 = 0;
          dVar10 = -1.79769313486232e+308;
          dVar11 = 1.79769313486232e+308;
          do {
            dVar9 = (*(double *)(*param_2 + lVar5) - (double)local_b8) * local_a8 +
                    (*(double *)(*param_2 + 8 + lVar5) - (double)local_b0) * dStack_a0;
            dVar8 = dVar9;
            if (dVar11 <= dVar9) {
              dVar8 = dVar11;
            }
            if (dVar9 <= dVar10) {
              dVar9 = dVar10;
            }
            lVar5 = lVar5 + 0x10;
            dVar10 = dVar9;
            dVar11 = dVar8;
          } while ((longlong)(int)param_2[1] * 0x10 != lVar5);
        }
        dVar10 = (dVar8 + dVar9) * 0.5;
        *param_1 = dVar10 * local_a8 + (double)local_b8;
        param_1[1] = dStack_a0 * dVar10 + (double)local_b0;
        param_1[2] = local_a8;
        param_1[3] = dStack_a0;
        param_1[4] = (dVar9 - dVar8) * 0.5;
        param_1[5] = 1e-08;
        dVar9 = param_1[2];
        dVar8 = param_1[3];
        dVar10 = dVar9 * dVar9 + dVar8 * dVar8;
        dVar11 = 1.0;
        if (9.99999993922529e-09 < dVar10) {
          dVar11 = dVar9 * (1.0 / SQRT(dVar10));
        }
        param_1[2] = dVar11;
        param_1[3] = (double)(-(ulonglong)(9.99999993922529e-09 < dVar10) &
                             (ulonglong)(dVar8 * (1.0 / SQRT(dVar10))));
      }
    }
    else {
      local_b8 = &lStack_80;
      local_d8 = *param_3;
      local_d0 = param_3[1];
      local_e8 = &LAB_146bfaef6;
      local_e0 = &local_b8;
      local_b0 = param_2;
      FUN_146bb39e5(param_1,local_78 & 0xffffffff);
    }
    if (lStack_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_51._1_8_ ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bb39e5 FUN_146bb39e5 body=1893 status=ok
// SIG undefined FUN_146bb39e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146bb39e5(double *param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_258 [32];
  double *local_238;
  int local_22c;
  double *local_228;
  double local_220;
  double local_218;
  undefined8 *local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d0;
  double local_1c8;
  undefined4 local_1c0;
  int local_1bc [7];
  undefined1 local_1a0 [16];
  ulonglong local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  int local_150 [2];
  undefined8 *local_148;
  int local_140 [2];
  undefined8 *local_138;
  int local_130 [2];
  undefined8 *local_128;
  double local_120;
  double local_118;
  ulonglong local_110;
  double *local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_210 = param_4;
  local_130[0] = param_2;
  local_128 = param_3;
  if (2 < param_2) {
    local_120 = (double)((ulonglong)local_120 & 0xffffffff00000000);
    local_150[0] = param_2;
    local_148 = param_3;
    local_140[0] = param_2;
    local_138 = param_3;
    (*(code *)*param_3)(local_108,param_3[1]);
    local_160._0_4_ = 1;
    (*(code *)*param_3)(&local_120,param_3[1],&local_160);
    dVar21 = local_118 - (double)local_108[1];
    dVar3 = local_120 - (double)local_108[0];
    dVar17 = dVar3 * dVar3 + dVar21 * dVar21;
    if (0.0 < dVar17) {
      dVar17 = 1.0 / SQRT(dVar17);
      dVar21 = dVar21 * dVar17;
      dVar3 = dVar3 * dVar17;
      uVar2 = DAT_149931e80;
      uVar24 = DAT_149931e80._8_4_;
      uVar25 = DAT_149931e80._12_4_;
      local_120 = (double)((ulonglong)local_120 & 0xffffffff00000000);
      local_228 = param_1;
      (*(code *)*param_3)(local_108,param_3[1],&local_120);
      local_168 = (double)local_108[0] * dVar21 - (double)local_108[1] * dVar3;
      local_22c = param_2;
      local_180 = dVar3;
      local_178 = dVar21;
      iVar10 = FUN_146bb4572(local_140,&local_180,0,&local_160);
      uStack_1e0 = 0;
      local_190 = (ulonglong)dVar21 ^ uVar2;
      uVar12 = (undefined4)local_190;
      uVar6 = local_190 >> 0x20;
      local_1e8 = dVar21;
      local_188 = dVar3;
      uVar11 = FUN_146bb4572(local_140,&local_190,iVar10,&local_158);
      local_1a0._8_4_ = uVar12;
      local_1a0._0_8_ = (ulonglong)dVar3 ^ uVar2;
      local_1a0._12_4_ = (int)uVar6;
      uVar12 = FUN_146bb4572(local_140,local_1a0,uVar11,&local_170);
      dVar17 = local_168;
      dVar21 = local_170;
      local_218 = (double)CONCAT44(local_160._4_4_,(undefined4)local_160);
      local_220 = local_158;
      local_108[0] = (double *)
                     (-(ulonglong)(0.0 <= local_168 + local_158) &
                     (ulonglong)(local_168 + local_158));
      local_120 = (double)(-(ulonglong)(0.0 <= local_170 + local_218) &
                          (ulonglong)(local_170 + local_218));
      uVar18 = (*(code *)*local_210)(local_210[1],&local_120,local_108);
      uVar22 = (undefined4)uVar18;
      uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
      local_1bc[3] = 0;
      local_1c0 = 0;
      local_208._8_4_ = uVar24;
      local_208._0_8_ = (ulonglong)dVar17 ^ uVar2;
      local_208._12_4_ = uVar25;
      local_1f8._8_4_ = uVar24;
      local_1f8._0_8_ = (ulonglong)dVar21 ^ uVar2;
      local_1f8._12_4_ = uVar25;
      iVar14 = 1;
      local_1bc[0] = iVar10;
      local_1bc[1] = uVar11;
      local_1bc[2] = uVar12;
      local_1bc[4] = iVar10;
      local_1bc[5] = uVar11;
      local_1bc[6] = uVar12;
      do {
        iVar16 = local_22c;
        local_120 = (double)CONCAT44(local_120._4_4_,iVar14);
        (*(code *)*param_3)(local_108,param_3[1],&local_120);
        iVar10 = iVar14 + 1;
        iVar13 = 0;
        if (iVar10 < iVar16) {
          iVar13 = iVar10;
        }
        local_110 = CONCAT44(local_110._4_4_,iVar13);
        (*(code *)*param_3)(&local_120,param_3[1],&local_110);
        dVar17 = local_118 - (double)local_108[1];
        dVar21 = local_120 - (double)local_108[0];
        dVar19 = dVar21 * dVar21 + dVar17 * dVar17;
        dVar21 = dVar21 * (1.0 / SQRT(dVar19));
        param_1 = local_228;
        if (dVar19 <= 0.0) goto LAB_146bb408d;
        dVar17 = dVar17 * (1.0 / SQRT(dVar19));
        local_120 = (double)CONCAT44(local_120._4_4_,iVar14);
        (*(code *)*param_3)(local_108,param_3[1],&local_120);
        local_168 = (double)local_108[0] * dVar17 - dVar21 * (double)local_108[1];
        local_108[0] = (double *)&local_160;
        local_108[1] = &local_158;
        local_108[2] = &local_170;
        iVar16 = 0;
        lVar15 = 0;
        dVar20 = dVar17;
        dVar5 = -dVar21;
        do {
          dVar4 = dVar20;
          if (iVar16 < local_1bc[lVar15 + 4] + -1) {
            iVar14 = local_1bc[lVar15];
            iVar16 = local_1bc[lVar15 + 4] + -1;
          }
          lVar1 = lVar15 + 1;
          local_120 = (double)((ulonglong)local_120 & 0xffffffff00000000);
          local_238 = &local_120;
          local_1d0 = -dVar5;
          local_1c8 = dVar4;
          iVar14 = FUN_146bb469e(local_150,&local_1d0,iVar14,local_108[lVar15]);
          dVar9 = local_158;
          dVar8 = local_168;
          dVar7 = local_170;
          local_1bc[lVar15] = iVar14;
          iVar16 = iVar16 + local_120._0_4_;
          local_1bc[lVar15 + 4] = iVar16;
          lVar15 = lVar1;
          dVar20 = -dVar5;
          dVar5 = dVar4;
        } while (lVar1 != 3);
        dVar5 = (double)CONCAT44(local_160._4_4_,(undefined4)local_160);
        local_120 = (double)(-(ulonglong)(0.0 <= local_168 + local_158) &
                            (ulonglong)(local_168 + local_158));
        dVar20 = local_170 + dVar5;
        local_110 = -(ulonglong)(0.0 <= dVar20) & (ulonglong)dVar20;
        dVar20 = (double)(*(code *)*local_210)(local_210[1],&local_110,&local_120);
        if (dVar20 <= (double)CONCAT44(uVar23,uVar22) && (double)CONCAT44(uVar23,uVar22) != dVar20)
        {
          local_1f8._8_4_ = DAT_149931e80._8_4_;
          local_1f8._0_8_ = (ulonglong)dVar7 ^ DAT_149931e80;
          local_1f8._12_4_ = DAT_149931e80._12_4_;
          local_208._8_4_ = DAT_149931e80._8_4_;
          local_208._0_8_ = (ulonglong)dVar8 ^ DAT_149931e80;
          local_208._12_4_ = DAT_149931e80._12_4_;
          local_220 = dVar9;
          uStack_1e0 = 0;
          uVar22 = SUB84(dVar20,0);
          uVar23 = (undefined4)((ulonglong)dVar20 >> 0x20);
          dVar3 = dVar21;
          local_218 = dVar5;
          local_1e8 = (double)(-(ulonglong)(0.0 < dVar19) & (ulonglong)dVar17);
        }
        iVar14 = iVar10;
      } while (iVar10 != local_22c);
      dVar21 = ((double)local_208._0_8_ + local_220) * 0.5;
      dVar17 = ((double)local_1f8._0_8_ + local_218) * 0.5;
      *local_228 = dVar3 * dVar17 - local_1e8 * dVar21;
      local_228[1] = dVar21 * dVar3 + dVar17 * local_1e8;
      local_228[4] = (local_218 - (double)local_1f8._0_8_) * 0.5;
      local_228[5] = (local_220 - (double)local_208._0_8_) * 0.5;
      dVar21 = dVar3 * dVar3 + local_1e8 * local_1e8;
      param_1 = local_228;
      if (dVar21 <= 9.99999993922529e-09) {
        local_228[2] = 1.0;
        local_228[3] = 0.0;
      }
      else {
        dVar21 = 1.0 / SQRT(dVar21);
        local_228[2] = dVar3 * dVar21;
        local_228[3] = local_1e8 * dVar21;
      }
      goto LAB_146bb4095;
    }
  }
LAB_146bb408d:
  FUN_146bb4408(local_130,param_1);
LAB_146bb4095:
  if ((local_f0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb414b FUN_146bb414b body=700 status=ok
// SIG undefined FUN_146bb414b(void)

double * FUN_146bb414b(double *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined1 *local_98;
  longlong **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  longlong **local_70;
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = (int)param_2[1];
  if ((longlong)iVar1 < 3) {
    if (iVar1 == 0) {
      dVar8 = 1.79769313486232e+308;
      dVar5 = -1.79769313486232e+308;
      dVar6 = -1.79769313486232e+308;
      dVar7 = 1.79769313486232e+308;
    }
    else {
      pdVar3 = (double *)*param_2;
      pdVar4 = pdVar3 + (longlong)iVar1 * 2;
      uVar11 = 0xffffffff;
      uVar12 = 0x7fefffff;
      uVar13 = 0xffffffff;
      uVar14 = 0xffefffff;
      dVar9 = -1.79769313486232e+308;
      dVar10 = 1.79769313486232e+308;
      do {
        dVar6 = *pdVar3;
        dVar5 = pdVar3[1];
        dVar7 = dVar6;
        if (dVar10 <= dVar6) {
          dVar7 = dVar10;
        }
        if (dVar6 <= dVar9) {
          dVar6 = dVar9;
        }
        dVar8 = dVar5;
        if ((double)CONCAT44(uVar12,uVar11) <= dVar5) {
          dVar8 = (double)CONCAT44(uVar12,uVar11);
        }
        if (dVar5 <= (double)CONCAT44(uVar14,uVar13)) {
          dVar5 = (double)CONCAT44(uVar14,uVar13);
        }
        pdVar3 = pdVar3 + 2;
        uVar11 = SUB84(dVar8,0);
        uVar12 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uVar13 = SUB84(dVar5,0);
        uVar14 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar9 = dVar6;
        dVar10 = dVar7;
      } while (pdVar3 != pdVar4);
    }
    *param_1 = (dVar6 + dVar7) * 0.5;
    param_1[1] = (dVar5 + dVar8) * 0.5;
    param_1[2] = 1.0;
    param_1[3] = 0.0;
    param_1[4] = (dVar6 - dVar7) * 0.5;
    param_1[5] = (dVar5 - dVar8) * 0.5;
  }
  else {
    local_68 = 0;
    lStack_60 = 0;
    local_58 = 0;
    local_78 = &LAB_146bfaf1a;
    local_a8 = param_2;
    local_70 = &local_a8;
    cVar2 = FUN_146ba81f8();
    if (cVar2 == '\0') {
      if ((longlong)(int)param_2[1] == 0) {
        dVar8 = 1.79769313486232e+308;
        dVar5 = -1.79769313486232e+308;
        dVar6 = -1.79769313486232e+308;
        dVar7 = 1.79769313486232e+308;
      }
      else {
        pdVar3 = (double *)*param_2;
        pdVar4 = pdVar3 + (longlong)(int)param_2[1] * 2;
        uVar11 = 0xffffffff;
        uVar12 = 0x7fefffff;
        uVar13 = 0xffffffff;
        uVar14 = 0xffefffff;
        dVar9 = -1.79769313486232e+308;
        dVar10 = 1.79769313486232e+308;
        do {
          dVar6 = *pdVar3;
          dVar5 = pdVar3[1];
          dVar7 = dVar6;
          if (dVar10 <= dVar6) {
            dVar7 = dVar10;
          }
          if (dVar6 <= dVar9) {
            dVar6 = dVar9;
          }
          dVar8 = dVar5;
          if ((double)CONCAT44(uVar12,uVar11) <= dVar5) {
            dVar8 = (double)CONCAT44(uVar12,uVar11);
          }
          if (dVar5 <= (double)CONCAT44(uVar14,uVar13)) {
            dVar5 = (double)CONCAT44(uVar14,uVar13);
          }
          pdVar3 = pdVar3 + 2;
          uVar11 = SUB84(dVar8,0);
          uVar12 = (undefined4)((ulonglong)dVar8 >> 0x20);
          uVar13 = SUB84(dVar5,0);
          uVar14 = (undefined4)((ulonglong)dVar5 >> 0x20);
          dVar9 = dVar6;
          dVar10 = dVar7;
        } while (pdVar3 != pdVar4);
      }
      *param_1 = (dVar6 + dVar7) * 0.5;
      param_1[1] = (dVar5 + dVar8) * 0.5;
      param_1[2] = 1.0;
      param_1[3] = 0.0;
      param_1[4] = (dVar6 - dVar7) * 0.5;
      param_1[5] = (dVar5 - dVar8) * 0.5;
    }
    else {
      local_a8 = &lStack_60;
      local_88 = *param_3;
      local_80 = param_3[1];
      local_98 = &LAB_146bfaf32;
      local_a0 = param_2;
      local_90 = &local_a8;
      FUN_146bb39e5(param_1,local_58 & 0xffffffff);
    }
    if (lStack_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bb4408 FUN_146bb4408 body=361 status=ok
// SIG undefined FUN_146bb4408(void)

double * FUN_146bb4408(int *param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_1 < 1) {
    dVar5 = 1.79769313486232e+308;
    dVar2 = -1.79769313486232e+308;
    dVar3 = -1.79769313486232e+308;
    dVar4 = 1.79769313486232e+308;
  }
  else {
    uVar6 = 0xffffffff;
    uVar7 = 0xffefffff;
    uVar8 = 0xffffffff;
    uVar9 = 0x7fefffff;
    iVar1 = 0;
    uVar10 = uVar8;
    uVar11 = uVar9;
    uVar12 = uVar6;
    uVar13 = uVar7;
    do {
      local_74 = iVar1;
      (*(code *)**(undefined8 **)(param_1 + 2))
                (&local_88,(*(undefined8 **)(param_1 + 2))[1],&local_74);
      dVar4 = local_88;
      if ((double)CONCAT44(uVar9,uVar8) <= local_88) {
        dVar4 = (double)CONCAT44(uVar9,uVar8);
      }
      dVar3 = local_88;
      if (local_88 <= (double)CONCAT44(uVar7,uVar6)) {
        dVar3 = (double)CONCAT44(uVar7,uVar6);
      }
      dVar5 = local_80;
      if ((double)CONCAT44(uVar11,uVar10) <= local_80) {
        dVar5 = (double)CONCAT44(uVar11,uVar10);
      }
      dVar2 = local_80;
      if (local_80 <= (double)CONCAT44(uVar13,uVar12)) {
        dVar2 = (double)CONCAT44(uVar13,uVar12);
      }
      iVar1 = iVar1 + 1;
      uVar8 = SUB84(dVar4,0);
      uVar9 = (undefined4)((ulonglong)dVar4 >> 0x20);
      uVar10 = SUB84(dVar5,0);
      uVar11 = (undefined4)((ulonglong)dVar5 >> 0x20);
      uVar6 = SUB84(dVar3,0);
      uVar7 = (undefined4)((ulonglong)dVar3 >> 0x20);
      uVar12 = SUB84(dVar2,0);
      uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
    } while (iVar1 < *param_1);
  }
  *param_2 = (dVar3 + dVar4) * 0.5;
  param_2[1] = (dVar2 + dVar5) * 0.5;
  param_2[2] = 1.0;
  param_2[3] = 0.0;
  param_2[4] = (dVar3 - dVar4) * 0.5;
  param_2[5] = (dVar2 - dVar5) * 0.5;
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146bb4572 FUN_146bb4572 body=298 status=ok
// SIG undefined FUN_146bb4572(void)

int FUN_146bb4572(int *param_1,double *param_2,int param_3,double *param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = param_3;
  (*(code *)**(undefined8 **)(param_1 + 2))(&local_58,(*(undefined8 **)(param_1 + 2))[1]);
  *param_4 = *param_2 * local_58 + param_2[1] * local_50;
  if (param_3 + 1 < *param_1) {
    do {
      iVar1 = param_3 + 1;
      local_44 = iVar1;
      (*(code *)**(undefined8 **)(param_1 + 2))
                (&local_58,(*(undefined8 **)(param_1 + 2))[1],&local_44);
      dVar3 = *param_2 * local_58 + param_2[1] * local_50;
      if (dVar3 < *param_4) goto LAB_146bb4675;
      *param_4 = dVar3;
      iVar2 = param_3 + 2;
      param_3 = iVar1;
    } while (iVar2 < *param_1);
  }
  local_44 = 0;
  (*(code *)**(undefined8 **)(param_1 + 2))(&local_58,(*(undefined8 **)(param_1 + 2))[1]);
  dVar3 = *param_2 * local_58 + param_2[1] * local_50;
  if (*param_4 <= dVar3) {
    *param_4 = dVar3;
    param_3 = 0;
  }
LAB_146bb4675:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 146bb469e FUN_146bb469e body=353 status=ok
// SIG undefined FUN_146bb469e(void)

int FUN_146bb469e(int *param_1,double *param_2,int param_3,double *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = param_3;
  (*(code *)**(undefined8 **)(param_1 + 2))(&local_60,(*(undefined8 **)(param_1 + 2))[1]);
  *param_4 = *param_2 * local_60 + param_2[1] * local_58;
  *param_5 = 0;
  iVar2 = param_3;
  if (param_3 + 1 < *param_1) {
    iVar4 = param_3;
    do {
      iVar2 = iVar4 + 1;
      local_4c = iVar2;
      (*(code *)**(undefined8 **)(param_1 + 2))
                (&local_60,(*(undefined8 **)(param_1 + 2))[1],&local_4c);
      dVar5 = *param_2 * local_60 + param_2[1] * local_58;
      if (dVar5 < *param_4) goto LAB_146bb47d5;
      *param_4 = dVar5;
      *param_5 = *param_5 + 1;
      iVar3 = iVar4 + 2;
      iVar4 = iVar2;
    } while (iVar3 < *param_1);
  }
  iVar4 = iVar2;
  if (0 < param_3) {
    iVar3 = 0;
    do {
      iVar1 = iVar3;
      local_4c = iVar1;
      (*(code *)**(undefined8 **)(param_1 + 2))
                (&local_60,(*(undefined8 **)(param_1 + 2))[1],&local_4c);
      dVar5 = *param_2 * local_60 + param_2[1] * local_58;
      iVar4 = iVar2;
      if (dVar5 < *param_4) break;
      *param_4 = dVar5;
      *param_5 = *param_5 + 1;
      iVar3 = iVar1 + 1;
      iVar2 = iVar1;
      iVar4 = iVar1;
    } while (param_3 != iVar1 + 1);
  }
LAB_146bb47d5:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 146bb4800 FUN_146bb4800 body=251 status=ok
// SIG undefined FUN_146bb4800(void)

void FUN_146bb4800(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[2];
  if (0.0 <= fVar2) {
    fVar2 = 1.0 / (fVar2 + 1.0);
    fVar3 = -fVar1 * param_1[1] * fVar2;
    *param_2 = 1.0 - fVar1 * fVar1 * fVar2;
    param_2[1] = fVar3;
    param_2[2] = -*param_1;
    *param_3 = fVar3;
    fVar1 = 1.0 - param_1[1] * param_1[1] * fVar2;
  }
  else {
    fVar2 = 1.0 / (1.0 - fVar2);
    fVar3 = param_1[1] * fVar1 * fVar2;
    *param_2 = 1.0 - fVar1 * fVar1 * fVar2;
    param_2[1] = -fVar3;
    param_2[2] = *param_1;
    *param_3 = fVar3;
    fVar1 = param_1[1] * param_1[1] * fVar2 + -1.0;
  }
  param_3[1] = fVar1;
  param_3[2] = -param_1[1];
  return;
}



// FUNCTION 146bb48fb FUN_146bb48fb body=4749 status=ok
// SIG undefined FUN_146bb48fb(void)

double * FUN_146bb48fb(double *param_1,int param_2,double **param_3,undefined8 *param_4,int param_5,
                      double param_6,char *param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined8 **ppuVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  double **ppdVar13;
  longlong lVar14;
  undefined1 **ppuVar15;
  double *pdVar16;
  int iVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double *pdVar26;
  double dVar27;
  double dVar28;
  double *pdVar29;
  double dVar30;
  double dVar31;
  double *pdVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_488 [32];
  code **local_468;
  undefined1 **local_460;
  double *local_458;
  double *local_450;
  undefined8 **local_448;
  double *local_440;
  undefined8 *local_438;
  double **local_430;
  undefined8 **local_428;
  longlong *local_420;
  undefined8 *local_418;
  double local_410;
  code *local_408;
  undefined8 *local_400;
  code *local_3f8;
  undefined8 **local_3f0;
  undefined8 *local_3e8;
  double *pdStack_3e0;
  undefined8 **local_3d8;
  double *pdStack_3d0;
  undefined8 local_388;
  undefined8 **local_380;
  longlong *local_378;
  longlong *local_370;
  longlong *local_368;
  undefined4 *local_360;
  undefined1 local_358;
  undefined8 *local_350;
  int local_344;
  code *local_340;
  undefined8 *local_338;
  undefined1 *local_330;
  int *local_328;
  int local_320 [6];
  double *local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined8 *local_2e8;
  double *local_2e0;
  double local_2d8;
  double *local_2d0;
  double *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  int local_280;
  undefined8 *local_278;
  double *pdStack_270;
  undefined8 **local_268;
  double *local_260;
  double dStack_258;
  double local_250;
  double *local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined4 local_228;
  longlong local_220;
  undefined8 uStack_218;
  longlong local_210 [2];
  int local_200 [2];
  double **local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e4;
  undefined1 local_1dc [4];
  double **local_1d8;
  undefined8 uStack_1d0;
  double *pdStack_1c8;
  undefined8 uStack_1c0;
  double *pdStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  _RTL_CRITICAL_SECTION local_188;
  double local_160;
  undefined4 local_158;
  double *local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  int local_120;
  undefined8 local_11c;
  int local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  iVar11 = param_5;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_2a8 = 0;
  local_2a0 = 0xffffffff;
  local_298 = 0xffefffffffffffff;
  local_290 = 0xffefffffffffffff;
  local_288 = 0;
  local_268 = DAT_14c8464f0;
  local_278 = DAT_14c8464e0;
  pdStack_270 = DAT_14c8464e8;
  local_260 = DAT_14c8463a0;
  dStack_258 = DAT_14c8463a8;
  local_250 = DAT_14c8463b0;
  local_228 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210[0] = 0;
  local_210[1] = 0;
  local_2b0 = 1;
  local_2c0 = *param_4;
  local_2b8 = param_4[1];
  local_2d0 = *param_3;
  local_2c8 = param_3[1];
  local_200[0] = param_2;
  local_1f8 = param_3;
  local_1f0 = param_4;
  cVar7 = FUN_146ba039e();
  dVar28 = local_250;
  dVar20 = dStack_258;
  pdVar26 = local_260;
  ppuVar6 = local_268;
  pdVar16 = pdStack_270;
  puVar1 = local_278;
  if (cVar7 == '\0') {
    if (local_280 == 2) {
      local_138 = local_238;
      dStack_130 = dStack_230;
      local_148 = local_248;
      dStack_140 = dStack_240;
      FUN_146bb5db8(&local_148,&local_388,&local_2e8);
      if (param_2 < 1) {
        uVar39 = 0xffffffff;
        uVar40 = 0xffefffff;
        uVar35 = 0xffffffff;
        uVar36 = 0x7fefffff;
        uVar33 = uVar35;
        uVar34 = uVar36;
        uVar37 = uVar39;
        uVar38 = uVar40;
      }
      else {
        uVar35 = 0xffffffff;
        uVar36 = 0x7fefffff;
        uVar39 = 0xffffffff;
        uVar40 = 0xffefffff;
        iVar17 = 0;
        uVar33 = uVar35;
        uVar34 = uVar36;
        uVar37 = uVar39;
        uVar38 = uVar40;
        do {
          local_1d8 = (double **)CONCAT44(local_1d8._4_4_,iVar17);
          cVar7 = (*(code *)*param_4)(param_4[1],&local_1d8);
          if (cVar7 != '\0') {
            local_3e8 = (undefined8 *)CONCAT44(local_3e8._4_4_,iVar17);
            (*(code *)*param_3)(&local_1d8,param_3[1],&local_3e8);
            dVar20 = (double)pdStack_1c8 - local_238 * dStack_230;
            dVar25 = (double)uStack_1d0 - dStack_240 * dStack_230;
            dVar19 = (double)local_1d8 - dStack_230 * (double)local_248;
            dVar28 = local_2d8 * dVar20 + (double)local_2e8 * dVar19 + (double)local_2e0 * dVar25;
            dVar19 = dVar20 * (double)local_378 +
                     dVar19 * (double)local_388 + dVar25 * (double)local_380;
            dVar20 = dVar19;
            if ((double)CONCAT44(uVar34,uVar33) <= dVar19) {
              dVar20 = (double)CONCAT44(uVar34,uVar33);
            }
            if (dVar19 <= (double)CONCAT44(uVar38,uVar37)) {
              dVar19 = (double)CONCAT44(uVar38,uVar37);
            }
            dVar25 = dVar28;
            if ((double)CONCAT44(uVar36,uVar35) <= dVar28) {
              dVar25 = (double)CONCAT44(uVar36,uVar35);
            }
            if (dVar28 <= (double)CONCAT44(uVar40,uVar39)) {
              dVar28 = (double)CONCAT44(uVar40,uVar39);
            }
            uVar33 = SUB84(dVar20,0);
            uVar34 = (undefined4)((ulonglong)dVar20 >> 0x20);
            uVar35 = SUB84(dVar25,0);
            uVar36 = (undefined4)((ulonglong)dVar25 >> 0x20);
            uVar37 = SUB84(dVar19,0);
            uVar38 = (undefined4)((ulonglong)dVar19 >> 0x20);
            uVar39 = SUB84(dVar28,0);
            uVar40 = (undefined4)((ulonglong)dVar28 >> 0x20);
          }
          iVar17 = iVar17 + 1;
        } while (param_2 != iVar17);
      }
      pdVar16 = local_2e0;
      local_430 = local_388;
      local_1d8 = local_388;
      local_418 = local_2e8;
      uStack_1d0 = (double *)local_2e8;
      pdStack_1c8 = local_148;
      local_428 = local_380;
      uStack_1c0 = (double **)local_380;
      pdStack_1b8 = local_2e0;
      local_1b0 = SUB84(dStack_140,0);
      uStack_1ac = (undefined4)((ulonglong)dStack_140 >> 0x20);
      local_420 = local_378;
      local_1a8 = SUB84(local_378,0);
      uStack_1a4 = (undefined4)((ulonglong)local_378 >> 0x20);
      local_410 = local_2d8;
      local_1a0 = local_2d8;
      local_198 = local_138;
      local_3e8 = (double *)0x0;
      pdStack_3e0 = (double *)0x0;
      local_3d8 = (double **)0x0;
      pdStack_3d0 = (double *)&DAT_3ff0000000000000;
      FUN_146bfbbda(&local_3e8);
      dVar28 = ((double)CONCAT44(uVar40,uVar39) - (double)CONCAT44(uVar36,uVar35)) * 0.5;
      dVar20 = ((double)CONCAT44(uVar38,uVar37) - (double)CONCAT44(uVar34,uVar33)) * 0.5;
      pdVar26 = (double *)local_3e8;
      pdVar29 = pdStack_3e0;
      ppdVar13 = (double **)local_3d8;
      pdVar32 = pdStack_3d0;
      if (iVar11 == 1) {
        local_438 = local_3e8;
        local_440 = pdStack_3e0;
        local_448 = local_3d8;
        local_450 = pdStack_3d0;
        FUN_146bb5b8a(local_200,param_1);
        dVar19 = 0.0;
        if (0.0 <= param_1[9]) {
          dVar19 = param_1[9];
        }
        dVar25 = 0.0;
        if (0.0 <= param_1[8]) {
          dVar25 = param_1[8];
        }
        dVar30 = 0.0;
        if (0.0 <= param_1[7]) {
          dVar30 = param_1[7];
        }
        dVar31 = 0.0;
        if (0.0 <= dVar28) {
          dVar31 = dVar28;
        }
        dVar27 = 0.0;
        if (0.0 <= dVar20) {
          dVar27 = dVar20;
        }
        pdVar26 = (double *)local_438;
        pdVar29 = local_440;
        ppdVar13 = (double **)local_448;
        pdVar32 = local_450;
        if ((dVar25 * dVar19 + dVar30 * dVar25 + dVar19 * dVar30) * 8.0 <
            (dVar31 * 1e-08 + dVar27 * dVar31 + dVar27 * 1e-08) * 8.0) goto LAB_146bb50a0;
      }
      dVar19 = ((double)CONCAT44(uVar36,uVar35) + (double)CONCAT44(uVar40,uVar39)) * 0.5;
      dVar25 = ((double)CONCAT44(uVar34,uVar33) + (double)CONCAT44(uVar38,uVar37)) * 0.5;
      *param_1 = dVar19 * (double)local_418 +
                 dStack_230 * (double)local_248 + dVar25 * (double)local_430;
      param_1[1] = (double)pdVar16 * dVar19 + dStack_240 * dStack_230 + (double)local_428 * dVar25;
      param_1[2] = local_410 * dVar19 + local_238 * dStack_230 + (double)local_420 * dVar25;
      param_1[3] = (double)pdVar26;
      param_1[4] = (double)pdVar29;
      param_1[5] = (double)ppdVar13;
      param_1[6] = (double)pdVar32;
      param_1[7] = dVar20;
      param_1[8] = dVar28;
      param_1[9] = 1e-08;
    }
    else if (local_280 == 1) {
      local_148 = local_260;
      dStack_140 = dStack_258;
      local_138 = local_250;
      if (param_2 < 1) {
        uVar33 = 0xffffffff;
        uVar34 = 0xffefffff;
        uVar37 = 0xffffffff;
        uVar38 = 0x7fefffff;
      }
      else {
        uVar37 = 0xffffffff;
        uVar38 = 0x7fefffff;
        uVar33 = 0xffffffff;
        uVar34 = 0xffefffff;
        iVar11 = 0;
        do {
          local_1d8 = (double **)CONCAT44(local_1d8._4_4_,iVar11);
          cVar7 = (*(code *)*param_4)(param_4[1],&local_1d8);
          if (cVar7 != '\0') {
            local_3e8 = (undefined8 *)CONCAT44(local_3e8._4_4_,iVar11);
            (*(code *)*param_3)(&local_1d8,param_3[1],&local_3e8);
            dVar19 = ((double)pdStack_1c8 - (double)ppuVar6) * dVar28 +
                     ((double)local_1d8 - (double)puVar1) * (double)pdVar26 +
                     ((double)uStack_1d0 - (double)pdVar16) * dVar20;
            dVar25 = dVar19;
            if ((double)CONCAT44(uVar38,uVar37) <= dVar19) {
              dVar25 = (double)CONCAT44(uVar38,uVar37);
            }
            if (dVar19 <= (double)CONCAT44(uVar34,uVar33)) {
              dVar19 = (double)CONCAT44(uVar34,uVar33);
            }
            uVar37 = SUB84(dVar25,0);
            uVar38 = (undefined4)((ulonglong)dVar25 >> 0x20);
            uVar33 = SUB84(dVar19,0);
            uVar34 = (undefined4)((ulonglong)dVar19 >> 0x20);
          }
          iVar11 = iVar11 + 1;
        } while (param_2 != iVar11);
      }
      dVar19 = ((double)CONCAT44(uVar38,uVar37) + (double)CONCAT44(uVar34,uVar33)) * 0.5;
      pdStack_1c8 = (double *)((double)ppuVar6 + dVar28 * dVar19);
      uStack_1d0 = (double *)((double)pdVar16 + dVar20 * dVar19);
      local_1d8 = (double **)((double)puVar1 + (double)pdVar26 * dVar19);
      uStack_1c0 = (double **)0x0;
      pdStack_1b8 = (double *)0x0;
      local_1b0 = 0;
      uStack_1ac = 0;
      local_1a8 = 0;
      uStack_1a4 = 0x3ff00000;
      local_3d8 = DAT_14c8463c8;
      local_3e8 = DAT_14c8463b8;
      pdStack_3e0 = DAT_14c8463c0;
      FUN_146bfb7f2(&uStack_1c0,&local_3e8,&local_148);
      param_1[6] = (double)CONCAT44(uStack_1a4,local_1a8);
      param_1[4] = (double)pdStack_1b8;
      param_1[5] = (double)CONCAT44(uStack_1ac,local_1b0);
      param_1[2] = (double)pdStack_1c8;
      param_1[3] = (double)uStack_1c0;
      *param_1 = (double)local_1d8;
      param_1[1] = (double)uStack_1d0;
      param_1[7] = 1e-08;
      param_1[8] = 1e-08;
      param_1[9] = ((double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar38,uVar37)) * 0.5;
    }
    else {
      FUN_146bb5b8a(local_200,param_1);
    }
    goto LAB_146bb50a0;
  }
  local_128 = 0;
  local_120 = 0;
  local_148 = (double *)0x0;
  dStack_140 = 0.0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  if ((longlong)(int)uStack_218 == 0) {
    local_2f8 = 0;
    uStack_2f0 = 0;
  }
  else {
    lVar18 = local_220 + (longlong)(int)uStack_218 * 0xc;
    lVar14 = local_220;
    do {
      FUN_1447cbafe(&local_148,&local_1d8,lVar14,0);
      FUN_1447cbafe(&local_148,&local_1d8,lVar14 + 4);
      FUN_1447cbafe(&local_148,&local_1d8,lVar14 + 8);
      lVar14 = lVar14 + 0xc;
    } while (lVar14 != lVar18);
    iVar11 = dStack_140._0_4_ - local_114;
    local_2f8 = 0;
    uStack_2f0 = 0;
    if (iVar11 < 0) goto LAB_146bb5b82;
    if (iVar11 != 0) {
      FUN_1447a8aa0(&local_2f8);
    }
  }
  local_3e8 = (undefined8 *)&DAT_100000000;
  pdStack_3e0 = &local_138;
  local_3d8 = (undefined8 **)&DAT_ffffffff;
  pdStack_3d0 = (double *)((ulonglong)pdStack_3d0 & 0xffffffff00000000);
  local_458 = param_1;
  if (local_120 == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_3e8);
    iVar11 = local_120;
  }
  uStack_1c0 = (double **)local_3d8;
  ppdVar13 = uStack_1c0;
  pdStack_1b8 = pdStack_3d0;
  uStack_1d0 = (double *)local_3e8;
  pdStack_1c8 = pdStack_3e0;
  local_1d8 = &local_148;
  uStack_1c0._4_4_ = (int)((ulonglong)local_3d8 >> 0x20);
  if ((uStack_1c0._4_4_ != iVar11) || (pdStack_3e0 != &local_138)) {
    iVar17 = uStack_1c0._4_4_;
    uStack_1c0 = ppdVar13;
    do {
      local_388 = (double **)
                  CONCAT44(local_388._4_4_,
                           *(undefined4 *)((longlong)*local_1d8 + (longlong)iVar17 * 0xc));
      (*(code *)*param_3)(&local_3e8,param_3[1],&local_388);
      uVar5 = uStack_2f0;
      lVar18 = (longlong)(int)uStack_2f0;
      uVar8 = (int)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar8);
      if (uStack_2f0._4_4_ < uVar8) {
        FUN_1403e3958(&local_2f8,uVar5 & 0xffffffff);
      }
      *(undefined8 ***)(local_2f8 + 0x10 + lVar18 * 0x18) = local_3d8;
      puVar1 = (undefined8 *)(local_2f8 + lVar18 * 0x18);
      *puVar1 = local_3e8;
      puVar1[1] = pdStack_3e0;
      uStack_1c0 = (double **)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0 & ~uStack_1d0._4_4_);
      FUN_1449c0562(&uStack_1d0);
      iVar17 = uStack_1c0._4_4_;
      ppdVar13 = uStack_1c0;
    } while (local_1d8 != &local_148 || (pdStack_1c8 != &local_138 || uStack_1c0._4_4_ != iVar11));
  }
  uStack_1c0 = ppdVar13;
  FUN_14068ded2(&local_148,0);
  local_308 = (double *)0x0;
  uStack_300 = 0;
  iVar11 = (int)uStack_218 + 1;
  if ((int)uStack_218 < -1) {
LAB_146bb5b82:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  iVar11 = 0;
  uVar8 = 0;
  if (-1 < (int)uStack_218) {
    FUN_1447a8aa0(&local_308);
    iVar11 = (int)uStack_300;
    uVar8 = uStack_300._4_4_;
  }
  dVar20 = param_6;
  uStack_300 = CONCAT44(uStack_300._4_4_,iVar11 + 1U);
  if (uVar8 < iVar11 + 1U) {
    FUN_1403e3958(&local_308,iVar11);
  }
  local_308[(longlong)iVar11 * 3] = 0.0;
  (local_308 + (longlong)iVar11 * 3)[1] = 0.0;
  local_308[(longlong)iVar11 * 3 + 2] = 1.0;
  if (0.0 < dVar20) {
    dVar28 = dVar20 * 4.0;
    pdStack_1b8 = (double *)0x0;
    local_1b0 = 0;
    local_1d8 = (double **)0x0;
    uStack_1d0 = (double *)0x0;
    uStack_1ac = 0x80;
    local_1a8 = 0xffffffff;
    uStack_1a4 = 0;
    local_198 = 0.0;
    local_190 = (ulonglong)local_190._4_4_ << 0x20;
    InitializeCriticalSection(&local_188);
    SetCriticalSectionSpinCount(&local_188,4000);
    local_158 = 0xffffffff;
    pdStack_3e0 = (double *)local_320;
    auVar21._0_8_ = DAT_14c8463f8 / dVar28;
    auVar21._8_8_ = 0;
    auVar21 = roundsd(auVar21,auVar21,9);
    local_320[0] = 0;
    auVar22._0_8_ = DAT_14c8463f0 / dVar28;
    auVar22._8_8_ = 0;
    auVar22 = roundsd(auVar22,auVar22,9);
    local_388 = (double **)CONCAT44((int)auVar21._0_8_,(int)auVar22._0_8_);
    local_3e8 = &local_388;
    local_160 = dVar28;
    FUN_146bfb2fc(&local_1d8,&local_2e8,&local_3e8,0);
    if (0 < (int)uStack_218) {
      lVar18 = 8;
      lVar14 = 0;
      do {
        uVar33 = *(undefined4 *)(local_220 + -8 + lVar18);
        uVar34 = *(undefined4 *)(local_220 + -4 + lVar18);
        local_3e8._0_4_ = *(undefined4 *)(local_220 + lVar18);
        (*(code *)*param_3)(&local_388,param_3[1],&local_3e8);
        local_3e8._0_4_ = uVar34;
        (*(code *)*param_3)(&local_2e8,param_3[1],&local_3e8);
        local_3e8 = (undefined8 *)CONCAT44(local_3e8._4_4_,uVar33);
        (*(code *)*param_3)(local_320,param_3[1],&local_3e8);
        FUN_146baf581(&local_3e8,local_320,&local_2e8,&local_388);
        if ((double)local_3d8 < 0.0) {
          local_3d8 = (undefined8 **)((ulonglong)local_3d8 ^ 0x8000000000000000);
          pdStack_3e0 = (double *)((ulonglong)pdStack_3e0 ^ 0x8000000000000000);
          local_3e8 = (undefined8 *)((ulonglong)local_3e8 ^ 0x8000000000000000);
        }
        local_328 = (int *)&local_1e4;
        local_330 = &LAB_146bfbec0;
        local_388 = &local_308;
        local_340 = (code *)&LAB_146bfbe7a;
        local_460 = &local_330;
        local_468 = &local_340;
        local_380 = &local_3e8;
        local_338 = &local_388;
        local_2e8 = local_3e8;
        local_2e0 = pdStack_3e0;
        FUN_146bb5ebe(&local_1d8,local_320,&local_2e8,dVar20);
        uVar5 = uStack_300;
        if (local_320[0] == -1) {
          iVar11 = (int)uStack_300;
          uVar8 = (int)uStack_300 + 1;
          uStack_300 = CONCAT44(uStack_300._4_4_,uVar8);
          if (uStack_300._4_4_ < uVar8) {
            FUN_1403e3958(&local_308,uVar5 & 0xffffffff);
          }
          local_308[(longlong)iVar11 * 3 + 2] = (double)local_3d8;
          local_308[(longlong)iVar11 * 3] = (double)local_3e8;
          (local_308 + (longlong)iVar11 * 3)[1] = (double)pdStack_3e0;
          local_344 = iVar11;
          auVar24._0_8_ = (double)local_2e0 / local_160;
          auVar24._8_8_ = 0;
          auVar21 = roundsd(auVar24,auVar24,9);
          local_1e4._4_4_ = (int)auVar21._0_8_;
          auVar23._0_8_ = (double)local_2e8 / local_160;
          auVar23._8_8_ = 0;
          auVar21 = roundsd(auVar23,auVar23,9);
          local_1e4._0_4_ = (int)auVar21._0_8_;
          local_388 = (double **)&local_1e4;
          local_380 = (undefined8 **)&local_344;
          FUN_146bfb2fc(&local_1d8,local_1dc,&local_388,0);
        }
        lVar14 = lVar14 + 1;
        lVar18 = lVar18 + 0xc;
      } while (lVar14 < (int)uStack_218);
    }
    FUN_146bb6118(&local_1d8);
  }
  else if (0 < (int)uStack_218) {
    lVar14 = 8;
    lVar18 = 0;
    do {
      uVar33 = *(undefined4 *)(local_220 + -8 + lVar14);
      uVar34 = *(undefined4 *)(local_220 + -4 + lVar14);
      local_1d8._0_4_ = *(undefined4 *)(local_220 + lVar14);
      (*(code *)*param_3)(&local_3e8,param_3[1],&local_1d8);
      local_1d8._0_4_ = uVar34;
      (*(code *)*param_3)(&local_388,param_3[1],&local_1d8);
      local_1d8 = (double **)CONCAT44(local_1d8._4_4_,uVar33);
      (*(code *)*param_3)(&local_2e8,param_3[1],&local_1d8);
      FUN_146baf581(&local_1d8,&local_2e8,&local_388,&local_3e8);
      uVar5 = uStack_300;
      lVar12 = (longlong)(int)uStack_300;
      uVar8 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar8);
      if (uStack_300._4_4_ < uVar8) {
        FUN_1403e3958(&local_308,uVar5 & 0xffffffff);
      }
      local_308[lVar12 * 3 + 2] = (double)pdStack_1c8;
      local_308[lVar12 * 3] = (double)local_1d8;
      (local_308 + lVar12 * 3)[1] = (double)uStack_1d0;
      lVar18 = lVar18 + 1;
      lVar14 = lVar14 + 0xc;
    } while (lVar18 < (int)uStack_218);
  }
  pcVar4 = param_7;
  local_1d8 = (double **)0x7fefffffffffffff;
  uStack_1d0 = DAT_14c8464e0;
  pdStack_1c8 = DAT_14c8464e8;
  uStack_1c0 = DAT_14c8464f0;
  pdStack_1b8 = (double *)0x0;
  local_1b0 = 0;
  uStack_1ac = 0;
  local_1a8 = 0;
  uStack_1a4 = 0;
  local_1a0 = 1.0;
  local_198 = 1.0;
  local_190 = 0x3ff0000000000000;
  local_188.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&DAT_3ff0000000000000;
  bVar3 = (int)uStack_218 < 1000;
  ppuVar15 = (undefined1 **)&DAT_00000040;
  if ((int)uStack_218 < 1000) {
    ppuVar15 = (undefined1 **)&DAT_00000001;
  }
  if (param_7 == (char *)0x0) {
LAB_146bb4f66:
    param_1 = local_458;
    local_378 = &local_220;
    local_370 = local_210;
    local_380 = &local_308;
    local_368 = &local_2f8;
    local_360 = &param_5;
    local_350 = &param_7;
    local_388 = param_3;
    local_358 = bVar3;
    if (pcVar4 != (char *)0x0) {
      if (*pcVar4 == '\0') {
        pcVar2 = *(code **)(pcVar4 + 0x70);
        plVar10 = (longlong *)(pcVar4 + 0x90);
        if (*(longlong **)(pcVar4 + 0x80) != (longlong *)0x0) {
          plVar10 = *(longlong **)(pcVar4 + 0x80);
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        cVar7 = (*pcVar2)(uVar9);
        *pcVar4 = cVar7;
        if (cVar7 == '\0') goto LAB_146bb54d8;
      }
      goto LAB_146bb501e;
    }
LAB_146bb54d8:
    local_3f0 = &local_2e8;
    local_468 = &local_3f8;
    local_3f8 = FUN_146bfcd12;
    local_400 = &local_388;
    local_408 = FUN_146bfc246;
    local_460 = ppuVar15;
    FUN_146bb614b(&local_3e8,uStack_300 & 0xffffffff,&local_1d8);
    ppdVar13 = &pdStack_3e0;
    pdVar16 = param_1;
    for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pdVar16 = (double)*ppdVar13;
      ppdVar13 = ppdVar13 + 1;
      pdVar16 = pdVar16 + 1;
    }
  }
  else {
    param_1 = local_458;
    if (*param_7 == '\0') {
      pcVar2 = *(code **)(param_7 + 0x70);
      plVar10 = (longlong *)(param_7 + 0x90);
      if (*(longlong **)(param_7 + 0x80) != (longlong *)0x0) {
        plVar10 = *(longlong **)(param_7 + 0x80);
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      cVar7 = (*pcVar2)(uVar9);
      *pcVar4 = cVar7;
      param_1 = local_458;
      if (cVar7 == '\0') goto LAB_146bb4f66;
    }
LAB_146bb501e:
    param_1[2] = (double)DAT_14c8464f0;
    pdVar16 = DAT_14c8464e8;
    *param_1 = (double)DAT_14c8464e0;
    param_1[1] = (double)pdVar16;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 1.0;
    param_1[7] = 1.0;
    param_1[8] = 1.0;
    param_1[9] = 1.0;
  }
  if (local_308 != (double *)0x0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_148);
LAB_146bb50a0:
  if (local_210[0] != 0) {
    FUN_1400020a8();
  }
  if (local_220 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bb5b8a FUN_146bb5b8a body=557 status=ok
// SIG undefined FUN_146bb5b8a(void)

double * FUN_146bb5b8a(int *param_1,double *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_f8 [40];
  int local_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_c0;
  int local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = *param_1;
  if (iVar1 < 1) {
    uVar20 = 0xffffffff;
    uVar21 = 0x7fefffff;
    uVar14 = 0xffffffff;
    uVar15 = 0xffefffff;
    uVar16 = uVar14;
    uVar17 = uVar15;
    uVar18 = uVar14;
    uVar19 = uVar15;
    uVar22 = uVar20;
    uVar23 = uVar21;
    uVar24 = uVar20;
    uVar25 = uVar21;
  }
  else {
    pcVar2 = (code *)**(undefined8 **)(param_1 + 4);
    uVar3 = (*(undefined8 **)(param_1 + 4))[1];
    pcVar4 = (code *)**(undefined8 **)(param_1 + 2);
    uVar5 = (*(undefined8 **)(param_1 + 2))[1];
    uVar14 = 0xffffffff;
    uVar15 = 0xffefffff;
    uVar20 = 0xffffffff;
    uVar21 = 0x7fefffff;
    iVar7 = 0;
    uVar16 = uVar14;
    uVar17 = uVar15;
    uVar18 = uVar14;
    uVar19 = uVar15;
    uVar22 = uVar20;
    uVar23 = uVar21;
    uVar24 = uVar20;
    uVar25 = uVar21;
    do {
      local_d0 = iVar7;
      cVar6 = (*pcVar2)(uVar3,&local_d0);
      if (cVar6 != '\0') {
        local_b4 = iVar7;
        (*pcVar4)(&local_d0,uVar5,&local_b4);
        dVar8 = (double)CONCAT44(uStack_cc,local_d0);
        dVar10 = dVar8;
        if ((double)CONCAT44(uVar23,uVar22) <= dVar8) {
          dVar10 = (double)CONCAT44(uVar23,uVar22);
        }
        if (dVar8 <= (double)CONCAT44(uVar17,uVar16)) {
          dVar8 = (double)CONCAT44(uVar17,uVar16);
        }
        dVar11 = local_c8;
        if ((double)CONCAT44(uVar25,uVar24) <= local_c8) {
          dVar11 = (double)CONCAT44(uVar25,uVar24);
        }
        dVar9 = local_c8;
        if (local_c8 <= (double)CONCAT44(uVar19,uVar18)) {
          dVar9 = (double)CONCAT44(uVar19,uVar18);
        }
        dVar13 = local_c0;
        if ((double)CONCAT44(uVar21,uVar20) <= local_c0) {
          dVar13 = (double)CONCAT44(uVar21,uVar20);
        }
        dVar12 = local_c0;
        if (local_c0 <= (double)CONCAT44(uVar15,uVar14)) {
          dVar12 = (double)CONCAT44(uVar15,uVar14);
        }
        uVar14 = SUB84(dVar12,0);
        uVar15 = (undefined4)((ulonglong)dVar12 >> 0x20);
        uVar18 = SUB84(dVar9,0);
        uVar19 = (undefined4)((ulonglong)dVar9 >> 0x20);
        uVar16 = SUB84(dVar8,0);
        uVar17 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uVar20 = SUB84(dVar13,0);
        uVar21 = (undefined4)((ulonglong)dVar13 >> 0x20);
        uVar24 = SUB84(dVar11,0);
        uVar25 = (undefined4)((ulonglong)dVar11 >> 0x20);
        uVar22 = SUB84(dVar10,0);
        uVar23 = (undefined4)((ulonglong)dVar10 >> 0x20);
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  *param_2 = ((double)CONCAT44(uVar17,uVar16) + (double)CONCAT44(uVar23,uVar22)) * 0.5;
  param_2[1] = ((double)CONCAT44(uVar19,uVar18) + (double)CONCAT44(uVar25,uVar24)) * 0.5;
  param_2[2] = ((double)CONCAT44(uVar15,uVar14) + (double)CONCAT44(uVar21,uVar20)) * 0.5;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 1.0;
  param_2[7] = ((double)CONCAT44(uVar17,uVar16) - (double)CONCAT44(uVar23,uVar22)) * 0.5;
  param_2[8] = ((double)CONCAT44(uVar19,uVar18) - (double)CONCAT44(uVar25,uVar24)) * 0.5;
  param_2[9] = ((double)CONCAT44(uVar15,uVar14) - (double)CONCAT44(uVar21,uVar20)) * 0.5;
  if ((local_b0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb5db8 FUN_146bb5db8 body=262 status=ok
// SIG undefined FUN_146bb5db8(void)

void FUN_146bb5db8(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_1;
  dVar2 = param_1[2];
  if (0.0 <= dVar2) {
    dVar2 = 1.0 / (dVar2 + 1.0);
    dVar3 = -dVar1 * param_1[1] * dVar2;
    *param_2 = 1.0 - dVar1 * dVar1 * dVar2;
    param_2[1] = dVar3;
    param_2[2] = -*param_1;
    *param_3 = dVar3;
    dVar1 = 1.0 - param_1[1] * param_1[1] * dVar2;
  }
  else {
    dVar2 = 1.0 / (1.0 - dVar2);
    dVar3 = param_1[1] * dVar1 * dVar2;
    *param_2 = 1.0 - dVar1 * dVar1 * dVar2;
    param_2[1] = -dVar3;
    param_2[2] = *param_1;
    *param_3 = dVar3;
    dVar1 = param_1[1] * param_1[1] * dVar2 + -1.0;
  }
  param_3[1] = dVar1;
  param_3[2] = -param_1[1];
  return;
}



// FUNCTION 146bb5ebe FUN_146bb5ebe body=601 status=ok
// SIG undefined FUN_146bb5ebe(void)

undefined4 *
FUN_146bb5ebe(longlong param_1,undefined4 *param_2,double *param_3,double param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_e8 [44];
  int local_bc;
  int local_b8;
  uint local_b4;
  undefined4 *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x34)) {
    *param_2 = *(undefined4 *)(param_1 + 0x80);
  }
  else {
    dVar10 = *(double *)(param_1 + 0x78);
    auVar13._0_8_ = (param_3[1] - DAT_14c846328 * param_4) / dVar10;
    auVar13._8_8_ = 0;
    auVar14 = roundsd(auVar13,auVar13,9);
    uVar5 = (uint)auVar14._0_8_;
    auVar14._0_8_ = (DAT_14c846328 * param_4 + param_3[1]) / dVar10;
    auVar14._8_8_ = 0;
    auVar14 = roundsd(auVar14,auVar14,9);
    local_b4 = (uint)auVar14._0_8_;
    uVar3 = *(undefined4 *)(param_1 + 0x80);
    local_88 = 0;
    uStack_80 = 0;
    if ((int)uVar5 <= (int)local_b4) {
      auVar12._0_8_ = (*param_3 - DAT_14c846320 * param_4) / dVar10;
      auVar12._8_8_ = 0;
      auVar14 = roundsd(auVar12,auVar12,9);
      local_b8 = (int)auVar14._0_8_;
      auVar11._0_8_ = (DAT_14c846320 * param_4 + *param_3) / dVar10;
      auVar11._8_8_ = 0;
      auVar14 = roundsd(auVar11,auVar11,9);
      local_bc = (int)auVar14._0_8_;
      uVar15 = 0xffffffff;
      uVar16 = 0x7fefffff;
      local_b0 = param_2;
      local_a8 = param_1;
      do {
        local_a0 = (ulonglong)uVar5;
        iVar4 = local_b8;
        uVar6 = uVar5;
        if (local_b8 <= local_bc) {
          do {
            local_8c = (undefined4)local_a0;
            bVar9 = (longlong)uStack_80 < 0;
            uStack_80 = uStack_80 & 0xffffffff00000000;
            local_90 = iVar4;
            if (bVar9) {
              FUN_14481578e(&local_88,0);
            }
            FUN_146bfb6bc(param_1,&local_90,&local_88,0);
            lVar1 = local_88;
            lVar8 = (longlong)(int)uStack_80;
            if (lVar8 != 0) {
              lVar7 = 0;
              do {
                local_94 = *(undefined4 *)(lVar1 + lVar7);
                cVar2 = (*(code *)*param_6)(param_6[1]);
                if (cVar2 == '\0') {
                  dVar10 = (double)(*(code *)*param_5)(param_5[1]);
                  if ((dVar10 < param_4 * param_4) &&
                     (dVar10 <= (double)CONCAT44(uVar16,uVar15) &&
                      (double)CONCAT44(uVar16,uVar15) != dVar10)) {
                    uVar15 = SUB84(dVar10,0);
                    uVar16 = (undefined4)((ulonglong)dVar10 >> 0x20);
                    uVar3 = local_94;
                  }
                }
                lVar7 = lVar7 + 4;
              } while (lVar8 * 4 != lVar7);
            }
            bVar9 = iVar4 != local_bc;
            uVar6 = (uint)local_a0;
            param_1 = local_a8;
            iVar4 = iVar4 + 1;
          } while (bVar9);
        }
        param_2 = local_b0;
        uVar5 = uVar6 + 1;
      } while (uVar6 != local_b4);
      *local_b0 = uVar3;
      *(ulonglong *)(local_b0 + 2) = CONCAT44(uVar16,uVar15);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      goto LAB_146bb5f16;
    }
    *param_2 = uVar3;
  }
  *(undefined8 *)(param_2 + 2) = 0x7fefffffffffffff;
LAB_146bb5f16:
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bb6118 FUN_146bb6118 body=51 status=ok
// SIG undefined FUN_146bb6118(void)

void FUN_146bb6118(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146be9348(param_1);
  return;
}



// FUNCTION 146bb614b FUN_146bb614b body=423 status=ok
// SIG undefined FUN_146bb614b(void)

undefined8 *
FUN_146bb614b(undefined8 *param_1,int param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,ulonglong param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_1a8 [40];
  undefined4 local_180;
  undefined8 *local_178;
  undefined8 local_168 [11];
  undefined8 local_110 [11];
  undefined8 *local_b8;
  int *local_b0;
  int *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  int local_70;
  int local_6c;
  undefined1 *local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar5 = 0x7fffffff;
  if ((longlong)param_6 < 0x7fffffff) {
    uVar5 = param_6;
  }
  auVar8._4_12_ = in_XMM0._4_12_;
  auVar8._0_4_ = (float)param_2 / (float)(int)uVar5;
  auVar8 = roundss(auVar8,auVar8,10);
  local_70 = (int)auVar8._0_4_;
  local_88 = 0;
  uStack_80 = 0;
  local_6c = param_2;
  FUN_146bfbf38(&local_88);
  local_60 = &local_b8;
  local_98 = param_5;
  local_178 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = &LAB_146bfc11c;
  local_180 = 0;
  local_b8 = param_3;
  local_b0 = &local_70;
  local_a8 = &local_6c;
  local_a0 = param_4;
  local_90 = &local_88;
  FUN_1401f8d10(L"ParallelFor Task",uVar5 & 0xffffffff,1);
  lVar1 = local_88;
  puVar4 = param_1;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  lVar2 = (longlong)(int)uStack_80;
  if (lVar2 != 0) {
    lVar7 = 0;
    do {
      puVar4 = param_1;
      puVar6 = local_110;
      for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4 = (undefined8 *)(lVar1 + lVar7);
      puVar6 = local_168;
      for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      (*(code *)*param_5)(param_1,param_5[1],local_168,local_110);
      lVar7 = lVar7 + 0x58;
    } while (lVar2 * 0x58 - lVar7 != 0);
  }
  if (local_88 != 0) {
    FUN_1400020a8(local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bb62f3 FUN_146bb62f3 body=2523 status=ok
// SIG undefined FUN_146bb62f3(void)

double * FUN_146bb62f3(double *param_1,double *param_2,uint param_3,int param_4,undefined8 *param_5,
                      undefined8 *param_6,int param_7,char *param_8)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined ***pppuVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  double *pdVar19;
  double dVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_318 [32];
  double *local_2f8;
  uint local_2ec;
  double local_2e8;
  double *local_2e0;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  ulonglong local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  longlong local_2a0;
  undefined4 local_298;
  code *local_290;
  undefined1 **local_288;
  double local_280;
  double local_278;
  undefined1 local_270 [16];
  undefined8 local_260;
  undefined8 local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double dStack_218;
  double local_210;
  longlong local_208;
  undefined8 uStack_200;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  double local_180 [4];
  undefined8 local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 *local_138 [2];
  undefined ***local_128;
  undefined **local_118;
  undefined1 *local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_208 = 0;
  uStack_200 = 0;
  local_2ec = param_3;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_4);
  }
  if (param_4 != 0) {
    FUN_1408652ee(&local_208);
  }
  pdVar19 = param_1;
  for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar19 = *param_2;
    param_2 = param_2 + 1;
    pdVar19 = pdVar19 + 1;
  }
  uVar29 = 0;
  uVar30 = 0;
  uVar22 = 0;
  uVar23 = 0;
  dVar24 = param_1[8];
  if (0.0 <= dVar24) {
    uVar22 = SUB84(dVar24,0);
    uVar23 = (undefined4)((ulonglong)dVar24 >> 0x20);
  }
  if (param_7 == 0) {
    dVar24 = 0.0;
    if (0.0 <= param_1[7]) {
      dVar24 = param_1[7];
    }
    dVar20 = param_1[9];
    if (0.0 <= dVar20) {
      uVar29 = SUB84(dVar20,0);
      uVar30 = (undefined4)((ulonglong)dVar20 >> 0x20);
    }
    dVar24 = (double)CONCAT44(uVar30,uVar29) * (double)CONCAT44(uVar23,uVar22) * dVar24 * 8.0;
  }
  else {
    dVar24 = 0.0;
    if (0.0 <= param_1[9]) {
      dVar24 = param_1[9];
    }
    dVar20 = param_1[7];
    if (0.0 <= dVar20) {
      uVar29 = SUB84(dVar20,0);
      uVar30 = (undefined4)((ulonglong)dVar20 >> 0x20);
    }
    dVar24 = (dVar24 * (double)CONCAT44(uVar23,uVar22) +
             (double)CONCAT44(uVar30,uVar29) * (double)CONCAT44(uVar23,uVar22) +
             dVar24 * (double)CONCAT44(uVar30,uVar29)) * 8.0;
  }
  local_2f8 = param_1;
  if (0 < (int)local_2ec) {
    local_2e0 = param_1 + 7;
    local_2c0 = (longlong *)(param_8 + 0x90);
    dVar20 = 2.12199579047121e-314;
    uVar16 = 0;
    do {
      iVar18 = (int)uVar16;
      if (param_8 == (char *)0x0) {
        if (SUB84(dVar20,0) + 3 < iVar18) break;
      }
      else {
        if (*param_8 != '\0') break;
        pcVar1 = *(code **)(param_8 + 0x70);
        plVar13 = *(longlong **)(param_8 + 0x80);
        if (*(longlong **)(param_8 + 0x80) == (longlong *)0x0) {
          plVar13 = local_2c0;
        }
        uVar10 = (**(code **)(*plVar13 + 8))();
        cVar9 = (*pcVar1)(uVar10);
        *param_8 = cVar9;
        if (SUB84(dVar20,0) + 3 < iVar18 || cVar9 != '\0') break;
      }
      iVar7 = (int)(uVar16 / 3);
      uVar17 = iVar18 + iVar7 * -3;
      local_2e8 = dVar20;
      FUN_146bfcd44(local_2f8,&local_220,uVar17);
      pdVar19 = local_2f8;
      local_2d0 = iVar18 + iVar7 * -3 + 1;
      if (local_2d0 == 3) {
        local_2d0 = 0;
      }
      uVar8 = uVar17 - 1;
      if (uVar17 == 0) {
        uVar8 = 2;
      }
      local_2d4 = uVar17;
      local_2c8 = uVar16;
      FUN_146bfcd44(local_2f8,&local_238);
      local_2cc = uVar8;
      FUN_146bfcd44(pdVar19,&local_250,uVar8);
      bVar21 = (longlong)uStack_200 < 0;
      uStack_200 = uStack_200 & 0xffffffff00000000;
      if (bVar21) {
        FUN_1408652ee(&local_208,0);
      }
      if (param_4 != 0) {
        iVar18 = 0;
        do {
          local_1f0 = (double)CONCAT44(local_1f0._4_4_,iVar18);
          cVar9 = (*(code *)*param_6)(param_6[1],&local_1f0);
          if (cVar9 != '\0') {
            local_188._0_4_ = iVar18;
            (*(code *)*param_5)(&local_1f0,param_5[1],&local_188);
            uVar16 = uStack_200;
            dVar20 = local_248 * local_1e8;
            dVar6 = local_250 * local_1f0;
            dVar27 = local_1e8 * local_230;
            dVar25 = local_1f0 * local_238;
            dVar2 = local_240 * local_1e0;
            dVar26 = local_1e0 * local_228;
            lVar12 = (longlong)(int)uStack_200;
            uVar17 = (int)uStack_200 + 1;
            uStack_200 = CONCAT44(uStack_200._4_4_,uVar17);
            if (uStack_200._4_4_ < uVar17) {
              FUN_14489624a(&local_208,uVar16 & 0xffffffff);
            }
            *(double *)(local_208 + lVar12 * 0x10) = dVar26 + dVar25 + dVar27;
            *(double *)(local_208 + 8 + lVar12 * 0x10) = dVar2 + dVar6 + dVar20;
          }
          iVar18 = iVar18 + 1;
        } while (param_4 != iVar18);
      }
      dVar20 = local_2e8;
      uVar16 = (ulonglong)local_2d4;
      if (param_7 == 0) {
        local_110 = &LAB_146bfcebe;
        local_118 = &PTR_LAB_149f36360;
        local_138[0] = &LAB_146bfcc54;
      }
      else {
        local_110 = (undefined1 *)(local_2e0[uVar16] + local_2e0[uVar16]);
        local_118 = &PTR_LAB_149f363a0;
        local_138[0] = &LAB_146bfcec4;
      }
      local_128 = (undefined ***)0x0;
      local_288 = local_138;
      local_290 = FUN_146bfbec4;
      local_2a0 = local_208;
      local_298 = (int)uStack_200;
      FUN_146bb3613(&local_280,&local_2a0,&local_290);
      uVar10 = local_260;
      pdVar19 = local_2f8;
      uVar22 = local_270._0_4_;
      uVar23 = local_270._4_4_;
      dVar27 = (double)local_270._8_8_;
      if (ABS((double)local_270._0_8_) < ABS((double)local_270._8_8_)) {
        local_260 = local_258;
        local_258 = uVar10;
        uVar22 = local_270._8_4_;
        uVar23 = local_270._12_4_;
        dVar27 = -(double)local_270._0_8_;
      }
      uVar10 = local_258;
      dVar25 = dVar27;
      if ((double)CONCAT44(uVar23,uVar22) <= 0.0 && (double)CONCAT44(uVar23,uVar22) != 0.0) {
        dVar25 = -dVar27;
        uVar11 = CONCAT44(uVar23,uVar22) ^ 0x8000000000000000;
        uVar23 = (undefined4)(uVar11 >> 0x20);
        local_270._8_4_ = SUB84(dVar27,0);
        local_270._0_8_ = uVar11;
        local_270._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      }
      local_2a8 = local_2e0[2];
      local_2b8 = *local_2e0;
      uStack_2b0 = local_2e0[1];
      uVar14 = (ulonglong)local_2d0;
      (&local_2b8)[uVar14] = local_260;
      uVar11 = (ulonglong)local_2cc;
      (&local_2b8)[uVar11] = uVar10;
      dVar2 = (double)(-(ulonglong)(0.0 <= local_2b8 + local_2b8) &
                      (ulonglong)(local_2b8 + local_2b8));
      dVar26 = (double)(-(ulonglong)(0.0 <= uStack_2b0 + uStack_2b0) &
                       (ulonglong)(uStack_2b0 + uStack_2b0));
      dVar27 = local_2a8 + local_2a8;
      if (param_7 == 0) {
        dVar27 = (double)(-(ulonglong)(0.0 <= dVar27) & (ulonglong)dVar27) * dVar26 * dVar2;
      }
      else {
        dVar27 = (double)(-(ulonglong)(0.0 <= dVar27) & (ulonglong)dVar27);
        dVar27 = dVar2 * (dVar27 + dVar26) + dVar27 * dVar26;
        dVar27 = dVar27 + dVar27;
      }
      if (dVar27 < dVar24) {
        dVar6 = local_2f8[2] * local_210 + *local_2f8 * local_220 + local_2f8[1] * dStack_218;
        dVar2 = local_210 * dVar6;
        dVar28 = dStack_218 * dVar6;
        dVar6 = dVar6 * local_220;
        dVar4 = local_280 * local_228;
        dVar24 = local_280 * local_230;
        dVar20 = local_280 * local_238;
        local_2e8 = local_238;
        dVar3 = local_278 * local_240;
        dVar5 = local_278 * local_248;
        dVar26 = local_278 * local_250;
        local_180[uVar16 * 3 + 1] = local_210;
        (&local_188)[uVar16 * 3] = local_220;
        local_180[uVar16 * 3] = dStack_218;
        (&local_188)[uVar14 * 3] = dVar25 * local_250 + (double)CONCAT44(uVar23,uVar22) * local_238;
        local_180[uVar14 * 3] = dVar25 * local_248 + (double)CONCAT44(uVar23,uVar22) * local_230;
        local_180[uVar14 * 3 + 1] = dVar25 * local_240 + (double)CONCAT44(uVar23,uVar22) * local_228
        ;
        (&local_188)[uVar11 * 3] = (double)CONCAT44(uVar23,uVar22) * local_250 - dVar25 * local_238;
        local_180[uVar11 * 3] = local_248 * (double)CONCAT44(uVar23,uVar22) - local_230 * dVar25;
        local_180[uVar11 * 3 + 1] = local_240 * (double)CONCAT44(uVar23,uVar22) - local_228 * dVar25
        ;
        local_1f0 = (double)CONCAT44(local_188._4_4_,(int)local_188);
        local_1e8 = local_180[2];
        local_1e0 = local_158;
        local_1d8 = local_180[0];
        local_1d0 = local_180[3];
        local_1c8 = local_150;
        local_1c0 = local_180[1];
        local_1b8 = local_160;
        local_1b0 = local_148;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0.0;
        dStack_190 = 1.0;
        FUN_146bfbbda(&local_1a8,&local_1f0);
        local_2e0[2] = local_2a8;
        *(undefined4 *)local_2e0 = (undefined4)local_2b8;
        *(undefined4 *)((longlong)local_2e0 + 4) = local_2b8._4_4_;
        *(undefined4 *)(local_2e0 + 1) = (undefined4)uStack_2b0;
        *(undefined4 *)((longlong)local_2e0 + 0xc) = uStack_2b0._4_4_;
        *pdVar19 = dVar26 + dVar20 + dVar6;
        pdVar19[1] = dVar5 + dVar24 + dVar28;
        pdVar19[2] = dVar3 + dVar4 + dVar2;
        *(undefined4 *)(pdVar19 + 3) = (undefined4)local_1a8;
        *(undefined4 *)((longlong)pdVar19 + 0x1c) = local_1a8._4_4_;
        *(undefined4 *)(pdVar19 + 4) = (undefined4)uStack_1a0;
        *(undefined4 *)((longlong)pdVar19 + 0x24) = uStack_1a0._4_4_;
        pdVar19[5] = local_198;
        pdVar19[6] = dStack_190;
        dVar20 = (double)(local_2c8 & 0xffffffff);
        dVar24 = dVar27;
      }
      if (local_138[0] != (undefined1 *)0x0) {
        pppuVar15 = local_128;
        if (local_128 == (undefined ***)0x0) {
          pppuVar15 = &local_118;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      uVar17 = (int)local_2c8 + 1;
      uVar16 = (ulonglong)uVar17;
    } while (uVar17 != local_2ec);
  }
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_2f8;
}



// FUNCTION 146bb6cd0 FUN_146bb6cd0 body=804 status=ok
// SIG undefined FUN_146bb6cd0(void)

int FUN_146bb6cd0(uint param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float local_2c;
  float local_24;
  
  fVar7 = *param_3;
  local_24 = *param_2;
  bVar1 = fVar7 <= -local_24 != local_24 < fVar7;
  if (!bVar1) {
    local_24 = fVar7;
  }
  uVar6 = (uint)bVar1;
  uVar5 = (byte)~bVar1 & 1;
  iVar2 = 0;
  local_2c = local_24;
  if ((int)uVar6 < (int)param_1) {
    fVar7 = param_3[uVar5];
    local_2c = param_2[uVar6];
    if (local_2c < fVar7 == fVar7 <= -local_2c) {
      local_2c = fVar7 + local_24;
      fVar7 = local_2c - param_3[uVar5];
      uVar5 = 2 - uVar6;
    }
    else {
      local_2c = local_2c + local_24;
      fVar7 = local_2c - param_2[uVar6];
      uVar6 = uVar6 + 1;
    }
    local_24 = local_24 - fVar7;
    if ((local_24 != 0.0) || (NAN(local_24))) {
      *param_4 = local_24;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    if (uVar6 < param_1) {
      do {
        fVar7 = param_3[(int)uVar5];
        fVar8 = param_2[(int)uVar6];
        if (fVar8 < fVar7 == fVar7 <= -fVar8) {
          fVar7 = fVar7 + local_2c;
          local_24 = (local_2c - (fVar7 - (fVar7 - local_2c))) +
                     (param_3[(int)uVar5] - (fVar7 - local_2c));
          uVar5 = uVar5 + 1;
          local_2c = fVar7;
        }
        else {
          fVar8 = fVar8 + local_2c;
          local_24 = (local_2c - (fVar8 - (fVar8 - local_2c))) +
                     (param_2[(int)uVar6] - (fVar8 - local_2c));
          uVar6 = uVar6 + 1;
          local_2c = fVar8;
        }
        if ((local_24 != 0.0) || (NAN(local_24))) {
          lVar3 = (longlong)iVar2;
          iVar2 = iVar2 + 1;
          param_4[lVar3] = local_24;
        }
      } while (((int)uVar6 < (int)param_1) && ((int)uVar5 < 4));
    }
  }
  if ((int)uVar6 < (int)param_1) {
    lVar3 = 0;
    fVar7 = local_2c;
    do {
      local_2c = param_2[(int)uVar6 + lVar3] + fVar7;
      fVar7 = (fVar7 - (local_2c - (local_2c - fVar7))) +
              (param_2[(int)uVar6 + lVar3] - (local_2c - fVar7));
      if ((fVar7 != 0.0) || (NAN(fVar7))) {
        lVar4 = (longlong)iVar2;
        iVar2 = iVar2 + 1;
        param_4[lVar4] = fVar7;
      }
      lVar3 = lVar3 + 1;
      fVar7 = local_2c;
    } while (param_1 - uVar6 != (int)lVar3);
  }
  if ((int)uVar5 < 4) {
    fVar7 = local_2c;
    lVar3 = (longlong)(int)uVar5;
    do {
      lVar4 = lVar3 + 1;
      local_2c = param_3[lVar3] + fVar7;
      fVar7 = (fVar7 - (local_2c - (local_2c - fVar7))) + (param_3[lVar3] - (local_2c - fVar7));
      if ((fVar7 != 0.0) || (NAN(fVar7))) {
        lVar3 = (longlong)iVar2;
        iVar2 = iVar2 + 1;
        param_4[lVar3] = fVar7;
      }
      fVar7 = local_2c;
      lVar3 = lVar4;
    } while ((int)lVar4 != 4);
  }
  if (((local_2c != 0.0) || (NAN(local_2c))) || (iVar2 == 0)) {
    lVar3 = (longlong)iVar2;
    iVar2 = iVar2 + 1;
    param_4[lVar3] = local_2c;
  }
  return iVar2;
}



// FUNCTION 146bb6ff4 FUN_146bb6ff4 body=3306 status=ok
// SIG undefined FUN_146bb6ff4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146bb6ff4(float *param_1,float *param_2,float *param_3,float param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_188 [36];
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined1 local_118 [64];
  undefined1 local_d8 [48];
  undefined1 local_a8 [32];
  float local_88 [6];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = *param_1 - *param_3;
  local_140 = *param_2 - *param_3;
  local_13c = param_1[1] - param_3[1];
  local_144 = param_2[1] - param_3[1];
  local_134 = local_138 * local_144;
  fVar4 = DAT_14c992010 * local_138 - (DAT_14c992010 * local_138 - local_138);
  fVar8 = DAT_14c992010 * local_144 - (DAT_14c992010 * local_144 - local_144);
  local_12c = local_13c * local_140;
  fVar5 = DAT_14c992010 * local_13c - (DAT_14c992010 * local_13c - local_13c);
  fVar4 = (local_144 - fVar8) * (local_138 - fVar4) -
          (((local_134 - fVar4 * fVar8) - fVar8 * (local_138 - fVar4)) - fVar4 * (local_144 - fVar8)
          );
  local_160 = DAT_14c992010 * local_140;
  local_158 = local_160 - local_140;
  fVar8 = local_160 - local_158;
  fVar8 = (local_140 - fVar8) * (local_13c - fVar5) -
          (((local_12c - fVar5 * fVar8) - fVar8 * (local_13c - fVar5)) - fVar5 * (local_140 - fVar8)
          );
  fVar5 = fVar4 - fVar8;
  fVar4 = (fVar4 - (fVar5 + (fVar4 - fVar5))) + ((fVar4 - fVar5) - fVar8);
  local_88[0] = fVar4;
  local_154 = local_134 + fVar5;
  fVar5 = (local_134 - (local_154 - (local_154 - local_134))) + (fVar5 - (local_154 - local_134));
  local_15c = fVar5 - local_12c;
  local_88[1] = (fVar5 - (local_15c + (fVar5 - local_15c))) + ((fVar5 - local_15c) - local_12c);
  local_130 = local_154 + local_15c;
  local_164 = local_130 - local_154;
  local_88[2] = (local_154 - (local_130 - local_164)) + (local_15c - local_164);
  local_88[3] = local_130;
  lVar3 = 1;
  do {
    fVar4 = fVar4 + local_88[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  if ((fVar4 < DAT_14c99201c * param_4) && (-fVar4 < DAT_14c99201c * param_4)) {
    fVar10 = (*param_1 - (local_138 + (*param_1 - local_138))) + ((*param_1 - local_138) - *param_3)
    ;
    fVar5 = (*param_2 - (local_140 + (*param_2 - local_140))) + ((*param_2 - local_140) - *param_3);
    fVar9 = (param_1[1] - (local_13c + (param_1[1] - local_13c))) +
            ((param_1[1] - local_13c) - param_3[1]);
    local_164 = param_2[1] - local_144;
    fVar8 = (param_2[1] - (local_144 + local_164)) + (local_164 - param_3[1]);
    if ((((fVar10 != 0.0) ||
         ((((NAN(fVar10) || (fVar9 != 0.0)) || (NAN(fVar9))) || ((fVar5 != 0.0 || (NAN(fVar5)))))))
        || (fVar8 != 0.0)) || (NAN(fVar8))) {
      fVar6 = param_4 * _DAT_14c992020 +
              (float)(~-(uint)(0.0 <= fVar4) & (uint)-fVar4 | -(uint)(0.0 <= fVar4) & (uint)fVar4) *
              _DAT_14c992014;
      fVar4 = ((local_144 * fVar10 + local_138 * fVar8) - (local_140 * fVar9 + local_13c * fVar5)) +
              fVar4;
      if ((fVar4 < fVar6) && (-fVar4 < fVar6)) {
        local_150 = local_144 * fVar10;
        fVar4 = DAT_14c992010 * fVar10 - (DAT_14c992010 * fVar10 - fVar10);
        fVar6 = DAT_14c992010 * local_144 - (DAT_14c992010 * local_144 - local_144);
        fVar4 = (local_144 - fVar6) * (fVar10 - fVar4) -
                (((local_150 - fVar4 * fVar6) - fVar6 * (fVar10 - fVar4)) -
                fVar4 * (local_144 - fVar6));
        local_14c = local_140 * fVar9;
        fVar6 = DAT_14c992010 * fVar9 - (DAT_14c992010 * fVar9 - fVar9);
        local_160 = DAT_14c992010 * local_140;
        local_158 = local_160 - local_140;
        fVar7 = local_160 - local_158;
        fVar7 = (local_140 - fVar7) * (fVar9 - fVar6) -
                (((local_14c - fVar6 * fVar7) - fVar7 * (fVar9 - fVar6)) -
                fVar6 * (local_140 - fVar7));
        fVar6 = fVar4 - fVar7;
        local_128 = (fVar4 - (fVar6 + (fVar4 - fVar6))) + ((fVar4 - fVar6) - fVar7);
        local_154 = local_150 + fVar6;
        fVar4 = (local_150 - (local_154 - (local_154 - local_150))) +
                (fVar6 - (local_154 - local_150));
        local_15c = fVar4 - local_14c;
        local_124 = (fVar4 - (local_15c + (fVar4 - local_15c))) + ((fVar4 - local_15c) - local_14c);
        local_148 = local_154 + local_15c;
        local_164 = local_148 - local_154;
        local_120 = (local_154 - (local_148 - local_164)) + (local_15c - local_164);
        local_11c = local_148;
        uVar1 = FUN_146bb6cd0(4,local_88,&local_128,local_a8);
        local_150 = local_138 * fVar8;
        fVar4 = DAT_14c992010 * local_138 - (DAT_14c992010 * local_138 - local_138);
        fVar6 = DAT_14c992010 * fVar8 - (DAT_14c992010 * fVar8 - fVar8);
        fVar4 = (fVar8 - fVar6) * (local_138 - fVar4) -
                (((local_150 - fVar4 * fVar6) - fVar6 * (local_138 - fVar4)) -
                fVar4 * (fVar8 - fVar6));
        local_14c = local_13c * fVar5;
        fVar6 = DAT_14c992010 * local_13c - (DAT_14c992010 * local_13c - local_13c);
        local_160 = DAT_14c992010 * fVar5;
        local_158 = local_160 - fVar5;
        fVar7 = local_160 - local_158;
        fVar7 = (fVar5 - fVar7) * (local_13c - fVar6) -
                (((local_14c - fVar6 * fVar7) - fVar7 * (local_13c - fVar6)) -
                fVar6 * (fVar5 - fVar7));
        fVar6 = fVar4 - fVar7;
        local_128 = (fVar4 - (fVar6 + (fVar4 - fVar6))) + ((fVar4 - fVar6) - fVar7);
        local_154 = local_150 + fVar6;
        fVar4 = (local_150 - (local_154 - (local_154 - local_150))) +
                (fVar6 - (local_154 - local_150));
        local_15c = fVar4 - local_14c;
        local_124 = (fVar4 - (local_15c + (fVar4 - local_15c))) + ((fVar4 - local_15c) - local_14c);
        local_148 = local_154 + local_15c;
        local_164 = local_148 - local_154;
        local_120 = (local_154 - (local_148 - local_164)) + (local_15c - local_164);
        local_11c = local_148;
        uVar1 = FUN_146bb6cd0(uVar1,local_a8,&local_128,local_d8);
        local_150 = fVar10 * fVar8;
        fVar4 = DAT_14c992010 * fVar10 - (DAT_14c992010 * fVar10 - fVar10);
        fVar6 = DAT_14c992010 * fVar8 - (DAT_14c992010 * fVar8 - fVar8);
        fVar10 = (fVar8 - fVar6) * (fVar10 - fVar4) -
                 (((local_150 - fVar4 * fVar6) - fVar6 * (fVar10 - fVar4)) - fVar4 * (fVar8 - fVar6)
                 );
        local_14c = fVar5 * fVar9;
        fVar4 = DAT_14c992010 * fVar9 - (DAT_14c992010 * fVar9 - fVar9);
        local_160 = DAT_14c992010 * fVar5;
        local_158 = local_160 - fVar5;
        fVar8 = local_160 - local_158;
        fVar5 = (fVar5 - fVar8) * (fVar9 - fVar4) -
                (((local_14c - fVar4 * fVar8) - fVar8 * (fVar9 - fVar4)) - fVar4 * (fVar5 - fVar8));
        fVar4 = fVar10 - fVar5;
        local_128 = (fVar10 - (fVar4 + (fVar10 - fVar4))) + ((fVar10 - fVar4) - fVar5);
        local_154 = local_150 + fVar4;
        fVar4 = (local_150 - (local_154 - (local_154 - local_150))) +
                (fVar4 - (local_154 - local_150));
        local_15c = fVar4 - local_14c;
        local_124 = (fVar4 - (local_15c + (fVar4 - local_15c))) + ((fVar4 - local_15c) - local_14c);
        local_148 = local_154 + local_15c;
        local_164 = local_148 - local_154;
        local_120 = (local_154 - (local_148 - local_164)) + (local_15c - local_164);
        local_11c = local_148;
        iVar2 = FUN_146bb6cd0(uVar1,local_d8,&local_128,local_118);
        fVar4 = *(float *)(local_118 + (longlong)iVar2 * 4 + -4);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar4);
  }
  return;
}



// FUNCTION 146bb7cdf FUN_146bb7cdf body=825 status=ok
// SIG undefined FUN_146bb7cdf(void)

int FUN_146bb7cdf(uint param_1,double *param_2,uint param_3,double *param_4,double *param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double local_40;
  double local_30;
  
  dVar7 = *param_4;
  local_30 = *param_2;
  bVar1 = dVar7 <= -local_30 != local_30 < dVar7;
  if (!bVar1) {
    local_30 = dVar7;
  }
  uVar5 = (uint)bVar1;
  uVar6 = (byte)~bVar1 & 1;
  iVar2 = 0;
  local_40 = local_30;
  if ((int)uVar6 < (int)param_3 && (int)uVar5 < (int)param_1) {
    dVar7 = param_4[uVar6];
    local_40 = param_2[uVar5];
    if (local_40 < dVar7 == dVar7 <= -local_40) {
      local_40 = dVar7 + local_30;
      dVar7 = local_40 - param_4[uVar6];
      uVar6 = 2 - uVar5;
    }
    else {
      local_40 = local_40 + local_30;
      dVar7 = local_40 - param_2[uVar5];
      uVar5 = uVar5 + 1;
    }
    local_30 = local_30 - dVar7;
    if ((local_30 != 0.0) || (NAN(local_30))) {
      *param_5 = local_30;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    if (uVar6 < param_3 && uVar5 < param_1) {
      do {
        dVar7 = param_4[(int)uVar6];
        dVar8 = param_2[(int)uVar5];
        if (dVar8 < dVar7 == dVar7 <= -dVar8) {
          dVar7 = dVar7 + local_40;
          local_30 = (local_40 - (dVar7 - (dVar7 - local_40))) +
                     (param_4[(int)uVar6] - (dVar7 - local_40));
          uVar6 = uVar6 + 1;
          local_40 = dVar7;
        }
        else {
          dVar8 = dVar8 + local_40;
          local_30 = (local_40 - (dVar8 - (dVar8 - local_40))) +
                     (param_2[(int)uVar5] - (dVar8 - local_40));
          uVar5 = uVar5 + 1;
          local_40 = dVar8;
        }
        if ((local_30 != 0.0) || (NAN(local_30))) {
          lVar3 = (longlong)iVar2;
          iVar2 = iVar2 + 1;
          param_5[lVar3] = local_30;
        }
      } while (((int)uVar5 < (int)param_1) && ((int)uVar6 < (int)param_3));
    }
  }
  if ((int)uVar5 < (int)param_1) {
    lVar3 = 0;
    dVar7 = local_40;
    do {
      local_40 = param_2[(int)uVar5 + lVar3] + dVar7;
      dVar7 = (dVar7 - (local_40 - (local_40 - dVar7))) +
              (param_2[(int)uVar5 + lVar3] - (local_40 - dVar7));
      if ((dVar7 != 0.0) || (NAN(dVar7))) {
        lVar4 = (longlong)iVar2;
        iVar2 = iVar2 + 1;
        param_5[lVar4] = dVar7;
      }
      lVar3 = lVar3 + 1;
      dVar7 = local_40;
    } while (param_1 - uVar5 != (int)lVar3);
  }
  if ((int)uVar6 < (int)param_3) {
    lVar3 = 0;
    dVar7 = local_40;
    do {
      local_40 = param_4[(int)uVar6 + lVar3] + dVar7;
      dVar7 = (dVar7 - (local_40 - (local_40 - dVar7))) +
              (param_4[(int)uVar6 + lVar3] - (local_40 - dVar7));
      if ((dVar7 != 0.0) || (NAN(dVar7))) {
        lVar4 = (longlong)iVar2;
        iVar2 = iVar2 + 1;
        param_5[lVar4] = dVar7;
      }
      lVar3 = lVar3 + 1;
      dVar7 = local_40;
    } while (param_3 - uVar6 != (int)lVar3);
  }
  if (((local_40 != 0.0) || (NAN(local_40))) || (iVar2 == 0)) {
    lVar3 = (longlong)iVar2;
    iVar2 = iVar2 + 1;
    param_5[lVar3] = local_40;
  }
  return iVar2;
}



// FUNCTION 146bb8018 FUN_146bb8018 body=559 status=ok
// SIG undefined FUN_146bb8018(void)

int FUN_146bb8018(uint param_1,double *param_2,double param_3,double *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_50;
  
  dVar4 = DAT_14c992028 * param_3 - (DAT_14c992028 * param_3 - param_3);
  dVar5 = param_3 - dVar4;
  local_50 = *param_2 * param_3;
  dVar6 = *param_2 * DAT_14c992028;
  dVar6 = dVar6 - (dVar6 - *param_2);
  dVar6 = (*param_2 - dVar6) * dVar5 -
          (((local_50 - dVar6 * dVar4) - (*param_2 - dVar6) * dVar4) - dVar6 * dVar5);
  if ((dVar6 != 0.0) || (NAN(dVar6))) {
    *param_4 = dVar6;
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  if (1 < (int)param_1) {
    uVar2 = 1;
    do {
      dVar6 = param_2[uVar2];
      dVar7 = dVar6 * param_3;
      dVar8 = DAT_14c992028 * dVar6 - (DAT_14c992028 * dVar6 - dVar6);
      dVar6 = (dVar6 - dVar8) * dVar5 -
              (((dVar7 - dVar8 * dVar4) - (dVar6 - dVar8) * dVar4) - dVar8 * dVar5);
      dVar8 = local_50 + dVar6;
      dVar6 = (local_50 - (dVar8 - (dVar8 - local_50))) + (dVar6 - (dVar8 - local_50));
      if ((dVar6 != 0.0) || (NAN(dVar6))) {
        lVar3 = (longlong)iVar1;
        iVar1 = iVar1 + 1;
        param_4[lVar3] = dVar6;
      }
      local_50 = dVar7 + dVar8;
      dVar8 = dVar8 - (local_50 - dVar7);
      if ((dVar8 != 0.0) || (NAN(dVar8))) {
        lVar3 = (longlong)iVar1;
        iVar1 = iVar1 + 1;
        param_4[lVar3] = dVar8;
      }
      uVar2 = uVar2 + 1;
    } while (param_1 != uVar2);
  }
  if (((local_50 != 0.0) || (NAN(local_50))) || (iVar1 == 0)) {
    lVar3 = (longlong)iVar1;
    iVar1 = iVar1 + 1;
    param_4[lVar3] = local_50;
  }
  return iVar1;
}



// FUNCTION 146bb8247 FUN_146bb8247 body=3477 status=ok
// SIG undefined FUN_146bb8247(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146bb8247(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
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
  undefined1 local_1b8 [128];
  undefined1 local_138 [96];
  undefined1 local_d8 [64];
  double local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_1f8 = *param_1 - *param_3;
  local_208 = *param_2 - *param_3;
  local_200 = param_1[1] - param_3[1];
  local_210 = param_2[1] - param_3[1];
  local_1f0 = local_1f8 * local_210;
  dVar5 = DAT_14c992028 * local_1f8 - (DAT_14c992028 * local_1f8 - local_1f8);
  dVar10 = DAT_14c992028 * local_210 - (DAT_14c992028 * local_210 - local_210);
  local_1e0 = local_200 * local_208;
  dVar6 = DAT_14c992028 * local_200 - (DAT_14c992028 * local_200 - local_200);
  dVar5 = (local_210 - dVar10) * (local_1f8 - dVar5) -
          (((local_1f0 - dVar5 * dVar10) - dVar10 * (local_1f8 - dVar5)) -
          dVar5 * (local_210 - dVar10));
  local_248 = DAT_14c992028 * local_208;
  local_238 = local_248 - local_208;
  dVar10 = local_248 - local_238;
  dVar10 = (local_208 - dVar10) * (local_200 - dVar6) -
           (((local_1e0 - dVar6 * dVar10) - dVar10 * (local_200 - dVar6)) -
           dVar6 * (local_208 - dVar10));
  dVar6 = dVar5 - dVar10;
  dVar5 = (dVar5 - (dVar6 + (dVar5 - dVar6))) + ((dVar5 - dVar6) - dVar10);
  local_98[0] = dVar5;
  local_230 = local_1f0 + dVar6;
  dVar6 = (local_1f0 - (local_230 - (local_230 - local_1f0))) + (dVar6 - (local_230 - local_1f0));
  local_240 = dVar6 - local_1e0;
  local_98[1] = (dVar6 - (local_240 + (dVar6 - local_240))) + ((dVar6 - local_240) - local_1e0);
  local_1e8 = local_230 + local_240;
  local_250 = local_1e8 - local_230;
  local_98[2] = (local_230 - (local_1e8 - local_250)) + (local_240 - local_250);
  local_98[3] = local_1e8;
  lVar4 = 1;
  do {
    dVar5 = dVar5 + local_98[lVar4];
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  if ((dVar5 < DAT_14c992040 * param_4) && (-dVar5 < DAT_14c992040 * param_4)) {
    dVar7 = (*param_1 - (local_1f8 + (*param_1 - local_1f8))) + ((*param_1 - local_1f8) - *param_3);
    dVar6 = (*param_2 - (local_208 + (*param_2 - local_208))) + ((*param_2 - local_208) - *param_3);
    dVar1 = (param_1[1] - (local_200 + (param_1[1] - local_200))) +
            ((param_1[1] - local_200) - param_3[1]);
    local_250 = param_2[1] - local_210;
    dVar10 = (param_2[1] - (local_210 + local_250)) + (local_250 - param_3[1]);
    if ((((dVar7 != 0.0) ||
         ((((NAN(dVar7) || (dVar1 != 0.0)) || (NAN(dVar1))) || ((dVar6 != 0.0 || (NAN(dVar6)))))))
        || (dVar10 != 0.0)) || (NAN(dVar10))) {
      dVar8 = param_4 * _DAT_14c992048 +
              (double)(~-(ulonglong)(0.0 <= dVar5) & (ulonglong)-dVar5 |
                      -(ulonglong)(0.0 <= dVar5) & (ulonglong)dVar5) * _DAT_14c992030;
      dVar5 = ((local_210 * dVar7 + local_1f8 * dVar10) - (local_208 * dVar1 + local_200 * dVar6)) +
              dVar5;
      if ((dVar5 < dVar8) && (-dVar5 < dVar8)) {
        local_228 = local_210 * dVar7;
        dVar5 = DAT_14c992028 * dVar7 - (DAT_14c992028 * dVar7 - dVar7);
        dVar8 = DAT_14c992028 * local_210 - (DAT_14c992028 * local_210 - local_210);
        dVar5 = (local_210 - dVar8) * (dVar7 - dVar5) -
                (((local_228 - dVar5 * dVar8) - dVar8 * (dVar7 - dVar5)) -
                dVar5 * (local_210 - dVar8));
        local_220 = local_208 * dVar1;
        dVar8 = DAT_14c992028 * dVar1 - (DAT_14c992028 * dVar1 - dVar1);
        local_248 = DAT_14c992028 * local_208;
        local_238 = local_248 - local_208;
        dVar9 = local_248 - local_238;
        dVar9 = (local_208 - dVar9) * (dVar1 - dVar8) -
                (((local_220 - dVar8 * dVar9) - dVar9 * (dVar1 - dVar8)) -
                dVar8 * (local_208 - dVar9));
        dVar8 = dVar5 - dVar9;
        local_1d8 = (dVar5 - (dVar8 + (dVar5 - dVar8))) + ((dVar5 - dVar8) - dVar9);
        local_230 = local_228 + dVar8;
        dVar5 = (local_228 - (local_230 - (local_230 - local_228))) +
                (dVar8 - (local_230 - local_228));
        local_240 = dVar5 - local_220;
        local_1d0 = (dVar5 - (local_240 + (dVar5 - local_240))) + ((dVar5 - local_240) - local_220);
        local_218 = local_230 + local_240;
        local_250 = local_218 - local_230;
        local_1c8 = (local_230 - (local_218 - local_250)) + (local_240 - local_250);
        local_258 = local_d8;
        local_1c0 = local_218;
        uVar2 = FUN_146bb7cdf(4,local_98,4,&local_1d8);
        local_228 = local_1f8 * dVar10;
        dVar5 = DAT_14c992028 * local_1f8 - (DAT_14c992028 * local_1f8 - local_1f8);
        dVar8 = DAT_14c992028 * dVar10 - (DAT_14c992028 * dVar10 - dVar10);
        dVar5 = (dVar10 - dVar8) * (local_1f8 - dVar5) -
                (((local_228 - dVar5 * dVar8) - dVar8 * (local_1f8 - dVar5)) -
                dVar5 * (dVar10 - dVar8));
        local_220 = local_200 * dVar6;
        dVar8 = DAT_14c992028 * local_200 - (DAT_14c992028 * local_200 - local_200);
        local_248 = DAT_14c992028 * dVar6;
        local_238 = local_248 - dVar6;
        dVar9 = local_248 - local_238;
        dVar9 = (dVar6 - dVar9) * (local_200 - dVar8) -
                (((local_220 - dVar8 * dVar9) - dVar9 * (local_200 - dVar8)) -
                dVar8 * (dVar6 - dVar9));
        dVar8 = dVar5 - dVar9;
        local_1d8 = (dVar5 - (dVar8 + (dVar5 - dVar8))) + ((dVar5 - dVar8) - dVar9);
        local_230 = local_228 + dVar8;
        dVar5 = (local_228 - (local_230 - (local_230 - local_228))) +
                (dVar8 - (local_230 - local_228));
        local_240 = dVar5 - local_220;
        local_1d0 = (dVar5 - (local_240 + (dVar5 - local_240))) + ((dVar5 - local_240) - local_220);
        local_218 = local_230 + local_240;
        local_250 = local_218 - local_230;
        local_1c8 = (local_230 - (local_218 - local_250)) + (local_240 - local_250);
        local_258 = local_138;
        local_1c0 = local_218;
        uVar2 = FUN_146bb7cdf(uVar2,local_d8,4,&local_1d8);
        local_228 = dVar7 * dVar10;
        dVar5 = DAT_14c992028 * dVar7 - (DAT_14c992028 * dVar7 - dVar7);
        dVar8 = DAT_14c992028 * dVar10 - (DAT_14c992028 * dVar10 - dVar10);
        dVar10 = (dVar10 - dVar8) * (dVar7 - dVar5) -
                 (((local_228 - dVar5 * dVar8) - dVar8 * (dVar7 - dVar5)) - dVar5 * (dVar10 - dVar8)
                 );
        local_220 = dVar6 * dVar1;
        dVar5 = DAT_14c992028 * dVar1 - (DAT_14c992028 * dVar1 - dVar1);
        local_248 = DAT_14c992028 * dVar6;
        local_238 = local_248 - dVar6;
        dVar7 = local_248 - local_238;
        dVar5 = (dVar6 - dVar7) * (dVar1 - dVar5) -
                (((local_220 - dVar5 * dVar7) - dVar7 * (dVar1 - dVar5)) - dVar5 * (dVar6 - dVar7));
        dVar6 = dVar10 - dVar5;
        local_1d8 = (dVar10 - (dVar6 + (dVar10 - dVar6))) + ((dVar10 - dVar6) - dVar5);
        local_230 = local_228 + dVar6;
        dVar5 = (local_228 - (local_230 - (local_230 - local_228))) +
                (dVar6 - (local_230 - local_228));
        local_240 = dVar5 - local_220;
        local_1d0 = (dVar5 - (local_240 + (dVar5 - local_240))) + ((dVar5 - local_240) - local_220);
        local_218 = local_230 + local_240;
        local_250 = local_218 - local_230;
        local_1c8 = (local_230 - (local_218 - local_250)) + (local_240 - local_250);
        local_258 = local_1b8;
        local_1c0 = local_218;
        iVar3 = FUN_146bb7cdf(uVar2,local_138,4,&local_1d8);
        dVar5 = *(double *)(local_1b8 + (longlong)iVar3 * 8 + -8);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(dVar5);
  }
  return;
}



// FUNCTION 146bb8fdd FUN_146bb8fdd body=19181 status=ok
// SIG undefined FUN_146bb8fdd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146bb8fdd(double *param_1,double *param_2,double *param_3,double *param_4,double param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_12e8 [32];
  double *local_12c8;
  double local_12c0;
  double local_12b8;
  double local_12b0;
  double local_12a8;
  double local_12a0;
  double local_1298;
  double local_1290;
  double local_1288;
  double local_1280;
  double local_1278;
  double local_1270;
  double local_1268;
  double local_1260;
  double local_1258;
  double local_1250;
  double local_1248;
  double local_1240;
  double local_1238;
  double local_1230;
  double local_1228;
  double local_1220;
  double local_1218;
  double local_1210;
  double local_1208;
  double local_1200;
  double local_11f8;
  double local_11f0;
  double local_11e8;
  double local_11e0;
  double local_11d8;
  double local_11d0;
  double local_11c8;
  double local_11c0;
  double local_11b8;
  double local_11b0;
  double local_11a8;
  double local_11a0;
  double *local_1198;
  double local_1190;
  double local_1188;
  double local_1180;
  double local_1178;
  double local_1170;
  double local_1168;
  double local_1160;
  double local_1158;
  double local_1150;
  double local_1148;
  double local_1140;
  double local_1138;
  undefined4 local_112c;
  double local_1128;
  undefined8 uStack_1120;
  undefined1 local_1118 [128];
  undefined1 local_1098 [96];
  double local_1038;
  double local_1030;
  double local_1028;
  double local_1020;
  undefined1 local_1018 [64];
  undefined1 local_fd8 [64];
  undefined1 local_f98 [64];
  double local_f58;
  double local_f50;
  double local_f48;
  double local_f40;
  double local_f38;
  double local_f30;
  double local_f28;
  double local_f20;
  double local_f18;
  double local_f10;
  double local_f08;
  double local_f00;
  double local_ef8;
  double local_ef0;
  double local_ee8;
  double dStack_ee0;
  double local_ed8;
  double local_ed0;
  double local_ec8;
  double local_ec0;
  double local_eb8;
  double local_eb0;
  double local_ea8;
  double dStack_ea0;
  double local_e98 [192];
  double local_898 [192];
  undefined1 local_298 [128];
  undefined1 local_218 [64];
  undefined1 local_1d8 [64];
  undefined1 local_198 [64];
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
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x146bb8ff3;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_12e8;
  local_1288 = *param_4;
  local_1278 = *param_1 - local_1288;
  local_1280 = *param_2 - local_1288;
  local_1288 = *param_3 - local_1288;
  local_1270 = param_4[1];
  local_1260 = param_1[1] - local_1270;
  local_1268 = param_2[1] - local_1270;
  local_1270 = param_3[1] - local_1270;
  local_1258 = param_4[2];
  local_1248 = param_1[2] - local_1258;
  local_1250 = param_2[2] - local_1258;
  local_1258 = param_3[2] - local_1258;
  local_11a0 = local_1280 * local_1270;
  dVar14 = DAT_14c992028 * local_1280 - (DAT_14c992028 * local_1280 - local_1280);
  dVar22 = DAT_14c992028 * local_1270 - (DAT_14c992028 * local_1270 - local_1270);
  dVar14 = (local_1270 - dVar22) * (local_1280 - dVar14) -
           (((local_11a0 - dVar14 * dVar22) - dVar22 * (local_1280 - dVar14)) -
           dVar14 * (local_1270 - dVar22));
  local_1138 = local_1288 * local_1268;
  dVar22 = DAT_14c992028 * local_1288 - (DAT_14c992028 * local_1288 - local_1288);
  local_12c0 = DAT_14c992028 * local_1268;
  local_12b8 = local_12c0 - local_1268;
  dVar23 = local_12c0 - local_12b8;
  dVar23 = (local_1268 - dVar23) * (local_1288 - dVar22) -
           (((local_1138 - dVar22 * dVar23) - dVar23 * (local_1288 - dVar22)) -
           dVar22 * (local_1268 - dVar23));
  dVar22 = dVar14 - dVar23;
  local_118 = (dVar14 - (dVar22 + (dVar14 - dVar22))) + ((dVar14 - dVar22) - dVar23);
  local_12a0 = local_11a0 + dVar22;
  dVar14 = (local_11a0 - (local_12a0 - (local_12a0 - local_11a0))) +
           (dVar22 - (local_12a0 - local_11a0));
  local_12a8 = dVar14 - local_1138;
  local_110 = (dVar14 - (local_12a8 + (dVar14 - local_12a8))) + ((dVar14 - local_12a8) - local_1138)
  ;
  local_1150 = local_12a0 + local_12a8;
  local_12b0 = local_1150 - local_12a0;
  local_108 = (local_12a0 - (local_1150 - local_12b0)) + (local_12a8 - local_12b0);
  local_1198 = param_3;
  local_100 = local_1150;
  uVar1 = FUN_146bb8018(4,&local_118,local_1248,local_198);
  local_11a8 = local_1288 * local_1260;
  dVar14 = DAT_14c992028 * local_1288 - (DAT_14c992028 * local_1288 - local_1288);
  dVar22 = DAT_14c992028 * local_1260 - (DAT_14c992028 * local_1260 - local_1260);
  dVar14 = (local_1260 - dVar22) * (local_1288 - dVar14) -
           (((local_11a8 - dVar14 * dVar22) - dVar22 * (local_1288 - dVar14)) -
           dVar14 * (local_1260 - dVar22));
  local_1140 = local_1278 * local_1270;
  dVar22 = DAT_14c992028 * local_1278 - (DAT_14c992028 * local_1278 - local_1278);
  local_12c0 = DAT_14c992028 * local_1270;
  local_12b8 = local_12c0 - local_1270;
  dVar23 = local_12c0 - local_12b8;
  dVar23 = (local_1270 - dVar23) * (local_1278 - dVar22) -
           (((local_1140 - dVar22 * dVar23) - dVar23 * (local_1278 - dVar22)) -
           dVar22 * (local_1270 - dVar23));
  dVar22 = dVar14 - dVar23;
  local_138 = (dVar14 - (dVar22 + (dVar14 - dVar22))) + ((dVar14 - dVar22) - dVar23);
  local_12a0 = local_11a8 + dVar22;
  dVar14 = (local_11a8 - (local_12a0 - (local_12a0 - local_11a8))) +
           (dVar22 - (local_12a0 - local_11a8));
  local_12a8 = dVar14 - local_1140;
  local_130 = (dVar14 - (local_12a8 + (dVar14 - local_12a8))) + ((dVar14 - local_12a8) - local_1140)
  ;
  local_1158 = local_12a0 + local_12a8;
  local_12b0 = local_1158 - local_12a0;
  local_128 = (local_12a0 - (local_1158 - local_12b0)) + (local_12a8 - local_12b0);
  local_120 = local_1158;
  uVar2 = FUN_146bb8018(4,&local_138,local_1250,local_1d8);
  local_11b0 = local_1278 * local_1268;
  dVar14 = DAT_14c992028 * local_1278 - (DAT_14c992028 * local_1278 - local_1278);
  dVar22 = DAT_14c992028 * local_1268 - (DAT_14c992028 * local_1268 - local_1268);
  dVar14 = (local_1268 - dVar22) * (local_1278 - dVar14) -
           (((local_11b0 - dVar14 * dVar22) - dVar22 * (local_1278 - dVar14)) -
           dVar14 * (local_1268 - dVar22));
  local_1148 = local_1280 * local_1260;
  dVar22 = DAT_14c992028 * local_1280 - (DAT_14c992028 * local_1280 - local_1280);
  local_12c0 = DAT_14c992028 * local_1260;
  local_12b8 = local_12c0 - local_1260;
  dVar23 = local_12c0 - local_12b8;
  dVar23 = (local_1260 - dVar23) * (local_1280 - dVar22) -
           (((local_1148 - dVar22 * dVar23) - dVar23 * (local_1280 - dVar22)) -
           dVar22 * (local_1260 - dVar23));
  dVar22 = dVar14 - dVar23;
  local_158 = (dVar14 - (dVar22 + (dVar14 - dVar22))) + ((dVar14 - dVar22) - dVar23);
  local_12a0 = local_11b0 + dVar22;
  dVar14 = (local_11b0 - (local_12a0 - (local_12a0 - local_11b0))) +
           (dVar22 - (local_12a0 - local_11b0));
  local_12a8 = dVar14 - local_1148;
  local_150 = (dVar14 - (local_12a8 + (dVar14 - local_12a8))) + ((dVar14 - local_12a8) - local_1148)
  ;
  local_1160 = local_12a0 + local_12a8;
  local_12b0 = local_1160 - local_12a0;
  local_148 = (local_12a0 - (local_1160 - local_12b0)) + (local_12a8 - local_12b0);
  local_140 = local_1160;
  uVar3 = FUN_146bb8018(4,&local_158,local_1258,local_218);
  local_12c8 = (double *)local_298;
  uVar1 = FUN_146bb7cdf(uVar1,local_198,uVar2,local_1d8);
  pdVar7 = local_898;
  local_12c8 = pdVar7;
  uVar4 = FUN_146bb7cdf(uVar1,local_298,uVar3,local_218);
  if (1 < (int)uVar4) {
    uVar6 = 1;
    do {
      local_898[0] = local_898[0] + local_898[uVar6];
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  if ((DAT_14c992058 * param_5 <= local_898[0]) || (DAT_14c992058 * param_5 <= -local_898[0]))
  goto LAB_146bb9d4c;
  dVar20 = (*param_1 - (local_1278 + (*param_1 - local_1278))) +
           ((*param_1 - local_1278) - *param_4);
  dVar21 = (*param_2 - (local_1280 + (*param_2 - local_1280))) +
           ((*param_2 - local_1280) - *param_4);
  dVar15 = (*local_1198 - (local_1288 + (*local_1198 - local_1288))) +
           ((*local_1198 - local_1288) - *param_4);
  dVar13 = (param_1[1] - (local_1260 + (param_1[1] - local_1260))) +
           ((param_1[1] - local_1260) - param_4[1]);
  dVar25 = (param_2[1] - (local_1268 + (param_2[1] - local_1268))) +
           ((param_2[1] - local_1268) - param_4[1]);
  dVar19 = (local_1198[1] - (local_1270 + (local_1198[1] - local_1270))) +
           ((local_1198[1] - local_1270) - param_4[1]);
  dVar23 = (param_1[2] - (local_1248 + (param_1[2] - local_1248))) +
           ((param_1[2] - local_1248) - param_4[2]);
  dVar22 = (param_2[2] - (local_1250 + (param_2[2] - local_1250))) +
           ((param_2[2] - local_1250) - param_4[2]);
  local_12b0 = local_1198[2] - local_1258;
  dVar14 = (local_1198[2] - (local_1258 + local_12b0)) + (local_12b0 - param_4[2]);
  if (((((dVar20 == 0.0) &&
        ((((!NAN(dVar20) && (dVar21 == 0.0)) && (!NAN(dVar21))) &&
         ((dVar15 == 0.0 && (!NAN(dVar15))))))) && (dVar13 == 0.0)) &&
      ((((!NAN(dVar13) && (dVar25 == 0.0)) &&
        ((!NAN(dVar25) && (((dVar19 == 0.0 && (!NAN(dVar19))) && (dVar23 == 0.0)))))) &&
       ((!NAN(dVar23) && (dVar22 == 0.0)))))) &&
     ((!NAN(dVar22) && ((dVar14 == 0.0 && (!NAN(dVar14))))))) goto LAB_146bb9d4c;
  dVar18 = param_5 * _DAT_14c992060 +
           (double)(~-(ulonglong)(0.0 <= local_898[0]) & (ulonglong)-local_898[0] |
                   -(ulonglong)(0.0 <= local_898[0]) & (ulonglong)local_898[0]) * _DAT_14c992030;
  local_898[0] = (local_1278 * local_1268 - local_1260 * local_1280) * dVar14 +
                 ((local_1268 * dVar20 + local_1278 * dVar25) -
                 (local_1280 * dVar13 + local_1260 * dVar21)) * local_1258 +
                 (local_1288 * local_1260 - local_1270 * local_1278) * dVar22 +
                 ((local_1260 * dVar15 + local_1288 * dVar13) -
                 (local_1278 * dVar19 + local_1270 * dVar20)) * local_1250 +
                 (local_1280 * local_1270 - local_1268 * local_1288) * dVar23 +
                 ((local_1270 * dVar21 + local_1280 * dVar19) -
                 (local_1288 * dVar25 + local_1268 * dVar15)) * local_1248 + local_898[0];
  if ((dVar18 <= local_898[0]) || (dVar18 <= -local_898[0])) goto LAB_146bb9d4c;
  if ((dVar20 != 0.0) || (NAN(dVar20))) {
    local_eb0 = local_1268 * dVar20;
    if ((dVar13 == 0.0) && (!NAN(dVar13))) {
      dVar18 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
      dVar17 = DAT_14c992028 * local_1268 - (DAT_14c992028 * local_1268 - local_1268);
      local_eb8 = (local_1268 - dVar17) * (dVar20 - dVar18) -
                  (((local_eb0 - dVar18 * dVar17) - dVar17 * (dVar20 - dVar18)) -
                  dVar18 * (local_1268 - dVar17));
      dVar18 = -dVar20;
      local_11f0 = local_1270 * dVar18;
      dVar17 = DAT_14c992028 * dVar18 - (DAT_14c992028 * dVar18 + dVar20);
      local_12c0 = DAT_14c992028 * local_1270;
      local_12b8 = local_12c0 - local_1270;
      dVar16 = local_12c0 - local_12b8;
      dVar26 = ((local_11f0 - dVar17 * dVar16) - dVar16 * (dVar18 - dVar17)) -
               dVar17 * (local_1270 - dVar16);
      local_ed8 = (local_1270 - dVar16) * (dVar18 - dVar17);
      goto LAB_146bba2ea;
    }
    dVar18 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
    dVar17 = DAT_14c992028 * local_1268 - (DAT_14c992028 * local_1268 - local_1268);
    dVar18 = (local_1268 - dVar17) * (dVar20 - dVar18) -
             (((local_eb0 - dVar18 * dVar17) - dVar17 * (dVar20 - dVar18)) -
             dVar18 * (local_1268 - dVar17));
    local_1190 = local_1280 * dVar13;
    dVar17 = DAT_14c992028 * dVar13 - (DAT_14c992028 * dVar13 - dVar13);
    dVar16 = DAT_14c992028 * local_1280 - (DAT_14c992028 * local_1280 - local_1280);
    dVar16 = (local_1280 - dVar16) * (dVar13 - dVar17) -
             (((local_1190 - dVar17 * dVar16) - dVar16 * (dVar13 - dVar17)) -
             dVar17 * (local_1280 - dVar16));
    dVar17 = dVar18 - dVar16;
    local_eb8 = (dVar18 - (dVar17 + (dVar18 - dVar17))) + ((dVar18 - dVar17) - dVar16);
    dVar18 = local_eb0 + dVar17;
    dVar26 = (local_eb0 - (dVar18 - (dVar18 - local_eb0))) + (dVar17 - (dVar18 - local_eb0));
    dVar17 = dVar26 - local_1190;
    local_11e8 = dVar18 + dVar17;
    local_ea8 = (dVar18 - (local_11e8 - (local_11e8 - dVar18))) + (dVar17 - (local_11e8 - dVar18));
    local_11d8 = local_1288 * dVar13;
    dVar18 = DAT_14c992028 * dVar13 - (DAT_14c992028 * dVar13 - dVar13);
    dVar24 = DAT_14c992028 * local_1288 - (DAT_14c992028 * local_1288 - local_1288);
    local_1170 = local_1270 * dVar20;
    dVar16 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
    dVar18 = (local_1288 - dVar24) * (dVar13 - dVar18) -
             (((local_11d8 - dVar18 * dVar24) - dVar24 * (dVar13 - dVar18)) -
             dVar18 * (local_1288 - dVar24));
    local_12c0 = DAT_14c992028 * local_1270;
    local_12b8 = local_12c0 - local_1270;
    dVar24 = local_12c0 - local_12b8;
    dVar24 = (local_1270 - dVar24) * (dVar20 - dVar16) -
             (((local_1170 - dVar16 * dVar24) - dVar24 * (dVar20 - dVar16)) -
             dVar16 * (local_1270 - dVar24));
    dVar16 = dVar18 - dVar24;
    local_ed8 = (dVar18 - (dVar16 + (dVar18 - dVar16))) + ((dVar18 - dVar16) - dVar24);
    local_12a0 = local_11d8 + dVar16;
    dVar18 = (local_11d8 - (local_12a0 - (local_12a0 - local_11d8))) +
             (dVar16 - (local_12a0 - local_11d8));
    local_12a8 = dVar18 - local_1170;
    local_ed0 = (dVar18 - (local_12a8 + (dVar18 - local_12a8))) +
                ((dVar18 - local_12a8) - local_1170);
    local_11f0 = local_12a0 + local_12a8;
    local_12b0 = local_11f0 - local_12a0;
    local_ec8 = (local_12a0 - (local_11f0 - local_12b0)) + (local_12a8 - local_12b0);
    uVar11 = 4;
    local_11c8 = local_eb0;
    local_ec0 = local_11f0;
    local_eb0 = (dVar26 - (dVar17 + (dVar26 - dVar17))) + ((dVar26 - dVar17) - local_1190);
    dStack_ea0 = local_11e8;
  }
  else if ((dVar13 != 0.0) || (NAN(dVar13))) {
    dVar18 = -dVar13;
    local_eb0 = local_1280 * dVar18;
    dVar17 = DAT_14c992028 * dVar18 - (DAT_14c992028 * dVar18 + dVar13);
    dVar16 = DAT_14c992028 * local_1280 - (DAT_14c992028 * local_1280 - local_1280);
    local_eb8 = (local_1280 - dVar16) * (dVar18 - dVar17) -
                (((local_eb0 - dVar17 * dVar16) - dVar16 * (dVar18 - dVar17)) -
                dVar17 * (local_1280 - dVar16));
    local_11f0 = local_1288 * dVar13;
    dVar18 = DAT_14c992028 * dVar13 - (DAT_14c992028 * dVar13 - dVar13);
    local_12c0 = DAT_14c992028 * local_1288;
    local_12b8 = local_12c0 - local_1288;
    dVar17 = local_12c0 - local_12b8;
    dVar26 = ((local_11f0 - dVar18 * dVar17) - dVar17 * (dVar13 - dVar18)) -
             dVar18 * (local_1288 - dVar17);
    local_ed8 = (local_1288 - dVar17) * (dVar13 - dVar18);
LAB_146bba2ea:
    local_ed8 = local_ed8 - dVar26;
    local_ed0 = local_11f0;
    uVar11 = 2;
    local_11e8 = local_eb0;
  }
  else {
    local_eb8 = 0.0;
    local_ed8 = 0.0;
    uVar11 = 1;
  }
  if ((dVar21 != 0.0) || (NAN(dVar21))) {
    local_ef0 = local_1270 * dVar21;
    if ((dVar25 == 0.0) && (!NAN(dVar25))) {
      dVar18 = DAT_14c992028 * dVar21 - (DAT_14c992028 * dVar21 - dVar21);
      dVar17 = DAT_14c992028 * local_1270 - (DAT_14c992028 * local_1270 - local_1270);
      local_ef8 = (local_1270 - dVar17) * (dVar21 - dVar18) -
                  (((local_ef0 - dVar18 * dVar17) - dVar17 * (dVar21 - dVar18)) -
                  dVar18 * (local_1270 - dVar17));
      dVar18 = -dVar21;
      local_1200 = local_1260 * dVar18;
      dVar17 = DAT_14c992028 * dVar18 - (DAT_14c992028 * dVar18 + dVar21);
      local_12c0 = DAT_14c992028 * local_1260;
      local_12b8 = local_12c0 - local_1260;
      dVar16 = local_12c0 - local_12b8;
      dVar26 = ((local_1200 - dVar17 * dVar16) - dVar16 * (dVar18 - dVar17)) -
               dVar17 * (local_1260 - dVar16);
      local_f18 = (local_1260 - dVar16) * (dVar18 - dVar17);
      goto LAB_146bbac05;
    }
    dVar18 = DAT_14c992028 * dVar21 - (DAT_14c992028 * dVar21 - dVar21);
    dVar17 = DAT_14c992028 * local_1270 - (DAT_14c992028 * local_1270 - local_1270);
    dVar18 = (local_1270 - dVar17) * (dVar21 - dVar18) -
             (((local_ef0 - dVar18 * dVar17) - dVar17 * (dVar21 - dVar18)) -
             dVar18 * (local_1270 - dVar17));
    local_1180 = local_1288 * dVar25;
    dVar17 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
    dVar16 = DAT_14c992028 * local_1288 - (DAT_14c992028 * local_1288 - local_1288);
    dVar16 = (local_1288 - dVar16) * (dVar25 - dVar17) -
             (((local_1180 - dVar17 * dVar16) - dVar16 * (dVar25 - dVar17)) -
             dVar17 * (local_1288 - dVar16));
    dVar17 = dVar18 - dVar16;
    local_ef8 = (dVar18 - (dVar17 + (dVar18 - dVar17))) + ((dVar18 - dVar17) - dVar16);
    dVar18 = local_ef0 + dVar17;
    dVar26 = (local_ef0 - (dVar18 - (dVar18 - local_ef0))) + (dVar17 - (dVar18 - local_ef0));
    dVar17 = dVar26 - local_1180;
    local_11f8 = dVar18 + dVar17;
    local_ee8 = (dVar18 - (local_11f8 - (local_11f8 - dVar18))) + (dVar17 - (local_11f8 - dVar18));
    local_11e0 = local_1278 * dVar25;
    dVar18 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
    dVar24 = DAT_14c992028 * local_1278 - (DAT_14c992028 * local_1278 - local_1278);
    local_1178 = local_1260 * dVar21;
    dVar16 = DAT_14c992028 * dVar21 - (DAT_14c992028 * dVar21 - dVar21);
    dVar18 = (local_1278 - dVar24) * (dVar25 - dVar18) -
             (((local_11e0 - dVar18 * dVar24) - dVar24 * (dVar25 - dVar18)) -
             dVar18 * (local_1278 - dVar24));
    local_12c0 = DAT_14c992028 * local_1260;
    local_12b8 = local_12c0 - local_1260;
    dVar24 = local_12c0 - local_12b8;
    dVar24 = (local_1260 - dVar24) * (dVar21 - dVar16) -
             (((local_1178 - dVar16 * dVar24) - dVar24 * (dVar21 - dVar16)) -
             dVar16 * (local_1260 - dVar24));
    dVar16 = dVar18 - dVar24;
    local_f18 = (dVar18 - (dVar16 + (dVar18 - dVar16))) + ((dVar18 - dVar16) - dVar24);
    local_12a0 = local_11e0 + dVar16;
    dVar18 = (local_11e0 - (local_12a0 - (local_12a0 - local_11e0))) +
             (dVar16 - (local_12a0 - local_11e0));
    local_12a8 = dVar18 - local_1178;
    local_f10 = (dVar18 - (local_12a8 + (dVar18 - local_12a8))) +
                ((dVar18 - local_12a8) - local_1178);
    local_1200 = local_12a0 + local_12a8;
    local_12b0 = local_1200 - local_12a0;
    local_f08 = (local_12a0 - (local_1200 - local_12b0)) + (local_12a8 - local_12b0);
    uVar12 = 4;
    local_11b8 = local_ef0;
    local_f00 = local_1200;
    local_ef0 = (dVar26 - (dVar17 + (dVar26 - dVar17))) + ((dVar26 - dVar17) - local_1180);
    dStack_ee0 = local_11f8;
  }
  else if ((dVar25 != 0.0) || (NAN(dVar25))) {
    dVar18 = -dVar25;
    local_ef0 = local_1288 * dVar18;
    dVar17 = DAT_14c992028 * dVar18 - (DAT_14c992028 * dVar18 + dVar25);
    dVar16 = DAT_14c992028 * local_1288 - (DAT_14c992028 * local_1288 - local_1288);
    local_ef8 = (local_1288 - dVar16) * (dVar18 - dVar17) -
                (((local_ef0 - dVar17 * dVar16) - dVar16 * (dVar18 - dVar17)) -
                dVar17 * (local_1288 - dVar16));
    local_1200 = local_1278 * dVar25;
    dVar18 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
    local_12c0 = DAT_14c992028 * local_1278;
    local_12b8 = local_12c0 - local_1278;
    dVar17 = local_12c0 - local_12b8;
    dVar26 = ((local_1200 - dVar18 * dVar17) - dVar17 * (dVar25 - dVar18)) -
             dVar18 * (local_1278 - dVar17);
    local_f18 = (local_1278 - dVar17) * (dVar25 - dVar18);
LAB_146bbac05:
    local_f18 = local_f18 - dVar26;
    local_f10 = local_1200;
    uVar12 = 2;
    local_11f8 = local_ef0;
  }
  else {
    local_ef8 = 0.0;
    local_f18 = 0.0;
    uVar12 = 1;
  }
  if ((dVar15 != 0.0) || (NAN(dVar15))) {
    local_f30 = local_1260 * dVar15;
    if ((dVar19 == 0.0) && (!NAN(dVar19))) {
      dVar18 = DAT_14c992028 * dVar15 - (DAT_14c992028 * dVar15 - dVar15);
      dVar17 = DAT_14c992028 * local_1260 - (DAT_14c992028 * local_1260 - local_1260);
      local_f38 = (local_1260 - dVar17) * (dVar15 - dVar18) -
                  (((local_f30 - dVar18 * dVar17) - dVar17 * (dVar15 - dVar18)) -
                  dVar18 * (local_1260 - dVar17));
      dVar18 = -dVar15;
      local_1210 = local_1268 * dVar18;
      dVar17 = DAT_14c992028 * dVar18 - (DAT_14c992028 * dVar18 + dVar15);
      local_12c0 = DAT_14c992028 * local_1268;
      local_12b8 = local_12c0 - local_1268;
      dVar16 = local_12c0 - local_12b8;
      dVar26 = ((local_1210 - dVar17 * dVar16) - dVar16 * (dVar18 - dVar17)) -
               dVar17 * (local_1268 - dVar16);
      local_f58 = (local_1268 - dVar16) * (dVar18 - dVar17);
      goto LAB_146bbb52e;
    }
    dVar18 = DAT_14c992028 * dVar15 - (DAT_14c992028 * dVar15 - dVar15);
    dVar17 = DAT_14c992028 * local_1260 - (DAT_14c992028 * local_1260 - local_1260);
    dVar18 = (local_1260 - dVar17) * (dVar15 - dVar18) -
             (((local_f30 - dVar18 * dVar17) - dVar17 * (dVar15 - dVar18)) -
             dVar18 * (local_1260 - dVar17));
    local_1188 = local_1278 * dVar19;
    dVar17 = DAT_14c992028 * dVar19 - (DAT_14c992028 * dVar19 - dVar19);
    dVar16 = DAT_14c992028 * local_1278 - (DAT_14c992028 * local_1278 - local_1278);
    dVar16 = (local_1278 - dVar16) * (dVar19 - dVar17) -
             (((local_1188 - dVar17 * dVar16) - dVar16 * (dVar19 - dVar17)) -
             dVar17 * (local_1278 - dVar16));
    dVar17 = dVar18 - dVar16;
    local_f38 = (dVar18 - (dVar17 + (dVar18 - dVar17))) + ((dVar18 - dVar17) - dVar16);
    dVar18 = local_f30 + dVar17;
    dVar26 = (local_f30 - (dVar18 - (dVar18 - local_f30))) + (dVar17 - (dVar18 - local_f30));
    dVar17 = dVar26 - local_1188;
    local_1208 = dVar18 + dVar17;
    local_f28 = (dVar18 - (local_1208 - (local_1208 - dVar18))) + (dVar17 - (local_1208 - dVar18));
    local_11d0 = local_1280 * dVar19;
    dVar18 = DAT_14c992028 * dVar19 - (DAT_14c992028 * dVar19 - dVar19);
    dVar24 = DAT_14c992028 * local_1280 - (DAT_14c992028 * local_1280 - local_1280);
    local_1168 = local_1268 * dVar15;
    dVar16 = DAT_14c992028 * dVar15 - (DAT_14c992028 * dVar15 - dVar15);
    dVar18 = (local_1280 - dVar24) * (dVar19 - dVar18) -
             (((local_11d0 - dVar18 * dVar24) - dVar24 * (dVar19 - dVar18)) -
             dVar18 * (local_1280 - dVar24));
    local_12c0 = DAT_14c992028 * local_1268;
    local_12b8 = local_12c0 - local_1268;
    dVar24 = local_12c0 - local_12b8;
    dVar24 = (local_1268 - dVar24) * (dVar15 - dVar16) -
             (((local_1168 - dVar16 * dVar24) - dVar24 * (dVar15 - dVar16)) -
             dVar16 * (local_1268 - dVar24));
    dVar16 = dVar18 - dVar24;
    local_f58 = (dVar18 - (dVar16 + (dVar18 - dVar16))) + ((dVar18 - dVar16) - dVar24);
    local_12a0 = local_11d0 + dVar16;
    dVar18 = (local_11d0 - (local_12a0 - (local_12a0 - local_11d0))) +
             (dVar16 - (local_12a0 - local_11d0));
    local_12a8 = dVar18 - local_1168;
    local_f50 = (dVar18 - (local_12a8 + (dVar18 - local_12a8))) +
                ((dVar18 - local_12a8) - local_1168);
    local_1210 = local_12a0 + local_12a8;
    local_12b0 = local_1210 - local_12a0;
    local_f48 = (local_12a0 - (local_1210 - local_12b0)) + (local_12a8 - local_12b0);
    uVar1 = 4;
    local_11c0 = local_f30;
    local_f40 = local_1210;
    local_f30 = (dVar26 - (dVar17 + (dVar26 - dVar17))) + ((dVar26 - dVar17) - local_1188);
    local_f20 = local_1208;
  }
  else if ((dVar19 != 0.0) || (NAN(dVar19))) {
    dVar18 = -dVar19;
    local_f30 = local_1278 * dVar18;
    dVar17 = DAT_14c992028 * dVar18 - (DAT_14c992028 * dVar18 + dVar19);
    dVar16 = DAT_14c992028 * local_1278 - (DAT_14c992028 * local_1278 - local_1278);
    local_f38 = (local_1278 - dVar16) * (dVar18 - dVar17) -
                (((local_f30 - dVar17 * dVar16) - dVar16 * (dVar18 - dVar17)) -
                dVar17 * (local_1278 - dVar16));
    local_1210 = local_1280 * dVar19;
    dVar18 = DAT_14c992028 * dVar19 - (DAT_14c992028 * dVar19 - dVar19);
    local_12c0 = DAT_14c992028 * local_1280;
    local_12b8 = local_12c0 - local_1280;
    dVar17 = local_12c0 - local_12b8;
    dVar26 = ((local_1210 - dVar18 * dVar17) - dVar17 * (dVar19 - dVar18)) -
             dVar18 * (local_1280 - dVar17);
    local_f58 = (local_1280 - dVar17) * (dVar19 - dVar18);
LAB_146bbb52e:
    local_f58 = local_f58 - dVar26;
    local_f50 = local_1210;
    uVar1 = 2;
    local_1208 = local_f30;
  }
  else {
    local_f38 = 0.0;
    local_f58 = 0.0;
    uVar1 = 1;
  }
  local_12c8 = (double *)local_f98;
  local_112c = FUN_146bb7cdf(uVar12,&local_ef8,uVar1,&local_f58);
  uVar2 = FUN_146bb8018(local_112c,local_f98,local_1248,local_1118);
  pdVar9 = local_e98;
  local_12c8 = pdVar9;
  uVar2 = FUN_146bb7cdf((ulonglong)uVar4,pdVar7,uVar2,local_1118);
  local_12c8 = (double *)local_fd8;
  uVar1 = FUN_146bb7cdf(uVar1,&local_f38,uVar11,&local_ed8);
  uVar3 = FUN_146bb8018(uVar1,local_fd8,local_1250,local_1118);
  local_12c8 = pdVar7;
  uVar2 = FUN_146bb7cdf(uVar2,pdVar9,uVar3,local_1118);
  local_12c8 = (double *)local_1018;
  uVar3 = FUN_146bb7cdf(uVar11,&local_eb8,uVar12,&local_f18);
  local_1198 = (double *)CONCAT44(local_1198._4_4_,uVar3);
  uVar3 = FUN_146bb8018(uVar3,local_1018,local_1258,local_1118);
  local_12c8 = pdVar9;
  iVar5 = FUN_146bb7cdf(uVar2,pdVar7,uVar3,local_1118);
  if ((dVar23 != 0.0) || (NAN(dVar23))) {
    uVar2 = FUN_146bb8018(4,&local_118,dVar23,local_1098);
    pdVar9 = local_898;
    pdVar7 = local_e98;
    local_12c8 = pdVar9;
    iVar5 = FUN_146bb7cdf(iVar5,pdVar7,uVar2,local_1098);
  }
  if ((dVar22 != 0.0) || (pdVar8 = pdVar9, NAN(dVar22))) {
    uVar2 = FUN_146bb8018(4,&local_138,dVar22,local_1098);
    local_12c8 = pdVar7;
    iVar5 = FUN_146bb7cdf(iVar5,pdVar9,uVar2,local_1098);
    pdVar8 = pdVar7;
    pdVar7 = pdVar9;
  }
  if ((dVar14 != 0.0) || (pdVar9 = pdVar7, NAN(dVar14))) {
    uVar2 = FUN_146bb8018(4,&local_158,dVar14,local_1098);
    local_12c8 = pdVar7;
    iVar5 = FUN_146bb7cdf(iVar5,pdVar8,uVar2,local_1098);
    pdVar9 = pdVar8;
    pdVar8 = pdVar7;
  }
  if ((dVar20 != 0.0) || (NAN(dVar20))) {
    if ((dVar25 != 0.0) || (pdVar7 = pdVar9, pdVar10 = pdVar8, NAN(dVar25))) {
      local_1238 = dVar20 * dVar25;
      dVar18 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
      dVar17 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
      local_1128 = (dVar25 - dVar17) * (dVar20 - dVar18) -
                   (((local_1238 - dVar18 * dVar17) - dVar17 * (dVar20 - dVar18)) -
                   dVar18 * (dVar25 - dVar17));
      dVar17 = DAT_14c992028 * local_1258 - (DAT_14c992028 * local_1258 - local_1258);
      dVar18 = local_1258 - dVar17;
      local_12a8 = local_1258 * local_1128;
      dVar16 = DAT_14c992028 * local_1128 - (DAT_14c992028 * local_1128 - local_1128);
      uStack_1120 = 0;
      local_1038 = (local_1128 - dVar16) * dVar18 -
                   (((local_12a8 - dVar16 * dVar17) - (local_1128 - dVar16) * dVar17) -
                   dVar16 * dVar18);
      local_12a0 = local_1238 * local_1258;
      local_12c0 = DAT_14c992028 * local_1238;
      local_12b8 = local_12c0 - local_1238;
      dVar16 = local_12c0 - local_12b8;
      dVar18 = (local_1238 - dVar16) * dVar18 -
               (((local_12a0 - dVar16 * dVar17) - dVar17 * (local_1238 - dVar16)) - dVar16 * dVar18)
      ;
      local_1298 = local_12a8 + dVar18;
      local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                   (dVar18 - (local_1298 - local_12a8));
      local_1290 = local_12a0 + local_1298;
      local_12b0 = local_1290 - local_12a0;
      local_1028 = local_1298 - local_12b0;
      local_12c8 = pdVar9;
      local_1020 = local_1290;
      iVar5 = FUN_146bb7cdf(iVar5,pdVar8,4);
      if ((dVar14 != 0.0) || (pdVar7 = pdVar8, pdVar10 = pdVar9, NAN(dVar14))) {
        dVar17 = DAT_14c992028 * dVar14 - (DAT_14c992028 * dVar14 - dVar14);
        dVar18 = dVar14 - dVar17;
        local_12a8 = dVar14 * local_1128;
        dVar16 = DAT_14c992028 * local_1128 - (DAT_14c992028 * local_1128 - local_1128);
        local_1038 = (local_1128 - dVar16) * dVar18 -
                     (((local_12a8 - dVar16 * dVar17) - (local_1128 - dVar16) * dVar17) -
                     dVar16 * dVar18);
        local_12a0 = local_1238 * dVar14;
        local_12c0 = DAT_14c992028 * local_1238;
        local_12b8 = local_12c0 - local_1238;
        dVar16 = local_12c0 - local_12b8;
        dVar18 = (local_1238 - dVar16) * dVar18 -
                 (((local_12a0 - dVar16 * dVar17) - dVar17 * (local_1238 - dVar16)) -
                 dVar16 * dVar18);
        local_1298 = local_12a8 + dVar18;
        local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                     (dVar18 - (local_1298 - local_12a8));
        local_1290 = local_12a0 + local_1298;
        local_12b0 = local_1290 - local_12a0;
        local_1028 = local_1298 - local_12b0;
        local_12c8 = pdVar8;
        local_1020 = local_1290;
        iVar5 = FUN_146bb7cdf(iVar5,pdVar9,4);
        pdVar7 = pdVar9;
        pdVar10 = pdVar8;
      }
    }
    if ((dVar19 != 0.0) || (pdVar9 = pdVar7, pdVar8 = pdVar10, NAN(dVar19))) {
      dVar18 = -dVar20;
      local_1230 = dVar19 * dVar18;
      dVar20 = DAT_14c992028 * dVar18 - (dVar20 + DAT_14c992028 * dVar18);
      dVar17 = DAT_14c992028 * dVar19 - (DAT_14c992028 * dVar19 - dVar19);
      dVar20 = (dVar19 - dVar17) * (dVar18 - dVar20) -
               (((local_1230 - dVar20 * dVar17) - dVar17 * (dVar18 - dVar20)) -
               dVar20 * (dVar19 - dVar17));
      dVar17 = DAT_14c992028 * local_1250 - (DAT_14c992028 * local_1250 - local_1250);
      dVar18 = local_1250 - dVar17;
      local_12a8 = local_1250 * dVar20;
      dVar16 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
      local_1038 = (dVar20 - dVar16) * dVar18 -
                   (((local_12a8 - dVar16 * dVar17) - (dVar20 - dVar16) * dVar17) - dVar16 * dVar18)
      ;
      local_12a0 = local_1230 * local_1250;
      local_12c0 = DAT_14c992028 * local_1230;
      local_12b8 = local_12c0 - local_1230;
      dVar16 = local_12c0 - local_12b8;
      dVar18 = (local_1230 - dVar16) * dVar18 -
               (((local_12a0 - dVar16 * dVar17) - dVar17 * (local_1230 - dVar16)) - dVar16 * dVar18)
      ;
      local_1298 = local_12a8 + dVar18;
      local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                   (dVar18 - (local_1298 - local_12a8));
      local_1290 = local_12a0 + local_1298;
      local_12b0 = local_1290 - local_12a0;
      local_1028 = local_1298 - local_12b0;
      local_12c8 = pdVar7;
      local_1020 = local_1290;
      iVar5 = FUN_146bb7cdf(iVar5,pdVar10,4);
      if ((dVar22 != 0.0) || (pdVar9 = pdVar10, pdVar8 = pdVar7, NAN(dVar22))) {
        dVar17 = DAT_14c992028 * dVar22 - (DAT_14c992028 * dVar22 - dVar22);
        dVar18 = dVar22 - dVar17;
        local_12a8 = dVar22 * dVar20;
        dVar16 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
        local_1038 = (dVar20 - dVar16) * dVar18 -
                     (((local_12a8 - dVar16 * dVar17) - (dVar20 - dVar16) * dVar17) -
                     dVar16 * dVar18);
        local_12a0 = local_1230 * dVar22;
        local_12c0 = DAT_14c992028 * local_1230;
        local_12b8 = local_12c0 - local_1230;
        dVar20 = local_12c0 - local_12b8;
        dVar20 = (local_1230 - dVar20) * dVar18 -
                 (((local_12a0 - dVar20 * dVar17) - dVar17 * (local_1230 - dVar20)) -
                 dVar20 * dVar18);
        local_1298 = local_12a8 + dVar20;
        local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                     (dVar20 - (local_1298 - local_12a8));
        local_1290 = local_12a0 + local_1298;
        local_12b0 = local_1290 - local_12a0;
        local_1028 = local_1298 - local_12b0;
        local_12c8 = pdVar10;
        local_1020 = local_1290;
        iVar5 = FUN_146bb7cdf(iVar5,pdVar7,4);
        pdVar9 = pdVar7;
        pdVar8 = pdVar10;
      }
    }
  }
  if ((dVar21 != 0.0) || (NAN(dVar21))) {
    if ((dVar19 != 0.0) || (pdVar7 = pdVar9, pdVar10 = pdVar8, NAN(dVar19))) {
      local_1218 = dVar21 * dVar19;
      dVar20 = DAT_14c992028 * dVar21 - (DAT_14c992028 * dVar21 - dVar21);
      dVar18 = DAT_14c992028 * dVar19 - (DAT_14c992028 * dVar19 - dVar19);
      dVar19 = (dVar19 - dVar18) * (dVar21 - dVar20) -
               (((local_1218 - dVar20 * dVar18) - dVar18 * (dVar21 - dVar20)) -
               dVar20 * (dVar19 - dVar18));
      dVar18 = DAT_14c992028 * local_1248 - (DAT_14c992028 * local_1248 - local_1248);
      dVar20 = local_1248 - dVar18;
      local_12a8 = local_1248 * dVar19;
      dVar17 = DAT_14c992028 * dVar19 - (DAT_14c992028 * dVar19 - dVar19);
      local_1038 = (dVar19 - dVar17) * dVar20 -
                   (((local_12a8 - dVar17 * dVar18) - (dVar19 - dVar17) * dVar18) - dVar17 * dVar20)
      ;
      local_12a0 = local_1218 * local_1248;
      local_12c0 = DAT_14c992028 * local_1218;
      local_12b8 = local_12c0 - local_1218;
      dVar17 = local_12c0 - local_12b8;
      dVar20 = (local_1218 - dVar17) * dVar20 -
               (((local_12a0 - dVar17 * dVar18) - dVar18 * (local_1218 - dVar17)) - dVar17 * dVar20)
      ;
      local_1298 = local_12a8 + dVar20;
      local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                   (dVar20 - (local_1298 - local_12a8));
      local_1290 = local_12a0 + local_1298;
      local_12b0 = local_1290 - local_12a0;
      local_1028 = local_1298 - local_12b0;
      local_12c8 = pdVar9;
      local_1020 = local_1290;
      iVar5 = FUN_146bb7cdf(iVar5,pdVar8,4);
      if ((dVar23 != 0.0) || (pdVar7 = pdVar8, pdVar10 = pdVar9, NAN(dVar23))) {
        dVar18 = DAT_14c992028 * dVar23 - (DAT_14c992028 * dVar23 - dVar23);
        dVar20 = dVar23 - dVar18;
        local_12a8 = dVar23 * dVar19;
        dVar17 = DAT_14c992028 * dVar19 - (DAT_14c992028 * dVar19 - dVar19);
        local_1038 = (dVar19 - dVar17) * dVar20 -
                     (((local_12a8 - dVar17 * dVar18) - (dVar19 - dVar17) * dVar18) -
                     dVar17 * dVar20);
        local_12a0 = local_1218 * dVar23;
        local_12c0 = DAT_14c992028 * local_1218;
        local_12b8 = local_12c0 - local_1218;
        dVar19 = local_12c0 - local_12b8;
        dVar19 = (local_1218 - dVar19) * dVar20 -
                 (((local_12a0 - dVar19 * dVar18) - dVar18 * (local_1218 - dVar19)) -
                 dVar19 * dVar20);
        local_1298 = local_12a8 + dVar19;
        local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                     (dVar19 - (local_1298 - local_12a8));
        local_1290 = local_12a0 + local_1298;
        local_12b0 = local_1290 - local_12a0;
        local_1028 = local_1298 - local_12b0;
        local_12c8 = pdVar8;
        local_1020 = local_1290;
        iVar5 = FUN_146bb7cdf(iVar5,pdVar9,4);
        pdVar7 = pdVar9;
        pdVar10 = pdVar8;
      }
    }
    if ((dVar13 != 0.0) || (pdVar9 = pdVar7, pdVar8 = pdVar10, NAN(dVar13))) {
      dVar19 = -dVar21;
      local_1240 = dVar13 * dVar19;
      dVar21 = DAT_14c992028 * dVar19 - (dVar21 + DAT_14c992028 * dVar19);
      dVar20 = DAT_14c992028 * dVar13 - (DAT_14c992028 * dVar13 - dVar13);
      dVar21 = (dVar13 - dVar20) * (dVar19 - dVar21) -
               (((local_1240 - dVar21 * dVar20) - dVar20 * (dVar19 - dVar21)) -
               dVar21 * (dVar13 - dVar20));
      dVar20 = DAT_14c992028 * local_1258 - (DAT_14c992028 * local_1258 - local_1258);
      dVar19 = local_1258 - dVar20;
      local_12a8 = local_1258 * dVar21;
      dVar18 = DAT_14c992028 * dVar21 - (DAT_14c992028 * dVar21 - dVar21);
      local_1038 = (dVar21 - dVar18) * dVar19 -
                   (((local_12a8 - dVar18 * dVar20) - (dVar21 - dVar18) * dVar20) - dVar18 * dVar19)
      ;
      local_12a0 = local_1240 * local_1258;
      local_12c0 = DAT_14c992028 * local_1240;
      local_12b8 = local_12c0 - local_1240;
      dVar18 = local_12c0 - local_12b8;
      dVar19 = (local_1240 - dVar18) * dVar19 -
               (((local_12a0 - dVar18 * dVar20) - dVar20 * (local_1240 - dVar18)) - dVar18 * dVar19)
      ;
      local_1298 = local_12a8 + dVar19;
      local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                   (dVar19 - (local_1298 - local_12a8));
      local_1290 = local_12a0 + local_1298;
      local_12b0 = local_1290 - local_12a0;
      local_1028 = local_1298 - local_12b0;
      local_12c8 = pdVar7;
      local_1020 = local_1290;
      iVar5 = FUN_146bb7cdf(iVar5,pdVar10,4);
      if ((dVar14 != 0.0) || (pdVar9 = pdVar10, pdVar8 = pdVar7, NAN(dVar14))) {
        dVar20 = DAT_14c992028 * dVar14 - (DAT_14c992028 * dVar14 - dVar14);
        dVar19 = dVar14 - dVar20;
        local_12a8 = dVar14 * dVar21;
        dVar18 = DAT_14c992028 * dVar21 - (DAT_14c992028 * dVar21 - dVar21);
        local_1038 = (dVar21 - dVar18) * dVar19 -
                     (((local_12a8 - dVar18 * dVar20) - (dVar21 - dVar18) * dVar20) -
                     dVar18 * dVar19);
        local_12a0 = local_1240 * dVar14;
        local_12c0 = DAT_14c992028 * local_1240;
        local_12b8 = local_12c0 - local_1240;
        dVar21 = local_12c0 - local_12b8;
        dVar21 = (local_1240 - dVar21) * dVar19 -
                 (((local_12a0 - dVar21 * dVar20) - dVar20 * (local_1240 - dVar21)) -
                 dVar21 * dVar19);
        local_1298 = local_12a8 + dVar21;
        local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                     (dVar21 - (local_1298 - local_12a8));
        local_1290 = local_12a0 + local_1298;
        local_12b0 = local_1290 - local_12a0;
        local_1028 = local_1298 - local_12b0;
        local_12c8 = pdVar10;
        local_1020 = local_1290;
        iVar5 = FUN_146bb7cdf(iVar5,pdVar7,4);
        pdVar9 = pdVar7;
        pdVar8 = pdVar10;
      }
    }
  }
  pdVar7 = pdVar9;
  if ((dVar15 != 0.0) || (NAN(dVar15))) {
    if ((dVar13 != 0.0) || (pdVar10 = pdVar8, NAN(dVar13))) {
      local_1228 = dVar15 * dVar13;
      dVar21 = DAT_14c992028 * dVar15 - (DAT_14c992028 * dVar15 - dVar15);
      dVar19 = DAT_14c992028 * dVar13 - (DAT_14c992028 * dVar13 - dVar13);
      dVar13 = (dVar13 - dVar19) * (dVar15 - dVar21) -
               (((local_1228 - dVar21 * dVar19) - dVar19 * (dVar15 - dVar21)) -
               dVar21 * (dVar13 - dVar19));
      dVar19 = DAT_14c992028 * local_1250 - (DAT_14c992028 * local_1250 - local_1250);
      dVar21 = local_1250 - dVar19;
      local_12a8 = local_1250 * dVar13;
      dVar20 = DAT_14c992028 * dVar13 - (DAT_14c992028 * dVar13 - dVar13);
      local_1038 = (dVar13 - dVar20) * dVar21 -
                   (((local_12a8 - dVar20 * dVar19) - (dVar13 - dVar20) * dVar19) - dVar20 * dVar21)
      ;
      local_12a0 = local_1228 * local_1250;
      local_12c0 = DAT_14c992028 * local_1228;
      local_12b8 = local_12c0 - local_1228;
      dVar20 = local_12c0 - local_12b8;
      dVar21 = (local_1228 - dVar20) * dVar21 -
               (((local_12a0 - dVar20 * dVar19) - dVar19 * (local_1228 - dVar20)) - dVar20 * dVar21)
      ;
      local_1298 = local_12a8 + dVar21;
      local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                   (dVar21 - (local_1298 - local_12a8));
      local_1290 = local_12a0 + local_1298;
      local_12b0 = local_1290 - local_12a0;
      local_1028 = local_1298 - local_12b0;
      local_12c8 = pdVar9;
      local_1020 = local_1290;
      iVar5 = FUN_146bb7cdf(iVar5,pdVar8,4);
      if ((dVar22 != 0.0) || (pdVar7 = pdVar8, pdVar10 = pdVar9, NAN(dVar22))) {
        dVar19 = DAT_14c992028 * dVar22 - (DAT_14c992028 * dVar22 - dVar22);
        dVar21 = dVar22 - dVar19;
        local_12a8 = dVar22 * dVar13;
        dVar20 = DAT_14c992028 * dVar13 - (DAT_14c992028 * dVar13 - dVar13);
        local_1038 = (dVar13 - dVar20) * dVar21 -
                     (((local_12a8 - dVar20 * dVar19) - (dVar13 - dVar20) * dVar19) -
                     dVar20 * dVar21);
        local_12a0 = local_1228 * dVar22;
        local_12c0 = DAT_14c992028 * local_1228;
        local_12b8 = local_12c0 - local_1228;
        dVar13 = local_12c0 - local_12b8;
        dVar13 = (local_1228 - dVar13) * dVar21 -
                 (((local_12a0 - dVar13 * dVar19) - dVar19 * (local_1228 - dVar13)) -
                 dVar13 * dVar21);
        local_1298 = local_12a8 + dVar13;
        local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                     (dVar13 - (local_1298 - local_12a8));
        local_1290 = local_12a0 + local_1298;
        local_12b0 = local_1290 - local_12a0;
        local_1028 = local_1298 - local_12b0;
        local_12c8 = pdVar8;
        local_1020 = local_1290;
        iVar5 = FUN_146bb7cdf(iVar5,pdVar9,4);
        pdVar7 = pdVar9;
        pdVar10 = pdVar8;
      }
    }
    if ((dVar25 == 0.0) && (pdVar8 = pdVar10, !NAN(dVar25))) goto LAB_146bbb763;
    dVar13 = -dVar15;
    local_1220 = dVar25 * dVar13;
    dVar15 = DAT_14c992028 * dVar13 - (dVar15 + DAT_14c992028 * dVar13);
    dVar21 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
    dVar25 = (dVar25 - dVar21) * (dVar13 - dVar15) -
             (((local_1220 - dVar15 * dVar21) - dVar21 * (dVar13 - dVar15)) -
             dVar15 * (dVar25 - dVar21));
    dVar13 = DAT_14c992028 * local_1248 - (DAT_14c992028 * local_1248 - local_1248);
    dVar15 = local_1248 - dVar13;
    local_12a8 = local_1248 * dVar25;
    dVar21 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
    local_1038 = (dVar25 - dVar21) * dVar15 -
                 (((local_12a8 - dVar21 * dVar13) - (dVar25 - dVar21) * dVar13) - dVar21 * dVar15);
    local_12a0 = local_1220 * local_1248;
    local_12c0 = DAT_14c992028 * local_1220;
    local_12b8 = local_12c0 - local_1220;
    dVar21 = local_12c0 - local_12b8;
    dVar15 = (local_1220 - dVar21) * dVar15 -
             (((local_12a0 - dVar21 * dVar13) - dVar13 * (local_1220 - dVar21)) - dVar21 * dVar15);
    local_1298 = local_12a8 + dVar15;
    local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                 (dVar15 - (local_1298 - local_12a8));
    local_1290 = local_12a0 + local_1298;
    local_12b0 = local_1290 - local_12a0;
    local_1028 = local_1298 - local_12b0;
    local_12c8 = pdVar7;
    local_1020 = local_1290;
    iVar5 = FUN_146bb7cdf(iVar5,pdVar10,4);
    if ((dVar23 != 0.0) || (pdVar8 = pdVar7, NAN(dVar23))) {
      dVar13 = DAT_14c992028 * dVar23 - (DAT_14c992028 * dVar23 - dVar23);
      dVar15 = dVar23 - dVar13;
      local_12a8 = dVar23 * dVar25;
      dVar21 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
      local_1038 = (dVar25 - dVar21) * dVar15 -
                   (((local_12a8 - dVar21 * dVar13) - (dVar25 - dVar21) * dVar13) - dVar21 * dVar15)
      ;
      local_12a0 = local_1220 * dVar23;
      local_12c0 = DAT_14c992028 * local_1220;
      local_12b8 = local_12c0 - local_1220;
      dVar25 = local_12c0 - local_12b8;
      dVar25 = (local_1220 - dVar25) * dVar15 -
               (((local_12a0 - dVar25 * dVar13) - dVar13 * (local_1220 - dVar25)) - dVar25 * dVar15)
      ;
      local_1298 = local_12a8 + dVar25;
      local_1030 = (local_12a8 - (local_1298 - (local_1298 - local_12a8))) +
                   (dVar25 - (local_1298 - local_12a8));
      local_1290 = local_12a0 + local_1298;
      local_12b0 = local_1290 - local_12a0;
      local_1028 = local_1298 - local_12b0;
      local_12c8 = pdVar10;
      local_1020 = local_1290;
      iVar5 = FUN_146bb7cdf(iVar5,pdVar7,4);
      pdVar8 = pdVar10;
      goto LAB_146bbd121;
    }
  }
  else {
LAB_146bbb763:
    if ((dVar23 != 0.0) || (pdVar10 = pdVar7, NAN(dVar23))) {
LAB_146bbd121:
      pdVar10 = pdVar8;
      uVar2 = FUN_146bb8018(local_112c,local_f98,dVar23,local_1118);
      local_12c8 = pdVar7;
      iVar5 = FUN_146bb7cdf(iVar5,pdVar10,uVar2,local_1118);
      pdVar8 = pdVar7;
    }
  }
  if ((dVar22 != 0.0) || (pdVar7 = pdVar10, NAN(dVar22))) {
    uVar1 = FUN_146bb8018(uVar1,local_fd8,dVar22,local_1118);
    local_12c8 = pdVar10;
    iVar5 = FUN_146bb7cdf(iVar5,pdVar8,uVar1,local_1118);
    pdVar7 = pdVar8;
    pdVar8 = pdVar10;
  }
  if ((dVar14 != 0.0) || (NAN(dVar14))) {
    uVar1 = FUN_146bb8018((ulonglong)local_1198 & 0xffffffff,local_1018,dVar14,local_1118);
    local_12c8 = pdVar7;
    iVar5 = FUN_146bb7cdf(iVar5,pdVar8,uVar1,local_1118);
    pdVar8 = pdVar7;
  }
  local_898[0] = pdVar8[(longlong)iVar5 + -1];
LAB_146bb9d4c:
  if ((local_f0 ^ (ulonglong)auStack_12e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_898[0]);
  }
  return;
}



// FUNCTION 146bbdacb FUN_146bbdacb body=10441 status=ok
// SIG undefined FUN_146bbdacb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146bbdacb(double *param_1,double *param_2,double *param_3,double *param_4,double param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  double *pdVar8;
  double *pdVar9;
  undefined8 uVar10;
  double *pdVar11;
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
  undefined1 auStack_1268 [32];
  double *local_1248;
  double local_1238;
  double local_1230;
  double local_1228;
  double local_1220;
  double local_1218;
  double local_1210;
  double local_1208;
  double local_1200;
  double local_11f8;
  double local_11f0;
  double local_11e8;
  double local_11e0;
  double local_11d8;
  double local_11d0;
  double local_11c8;
  double local_11c0;
  double local_11b8;
  double local_11b0;
  double local_11a8;
  double local_11a0;
  double local_1198;
  double local_1190;
  double local_1188;
  double local_1180;
  double local_1178;
  double local_1170;
  double local_1168;
  double local_1160;
  double local_1158;
  double local_1150;
  double local_1148;
  double local_1140;
  double local_1138;
  double local_1130;
  double local_1128;
  double local_1120;
  double local_1118;
  double local_1110;
  double local_1108;
  undefined4 local_10fc;
  undefined1 local_10f8 [128];
  undefined1 local_1078 [96];
  double local_1018;
  double local_1010;
  double local_1008;
  double local_1000;
  undefined1 local_ff8 [64];
  undefined1 local_fb8 [64];
  undefined1 local_f78 [64];
  undefined8 local_f38;
  undefined8 local_f18 [4];
  double local_ef8;
  double local_ef0;
  double local_ee8;
  double local_ee0;
  double local_ed8;
  double local_ed0;
  double local_ec8;
  double local_ec0;
  double local_eb8;
  double local_eb0;
  double local_ea8;
  double local_ea0;
  double local_e98;
  double local_e90;
  double local_e88;
  double local_e80;
  double local_e78 [192];
  double local_878 [192];
  undefined1 local_278 [128];
  undefined1 local_1f8 [64];
  undefined1 local_1b8 [64];
  undefined1 local_178 [64];
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
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  undefined8 uStack_48;
  
  uStack_48 = 0x146bbdae1;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1268;
  local_11f0 = *param_1 - *param_3;
  local_11f8 = *param_2 - *param_3;
  local_1210 = *param_4;
  local_1200 = param_1[1] - param_3[1];
  local_11e8 = param_2[1] - param_3[1];
  local_1208 = param_4[1];
  local_1190 = param_1[2] - param_3[2];
  local_1198 = param_2[2] - param_3[2];
  local_11e0 = param_4[2];
  local_1158 = local_11f8 * local_1208;
  dVar13 = DAT_14c992028 * local_11f8 - (DAT_14c992028 * local_11f8 - local_11f8);
  dVar19 = DAT_14c992028 * local_1208 - (DAT_14c992028 * local_1208 - local_1208);
  dVar13 = (local_1208 - dVar19) * (local_11f8 - dVar13) -
           (((local_1158 - dVar13 * dVar19) - dVar19 * (local_11f8 - dVar13)) -
           dVar13 * (local_1208 - dVar19));
  local_1108 = local_1210 * local_11e8;
  dVar19 = DAT_14c992028 * local_1210 - (DAT_14c992028 * local_1210 - local_1210);
  local_1238 = DAT_14c992028 * local_11e8;
  local_1228 = local_1238 - local_11e8;
  dVar20 = local_1238 - local_1228;
  dVar20 = (local_11e8 - dVar20) * (local_1210 - dVar19) -
           (((local_1108 - dVar19 * dVar20) - dVar20 * (local_1210 - dVar19)) -
           dVar19 * (local_11e8 - dVar20));
  dVar19 = dVar13 - dVar20;
  local_f8 = (dVar13 - (dVar19 + (dVar13 - dVar19))) + ((dVar13 - dVar19) - dVar20);
  local_1218 = local_1158 + dVar19;
  dVar13 = (local_1158 - (local_1218 - (local_1218 - local_1158))) +
           (dVar19 - (local_1218 - local_1158));
  local_1220 = dVar13 - local_1108;
  local_f0 = (dVar13 - (local_1220 + (dVar13 - local_1220))) + ((dVar13 - local_1220) - local_1108);
  local_1120 = local_1218 + local_1220;
  local_1230 = local_1120 - local_1218;
  local_e8 = (local_1218 - (local_1120 - local_1230)) + (local_1220 - local_1230);
  local_e0 = local_1120;
  uVar1 = FUN_146bb8018(4,&local_f8,local_1190,local_178);
  local_1160 = local_1210 * local_1200;
  dVar13 = DAT_14c992028 * local_1210 - (DAT_14c992028 * local_1210 - local_1210);
  dVar19 = DAT_14c992028 * local_1200 - (DAT_14c992028 * local_1200 - local_1200);
  dVar13 = (local_1200 - dVar19) * (local_1210 - dVar13) -
           (((local_1160 - dVar13 * dVar19) - dVar19 * (local_1210 - dVar13)) -
           dVar13 * (local_1200 - dVar19));
  local_1110 = local_11f0 * local_1208;
  dVar19 = DAT_14c992028 * local_11f0 - (DAT_14c992028 * local_11f0 - local_11f0);
  local_1238 = DAT_14c992028 * local_1208;
  local_1228 = local_1238 - local_1208;
  dVar20 = local_1238 - local_1228;
  dVar20 = (local_1208 - dVar20) * (local_11f0 - dVar19) -
           (((local_1110 - dVar19 * dVar20) - dVar20 * (local_11f0 - dVar19)) -
           dVar19 * (local_1208 - dVar20));
  dVar19 = dVar13 - dVar20;
  local_118 = (dVar13 - (dVar19 + (dVar13 - dVar19))) + ((dVar13 - dVar19) - dVar20);
  local_1218 = local_1160 + dVar19;
  dVar13 = (local_1160 - (local_1218 - (local_1218 - local_1160))) +
           (dVar19 - (local_1218 - local_1160));
  local_1220 = dVar13 - local_1110;
  local_110 = (dVar13 - (local_1220 + (dVar13 - local_1220))) + ((dVar13 - local_1220) - local_1110)
  ;
  local_1128 = local_1218 + local_1220;
  local_1230 = local_1128 - local_1218;
  local_108 = (local_1218 - (local_1128 - local_1230)) + (local_1220 - local_1230);
  local_100 = local_1128;
  uVar2 = FUN_146bb8018(4,&local_118,local_1198,local_1b8);
  local_1168 = local_11f0 * local_11e8;
  dVar13 = DAT_14c992028 * local_11f0 - (DAT_14c992028 * local_11f0 - local_11f0);
  dVar19 = DAT_14c992028 * local_11e8 - (DAT_14c992028 * local_11e8 - local_11e8);
  dVar13 = (local_11e8 - dVar19) * (local_11f0 - dVar13) -
           (((local_1168 - dVar13 * dVar19) - dVar19 * (local_11f0 - dVar13)) -
           dVar13 * (local_11e8 - dVar19));
  local_1118 = local_11f8 * local_1200;
  dVar19 = DAT_14c992028 * local_11f8 - (DAT_14c992028 * local_11f8 - local_11f8);
  local_1238 = DAT_14c992028 * local_1200;
  local_1228 = local_1238 - local_1200;
  dVar20 = local_1238 - local_1228;
  dVar20 = (local_1200 - dVar20) * (local_11f8 - dVar19) -
           (((local_1118 - dVar19 * dVar20) - dVar20 * (local_11f8 - dVar19)) -
           dVar19 * (local_1200 - dVar20));
  dVar19 = dVar13 - dVar20;
  local_138 = (dVar13 - (dVar19 + (dVar13 - dVar19))) + ((dVar13 - dVar19) - dVar20);
  local_1218 = local_1168 + dVar19;
  dVar13 = (local_1168 - (local_1218 - (local_1218 - local_1168))) +
           (dVar19 - (local_1218 - local_1168));
  local_1220 = dVar13 - local_1118;
  local_130 = (dVar13 - (local_1220 + (dVar13 - local_1220))) + ((dVar13 - local_1220) - local_1118)
  ;
  local_1130 = local_1218 + local_1220;
  local_1230 = local_1130 - local_1218;
  local_128 = (local_1218 - (local_1130 - local_1230)) + (local_1220 - local_1230);
  local_120 = local_1130;
  uVar3 = FUN_146bb8018(4,&local_138,local_11e0,local_1f8);
  local_1248 = (double *)local_278;
  uVar1 = FUN_146bb7cdf(uVar1,local_178,uVar2,local_1b8);
  pdVar8 = local_878;
  local_1248 = pdVar8;
  uVar4 = FUN_146bb7cdf(uVar1,local_278,uVar3,local_1f8);
  if (1 < (int)uVar4) {
    uVar7 = 1;
    do {
      local_878[0] = local_878[0] + local_878[uVar7];
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
  }
  if ((DAT_14c992058 * param_5 <= local_878[0]) || (DAT_14c992058 * param_5 <= -local_878[0]))
  goto LAB_146bbe6ed;
  dVar17 = (*param_1 - (local_11f0 + (*param_1 - local_11f0))) +
           ((*param_1 - local_11f0) - *param_3);
  dVar16 = (*param_2 - (local_11f8 + (*param_2 - local_11f8))) +
           ((*param_2 - local_11f8) - *param_3);
  dVar20 = (param_1[1] - (local_1200 + (param_1[1] - local_1200))) +
           ((param_1[1] - local_1200) - param_3[1]);
  dVar12 = (param_2[1] - (local_11e8 + (param_2[1] - local_11e8))) +
           ((param_2[1] - local_11e8) - param_3[1]);
  dVar19 = (param_1[2] - (local_1190 + (param_1[2] - local_1190))) +
           ((param_1[2] - local_1190) - param_3[2]);
  local_1230 = param_2[2] - local_1198;
  dVar13 = (param_2[2] - (local_1198 + local_1230)) + (local_1230 - param_3[2]);
  if ((((dVar17 == 0.0) &&
       ((((!NAN(dVar17) && (dVar16 == 0.0)) && (!NAN(dVar16))) &&
        ((dVar20 == 0.0 && (!NAN(dVar20))))))) && (dVar12 == 0.0)) &&
     (((!NAN(dVar12) && (dVar19 == 0.0)) && ((!NAN(dVar19) && ((dVar13 == 0.0 && (!NAN(dVar13)))))))
     )) goto LAB_146bbe6ed;
  dVar18 = param_5 * _DAT_14c992060 +
           (double)(~-(ulonglong)(0.0 <= local_878[0]) & (ulonglong)-local_878[0] |
                   -(ulonglong)(0.0 <= local_878[0]) & (ulonglong)local_878[0]) * _DAT_14c992030;
  local_878[0] = (local_11f0 * local_11e8 - local_1200 * local_11f8) * 0.0 +
                 ((local_11e8 * dVar17 + local_11f0 * dVar12) -
                 (local_11f8 * dVar20 + local_1200 * dVar16)) * local_11e0 +
                 (local_1210 * local_1200 - local_1208 * local_11f0) * dVar13 +
                 ((local_1200 * 0.0 + local_1210 * dVar20) -
                 (local_11f0 * 0.0 + local_1208 * dVar17)) * local_1198 +
                 (local_11f8 * local_1208 - local_11e8 * local_1210) * dVar19 +
                 ((local_1208 * dVar16 + local_11f8 * 0.0) -
                 (local_1210 * dVar12 + local_11e8 * 0.0)) * local_1190 + local_878[0];
  if ((dVar18 <= local_878[0]) || (dVar18 <= -local_878[0])) goto LAB_146bbe6ed;
  if ((dVar17 != 0.0) || (NAN(dVar17))) {
    local_e90 = local_11e8 * dVar17;
    if ((dVar20 == 0.0) && (!NAN(dVar20))) {
      dVar18 = DAT_14c992028 * dVar17 - (DAT_14c992028 * dVar17 - dVar17);
      dVar14 = DAT_14c992028 * local_11e8 - (DAT_14c992028 * local_11e8 - local_11e8);
      local_e98 = (local_11e8 - dVar14) * (dVar17 - dVar18) -
                  (((local_e90 - dVar18 * dVar14) - dVar14 * (dVar17 - dVar18)) -
                  dVar18 * (local_11e8 - dVar14));
      dVar18 = -dVar17;
      local_11c0 = local_1208 * dVar18;
      dVar14 = DAT_14c992028 * dVar18 - (DAT_14c992028 * dVar18 + dVar17);
      local_1238 = DAT_14c992028 * local_1208;
      local_1228 = local_1238 - local_1208;
      dVar15 = local_1238 - local_1228;
      dVar22 = ((local_11c0 - dVar14 * dVar15) - dVar15 * (dVar18 - dVar14)) -
               dVar14 * (local_1208 - dVar15);
      local_eb8 = (local_1208 - dVar15) * (dVar18 - dVar14);
      goto LAB_146bbec75;
    }
    dVar18 = DAT_14c992028 * dVar17 - (DAT_14c992028 * dVar17 - dVar17);
    dVar14 = DAT_14c992028 * local_11e8 - (DAT_14c992028 * local_11e8 - local_11e8);
    dVar18 = (local_11e8 - dVar14) * (dVar17 - dVar18) -
             (((local_e90 - dVar18 * dVar14) - dVar14 * (dVar17 - dVar18)) -
             dVar18 * (local_11e8 - dVar14));
    local_1150 = local_11f8 * dVar20;
    dVar14 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
    dVar15 = DAT_14c992028 * local_11f8 - (DAT_14c992028 * local_11f8 - local_11f8);
    dVar15 = (local_11f8 - dVar15) * (dVar20 - dVar14) -
             (((local_1150 - dVar14 * dVar15) - dVar15 * (dVar20 - dVar14)) -
             dVar14 * (local_11f8 - dVar15));
    dVar14 = dVar18 - dVar15;
    local_e98 = (dVar18 - (dVar14 + (dVar18 - dVar14))) + ((dVar18 - dVar14) - dVar15);
    dVar18 = local_e90 + dVar14;
    dVar22 = (local_e90 - (dVar18 - (dVar18 - local_e90))) + (dVar14 - (dVar18 - local_e90));
    dVar14 = dVar22 - local_1150;
    local_11b8 = dVar18 + dVar14;
    local_e88 = (dVar18 - (local_11b8 - (local_11b8 - dVar18))) + (dVar14 - (local_11b8 - dVar18));
    local_1180 = local_1210 * dVar20;
    dVar18 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
    dVar21 = DAT_14c992028 * local_1210 - (DAT_14c992028 * local_1210 - local_1210);
    local_1138 = local_1208 * dVar17;
    dVar15 = DAT_14c992028 * dVar17 - (DAT_14c992028 * dVar17 - dVar17);
    dVar18 = (local_1210 - dVar21) * (dVar20 - dVar18) -
             (((local_1180 - dVar18 * dVar21) - dVar21 * (dVar20 - dVar18)) -
             dVar18 * (local_1210 - dVar21));
    local_1238 = DAT_14c992028 * local_1208;
    local_1228 = local_1238 - local_1208;
    dVar21 = local_1238 - local_1228;
    dVar21 = (local_1208 - dVar21) * (dVar17 - dVar15) -
             (((local_1138 - dVar15 * dVar21) - dVar21 * (dVar17 - dVar15)) -
             dVar15 * (local_1208 - dVar21));
    dVar15 = dVar18 - dVar21;
    local_eb8 = (dVar18 - (dVar15 + (dVar18 - dVar15))) + ((dVar18 - dVar15) - dVar21);
    local_1218 = local_1180 + dVar15;
    dVar18 = (local_1180 - (local_1218 - (local_1218 - local_1180))) +
             (dVar15 - (local_1218 - local_1180));
    local_1220 = dVar18 - local_1138;
    local_eb0 = (dVar18 - (local_1220 + (dVar18 - local_1220))) +
                ((dVar18 - local_1220) - local_1138);
    local_11c0 = local_1218 + local_1220;
    local_1230 = local_11c0 - local_1218;
    local_ea8 = (local_1218 - (local_11c0 - local_1230)) + (local_1220 - local_1230);
    uVar1 = 4;
    local_1178 = local_e90;
    local_ea0 = local_11c0;
    local_e90 = (dVar22 - (dVar14 + (dVar22 - dVar14))) + ((dVar22 - dVar14) - local_1150);
    local_e80 = local_11b8;
  }
  else if ((dVar20 != 0.0) || (NAN(dVar20))) {
    dVar18 = -dVar20;
    local_e90 = local_11f8 * dVar18;
    dVar14 = DAT_14c992028 * dVar18 - (DAT_14c992028 * dVar18 + dVar20);
    dVar15 = DAT_14c992028 * local_11f8 - (DAT_14c992028 * local_11f8 - local_11f8);
    local_e98 = (local_11f8 - dVar15) * (dVar18 - dVar14) -
                (((local_e90 - dVar14 * dVar15) - dVar15 * (dVar18 - dVar14)) -
                dVar14 * (local_11f8 - dVar15));
    local_11c0 = local_1210 * dVar20;
    dVar18 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
    local_1238 = DAT_14c992028 * local_1210;
    local_1228 = local_1238 - local_1210;
    dVar14 = local_1238 - local_1228;
    dVar22 = ((local_11c0 - dVar18 * dVar14) - dVar14 * (dVar20 - dVar18)) -
             dVar18 * (local_1210 - dVar14);
    local_eb8 = (local_1210 - dVar14) * (dVar20 - dVar18);
LAB_146bbec75:
    local_eb8 = local_eb8 - dVar22;
    local_eb0 = local_11c0;
    uVar1 = 2;
    local_11b8 = local_e90;
  }
  else {
    local_e98 = 0.0;
    local_eb8 = 0.0;
    uVar1 = 1;
  }
  if ((dVar16 != 0.0) || (NAN(dVar16))) {
    local_ed0 = local_1208 * dVar16;
    if ((dVar12 == 0.0) && (!NAN(dVar12))) {
      dVar18 = DAT_14c992028 * dVar16 - (DAT_14c992028 * dVar16 - dVar16);
      dVar14 = DAT_14c992028 * local_1208 - (DAT_14c992028 * local_1208 - local_1208);
      local_ed8 = (local_1208 - dVar14) * (dVar16 - dVar18) -
                  (((local_ed0 - dVar18 * dVar14) - dVar14 * (dVar16 - dVar18)) -
                  dVar18 * (local_1208 - dVar14));
      dVar18 = -dVar16;
      local_11d0 = local_1200 * dVar18;
      dVar14 = DAT_14c992028 * dVar18 - (DAT_14c992028 * dVar18 + dVar16);
      local_1238 = DAT_14c992028 * local_1200;
      local_1228 = local_1238 - local_1200;
      dVar15 = local_1238 - local_1228;
      dVar22 = ((local_11d0 - dVar14 * dVar15) - dVar15 * (dVar18 - dVar14)) -
               dVar14 * (local_1200 - dVar15);
      local_ef8 = (local_1200 - dVar15) * (dVar18 - dVar14);
      goto LAB_146bbf582;
    }
    dVar18 = DAT_14c992028 * dVar16 - (DAT_14c992028 * dVar16 - dVar16);
    dVar14 = DAT_14c992028 * local_1208 - (DAT_14c992028 * local_1208 - local_1208);
    dVar18 = (local_1208 - dVar14) * (dVar16 - dVar18) -
             (((local_ed0 - dVar18 * dVar14) - dVar14 * (dVar16 - dVar18)) -
             dVar18 * (local_1208 - dVar14));
    local_1148 = local_1210 * dVar12;
    dVar14 = DAT_14c992028 * dVar12 - (DAT_14c992028 * dVar12 - dVar12);
    dVar15 = DAT_14c992028 * local_1210 - (DAT_14c992028 * local_1210 - local_1210);
    dVar15 = (local_1210 - dVar15) * (dVar12 - dVar14) -
             (((local_1148 - dVar14 * dVar15) - dVar15 * (dVar12 - dVar14)) -
             dVar14 * (local_1210 - dVar15));
    dVar14 = dVar18 - dVar15;
    local_ed8 = (dVar18 - (dVar14 + (dVar18 - dVar14))) + ((dVar18 - dVar14) - dVar15);
    dVar18 = local_ed0 + dVar14;
    dVar22 = (local_ed0 - (dVar18 - (dVar18 - local_ed0))) + (dVar14 - (dVar18 - local_ed0));
    dVar14 = dVar22 - local_1148;
    local_11c8 = dVar18 + dVar14;
    local_ec8 = (dVar18 - (local_11c8 - (local_11c8 - dVar18))) + (dVar14 - (local_11c8 - dVar18));
    local_1188 = local_11f0 * dVar12;
    dVar18 = DAT_14c992028 * dVar12 - (DAT_14c992028 * dVar12 - dVar12);
    dVar21 = DAT_14c992028 * local_11f0 - (DAT_14c992028 * local_11f0 - local_11f0);
    local_1140 = local_1200 * dVar16;
    dVar15 = DAT_14c992028 * dVar16 - (DAT_14c992028 * dVar16 - dVar16);
    dVar18 = (local_11f0 - dVar21) * (dVar12 - dVar18) -
             (((local_1188 - dVar18 * dVar21) - dVar21 * (dVar12 - dVar18)) -
             dVar18 * (local_11f0 - dVar21));
    local_1238 = DAT_14c992028 * local_1200;
    local_1228 = local_1238 - local_1200;
    dVar21 = local_1238 - local_1228;
    dVar21 = (local_1200 - dVar21) * (dVar16 - dVar15) -
             (((local_1140 - dVar15 * dVar21) - dVar21 * (dVar16 - dVar15)) -
             dVar15 * (local_1200 - dVar21));
    dVar15 = dVar18 - dVar21;
    local_ef8 = (dVar18 - (dVar15 + (dVar18 - dVar15))) + ((dVar18 - dVar15) - dVar21);
    local_1218 = local_1188 + dVar15;
    dVar18 = (local_1188 - (local_1218 - (local_1218 - local_1188))) +
             (dVar15 - (local_1218 - local_1188));
    local_1220 = dVar18 - local_1140;
    local_ef0 = (dVar18 - (local_1220 + (dVar18 - local_1220))) +
                ((dVar18 - local_1220) - local_1140);
    local_11d0 = local_1218 + local_1220;
    local_1230 = local_11d0 - local_1218;
    local_ee8 = (local_1218 - (local_11d0 - local_1230)) + (local_1220 - local_1230);
    uVar10 = 4;
    local_1170 = local_ed0;
    local_ee0 = local_11d0;
    local_ed0 = (dVar22 - (dVar14 + (dVar22 - dVar14))) + ((dVar22 - dVar14) - local_1148);
    local_ec0 = local_11c8;
  }
  else if ((dVar12 != 0.0) || (NAN(dVar12))) {
    dVar18 = -dVar12;
    local_ed0 = local_1210 * dVar18;
    dVar14 = DAT_14c992028 * dVar18 - (DAT_14c992028 * dVar18 + dVar12);
    dVar15 = DAT_14c992028 * local_1210 - (DAT_14c992028 * local_1210 - local_1210);
    local_ed8 = (local_1210 - dVar15) * (dVar18 - dVar14) -
                (((local_ed0 - dVar14 * dVar15) - dVar15 * (dVar18 - dVar14)) -
                dVar14 * (local_1210 - dVar15));
    local_11d0 = local_11f0 * dVar12;
    dVar18 = DAT_14c992028 * dVar12 - (DAT_14c992028 * dVar12 - dVar12);
    local_1238 = DAT_14c992028 * local_11f0;
    local_1228 = local_1238 - local_11f0;
    dVar14 = local_1238 - local_1228;
    dVar22 = ((local_11d0 - dVar18 * dVar14) - dVar14 * (dVar12 - dVar18)) -
             dVar18 * (local_11f0 - dVar14);
    local_ef8 = (local_11f0 - dVar14) * (dVar12 - dVar18);
LAB_146bbf582:
    local_ef8 = local_ef8 - dVar22;
    local_ef0 = local_11d0;
    uVar10 = 2;
    local_11c8 = local_ed0;
  }
  else {
    local_ed8 = 0.0;
    local_ef8 = 0.0;
    uVar10 = 1;
  }
  local_f18[0] = 0;
  local_f38 = 0;
  local_1248 = (double *)local_f78;
  local_10fc = FUN_146bb7cdf(uVar10,&local_ed8,1);
  uVar2 = FUN_146bb8018(local_10fc,local_f78,local_1190,local_10f8);
  pdVar11 = local_e78;
  local_1248 = pdVar11;
  uVar2 = FUN_146bb7cdf((ulonglong)uVar4,pdVar8,uVar2,local_10f8);
  local_1248 = (double *)local_fb8;
  uVar3 = FUN_146bb7cdf(1,local_f18,uVar1,&local_eb8);
  uVar5 = FUN_146bb8018(uVar3,local_fb8,local_1198,local_10f8);
  local_1248 = pdVar8;
  uVar2 = FUN_146bb7cdf(uVar2,pdVar11,uVar5,local_10f8);
  local_1248 = (double *)local_ff8;
  uVar1 = FUN_146bb7cdf(uVar1,&local_e98,uVar10,&local_ef8);
  uVar1 = FUN_146bb8018(uVar1,local_ff8,local_11e0,local_10f8);
  local_1248 = pdVar11;
  iVar6 = FUN_146bb7cdf(uVar2,pdVar8,uVar1,local_10f8);
  if ((dVar19 != 0.0) || (NAN(dVar19))) {
    uVar1 = FUN_146bb8018(4,&local_f8,dVar19,local_1078);
    pdVar11 = local_878;
    pdVar8 = local_e78;
    local_1248 = pdVar11;
    iVar6 = FUN_146bb7cdf(iVar6,pdVar8,uVar1,local_1078);
  }
  if ((dVar13 != 0.0) || (pdVar9 = pdVar11, NAN(dVar13))) {
    uVar1 = FUN_146bb8018(4,&local_118,dVar13,local_1078);
    local_1248 = pdVar8;
    iVar6 = FUN_146bb7cdf(iVar6,pdVar11,uVar1,local_1078);
    pdVar9 = pdVar8;
    pdVar8 = pdVar11;
  }
  pdVar11 = pdVar9;
  if (((dVar17 != 0.0) || (NAN(dVar17))) && ((dVar12 != 0.0 || (NAN(dVar12))))) {
    local_11a0 = dVar17 * dVar12;
    dVar18 = DAT_14c992028 * dVar17 - (DAT_14c992028 * dVar17 - dVar17);
    dVar14 = DAT_14c992028 * dVar12 - (DAT_14c992028 * dVar12 - dVar12);
    dVar15 = DAT_14c992028 * local_11e0 - (DAT_14c992028 * local_11e0 - local_11e0);
    dVar12 = (dVar12 - dVar14) * (dVar17 - dVar18) -
             (((local_11a0 - dVar18 * dVar14) - dVar14 * (dVar17 - dVar18)) -
             dVar18 * (dVar12 - dVar14));
    dVar17 = local_11e0 - dVar15;
    local_1220 = local_11e0 * dVar12;
    dVar18 = DAT_14c992028 * dVar12 - (DAT_14c992028 * dVar12 - dVar12);
    local_1018 = (dVar12 - dVar18) * dVar17 -
                 (((local_1220 - dVar18 * dVar15) - (dVar12 - dVar18) * dVar15) - dVar18 * dVar17);
    local_1218 = local_11a0 * local_11e0;
    local_1238 = DAT_14c992028 * local_11a0;
    local_1228 = local_1238 - local_11a0;
    dVar12 = local_1238 - local_1228;
    dVar12 = (local_11a0 - dVar12) * dVar17 -
             (((local_1218 - dVar12 * dVar15) - dVar15 * (local_11a0 - dVar12)) - dVar12 * dVar17);
    local_11d8 = local_1220 + dVar12;
    local_1010 = (local_1220 - (local_11d8 - (local_11d8 - local_1220))) +
                 (dVar12 - (local_11d8 - local_1220));
    local_11b0 = local_1218 + local_11d8;
    local_1230 = local_11b0 - local_1218;
    local_1008 = local_11d8 - local_1230;
    local_1248 = pdVar8;
    local_1000 = local_11b0;
    iVar6 = FUN_146bb7cdf(iVar6,pdVar9,4);
    pdVar11 = pdVar8;
    pdVar8 = pdVar9;
  }
  pdVar9 = pdVar8;
  if (((dVar16 != 0.0) || (NAN(dVar16))) && ((dVar20 != 0.0 || (NAN(dVar20))))) {
    dVar12 = -dVar16;
    local_11a8 = dVar20 * dVar12;
    dVar16 = DAT_14c992028 * dVar12 - (dVar16 + DAT_14c992028 * dVar12);
    dVar18 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
    dVar17 = DAT_14c992028 * local_11e0 - (DAT_14c992028 * local_11e0 - local_11e0);
    dVar20 = (dVar20 - dVar18) * (dVar12 - dVar16) -
             (((local_11a8 - dVar16 * dVar18) - dVar18 * (dVar12 - dVar16)) -
             dVar16 * (dVar20 - dVar18));
    dVar16 = local_11e0 - dVar17;
    local_1220 = local_11e0 * dVar20;
    dVar12 = DAT_14c992028 * dVar20 - (DAT_14c992028 * dVar20 - dVar20);
    local_1018 = (dVar20 - dVar12) * dVar16 -
                 (((local_1220 - dVar12 * dVar17) - (dVar20 - dVar12) * dVar17) - dVar12 * dVar16);
    local_1218 = local_11a8 * local_11e0;
    local_1238 = DAT_14c992028 * local_11a8;
    local_1228 = local_1238 - local_11a8;
    dVar20 = local_1238 - local_1228;
    dVar20 = (local_11a8 - dVar20) * dVar16 -
             (((local_1218 - dVar20 * dVar17) - dVar17 * (local_11a8 - dVar20)) - dVar20 * dVar16);
    local_11d8 = local_1220 + dVar20;
    local_1010 = (local_1220 - (local_11d8 - (local_11d8 - local_1220))) +
                 (dVar20 - (local_11d8 - local_1220));
    local_11b0 = local_1218 + local_11d8;
    local_1230 = local_11b0 - local_1218;
    local_1008 = local_11d8 - local_1230;
    local_1248 = pdVar8;
    local_1000 = local_11b0;
    iVar6 = FUN_146bb7cdf(iVar6,pdVar11,4);
    pdVar9 = pdVar11;
    pdVar11 = pdVar8;
  }
  if ((dVar19 != 0.0) || (pdVar8 = pdVar11, NAN(dVar19))) {
    uVar1 = FUN_146bb8018(local_10fc,local_f78,dVar19,local_10f8);
    local_1248 = pdVar9;
    iVar6 = FUN_146bb7cdf(iVar6,pdVar11,uVar1,local_10f8);
    pdVar8 = pdVar9;
    pdVar9 = pdVar11;
  }
  if ((dVar13 != 0.0) || (NAN(dVar13))) {
    uVar1 = FUN_146bb8018(uVar3,local_fb8,dVar13,local_10f8);
    local_1248 = pdVar9;
    iVar6 = FUN_146bb7cdf(iVar6,pdVar8,uVar1,local_10f8);
    pdVar8 = pdVar9;
  }
  local_878[0] = pdVar8[(longlong)iVar6 + -1];
LAB_146bbe6ed:
  if ((local_d0 ^ (ulonglong)auStack_1268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_878[0]);
  }
  return;
}



// FUNCTION 146bc0395 FUN_146bc0395 body=18959 status=ok
// SIG undefined FUN_146bc0395(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146bc0395(double *param_1,double *param_2,double *param_3,double *param_4,double param_5)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_6648 [32];
  double *local_6628;
  double local_6620;
  double local_6618;
  double local_6610;
  byte local_6601;
  double local_6600;
  double local_65f8;
  double local_65f0;
  uint local_65e4;
  double local_65e0;
  double local_65d8;
  double local_65d0;
  double *local_65c8;
  double local_65c0;
  double local_65b8;
  double local_65b0;
  double local_65a8;
  uint local_659c;
  double *local_6598;
  undefined4 local_658c;
  undefined4 local_6588;
  undefined4 local_6584;
  double *local_6580;
  double *local_6578;
  double local_6570;
  double local_6568;
  undefined4 local_6560;
  undefined4 local_655c;
  double *local_6558;
  double local_6550;
  double local_6548;
  double local_6540;
  double local_6538;
  double local_6530;
  double local_6528;
  double local_6520;
  double local_6518;
  double local_6510;
  double local_6508;
  double local_6500;
  double local_64f8;
  double local_64f0;
  double local_64e8;
  double local_64e0;
  double local_64d8;
  double local_64d0;
  double local_64c8;
  double local_64c0;
  double local_64b8;
  double local_64b0;
  double local_64a8;
  double local_64a0;
  double local_6498;
  double local_6490;
  double local_6488;
  double local_6480;
  double local_6478;
  double local_6470;
  double local_6468;
  double local_6460;
  double local_6458;
  double local_6450;
  double local_6448 [8];
  double local_6408 [8];
  double local_63c8 [8];
  undefined1 local_6388 [64];
  undefined1 local_6348 [64];
  undefined1 local_6308 [64];
  undefined1 local_62c8 [64];
  undefined1 local_6288 [64];
  undefined1 local_6248 [64];
  undefined1 local_6208 [128];
  undefined1 local_6188 [128];
  undefined1 local_6108 [128];
  undefined1 local_6088 [128];
  undefined1 local_6008 [128];
  undefined1 local_5f88 [128];
  undefined1 local_5f08 [64];
  undefined1 local_5ec8 [64];
  undefined1 local_5e88 [64];
  undefined1 local_5e48 [64];
  undefined1 local_5e08 [64];
  undefined1 local_5dc8 [64];
  undefined1 local_5d88 [64];
  undefined1 local_5d48 [64];
  undefined1 local_5d08 [64];
  undefined1 local_5cc8 [64];
  undefined1 local_5c88 [64];
  undefined1 local_5c48 [64];
  undefined1 local_5c08 [64];
  undefined1 local_5bc8 [64];
  undefined1 local_5b88 [64];
  undefined1 local_5b48 [64];
  undefined1 local_5b08 [64];
  undefined1 local_5ac8 [64];
  undefined1 local_5a88 [512];
  undefined1 local_5888 [384];
  undefined1 local_5708 [256];
  undefined1 local_5608 [256];
  undefined1 local_5508 [128];
  undefined1 local_5488 [128];
  undefined1 local_5408 [128];
  undefined1 local_5388 [64];
  double local_5348;
  double local_5340;
  double local_5338;
  double local_5330;
  double local_5328;
  double local_5320;
  double local_5318;
  double local_5310;
  double local_5308;
  double local_5300;
  double local_52f8;
  double local_52f0;
  double local_52e8;
  double local_52e0;
  double local_52d8;
  double local_52d0;
  double local_52c8;
  double local_52c0;
  double local_52b8;
  double local_52b0;
  double local_52a8 [1152];
  double local_2ea8 [1152];
  undefined1 local_aa8 [512];
  undefined1 local_8a8 [256];
  undefined1 local_7a8 [128];
  undefined1 local_728 [64];
  undefined1 local_6e8 [128];
  undefined1 local_668 [64];
  undefined1 local_628 [256];
  undefined1 local_528 [128];
  undefined1 local_4a8 [64];
  undefined1 local_468 [128];
  undefined1 local_3e8 [64];
  undefined1 local_3a8 [256];
  undefined1 local_2a8 [128];
  undefined1 local_228 [64];
  undefined1 local_1e8 [128];
  undefined1 local_168 [64];
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
  double local_d0;
  ulonglong local_c0;
  undefined8 uStack_48;
  
  uStack_48 = 0x146bc03ab;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_6648;
  local_65e0 = *param_4;
  local_65d0 = *param_1 - local_65e0;
  local_65d8 = *param_2 - local_65e0;
  local_65e0 = *param_3 - local_65e0;
  local_65b8 = param_4[1];
  local_65a8 = param_1[1] - local_65b8;
  local_65b0 = param_2[1] - local_65b8;
  local_65b8 = param_3[1] - local_65b8;
  local_6528 = local_65d8 * local_65b8;
  dVar22 = DAT_14c992028 * local_65d8 - (DAT_14c992028 * local_65d8 - local_65d8);
  dVar25 = DAT_14c992028 * local_65b8 - (DAT_14c992028 * local_65b8 - local_65b8);
  dVar22 = (local_65b8 - dVar25) * (local_65d8 - dVar22) -
           (((local_6528 - dVar22 * dVar25) - dVar25 * (local_65d8 - dVar22)) -
           dVar22 * (local_65b8 - dVar25));
  local_64b0 = local_65e0 * local_65b0;
  dVar25 = DAT_14c992028 * local_65e0 - (DAT_14c992028 * local_65e0 - local_65e0);
  local_6618 = DAT_14c992028 * local_65b0;
  local_6600 = local_6618 - local_65b0;
  dVar26 = local_6618 - local_6600;
  dVar26 = (local_65b0 - dVar26) * (local_65e0 - dVar25) -
           (((local_64b0 - dVar25 * dVar26) - dVar26 * (local_65e0 - dVar25)) -
           dVar25 * (local_65b0 - dVar26));
  dVar25 = dVar22 - dVar26;
  local_e8 = (dVar22 - (dVar25 + (dVar22 - dVar25))) + ((dVar22 - dVar25) - dVar26);
  local_65f8 = local_6528 + dVar25;
  dVar22 = (local_6528 - (local_65f8 - (local_65f8 - local_6528))) +
           (dVar25 - (local_65f8 - local_6528));
  local_6610 = dVar22 - local_64b0;
  local_e0 = (dVar22 - (local_6610 + (dVar22 - local_6610))) + ((dVar22 - local_6610) - local_64b0);
  local_64c8 = local_65f8 + local_6610;
  local_6620 = local_64c8 - local_65f8;
  local_d8 = (local_65f8 - (local_64c8 - local_6620)) + (local_6610 - local_6620);
  local_65c8 = param_3;
  local_6598 = param_1;
  local_6580 = param_2;
  local_d0 = local_64c8;
  uVar2 = FUN_146bb8018(4,&local_e8,local_65d0,local_168);
  uVar2 = FUN_146bb8018(uVar2,local_168,local_65d0,local_1e8);
  uVar3 = FUN_146bb8018(4,&local_e8,local_65a8,local_228);
  uVar3 = FUN_146bb8018(uVar3,local_228,local_65a8,local_2a8);
  local_6628 = (double *)local_3a8;
  uVar2 = FUN_146bb7cdf(uVar2,local_1e8,uVar3,local_2a8);
  local_6530 = local_65e0 * local_65a8;
  dVar22 = DAT_14c992028 * local_65e0 - (DAT_14c992028 * local_65e0 - local_65e0);
  dVar25 = DAT_14c992028 * local_65a8 - (DAT_14c992028 * local_65a8 - local_65a8);
  dVar22 = (local_65a8 - dVar25) * (local_65e0 - dVar22) -
           (((local_6530 - dVar22 * dVar25) - dVar25 * (local_65e0 - dVar22)) -
           dVar22 * (local_65a8 - dVar25));
  local_64b8 = local_65d0 * local_65b8;
  dVar25 = DAT_14c992028 * local_65d0 - (DAT_14c992028 * local_65d0 - local_65d0);
  local_6618 = DAT_14c992028 * local_65b8;
  local_6600 = local_6618 - local_65b8;
  dVar26 = local_6618 - local_6600;
  dVar26 = (local_65b8 - dVar26) * (local_65d0 - dVar25) -
           (((local_64b8 - dVar25 * dVar26) - dVar26 * (local_65d0 - dVar25)) -
           dVar25 * (local_65b8 - dVar26));
  dVar25 = dVar22 - dVar26;
  local_108 = (dVar22 - (dVar25 + (dVar22 - dVar25))) + ((dVar22 - dVar25) - dVar26);
  local_65f8 = local_6530 + dVar25;
  dVar22 = (local_6530 - (local_65f8 - (local_65f8 - local_6530))) +
           (dVar25 - (local_65f8 - local_6530));
  local_6610 = dVar22 - local_64b8;
  local_100 = (dVar22 - (local_6610 + (dVar22 - local_6610))) + ((dVar22 - local_6610) - local_64b8)
  ;
  local_64d0 = local_65f8 + local_6610;
  local_6620 = local_64d0 - local_65f8;
  local_f8 = (local_65f8 - (local_64d0 - local_6620)) + (local_6610 - local_6620);
  local_f0 = local_64d0;
  uVar3 = FUN_146bb8018(4,&local_108,local_65d8,local_3e8);
  uVar3 = FUN_146bb8018(uVar3,local_3e8,local_65d8,local_468);
  uVar4 = FUN_146bb8018(4,&local_108,local_65b0,local_4a8);
  uVar4 = FUN_146bb8018(uVar4,local_4a8,local_65b0,local_528);
  local_6628 = (double *)local_628;
  uVar3 = FUN_146bb7cdf(uVar3,local_468,uVar4,local_528);
  local_6538 = local_65d0 * local_65b0;
  dVar22 = DAT_14c992028 * local_65d0 - (DAT_14c992028 * local_65d0 - local_65d0);
  dVar25 = DAT_14c992028 * local_65b0 - (DAT_14c992028 * local_65b0 - local_65b0);
  dVar22 = (local_65b0 - dVar25) * (local_65d0 - dVar22) -
           (((local_6538 - dVar22 * dVar25) - dVar25 * (local_65d0 - dVar22)) -
           dVar22 * (local_65b0 - dVar25));
  local_64c0 = local_65d8 * local_65a8;
  dVar25 = DAT_14c992028 * local_65d8 - (DAT_14c992028 * local_65d8 - local_65d8);
  local_6618 = DAT_14c992028 * local_65a8;
  local_6600 = local_6618 - local_65a8;
  dVar26 = local_6618 - local_6600;
  dVar26 = (local_65a8 - dVar26) * (local_65d8 - dVar25) -
           (((local_64c0 - dVar25 * dVar26) - dVar26 * (local_65d8 - dVar25)) -
           dVar25 * (local_65a8 - dVar26));
  dVar25 = dVar22 - dVar26;
  local_128 = (dVar22 - (dVar25 + (dVar22 - dVar25))) + ((dVar22 - dVar25) - dVar26);
  local_65f8 = local_6538 + dVar25;
  dVar22 = (local_6538 - (local_65f8 - (local_65f8 - local_6538))) +
           (dVar25 - (local_65f8 - local_6538));
  local_6610 = dVar22 - local_64c0;
  local_120 = (dVar22 - (local_6610 + (dVar22 - local_6610))) + ((dVar22 - local_6610) - local_64c0)
  ;
  local_64d8 = local_65f8 + local_6610;
  local_6620 = local_64d8 - local_65f8;
  local_118 = (local_65f8 - (local_64d8 - local_6620)) + (local_6610 - local_6620);
  local_110 = local_64d8;
  uVar4 = FUN_146bb8018(4,&local_128,local_65e0,local_668);
  uVar4 = FUN_146bb8018(uVar4,local_668,local_65e0,local_6e8);
  uVar5 = FUN_146bb8018(4,&local_128,local_65b8,local_728);
  uVar5 = FUN_146bb8018(uVar5,local_728,local_65b8,local_7a8);
  local_6628 = (double *)local_8a8;
  uVar4 = FUN_146bb7cdf(uVar4,local_6e8,uVar5,local_7a8);
  local_6628 = (double *)local_aa8;
  uVar2 = FUN_146bb7cdf(uVar2,local_3a8,uVar3,local_628);
  pdVar15 = local_2ea8;
  local_6628 = pdVar15;
  uVar6 = FUN_146bb7cdf(uVar2,local_aa8,uVar4,local_8a8);
  uVar10 = (ulonglong)uVar6;
  if (1 < (int)uVar6) {
    uVar11 = 1;
    do {
      local_2ea8[0] = local_2ea8[0] + local_2ea8[uVar11];
      uVar11 = uVar11 + 1;
    } while (uVar10 != uVar11);
  }
  if ((local_2ea8[0] < DAT_14c992070 * param_5) && (-local_2ea8[0] < DAT_14c992070 * param_5)) {
    dVar21 = (*local_6598 - (local_65d0 + (*local_6598 - local_65d0))) +
             ((*local_6598 - local_65d0) - *param_4);
    dVar1 = (local_6598[1] - (local_65a8 + (local_6598[1] - local_65a8))) +
            ((local_6598[1] - local_65a8) - param_4[1]);
    dVar24 = (*local_6580 - (local_65d8 + (*local_6580 - local_65d8))) +
             ((*local_6580 - local_65d8) - *param_4);
    dVar26 = (local_6580[1] - (local_65b0 + (local_6580[1] - local_65b0))) +
             ((local_6580[1] - local_65b0) - param_4[1]);
    dVar25 = (*local_65c8 - (local_65e0 + (*local_65c8 - local_65e0))) +
             ((*local_65c8 - local_65e0) - *param_4);
    local_6620 = local_65c8[1] - local_65b8;
    dVar22 = (local_65c8[1] - (local_65b8 + local_6620)) + (local_6620 - param_4[1]);
    if ((((dVar21 != 0.0) ||
         ((((NAN(dVar21) || (dVar24 != 0.0)) || (NAN(dVar24))) || ((dVar25 != 0.0 || (NAN(dVar25))))
          ))) || (dVar1 != 0.0)) ||
       (((NAN(dVar1) || (dVar26 != 0.0)) || ((NAN(dVar26) || ((dVar22 != 0.0 || (NAN(dVar22)))))))))
    {
      dVar23 = param_5 * _DAT_14c992078 +
               (double)(~-(ulonglong)(0.0 <= local_2ea8[0]) & (ulonglong)-local_2ea8[0] |
                       -(ulonglong)(0.0 <= local_2ea8[0]) & (ulonglong)local_2ea8[0]) *
               _DAT_14c992030;
      dVar27 = local_65a8 * dVar1 + local_65d0 * dVar21;
      dVar28 = local_65b0 * dVar26 + local_65d8 * dVar24;
      dVar30 = local_65b8 * dVar22 + local_65e0 * dVar25;
      local_2ea8[0] =
           (local_65d0 * local_65b0 - local_65a8 * local_65d8) * (dVar30 + dVar30) +
           ((local_65b0 * dVar21 + local_65d0 * dVar26) - (local_65d8 * dVar1 + local_65a8 * dVar24)
           ) * (local_65b8 * local_65b8 + local_65e0 * local_65e0) +
           (local_65e0 * local_65a8 - local_65b8 * local_65d0) * (dVar28 + dVar28) +
           ((local_65a8 * dVar25 + local_65e0 * dVar1) - (local_65d0 * dVar22 + local_65b8 * dVar21)
           ) * (local_65b0 * local_65b0 + local_65d8 * local_65d8) +
           (local_65d8 * local_65b8 - local_65b0 * local_65e0) * (dVar27 + dVar27) +
           ((local_65b8 * dVar24 + local_65d8 * dVar22) -
           (local_65e0 * dVar26 + local_65b0 * dVar25)) *
           (local_65a8 * local_65a8 + local_65d0 * local_65d0) + local_2ea8[0];
      if ((local_2ea8[0] < dVar23) && (-local_2ea8[0] < dVar23)) {
        uVar6 = -(uint)(dVar26 != 0.0 || dVar24 != 0.0);
        if ((dVar22 != 0.0 || dVar25 != 0.0) || (uVar6 & 1) != 0) {
          local_6540 = local_65d0 * local_65d0;
          dVar27 = DAT_14c992028 * local_65d0 - (DAT_14c992028 * local_65d0 - local_65d0);
          dVar23 = local_65d0 - dVar27;
          dVar23 = dVar23 * dVar23 - ((local_6540 - dVar27 * dVar27) - (dVar27 + dVar27) * dVar23);
          local_64e0 = local_65a8 * local_65a8;
          local_6618 = DAT_14c992028 * local_65a8;
          local_6600 = local_6618 - local_65a8;
          dVar28 = local_6618 - local_6600;
          dVar27 = local_65a8 - dVar28;
          dVar27 = dVar27 * dVar27 - ((local_64e0 - dVar28 * dVar28) - (dVar28 + dVar28) * dVar27);
          dVar28 = dVar23 + dVar27;
          local_52c8 = ((dVar28 - dVar23) - dVar28) + dVar23 + (dVar27 - (dVar28 - dVar23));
          local_65f8 = local_6540 + dVar28;
          dVar23 = (local_6540 - (local_65f8 - (local_65f8 - local_6540))) +
                   (dVar28 - (local_65f8 - local_6540));
          local_6610 = local_64e0 + dVar23;
          local_52c0 = (dVar23 - (local_6610 - (local_6610 - dVar23))) +
                       (local_64e0 - (local_6610 - dVar23));
          local_64f8 = local_65f8 + local_6610;
          local_6620 = local_64f8 - local_65f8;
          local_52b8 = (local_65f8 - (local_64f8 - local_6620)) + (local_6610 - local_6620);
          local_52b0 = local_64f8;
        }
        uVar20 = -(uint)(dVar22 != 0.0 || dVar25 != 0.0);
        bVar13 = (dVar1 != 0.0 || dVar21 != 0.0) | (byte)uVar20;
        if ((dVar1 != 0.0 || dVar21 != 0.0) || (uVar20 & 1) != 0) {
          local_6548 = local_65d8 * local_65d8;
          dVar27 = DAT_14c992028 * local_65d8 - (DAT_14c992028 * local_65d8 - local_65d8);
          dVar23 = local_65d8 - dVar27;
          dVar23 = dVar23 * dVar23 - ((local_6548 - dVar27 * dVar27) - (dVar27 + dVar27) * dVar23);
          local_64e8 = local_65b0 * local_65b0;
          local_6618 = DAT_14c992028 * local_65b0;
          local_6600 = local_6618 - local_65b0;
          dVar28 = local_6618 - local_6600;
          dVar27 = local_65b0 - dVar28;
          dVar27 = dVar27 * dVar27 - ((local_64e8 - dVar28 * dVar28) - (dVar28 + dVar28) * dVar27);
          dVar28 = dVar23 + dVar27;
          local_52e8 = ((dVar28 - dVar23) - dVar28) + dVar23 + (dVar27 - (dVar28 - dVar23));
          local_65f8 = local_6548 + dVar28;
          dVar23 = (local_6548 - (local_65f8 - (local_65f8 - local_6548))) +
                   (dVar28 - (local_65f8 - local_6548));
          local_6610 = local_64e8 + dVar23;
          local_52e0 = (dVar23 - (local_6610 - (local_6610 - dVar23))) +
                       (local_64e8 - (local_6610 - dVar23));
          local_6500 = local_65f8 + local_6610;
          local_6620 = local_6500 - local_65f8;
          local_52d8 = (local_65f8 - (local_6500 - local_6620)) + (local_6610 - local_6620);
          local_52d0 = local_6500;
        }
        uVar7 = -(uint)(dVar21 != 0.0 || dVar1 != 0.0);
        bVar12 = (dVar24 != 0.0 || dVar26 != 0.0) | (byte)uVar7;
        if ((dVar24 != 0.0 || dVar26 != 0.0) || (uVar7 & 1) != 0) {
          local_6550 = local_65e0 * local_65e0;
          dVar27 = DAT_14c992028 * local_65e0 - (DAT_14c992028 * local_65e0 - local_65e0);
          dVar23 = local_65e0 - dVar27;
          dVar23 = dVar23 * dVar23 - ((local_6550 - dVar27 * dVar27) - (dVar27 + dVar27) * dVar23);
          local_64f0 = local_65b8 * local_65b8;
          local_6618 = DAT_14c992028 * local_65b8;
          local_6600 = local_6618 - local_65b8;
          dVar28 = local_6618 - local_6600;
          dVar27 = local_65b8 - dVar28;
          dVar27 = dVar27 * dVar27 - ((local_64f0 - dVar28 * dVar28) - (dVar28 + dVar28) * dVar27);
          dVar28 = dVar23 + dVar27;
          local_5308 = ((dVar28 - dVar23) - dVar28) + dVar23 + (dVar27 - (dVar28 - dVar23));
          local_65f8 = local_6550 + dVar28;
          dVar23 = (local_6550 - (local_65f8 - (local_65f8 - local_6550))) +
                   (dVar28 - (local_65f8 - local_6550));
          local_6610 = local_64f0 + dVar23;
          local_5300 = (dVar23 - (local_6610 - (local_6610 - dVar23))) +
                       (local_64f0 - (local_6610 - dVar23));
          local_6508 = local_65f8 + local_6610;
          local_6620 = local_6508 - local_65f8;
          local_52f8 = (local_65f8 - (local_6508 - local_6620)) + (local_6610 - local_6620);
          local_52f0 = local_6508;
        }
        local_6580 = (double *)((ulonglong)local_6580 & 0xffffffff00000000);
        if ((dVar21 != 0.0) || (NAN(dVar21))) {
          local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
          local_65e4 = uVar7;
          local_659c = uVar6;
          uVar2 = FUN_146bb8018(4,&local_e8,dVar21,local_5dc8);
          local_6578 = (double *)CONCAT44(local_6578._4_4_,uVar2);
          uVar2 = FUN_146bb8018(uVar2,local_5dc8,local_65d0 + local_65d0,local_5408);
          local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar2);
          uVar2 = FUN_146bb8018(4,&local_5308,dVar21,local_5b08);
          uVar2 = FUN_146bb8018(uVar2,local_5b08,local_65b0,local_5488);
          uVar3 = FUN_146bb8018(4,&local_52e8,dVar21,local_5ac8);
          uVar3 = FUN_146bb8018(uVar3,local_5ac8,-local_65b8,local_5508);
          local_6628 = (double *)local_5608;
          uVar2 = FUN_146bb7cdf((ulonglong)local_65c8 & 0xffffffff,local_5408,uVar2,local_5488);
          local_6628 = (double *)local_5888;
          uVar2 = FUN_146bb7cdf(uVar3,local_5508,uVar2,local_5608);
          pdVar15 = local_52a8;
          pdVar18 = local_2ea8;
          local_6628 = pdVar15;
          uVar7 = FUN_146bb7cdf(uVar10,pdVar18,uVar2,local_5888);
          uVar10 = (ulonglong)uVar7;
          uVar19 = local_659c;
          bVar12 = (byte)local_6598;
          uVar7 = local_65e4;
        }
        else {
          pdVar18 = local_52a8;
          local_6578 = (double *)((ulonglong)local_6578 & 0xffffffff00000000);
          uVar19 = uVar6;
        }
        if ((dVar1 != 0.0) || (pdVar16 = pdVar15, NAN(dVar1))) {
          local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
          local_6601 = bVar13;
          local_65e4 = uVar7;
          local_659c = uVar19;
          uVar2 = FUN_146bb8018(4,&local_e8,dVar1,local_5e08);
          local_6580 = (double *)CONCAT44(local_6580._4_4_,uVar2);
          uVar2 = FUN_146bb8018(uVar2,local_5e08,local_65a8 + local_65a8,local_5408);
          local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar2);
          uVar2 = FUN_146bb8018(4,&local_52e8,dVar1,local_5b48);
          uVar2 = FUN_146bb8018(uVar2,local_5b48,local_65e0,local_5488);
          uVar3 = FUN_146bb8018(4,&local_5308,dVar1,local_5b88);
          uVar3 = FUN_146bb8018(uVar3,local_5b88,-local_65d8,local_5508);
          local_6628 = (double *)local_5608;
          uVar2 = FUN_146bb7cdf((ulonglong)local_65c8 & 0xffffffff,local_5408,uVar2,local_5488);
          local_6628 = (double *)local_5888;
          uVar2 = FUN_146bb7cdf(uVar3,local_5508,uVar2,local_5608);
          bVar13 = local_6601;
          local_6628 = pdVar18;
          uVar7 = FUN_146bb7cdf(uVar10,pdVar15,uVar2,local_5888);
          uVar10 = (ulonglong)uVar7;
          pdVar16 = pdVar18;
          pdVar18 = pdVar15;
          uVar19 = local_659c;
          bVar12 = (byte)local_6598;
          uVar7 = local_65e4;
        }
        if ((dVar24 != 0.0) || (NAN(dVar24))) {
          local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
          local_6601 = bVar13;
          local_65e4 = uVar7;
          local_659c = uVar19;
          uVar2 = FUN_146bb8018(4,&local_108,dVar24,local_5e48);
          local_6558 = (double *)CONCAT44(local_6558._4_4_,uVar2);
          uVar2 = FUN_146bb8018(uVar2,local_5e48,local_65d8 + local_65d8,local_5408);
          local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar2);
          uVar2 = FUN_146bb8018(4,&local_52c8,dVar24,local_5bc8);
          uVar2 = FUN_146bb8018(uVar2,local_5bc8,local_65b8,local_5488);
          uVar3 = FUN_146bb8018(4,&local_5308,dVar24,local_5c08);
          uVar3 = FUN_146bb8018(uVar3,local_5c08,-local_65a8,local_5508);
          local_6628 = (double *)local_5608;
          uVar2 = FUN_146bb7cdf((ulonglong)local_65c8 & 0xffffffff,local_5408,uVar2,local_5488);
          local_6628 = (double *)local_5888;
          uVar2 = FUN_146bb7cdf(uVar3,local_5508,uVar2,local_5608);
          bVar13 = local_6601;
          local_6628 = pdVar18;
          uVar7 = FUN_146bb7cdf(uVar10,pdVar16,uVar2,local_5888);
          uVar10 = (ulonglong)uVar7;
          pdVar15 = pdVar16;
          uVar19 = local_659c;
          bVar12 = (byte)local_6598;
          uVar7 = local_65e4;
        }
        else {
          local_6558 = (double *)((ulonglong)local_6558 & 0xffffffff00000000);
          pdVar15 = pdVar18;
          pdVar18 = pdVar16;
        }
        uVar2 = 0;
        if ((dVar26 != 0.0) || (pdVar16 = pdVar18, NAN(dVar26))) {
          local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
          local_6601 = bVar13;
          local_65e4 = uVar7;
          local_659c = uVar19;
          local_6584 = FUN_146bb8018(4,&local_108,dVar26,local_5e88);
          uVar2 = FUN_146bb8018(local_6584,local_5e88,local_65b0 + local_65b0,local_5408);
          local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar2);
          uVar2 = FUN_146bb8018(4,&local_5308,dVar26,local_5c88);
          uVar2 = FUN_146bb8018(uVar2,local_5c88,local_65d0,local_5488);
          uVar3 = FUN_146bb8018(4,&local_52c8,dVar26,local_5c48);
          uVar3 = FUN_146bb8018(uVar3,local_5c48,-local_65e0,local_5508);
          local_6628 = (double *)local_5608;
          uVar2 = FUN_146bb7cdf((ulonglong)local_65c8 & 0xffffffff,local_5408,uVar2,local_5488);
          local_6628 = (double *)local_5888;
          uVar2 = FUN_146bb7cdf(uVar3,local_5508,uVar2,local_5608);
          bVar13 = local_6601;
          local_6628 = pdVar15;
          uVar7 = FUN_146bb7cdf(uVar10,pdVar18,uVar2,local_5888);
          uVar10 = (ulonglong)uVar7;
          pdVar16 = pdVar15;
          pdVar15 = pdVar18;
          uVar19 = local_659c;
          bVar12 = (byte)local_6598;
          uVar7 = local_65e4;
          uVar2 = local_6584;
        }
        if ((dVar25 != 0.0) || (NAN(dVar25))) {
          local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
          local_6601 = bVar13;
          local_65e4 = uVar7;
          local_659c = uVar19;
          local_6584 = uVar2;
          local_6588 = FUN_146bb8018(4,&local_128,dVar25,local_5ec8);
          uVar2 = FUN_146bb8018(local_6588,local_5ec8,local_65e0 + local_65e0,local_5408);
          local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar2);
          uVar2 = FUN_146bb8018(4,&local_52e8,dVar25,local_5d08);
          uVar2 = FUN_146bb8018(uVar2,local_5d08,local_65a8,local_5488);
          uVar3 = FUN_146bb8018(4,&local_52c8,dVar25,local_5cc8);
          uVar3 = FUN_146bb8018(uVar3,local_5cc8,-local_65b0,local_5508);
          local_6628 = (double *)local_5608;
          uVar2 = FUN_146bb7cdf((ulonglong)local_65c8 & 0xffffffff,local_5408,uVar2,local_5488);
          local_6628 = (double *)local_5888;
          uVar2 = FUN_146bb7cdf(uVar3,local_5508,uVar2,local_5608);
          bVar13 = local_6601;
          local_6628 = pdVar15;
          uVar7 = FUN_146bb7cdf(uVar10,pdVar16,uVar2,local_5888);
          uVar10 = (ulonglong)uVar7;
          pdVar18 = pdVar15;
          uVar19 = local_659c;
          bVar12 = (byte)local_6598;
          uVar7 = local_65e4;
          uVar2 = local_6584;
          uVar3 = local_6588;
        }
        else {
          pdVar18 = pdVar16;
          pdVar16 = pdVar15;
          uVar3 = 0;
        }
        uVar4 = 0;
        if ((dVar22 != 0.0) || (pdVar15 = pdVar18, NAN(dVar22))) {
          local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
          local_6601 = bVar13;
          local_65e4 = uVar7;
          local_659c = uVar19;
          local_6588 = uVar3;
          local_6584 = uVar2;
          local_658c = FUN_146bb8018(4,&local_128,dVar22,local_5f08);
          uVar2 = FUN_146bb8018(local_658c,local_5f08,local_65b8 + local_65b8,local_5408);
          local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar2);
          uVar2 = FUN_146bb8018(4,&local_52c8,dVar22,local_5d48);
          uVar2 = FUN_146bb8018(uVar2,local_5d48,local_65d8,local_5488);
          uVar3 = FUN_146bb8018(4,&local_52e8,dVar22,local_5d88);
          uVar3 = FUN_146bb8018(uVar3,local_5d88,-local_65d0,local_5508);
          local_6628 = (double *)local_5608;
          uVar2 = FUN_146bb7cdf((ulonglong)local_65c8 & 0xffffffff,local_5408,uVar2,local_5488);
          local_6628 = (double *)local_5888;
          uVar2 = FUN_146bb7cdf(uVar3,local_5508,uVar2,local_5608);
          bVar13 = local_6601;
          local_6628 = pdVar16;
          uVar7 = FUN_146bb7cdf(uVar10,pdVar18,uVar2,local_5888);
          uVar10 = (ulonglong)uVar7;
          pdVar15 = pdVar16;
          uVar19 = local_659c;
          bVar12 = (byte)local_6598;
          uVar7 = local_65e4;
          pdVar16 = pdVar18;
          uVar2 = local_6584;
          uVar3 = local_6588;
          uVar4 = local_658c;
        }
        local_65c8 = pdVar16;
        if ((uVar7 & 1) != 0) {
          if ((dVar22 != 0.0 || dVar25 != 0.0) || (uVar6 & 1) != 0) {
            dVar23 = local_65b8 * dVar24;
            dVar27 = DAT_14c992028 * dVar24 - (DAT_14c992028 * dVar24 - dVar24);
            dVar28 = DAT_14c992028 * local_65b8 - (DAT_14c992028 * local_65b8 - local_65b8);
            dVar27 = (local_65b8 - dVar28) * (dVar24 - dVar27) -
                     (((dVar23 - dVar27 * dVar28) - dVar28 * (dVar24 - dVar27)) -
                     dVar27 * (local_65b8 - dVar28));
            dVar28 = local_65d8 * dVar22;
            dVar30 = DAT_14c992028 * local_65d8 - (DAT_14c992028 * local_65d8 - local_65d8);
            dVar29 = DAT_14c992028 * dVar22 - (DAT_14c992028 * dVar22 - dVar22);
            dVar30 = (dVar22 - dVar29) * (local_65d8 - dVar30) -
                     (((dVar28 - dVar30 * dVar29) - dVar29 * (local_65d8 - dVar30)) -
                     dVar30 * (dVar22 - dVar29));
            dVar29 = dVar27 + dVar30;
            local_5328 = (dVar27 - (dVar29 - (dVar29 - dVar27))) + (dVar30 - (dVar29 - dVar27));
            local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
            dVar27 = dVar23 + dVar29;
            dVar30 = (dVar23 - (dVar27 - (dVar27 - dVar23))) + (dVar29 - (dVar27 - dVar23));
            dVar23 = dVar28 + dVar30;
            local_5320 = (dVar30 - (dVar23 - (dVar23 - dVar30))) + (dVar28 - (dVar23 - dVar30));
            local_6568 = dVar27 + dVar23;
            local_5318 = (dVar27 - (local_6568 - (local_6568 - dVar27))) +
                         (dVar23 - (local_6568 - dVar27));
            dVar23 = -local_65b0;
            local_65f0 = dVar25 * dVar23;
            dVar28 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
            dVar27 = DAT_14c992028 * dVar23 - (local_65b0 + DAT_14c992028 * dVar23);
            dVar23 = (dVar23 - dVar27) * (dVar25 - dVar28) -
                     (((local_65f0 - dVar28 * dVar27) - dVar27 * (dVar25 - dVar28)) -
                     dVar28 * (dVar23 - dVar27));
            dVar27 = -dVar26;
            local_65c0 = local_65e0 * dVar27;
            dVar28 = DAT_14c992028 * local_65e0 - (DAT_14c992028 * local_65e0 - local_65e0);
            local_6618 = DAT_14c992028 * dVar27;
            local_6600 = local_6618 + dVar26;
            dVar30 = local_6618 - local_6600;
            dVar27 = (dVar27 - dVar30) * (local_65e0 - dVar28) -
                     (((local_65c0 - dVar28 * dVar30) - dVar30 * (local_65e0 - dVar28)) -
                     dVar28 * (dVar27 - dVar30));
            dVar28 = dVar23 + dVar27;
            local_5348 = (dVar23 - (dVar28 - (dVar28 - dVar23))) + (dVar27 - (dVar28 - dVar23));
            local_65f8 = local_65f0 + dVar28;
            dVar23 = (local_65f0 - (local_65f8 - (local_65f8 - local_65f0))) +
                     (dVar28 - (local_65f8 - local_65f0));
            local_6610 = local_65c0 + dVar23;
            local_5340 = (dVar23 - (local_6610 - (local_6610 - dVar23))) +
                         (local_65c0 - (local_6610 - dVar23));
            local_6570 = local_65f8 + local_6610;
            local_6620 = local_6570 - local_65f8;
            local_5338 = (local_65f8 - (local_6570 - local_6620)) + (local_6610 - local_6620);
            local_6628 = local_6408;
            local_5330 = local_6570;
            local_5310 = local_6568;
            uVar8 = FUN_146bb7cdf(4,&local_5328,4);
            uVar5 = 4;
            local_65f0 = dVar24 * dVar22;
            dVar23 = DAT_14c992028 * dVar24 - (DAT_14c992028 * dVar24 - dVar24);
            dVar27 = DAT_14c992028 * dVar22 - (DAT_14c992028 * dVar22 - dVar22);
            dVar23 = (dVar22 - dVar27) * (dVar24 - dVar23) -
                     (((local_65f0 - dVar23 * dVar27) - dVar27 * (dVar24 - dVar23)) -
                     dVar23 * (dVar22 - dVar27));
            local_65c0 = dVar26 * dVar25;
            dVar27 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
            local_6618 = DAT_14c992028 * dVar26;
            local_6600 = local_6618 - dVar26;
            dVar28 = local_6618 - local_6600;
            dVar28 = (dVar26 - dVar28) * (dVar25 - dVar27) -
                     (((local_65c0 - dVar27 * dVar28) - dVar28 * (dVar25 - dVar27)) -
                     dVar27 * (dVar26 - dVar28));
            dVar27 = dVar23 - dVar28;
            local_6488 = (dVar23 - (dVar27 + (dVar23 - dVar27))) + ((dVar23 - dVar27) - dVar28);
            local_65f8 = local_65f0 + dVar27;
            dVar23 = (local_65f0 - (local_65f8 - (local_65f8 - local_65f0))) +
                     (dVar27 - (local_65f8 - local_65f0));
            local_6610 = dVar23 - local_65c0;
            local_6480 = (dVar23 - (local_6610 + (dVar23 - local_6610))) +
                         ((dVar23 - local_6610) - local_65c0);
            local_6518 = local_65f8 + local_6610;
            local_6620 = local_6518 - local_65f8;
            local_6478 = (local_65f8 - (local_6518 - local_6620)) + (local_6610 - local_6620);
            bVar12 = (byte)local_6598;
            local_6470 = local_6518;
          }
          else {
            local_6408[0] = 0.0;
            local_6488 = 0.0;
            uVar8 = 1;
            uVar5 = 1;
          }
          pdVar18 = local_65c8;
          if ((dVar21 != 0.0) || (NAN(dVar21))) {
            local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
            local_6601 = bVar13;
            local_65e4 = uVar20;
            local_659c = uVar19;
            local_658c = uVar4;
            local_6588 = uVar3;
            local_6584 = uVar2;
            local_655c = uVar5;
            uVar2 = FUN_146bb8018((ulonglong)local_6578 & 0xffffffff,local_5dc8,dVar21,local_5408);
            local_6560 = FUN_146bb8018(uVar8,local_6408,dVar21,local_5f88);
            uVar3 = FUN_146bb8018(local_6560,local_5f88,local_65d0 + local_65d0,local_5608);
            local_6628 = (double *)local_5888;
            uVar2 = FUN_146bb7cdf(uVar2,local_5408,uVar3,local_5608);
            local_6628 = pdVar18;
            uVar2 = FUN_146bb7cdf(uVar10,pdVar15,uVar2,local_5888);
            if ((dVar26 != 0.0) || (pdVar16 = pdVar15, NAN(dVar26))) {
              uVar3 = FUN_146bb8018(4,&local_5308,dVar21,local_5388);
              uVar3 = FUN_146bb8018(uVar3,local_5388,dVar26,local_5408);
              local_6628 = pdVar15;
              uVar2 = FUN_146bb7cdf(uVar2,pdVar18,uVar3,local_5408);
              pdVar16 = pdVar18;
              pdVar18 = pdVar15;
            }
            if ((dVar22 != 0.0) || (NAN(dVar22))) {
              uVar3 = FUN_146bb8018(4,&local_52e8,-dVar21,local_5388);
              uVar3 = FUN_146bb8018(uVar3,local_5388,dVar22,local_5408);
              local_6628 = pdVar16;
              uVar2 = FUN_146bb7cdf(uVar2,pdVar18,uVar3,local_5408);
              local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar2);
              pdVar17 = pdVar16;
              pdVar16 = pdVar18;
            }
            else {
              local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar2);
              pdVar17 = pdVar18;
            }
            uVar2 = local_655c;
            local_6578 = pdVar16;
            local_6560 = FUN_146bb8018(local_6560,local_5f88,dVar21,local_5608);
            uVar2 = FUN_146bb8018(uVar2,&local_6488,dVar21,local_6248);
            uVar3 = FUN_146bb8018(uVar2,local_6248,local_65d0 + local_65d0,local_5408);
            uVar2 = FUN_146bb8018(uVar2,local_6248,dVar21,local_5488);
            uVar5 = local_655c;
            local_6628 = (double *)local_5708;
            uVar2 = FUN_146bb7cdf(uVar3,local_5408,uVar2,local_5488);
            local_6628 = (double *)local_5a88;
            uVar2 = FUN_146bb7cdf(local_6560,local_5608,uVar2,local_5708);
            local_6628 = pdVar16;
            uVar10 = FUN_146bb7cdf((ulonglong)local_65c8 & 0xffffffff,pdVar17,uVar2,local_5a88);
            uVar10 = uVar10 & 0xffffffff;
            pdVar15 = local_6578;
            uVar19 = local_659c;
            uVar20 = local_65e4;
            bVar13 = local_6601;
            bVar12 = (byte)local_6598;
            local_65c8 = pdVar17;
            uVar2 = local_6584;
            uVar3 = local_6588;
            uVar4 = local_658c;
          }
          if ((dVar1 != 0.0) || (NAN(dVar1))) {
            local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
            local_6601 = bVar13;
            local_659c = uVar19;
            local_658c = uVar4;
            local_6588 = uVar3;
            local_6584 = uVar2;
            uVar2 = FUN_146bb8018((ulonglong)local_6580 & 0xffffffff,local_5e08,dVar1,local_5408);
            local_65e4 = uVar20;
            uVar3 = FUN_146bb8018(uVar8,local_6408,dVar1,local_6008);
            uVar4 = FUN_146bb8018(uVar3,local_6008,local_65a8 + local_65a8,local_5608);
            local_6628 = (double *)local_5888;
            uVar2 = FUN_146bb7cdf(uVar2,local_5408,uVar4,local_5608);
            local_6628 = local_65c8;
            uVar2 = FUN_146bb7cdf(uVar10,pdVar15,uVar2,local_5888);
            local_6580 = (double *)CONCAT44(local_6580._4_4_,uVar2);
            uVar2 = FUN_146bb8018(uVar3,local_6008,dVar1,local_5608);
            uVar3 = FUN_146bb8018(uVar5,&local_6488,dVar1,local_6288);
            uVar4 = FUN_146bb8018(uVar3,local_6288,local_65a8 + local_65a8,local_5408);
            uVar3 = FUN_146bb8018(uVar3,local_6288,dVar1,local_5488);
            uVar20 = local_65e4;
            local_6628 = (double *)local_5708;
            uVar3 = FUN_146bb7cdf(uVar4,local_5408,uVar3,local_5488);
            local_6628 = (double *)local_5a88;
            uVar2 = FUN_146bb7cdf(uVar2,local_5608,uVar3,local_5708);
            local_6628 = pdVar15;
            uVar10 = FUN_146bb7cdf((ulonglong)local_6580 & 0xffffffff,local_65c8,uVar2,local_5a88);
            uVar10 = uVar10 & 0xffffffff;
            uVar19 = local_659c;
            bVar13 = local_6601;
            bVar12 = (byte)local_6598;
            uVar2 = local_6584;
            uVar3 = local_6588;
            uVar4 = local_658c;
          }
        }
        if ((uVar19 & 1) != 0) {
          if ((bVar13 & 1) == 0) {
            local_6448[0] = 0.0;
            local_64a8 = 0.0;
            uVar5 = 1;
            uVar14 = 1;
          }
          else {
            dVar23 = local_65a8 * dVar25;
            dVar27 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
            dVar28 = DAT_14c992028 * local_65a8 - (DAT_14c992028 * local_65a8 - local_65a8);
            dVar27 = (local_65a8 - dVar28) * (dVar25 - dVar27) -
                     (((dVar23 - dVar27 * dVar28) - dVar28 * (dVar25 - dVar27)) -
                     dVar27 * (local_65a8 - dVar28));
            dVar28 = local_65e0 * dVar1;
            dVar30 = DAT_14c992028 * local_65e0 - (DAT_14c992028 * local_65e0 - local_65e0);
            dVar29 = DAT_14c992028 * dVar1 - (DAT_14c992028 * dVar1 - dVar1);
            dVar30 = (dVar1 - dVar29) * (local_65e0 - dVar30) -
                     (((dVar28 - dVar30 * dVar29) - dVar29 * (local_65e0 - dVar30)) -
                     dVar30 * (dVar1 - dVar29));
            dVar29 = dVar27 + dVar30;
            local_5328 = (dVar27 - (dVar29 - (dVar29 - dVar27))) + (dVar30 - (dVar29 - dVar27));
            local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
            dVar27 = dVar23 + dVar29;
            dVar30 = (dVar23 - (dVar27 - (dVar27 - dVar23))) + (dVar29 - (dVar27 - dVar23));
            dVar23 = dVar28 + dVar30;
            local_5320 = (dVar30 - (dVar23 - (dVar23 - dVar30))) + (dVar28 - (dVar23 - dVar30));
            local_6568 = dVar27 + dVar23;
            local_5318 = (dVar27 - (local_6568 - (local_6568 - dVar27))) +
                         (dVar23 - (local_6568 - dVar27));
            dVar23 = -local_65b8;
            local_65f0 = dVar21 * dVar23;
            dVar28 = DAT_14c992028 * dVar21 - (DAT_14c992028 * dVar21 - dVar21);
            dVar27 = DAT_14c992028 * dVar23 - (local_65b8 + DAT_14c992028 * dVar23);
            dVar23 = (dVar23 - dVar27) * (dVar21 - dVar28) -
                     (((local_65f0 - dVar28 * dVar27) - dVar27 * (dVar21 - dVar28)) -
                     dVar28 * (dVar23 - dVar27));
            dVar27 = -dVar22;
            local_65c0 = local_65d0 * dVar27;
            dVar28 = DAT_14c992028 * local_65d0 - (DAT_14c992028 * local_65d0 - local_65d0);
            local_6618 = DAT_14c992028 * dVar27;
            local_6600 = local_6618 + dVar22;
            dVar30 = local_6618 - local_6600;
            dVar27 = (dVar27 - dVar30) * (local_65d0 - dVar28) -
                     (((local_65c0 - dVar28 * dVar30) - dVar30 * (local_65d0 - dVar28)) -
                     dVar28 * (dVar27 - dVar30));
            dVar28 = dVar23 + dVar27;
            local_5348 = (dVar23 - (dVar28 - (dVar28 - dVar23))) + (dVar27 - (dVar28 - dVar23));
            local_65f8 = local_65f0 + dVar28;
            dVar23 = (local_65f0 - (local_65f8 - (local_65f8 - local_65f0))) +
                     (dVar28 - (local_65f8 - local_65f0));
            local_6610 = local_65c0 + dVar23;
            local_5340 = (dVar23 - (local_6610 - (local_6610 - dVar23))) +
                         (local_65c0 - (local_6610 - dVar23));
            local_6570 = local_65f8 + local_6610;
            local_6620 = local_6570 - local_65f8;
            local_5338 = (local_65f8 - (local_6570 - local_6620)) + (local_6610 - local_6620);
            local_6628 = local_6448;
            uVar14 = 4;
            local_5330 = local_6570;
            local_5310 = local_6568;
            uVar5 = FUN_146bb7cdf(4,&local_5328,4);
            local_65f0 = dVar1 * dVar25;
            dVar23 = DAT_14c992028 * dVar25 - (DAT_14c992028 * dVar25 - dVar25);
            dVar27 = DAT_14c992028 * dVar1 - (DAT_14c992028 * dVar1 - dVar1);
            dVar23 = (dVar1 - dVar27) * (dVar25 - dVar23) -
                     (((local_65f0 - dVar23 * dVar27) - dVar27 * (dVar25 - dVar23)) -
                     dVar23 * (dVar1 - dVar27));
            local_65c0 = dVar21 * dVar22;
            dVar27 = DAT_14c992028 * dVar21 - (DAT_14c992028 * dVar21 - dVar21);
            local_6618 = DAT_14c992028 * dVar22;
            local_6600 = local_6618 - dVar22;
            dVar28 = local_6618 - local_6600;
            dVar28 = (dVar22 - dVar28) * (dVar21 - dVar27) -
                     (((local_65c0 - dVar27 * dVar28) - dVar28 * (dVar21 - dVar27)) -
                     dVar27 * (dVar22 - dVar28));
            dVar27 = dVar23 - dVar28;
            local_64a8 = (dVar23 - (dVar27 + (dVar23 - dVar27))) + ((dVar23 - dVar27) - dVar28);
            local_65f8 = local_65f0 + dVar27;
            dVar23 = (local_65f0 - (local_65f8 - (local_65f8 - local_65f0))) +
                     (dVar27 - (local_65f8 - local_65f0));
            local_6610 = dVar23 - local_65c0;
            local_64a0 = (dVar23 - (local_6610 + (dVar23 - local_6610))) +
                         ((dVar23 - local_6610) - local_65c0);
            local_6520 = local_65f8 + local_6610;
            local_6620 = local_6520 - local_65f8;
            local_6498 = (local_65f8 - (local_6520 - local_6620)) + (local_6610 - local_6620);
            bVar12 = (byte)local_6598;
            local_6490 = local_6520;
          }
          pdVar18 = local_65c8;
          if ((dVar24 != 0.0) || (NAN(dVar24))) {
            local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
            local_65e4 = uVar20;
            local_658c = uVar4;
            local_6588 = uVar3;
            local_6584 = uVar2;
            uVar2 = FUN_146bb8018((ulonglong)local_6558 & 0xffffffff,local_5e48,dVar24,local_5408);
            uVar3 = FUN_146bb8018(uVar5,local_6448,dVar24,local_6088);
            local_6580 = (double *)CONCAT44(local_6580._4_4_,uVar3);
            uVar3 = FUN_146bb8018(uVar3,local_6088,local_65d8 + local_65d8,local_5608);
            local_6628 = (double *)local_5888;
            uVar2 = FUN_146bb7cdf(uVar2,local_5408,uVar3,local_5608);
            local_6628 = pdVar18;
            uVar2 = FUN_146bb7cdf(uVar10,pdVar15,uVar2,local_5888);
            if ((dVar22 != 0.0) || (pdVar16 = pdVar15, NAN(dVar22))) {
              uVar3 = FUN_146bb8018(4,&local_52c8,dVar24,local_5388);
              uVar3 = FUN_146bb8018(uVar3,local_5388,dVar22,local_5408);
              local_6628 = pdVar15;
              uVar2 = FUN_146bb7cdf(uVar2,pdVar18,uVar3,local_5408);
              pdVar16 = pdVar18;
              pdVar18 = pdVar15;
            }
            if ((dVar1 != 0.0) || (NAN(dVar1))) {
              uVar3 = FUN_146bb8018(4,&local_5308,-dVar24,local_5388);
              uVar3 = FUN_146bb8018(uVar3,local_5388,dVar1,local_5408);
              local_6628 = pdVar16;
              uVar2 = FUN_146bb7cdf(uVar2,pdVar18,uVar3,local_5408);
              local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar2);
              pdVar17 = pdVar16;
              local_6558 = pdVar18;
            }
            else {
              local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar2);
              pdVar17 = pdVar18;
              local_6558 = pdVar16;
            }
            local_6578 = local_6558;
            uVar2 = FUN_146bb8018(local_6580._0_4_,local_6088,dVar24,local_5608);
            local_6580 = (double *)CONCAT44(local_6580._4_4_,uVar2);
            uVar2 = FUN_146bb8018(uVar14,&local_64a8,dVar24,local_62c8);
            uVar3 = FUN_146bb8018(uVar2,local_62c8,local_65d8 + local_65d8,local_5408);
            uVar2 = FUN_146bb8018(uVar2,local_62c8,dVar24,local_5488);
            local_6628 = (double *)local_5708;
            uVar2 = FUN_146bb7cdf(uVar3,local_5408,uVar2,local_5488);
            local_6628 = (double *)local_5a88;
            uVar2 = FUN_146bb7cdf((ulonglong)local_6580 & 0xffffffff,local_5608,uVar2,local_5708);
            local_6628 = local_6558;
            uVar10 = FUN_146bb7cdf((ulonglong)local_65c8 & 0xffffffff,pdVar17,uVar2,local_5a88);
            uVar10 = uVar10 & 0xffffffff;
            pdVar15 = local_6578;
            uVar20 = local_65e4;
            bVar12 = (byte)local_6598;
            local_65c8 = pdVar17;
            uVar2 = local_6584;
            uVar3 = local_6588;
            uVar4 = local_658c;
          }
          if ((dVar26 != 0.0) || (NAN(dVar26))) {
            local_6598 = (double *)CONCAT71(local_6598._1_7_,bVar12);
            local_658c = uVar4;
            local_6588 = uVar3;
            uVar2 = FUN_146bb8018(uVar2,local_5e88,dVar26,local_5408);
            local_65e4 = uVar20;
            uVar3 = FUN_146bb8018(uVar5,local_6448,dVar26,local_6108);
            uVar4 = FUN_146bb8018(uVar3,local_6108,local_65b0 + local_65b0,local_5608);
            local_6628 = (double *)local_5888;
            uVar2 = FUN_146bb7cdf(uVar2,local_5408,uVar4,local_5608);
            local_6628 = local_65c8;
            uVar2 = FUN_146bb7cdf(uVar10,pdVar15,uVar2,local_5888);
            local_6580 = (double *)CONCAT44(local_6580._4_4_,uVar2);
            uVar2 = FUN_146bb8018(uVar3,local_6108,dVar26,local_5608);
            uVar3 = FUN_146bb8018(uVar14,&local_64a8,dVar26,local_6308);
            uVar4 = FUN_146bb8018(uVar3,local_6308,local_65b0 + local_65b0,local_5408);
            uVar3 = FUN_146bb8018(uVar3,local_6308,dVar26,local_5488);
            uVar20 = local_65e4;
            local_6628 = (double *)local_5708;
            uVar3 = FUN_146bb7cdf(uVar4,local_5408,uVar3,local_5488);
            local_6628 = (double *)local_5a88;
            uVar2 = FUN_146bb7cdf(uVar2,local_5608,uVar3,local_5708);
            local_6628 = pdVar15;
            uVar10 = FUN_146bb7cdf((ulonglong)local_6580 & 0xffffffff,local_65c8,uVar2,local_5a88);
            uVar10 = uVar10 & 0xffffffff;
            bVar12 = (byte)local_6598;
            uVar3 = local_6588;
            uVar4 = local_658c;
          }
        }
        iVar9 = (int)uVar10;
        if ((uVar20 & 1) != 0) {
          if ((bVar12 & 1) == 0) {
            local_63c8[0] = 0.0;
            local_6468 = 0.0;
            uVar2 = 1;
            uVar14 = 1;
          }
          else {
            dVar23 = local_65b0 * dVar21;
            dVar27 = DAT_14c992028 * dVar21 - (DAT_14c992028 * dVar21 - dVar21);
            dVar28 = DAT_14c992028 * local_65b0 - (DAT_14c992028 * local_65b0 - local_65b0);
            dVar27 = (local_65b0 - dVar28) * (dVar21 - dVar27) -
                     (((dVar23 - dVar27 * dVar28) - dVar28 * (dVar21 - dVar27)) -
                     dVar27 * (local_65b0 - dVar28));
            dVar28 = local_65d0 * dVar26;
            dVar30 = DAT_14c992028 * local_65d0 - (DAT_14c992028 * local_65d0 - local_65d0);
            dVar29 = DAT_14c992028 * dVar26 - (DAT_14c992028 * dVar26 - dVar26);
            dVar30 = (dVar26 - dVar29) * (local_65d0 - dVar30) -
                     (((dVar28 - dVar30 * dVar29) - dVar29 * (local_65d0 - dVar30)) -
                     dVar30 * (dVar26 - dVar29));
            dVar29 = dVar27 + dVar30;
            local_5328 = (dVar27 - (dVar29 - (dVar29 - dVar27))) + (dVar30 - (dVar29 - dVar27));
            dVar27 = dVar23 + dVar29;
            dVar30 = (dVar23 - (dVar27 - (dVar27 - dVar23))) + (dVar29 - (dVar27 - dVar23));
            dVar23 = dVar28 + dVar30;
            local_5320 = (dVar30 - (dVar23 - (dVar23 - dVar30))) + (dVar28 - (dVar23 - dVar30));
            local_6568 = dVar27 + dVar23;
            local_5318 = (dVar27 - (local_6568 - (local_6568 - dVar27))) +
                         (dVar23 - (local_6568 - dVar27));
            dVar23 = -local_65a8;
            local_65f0 = dVar24 * dVar23;
            dVar28 = DAT_14c992028 * dVar24 - (DAT_14c992028 * dVar24 - dVar24);
            dVar27 = DAT_14c992028 * dVar23 - (local_65a8 + DAT_14c992028 * dVar23);
            dVar23 = (dVar23 - dVar27) * (dVar24 - dVar28) -
                     (((local_65f0 - dVar28 * dVar27) - dVar27 * (dVar24 - dVar28)) -
                     dVar28 * (dVar23 - dVar27));
            dVar27 = -dVar1;
            local_65c0 = local_65d8 * dVar27;
            dVar28 = DAT_14c992028 * local_65d8 - (DAT_14c992028 * local_65d8 - local_65d8);
            local_6618 = DAT_14c992028 * dVar27;
            local_6600 = local_6618 + dVar1;
            dVar30 = local_6618 - local_6600;
            dVar27 = (dVar27 - dVar30) * (local_65d8 - dVar28) -
                     (((local_65c0 - dVar28 * dVar30) - dVar30 * (local_65d8 - dVar28)) -
                     dVar28 * (dVar27 - dVar30));
            dVar28 = dVar23 + dVar27;
            local_5348 = (dVar23 - (dVar28 - (dVar28 - dVar23))) + (dVar27 - (dVar28 - dVar23));
            local_65f8 = local_65f0 + dVar28;
            dVar23 = (local_65f0 - (local_65f8 - (local_65f8 - local_65f0))) +
                     (dVar28 - (local_65f8 - local_65f0));
            local_6610 = local_65c0 + dVar23;
            local_5340 = (dVar23 - (local_6610 - (local_6610 - dVar23))) +
                         (local_65c0 - (local_6610 - dVar23));
            local_6570 = local_65f8 + local_6610;
            local_6620 = local_6570 - local_65f8;
            local_5338 = (local_65f8 - (local_6570 - local_6620)) + (local_6610 - local_6620);
            local_6628 = local_63c8;
            uVar14 = 4;
            local_5330 = local_6570;
            local_5310 = local_6568;
            uVar2 = FUN_146bb7cdf(4,&local_5328,4);
            local_65f0 = dVar21 * dVar26;
            dVar23 = DAT_14c992028 * dVar21 - (DAT_14c992028 * dVar21 - dVar21);
            dVar27 = DAT_14c992028 * dVar26 - (DAT_14c992028 * dVar26 - dVar26);
            dVar21 = (dVar26 - dVar27) * (dVar21 - dVar23) -
                     (((local_65f0 - dVar23 * dVar27) - dVar27 * (dVar21 - dVar23)) -
                     dVar23 * (dVar26 - dVar27));
            local_65c0 = dVar1 * dVar24;
            dVar23 = DAT_14c992028 * dVar24 - (DAT_14c992028 * dVar24 - dVar24);
            local_6618 = DAT_14c992028 * dVar1;
            local_6600 = local_6618 - dVar1;
            dVar27 = local_6618 - local_6600;
            dVar23 = (dVar1 - dVar27) * (dVar24 - dVar23) -
                     (((local_65c0 - dVar23 * dVar27) - dVar27 * (dVar24 - dVar23)) -
                     dVar23 * (dVar1 - dVar27));
            dVar24 = dVar21 - dVar23;
            local_6468 = (dVar21 - (dVar24 + (dVar21 - dVar24))) + ((dVar21 - dVar24) - dVar23);
            local_65f8 = local_65f0 + dVar24;
            dVar24 = (local_65f0 - (local_65f8 - (local_65f8 - local_65f0))) +
                     (dVar24 - (local_65f8 - local_65f0));
            local_6610 = dVar24 - local_65c0;
            local_6460 = (dVar24 - (local_6610 + (dVar24 - local_6610))) +
                         ((dVar24 - local_6610) - local_65c0);
            local_6510 = local_65f8 + local_6610;
            local_6620 = local_6510 - local_65f8;
            local_6458 = (local_65f8 - (local_6510 - local_6620)) + (local_6610 - local_6620);
            local_6450 = local_6510;
          }
          pdVar18 = local_65c8;
          if ((dVar25 != 0.0) || (NAN(dVar25))) {
            local_658c = uVar4;
            uVar3 = FUN_146bb8018(uVar3,local_5ec8,dVar25,local_5408);
            uVar4 = FUN_146bb8018(uVar2,local_63c8,dVar25,local_6188);
            local_6580 = (double *)CONCAT44(local_6580._4_4_,uVar4);
            uVar4 = FUN_146bb8018(uVar4,local_6188,local_65e0 + local_65e0,local_5608);
            local_6628 = (double *)local_5888;
            uVar3 = FUN_146bb7cdf(uVar3,local_5408,uVar4,local_5608);
            local_6628 = pdVar18;
            uVar3 = FUN_146bb7cdf(uVar10,pdVar15,uVar3,local_5888);
            if ((dVar1 != 0.0) || (pdVar16 = pdVar15, NAN(dVar1))) {
              uVar4 = FUN_146bb8018(4,&local_52e8,dVar25,local_5388);
              uVar4 = FUN_146bb8018(uVar4,local_5388,dVar1,local_5408);
              local_6628 = pdVar15;
              uVar3 = FUN_146bb7cdf(uVar3,pdVar18,uVar4,local_5408);
              pdVar16 = pdVar18;
              pdVar18 = pdVar15;
            }
            if ((dVar26 != 0.0) || (NAN(dVar26))) {
              uVar4 = FUN_146bb8018(4,&local_52c8,-dVar25,local_5388);
              uVar4 = FUN_146bb8018(uVar4,local_5388,dVar26,local_5408);
              local_6628 = pdVar16;
              uVar3 = FUN_146bb7cdf(uVar3,pdVar18,uVar4,local_5408);
              local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar3);
              pdVar17 = pdVar16;
              local_6578 = pdVar18;
            }
            else {
              local_65c8 = (double *)CONCAT44(local_65c8._4_4_,uVar3);
              pdVar17 = pdVar18;
              local_6578 = pdVar16;
            }
            local_6598 = local_6578;
            uVar3 = FUN_146bb8018(local_6580._0_4_,local_6188,dVar25,local_5608);
            local_6580 = (double *)CONCAT44(local_6580._4_4_,uVar3);
            uVar3 = FUN_146bb8018(uVar14,&local_6468,dVar25,local_6348);
            uVar4 = FUN_146bb8018(uVar3,local_6348,local_65e0 + local_65e0,local_5408);
            uVar3 = FUN_146bb8018(uVar3,local_6348,dVar25,local_5488);
            local_6628 = (double *)local_5708;
            uVar3 = FUN_146bb7cdf(uVar4,local_5408,uVar3,local_5488);
            local_6628 = (double *)local_5a88;
            uVar3 = FUN_146bb7cdf((ulonglong)local_6580 & 0xffffffff,local_5608,uVar3,local_5708);
            local_6628 = local_6598;
            uVar6 = FUN_146bb7cdf((ulonglong)local_65c8 & 0xffffffff,pdVar17,uVar3,local_5a88);
            uVar10 = (ulonglong)uVar6;
            pdVar15 = local_6578;
            local_65c8 = pdVar17;
            uVar4 = local_658c;
          }
          iVar9 = (int)uVar10;
          if ((dVar22 != 0.0) || (NAN(dVar22))) {
            uVar3 = FUN_146bb8018(uVar4,local_5f08,dVar22,local_5408);
            uVar2 = FUN_146bb8018(uVar2,local_63c8,dVar22,local_6208);
            uVar4 = FUN_146bb8018(uVar2,local_6208,local_65b8 + local_65b8,local_5608);
            local_6628 = (double *)local_5888;
            uVar3 = FUN_146bb7cdf(uVar3,local_5408,uVar4,local_5608);
            local_6628 = local_65c8;
            uVar3 = FUN_146bb7cdf(uVar10,pdVar15,uVar3,local_5888);
            uVar2 = FUN_146bb8018(uVar2,local_6208,dVar22,local_5608);
            uVar4 = FUN_146bb8018(uVar14,&local_6468,dVar22,local_6388);
            uVar5 = FUN_146bb8018(uVar4,local_6388,local_65b8 + local_65b8,local_5408);
            uVar4 = FUN_146bb8018(uVar4,local_6388,dVar22,local_5488);
            local_6628 = (double *)local_5708;
            uVar4 = FUN_146bb7cdf(uVar5,local_5408,uVar4,local_5488);
            local_6628 = (double *)local_5a88;
            uVar2 = FUN_146bb7cdf(uVar2,local_5608,uVar4,local_5708);
            local_6628 = pdVar15;
            iVar9 = FUN_146bb7cdf(uVar3,local_65c8,uVar2,local_5a88);
          }
        }
        local_2ea8[0] = pdVar15[(longlong)iVar9 + -1];
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_6648) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_2ea8[0]);
  }
  return;
}



// FUNCTION 146bc4da6 FUN_146bc4da6 body=375 status=ok
// SIG undefined FUN_146bc4da6(void)

void FUN_146bc4da6(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_1 + 0x18);
  lVar4 = (longlong)local_48;
  pvVar3 = *(void **)(param_1 + 0x10);
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_144a06ca8(&local_50,local_48,0);
    memcpy(local_50,pvVar3,lVar4 << 2);
  }
  FUN_146bc4f1e(param_2,&local_50);
  iVar1 = *(int *)(param_1 + 0x28);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x20);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_2,iVar2);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar5 + lVar4 * 8);
      lVar5 = *(longlong *)(param_1 + 0x20);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_2,iVar2);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar5 + 4 + lVar4 * 8);
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    do {
      local_60 = (void *)0x0;
      local_58 = *(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar4);
      lVar5 = (longlong)local_58;
      pvVar3 = *(void **)(*(longlong *)(param_1 + 0x30) + lVar4);
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_144a06ca8(&local_60,local_58,0);
        memcpy(local_60,pvVar3,lVar5 << 2);
      }
      FUN_146bc4f1e(param_2,&local_60);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc4f1e FUN_146bc4f1e body=132 status=ok
// SIG undefined FUN_146bc4f1e(void)

void FUN_146bc4f1e(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_2;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar4 + lVar5);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_1,iVar2);
      }
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar5);
    lVar4 = *param_2;
  }
  if (lVar4 != 0) {
    FUN_1400020a8(lVar4);
    return;
  }
  return;
}



// FUNCTION 146bc4fa2 FUN_146bc4fa2 body=284 status=ok
// SIG undefined FUN_146bc4fa2(void)

ulonglong FUN_146bc4fa2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar1 = *param_1;
  uVar6 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar8 = 0;
  if ((uVar6 != 0) && (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar9 = 1;
    uVar7 = 1;
    if (1 < (int)uVar6) {
      uVar9 = uVar6;
    }
    do {
      uVar8 = uVar9;
      if (uVar9 == uVar7) break;
      uVar4 = uVar7 >> 9;
      uVar10 = uVar7 & 0x1ff;
      uVar8 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar4] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  do {
    if (uVar8 == uVar6) {
      return uVar5 & 0xffffff01;
    }
    lVar2 = *param_1;
    if ((((int)uVar8 < 0) || (*(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24) <= (int)uVar8)
        ) || (0xfffc < (ushort)(*(short *)(*(longlong *)
                                            (*(longlong *)(lVar2 + 0x28) +
                                            (ulonglong)(uVar8 >> 9) * 8) +
                                          (ulonglong)(uVar8 & 0x1ff) * 2) - 2U))) {
      iVar3 = FUN_146c0b0ee(lVar2,uVar8,0);
      uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 & iVar3 == 0);
    }
    uVar9 = uVar8 + 1;
    if ((int)(uVar8 + 1) < (int)uVar6) {
      uVar9 = uVar6;
    }
    uVar7 = uVar8;
    do {
      uVar8 = uVar9;
      if (uVar9 - 1 == uVar7) break;
      uVar8 = uVar7 + 1;
      uVar7 = uVar8;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar1 + 0x28) +
                                           (ulonglong)(uVar8 >> 9) * 8) +
                                         (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 146bc50be FUN_146bc50be body=675 status=ok
// SIG undefined FUN_146bc50be(void)

undefined8 FUN_146bc50be(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_59;
  undefined8 local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = *(uint *)(param_2 + 1);
  local_a0 = param_1;
  local_88 = param_2;
  local_80 = param_3;
  if (uVar10 == *(uint *)(param_3 + 1)) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((ulonglong)uVar10);
    }
    local_a8 = (longlong *)(param_4 + 0x20);
    if (*(int *)(param_4 + 0x2c) < (int)uVar10) {
      FUN_146be5458(local_a8);
    }
    local_98 = param_4 + 0x40;
    if (*(int *)(param_4 + 0x4c) < (int)uVar10) {
      FUN_14481578e(local_98);
    }
    uVar14 = 0;
    local_90 = (ulonglong)uVar10;
    do {
      if (local_90 == uVar14) {
        uVar12 = 1;
        goto LAB_146bc5246;
      }
      uVar2 = *(undefined4 *)(*local_88 + uVar14 * 4);
      uVar8 = (ulonglong)((int)uVar14 + 1) % (local_90 & 0xffffffff);
      uVar3 = *(undefined4 *)(*local_88 + uVar8 * 4);
      uVar4 = *(undefined4 *)(*local_80 + uVar14 * 4);
      uVar5 = *(undefined4 *)(*local_80 + uVar8 * 4);
      iVar6 = *(int *)(*local_a0 + 0x1b0);
      *(int *)(*local_a0 + 0x1b0) = iVar6 + 1;
      iVar7 = *(int *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x48) = iVar7 + 1U;
      if (*(uint *)(param_4 + 0x4c) < iVar7 + 1U) {
        FUN_1446f48e2(local_98,iVar7);
      }
      plVar9 = local_a0;
      *(int *)(*(longlong *)(param_4 + 0x40) + (longlong)iVar7 * 4) = iVar6;
      local_58 = (undefined *)CONCAT44(uVar2,uVar3);
      local_50 = (undefined1 *)CONCAT44(local_50._4_4_,uVar5);
      uVar10 = FUN_146c01152(*local_a0,&local_58,iVar6);
      local_78 = CONCAT44(uVar4,uVar2);
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      uVar11 = FUN_146c01152(*plVar9,&local_78,iVar6);
      iVar6 = *(int *)(param_4 + 0x28);
      *(uint *)(param_4 + 0x28) = iVar6 + 1U;
      if (*(uint *)(param_4 + 0x2c) < iVar6 + 1U) {
        FUN_146be54b8(local_a8,iVar6);
      }
      *(ulonglong *)(*local_a8 + (longlong)iVar6 * 8) = CONCAT44(uVar11,uVar10);
      uVar14 = uVar14 + 1;
    } while (-1 < (int)(uVar11 | uVar10));
    iVar6 = *(int *)(param_4 + 0x28);
    if (iVar6 != 0) {
      local_78 = 0;
      uStack_70 = 0;
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6 * 2);
      }
      FUN_14481578e(&local_78);
      if ((longlong)*(int *)(param_4 + 0x28) != 0) {
        puVar15 = *(undefined4 **)(param_4 + 0x20);
        puVar1 = puVar15 + (longlong)*(int *)(param_4 + 0x28) * 2;
        do {
          lVar13 = (longlong)(int)(uint)uStack_70;
          uVar10 = (uint)uStack_70 + 1;
          if (uStack_70._4_4_ < uVar10) {
            uVar14 = uStack_70 & 0xffffffff;
            uStack_70._0_4_ = uVar10;
            FUN_1446f48e2(&local_78,uVar14);
            uVar10 = (uint)uStack_70;
          }
          uStack_70._0_4_ = uVar10;
          uVar10 = (uint)uStack_70;
          *(undefined4 *)(local_78 + lVar13 * 4) = *puVar15;
          lVar13 = (longlong)(int)(uint)uStack_70;
          uStack_70._0_4_ = (uint)uStack_70 + 1;
          if (uStack_70._4_4_ < (uint)uStack_70) {
            FUN_1446f48e2(&local_78,uVar10);
          }
          *(undefined4 *)(local_78 + lVar13 * 4) = puVar15[1];
          puVar15 = puVar15 + 2;
        } while (puVar15 != puVar1);
      }
      local_50 = &local_59;
      local_58 = &DAT_142971dd8;
      FUN_146bc6232(local_a0,&local_78,0);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar12 = 0;
LAB_146bc5246:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc5364 FUN_146bc5364 body=751 status=ok
// SIG undefined FUN_146bc5364(void)

undefined8 FUN_146bc5364(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar11 = *(uint *)(param_2 + 1);
  local_a0 = param_1;
  local_88 = param_2;
  local_80 = param_3;
  if (uVar11 == *(uint *)(param_3 + 1)) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((ulonglong)uVar11);
    }
    local_a8 = (longlong *)(param_4 + 0x20);
    if (*(int *)(param_4 + 0x2c) < (int)uVar11) {
      FUN_146be5458(local_a8,uVar11);
    }
    local_98 = param_4 + 0x40;
    if (*(int *)(param_4 + 0x4c) < (int)uVar11) {
      FUN_14481578e(local_98,uVar11);
    }
    uVar15 = 0;
    local_90 = (ulonglong)uVar11;
    do {
      if (local_90 == uVar15) {
        uVar13 = 1;
        goto LAB_146bc5537;
      }
      lVar16 = *local_a0;
      lVar8 = *local_88;
      uVar11 = *(uint *)(lVar8 + uVar15 * 8);
      lVar9 = *(longlong *)(*(longlong *)(lVar16 + 0x130) + (ulonglong)(uVar11 >> 9) * 8);
      uVar14 = (ulonglong)(uVar11 & 0x1ff);
      local_50._0_4_ = *(undefined4 *)(lVar9 + 8 + uVar14 * 0xc);
      local_58 = (undefined *)*(undefined8 *)(lVar9 + uVar14 * 0xc);
      uVar2 = *(undefined4 *)((longlong)&local_58 + (longlong)*(char *)(lVar8 + 4 + uVar15 * 8) * 4)
      ;
      uVar3 = *(undefined4 *)((longlong)&local_58 + (longlong)*(char *)(lVar8 + 5 + uVar15 * 8) * 4)
      ;
      uVar4 = *(undefined4 *)(*local_80 + uVar15 * 4);
      uVar5 = *(undefined4 *)
               (*local_80 + ((ulonglong)((int)uVar15 + 1) % (local_90 & 0xffffffff)) * 4);
      iVar6 = *(int *)(lVar16 + 0x1b0);
      *(int *)(lVar16 + 0x1b0) = iVar6 + 1;
      iVar7 = *(int *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x48) = iVar7 + 1U;
      if (*(uint *)(param_4 + 0x4c) < iVar7 + 1U) {
        FUN_1446f48e2(local_98,iVar7);
      }
      plVar10 = local_a0;
      *(int *)(*(longlong *)(param_4 + 0x40) + (longlong)iVar7 * 4) = iVar6;
      local_58 = (undefined *)CONCAT44(uVar2,uVar3);
      local_50 = (undefined1 *)CONCAT44(local_50._4_4_,uVar5);
      uVar11 = FUN_146c01152(*local_a0,&local_58,iVar6);
      local_78 = CONCAT44(uVar4,uVar2);
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      uVar12 = FUN_146c01152(*plVar10,&local_78,iVar6);
      iVar6 = *(int *)(param_4 + 0x28);
      *(uint *)(param_4 + 0x28) = iVar6 + 1U;
      if (*(uint *)(param_4 + 0x2c) < iVar6 + 1U) {
        FUN_146be54b8(local_a8,iVar6);
      }
      *(ulonglong *)(*local_a8 + (longlong)iVar6 * 8) = CONCAT44(uVar12,uVar11);
      uVar15 = uVar15 + 1;
    } while (-1 < (int)(uVar12 | uVar11));
    iVar6 = *(int *)(param_4 + 0x28);
    if (iVar6 != 0) {
      local_78 = 0;
      uStack_70 = 0;
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6 * 2);
      }
      FUN_14481578e(&local_78);
      if ((longlong)*(int *)(param_4 + 0x28) != 0) {
        puVar17 = *(undefined4 **)(param_4 + 0x20);
        puVar1 = puVar17 + (longlong)*(int *)(param_4 + 0x28) * 2;
        do {
          lVar16 = (longlong)(int)(uint)uStack_70;
          uVar11 = (uint)uStack_70 + 1;
          if (uStack_70._4_4_ < uVar11) {
            uVar15 = uStack_70 & 0xffffffff;
            uStack_70._0_4_ = uVar11;
            FUN_1446f48e2(&local_78,uVar15);
            uVar11 = (uint)uStack_70;
          }
          uStack_70._0_4_ = uVar11;
          uVar11 = (uint)uStack_70;
          *(undefined4 *)(local_78 + lVar16 * 4) = *puVar17;
          lVar16 = (longlong)(int)(uint)uStack_70;
          uStack_70._0_4_ = (uint)uStack_70 + 1;
          if (uStack_70._4_4_ < (uint)uStack_70) {
            FUN_1446f48e2(&local_78,uVar11);
          }
          *(undefined4 *)(local_78 + lVar16 * 4) = puVar17[1];
          puVar17 = puVar17 + 2;
        } while (puVar17 != puVar1);
      }
      local_50 = &local_59;
      local_58 = &DAT_142971dd8;
      FUN_146bc6232(local_a0,&local_78,0);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar13 = 0;
LAB_146bc5537:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc5656 FUN_146bc5656 body=337 status=ok
// SIG undefined FUN_146bc5656(void)

ulonglong FUN_146bc5656(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  bool bVar12;
  
  if ((int)param_3[1] == (int)param_2[1]) {
    if ((int)param_3[1] < 1) {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    }
    else {
      uVar11 = 0;
      do {
        uVar9 = *(uint *)(*param_3 + uVar11 * 4);
        uVar7 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) + 8 +
                 (ulonglong)((uVar9 & 0x1ff) << 4));
        iVar1 = *(int *)(*param_2 + uVar11 * 4);
        uVar11 = uVar11 + 1;
        uVar9 = (uint)uVar7;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (uVar7 >> 9 & 0x7fffff) * 8);
        uVar7 = (ulonglong)(uVar9 & 0x1ff);
        iVar2 = *(int *)(lVar6 + uVar7 * 0xc);
        iVar3 = *(int *)(lVar6 + 4 + uVar7 * 0xc);
        iVar4 = *(int *)(lVar6 + 8 + uVar7 * 0xc);
        bVar8 = 0;
        bVar10 = 0;
        if ((iVar2 != iVar1) && (bVar10 = 1, iVar3 != iVar1)) {
          bVar10 = -(iVar4 != iVar1) | 2;
        }
        iVar5 = *(int *)(*param_2 +
                        ((longlong)
                         ((ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
                         (longlong)(int)param_2[1] & 0xffffffffU) * 4);
        if ((iVar2 != iVar5) && (bVar8 = 1, iVar3 != iVar5)) {
          bVar8 = (iVar4 == iVar5) * '\x03' - 1;
        }
        bVar12 = (char)(bVar10 | bVar8) < '\0';
        uVar7 = (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),!bVar12);
        if (bVar12) break;
        iVar1 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
          FUN_146bfcf2a(param_4,iVar1);
        }
        lVar6 = *param_4;
        *(uint *)(lVar6 + (longlong)iVar1 * 8) = uVar9;
        *(ushort *)(lVar6 + 4 + (longlong)iVar1 * 8) = CONCAT11(bVar8,bVar10);
      } while ((longlong)uVar11 < (longlong)(int)param_3[1]);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146bc57a8 FUN_146bc57a8 body=845 status=ok
// SIG undefined FUN_146bc57a8(void)

ulonglong FUN_146bc57a8(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  int local_114;
  ulonglong local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8 [6];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined8 local_90;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar3 = *(uint *)(param_2 + 1);
  uVar4 = (ulonglong)uVar3;
  uVar11 = 0;
  if (uVar3 == *(uint *)(param_3 + 1)) {
    local_f8[2] = 0;
    local_f8[3] = 0;
    local_f8[0] = 0;
    local_f8[1] = 0;
    FUN_144a1a59e(local_f8 + 2,uVar3,1);
    FUN_144a1a59e(local_f8,uVar4,1);
    uVar10 = 0;
    if (0 < (int)uVar3) {
      uVar10 = (ulonglong)uVar3;
    }
    do {
      if (uVar10 == uVar11) {
        uVar11 = 0;
        local_108 = 0;
        uStack_100 = 0;
        if (0 < (int)uVar3) {
          uVar11 = 0;
          iVar5 = 0;
          local_110 = uVar4;
          do {
            if ((longlong)(int)uStack_100 != 0) {
              lVar7 = 0;
              do {
                if (*(int *)(local_108 + lVar7) == *(int *)(local_f8[0] + uVar11 * 4))
                goto LAB_146bc5970;
                lVar7 = lVar7 + 4;
              } while ((longlong)(int)uStack_100 * 4 != lVar7);
            }
            local_b8 = -1;
            iStack_b4 = -1;
            uStack_b0 = 0xffffffff;
            uStack_ac = 0xffffffff;
            local_c8 = 0xffffffff;
            uStack_c4 = 0xffffffff;
            uStack_c0 = 0xffffffff;
            uStack_bc = 0xffffffff;
            local_98 = (undefined1 *)0x0;
            local_90 = 0x400000000;
            local_78 = 0;
            local_70 = 0x400000000;
            local_68 = 0;
            local_128 = 1;
            iVar2 = (**(code **)(*(longlong *)*param_1 + 0x88))
                              ((longlong *)*param_1,*(undefined4 *)(local_f8[2] + uVar11 * 4));
            uVar10 = uStack_100;
            if (iVar2 == 0) {
              if (local_b8 != -1) {
                lVar7 = (longlong)(int)uStack_100;
                uVar3 = (int)uStack_100 + 1;
                uStack_100 = CONCAT44(uStack_100._4_4_,uVar3);
                if (uStack_100._4_4_ < uVar3) {
                  FUN_1446f48e2(&local_108,uVar10 & 0xffffffff);
                }
                *(int *)(local_108 + lVar7 * 4) = local_b8;
              }
              uVar10 = uStack_100;
              local_114 = iVar5;
              if (iStack_b4 != -1) {
                lVar7 = (longlong)(int)uStack_100;
                uVar3 = (int)uStack_100 + 1;
                uStack_100 = CONCAT44(uStack_100._4_4_,uVar3);
                if (uStack_100._4_4_ < uVar3) {
                  FUN_1446f48e2(&local_108,uVar10 & 0xffffffff);
                }
                *(int *)(local_108 + lVar7 * 4) = iStack_b4;
              }
              puVar6 = local_98;
              if (local_98 == (undefined1 *)0x0) {
                puVar6 = local_a8;
              }
              lVar7 = (longlong)(int)local_90;
              iVar5 = local_114;
              if (lVar7 != 0) {
                lVar12 = 0;
                do {
                  uVar4 = uStack_100;
                  uVar1 = *(undefined4 *)(puVar6 + lVar12);
                  lVar9 = (longlong)(int)uStack_100;
                  uVar3 = (int)uStack_100 + 1;
                  uStack_100 = CONCAT44(uStack_100._4_4_,uVar3);
                  if (uStack_100._4_4_ < uVar3) {
                    FUN_1446f48e2(&local_108,uVar4 & 0xffffffff);
                  }
                  *(undefined4 *)(local_108 + lVar9 * 4) = uVar1;
                  lVar12 = lVar12 + 4;
                  uVar4 = local_110;
                  iVar5 = local_114;
                } while (lVar7 * 4 != lVar12);
              }
            }
            else {
              iVar5 = iVar5 + 1;
            }
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            if (local_98 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
LAB_146bc5970:
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar4);
          uVar11 = (ulonglong)(0 < iVar5);
          if (local_108 != 0) {
            FUN_1400020a8();
          }
        }
        goto LAB_146bc5a8e;
      }
      uVar8 = (longlong)((int)uVar11 + 1) % (longlong)(int)uVar3 & 0xffffffff;
      uVar1 = FUN_146c061e0(*param_1,*(undefined4 *)(*param_2 + uVar11 * 4),
                            *(undefined4 *)(*param_2 + uVar8 * 4));
      *(undefined4 *)(local_f8[2] + uVar11 * 4) = uVar1;
      if (*(int *)(local_f8[2] + uVar11 * 4) == -1) {
        uVar11 = 0;
        goto LAB_146bc5a8e;
      }
      uVar1 = FUN_146c061e0(*param_1,*(undefined4 *)(*param_3 + uVar11 * 4),
                            *(undefined4 *)(*param_3 + uVar8 * 4));
      *(undefined4 *)(local_f8[0] + uVar11 * 4) = uVar1;
      lVar7 = uVar11 * 4;
      uVar11 = uVar11 + 1;
    } while (*(int *)(local_f8[0] + lVar7) != -1);
    uVar11 = 0;
LAB_146bc5a8e:
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_f8[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 146bc5af6 FUN_146bc5af6 body=1349 status=ok
// SIG undefined FUN_146bc5af6(void)

ulonglong FUN_146bc5af6(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       longlong *param_5,longlong param_6,char param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong *local_120;
  ulonglong local_118;
  longlong local_110;
  undefined1 local_101;
  undefined8 local_100;
  undefined1 *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar15 = (int)param_3[1];
  plVar17 = (longlong *)0x0;
  local_148 = param_1;
  local_120 = param_3;
  if ((1 < (longlong)iVar15) && (iVar15 == (int)param_5[1])) {
    local_140 = (longlong *)(param_6 + 0x40);
    if (*(int *)(param_6 + 0x4c) < iVar15) {
      FUN_14481578e(local_140);
    }
    local_138 = (longlong *)(param_6 + 0x10);
    local_118 = 0;
    local_128 = (longlong)iVar15;
    do {
      iVar15 = *(int *)(*local_120 + local_118 * 4);
      iVar14 = *(int *)(*param_5 + local_118 * 4);
      local_118 = local_118 + 1;
      uVar16 = (local_118 & 0xffffffff) % (local_128 & 0xffffffff);
      iVar5 = *(int *)(*local_120 + uVar16 * 4);
      iVar6 = *(int *)(*param_5 + uVar16 * 4);
      lVar19 = *local_148;
      fVar21 = (float)FUN_142963c9c(lVar19,param_2,iVar15,iVar5);
      fVar22 = (float)FUN_142963c9c(lVar19,param_4,iVar14,iVar6);
      local_130 = (ulonglong)*(uint *)(lVar19 + 0x1b0);
      *(uint *)(lVar19 + 0x1b0) = *(uint *)(lVar19 + 0x1b0) + 1;
      iVar12 = *(int *)(param_6 + 0x48);
      *(uint *)(param_6 + 0x48) = iVar12 + 1U;
      if (*(uint *)(param_6 + 0x4c) < iVar12 + 1U) {
        FUN_1446f48e2(local_140,iVar12);
      }
      *(int *)(*local_140 + (longlong)iVar12 * 4) = (int)local_130;
      bVar20 = iVar14 != iVar6;
      if (iVar14 != iVar6 || iVar15 != iVar5) {
        local_110 = (longlong)iVar5;
        fVar32 = 1.1920929e-07;
        uVar18 = *(uint *)(*param_4 + (longlong)iVar14 * 4);
        lVar19 = *(longlong *)(*(longlong *)(*local_148 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
        uVar16 = (ulonglong)uVar18 & 0x1ff;
        uVar1 = *(undefined8 *)(lVar19 + 0x10 + uVar16 * 0x18);
        uVar25 = (undefined4)uVar1;
        uVar26 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)(lVar19 + uVar16 * 0x18);
        uVar27 = (undefined4)uVar1;
        uVar28 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)(lVar19 + 8 + uVar16 * 0x18);
        uVar29 = (undefined4)uVar1;
        uVar30 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar18 = *(uint *)(*param_2 + (longlong)iVar15 * 4);
        lVar19 = *(longlong *)(*(longlong *)(*local_148 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
        uVar16 = (ulonglong)uVar18 & 0x1ff;
        uVar1 = *(undefined8 *)(lVar19 + 0x10 + uVar16 * 0x18);
        uVar33 = (undefined4)uVar1;
        uVar34 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)(lVar19 + uVar16 * 0x18);
        uVar35 = (undefined4)uVar1;
        uVar36 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)(lVar19 + 8 + uVar16 * 0x18);
        uVar23 = (undefined4)uVar1;
        uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
        fVar31 = 1.1920929e-07;
        do {
          if (iVar15 == iVar5) {
            lVar19 = *param_4;
            uVar18 = *(uint *)(lVar19 + (longlong)iVar14 * 4);
            local_100 = (undefined *)CONCAT44(uVar18,*(undefined4 *)(*param_2 + local_110 * 4));
            lVar13 = *local_148;
LAB_146bc5d6f:
            iVar14 = (iVar14 + 1) % (int)param_4[1];
            uVar11 = *(uint *)(lVar19 + (longlong)iVar14 * 4);
            lVar19 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
            uVar16 = (ulonglong)(uVar11 & 0x1ff);
            dVar2 = *(double *)(lVar19 + uVar16 * 0x18);
            dVar3 = *(double *)(lVar19 + 8 + uVar16 * 0x18);
            dVar4 = *(double *)(lVar19 + 0x10 + uVar16 * 0x18);
            dVar9 = (double)CONCAT44(uVar28,uVar27) - dVar2;
            dVar10 = (double)CONCAT44(uVar30,uVar29) - dVar3;
            dVar8 = (double)CONCAT44(uVar26,uVar25) - dVar4;
            fVar32 = fVar32 + (float)SQRT(dVar8 * dVar8 + dVar9 * dVar9 + dVar10 * dVar10);
            uVar27 = SUB84(dVar2,0);
            uVar28 = (undefined4)((ulonglong)dVar2 >> 0x20);
            uVar29 = SUB84(dVar3,0);
            uVar30 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar25 = SUB84(dVar4,0);
            uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          else {
            lVar19 = *param_4;
            uVar18 = *(uint *)(lVar19 + (longlong)iVar14 * 4);
            local_100 = (undefined *)
                        CONCAT44(uVar18,*(undefined4 *)(*param_2 + (longlong)iVar15 * 4));
            lVar13 = *local_148;
            if ((bool)(bVar20 & fVar32 / (fVar22 + 1.1920929e-07) <
                                fVar31 / (fVar21 + 1.1920929e-07))) goto LAB_146bc5d6f;
            iVar15 = (iVar15 + 1) % (int)param_2[1];
            uVar11 = *(uint *)(*param_2 + (longlong)iVar15 * 4);
            lVar19 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
            uVar16 = (ulonglong)(uVar11 & 0x1ff);
            dVar2 = *(double *)(lVar19 + uVar16 * 0x18);
            dVar3 = *(double *)(lVar19 + 8 + uVar16 * 0x18);
            dVar4 = *(double *)(lVar19 + 0x10 + uVar16 * 0x18);
            dVar10 = (double)CONCAT44(uVar36,uVar35) - dVar2;
            dVar8 = (double)CONCAT44(uVar24,uVar23) - dVar3;
            dVar9 = (double)CONCAT44(uVar34,uVar33) - dVar4;
            fVar31 = fVar31 + (float)SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar8 * dVar8);
            uVar35 = SUB84(dVar2,0);
            uVar36 = (undefined4)((ulonglong)dVar2 >> 0x20);
            uVar23 = SUB84(dVar3,0);
            uVar24 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar33 = SUB84(dVar4,0);
            uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          if (param_7 != '\0') {
            local_100 = (undefined *)CONCAT44(uVar11,(undefined4)local_100);
            uVar11 = uVar18;
          }
          local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,uVar11);
          iVar12 = FUN_146c01152(lVar13,&local_100,local_130);
          if (iVar12 < 0) {
            if (*(int *)(param_6 + 0x18) == 0) {
              plVar17 = (longlong *)0x0;
            }
            else {
              local_f8 = &local_101;
              local_100 = &DAT_142971dd8;
              plVar17 = (longlong *)0x0;
              FUN_146bc6232(local_148,local_138,0);
            }
            goto LAB_146bc5f86;
          }
          iVar7 = *(int *)(param_6 + 0x18);
          *(uint *)(param_6 + 0x18) = iVar7 + 1U;
          if (*(uint *)(param_6 + 0x1c) < iVar7 + 1U) {
            FUN_1446f48e2(local_138,iVar7);
          }
          *(int *)(*local_138 + (longlong)iVar7 * 4) = iVar12;
          bVar20 = iVar14 != iVar6;
        } while ((iVar15 != iVar5) || (plVar17 = param_2, iVar14 != iVar6));
      }
    } while (local_118 != local_128);
    plVar17 = (longlong *)CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
  }
LAB_146bc5f86:
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar17 & 0xffffffff;
}



// FUNCTION 146bc603c FUN_146bc603c body=75 status=ok
// SIG undefined FUN_146bc603c(void)

void FUN_146bc603c(void)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_18 = &DAT_142971dd8;
  FUN_146bc6232();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc6088 FUN_146bc6088 body=424 status=ok
// SIG undefined FUN_146bc6088(void)

ulonglong FUN_146bc6088(longlong *param_1,undefined4 param_2,longlong *param_3,ulonglong param_4,
                       longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined1 local_59;
  undefined8 local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1;
  local_68 = param_4;
  local_60 = param_2;
  if ((int)param_4 == -1) {
    uVar4 = *(uint *)(*param_1 + 0x1b0);
    local_68 = (ulonglong)uVar4;
    *(uint *)(*param_1 + 0x1b0) = uVar4 + 1;
    iVar3 = *(int *)(param_5 + 0x48);
    uVar4 = iVar3 + 1;
    *(uint *)(param_5 + 0x48) = uVar4;
    if (*(uint *)(param_5 + 0x4c) < uVar4) {
      FUN_1446f48e2((longlong *)(param_5 + 0x40));
    }
    *(int *)(*(longlong *)(param_5 + 0x40) + (longlong)iVar3 * 4) = (int)local_68;
  }
  uVar4 = *(uint *)(param_3 + 1);
  uVar6 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  plVar1 = (longlong *)(param_5 + 0x10);
  if (*(int *)(param_5 + 0x1c) < (int)uVar4) {
    FUN_14481578e(plVar1);
  }
  if (uVar6 == 0) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  else {
    uVar5 = 0;
    uVar7 = 1;
    do {
      local_58 = (undefined *)
                 CONCAT44(*(undefined4 *)(*param_3 + ((uVar7 & 0xffffffff) % (ulonglong)uVar4) * 4),
                          local_60);
      local_50 = (undefined1 *)CONCAT44(local_50._4_4_,*(undefined4 *)(*param_3 + -4 + uVar7 * 4));
      iVar3 = FUN_146c01152(*local_70,&local_58,local_68);
      if (iVar3 < 0) {
        local_50 = &local_59;
        local_58 = &DAT_142971dd8;
        FUN_146bc6232(local_70,plVar1,0);
        break;
      }
      iVar2 = *(int *)(param_5 + 0x18);
      *(uint *)(param_5 + 0x18) = iVar2 + 1U;
      if (*(uint *)(param_5 + 0x1c) < iVar2 + 1U) {
        FUN_1446f48e2(plVar1);
      }
      *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar3;
      uVar5 = CONCAT71((int7)(int3)((uint)iVar2 >> 8),uVar6 <= uVar7);
      bVar8 = uVar7 != uVar6;
      uVar7 = uVar7 + 1;
    } while (bVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc6232 FUN_146bc6232 body=229 status=ok
// SIG undefined FUN_146bc6232(void)

ulonglong FUN_146bc6232(longlong *param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  undefined8 unaff_RBX;
  longlong lVar6;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 < 1) {
    bVar5 = 1;
  }
  else {
    bVar5 = 1;
    lVar6 = 0;
    do {
      uVar1 = *(uint *)(*param_2 + lVar6 * 4);
      if (((-1 < (int)uVar1) &&
          (lVar2 = *param_1, (int)uVar1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))
          ) && ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                                   (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        local_4c = uVar1;
        (*(code *)*param_4)(param_4[1],&local_4c);
        iVar4 = FUN_146c0b65a(*param_1,*(undefined4 *)(*param_2 + lVar6 * 4),param_3,0);
        bVar5 = bVar5 & iVar4 == 0;
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar3 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar5) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc6318 FUN_146bc6318 body=321 status=ok
// SIG undefined FUN_146bc6318(void)

int FUN_146bc6318(undefined8 *param_1,double param_2,double param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined1 local_c9;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = *param_1;
  local_e0 = 0;
  uStack_d8 = 0;
  iVar5 = 0;
  local_b8 = 0;
  local_a8 = 0;
  FUN_142984024(&local_e8);
  lVar2 = local_e0;
  lVar4 = (longlong)(int)uStack_d8;
  if ((lVar4 != 1) && ((int)uStack_d8 != 0)) {
    lVar3 = 0;
    iVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar3);
      if (((*(int *)(lVar1 + 8) < param_4) ||
          (FUN_146bc645a(&local_c8,*param_1,lVar1), (double)local_c8 < param_2)) ||
         ((double)local_c0 < param_3)) {
        local_c0 = &local_c9;
        local_c8 = &DAT_142971dd8;
        FUN_146bc6232(param_1,lVar1,1,&local_c8);
        iVar5 = iVar5 + 1;
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  FUN_146be9400(&local_e0);
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 146bc645a FUN_146bc645a body=553 status=ok
// SIG undefined FUN_146bc645a(void)

void FUN_146bc645a(double *param_1,longlong param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  if ((longlong)(int)param_3[1] == 0) {
    dVar19 = 0.0;
    dVar18 = 0.0;
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x10);
    dVar18 = 0.0;
    lVar16 = 0;
    dVar19 = 0.0;
    do {
      uVar5 = *(uint *)(*param_3 + lVar16);
      if ((-1 < (int)uVar5) &&
         ((int)uVar5 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
        uVar15 = (ulonglong)(uVar5 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar5 >> 9) * 8) +
                               uVar15 * 2) - 1U) < 0xfffe) {
          lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
          uVar5 = *(uint *)(lVar8 + uVar15 * 0xc);
          uVar6 = *(uint *)(lVar8 + 4 + uVar15 * 0xc);
          lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
          uVar17 = (ulonglong)uVar5 & 0x1ff;
          dVar1 = *(double *)(lVar9 + uVar17 * 0x18);
          dVar20 = *(double *)(lVar9 + 8 + uVar17 * 0x18);
          dVar2 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
          lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
          uVar17 = (ulonglong)uVar6 & 0x1ff;
          dVar3 = *(double *)(lVar9 + uVar17 * 0x18);
          uVar5 = *(uint *)(lVar8 + 8 + uVar15 * 0xc);
          lVar8 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
          uVar15 = (ulonglong)uVar5 & 0x1ff;
          dVar4 = *(double *)(lVar8 + uVar15 * 0x18);
          dVar13 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18) - dVar2;
          dVar12 = *(double *)(lVar9 + 8 + uVar17 * 0x18) - dVar20;
          dVar14 = dVar3 - dVar1;
          dVar2 = *(double *)(lVar8 + 0x10 + uVar15 * 0x18) - dVar2;
          dVar20 = *(double *)(lVar8 + 8 + uVar15 * 0x18) - dVar20;
          dVar10 = dVar4 - dVar1;
          dVar11 = dVar10 * dVar12 - dVar14 * dVar20;
          dVar10 = dVar2 * dVar14 - dVar13 * dVar10;
          dVar20 = dVar20 * dVar13 - dVar2 * dVar12;
          dVar19 = dVar19 + SQRT(dVar11 * dVar11 + dVar20 * dVar20 + dVar10 * dVar10);
          dVar18 = dVar18 + (dVar1 + dVar3 + dVar4) * dVar20;
        }
      }
      lVar16 = lVar16 + 4;
    } while ((longlong)(int)param_3[1] * 4 != lVar16);
    dVar19 = dVar19 * 0.5;
    dVar18 = dVar18 * 0.16666666666666666;
  }
  *param_1 = dVar18;
  param_1[1] = dVar19;
  return;
}



// FUNCTION 146bc6684 FUN_146bc6684 body=439 status=ok
// SIG undefined FUN_146bc6684(void)

void FUN_146bc6684(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146bc683c(param_4);
  FUN_146c369d2(param_3,*param_1);
  if ((longlong)(int)param_2[1] != 0) {
    local_68 = *param_2;
    local_70 = param_3 + 0xa8;
    local_78 = param_4 + 0x10;
    local_60 = (longlong)(int)param_2[1] << 2;
    lVar8 = 0;
    do {
      uVar1 = *(uint *)(local_68 + lVar8);
      lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
      uVar7 = (ulonglong)(uVar1 & 0x1ff);
      uVar6 = *(undefined4 *)(lVar4 + uVar7 * 0xc);
      uVar2 = *(undefined4 *)(lVar4 + 4 + uVar7 * 0xc);
      local_7c = *(undefined4 *)(lVar4 + 8 + uVar7 * 0xc);
      uVar5 = 0xffffffff;
      if (*(char *)(*param_1 + 0x1a8) == '\x01') {
        uVar5 = FUN_146bc6950(param_1,uVar1,param_3,param_4);
      }
      local_54 = 0xffffffffffffffff;
      local_4c = 0xffffffff;
      uVar6 = FUN_146bc69da(param_1,uVar6,param_3,param_4);
      local_54 = CONCAT44(local_54._4_4_,uVar6);
      uVar6 = FUN_146bc69da(param_1,uVar2,param_3,param_4);
      local_54 = CONCAT44(uVar6,(undefined4)local_54);
      local_4c = FUN_146bc69da(param_1,local_7c,param_3,param_4);
      uVar6 = FUN_146c01152(*param_1,&local_54,uVar5);
      FUN_146bcd0f6(local_70,uVar1,uVar6);
      iVar3 = *(int *)(param_4 + 0x18);
      *(uint *)(param_4 + 0x18) = iVar3 + 1U;
      if (*(uint *)(param_4 + 0x1c) < iVar3 + 1U) {
        FUN_1446f48e2(local_78,iVar3);
      }
      *(undefined4 *)(*(longlong *)(param_4 + 0x10) + (longlong)iVar3 * 4) = uVar6;
      local_88 = param_4;
      FUN_146bc6b04(param_1,uVar1,uVar6,param_3);
      lVar8 = lVar8 + 4;
    } while (local_60 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc683c FUN_146bc683c body=275 status=ok
// SIG undefined FUN_146bc683c(void)

void FUN_146bc683c(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_14481578e(param_1,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14481578e(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_146be5458(param_1 + 0x20,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  FUN_144716727(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    FUN_1403b10bc(param_1 + 0x30,0);
  }
  if (*(int *)(param_1 + 0x4c) < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_14481578e(param_1 + 0x40,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  FUN_144716727(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_1403b10bc(param_1 + 0x50,0);
  }
  if (-1 < *(int *)(param_1 + 0x6c)) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_14481578e(param_1 + 0x60,0);
  return;
}



// FUNCTION 146bc6950 FUN_146bc6950 body=137 status=ok
// SIG undefined FUN_146bc6950(void)

int FUN_146bc6950(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_146bc96d4(*param_1);
  iVar3 = FUN_146bcd1d8(param_3 + 0x150,uVar2);
  if (iVar3 == -1) {
    iVar3 = *(int *)(*param_1 + 0x1b0);
    *(int *)(*param_1 + 0x1b0) = iVar3 + 1;
    FUN_146bcd0f6(param_3 + 0x150,uVar2,iVar3);
    iVar1 = *(int *)(param_4 + 0x48);
    *(uint *)(param_4 + 0x48) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x4c) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(param_4 + 0x40),iVar1);
    }
    *(int *)(*(longlong *)(param_4 + 0x40) + (longlong)iVar1 * 4) = iVar3;
  }
  return iVar3;
}



// FUNCTION 146bc69da FUN_146bc69da body=296 status=ok
// SIG undefined FUN_146bc69da(void)

int FUN_146bc69da(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = FUN_146bcd1d8(param_3);
  if (iVar2 == -1) {
    iVar2 = FUN_146c08ff0(*param_1,*param_1,param_2 & 0xffffffff);
    FUN_146bcd0f6(param_3,param_2 & 0xffffffff,iVar2);
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_1446f48e2(param_4,iVar3);
    }
    *(int *)(*param_4 + (longlong)iVar3 * 4) = iVar2;
    if ((*(longlong **)(*param_1 + 0x208) != (longlong *)0x0) &&
       (iVar3 = (**(code **)(**(longlong **)(*param_1 + 0x208) + 0xd0))(), 0 < iVar3)) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0x208) + 0x50) + lVar4 * 8);
        local_3c = *(undefined4 *)
                    (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (param_2 >> 9 & 0x7fffff) * 8) +
                    (ulonglong)((uint)param_2 & 0x1ff) * 4);
        FUN_146bfd34a(lVar1 + 0x18,&local_3c,iVar2);
        lVar4 = lVar4 + 1;
        iVar3 = (**(code **)(**(longlong **)(*param_1 + 0x208) + 0xd0))();
      } while (lVar4 < iVar3);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 146bc6b04 FUN_146bc6b04 body=1644 status=ok
// SIG undefined FUN_146bc6b04(void)

void FUN_146bc6b04(longlong *param_1,ulonglong param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  int local_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong **)(*param_1 + 0x208) != (longlong *)0x0) {
    uVar6 = (ulonglong)param_3;
    local_c0 = param_2;
    iVar1 = (**(code **)(**(longlong **)(*param_1 + 0x208) + 0xa0))();
    if (0 < iVar1) {
      iVar1 = (int)local_c0;
      uVar4 = iVar1 * 3 + 2;
      local_78 = (ulonglong)(uVar4 >> 9);
      local_70 = (ulonglong)(uVar4 & 0x1ff);
      uVar4 = iVar1 * 3 + 1;
      local_88 = (ulonglong)(uVar4 >> 9);
      local_80 = (ulonglong)(uVar4 & 0x1ff);
      uVar4 = param_3 * 3 + 2;
      local_a0 = (ulonglong)(uVar4 >> 9);
      local_98 = (ulonglong)(uVar4 & 0x1ff);
      uVar4 = param_3 * 3 + 1;
      local_b0 = (ulonglong)(uVar4 >> 9);
      local_a8 = (ulonglong)(uVar4 & 0x1ff);
      local_b8 = (ulonglong)(param_3 * 3 >> 9);
      local_90 = (ulonglong)(param_3 * 3 & 0x1ff);
      uVar9 = 0;
      do {
        plVar3 = *(longlong **)(*param_1 + 0x208);
        if ((longlong)uVar9 < (longlong)(int)plVar3[5]) {
          lVar10 = *(longlong *)(plVar3[4] + uVar9 * 8);
        }
        else {
          lVar10 = 0;
        }
        lVar7 = *(longlong *)(lVar10 + 0x78);
        iVar2 = *(int *)(*(longlong *)(lVar7 + (ulonglong)((uint)(iVar1 * 3) >> 9) * 8) +
                        (ulonglong)(iVar1 * 3 & 0x1ff) * 4);
        if (-1 < iVar2) {
          local_60[3] = iVar2;
          local_60[4] = *(undefined4 *)(*(longlong *)(lVar7 + local_88 * 8) + local_80 * 4);
          local_60[5] = *(undefined4 *)(*(longlong *)(lVar7 + local_78 * 8) + local_70 * 4);
          local_60[2] = *(undefined4 *)(*(longlong *)(lVar7 + local_a0 * 8) + local_98 * 4);
          local_60[1] = *(undefined4 *)(*(longlong *)(lVar7 + local_b0 * 8) + local_a8 * 4);
          local_60[0] = *(int *)(*(longlong *)(lVar7 + local_b8 * 8) + local_90 * 4);
          lVar7 = 0;
          do {
            iVar2 = FUN_146bcb8e0(param_1,local_60[lVar7 + 3],uVar9 & 0xffffffff,param_4);
            local_60[lVar7] = iVar2;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 3);
          FUN_146c01486(lVar10,uVar6,local_60,1);
          plVar3 = *(longlong **)(*param_1 + 0x208);
        }
        uVar9 = uVar9 + 1;
        iVar2 = (**(code **)(*plVar3 + 0xa0))();
      } while ((longlong)uVar9 < (longlong)iVar2);
    }
    iVar1 = *(int *)(param_5 + 0x58);
    iVar2 = (**(code **)(**(longlong **)(*param_1 + 0x208) + 0xb0))();
    if (iVar1 < iVar2) {
      iVar2 = (**(code **)(**(longlong **)(*param_1 + 0x208) + 0xb0))();
      iVar1 = *(int *)(param_5 + 0x58);
      *(int *)(param_5 + 0x58) = iVar2;
      if ((uint)(*(int *)(param_5 + 0x5c) - iVar1) < (uint)(iVar2 - iVar1)) {
        FUN_140bfc2d4((longlong *)(param_5 + 0x50));
      }
      memset((void *)((longlong)iVar1 * 0x10 + *(longlong *)(param_5 + 0x50)),0,
             (longlong)(iVar2 - iVar1) << 4);
    }
    iVar1 = (**(code **)(**(longlong **)(*param_1 + 0x208) + 0xb0))();
    if (0 < iVar1) {
      iVar1 = (int)local_c0;
      uVar4 = iVar1 * 3 + 2;
      local_78 = (ulonglong)(uVar4 >> 9);
      local_70 = (ulonglong)(uVar4 & 0x1ff);
      uVar4 = iVar1 * 3 + 1;
      local_88 = (ulonglong)(uVar4 >> 9);
      local_80 = (ulonglong)(uVar4 & 0x1ff);
      uVar4 = param_3 * 3 + 2;
      local_a0 = (ulonglong)(uVar4 >> 9);
      local_98 = (ulonglong)(uVar4 & 0x1ff);
      uVar4 = param_3 * 3 + 1;
      local_b0 = (ulonglong)(uVar4 >> 9);
      local_a8 = (ulonglong)(uVar4 & 0x1ff);
      local_b8 = (ulonglong)(param_3 * 3 >> 9);
      local_90 = (ulonglong)(param_3 * 3 & 0x1ff);
      uVar9 = 0;
      local_68 = uVar6;
      do {
        plVar3 = *(longlong **)(*param_1 + 0x208);
        if ((longlong)uVar9 < (longlong)(int)plVar3[7]) {
          lVar10 = *(longlong *)(plVar3[6] + uVar9 * 8);
        }
        else {
          lVar10 = 0;
        }
        lVar7 = *(longlong *)(lVar10 + 0x78);
        iVar2 = *(int *)(*(longlong *)(lVar7 + (ulonglong)((uint)(iVar1 * 3) >> 9) * 8) +
                        (ulonglong)(iVar1 * 3 & 0x1ff) * 4);
        if (-1 < iVar2) {
          local_60[3] = iVar2;
          local_60[4] = *(undefined4 *)(*(longlong *)(lVar7 + local_88 * 8) + local_80 * 4);
          local_60[5] = *(undefined4 *)(*(longlong *)(lVar7 + local_78 * 8) + local_70 * 4);
          local_60[2] = *(undefined4 *)(*(longlong *)(lVar7 + local_a0 * 8) + local_98 * 4);
          local_60[1] = *(undefined4 *)(*(longlong *)(lVar7 + local_b0 * 8) + local_a8 * 4);
          local_60[0] = *(int *)(*(longlong *)(lVar7 + local_b8 * 8) + local_90 * 4);
          lVar7 = 0;
          do {
            local_c8 = param_5;
            iVar2 = FUN_146bcb9c4(param_1,local_60[lVar7 + 3],uVar9 & 0xffffffff,param_4);
            uVar6 = local_68;
            local_60[lVar7] = iVar2;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 3);
          FUN_146c01580(lVar10,local_68 & 0xffffffff,local_60,1);
          plVar3 = *(longlong **)(*param_1 + 0x208);
        }
        uVar9 = uVar9 + 1;
        iVar2 = (**(code **)(*plVar3 + 0xb0))();
      } while ((longlong)uVar9 < (longlong)iVar2);
    }
    uVar9 = local_c0;
    plVar3 = *(longlong **)(*param_1 + 0x208);
    lVar10 = plVar3[8];
    uVar5 = (uint)uVar6;
    uVar4 = (uint)local_c0;
    if (lVar10 != 0) {
      uVar8 = uVar4 * 3;
      lVar7 = *(longlong *)(lVar10 + 0x78);
      iVar1 = *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
      if (-1 < iVar1) {
        local_60[3] = iVar1;
        local_60[4] = *(undefined4 *)
                       (*(longlong *)(lVar7 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                       (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
        local_60[5] = *(undefined4 *)
                       (*(longlong *)(lVar7 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                       (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
        uVar8 = uVar5 * 3 + 2;
        local_60[2] = *(undefined4 *)
                       (*(longlong *)(lVar7 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
        uVar8 = uVar5 * 3 + 1;
        local_60[1] = *(undefined4 *)
                       (*(longlong *)(lVar7 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
        local_60[0] = *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar5 * 3 >> 9) * 8) +
                              (ulonglong)(uVar5 * 3 & 0x1ff) * 4);
        lVar7 = 0;
        do {
          iVar1 = FUN_146bcbaf2(param_1,local_60[lVar7 + 3],param_4,param_5);
          local_60[lVar7] = iVar1;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
        FUN_146c2a048(lVar10,uVar6 & 0xffffffff,local_60,1);
        plVar3 = *(longlong **)(*param_1 + 0x208);
      }
    }
    if (plVar3[9] != 0) {
      lVar10 = *(longlong *)(plVar3[9] + 0x20);
      *(undefined4 *)
       (*(longlong *)(lVar10 + (uVar6 >> 9 & 0x7fffff) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(lVar10 + (uVar9 >> 9 & 0x7fffff) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
      plVar3 = *(longlong **)(*param_1 + 0x208);
    }
    iVar1 = (**(code **)(*plVar3 + 0xc0))();
    if (0 < iVar1) {
      lVar10 = 0;
      do {
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0x208) + 0x60) + lVar10 * 8)
                 + 0x20);
        *(undefined4 *)
         (*(longlong *)(lVar7 + (uVar6 >> 9 & 0x7fffff) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)(lVar7 + (uVar9 >> 9 & 0x7fffff) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
        lVar10 = lVar10 + 1;
        iVar1 = (**(code **)(**(longlong **)(*param_1 + 0x208) + 0xc0))();
      } while (lVar10 < iVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bc7172 FUN_146bc7172 body=286 status=ok
// SIG undefined FUN_146bc7172(void)

undefined4
FUN_146bc7172(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  longlong local_148;
  undefined4 local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [248];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_146c6a7a4(local_138,*param_1,param_2,0);
  cVar1 = FUN_146c6abd6(local_138);
  uVar2 = 0;
  if (cVar1 != '\0') {
    local_198 = *param_2;
    local_190 = *(undefined4 *)(param_2 + 1);
    local_168 = 0;
    local_160 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_15c = 0xffffffff00000080;
    local_154 = 0;
    local_148 = 0;
    local_140 = 0;
    FUN_146bc855c(&local_188);
    local_1a8 = param_4;
    uVar2 = FUN_146bc7292(param_1,&local_188,local_130,param_3);
    local_140 = 0;
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_188);
  }
  FUN_146bc7b3e(local_138);
  if ((local_38 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc7292 FUN_146bc7292 body=2218 status=ok
// SIG undefined FUN_146bc7292(void)

ulonglong FUN_146bc7292(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       char param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 *puVar9;
  code **ppcVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_338 [36];
  undefined4 local_314;
  longlong *local_310;
  ulonglong local_308;
  longlong *local_300;
  ulonglong local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  ulonglong local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  ulonglong local_2c0;
  longlong *local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  longlong local_2a8 [2];
  code *local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  uint local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_22c;
  longlong local_228 [2];
  longlong *local_218;
  longlong local_208 [4];
  code *local_1e8;
  undefined4 *puStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  uint local_190;
  undefined4 local_18c;
  longlong local_188 [2];
  longlong *local_178;
  longlong local_168 [4];
  undefined4 local_148;
  undefined4 uStack_144;
  longlong *local_138;
  longlong local_128 [4];
  code *local_108;
  undefined4 *puStack_100;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar13 = (ulonglong)(int)param_3[1];
  local_308 = CONCAT71((int7)(local_60 >> 8),1);
  local_2f0 = param_3;
  local_2e8 = param_4;
  FUN_146bc7b92(param_4,(int)param_3[1],1);
  local_298 = (code *)0x0;
  uStack_290 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_2f8 = uVar13;
  if (0 < (longlong)uVar13) {
    local_2b8 = param_2 + 7;
    local_2d8 = local_208;
    local_2d0 = local_168;
    uVar13 = 0;
    local_308 = 0;
    local_310 = param_1;
    local_2c8 = param_2;
    do {
      lVar12 = *local_2f0;
      lVar2 = *local_2e8;
      plVar1 = (longlong *)(lVar2 + uVar13 * 0x48);
      local_300 = (longlong *)(lVar12 + uVar13 * 0x40 + 8);
      local_2e0 = uVar13;
      FUN_14054c6c4(plVar1);
      lVar12 = lVar12 + uVar13 * 0x40;
      FUN_14054c6c4(lVar2 + uVar13 * 0x48 + 0x10,lVar12 + 0x18);
      iVar15 = *(int *)(lVar12 + 0x10);
      uVar13 = (ulonglong)iVar15;
      local_2a8[0] = 0;
      local_2a8[1] = 0;
      FUN_144a1a59e(local_2a8,iVar15,1);
      plVar11 = local_310;
      if (0 < (longlong)uVar13) {
        uVar14 = 0;
        local_314 = 0;
        plVar6 = local_300;
        local_2c0 = uVar13;
LAB_146bc7425:
        local_2ac = *(uint *)(*plVar6 + uVar14 * 4);
        if ((int)uStack_b0 != local_84) {
          puVar9 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar9 = local_80;
          }
          iVar15 = *(int *)(puVar9 + (ulonglong)(local_70 - 1U & local_2ac) * 4);
          while (iVar15 != -1) {
            lVar12 = local_b8 + (longlong)iVar15 * 0x10;
            if (*(uint *)(local_b8 + (longlong)iVar15 * 0x10) == local_2ac) {
              if ((lVar12 != 0) && ((uint *)(lVar12 + 4) != (uint *)0x0)) {
                uVar5 = *(uint *)(lVar12 + 4);
                if (((int)uVar5 < 0) ||
                   ((lVar12 = *plVar11,
                    *(int *)(lVar12 + 0x20) * 0x200 + *(int *)(lVar12 + 0x24) <= (int)uVar5 ||
                    (0xfffc < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar12 + 0x28) +
                                                   (ulonglong)(uVar5 >> 9) * 8) +
                                                 (ulonglong)(uVar5 & 0x1ff) * 2) - 2U))))) {
                  *(uint *)(*plVar1 + uVar14 * 4) = uVar5;
                  uVar7 = uVar14;
                  if (uVar14 == 0) {
                    uVar7 = uVar13;
                  }
                  *(undefined4 *)(plVar1[2] + uVar14 * 4) = 0xffffffff;
                  *(undefined4 *)(plVar1[2] + -4 + (uVar7 & 0xffffffff) * 4) = 0xffffffff;
                  uVar5 = local_2ac;
                }
                *(uint *)(local_2a8[0] + uVar14 * 4) = uVar5;
                goto LAB_146bc777b;
              }
              break;
            }
            iVar15 = *(int *)(lVar12 + 8);
          }
        }
        bVar16 = (longlong)uStack_290 < 0;
        uStack_290 = uStack_290 & 0xffffffff00000000;
        if (bVar16) {
          FUN_14481578e(local_2a8 + 2,0);
        }
        local_1c0 = *plVar11;
        iVar15 = 0;
        local_1d8 = 0;
        local_1c8 = &PTR_LAB_149f3aae0;
        uStack_1b8 = CONCAT44(uStack_1b8._4_4_,local_2ac);
        local_1e8 = FUN_146be9588;
        local_288 = (code *)(local_1c0 + 0xb8);
        uStack_280 = CONCAT44(uStack_280._4_4_,local_2ac);
        FUN_146be94ac(&local_148,&local_288,&local_1e8);
        local_198 = 0xffffffffffffffff;
        local_188[0] = 0;
        local_178 = (longlong *)0x0;
        local_1c8 = (undefined **)local_e8;
        local_1d8 = local_f8;
        uStack_1d0 = lStack_f0;
        local_1e8 = local_108;
        puStack_1e0 = puStack_100;
        local_1c0 = CONCAT44(uStack_dc,local_e0);
        uStack_1b8 = CONCAT44(uStack_d4,uStack_d8);
        local_1b0 = local_d0;
        uStack_1ac = uStack_cc;
        uStack_1a8 = uStack_c8;
        uStack_1a4 = uStack_c4;
        local_1a0 = local_c0;
        FUN_146be971a(local_188,&local_148);
        local_18c = 0;
        FUN_146bfd1f0(&local_1e8);
        local_238 = 0xffffffffffffffff;
        local_228[0] = 0;
        local_218 = (longlong *)0x0;
        local_268 = local_c0;
        local_288 = (code *)CONCAT44(uStack_dc,local_e0);
        uStack_280 = CONCAT44(uStack_d4,uStack_d8);
        uStack_270 = CONCAT44(uStack_c4,uStack_c8);
        local_260 = local_e0;
        uStack_25c = uStack_dc;
        uStack_258 = uStack_d8;
        uStack_254 = uStack_d4;
        local_250 = local_d0;
        uStack_24c = uStack_cc;
        uStack_248 = uStack_c8;
        uStack_244 = uStack_c4;
        local_240 = local_c0;
        FUN_146be971a(local_228,&local_148);
        plVar11 = local_2c8;
        local_22c = 0;
        ppcVar10 = (code **)&local_288;
        do {
          FUN_146bfd1f0(ppcVar10);
          uVar5 = local_190;
          uVar7 = uStack_290;
          uVar13 = local_2c0;
          if (local_1e8 == local_288) {
            if ((int)puStack_1e0 == (int)uStack_280) {
              if ((int)uStack_1d0 == (int)uStack_270) {
                if (uStack_1d0._4_4_ == uStack_270._4_4_) goto LAB_146bc778c;
              }
            }
          }
          if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
            plVar6 = (longlong *)plVar11[8];
            if ((longlong *)plVar11[8] == (longlong *)0x0) {
              plVar6 = local_2b8;
            }
            iVar8 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar11[9] - 1U & local_190) * 4);
            if (iVar8 != -1) {
              do {
                if (*(uint *)(*plVar11 + (longlong)iVar8 * 0xc) == local_190) {
                  lVar12 = (longlong)(int)uStack_290;
                  uVar4 = (int)uStack_290 + 1;
                  uStack_290 = CONCAT44(uStack_290._4_4_,uVar4);
                  if (uStack_290._4_4_ < uVar4) {
                    FUN_1446f48e2(local_2a8 + 2,uVar7 & 0xffffffff);
                  }
                  *(uint *)(local_298 + lVar12 * 4) = uVar5;
                  break;
                }
                iVar8 = *(int *)(*plVar11 + (longlong)iVar8 * 0xc + 4);
              } while (iVar8 != -1);
            }
          }
          iVar15 = iVar15 + 1;
          ppcVar10 = &local_1e8;
        } while( true );
      }
      local_314 = 0;
LAB_146bc79c3:
      local_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1d0 = 0;
      local_1c8 = (undefined **)0x0;
      puStack_1e0 = (undefined4 *)0x0;
      local_1d8 = 0;
      local_1b0 = local_1b0 & 0xffffff00;
      local_1e8 = (code *)*plVar11;
      cVar3 = FUN_146c5d50a(&local_1e8,local_2a8,0);
      bVar16 = true;
      if (cVar3 != '\0') {
        if ((undefined4 **)(plVar1 + 4) != &puStack_1e0) {
          if (plVar1[4] != 0) {
            FUN_1400020a8();
          }
          plVar1[4] = (longlong)puStack_1e0;
          puStack_1e0 = (undefined4 *)0x0;
          *(undefined4 *)(plVar1 + 5) = (undefined4)local_1d8;
          *(undefined4 *)((longlong)plVar1 + 0x2c) = local_1d8._4_4_;
          local_1d8 = 0;
        }
        if (plVar1 + 6 != &uStack_1d0) {
          if (plVar1[6] != 0) {
            FUN_1400020a8();
          }
          plVar1[6] = uStack_1d0;
          uStack_1d0 = 0;
          *(undefined4 *)(plVar1 + 7) = (undefined4)local_1c8;
          *(undefined4 *)((longlong)plVar1 + 0x3c) = local_1c8._4_4_;
          local_1c8 = (undefined **)0x0;
        }
        *(byte *)(plVar1 + 8) = (byte)local_314 & 1;
        bVar16 = false;
      }
      uVar7 = FUN_146bc7c1a(&local_1e8);
LAB_146bc797c:
      if (local_2a8[0] != 0) {
        uVar7 = FUN_1400020a8();
      }
      if (bVar16) break;
      uVar13 = local_2e0 + 1;
      local_308 = CONCAT71((int7)(uVar7 >> 8),local_2f8 <= uVar13);
    } while (uVar13 != local_2f8);
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_144a6bfa8(&local_b8);
  if (local_298 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return local_308 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146bc778c:
  if (local_228[0] != 0) {
    plVar11 = local_218;
    if (local_218 == (longlong *)0x0) {
      plVar11 = local_2d8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_188[0] != 0) {
    plVar11 = local_178;
    if (local_178 == (longlong *)0x0) {
      plVar11 = local_2d0;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (CONCAT44(uStack_144,local_148) != 0) {
    plVar11 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar11 = local_128;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = local_310;
  uVar7 = uStack_290 & 0xffffffff;
  if ((int)uStack_290 < iVar15) {
    local_1e8 = local_298;
    puStack_1e0 = (undefined4 *)CONCAT44(puStack_1e0._4_4_,(int)uStack_290);
    (**(code **)(*(longlong *)*local_310 + 0x48))
              ((longlong *)*local_310,local_2ac,&local_1e8,&local_288);
    local_2b0 = local_288._4_4_;
    local_1e8 = (code *)&local_2ac;
    puStack_1e0 = &local_2b0;
    FUN_140263e2a(&local_b8,&local_148,&local_1e8,0);
    *(undefined4 *)(local_2a8[0] + uVar14 * 4) = local_2b0;
    plVar6 = local_300;
  }
  else {
    if (param_5 == '\0') {
      bVar16 = true;
      goto LAB_146bc797c;
    }
    local_148 = FUN_146c08ff0(*local_310,*local_310,local_2ac);
    local_1e8 = (code *)&local_2ac;
    puStack_1e0 = &local_148;
    FUN_140263e2a(&local_b8,&local_288,&local_1e8,0);
    *(undefined4 *)(*plVar1 + uVar14 * 4) = local_148;
    *(undefined4 *)(plVar1[2] + uVar14 * 4) = 0xffffffff;
    uVar7 = uVar14;
    if (uVar14 == 0) {
      uVar7 = uVar13;
    }
    *(undefined4 *)(plVar1[2] + -4 + (uVar7 & 0xffffffff) * 4) = 0xffffffff;
    *(uint *)(local_2a8[0] + uVar14 * 4) = local_2ac;
    local_314 = (undefined4)CONCAT71((uint7)(uint3)(local_2ac >> 8),1);
    plVar6 = local_300;
  }
LAB_146bc777b:
  uVar14 = uVar14 + 1;
  if (uVar14 == uVar13) goto LAB_146bc79c3;
  goto LAB_146bc7425;
}



// FUNCTION 146bc7b3e FUN_146bc7b3e body=84 status=ok
// SIG undefined FUN_146bc7b3e(void)

void FUN_146bc7b3e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_146bc9838(param_1 + 0x88);
  FUN_146bc9838(param_1 + 0x20);
  FUN_146be9485(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146bc7b92 FUN_146bc7b92 body=135 status=ok
// SIG undefined FUN_146bc7b92(void)

void FUN_146bc7b92(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bfcfce(param_1,iVar1);
    }
    FUN_146bfcfaf((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bfd062(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bfd0c8(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bc7c1a FUN_146bc7c1a body=62 status=ok
// SIG undefined FUN_146bc7c1a(void)

void FUN_146bc7c1a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146bc7c58 FUN_146bc7c58 body=2307 status=ok
// SIG undefined FUN_146bc7c58(void)

void FUN_146bc7c58(longlong *param_1,undefined8 *param_2,char param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  code **ppcVar10;
  longlong *plVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  undefined1 local_378 [39];
  char local_351;
  longlong *local_350;
  undefined4 local_344;
  longlong *local_340;
  longlong *local_338;
  undefined1 *local_330;
  longlong *local_328;
  undefined8 local_320;
  undefined1 *local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  code *local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  code *local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_25c;
  longlong local_258 [2];
  longlong *local_248;
  longlong local_238 [4];
  code *local_218;
  undefined1 *puStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined **local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  longlong local_178 [2];
  longlong *local_168;
  longlong local_158 [4];
  code *local_138;
  undefined1 *puStack_130;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  longlong local_e8 [2];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_378;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = (code *)0x0;
  uStack_2e0 = 0;
  local_300 = *param_2;
  local_2f8 = *(undefined4 *)(param_2 + 1);
  local_351 = param_3;
  FUN_146bc855c();
  local_350 = param_1;
  if ((longlong)*(int *)(param_2 + 1) == 0) {
    local_218 = (code *)0x100000000;
    puStack_210 = local_d8;
    local_208 = 0xffffffff;
    uStack_200 = uStack_200 & 0xffffffff00000000;
    iVar17 = 0;
  }
  else {
    puVar12 = (uint *)*param_2;
    puVar1 = puVar12 + *(int *)(param_2 + 1);
    do {
      uVar6 = *puVar12;
      FUN_146c03f0e(*param_1,&local_218,uVar6);
      lVar15 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,
                            *(undefined4 *)(lVar15 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc));
      local_2b8 = *(code **)(lVar15 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
      lVar15 = 0;
      do {
        if ((int)uStack_90 != local_64) {
          uVar6 = *(uint *)((longlong)&local_218 + lVar15 * 4);
          puVar9 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar9 = local_60;
          }
          for (iVar17 = *(int *)(puVar9 + (ulonglong)(local_50 - 1U & uVar6) * 4); iVar17 != -1;
              iVar17 = *(int *)(local_98 + (longlong)iVar17 * 0xc + 4)) {
            if (*(uint *)(local_98 + (longlong)iVar17 * 0xc) == uVar6) goto LAB_146bc7df8;
          }
        }
        FUN_1447cbafe(local_e8,local_178,(longlong)&local_2b8 + lVar15 * 4,0);
        uVar7 = lVar15 + 1U & 0xffffffff;
        if (lVar15 + 1U == 3) {
          uVar7 = 0;
        }
        FUN_1447cbafe(local_e8,local_178,(longlong)&local_2b8 + uVar7 * 4,0);
LAB_146bc7df8:
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar1);
    local_218 = (code *)0x100000000;
    puStack_210 = local_d8;
    local_208 = 0xffffffff;
    uStack_200 = uStack_200 & 0xffffffff00000000;
    if (local_c0 == 0) {
      iVar17 = 0;
    }
    else {
      FUN_1449c0562(&local_218);
      iVar17 = local_c0;
    }
  }
  local_310 = local_208;
  uVar4 = local_310;
  local_308 = (int)uStack_200;
  local_304 = uStack_200._4_4_;
  local_320 = local_218;
  local_318 = puStack_210;
  local_310._4_4_ = (int)((ulonglong)local_208 >> 0x20);
  plVar11 = local_350;
  local_328 = local_e8;
  if ((local_310._4_4_ == iVar17) && (puStack_210 == local_d8)) {
LAB_146bc7f22:
    local_310 = uVar4;
    lVar15 = local_2d8;
    if (local_351 != '\0') {
      local_1b8[0] = 0;
      local_1b8[1] = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1f8 = (undefined **)0x0;
      uStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_218 = (code *)0x0;
      puStack_210 = (undefined1 *)0x0;
      lVar14 = (longlong)(int)uStack_2d0;
      if (lVar14 != 0) {
        lVar16 = 0;
        do {
          FUN_146bc8d26(plVar11,*(undefined4 *)(lVar15 + lVar16),&local_218);
          FUN_146bc683c(&local_218);
          lVar16 = lVar16 + 4;
        } while (lVar14 * 4 != lVar16);
      }
      lVar15 = local_2c8;
      lVar14 = (longlong)(int)uStack_2c0;
      if (lVar14 != 0) {
        lVar16 = 0;
        do {
          FUN_146bc8d26(plVar11,*(undefined4 *)(lVar15 + lVar16),&local_218);
          FUN_146bc683c(&local_218);
          lVar16 = lVar16 + 4;
        } while (lVar14 * 4 != lVar16);
      }
      FUN_146bc8622(&local_218);
    }
    if (local_2e8 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    if (local_2c8 != 0) {
      FUN_1400020a8();
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(local_e8);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
    if ((local_48 ^ (ulonglong)local_378) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_340 = local_238;
  local_338 = local_198;
  iVar13 = local_310._4_4_;
  local_330 = local_d8;
  local_310 = uVar4;
LAB_146bc8010:
  uVar2 = *(undefined4 *)(*local_328 + (longlong)iVar13 * 0xc);
  bVar18 = (longlong)uStack_2e0 < 0;
  uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
  if (bVar18) {
    FUN_14481578e(&local_2e8,0);
  }
  uStack_1f0 = *plVar11;
  iVar13 = 0;
  local_208 = 0;
  local_1f8 = &PTR_LAB_149f3aae0;
  local_1e8 = CONCAT44(local_1e8._4_4_,uVar2);
  local_218 = FUN_146be9588;
  local_2b8 = (code *)(uStack_1f0 + 0xb8);
  uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar2);
  ppcVar10 = &local_2b8;
  local_344 = uVar2;
  FUN_146be94ac(local_178,ppcVar10,&local_218);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_1f8 = (undefined **)local_118;
  local_208 = local_128;
  uStack_200 = uStack_120;
  local_218 = local_138;
  puStack_210 = puStack_130;
  uStack_1f0 = CONCAT44(uStack_10c,local_110);
  local_1e8 = CONCAT44(uStack_104,uStack_108);
  uStack_1e0 = CONCAT44(uStack_fc,local_100);
  local_1d8 = CONCAT44(uStack_f4,uStack_f8);
  uStack_1d0 = local_f0;
  FUN_146be971a(local_1b8,local_178);
  uStack_1c0 = uStack_1c0 & 0xffffffff;
  FUN_146bfd1f0(&local_218);
  local_268 = 0xffffffffffffffff;
  local_258[0] = 0;
  local_248 = (longlong *)0x0;
  local_298 = local_f0;
  local_2b8 = (code *)CONCAT44(uStack_10c,local_110);
  uStack_2b0 = CONCAT44(uStack_104,uStack_108);
  uStack_2a0 = CONCAT44(uStack_f4,uStack_f8);
  local_290 = local_110;
  uStack_28c = uStack_10c;
  uStack_288 = uStack_108;
  uStack_284 = uStack_104;
  local_280 = local_100;
  uStack_27c = uStack_fc;
  uStack_278 = uStack_f8;
  uStack_274 = uStack_f4;
  local_270 = local_f0;
  FUN_146be971a(local_258,local_178);
  puVar9 = local_330;
  local_25c = 0;
  do {
    FUN_146bfd1f0(ppcVar10);
    uVar7 = uStack_2e0;
    if (local_218 == local_2b8) {
      if ((int)puStack_210 == (int)uStack_2b0) {
        if ((int)uStack_200 == (int)uStack_2a0) {
          if (uStack_200._4_4_ == uStack_2a0._4_4_) break;
        }
      }
    }
    if ((int)uStack_90 != local_64) {
      uVar6 = (uint)uStack_1c0;
      puVar8 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar8 = local_60;
      }
      for (iVar3 = *(int *)(puVar8 + (ulonglong)(local_50 - 1U & (uint)uStack_1c0) * 4); iVar3 != -1
          ; iVar3 = *(int *)(local_98 + (longlong)iVar3 * 0xc + 4)) {
        if (*(uint *)(local_98 + (longlong)iVar3 * 0xc) == (uint)uStack_1c0) {
          lVar15 = (longlong)(int)uStack_2e0;
          uVar5 = (int)uStack_2e0 + 1;
          uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar5);
          if (uStack_2e0._4_4_ < uVar5) {
            FUN_1446f48e2(&local_2e8,uVar7 & 0xffffffff);
          }
          *(uint *)(local_2e8 + lVar15 * 4) = uVar6;
          break;
        }
      }
    }
    ppcVar10 = &local_218;
    iVar13 = iVar13 + 1;
  } while( true );
  if (local_258[0] != 0) {
    plVar11 = local_248;
    if (local_248 == (longlong *)0x0) {
      plVar11 = local_340;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_1b8[0] != 0) {
    plVar11 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar11 = local_338;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_178[0] != 0) {
    plVar11 = local_168;
    if (local_168 == (longlong *)0x0) {
      plVar11 = local_158;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = local_350;
  if ((int)uStack_2e0 < iVar13) {
    local_218 = local_2e8;
    puStack_210 = (undefined1 *)CONCAT44(puStack_210._4_4_,(int)uStack_2e0);
    (**(code **)(*(longlong *)*local_350 + 0x48))
              ((longlong *)*local_350,local_344,&local_218,&local_2f0);
    uVar7 = uStack_2c0;
    lVar15 = (longlong)(int)uStack_2c0;
    uVar6 = (int)uStack_2c0 + 1;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar6);
    if (uStack_2c0._4_4_ < uVar6) {
      FUN_1446f48e2(&local_2c8,uVar7 & 0xffffffff);
    }
    uVar7 = uStack_2d0;
    *(undefined4 *)(local_2c8 + lVar15 * 4) = local_2ec;
    lVar15 = (longlong)(int)uStack_2d0;
    uVar6 = (int)uStack_2d0 + 1;
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar6);
    if (uStack_2d0._4_4_ < uVar6) {
      FUN_1446f48e2(&local_2d8,uVar7 & 0xffffffff);
    }
    *(undefined4 *)(local_2d8 + lVar15 * 4) = local_2f0;
  }
  local_310 = CONCAT44(local_310._4_4_,(uint)local_310 & ~local_320._4_4_);
  FUN_1449c0562(&local_320);
  iVar13 = local_310._4_4_;
  uVar4 = local_310;
  if (local_328 == local_e8 && (local_318 == puVar9 && local_310._4_4_ == iVar17))
  goto LAB_146bc7f22;
  goto LAB_146bc8010;
}



// FUNCTION 146bc855c FUN_146bc855c body=196 status=ok
// SIG undefined FUN_146bc855c(void)

void FUN_146bc855c(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1400bac10(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_144a56d22(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 2;
    do {
      FUN_1447cbafe(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 4;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc8622 FUN_146bc8622 body=141 status=ok
// SIG undefined FUN_146bc8622(void)

void FUN_146bc8622(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146bc86b0 FUN_146bc86b0 body=1652 status=ok
// SIG undefined FUN_146bc86b0(void)

undefined8 FUN_146bc86b0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStack_168 [34];
  char local_146;
  char local_145;
  int local_144;
  int local_140;
  int local_13c;
  longlong *local_138;
  int local_12c;
  int local_128;
  int local_124;
  uint local_120;
  int local_11c;
  undefined8 local_118;
  longlong *local_110;
  ulonglong local_108;
  longlong *local_100;
  ulonglong local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  char *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [12];
  undefined4 local_6c;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_118 = param_3;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_98 = 0x100000000;
  local_110 = param_2 + 2;
  uStack_90 = param_2 + 2;
  local_88 = 0xffffffff;
  iStack_84 = 0;
  uStack_80 = 0;
  local_a8 = param_1;
  local_a0 = param_3;
  if ((int)param_2[5] == 0) {
    iVar20 = 0;
  }
  else {
    FUN_1449c0562(&local_98);
    iVar20 = (int)param_2[5];
  }
  uStack_b0 = CONCAT44(uStack_7c,uStack_80);
  local_b8 = local_88;
  iStack_b4 = iStack_84;
  local_c8 = (undefined4)local_98;
  uStack_c4 = local_98._4_4_;
  uStack_c0 = (undefined4)uStack_90;
  uStack_bc = uStack_90._4_4_;
  local_d0 = param_2;
  if ((iStack_84 == iVar20) && (uStack_90 == local_110)) {
LAB_146bc879c:
    lVar13 = 0x20;
    do {
      if (*(longlong *)(auStack_78 + lVar13) != 0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != 0);
    if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return 1;
  }
  local_f0 = param_2 + 7;
  local_138 = param_2;
  local_100 = param_1;
  local_144 = iVar20;
LAB_146bc880a:
  uVar18 = *(uint *)(*local_d0 + (longlong)iStack_b4 * 0xc);
  local_f8 = (ulonglong)uVar18;
  local_108 = (ulonglong)(uVar18 >> 9);
  lVar13 = *(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar18 >> 9) * 8);
  uVar18 = uVar18 & 0x1ff;
  iVar21 = *(int *)(lVar13 + (ulonglong)(uVar18 << 4));
  iVar11 = *(int *)(lVar13 + 4 + (ulonglong)(uVar18 << 4));
  local_13c = iVar21;
  local_11c = iVar11;
  local_145 = '\0';
  local_146 = '\0';
  bVar23 = (longlong)uStack_60 < 0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if (bVar23) {
    FUN_14481578e(&local_68,0);
  }
  bVar23 = (longlong)uStack_50 < 0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if (bVar23) {
    FUN_14481578e(&local_58,0);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + local_108 * 8) + 0xc +
              (ulonglong)(uVar18 << 4)) != -1) {
    uVar8 = CONCAT71((uint7)(uint3)((uVar18 << 4) >> 8),1);
    local_e0 = (ulonglong)(uVar18 << 4);
    pcVar9 = &local_145;
    piVar4 = &local_13c;
    plVar22 = &local_68;
    local_140 = iVar21;
LAB_146bc88e7:
    local_120 = (uint)uVar8;
    iVar20 = *piVar4;
    *(undefined4 *)(plVar22 + 1) = 0;
    local_d8 = pcVar9;
    if (*(int *)((longlong)plVar22 + 0xc) < 0) {
      FUN_14481578e(plVar22,0);
    }
    uVar7 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + local_108 * 8) + 8 + local_e0);
    local_12c = FUN_146be99b0(*param_1,iVar20);
    iVar21 = (int)plVar22[1];
    uVar14 = uVar7 & 0xffffffff;
    uVar19 = uVar7 >> 0x20;
    local_e8 = uVar7;
LAB_146bc8952:
    uVar7 = uVar14;
    iVar11 = local_12c;
    *(uint *)(plVar22 + 1) = iVar21 + 1U;
    if (*(uint *)((longlong)plVar22 + 0xc) < iVar21 + 1U) {
      FUN_1446f48e2(plVar22,iVar21);
    }
    uVar18 = (uint)uVar7;
    *(uint *)(*plVar22 + (longlong)iVar21 * 4) = uVar18;
    iVar21 = (int)plVar22[1];
    if (iVar21 <= iVar11) {
      lVar13 = *local_100;
      lVar17 = *(longlong *)(*(longlong *)(lVar13 + 0x180) + (uVar7 >> 9) * 8);
      uStack_90 = (longlong *)
                  CONCAT44(uStack_90._4_4_,
                           *(undefined4 *)(lVar17 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc));
      local_98 = *(undefined8 *)(lVar17 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      auStack_78._4_8_ = 0xffffffffffffffff;
      local_6c = 0xffffffff;
      lVar17 = *(longlong *)(lVar13 + 0x1c0);
      lVar10 = 0;
      do {
        uVar1 = *(uint *)((longlong)&local_98 + lVar10 * 4);
        uVar8 = *(undefined8 *)
                 (*(longlong *)(lVar17 + (ulonglong)(uVar1 >> 9) * 8) + 8 +
                 (ulonglong)((uVar1 & 0x1ff) << 4));
        uVar15 = (uint)uVar8;
        uVar1 = (uint)((ulonglong)uVar8 >> 0x20);
        if (uVar18 != uVar15) {
          uVar1 = uVar15;
        }
        *(uint *)(auStack_78 + lVar10 * 4 + 4) = uVar1;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      local_124 = (int)local_138[1];
      local_128 = *(int *)((longlong)local_138 + 0x34);
      plVar16 = (longlong *)local_138[8];
      if ((longlong *)local_138[8] == (longlong *)0x0) {
        plVar16 = local_f0;
      }
      lVar17 = 0;
      do {
        uVar18 = *(uint *)(auStack_78 + lVar17 * 4 + 4);
        if ((-1 < (int)uVar18 && uVar18 != (uint)uVar19) &&
           ((int)uVar18 < *(int *)(lVar13 + 0x140) * 0x200 + *(int *)(lVar13 + 0x144))) {
          uVar14 = (ulonglong)(uVar18 & 0x1ff);
          if (((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar13 + 0x148) + (ulonglong)(uVar18 >> 9) * 8) +
                                  uVar14 * 2) - 1U) < 0xfffe) &&
             (((lVar10 = *(longlong *)(*(longlong *)(lVar13 + 0x130) + (ulonglong)(uVar18 >> 9) * 8)
               , *(int *)(lVar10 + uVar14 * 0xc) == iVar20 ||
               (*(int *)(lVar10 + 4 + uVar14 * 0xc) == iVar20)) ||
              (*(int *)(lVar10 + 8 + uVar14 * 0xc) == iVar20)))) goto LAB_146bc8b37;
        }
        lVar17 = lVar17 + 1;
        if (lVar17 == 3) goto LAB_146bc8afc;
      } while( true );
    }
    goto LAB_146bc8b6b;
  }
  FUN_146bc8d26(param_1,iVar21,local_118);
  goto LAB_146bc8d03;
LAB_146bc8b37:
  uVar1 = *(uint *)((longlong)&local_98 + lVar17 * 4);
  if ((uVar1 != (uint)local_f8) && ((int)local_138[1] != *(int *)((longlong)local_138 + 0x34))) {
    for (iVar11 = *(int *)((longlong)plVar16 + (ulonglong)((int)local_138[9] - 1U & uVar1) * 4);
        iVar11 != -1; iVar11 = *(int *)(*local_138 + (longlong)iVar11 * 0xc + 4)) {
      if (*(uint *)(*local_138 + (longlong)iVar11 * 0xc) == uVar1) goto LAB_146bc8afc;
    }
  }
  uVar14 = (ulonglong)uVar18;
  uVar19 = uVar7;
  if (uVar18 == (uint)local_e8) goto LAB_146bc8b6b;
  goto LAB_146bc8952;
LAB_146bc8afc:
  cVar2 = '\x01';
  goto LAB_146bc8afe;
LAB_146bc8b6b:
  cVar2 = '\0';
LAB_146bc8afe:
  *local_d8 = cVar2;
  param_1 = local_100;
  param_2 = local_138;
  iVar20 = local_144;
  pcVar9 = &local_146;
  piVar4 = &local_11c;
  plVar22 = &local_58;
  uVar8 = 0;
  if ((local_120 & 1) == 0) goto LAB_146bc8b6f;
  goto LAB_146bc88e7;
LAB_146bc8b6f:
  if ((local_145 == '\x01') || (local_146 != '\0')) {
    pcVar9 = &local_145;
    piVar5 = &local_13c;
    plVar16 = &local_68;
    bVar23 = true;
    do {
      bVar12 = bVar23;
      if (*pcVar9 == '\x01') {
        FUN_142963d90(&local_a8,*piVar5,plVar16);
      }
      pcVar9 = &local_146;
      piVar5 = piVar4;
      plVar16 = plVar22;
      bVar23 = false;
    } while (bVar12);
  }
  else {
    iVar21 = ((int)uStack_60 - ((int)uStack_60 + 1 >> 0x1f)) + 1 >> 1;
    uVar18 = FUN_146c08e54(*local_100,*(undefined4 *)(local_68 + -4 + (longlong)iVar21 * 4),
                           *(undefined4 *)(local_68 + (longlong)iVar21 * 4));
    iVar20 = local_140;
    if (uVar18 == 0xffffffff) {
      iVar11 = -1;
    }
    else {
      uVar8 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar18 >> 9) * 8) +
               (ulonglong)((uVar18 & 0x1ff) << 4));
      iVar6 = (int)((ulonglong)uVar8 >> 0x20);
      iVar3 = (int)uVar8;
      iVar11 = -1;
      if (local_140 == iVar6) {
        iVar11 = iVar3;
      }
      if (local_140 == iVar3) {
        iVar11 = iVar6;
      }
    }
    FUN_144a1a59e(&local_68,iVar21,1);
    FUN_142963d90(&local_a8,iVar20,&local_68);
    param_2 = local_138;
    iVar20 = local_144;
    if ((iVar11 != -1) && (cVar2 = FUN_146c13902(*param_1,iVar11), cVar2 != '\0')) {
LAB_146bc8d03:
      FUN_146bc8d26(param_1,iVar11,local_118);
    }
  }
  local_b8 = local_b8 & ~uStack_c4;
  FUN_1449c0562(&local_c8);
  if (local_d0 == param_2 &&
      ((longlong *)CONCAT44(uStack_bc,uStack_c0) == local_110 && iStack_b4 == iVar20))
  goto LAB_146bc879c;
  goto LAB_146bc880a;
}



// FUNCTION 146bc8d26 FUN_146bc8d26 body=315 status=ok
// SIG undefined FUN_146bc8d26(void)

void FUN_146bc8d26(undefined8 *param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  int local_88;
  undefined1 local_80 [4];
  undefined4 local_7c;
  longlong local_78 [2];
  int *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  local_98 = local_78;
  local_78[0] = 0;
  local_78[1] = 0;
  iVar2 = FUN_146c13054(*param_1);
  if ((iVar2 == 0) && (1 < (int)uStack_60)) {
    iVar2 = *local_68;
    lVar3 = 1;
    do {
      local_90 = (longlong)iVar2 * 4 + local_58;
      local_88 = local_68[lVar3];
      (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_2,&local_90,local_80);
      if (param_3 != (longlong *)0x0) {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = local_7c;
      }
      iVar2 = iVar2 + local_68[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uStack_60);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc8e62 FUN_146bc8e62 body=427 status=ok
// SIG undefined FUN_146bc8e62(void)

void FUN_146bc8e62(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [44];
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_146bc683c(param_2);
  uVar4 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar5 = *(int *)(*param_1 + 0x20) * 0x200 + *(int *)(*param_1 + 0x24);
  if (0 < (int)uVar5) {
    do {
      lVar7 = *param_1;
      uVar3 = (uint)uVar4;
      if (((int)uVar3 < *(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24)) &&
         ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar7 + 0x28) + (uVar4 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((int)uStack_90 != local_64) {
          puVar2 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar2 = local_60;
          }
          for (iVar1 = *(int *)(puVar2 + (ulonglong)(local_50 + 0x7fffffffU & uVar3) * 4);
              iVar1 != -1; iVar1 = *(int *)(local_98 + (longlong)iVar1 * 0xc + 4)) {
            if (*(uint *)(local_98 + (longlong)iVar1 * 0xc) == uVar3) goto LAB_146bc8fb5;
          }
        }
        lVar7 = param_2[1];
        lVar6 = (longlong)(int)lVar7;
        FUN_146bc8d26(param_1,uVar4,param_2);
        iVar1 = (int)param_2[1];
        if ((int)lVar7 < iVar1) {
          lVar7 = lVar6 * 4;
          do {
            if (*(int *)(*param_2 + lVar7) < (int)uVar5) {
              FUN_1447cbafe(&local_98,local_9c,*param_2 + lVar7,0);
              iVar1 = (int)param_2[1];
            }
            lVar6 = lVar6 + 1;
            lVar7 = lVar7 + 4;
          } while (lVar6 < iVar1);
        }
      }
LAB_146bc8fb5:
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 != uVar5);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc900e FUN_146bc900e body=362 status=ok
// SIG undefined FUN_146bc900e(void)

void FUN_146bc900e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint *puVar3;
  undefined1 auStack_e8 [40];
  uint *local_c0;
  undefined1 local_b4 [7];
  char local_ad;
  undefined4 local_ac;
  undefined8 local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar3 = (uint *)*param_2;
    local_c0 = puVar3 + *(int *)(param_2 + 1);
    do {
      lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*puVar3 >> 9) * 8);
      uVar1 = (ulonglong)(*puVar3 & 0x1ff);
      local_a0 = *(undefined4 *)(lVar2 + 8 + uVar1 * 0xc);
      local_a8 = *(undefined8 *)(lVar2 + uVar1 * 0xc);
      lVar2 = 0;
      do {
        local_ac = *(undefined4 *)((longlong)&local_a8 + lVar2 * 4);
        local_ad = '\0';
        FUN_1447cbafe(&local_98,local_b4,&local_ac,&local_ad);
        if (local_ad == '\0') {
          FUN_146bc8d26(param_1,local_ac,param_3);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 != 3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != local_c0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bc917a FUN_146bc917a body=1223 status=ok
// SIG undefined FUN_146bc917a(void)

uint FUN_146bc917a(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  char param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_138 [36];
  uint local_114;
  longlong local_110;
  longlong *local_108;
  undefined4 local_fc;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [4];
  int local_b4;
  longlong local_b0;
  undefined8 local_a8;
  int iStack_a4;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar6 = *(int *)(param_2 + 0x178);
  iVar12 = *(int *)(param_2 + 0x28) * 0x200 + *(int *)(param_2 + 0x2c);
  local_b0 = 0;
  local_a8 = 0xffffffff00000000;
  local_98 = 0;
  local_90 = 0xffffffff00000000;
  local_78 = 0;
  local_70 = 0x8000000000;
  uStack_68 = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  local_108 = param_1;
  FUN_146be9a22(&local_b0,
                CONCAT31((int3)(iVar6 - (iVar6 >> 0x1f) >> 9),
                         (float)(iVar6 / 2) / (float)iVar12 < 0.05 && 31999 < iVar12));
  uVar7 = FUN_146bc9642(param_3,*(int *)(param_2 + 0x28) * 0x200 + *(int *)(param_2 + 0x2c),
                        *(undefined4 *)(param_2 + 0x58));
  uVar10 = *(int *)(param_2 + 0x148) * 0x200 + *(int *)(param_2 + 0x14c);
  local_114 = (uint)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  if ((int)uVar10 < 1) {
LAB_146bc9262:
    FUN_146bc9838(&local_b0);
    if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return local_114 & 0xffffff01;
  }
  lVar15 = param_2 + 8;
  local_f0 = param_2 + 0x228;
  local_e0 = param_3 + 2;
  local_114 = (uint)CONCAT71((int7)((ulonglong)local_e0 >> 8),1);
  bVar11 = false;
  uVar14 = 0;
  local_110 = lVar15;
  local_f8 = param_3;
  local_e8 = param_4;
LAB_146bc92d4:
  if (*(int *)(param_2 + 0x148) * 0x200 + *(int *)(param_2 + 0x14c) <= (int)uVar14)
  goto LAB_146bc9310;
  uVar13 = (ulonglong)(uVar14 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_2 + 0x150) + (ulonglong)(uVar14 >> 9) * 8)
                                  + uVar13 * 2) - 1U)) goto LAB_146bc9310;
  lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x138) + (ulonglong)(uVar14 >> 9) * 8);
  local_c0 = *(undefined4 *)(lVar16 + 8 + uVar13 * 0xc);
  local_c8 = *(undefined8 *)(lVar16 + uVar13 * 0xc);
  local_fc = FUN_146bc96d4(lVar15,uVar14);
  local_d4 = 0;
  local_cc = 0;
  lVar15 = 0;
  do {
    iVar6 = *(int *)((longlong)&local_c8 + lVar15 * 4);
    cVar4 = FUN_146bc9736(&local_b0,iVar6);
    lVar16 = local_110;
    if (cVar4 == '\0') {
      cVar4 = FUN_146c0b51e(local_110,iVar6);
      if ((((cVar4 != '\0') && (uVar5 = FUN_146be9b2a(local_f0,iVar6), -1 < (int)uVar5)) &&
          (lVar1 = *local_108, (int)uVar5 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24))
          ) && (((ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                                    (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe &&
                (*(int *)(param_2 + 0x590) != *(int *)(param_2 + 0x5bc))))) {
        lVar9 = param_2 + 0x5c0;
        if (*(longlong *)(param_2 + 0x5c8) != 0) {
          lVar9 = *(longlong *)(param_2 + 0x5c8);
        }
        iVar12 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_2 + 0x5d0) + 0x7fffffffU & uVar5) * 4);
        if (iVar12 != -1) {
          do {
            if (*(uint *)(*(longlong *)(param_2 + 0x588) + (longlong)iVar12 * 0xc) == uVar5) {
              cVar4 = FUN_146c0b51e(lVar1,uVar5);
              lVar16 = local_110;
              if (cVar4 != '\0') goto LAB_146bc93ac;
              break;
            }
            iVar12 = *(int *)(*(longlong *)(param_2 + 0x588) + (longlong)iVar12 * 0xc + 4);
            lVar16 = local_110;
          } while (iVar12 != -1);
        }
      }
      uVar5 = FUN_146c08ff0(*local_108,lVar16,iVar6);
LAB_146bc93ac:
      lVar16 = (longlong)iVar6;
      if (*(char *)((longlong)local_f8 + 0x6c) == '\0') {
        puVar8 = (uint *)(lVar16 * 4 + *local_f8);
      }
      else {
        local_b4 = iVar6;
        puVar8 = (uint *)FUN_144a2bae0(local_e0,iVar6,&local_b4);
      }
      *puVar8 = uVar5;
      if (iStack_a4 == -1) {
        local_b4 = iVar6;
        FUN_1447cbafe(&local_98,local_b8,&local_b4,0);
      }
      else {
        local_b4 = iVar6;
        if (*(char *)(local_b0 + lVar16) == '\0') {
          *(undefined1 *)(local_b0 + lVar16) = 1;
          local_a0 = local_a0 + 1;
        }
      }
    }
    else {
      uVar5 = FUN_146bc979a(local_f8,iVar6);
    }
    plVar2 = local_108;
    *(uint *)((longlong)&local_d4 + lVar15 * 4) = uVar5;
    lVar15 = lVar15 + 1;
  } while (lVar15 != 3);
  uVar5 = FUN_146c13bc0(*local_108,local_d4 & 0xffffffff,local_d4._4_4_);
  plVar3 = local_e8;
  if ((param_5 == '\0') || (uVar5 == 0xffffffff)) {
LAB_146bc94b6:
    uVar5 = FUN_146c01152(*plVar2,&local_d4,local_fc);
    if (((int)uVar5 < 0) ||
       (lVar15 = *plVar2, *(int *)(lVar15 + 0x140) * 0x200 + *(int *)(lVar15 + 0x144) <= (int)uVar5)
       ) {
      local_114 = 0;
    }
    else {
      iVar6 = *(ushort *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x148) + (ulonglong)(uVar5 >> 9) * 8) +
               (ulonglong)(uVar5 & 0x1ff) * 2) - 1;
      local_114 = CONCAT31((int3)((uint)iVar6 >> 8),(ushort)iVar6 < 0xfffe & (byte)local_114);
    }
  }
  else if (param_5 != '\x02') {
    if (param_5 == '\x03') {
      FUN_146c0b65a(*plVar2,uVar5,0);
      goto LAB_146bc94b6;
    }
    if (param_5 == '\x01') {
      local_114 = (uint)(bVar11 & (byte)local_114);
      goto LAB_146bc9262;
    }
    goto LAB_146bc94b6;
  }
  lVar15 = local_110;
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar6 + 1U) {
      FUN_1446f48e2(plVar3,iVar6);
    }
    *(uint *)(*plVar3 + (longlong)iVar6 * 4) = uVar5;
    lVar15 = local_110;
  }
LAB_146bc9310:
  uVar14 = uVar14 + 1;
  bVar11 = (int)uVar10 <= (int)uVar14;
  if (uVar14 == uVar10) goto LAB_146bc9262;
  goto LAB_146bc92d4;
}



// FUNCTION 146bc9642 FUN_146bc9642 body=145 status=ok
// SIG undefined FUN_146bc9642(void)

void FUN_146bc9642(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14481578e(param_1,0);
  }
  FUN_1407058ce(param_1 + 2);
  *(int *)(param_1 + 0xd) = param_2;
  if ((param_2 < 32000) || (0.1 < (float)param_3 / (float)param_2)) {
    FUN_144a1a59e(param_1,param_2,1);
    *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
    if (0 < (int)param_1[1]) {
      lVar1 = 0;
      do {
        *(int *)(*param_1 + lVar1 * 4) =
             *(int *)((longlong)param_1 + 100) * (int)lVar1 + (int)param_1[0xc];
        lVar1 = lVar1 + 1;
      } while (lVar1 < (int)param_1[1]);
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  }
  return;
}


