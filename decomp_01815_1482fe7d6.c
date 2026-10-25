// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1482fe7d6 FUN_1482fe7d6 body=141 status=ok
// SIG undefined FUN_1482fe7d6(void)

void FUN_1482fe7d6(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
    *(undefined8 *)(param_1 + 8 + lVar2) = 0;
    iVar1 = *(int *)(param_2 + 0x10 + lVar2);
    _Src = *(void **)(param_2 + 8 + lVar2);
    *(int *)(param_1 + 0x10 + lVar2) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
    }
    else {
      FUN_1405b70fe(param_1 + 8 + lVar2,iVar1,0);
      memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 0x18);
    }
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1482fe876 FUN_1482fe876 body=38 status=ok
// SIG undefined FUN_1482fe876(void)

undefined8 FUN_1482fe876(undefined8 param_1,int param_2)

{
  FUN_1482f16dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482fe8dc FUN_1482fe8dc body=54 status=ok
// SIG undefined FUN_1482fe8dc(void)

void FUN_1482fe8dc(longlong *param_1)

{
  FUN_1482fe912(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482fe912 FUN_1482fe912 body=128 status=ok
// SIG undefined FUN_1482fe912(void)

void FUN_1482fe912(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1482fe994 FUN_1482fe994 body=52 status=ok
// SIG undefined FUN_1482fe994(void)

void FUN_1482fe994(longlong *param_1)

{
  FUN_1482fe9c8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482fe9c8 FUN_1482fe9c8 body=313 status=ok
// SIG undefined FUN_1482fe9c8(void)

void FUN_1482fe9c8(longlong *param_1)

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



// FUNCTION 1482feb02 FUN_1482feb02 body=172 status=ok
// SIG undefined FUN_1482feb02(void)

void FUN_1482feb02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae72910;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_146b9cd14(param_1 + 0x46);
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_1482febae(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1482f5f22(param_1);
  return;
}



// FUNCTION 1482febae FUN_1482febae body=54 status=ok
// SIG undefined FUN_1482febae(void)

void FUN_1482febae(longlong *param_1)

{
  FUN_1482febe4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482febe4 FUN_1482febe4 body=128 status=ok
// SIG undefined FUN_1482febe4(void)

void FUN_1482febe4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1482fec66 FUN_1482fec66 body=172 status=ok
// SIG undefined FUN_1482fec66(void)

void FUN_1482fec66(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae72f70;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_146b9cd14(param_1 + 0x46);
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_1482febae(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1482f5f22(param_1);
  return;
}



// FUNCTION 1482fed12 FUN_1482fed12 body=172 status=ok
// SIG undefined FUN_1482fed12(void)

void FUN_1482fed12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae72a40;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_146b9cd14(param_1 + 0x46);
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_1482febae(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1482f5f22(param_1);
  return;
}



// FUNCTION 1482fedbe FUN_1482fedbe body=31 status=ok
// SIG undefined FUN_1482fedbe(void)

undefined8 FUN_1482fedbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482fedfa FUN_1482fedfa body=93 status=ok
// SIG undefined FUN_1482fedfa(void)

void FUN_1482fedfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae72d60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1482fee58 FUN_1482fee58 body=126 status=ok
// SIG undefined FUN_1482fee58(void)

void FUN_1482fee58(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae72d60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482feec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1482feed6 FUN_1482feed6 body=21 status=ok
// SIG undefined FUN_1482feed6(void)

undefined8 FUN_1482feed6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1482feeeb FUN_1482feeeb body=75 status=ok
// SIG undefined FUN_1482feeeb(void)

void FUN_1482feeeb(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    do {
      puVar1[-10] = 0x7fefffffffffffff;
      puVar1[-9] = 0x7fefffffffffffff;
      puVar1[-8] = 0x7fefffffffffffff;
      puVar1[-7] = 0xffefffffffffffff;
      puVar1[-6] = 0xffefffffffffffff;
      puVar1[-5] = 0xffefffffffffffff;
      puVar1[-1] = 0xffffffffffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1482fef36 FUN_1482fef36 body=143 status=ok
// SIG undefined FUN_1482fef36(void)

void FUN_1482fef36(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1482fefc6 FUN_1482fefc6 body=89 status=ok
// SIG undefined FUN_1482fefc6(void)

void FUN_1482fefc6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x68 + *param_1);
  FUN_14598c4d0(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x68 + (longlong)_Dst),(longlong)iVar2 * 0x68);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1482ff020 FUN_1482ff020 body=62 status=ok
// SIG undefined FUN_1482ff020(void)

void FUN_1482ff020(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1482ff05e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 1482ff05e FUN_1482ff05e body=104 status=ok
// SIG undefined FUN_1482ff05e(void)

ulonglong FUN_1482ff05e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x68) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1482ff094;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x68,8);
      param_2 = param_2 / 0x68;
    }
  }
LAB_1482ff094:
  return param_2 & 0xffffffff;
}



// FUNCTION 1482ff0c6 FUN_1482ff0c6 body=48 status=ok
// SIG undefined FUN_1482ff0c6(void)

void FUN_1482ff0c6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 1482ff0f6 FUN_1482ff0f6 body=48 status=ok
// SIG undefined FUN_1482ff0f6(void)

void FUN_1482ff0f6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 1482ff126 FUN_1482ff126 body=48 status=ok
// SIG undefined FUN_1482ff126(void)

void FUN_1482ff126(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1482ff156 FUN_1482ff156 body=238 status=ok
// SIG undefined FUN_1482ff156(void)

undefined4 * FUN_1482ff156(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  uVar3 = *(undefined8 *)(param_2 + 6);
  param_1[8] = iVar1;
  if (iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1482ff2d4(param_1 + 6,iVar1,0);
    FUN_1482ff347(*(undefined8 *)(param_1 + 6),uVar3,iVar1);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1482ff244 FUN_1482ff244 body=143 status=ok
// SIG undefined FUN_1482ff244(void)

void FUN_1482ff244(longlong param_1,int param_2)

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



// FUNCTION 1482ff2d4 FUN_1482ff2d4 body=115 status=ok
// SIG undefined FUN_1482ff2d4(void)

void FUN_1482ff2d4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1482ff347 FUN_1482ff347 body=52 status=ok
// SIG undefined FUN_1482ff347(void)

void FUN_1482ff347(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1482ff37c(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 1482ff37c FUN_1482ff37c body=168 status=ok
// SIG undefined FUN_1482ff37c(void)

undefined8 * FUN_1482ff37c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1482ff424 FUN_1482ff424 body=23 status=ok
// SIG undefined FUN_1482ff424(void)

void FUN_1482ff424(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1482ff43c FUN_1482ff43c body=147 status=ok
// SIG undefined FUN_1482ff43c(void)

void FUN_1482ff43c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1482ff4d0 FUN_1482ff4d0 body=98 status=ok
// SIG undefined FUN_1482ff4d0(void)

void FUN_1482ff4d0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
  FUN_1482f52aa(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1482ff532 FUN_1482ff532 body=62 status=ok
// SIG undefined FUN_1482ff532(void)

void FUN_1482ff532(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1482ff570(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1482ff570 FUN_1482ff570 body=112 status=ok
// SIG undefined FUN_1482ff570(void)

ulonglong FUN_1482ff570(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1482ff5aa;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_1482ff5aa:
  return param_2 & 0xffffffff;
}



// FUNCTION 1482ff5e0 FUN_1482ff5e0 body=147 status=ok
// SIG undefined FUN_1482ff5e0(void)

void FUN_1482ff5e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1482ff674 FUN_1482ff674 body=435 status=ok
// SIG undefined FUN_1482ff674(void)

void FUN_1482ff674(longlong param_1,double *param_2)

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
  
  dVar7 = param_2[3];
  dVar11 = *(double *)(param_1 + 0x30);
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = *(double *)(param_1 + 0x18);
  dVar4 = param_2[2];
  dVar5 = *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_1 + 0x28);
  dVar8 = ((dVar7 * dVar11 - dVar3 * dVar1) - dVar2 * dVar5) - dVar4 * dVar6;
  dVar10 = (dVar2 * dVar6 + dVar7 * dVar3 + dVar11 * dVar1) - dVar4 * dVar5;
  dVar9 = (dVar4 * dVar3 + dVar7 * dVar5 + dVar11 * dVar2) - dVar1 * dVar6;
  dVar7 = (dVar1 * dVar5 + dVar7 * dVar6 + dVar11 * dVar4) - dVar2 * dVar3;
  dVar11 = SQRT(dVar8 * dVar8 + dVar7 * dVar7 + dVar10 * dVar10 + dVar9 * dVar9);
  if ((0.0 < dVar11) && (dVar11 = 1.0 / dVar11, 0.0 < dVar11)) {
    *(double *)(param_1 + 0x18) = dVar10 * dVar11;
    *(double *)(param_1 + 0x20) = dVar9 * dVar11;
    *(double *)(param_1 + 0x28) = dVar7 * dVar11;
    *(double *)(param_1 + 0x30) = dVar8 * dVar11;
  }
  return;
}



// FUNCTION 1482ff828 FUN_1482ff828 body=132 status=ok
// SIG undefined FUN_1482ff828(void)

void FUN_1482ff828(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1482ff8ae FUN_1482ff8ae body=89 status=ok
// SIG undefined FUN_1482ff8ae(void)

void FUN_1482ff8ae(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1482f6002(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1482ff908 FUN_1482ff908 body=62 status=ok
// SIG undefined FUN_1482ff908(void)

void FUN_1482ff908(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1482ff946(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1482ff946 FUN_1482ff946 body=93 status=ok
// SIG undefined FUN_1482ff946(void)

ulonglong FUN_1482ff946(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1482ff9a4 FUN_1482ff9a4 body=14 status=ok
// SIG undefined FUN_1482ff9a4(void)

void FUN_1482ff9a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1482ff9b2 FUN_1482ff9b2 body=29 status=ok
// SIG undefined FUN_1482ff9b2(void)

undefined8 FUN_1482ff9b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482ff9d0 FUN_1482ff9d0 body=47 status=ok
// SIG undefined FUN_1482ff9d0(void)

longlong FUN_1482ff9d0(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482ffa00 FUN_1482ffa00 body=201 status=ok
// SIG undefined FUN_1482ffa00(void)

double * FUN_1482ffa00(longlong param_1,double *param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [32];
  double local_88;
  int local_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1482ffaca(param_1 + 8,param_3,&local_7c,&local_88);
  FUN_146bd9232(&local_78,*(longlong *)(param_1 + 8) + (longlong)local_7c * 0x18,
                *(longlong *)(param_1 + 8) + (longlong)local_7c * 0x18 + 0x18);
  *param_2 = local_88 * local_60 + local_78;
  param_2[1] = local_58 * local_88 + local_70;
  param_2[2] = local_50 * local_88 + local_68;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ffaca FUN_1482ffaca body=635 status=ok
// SIG undefined FUN_1482ffaca(void)

void FUN_1482ffaca(longlong *param_1,double *param_2,undefined4 *param_3,ulonglong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_3 = 0xffffffff;
  *param_4 = 0x7fefffffffffffff;
  lVar1 = param_1[1];
  if (1 < (int)lVar1) {
    dVar8 = 1.79769313486232e+308;
    lVar3 = 0x18;
    uVar2 = 0;
    do {
      FUN_146bd9232(&local_108,*param_1 + lVar3 + -0x18,*param_1 + lVar3);
      dVar5 = (param_2[2] - local_f8) * local_e0 +
              (*param_2 - local_108) * local_f0 + (param_2[1] - local_100) * local_e8;
      dVar6 = local_d8;
      if ((local_d8 <= dVar5) || (dVar6 = dVar5, -local_d8 < dVar5)) {
        dVar9 = local_f8 + local_e0 * dVar6;
        dVar7 = local_100 + local_e8 * dVar6;
        dVar6 = local_108 + local_f0 * dVar6;
      }
      else {
        dVar9 = local_f8 - local_e0 * local_d8;
        dVar7 = local_100 - local_e8 * local_d8;
        dVar6 = local_108 - local_f0 * local_d8;
      }
      dVar6 = *param_2 - dVar6;
      dVar7 = param_2[1] - dVar7;
      dVar9 = param_2[2] - dVar9;
      dVar6 = dVar9 * dVar9 + dVar6 * dVar6 + dVar7 * dVar7;
      if (dVar6 < dVar8) {
        *param_3 = (int)uVar2;
        dVar8 = local_d8;
        if (dVar5 <= local_d8) {
          dVar8 = dVar5;
        }
        uVar4 = -(ulonglong)(dVar5 < -local_d8);
        *param_4 = uVar4 & (ulonglong)-local_d8 | ~uVar4 & (ulonglong)dVar8;
        dVar8 = dVar6;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x18;
    } while ((int)lVar1 - 1 != uVar2);
  }
  if ((local_d0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ffd46 FUN_1482ffd46 body=271 status=ok
// SIG undefined FUN_1482ffd46(void)

bool FUN_1482ffd46(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = *param_3 - *param_2;
  dVar5 = *param_2 - *param_1;
  dVar8 = param_3[1] - param_2[1];
  dVar4 = param_2[1] - param_1[1];
  dVar7 = param_3[2] - param_2[2];
  dVar1 = param_2[2] - param_1[2];
  dVar1 = dVar1 * dVar1 + dVar5 * dVar5 + dVar4 * dVar4;
  dVar6 = *param_3 - *param_1;
  dVar5 = param_3[1] - param_1[1];
  dVar4 = param_3[2] - param_1[2];
  dVar5 = dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5;
  dVar8 = dVar7 * dVar7 + dVar3 * dVar3 + dVar8 * dVar8;
  bVar2 = true;
  if ((dVar8 <= dVar1 + dVar5) && (dVar1 <= dVar5 + dVar8)) {
    bVar2 = dVar1 + dVar8 < dVar5;
  }
  return bVar2;
}



// FUNCTION 1482ffe55 FUN_1482ffe55 body=19 status=ok
// SIG undefined FUN_1482ffe55(void)

void FUN_1482ffe55(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 5);
    return;
  }
  return;
}



// FUNCTION 1482ffe68 FUN_1482ffe68 body=132 status=ok
// SIG undefined FUN_1482ffe68(void)

void FUN_1482ffe68(longlong param_1,int param_2)

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



// FUNCTION 1482ffeee FUN_1482ffeee body=62 status=ok
// SIG undefined FUN_1482ffeee(void)

void FUN_1482ffeee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1482fff2c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1482fff2c FUN_1482fff2c body=93 status=ok
// SIG undefined FUN_1482fff2c(void)

ulonglong FUN_1482fff2c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1482fff8a FUN_1482fff8a body=116 status=ok
// SIG undefined FUN_1482fff8a(void)

void FUN_1482fff8a(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 4) {
    FUN_148300046(param_1);
  }
  iVar11 = 4;
  do {
    iVar3 = (int)param_1[1];
    lVar10 = (longlong)iVar3;
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1483000e8(param_1,iVar3);
    }
    lVar4 = *param_1;
    *(undefined8 *)(lVar4 + 0x20 + lVar10 * 0x28) = *(undefined8 *)(param_2 + 8);
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar9 = *(undefined8 *)(param_2 + 6);
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar10 * 0x28);
    *puVar2 = *(undefined8 *)(param_2 + 4);
    puVar2[1] = uVar9;
    puVar1 = (undefined4 *)(lVar4 + lVar10 * 0x28);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}



// FUNCTION 1482ffffe FUN_1482ffffe body=71 status=ok
// SIG undefined FUN_1482ffffe(void)

void FUN_1482ffffe(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14830017c();
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
      FUN_148300202();
      return;
    }
  }
  return;
}



// FUNCTION 148300046 FUN_148300046 body=162 status=ok
// SIG undefined FUN_148300046(void)

undefined8 FUN_148300046(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0xa0;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e0a];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xa0,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if (3 < (int)(uVar3 / 0x28)) {
    uVar4 = uVar3 / 0x28 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x28,8);
  }
  return uVar2;
}



// FUNCTION 1483000e8 FUN_1483000e8 body=147 status=ok
// SIG undefined FUN_1483000e8(void)

void FUN_1483000e8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14830017c FUN_14830017c body=132 status=ok
// SIG undefined FUN_14830017c(void)

void FUN_14830017c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148300202 FUN_148300202 body=62 status=ok
// SIG undefined FUN_148300202(void)

void FUN_148300202(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148300240(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148300240 FUN_148300240 body=93 status=ok
// SIG undefined FUN_148300240(void)

ulonglong FUN_148300240(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1483002a6 FUN_1483002a6 body=168 status=ok
// SIG undefined FUN_1483002a6(void)

void FUN_1483002a6(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (-1 < (int)param_2) {
    lVar2 = *(longlong *)(*param_1 + 8);
    if (((int)param_2 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar2 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      FUN_146c13dec(lVar2,&local_38,param_2);
      lVar2 = *(longlong *)param_1[1];
      *(undefined8 *)(lVar2 + 0x10 + (ulonglong)param_2 * 0x18) = local_28;
      puVar1 = (undefined4 *)(lVar2 + (ulonglong)param_2 * 0x18);
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



// FUNCTION 148300358 FUN_148300358 body=293 status=ok
// SIG undefined FUN_148300358(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148300358(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  int *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  int *local_a0;
  undefined1 *local_98;
  int *local_90;
  undefined1 *local_88;
  longlong **local_80;
  int local_74 [3];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (-1 < (int)param_2) {
    lVar1 = *(longlong *)(*param_1 + 8);
    if (((int)param_2 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      local_30 = param_1[3];
      local_38 = *(undefined8 *)param_1[2];
      local_c0 = &local_30;
      local_a8 = &local_38;
      local_b8 = local_74 + 2;
      local_74[2] = 0;
      local_a0 = local_74 + 1;
      local_74[1] = 0;
      local_90 = local_74;
      local_74[0] = 0;
      local_80 = &local_c0;
      local_b0 = local_50;
      local_98 = local_68;
      local_88 = &LAB_143b02b0a;
      FUN_146c03fd0(lVar1,param_2);
      *(bool *)(*(longlong *)param_1[1] + (ulonglong)param_2) = local_74[0] == 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14830047e FUN_14830047e body=108 status=ok
// SIG undefined FUN_14830047e(void)

void FUN_14830047e(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *param_2;
  FUN_146c13dec(*(undefined8 *)(param_1[1] + 8),&local_38,iVar2);
  lVar3 = *(longlong *)*param_1;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = local_28;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483004eb FUN_1483004eb body=188 status=ok
// SIG undefined FUN_1483004eb(void)

void FUN_1483004eb(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    uVar1 = DAT_14c8464e8;
    param_1[10] = DAT_14c8464e0;
    param_1[0xb] = uVar1;
    param_1[0xc] = DAT_14c8464f0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0x3ff0000000000000;
    param_1[0x12] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    param_1[0x10] = DAT_14c8464e0;
    param_1[0x11] = uVar1;
    uVar1 = DAT_14c8464e8;
    param_1[0x13] = DAT_14c8464e0;
    param_1[0x14] = uVar1;
    param_1[0x15] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    param_1[0x16] = DAT_14c8464e0;
    param_1[0x17] = uVar1;
    param_1[0x18] = DAT_14c8464f0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1 = param_1 + 0x1c;
  }
  return;
}



// FUNCTION 1483005a8 FUN_1483005a8 body=146 status=ok
// SIG undefined FUN_1483005a8(void)

void FUN_1483005a8(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14830063c FUN_14830063c body=62 status=ok
// SIG undefined FUN_14830063c(void)

void FUN_14830063c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14830067a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xe0,8);
  }
  return;
}



// FUNCTION 14830067a FUN_14830067a body=110 status=ok
// SIG undefined FUN_14830067a(void)

ulonglong FUN_14830067a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xe0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483006b3;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xe0,8);
      param_2 = param_2 / 0xe0;
    }
  }
LAB_1483006b3:
  return param_2 & 0xffffffff;
}



// FUNCTION 1483006e8 FUN_1483006e8 body=196 status=ok
// SIG undefined FUN_1483006e8(void)

void FUN_1483006e8(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0xd0);
    do {
      puVar2[-0x11] = 0;
      puVar2[-0x10] = 0;
      puVar2[-0x13] = 0;
      puVar2[-0x12] = 0;
      puVar2[-0x15] = 0;
      puVar2[-0x14] = 0;
      puVar2[-0x17] = 0;
      puVar2[-0x16] = 0;
      puVar2[-0x19] = 0;
      puVar2[-0x18] = 0;
      uVar1 = DAT_14c8464e8;
      puVar2[-0xf] = DAT_14c8464e0;
      puVar2[-0xe] = uVar1;
      puVar2[-0xd] = DAT_14c8464f0;
      puVar2[-0xc] = 0;
      puVar2[-0xb] = 0;
      puVar2[-10] = 0x3ff0000000000000;
      puVar2[-7] = DAT_14c8464f0;
      uVar1 = DAT_14c8464e8;
      puVar2[-9] = DAT_14c8464e0;
      puVar2[-8] = uVar1;
      uVar1 = DAT_14c8464e8;
      puVar2[-6] = DAT_14c8464e0;
      puVar2[-5] = uVar1;
      puVar2[-4] = DAT_14c8464f0;
      uVar1 = DAT_14c8464e8;
      puVar2[-3] = DAT_14c8464e0;
      puVar2[-2] = uVar1;
      puVar2[-1] = DAT_14c8464f0;
      *(undefined4 *)(puVar2 + -0x1a) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1483007ac FUN_1483007ac body=132 status=ok
// SIG undefined FUN_1483007ac(void)

void FUN_1483007ac(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_var;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    FUN_144a3809e(lVar3 << 8,8);
    iVar4 = 0x7fffffff;
    if ((int)uVar1 <= extraout_var) {
      iVar4 = extraout_var;
    }
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,param_2,iVar4,0x100,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148300832 FUN_148300832 body=62 status=ok
// SIG undefined FUN_148300832(void)

void FUN_148300832(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148300870(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x100,8);
  }
  return;
}



// FUNCTION 148300870 FUN_148300870 body=93 status=ok
// SIG undefined FUN_148300870(void)

ulonglong FUN_148300870(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc0U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 8,8);
      uVar1 = uVar1 >> 8;
    }
  }
  return uVar1;
}



// FUNCTION 1483008ce FUN_1483008ce body=95 status=ok
// SIG undefined FUN_1483008ce(void)

void FUN_1483008ce(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14830092e FUN_14830092e body=132 status=ok
// SIG undefined FUN_14830092e(void)

void FUN_14830092e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483009b4 FUN_1483009b4 body=567 status=ok
// SIG undefined FUN_1483009b4(void)

double FUN_1483009b4(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = param_1[0xf];
  dVar6 = param_3[2] * dVar7;
  dVar8 = param_3[1] * dVar7;
  dVar7 = dVar7 * *param_3;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = (param_1[0x18] * dVar6 + param_1[0x12] * dVar7 + param_1[0x15] * dVar8) * dVar3 +
          (param_1[0x16] * dVar6 + param_1[0x10] * dVar7 + param_1[0x13] * dVar8) * dVar1 +
          (param_1[0x17] * dVar6 + param_1[0x11] * dVar7 + param_1[0x14] * dVar8) * dVar2;
  dVar5 = (dVar3 * param_1[8] + dVar1 * param_1[6] + dVar2 * param_1[7]) -
          (dVar6 * param_1[0x1b] + dVar7 * param_1[0x19] + dVar8 * param_1[0x1a]);
  return dVar5 + dVar5 +
         (((dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8) * param_1[0xe] +
          (param_1[5] * dVar3 + param_1[2] * dVar1 + param_1[4] * dVar2) * dVar3 +
          (param_1[2] * dVar3 + *param_1 * dVar1 + param_1[1] * dVar2) * dVar1 +
          (param_1[4] * dVar3 + param_1[1] * dVar1 + param_1[3] * dVar2) * dVar2) - (dVar4 + dVar4))
         + param_1[9];
}



// FUNCTION 148300beb FUN_148300beb body=569 status=ok
// SIG undefined FUN_148300beb(void)

void FUN_148300beb(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong *plVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328 [188];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (1 < (int)param_2) {
    memset(local_328,0,0x2f0);
    local_330 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_338 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_328[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_338;
    do {
      pfVar4 = (float *)*plVar10;
      pfVar11 = (float *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)pfVar11 - (longlong)pfVar4) >> 3);
      pfVar9 = pfVar4;
      pfVar14 = pfVar11;
      if (iVar13 != 0) {
LAB_148300caa:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = (ulonglong)(iVar6 + 1U >> 1);
          uVar1 = *(undefined8 *)(pfVar4 + uVar7 * 2);
          *(undefined8 *)(pfVar4 + uVar7 * 2) = *(undefined8 *)pfVar4;
          *(undefined8 *)pfVar4 = uVar1;
          pfVar8 = pfVar11 + 2;
          pfVar5 = pfVar4;
          do {
            pfVar2 = pfVar5 + 2;
            pfVar12 = pfVar5 + 2;
            do {
              pfVar5 = pfVar12;
              pfVar15 = pfVar2;
              if (pfVar11 < pfVar5) break;
              pfVar2 = pfVar15 + 2;
              pfVar12 = pfVar5 + 2;
            } while (*pfVar5 < *pfVar4 || *pfVar5 == *pfVar4);
            pfVar2 = pfVar8 + -4;
            do {
              pfVar12 = pfVar8;
              pfVar16 = pfVar2;
              pfVar8 = pfVar12 + -2;
              if (pfVar8 <= pfVar4) break;
              pfVar2 = pfVar16 + -2;
            } while (*pfVar4 < *pfVar8 || *pfVar4 == *pfVar8);
            if (pfVar8 < pfVar5) goto LAB_148300d2a;
            uVar1 = *(undefined8 *)pfVar5;
            *(undefined8 *)pfVar5 = *(undefined8 *)pfVar8;
            *(undefined8 *)pfVar8 = uVar1;
          } while( true );
        }
        if (pfVar4 < pfVar11) {
          do {
            pfVar9 = pfVar4;
            if (pfVar4 + 2 <= pfVar11) {
              fVar17 = *pfVar4;
              pfVar14 = pfVar4 + 2;
              do {
                fVar3 = *pfVar14;
                pfVar8 = pfVar14;
                if (*pfVar14 <= fVar17) {
                  fVar3 = fVar17;
                  pfVar8 = pfVar9;
                }
                pfVar9 = pfVar8;
                fVar17 = fVar3;
                pfVar14 = pfVar14 + 2;
              } while (pfVar14 <= pfVar11);
            }
            uVar1 = *(undefined8 *)pfVar9;
            *(undefined8 *)pfVar9 = *(undefined8 *)pfVar11;
            *(undefined8 *)pfVar11 = uVar1;
            pfVar11 = pfVar11 + -2;
          } while (pfVar4 < pfVar11);
        }
        goto LAB_148300e03;
      }
LAB_148300e18:
      FUN_148300e25(pfVar4);
LAB_148300e03:
      plVar10 = plVar10 + -3;
    } while (&local_338 <= plVar10);
  }
  if ((local_38 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_148300d2a:
  uVar1 = *(undefined8 *)pfVar4;
  *(undefined8 *)pfVar4 = *(undefined8 *)pfVar8;
  *(undefined8 *)pfVar8 = uVar1;
  iVar13 = iVar13 + -1;
  pfVar12 = pfVar12 + -4;
  if ((longlong)pfVar16 - (longlong)pfVar9 < (longlong)pfVar14 - (longlong)pfVar15) {
    if (pfVar5 < pfVar11) {
      *plVar10 = (longlong)pfVar5;
      plVar10[1] = (longlong)pfVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    pfVar15 = pfVar4;
    if (pfVar8 <= pfVar4 + 2) goto LAB_148300e03;
  }
  else {
    if (pfVar4 + 2 < pfVar8) {
      *plVar10 = (longlong)pfVar4;
      plVar10[1] = (longlong)pfVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    pfVar4 = pfVar5;
    pfVar12 = pfVar11;
    pfVar16 = pfVar11;
    if (pfVar11 <= pfVar5) goto LAB_148300e03;
  }
  iVar6 = (int)((ulonglong)((longlong)pfVar16 - (longlong)pfVar15) >> 3);
  pfVar9 = pfVar15;
  pfVar11 = pfVar12;
  pfVar14 = pfVar16;
  if (iVar13 == 0) goto LAB_148300e18;
  goto LAB_148300caa;
}



// FUNCTION 148300e25 FUN_148300e25 body=311 status=ok
// SIG undefined FUN_148300e25(void)

void FUN_148300e25(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x000148300e46:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (*(float *)(param_1 + iVar5) < *(float *)(param_1 + iVar6) ||
            *(float *)(param_1 + iVar5) == *(float *)(param_1 + iVar6))) {
          iVar5 = iVar6;
        }
        if (*(float *)(param_1 + iVar2) <= *(float *)(param_1 + iVar5) &&
            *(float *)(param_1 + iVar5) != *(float *)(param_1 + iVar2)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x000148300e46;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(float *)(param_1 + iVar5) < *(float *)(param_1 + iVar2) ||
                *(float *)(param_1 + iVar5) == *(float *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(float *)(param_1 + iVar6) < *(float *)(param_1 + iVar7) ||
                *(float *)(param_1 + iVar6) == *(float *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 148300f5c FUN_148300f5c body=350 status=ok
// SIG undefined FUN_148300f5c(void)

bool FUN_148300f5c(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = param_1[5] * param_1[3] - param_1[4] * param_1[4];
  *param_2 = dVar3;
  dVar4 = param_1[2] * param_1[4] - param_1[1] * param_1[5];
  param_2[1] = dVar4;
  dVar5 = param_1[1] * param_1[4] - param_1[3] * param_1[2];
  param_2[2] = dVar5;
  dVar6 = param_1[5] * *param_1 - param_1[2] * param_1[2];
  param_2[3] = dVar6;
  dVar7 = param_1[1] * param_1[2] - param_1[4] * *param_1;
  param_2[4] = dVar7;
  dVar8 = *param_1 * param_1[3] - param_1[1] * param_1[1];
  param_2[5] = dVar8;
  dVar2 = param_1[2] * dVar5 + *param_1 * dVar3 + param_1[1] * dVar4;
  dVar1 = ABS(dVar2);
  if (2.220446049250313e-13 < dVar1) {
    dVar2 = 1.0 / dVar2;
    *param_2 = dVar3 * dVar2;
    param_2[1] = dVar4 * dVar2;
    param_2[2] = dVar5 * dVar2;
    param_2[3] = dVar6 * dVar2;
    param_2[4] = dVar7 * dVar2;
    param_2[5] = dVar8 * dVar2;
  }
  return 2.220446049250313e-13 < dVar1;
}



// FUNCTION 1483010ba FUN_1483010ba body=299 status=ok
// SIG undefined FUN_1483010ba(void)

undefined4 * FUN_1483010ba(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1482f6234(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  local_40[0xe] = 0;
  local_40[0xf] = 0;
  local_40[0x10] = 0;
  local_40[0x11] = 0;
  local_40[0x12] = 0;
  local_40[0x13] = 0;
  local_40[0x14] = 0;
  local_40[0x15] = 0;
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_1482f6322(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0x17] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x16] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1482f6430(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483011e6 FUN_1483011e6 body=85 status=ok
// SIG undefined FUN_1483011e6(void)

void FUN_1483011e6(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_14830123c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14830123c FUN_14830123c body=95 status=ok
// SIG undefined FUN_14830123c(void)

void FUN_14830123c(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_1482f63b6();
  return;
}



// FUNCTION 14830129c FUN_14830129c body=139 status=ok
// SIG undefined FUN_14830129c(void)

void FUN_14830129c(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x100);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x108);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 4;
    } while (lVar5 * 4 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_147c81098(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x100);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + lVar5 * 4) = *param_2;
  return;
}



// FUNCTION 14830134e FUN_14830134e body=12 status=ok
// SIG undefined FUN_14830134e(void)

void FUN_14830134e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148301357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14830135a FUN_14830135a body=29 status=ok
// SIG undefined FUN_14830135a(void)

undefined8 FUN_14830135a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148301378 FUN_148301378 body=335 status=ok
// SIG undefined FUN_148301378(void)

void FUN_148301378(longlong *param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 200) == '\x01') {
    FUN_1482b33ce(lVar3 + 0x10,&local_48,param_2);
    if ((local_48._1_1_ != '\x01') || (CONCAT44(uStack_3c,uStack_40) != 0)) goto LAB_1483013df;
  }
  pcVar4 = *(code **)(lVar3 + 0xe0);
  if (pcVar4 != (code *)0x0) {
    plVar9 = (longlong *)(lVar3 + 0x100);
    if (*(longlong **)(lVar3 + 0xf0) != (longlong *)0x0) {
      plVar9 = *(longlong **)(lVar3 + 0xf0);
    }
    local_48 = param_2;
    uVar7 = (**(code **)(*plVar9 + 8))();
    uVar8 = (*pcVar4)(uVar7,&local_48);
    if ((uVar8 & 2) != 0) goto LAB_1483013df;
  }
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  uVar8 = (ulonglong)(param_2 & 0x1ff);
  local_38 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
  puVar1 = (uint *)(lVar5 + uVar8 * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  (**(code **)(**(longlong **)(lVar3 + 0xd0) + 8))
            (*(longlong **)(lVar3 + 0xd0),&local_60,&local_48,param_2);
  lVar3 = *(longlong *)(lVar3 + 8);
  cVar6 = FUN_146bfed03(&local_60);
  if (cVar6 != '\0') {
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
    *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18) = local_50;
    puVar2 = (undefined4 *)(lVar5 + uVar8 * 0x18);
    *puVar2 = local_60;
    puVar2[1] = uStack_5c;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    if (*(char *)(lVar3 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
      UNLOCK();
    }
  }
LAB_1483013df:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483014d0 FUN_1483014d0 body=168 status=ok
// SIG undefined FUN_1483014d0(void)

void FUN_1483014d0(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (-1 < (int)param_2) {
    lVar2 = *(longlong *)(*param_1 + 8);
    if (((int)param_2 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar2 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      FUN_146c13dec(lVar2,&local_38,param_2);
      lVar2 = *(longlong *)param_1[1];
      *(undefined8 *)(lVar2 + 0x10 + (ulonglong)param_2 * 0x18) = local_28;
      puVar1 = (undefined4 *)(lVar2 + (ulonglong)param_2 * 0x18);
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



// FUNCTION 148301582 FUN_148301582 body=293 status=ok
// SIG undefined FUN_148301582(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148301582(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  int *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  int *local_a0;
  undefined1 *local_98;
  int *local_90;
  undefined1 *local_88;
  longlong **local_80;
  int local_74 [3];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (-1 < (int)param_2) {
    lVar1 = *(longlong *)(*param_1 + 8);
    if (((int)param_2 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      local_30 = param_1[3];
      local_38 = *(undefined8 *)param_1[2];
      local_c0 = &local_30;
      local_a8 = &local_38;
      local_b8 = local_74 + 2;
      local_74[2] = 0;
      local_a0 = local_74 + 1;
      local_74[1] = 0;
      local_90 = local_74;
      local_74[0] = 0;
      local_80 = &local_c0;
      local_b0 = local_50;
      local_98 = local_68;
      local_88 = &LAB_143b02d44;
      FUN_146c03fd0(lVar1,param_2);
      *(bool *)(*(longlong *)param_1[1] + (ulonglong)param_2) = local_74[0] == 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483016a8 FUN_1483016a8 body=108 status=ok
// SIG undefined FUN_1483016a8(void)

void FUN_1483016a8(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *param_2;
  FUN_146c13dec(*(undefined8 *)(param_1[1] + 8),&local_38,iVar2);
  lVar3 = *(longlong *)*param_1;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = local_28;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148301715 FUN_148301715 body=65 status=ok
// SIG undefined FUN_148301715(void)

void FUN_148301715(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    uVar1 = DAT_14c8464e8;
    param_1[10] = DAT_14c8464e0;
    param_1[0xb] = uVar1;
    param_1[0xc] = DAT_14c8464f0;
    param_1[0xd] = 0;
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 148301756 FUN_148301756 body=143 status=ok
// SIG undefined FUN_148301756(void)

void FUN_148301756(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483017e6 FUN_1483017e6 body=62 status=ok
// SIG undefined FUN_1483017e6(void)

void FUN_1483017e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148301824(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 148301824 FUN_148301824 body=104 status=ok
// SIG undefined FUN_148301824(void)

ulonglong FUN_148301824(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14830185a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_14830185a:
  return param_2 & 0xffffffff;
}



// FUNCTION 14830188c FUN_14830188c body=75 status=ok
// SIG undefined FUN_14830188c(void)

void FUN_14830188c(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    uVar1 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x16) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_1 + 0x1a) = DAT_14c8464f0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *param_1 = 0;
    param_1 = param_1 + 0x24;
  }
  return;
}



// FUNCTION 1483018d8 FUN_1483018d8 body=147 status=ok
// SIG undefined FUN_1483018d8(void)

void FUN_1483018d8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14830196c FUN_14830196c body=62 status=ok
// SIG undefined FUN_14830196c(void)

void FUN_14830196c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483019aa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x90,8);
  }
  return;
}



// FUNCTION 1483019aa FUN_1483019aa body=112 status=ok
// SIG undefined FUN_1483019aa(void)

ulonglong FUN_1483019aa(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x90) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483019e4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x90,8);
      param_2 = param_2 / 0x90;
    }
  }
LAB_1483019e4:
  return param_2 & 0xffffffff;
}



// FUNCTION 148301a1a FUN_148301a1a body=95 status=ok
// SIG undefined FUN_148301a1a(void)

void FUN_148301a1a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 148301a7a FUN_148301a7a body=132 status=ok
// SIG undefined FUN_148301a7a(void)

void FUN_148301a7a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148301aff FUN_148301aff body=569 status=ok
// SIG undefined FUN_148301aff(void)

void FUN_148301aff(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong *plVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328 [188];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (1 < (int)param_2) {
    memset(local_328,0,0x2f0);
    local_330 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_338 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_328[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_338;
    do {
      pfVar4 = (float *)*plVar10;
      pfVar11 = (float *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)pfVar11 - (longlong)pfVar4) >> 3);
      pfVar9 = pfVar4;
      pfVar14 = pfVar11;
      if (iVar13 != 0) {
LAB_148301bbe:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = (ulonglong)(iVar6 + 1U >> 1);
          uVar1 = *(undefined8 *)(pfVar4 + uVar7 * 2);
          *(undefined8 *)(pfVar4 + uVar7 * 2) = *(undefined8 *)pfVar4;
          *(undefined8 *)pfVar4 = uVar1;
          pfVar8 = pfVar11 + 2;
          pfVar5 = pfVar4;
          do {
            pfVar2 = pfVar5 + 2;
            pfVar12 = pfVar5 + 2;
            do {
              pfVar5 = pfVar12;
              pfVar15 = pfVar2;
              if (pfVar11 < pfVar5) break;
              pfVar2 = pfVar15 + 2;
              pfVar12 = pfVar5 + 2;
            } while (*pfVar5 < *pfVar4 || *pfVar5 == *pfVar4);
            pfVar2 = pfVar8 + -4;
            do {
              pfVar12 = pfVar8;
              pfVar16 = pfVar2;
              pfVar8 = pfVar12 + -2;
              if (pfVar8 <= pfVar4) break;
              pfVar2 = pfVar16 + -2;
            } while (*pfVar4 < *pfVar8 || *pfVar4 == *pfVar8);
            if (pfVar8 < pfVar5) goto LAB_148301c3e;
            uVar1 = *(undefined8 *)pfVar5;
            *(undefined8 *)pfVar5 = *(undefined8 *)pfVar8;
            *(undefined8 *)pfVar8 = uVar1;
          } while( true );
        }
        if (pfVar4 < pfVar11) {
          do {
            pfVar9 = pfVar4;
            if (pfVar4 + 2 <= pfVar11) {
              fVar17 = *pfVar4;
              pfVar14 = pfVar4 + 2;
              do {
                fVar3 = *pfVar14;
                pfVar8 = pfVar14;
                if (*pfVar14 <= fVar17) {
                  fVar3 = fVar17;
                  pfVar8 = pfVar9;
                }
                pfVar9 = pfVar8;
                fVar17 = fVar3;
                pfVar14 = pfVar14 + 2;
              } while (pfVar14 <= pfVar11);
            }
            uVar1 = *(undefined8 *)pfVar9;
            *(undefined8 *)pfVar9 = *(undefined8 *)pfVar11;
            *(undefined8 *)pfVar11 = uVar1;
            pfVar11 = pfVar11 + -2;
          } while (pfVar4 < pfVar11);
        }
        goto LAB_148301d17;
      }
LAB_148301d2c:
      FUN_148301d39(pfVar4);
LAB_148301d17:
      plVar10 = plVar10 + -3;
    } while (&local_338 <= plVar10);
  }
  if ((local_38 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_148301c3e:
  uVar1 = *(undefined8 *)pfVar4;
  *(undefined8 *)pfVar4 = *(undefined8 *)pfVar8;
  *(undefined8 *)pfVar8 = uVar1;
  iVar13 = iVar13 + -1;
  pfVar12 = pfVar12 + -4;
  if ((longlong)pfVar16 - (longlong)pfVar9 < (longlong)pfVar14 - (longlong)pfVar15) {
    if (pfVar5 < pfVar11) {
      *plVar10 = (longlong)pfVar5;
      plVar10[1] = (longlong)pfVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    pfVar15 = pfVar4;
    if (pfVar8 <= pfVar4 + 2) goto LAB_148301d17;
  }
  else {
    if (pfVar4 + 2 < pfVar8) {
      *plVar10 = (longlong)pfVar4;
      plVar10[1] = (longlong)pfVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    pfVar4 = pfVar5;
    pfVar12 = pfVar11;
    pfVar16 = pfVar11;
    if (pfVar11 <= pfVar5) goto LAB_148301d17;
  }
  iVar6 = (int)((ulonglong)((longlong)pfVar16 - (longlong)pfVar15) >> 3);
  pfVar9 = pfVar15;
  pfVar11 = pfVar12;
  pfVar14 = pfVar16;
  if (iVar13 == 0) goto LAB_148301d2c;
  goto LAB_148301bbe;
}



// FUNCTION 148301d39 FUN_148301d39 body=311 status=ok
// SIG undefined FUN_148301d39(void)

void FUN_148301d39(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x000148301d5a:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (*(float *)(param_1 + iVar5) < *(float *)(param_1 + iVar6) ||
            *(float *)(param_1 + iVar5) == *(float *)(param_1 + iVar6))) {
          iVar5 = iVar6;
        }
        if (*(float *)(param_1 + iVar2) <= *(float *)(param_1 + iVar5) &&
            *(float *)(param_1 + iVar5) != *(float *)(param_1 + iVar2)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x000148301d5a;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(float *)(param_1 + iVar5) < *(float *)(param_1 + iVar2) ||
                *(float *)(param_1 + iVar5) == *(float *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(float *)(param_1 + iVar6) < *(float *)(param_1 + iVar7) ||
                *(float *)(param_1 + iVar6) == *(float *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 148301e70 FUN_148301e70 body=535 status=ok
// SIG undefined FUN_148301e70(void)

bool FUN_148301e70(double *param_1,double *param_2,double param_3,double param_4,double param_5)

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
  
  dVar1 = param_1[5];
  dVar2 = param_1[3];
  dVar9 = param_1[4];
  dVar6 = dVar1 * dVar2 - dVar9 * dVar9;
  dVar3 = param_1[2];
  dVar4 = *param_1;
  dVar5 = param_1[1];
  dVar11 = dVar3 * dVar9 - dVar5 * dVar1;
  dVar10 = dVar5 * dVar9 - dVar2 * dVar3;
  dVar8 = dVar3 * dVar10 + dVar4 * dVar6 + dVar5 * dVar11;
  dVar7 = ABS(dVar8);
  if (2.220446049250313e-13 < dVar7) {
    dVar8 = 1.0 / dVar8;
    dVar11 = dVar11 * dVar8;
    dVar10 = dVar10 * dVar8;
    dVar9 = (dVar5 * dVar3 - dVar9 * dVar4) * dVar8;
    *param_2 = dVar10 * param_5 + dVar6 * dVar8 * param_3 + dVar11 * param_4;
    param_2[1] = dVar9 * param_5 +
                 dVar11 * param_3 + (dVar1 * dVar4 + -dVar3 * dVar3) * dVar8 * param_4;
    param_2[2] = dVar8 * (dVar2 * dVar4 - dVar5 * dVar5) * param_5 +
                 dVar10 * param_3 + dVar9 * param_4;
  }
  return 2.220446049250313e-13 < dVar7;
}



// FUNCTION 1483020ae FUN_1483020ae body=12 status=ok
// SIG undefined FUN_1483020ae(void)

void FUN_1483020ae(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001483020b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1483020ba FUN_1483020ba body=29 status=ok
// SIG undefined FUN_1483020ba(void)

undefined8 FUN_1483020ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483020d8 FUN_1483020d8 body=335 status=ok
// SIG undefined FUN_1483020d8(void)

void FUN_1483020d8(longlong *param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 200) == '\x01') {
    FUN_1482b33ce(lVar3 + 0x10,&local_48,param_2);
    if ((local_48._1_1_ != '\x01') || (CONCAT44(uStack_3c,uStack_40) != 0)) goto LAB_14830213f;
  }
  pcVar4 = *(code **)(lVar3 + 0xe0);
  if (pcVar4 != (code *)0x0) {
    plVar9 = (longlong *)(lVar3 + 0x100);
    if (*(longlong **)(lVar3 + 0xf0) != (longlong *)0x0) {
      plVar9 = *(longlong **)(lVar3 + 0xf0);
    }
    local_48 = param_2;
    uVar7 = (**(code **)(*plVar9 + 8))();
    uVar8 = (*pcVar4)(uVar7,&local_48);
    if ((uVar8 & 2) != 0) goto LAB_14830213f;
  }
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  uVar8 = (ulonglong)(param_2 & 0x1ff);
  local_38 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
  puVar1 = (uint *)(lVar5 + uVar8 * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  (**(code **)(**(longlong **)(lVar3 + 0xd0) + 8))
            (*(longlong **)(lVar3 + 0xd0),&local_60,&local_48,param_2);
  lVar3 = *(longlong *)(lVar3 + 8);
  cVar6 = FUN_146bfed03(&local_60);
  if (cVar6 != '\0') {
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
    *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18) = local_50;
    puVar2 = (undefined4 *)(lVar5 + uVar8 * 0x18);
    *puVar2 = local_60;
    puVar2[1] = uStack_5c;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    if (*(char *)(lVar3 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
      UNLOCK();
    }
  }
LAB_14830213f:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148302230 FUN_148302230 body=168 status=ok
// SIG undefined FUN_148302230(void)

void FUN_148302230(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (-1 < (int)param_2) {
    lVar2 = *(longlong *)(*param_1 + 8);
    if (((int)param_2 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar2 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      FUN_146c13dec(lVar2,&local_38,param_2);
      lVar2 = *(longlong *)param_1[1];
      *(undefined8 *)(lVar2 + 0x10 + (ulonglong)param_2 * 0x18) = local_28;
      puVar1 = (undefined4 *)(lVar2 + (ulonglong)param_2 * 0x18);
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



// FUNCTION 1483022e2 FUN_1483022e2 body=293 status=ok
// SIG undefined FUN_1483022e2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1483022e2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  int *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  int *local_a0;
  undefined1 *local_98;
  int *local_90;
  undefined1 *local_88;
  longlong **local_80;
  int local_74 [3];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (-1 < (int)param_2) {
    lVar1 = *(longlong *)(*param_1 + 8);
    if (((int)param_2 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      local_30 = param_1[3];
      local_38 = *(undefined8 *)param_1[2];
      local_c0 = &local_30;
      local_a8 = &local_38;
      local_b8 = local_74 + 2;
      local_74[2] = 0;
      local_a0 = local_74 + 1;
      local_74[1] = 0;
      local_90 = local_74;
      local_74[0] = 0;
      local_80 = &local_c0;
      local_b0 = local_50;
      local_98 = local_68;
      local_88 = &LAB_143b02f7e;
      FUN_146c03fd0(lVar1,param_2);
      *(bool *)(*(longlong *)param_1[1] + (ulonglong)param_2) = local_74[0] == 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148302408 FUN_148302408 body=108 status=ok
// SIG undefined FUN_148302408(void)

void FUN_148302408(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *param_2;
  FUN_146c13dec(*(undefined8 *)(param_1[1] + 8),&local_38,iVar2);
  lVar3 = *(longlong *)*param_1;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = local_28;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148302475 FUN_148302475 body=22 status=ok
// SIG undefined FUN_148302475(void)

void FUN_148302475(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x50);
    return;
  }
  return;
}



// FUNCTION 14830248c FUN_14830248c body=147 status=ok
// SIG undefined FUN_14830248c(void)

void FUN_14830248c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148302520 FUN_148302520 body=62 status=ok
// SIG undefined FUN_148302520(void)

void FUN_148302520(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14830255e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 14830255e FUN_14830255e body=112 status=ok
// SIG undefined FUN_14830255e(void)

ulonglong FUN_14830255e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148302598;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_148302598:
  return param_2 & 0xffffffff;
}



// FUNCTION 1483025ce FUN_1483025ce body=42 status=ok
// SIG undefined FUN_1483025ce(void)

void FUN_1483025ce(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    param_1 = param_1 + 0x1c;
  }
  return;
}



// FUNCTION 1483025f8 FUN_1483025f8 body=143 status=ok
// SIG undefined FUN_1483025f8(void)

void FUN_1483025f8(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148302688 FUN_148302688 body=62 status=ok
// SIG undefined FUN_148302688(void)

void FUN_148302688(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483026c6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 1483026c6 FUN_1483026c6 body=104 status=ok
// SIG undefined FUN_1483026c6(void)

ulonglong FUN_1483026c6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483026fc;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_1483026fc:
  return param_2 & 0xffffffff;
}



// FUNCTION 14830272e FUN_14830272e body=95 status=ok
// SIG undefined FUN_14830272e(void)

void FUN_14830272e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14830278e FUN_14830278e body=132 status=ok
// SIG undefined FUN_14830278e(void)

void FUN_14830278e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148302813 FUN_148302813 body=569 status=ok
// SIG undefined FUN_148302813(void)

void FUN_148302813(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong *plVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328 [188];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (1 < (int)param_2) {
    memset(local_328,0,0x2f0);
    local_330 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_338 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_328[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_338;
    do {
      pfVar4 = (float *)*plVar10;
      pfVar11 = (float *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)pfVar11 - (longlong)pfVar4) >> 3);
      pfVar9 = pfVar4;
      pfVar14 = pfVar11;
      if (iVar13 != 0) {
LAB_1483028d2:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = (ulonglong)(iVar6 + 1U >> 1);
          uVar1 = *(undefined8 *)(pfVar4 + uVar7 * 2);
          *(undefined8 *)(pfVar4 + uVar7 * 2) = *(undefined8 *)pfVar4;
          *(undefined8 *)pfVar4 = uVar1;
          pfVar8 = pfVar11 + 2;
          pfVar5 = pfVar4;
          do {
            pfVar2 = pfVar5 + 2;
            pfVar12 = pfVar5 + 2;
            do {
              pfVar5 = pfVar12;
              pfVar15 = pfVar2;
              if (pfVar11 < pfVar5) break;
              pfVar2 = pfVar15 + 2;
              pfVar12 = pfVar5 + 2;
            } while (*pfVar5 < *pfVar4 || *pfVar5 == *pfVar4);
            pfVar2 = pfVar8 + -4;
            do {
              pfVar12 = pfVar8;
              pfVar16 = pfVar2;
              pfVar8 = pfVar12 + -2;
              if (pfVar8 <= pfVar4) break;
              pfVar2 = pfVar16 + -2;
            } while (*pfVar4 < *pfVar8 || *pfVar4 == *pfVar8);
            if (pfVar8 < pfVar5) goto LAB_148302952;
            uVar1 = *(undefined8 *)pfVar5;
            *(undefined8 *)pfVar5 = *(undefined8 *)pfVar8;
            *(undefined8 *)pfVar8 = uVar1;
          } while( true );
        }
        if (pfVar4 < pfVar11) {
          do {
            pfVar9 = pfVar4;
            if (pfVar4 + 2 <= pfVar11) {
              fVar17 = *pfVar4;
              pfVar14 = pfVar4 + 2;
              do {
                fVar3 = *pfVar14;
                pfVar8 = pfVar14;
                if (*pfVar14 <= fVar17) {
                  fVar3 = fVar17;
                  pfVar8 = pfVar9;
                }
                pfVar9 = pfVar8;
                fVar17 = fVar3;
                pfVar14 = pfVar14 + 2;
              } while (pfVar14 <= pfVar11);
            }
            uVar1 = *(undefined8 *)pfVar9;
            *(undefined8 *)pfVar9 = *(undefined8 *)pfVar11;
            *(undefined8 *)pfVar11 = uVar1;
            pfVar11 = pfVar11 + -2;
          } while (pfVar4 < pfVar11);
        }
        goto LAB_148302a2b;
      }
LAB_148302a40:
      FUN_148302a4d(pfVar4);
LAB_148302a2b:
      plVar10 = plVar10 + -3;
    } while (&local_338 <= plVar10);
  }
  if ((local_38 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_148302952:
  uVar1 = *(undefined8 *)pfVar4;
  *(undefined8 *)pfVar4 = *(undefined8 *)pfVar8;
  *(undefined8 *)pfVar8 = uVar1;
  iVar13 = iVar13 + -1;
  pfVar12 = pfVar12 + -4;
  if ((longlong)pfVar16 - (longlong)pfVar9 < (longlong)pfVar14 - (longlong)pfVar15) {
    if (pfVar5 < pfVar11) {
      *plVar10 = (longlong)pfVar5;
      plVar10[1] = (longlong)pfVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    pfVar15 = pfVar4;
    if (pfVar8 <= pfVar4 + 2) goto LAB_148302a2b;
  }
  else {
    if (pfVar4 + 2 < pfVar8) {
      *plVar10 = (longlong)pfVar4;
      plVar10[1] = (longlong)pfVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    pfVar4 = pfVar5;
    pfVar12 = pfVar11;
    pfVar16 = pfVar11;
    if (pfVar11 <= pfVar5) goto LAB_148302a2b;
  }
  iVar6 = (int)((ulonglong)((longlong)pfVar16 - (longlong)pfVar15) >> 3);
  pfVar9 = pfVar15;
  pfVar11 = pfVar12;
  pfVar14 = pfVar16;
  if (iVar13 == 0) goto LAB_148302a40;
  goto LAB_1483028d2;
}



// FUNCTION 148302a4d FUN_148302a4d body=311 status=ok
// SIG undefined FUN_148302a4d(void)

void FUN_148302a4d(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x000148302a6e:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (*(float *)(param_1 + iVar5) < *(float *)(param_1 + iVar6) ||
            *(float *)(param_1 + iVar5) == *(float *)(param_1 + iVar6))) {
          iVar5 = iVar6;
        }
        if (*(float *)(param_1 + iVar2) <= *(float *)(param_1 + iVar5) &&
            *(float *)(param_1 + iVar5) != *(float *)(param_1 + iVar2)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x000148302a6e;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(float *)(param_1 + iVar5) < *(float *)(param_1 + iVar2) ||
                *(float *)(param_1 + iVar5) == *(float *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(float *)(param_1 + iVar6) < *(float *)(param_1 + iVar7) ||
                *(float *)(param_1 + iVar6) == *(float *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 148302baa FUN_148302baa body=12 status=ok
// SIG undefined FUN_148302baa(void)

void FUN_148302baa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148302bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148302bb6 FUN_148302bb6 body=29 status=ok
// SIG undefined FUN_148302bb6(void)

undefined8 FUN_148302bb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148302bd4 FUN_148302bd4 body=335 status=ok
// SIG undefined FUN_148302bd4(void)

void FUN_148302bd4(longlong *param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 200) == '\x01') {
    FUN_1482b33ce(lVar3 + 0x10,&local_48,param_2);
    if ((local_48._1_1_ != '\x01') || (CONCAT44(uStack_3c,uStack_40) != 0)) goto LAB_148302c3b;
  }
  pcVar4 = *(code **)(lVar3 + 0xe0);
  if (pcVar4 != (code *)0x0) {
    plVar9 = (longlong *)(lVar3 + 0x100);
    if (*(longlong **)(lVar3 + 0xf0) != (longlong *)0x0) {
      plVar9 = *(longlong **)(lVar3 + 0xf0);
    }
    local_48 = param_2;
    uVar7 = (**(code **)(*plVar9 + 8))();
    uVar8 = (*pcVar4)(uVar7,&local_48);
    if ((uVar8 & 2) != 0) goto LAB_148302c3b;
  }
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  uVar8 = (ulonglong)(param_2 & 0x1ff);
  local_38 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
  puVar1 = (uint *)(lVar5 + uVar8 * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  (**(code **)(**(longlong **)(lVar3 + 0xd0) + 8))
            (*(longlong **)(lVar3 + 0xd0),&local_60,&local_48,param_2);
  lVar3 = *(longlong *)(lVar3 + 8);
  cVar6 = FUN_146bfed03(&local_60);
  if (cVar6 != '\0') {
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
    *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18) = local_50;
    puVar2 = (undefined4 *)(lVar5 + uVar8 * 0x18);
    *puVar2 = local_60;
    puVar2[1] = uStack_5c;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    if (*(char *)(lVar3 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
      UNLOCK();
    }
  }
LAB_148302c3b:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148302d24 FUN_148302d24 body=986 status=ok
// SIG undefined FUN_148302d24(void)

undefined8 FUN_148302d24(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  code **ppcVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auStack_2c8 [40];
  longlong local_2a0;
  longlong *local_298;
  longlong *local_290;
  code *local_288;
  undefined4 *local_280;
  undefined8 local_278;
  undefined1 local_270 [4];
  undefined4 local_26c;
  code *local_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_20c;
  longlong local_208 [2];
  longlong *local_1f8;
  longlong local_1e8 [4];
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  longlong local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168 [2];
  longlong *local_158;
  longlong local_148 [4];
  longlong local_128 [2];
  longlong *local_118;
  longlong local_108 [4];
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar5 = *(uint *)(param_3 + 1);
  local_2a0 = param_2;
  local_278 = param_1;
  if ((longlong)(int)uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_1400bac10(&local_98,uVar5);
    iVar2 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar2)) {
      local_50 = iVar2;
      FUN_144a56d22();
    }
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      puVar6 = (undefined4 *)*param_3;
      local_280 = puVar6 + *(int *)(param_3 + 1);
      local_288 = (code *)(local_2a0 + 0xb8);
      local_290 = local_1e8;
      local_298 = local_148;
      do {
        uStack_198 = *puVar6;
        local_1b8 = 0;
        local_1a8 = &PTR_LAB_149f3aae0;
        local_1a0 = local_2a0;
        local_1c8 = FUN_146be9588;
        local_268 = local_288;
        uStack_260 = CONCAT44(uStack_260._4_4_,uStack_198);
        FUN_146be94ac(local_128,&local_268,&local_1c8);
        local_178 = 0xffffffffffffffff;
        local_168[0] = 0;
        local_158 = (longlong *)0x0;
        local_1a8 = (undefined **)local_c8;
        local_1b8 = local_d8;
        uStack_1b0 = uStack_d0;
        local_1c8 = local_e8;
        uStack_1c0 = uStack_e0;
        uStack_198 = uStack_b8;
        uStack_194 = uStack_b4;
        local_190 = local_b0;
        uStack_18c = uStack_ac;
        uStack_188 = uStack_a8;
        uStack_184 = uStack_a4;
        local_180 = local_a0;
        FUN_146be971a(local_168,local_128);
        local_16c = 0;
        FUN_146bfd1f0(&local_1c8);
        local_218 = 0xffffffffffffffff;
        local_208[0] = 0;
        local_1f8 = (longlong *)0x0;
        local_248 = local_a0;
        local_268 = (code *)CONCAT44(uStack_bc,local_c0);
        uStack_260 = CONCAT44(uStack_b4,uStack_b8);
        uStack_250 = CONCAT44(uStack_a4,uStack_a8);
        local_240 = local_c0;
        uStack_23c = uStack_bc;
        uStack_238 = uStack_b8;
        uStack_234 = uStack_b4;
        local_230 = local_b0;
        uStack_22c = uStack_ac;
        uStack_228 = uStack_a8;
        uStack_224 = uStack_a4;
        local_220 = local_a0;
        FUN_146be971a(local_208,local_128);
        local_20c = 0;
        ppcVar3 = &local_268;
        while( true ) {
          FUN_146bfd1f0(ppcVar3);
          if ((((local_1c8 == local_268) && ((int)uStack_1c0 == (int)uStack_260)) &&
              ((int)uStack_1b0 == (int)uStack_250)) && (uStack_1b0._4_4_ == uStack_250._4_4_))
          break;
          local_26c = local_170;
          FUN_1447cbafe(&local_98,local_270,&local_26c,0);
          ppcVar3 = &local_1c8;
        }
        if (local_208[0] != 0) {
          plVar4 = local_1f8;
          if (local_1f8 == (longlong *)0x0) {
            plVar4 = local_290;
          }
          (**(code **)(*plVar4 + 0x10))();
        }
        if (local_168[0] != 0) {
          plVar4 = local_158;
          if (local_158 == (longlong *)0x0) {
            plVar4 = local_298;
          }
          (**(code **)(*plVar4 + 0x10))();
        }
        if (local_128[0] != 0) {
          plVar4 = local_118;
          if (local_118 == (longlong *)0x0) {
            plVar4 = local_108;
          }
          (**(code **)(*plVar4 + 0x10))();
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != local_280);
    }
  }
  uVar1 = local_278;
  FUN_140619b9c(&local_98,local_278);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14830318c FUN_14830318c body=110 status=ok
// SIG undefined FUN_14830318c(void)

void FUN_14830318c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483032de(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14830335c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1483031fc FUN_1483031fc body=112 status=ok
// SIG undefined FUN_1483031fc(void)

void FUN_1483031fc(longlong *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_148303980(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1483032de(param_1,iVar1);
    }
    *(undefined1 *)(*param_1 + (longlong)iVar1) = *param_2;
  }
  return;
}



// FUNCTION 14830326e FUN_14830326e body=111 status=ok
// SIG undefined FUN_14830326e(void)

void FUN_14830326e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483039e6(param_1,iVar1);
    }
    FUN_1483039d7((longlong)iVar1 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_148303a64(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1483032de FUN_1483032de body=124 status=ok
// SIG undefined FUN_1483032de(void)

void FUN_1483032de(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14830335c FUN_14830335c body=119 status=ok
// SIG undefined FUN_14830335c(void)

void FUN_14830335c(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 1483033dc FUN_1483033dc body=1027 status=ok
// SIG undefined FUN_1483033dc(void)

void FUN_1483033dc(longlong *param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  double *pdVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  undefined4 local_110 [6];
  double local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  uVar13 = (ulonglong)param_2;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((((int)param_2 < 0) ||
      (lVar14 = *param_1,
      *(int *)(lVar14 + 0x140) * 0x200 + *(int *)(lVar14 + 0x144) <= (int)param_2)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar14 + 0x148) + (ulonglong)(param_2 >> 9) * 8)
                                  + (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    lVar14 = *(longlong *)param_1[1];
    uVar13 = (ulonglong)(int)param_2;
  }
  else {
    local_1c8 = &local_f0;
    FUN_146c1477c(lVar14,param_2,&local_d8,&local_f8);
    dVar11 = local_c8;
    dVar10 = dStack_d0;
    dVar9 = local_d8;
    dVar8 = local_e0;
    uVar7 = uStack_e4;
    uVar6 = uStack_e8;
    uVar5 = uStack_ec;
    uVar4 = local_f0;
    if ((0.1 <= local_c8 * local_c8 + local_d8 * local_d8 + dStack_d0 * dStack_d0) &&
       (1e-08 < local_f8)) {
      lVar14 = (longlong)*(int *)((undefined8 *)param_1[2] + 1);
      if (lVar14 != 0) {
        pdVar15 = *(double **)param_1[2];
        pdVar1 = pdVar15 + lVar14 * 3;
        dVar2 = (double)CONCAT44(uStack_ec,local_f0);
        dVar3 = (double)CONCAT44(uStack_e4,uStack_e8);
        do {
          dVar17 = pdVar15[2] * dVar11 + *pdVar15 * dVar9 + dVar10 * pdVar15[1];
          uVar16 = -(ulonglong)(-dVar17 <= dVar17);
          dVar17 = (double)(~uVar16 & (ulonglong)-dVar17 | (ulonglong)dVar17 & uVar16);
          if (*(double *)param_1[3] <= dVar17 && dVar17 != *(double *)param_1[3]) {
            dVar17 = *(double *)param_1[5];
            local_118 = pdVar15[2] * dVar17 + dVar8;
            local_120 = pdVar15[1] * dVar17 + dVar3;
            local_128 = *pdVar15 * dVar17 + dVar2;
            local_148 = local_d8;
            dStack_140 = dStack_d0;
            local_138 = local_c8;
            local_168 = local_f0;
            uStack_164 = uStack_ec;
            uStack_160 = uStack_e8;
            uStack_15c = uStack_e4;
            local_158 = local_e0;
            local_1c8 = local_110;
            uVar12 = FUN_1483037e0(param_1[4],&local_168,&local_148,&local_128);
            if (uVar12 == param_2) goto LAB_1483036ef;
          }
          pdVar15 = pdVar15 + 3;
        } while (pdVar15 != pdVar1);
      }
      pdVar1 = (double *)param_1[6];
      dVar2 = *(double *)param_1[5] * 1.01;
      local_170 = (dVar11 + pdVar1[2]) * dVar2 + dVar8;
      local_178 = (dVar10 + pdVar1[1]) * dVar2 + (double)CONCAT44(uVar7,uVar6);
      local_180 = dVar2 * (dVar9 + *pdVar1) + (double)CONCAT44(uVar5,uVar4);
      local_198 = local_d8;
      dStack_190 = dStack_d0;
      local_188 = local_c8;
      local_1b8 = local_f0;
      uStack_1b4 = uStack_ec;
      uStack_1b0 = uStack_e8;
      uStack_1ac = uStack_e4;
      local_1a8 = local_e0;
      local_1c8 = local_110;
      uVar12 = FUN_1483037e0(param_1[4]);
      if (uVar12 == param_2) {
LAB_1483036ef:
        *(undefined1 *)(*(longlong *)param_1[1] + uVar13) = 1;
      }
      goto LAB_148303496;
    }
    lVar14 = *(longlong *)param_1[1];
  }
  *(undefined1 *)(lVar14 + uVar13) = 2;
LAB_148303496:
  if ((local_c0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483037e0 FUN_1483037e0 body=415 status=ok
// SIG undefined FUN_1483037e0(void)

undefined4
FUN_1483037e0(undefined8 *param_1,double *param_2,double *param_3,double *param_4,undefined8 param_5
             )

{
  longlong *plVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 *local_120;
  undefined1 local_118 [12];
  undefined4 local_10c;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined1 local_98 [16];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar7 = param_2[2] - param_4[2];
  dVar3 = param_2[1] - param_4[1];
  dVar5 = *param_2 - *param_4;
  dVar4 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar3 * dVar3);
  dVar6 = 0.0;
  if (dVar4 <= 0.0) {
    dVar4 = 1.0;
    dVar3 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar6 = 1.0 / dVar4;
    dVar5 = dVar5 * dVar6;
    dVar3 = dVar3 * dVar6;
    dVar6 = dVar7 * dVar6;
    dVar4 = dVar4 + 1.0;
  }
  if ((*(char *)*param_1 != '\0') ||
     (uVar2 = 0xffffffff, param_3[2] * dVar6 + *param_3 * dVar5 + param_3[1] * dVar3 <= -0.001)) {
    local_f8 = param_4[2];
    local_108 = *param_4;
    dStack_100 = param_4[1];
    plVar1 = (longlong *)param_1[1];
    local_d8 = 0;
    local_c8 = 0;
    local_f0 = dVar5;
    local_e8 = dVar3;
    local_e0 = dVar6;
    FUN_146bee698(local_98,dVar4);
    local_128 = param_5;
    local_120 = local_98;
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_108,local_118,&local_10c);
    uVar2 = local_10c;
    if (local_88 != 0) {
      if (local_78 == (longlong *)0x0) {
        local_78 = local_68;
      }
      (**(code **)(*local_78 + 0x10))();
      uVar2 = local_10c;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148303980 FUN_148303980 body=87 status=ok
// SIG undefined FUN_148303980(void)

void FUN_148303980(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e(param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 1483039d7 FUN_1483039d7 body=15 status=ok
// SIG undefined FUN_1483039d7(void)

void FUN_1483039d7(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2);
    return;
  }
  return;
}



// FUNCTION 1483039e6 FUN_1483039e6 body=124 status=ok
// SIG undefined FUN_1483039e6(void)

void FUN_1483039e6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148303a64 FUN_148303a64 body=119 status=ok
// SIG undefined FUN_148303a64(void)

void FUN_148303a64(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 148303adc FUN_148303adc body=307 status=ok
// SIG undefined FUN_148303adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_148303adc(int *param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46748) {
    in_XMM0._0_8_ = FUN_144b3d300(&DAT_14cb46748);
    in_XMM0._8_8_ = extraout_XMM0_Qb;
    if (DAT_14cb46748 == -1) {
      _DAT_14cb46740 = 1.618033988749895;
      in_XMM0._0_8_ = _Init_thread_footer(&DAT_14cb46748);
      in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    }
  }
  dVar4 = (double)param_3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar4 / _DAT_14cb46740;
  auVar5 = roundsd(in_XMM0,auVar5,9);
  dVar1 = (dVar4 / _DAT_14cb46740 - auVar5._0_8_) * 6.283185307179586;
  dVar2 = cos(dVar1);
  dVar3 = sin(dVar1);
  dVar1 = 1.0 - (dVar4 + dVar4 + 1.0) / (double)*param_1;
  dVar4 = acos(dVar1);
  dVar4 = sin(dVar4);
  *param_2 = dVar2 * dVar4;
  param_2[1] = dVar3 * dVar4;
  param_2[2] = dVar1;
  return param_2;
}



// FUNCTION 148303c18 FUN_148303c18 body=2664 status=ok
// SIG undefined FUN_148303c18(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148303c18(longlong *param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  char cVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  double local_2b0;
  ulonglong local_2a8;
  int local_2a0;
  int local_29c;
  longlong local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double dStack_240;
  longlong local_238;
  ulonglong uStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_210;
  double local_208;
  double local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  uint local_158;
  undefined4 uStack_154;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130 [8];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if ((-1 < (int)param_2) &&
     (lVar12 = *param_1, (int)param_2 < *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144))
     ) {
    uVar14 = (ulonglong)(param_2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar12 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           uVar14 * 2) - 1U) < 0xfffe) {
      cVar19 = *(char *)param_1[1];
      uVar17 = 0;
      if (cVar19 == '\x01') {
        uVar17 = FUN_146bc96d4(lVar12,param_2);
        if (((int)uVar17 < 0) || ((int)((longlong *)param_1[2])[1] <= (int)uVar17)) {
          cVar19 = '\0';
        }
        else if ((*(char *)(*(longlong *)param_1[2] + (ulonglong)uVar17) != '\0') ||
                (cVar19 = '\x01', (*(byte *)(*(longlong *)param_1[3] + (ulonglong)uVar17) & 1) != 0)
                ) goto LAB_148303d18;
      }
      uVar15 = (ulonglong)param_2;
      if ((*(char *)(*(longlong *)param_1[4] + uVar15) == '\0') &&
         ((*(byte *)(*(longlong *)param_1[5] + uVar15) & 1) == 0)) {
        lVar12 = *param_1;
        lVar18 = *(longlong *)(*(longlong *)(lVar12 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
        uVar10 = *(uint *)(lVar18 + uVar14 * 0xc);
        lVar3 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        uVar16 = (ulonglong)uVar10 & 0x1ff;
        local_168 = *(double *)(lVar3 + 0x10 + uVar16 * 0x18);
        pdVar1 = (double *)(lVar3 + uVar16 * 0x18);
        local_178 = *pdVar1;
        dStack_170 = pdVar1[1];
        uVar10 = *(uint *)(lVar18 + 4 + uVar14 * 0xc);
        lVar3 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        uVar16 = (ulonglong)uVar10 & 0x1ff;
        local_188 = *(double *)(lVar3 + 0x10 + uVar16 * 0x18);
        pdVar1 = (double *)(lVar3 + uVar16 * 0x18);
        local_198 = *pdVar1;
        dStack_190 = pdVar1[1];
        uVar10 = *(uint *)(lVar18 + 8 + uVar14 * 0xc);
        lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        uVar14 = (ulonglong)uVar10 & 0x1ff;
        local_1a8 = *(double *)(lVar12 + 0x10 + uVar14 * 0x18);
        pdVar1 = (double *)(lVar12 + uVar14 * 0x18);
        local_1b8 = *pdVar1;
        dStack_1b0 = pdVar1[1];
        dVar4 = local_168 + local_188 + local_1a8;
        dVar5 = dStack_170 + dStack_190 + dStack_1b0;
        dVar6 = local_178 + local_198 + local_1b8;
        local_2b8 = &local_1c0;
        FUN_146b9cae0(&local_1d8,&local_178,&local_198,&local_1b8);
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0x3ff0000000000000;
        local_130[3] = (double)DAT_14c8463c8;
        local_130[1] = (double)DAT_14c8463b8;
        local_130[2] = (double)DAT_14c8463c0;
        local_210 = dVar6 * 0.3333333333333333;
        local_208 = dVar5 * 0.3333333333333333;
        local_200 = dVar4 * 0.3333333333333333;
        FUN_146bfb7f2(&local_1f8,local_130 + 1,&local_1d8);
        FUN_146bca7ae(&local_210,&local_140,&local_1b8,2);
        FUN_146bca7ae(&local_210,&local_158,&local_198,2);
        FUN_146bca7ae(&local_210,&local_228,&local_178,2);
        local_130[1] = local_228;
        local_130[2] = uStack_220;
        local_130[3] = (double)CONCAT44(uStack_154,local_158);
        local_130[4] = dStack_150;
        local_130[5] = local_140;
        local_130[6] = dStack_138;
        local_228 = local_228 + local_130[3];
        lVar12 = 8;
        do {
          *(double *)((longlong)local_130 + lVar12) =
               *(double *)((longlong)local_130 + lVar12) * 0.999 +
               (local_228 + local_140) * 0.3333333333333333 * 0.0010000000000000009;
          *(double *)((longlong)local_130 + lVar12 + 8U) =
               *(double *)((longlong)local_130 + lVar12 + 8U) * 0.999 +
               (uStack_220 + dStack_150 + dStack_138) * 0.3333333333333333 * 0.0010000000000000009;
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != 0x38);
        iVar9 = (int)(local_1c0 /
                     (*(double *)param_1[6] * 3.141592653589793 * *(double *)param_1[6]));
        local_29c = 8;
        if (8 < iVar9) {
          local_29c = iVar9;
        }
        dVar4 = local_130[4] - local_130[2];
        dVar5 = local_130[3] - local_130[1];
        dVar6 = local_130[6] - local_130[2];
        dVar7 = local_130[5] - local_130[1];
        local_228 = 0.0;
        uStack_220 = 0.0;
        local_238 = 0;
        uStack_230 = 0;
        local_2a8 = 0;
        local_298 = (longlong)(int)uVar17;
        iVar9 = 0;
        uVar17 = param_2;
        while( true ) {
          if (iVar9 == 10000) break;
          dVar22 = (double)((float)(uVar17 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0);
          uVar17 = uVar17 * -0x4b9b4d07 + 0x9d6f2492;
          dVar21 = (double)((float)(uVar17 >> 9 | 0x3f800000) + -1.0);
          dVar23 = dVar22 + dVar21;
          if (1.0 < dVar23) {
            dVar21 = 1.0 - dVar21;
          }
          uVar14 = -(ulonglong)(1.0 < dVar23);
          dVar22 = (double)(~uVar14 & (ulonglong)dVar22 | (ulonglong)(1.0 - dVar22) & uVar14);
          dStack_240 = dVar6 * dVar21 + dVar4 * dVar22 + local_130[2];
          local_248 = dVar21 * dVar7 + dVar22 * dVar5 + local_130[1];
          cVar8 = FUN_146bd16fa(local_130 + 1,local_130 + 3,local_130 + 5,&local_248);
          if (cVar8 != '\0') {
            local_140 = local_248;
            dStack_138 = dStack_240;
            local_130[0] = 0.0;
            FUN_146bed047(&local_158,&local_1f8,&local_140);
            local_2b0 = local_148 + local_200;
            dVar22 = dStack_150 + local_208;
            dVar21 = (double)CONCAT44(uStack_154,local_158) + local_210;
            bVar20 = (longlong)uStack_220 < 0;
            uStack_220 = (double)((ulonglong)uStack_220 & 0xffffffff00000000);
            if (bVar20) {
              FUN_14481578e(&local_228);
            }
            iVar11 = *(int *)param_1[7];
            if (0 < iVar11) {
              lVar18 = 0x10;
              lVar12 = 0;
              do {
                lVar3 = *(longlong *)param_1[8];
                dVar23 = *(double *)(lVar3 + -0x10 + lVar18);
                dVar2 = *(double *)(lVar3 + -8 + lVar18);
                dVar24 = local_1c8 * *(double *)(lVar3 + lVar18) +
                         local_1d8 * dVar23 + dStack_1d0 * dVar2;
                uVar14 = -(ulonglong)(-dVar24 <= dVar24);
                if (*(double *)param_1[9] <=
                    (double)(~uVar14 & (ulonglong)-dVar24 | (ulonglong)dVar24 & uVar14)) {
                  dVar24 = *(double *)param_1[10] + *(double *)param_1[10];
                  local_250 = *(double *)(lVar3 + lVar18) * dVar24 + local_2b0;
                  local_258 = dVar2 * dVar24 + dVar22;
                  local_260 = dVar23 * dVar24 + dVar21;
                  local_278 = local_1d8;
                  dStack_270 = dStack_1d0;
                  local_268 = local_1c8;
                  local_280 = local_2b0;
                  local_2b8 = &local_140;
                  local_290 = dVar21;
                  local_288 = dVar22;
                  local_158 = FUN_1483037e0(param_1[0xb],&local_290,&local_278,&local_260);
                  if ((local_158 != 0xffffffff) &&
                     (*(char *)(*(longlong *)param_1[4] + (longlong)(int)local_158) == '\0')) {
                    if (local_158 == param_2) {
                      lVar12 = (longlong)(int)uStack_220;
                      uVar13 = (int)uStack_220 + 1;
                      uStack_220 = (double)CONCAT44(uStack_220._4_4_,uVar13);
                      uVar10 = param_2;
                      if (uStack_220._4_4_ < uVar13) {
                        FUN_1446f48e2(&local_228);
                        uVar10 = local_158;
                      }
                      *(uint *)((longlong)local_228 + lVar12 * 4) = uVar10;
                      break;
                    }
                    dVar23 = local_140;
                    if (dStack_138 <= local_140) {
                      dVar23 = dStack_138;
                    }
                    if (local_130[0] <= dVar23) {
                      dVar23 = local_130[0];
                    }
                    if (0.001 < dVar23) {
                      dVar23 = local_140;
                      if (local_140 <= dStack_138) {
                        dVar23 = dStack_138;
                      }
                      if (dVar23 <= local_130[0]) {
                        dVar23 = local_130[0];
                      }
                      if (dVar23 < 0.999) {
                        FUN_1449e3bb0(&local_228);
                      }
                    }
                  }
                  iVar11 = *(int *)param_1[7];
                }
                lVar12 = lVar12 + 1;
                lVar18 = lVar18 + 0x18;
              } while (lVar12 < iVar11);
            }
            if ((longlong)(int)uStack_220 != 0) {
              lVar12 = 0;
              do {
                LOCK();
                *(undefined1 *)
                 (*(longlong *)param_1[5] + (longlong)*(int *)((longlong)local_228 + lVar12)) = 1;
                UNLOCK();
                lVar12 = lVar12 + 4;
              } while ((longlong)(int)uStack_220 << 2 != lVar12);
            }
            if (*(char *)param_1[1] != '\0') {
              if ((0x13 < (int)uStack_230) &&
                 (bVar20 = (longlong)uStack_230 < 0, uStack_230 = uStack_230 & 0xffffffff00000000,
                 bVar20)) {
                FUN_14481578e(&local_238,0);
              }
              lVar12 = (longlong)(int)uStack_220;
              if (lVar12 != 0) {
                local_2b0 = local_228;
                lVar18 = 0;
                do {
                  uVar10 = FUN_146bc96d4(*param_1,*(undefined4 *)((longlong)local_2b0 + lVar18));
                  local_140 = (double)CONCAT44(local_140._4_4_,uVar10);
                  if (((-1 < (int)uVar10) && ((int)uVar10 < (int)((longlong *)param_1[2])[1])) &&
                     (*(char *)(*(longlong *)param_1[2] + (ulonglong)uVar10) == '\0')) {
                    local_2a0 = (int)uStack_230;
                    iVar11 = FUN_1449e3bb0(&local_238,&local_140);
                    if (local_2a0 == iVar11) {
                      *(undefined1 *)(*(longlong *)param_1[3] + (longlong)local_140._0_4_) = 1;
                    }
                  }
                  lVar18 = lVar18 + 4;
                } while (lVar12 * 4 != lVar18);
              }
            }
            if (((*(byte *)(*(longlong *)param_1[5] + uVar15) & 1) != 0) ||
               ((local_2a8 = (ulonglong)((int)local_2a8 + 1), cVar19 != '\0' &&
                ((*(byte *)(*(longlong *)param_1[3] + local_298) & 1) != 0)))) break;
          }
          iVar9 = iVar9 + 1;
          if (local_29c <= (int)local_2a8) break;
        }
        if (local_238 != 0) {
          FUN_1400020a8();
        }
        if (local_228 != 0.0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_148303d18:
  if ((local_f0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483046a0 FUN_1483046a0 body=618 status=ok
// SIG undefined FUN_1483046a0(void)

void FUN_1483046a0(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  ulonglong uVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  double local_98;
  double local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  plVar9 = *(longlong **)(param_1 + 8);
  iVar7 = (int)plVar9[3];
  if (iVar7 < 0) {
LAB_148304903:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 == 0) {
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    FUN_14481578e(&local_78);
    plVar9 = *(longlong **)(param_1 + 8);
    iVar7 = (int)plVar9[3];
    local_88 = 0;
    uStack_80 = 0;
    if (iVar7 < 0) goto LAB_148304903;
    if (iVar7 != 0) {
      FUN_1447a8aa0(&local_88);
      plVar9 = *(longlong **)(param_1 + 8);
    }
  }
  lVar10 = *plVar9;
  if (0 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144)) {
    uVar8 = 0;
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar10 + 0x148) + (ulonglong)(uVar8 >> 9) * 8) +
                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe) {
        local_a0 = uVar8;
        cVar4 = (*(code *)plVar9[1])(plVar9[2],&local_a0);
        plVar9 = *(longlong **)(param_1 + 8);
        if (cVar4 == '\0') {
          FUN_14830490c(&local_a0,plVar9,uVar8);
          dVar2 = local_90 * local_90 +
                  (double)CONCAT44(uStack_9c,local_a0) * (double)CONCAT44(uStack_9c,local_a0) +
                  local_98 * local_98;
          local_b8 = dVar2;
          sVar5 = _dtest(&local_b8);
          if ((sVar5 != 2) &&
             (local_b8 = dVar2, sVar5 = _dtest(&local_b8), uVar3 = uStack_70, sVar5 < 1)) {
            lVar10 = (longlong)(int)uStack_70;
            uVar6 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
            if (uStack_70._4_4_ < uVar6) {
              FUN_1446f48e2(&local_78,uVar3 & 0xffffffff);
            }
            *(uint *)(local_78 + lVar10 * 4) = uVar8;
            FUN_14830490c(&local_b8,*(undefined8 *)(param_1 + 8),uVar8);
            uVar3 = uStack_80;
            lVar10 = (longlong)(int)uStack_80;
            uVar6 = (int)uStack_80 + 1;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
            if (uStack_80._4_4_ < uVar6) {
              FUN_1403e3958(&local_88,uVar3 & 0xffffffff);
            }
            *(undefined8 *)(local_88 + 0x10 + lVar10 * 0x18) = local_a8;
            pdVar1 = (double *)(local_88 + lVar10 * 0x18);
            *pdVar1 = local_b8;
            pdVar1[1] = dStack_b0;
          }
          plVar9 = *(longlong **)(param_1 + 8);
        }
      }
      uVar8 = uVar8 + 1;
      lVar10 = *plVar9;
    } while ((int)uVar8 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144));
  }
  FUN_1483049da(param_1,&local_78,&local_88,uStack_70 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14830490c FUN_14830490c body=206 status=ok
// SIG undefined FUN_14830490c(void)

void FUN_14830490c(double *param_1,longlong *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  lVar9 = *(longlong *)(*param_2 + 0x10);
  lVar10 = *(longlong *)(*(longlong *)(*param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar13 = (ulonglong)(param_3 & 0x1ff);
  uVar7 = *(uint *)(lVar10 + uVar13 * 0xc);
  uVar8 = *(uint *)(lVar10 + 4 + uVar13 * 0xc);
  lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar14 = (ulonglong)uVar7 & 0x1ff;
  dVar1 = *(double *)(lVar11 + 8 + uVar14 * 0x18);
  dVar2 = *(double *)(lVar11 + 0x10 + uVar14 * 0x18);
  lVar12 = *(longlong *)(lVar9 + (ulonglong)(uVar8 >> 9) * 8);
  uVar15 = (ulonglong)uVar8 & 0x1ff;
  uVar7 = *(uint *)(lVar10 + 8 + uVar13 * 0xc);
  lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar13 = (ulonglong)uVar7 & 0x1ff;
  dVar3 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
  dVar4 = *(double *)(lVar9 + 0x10 + uVar13 * 0x18);
  dVar5 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
  dVar6 = *(double *)(lVar9 + 8 + uVar13 * 0x18);
  *param_1 = (*(double *)(lVar11 + uVar14 * 0x18) + *(double *)(lVar12 + uVar15 * 0x18) +
             *(double *)(lVar9 + uVar13 * 0x18)) * 0.3333333333333333;
  param_1[1] = (dVar1 + dVar5 + dVar6) * 0.3333333333333333;
  param_1[2] = (dVar2 + dVar3 + dVar4) * 0.3333333333333333;
  return;
}



// FUNCTION 1483049da FUN_1483049da body=773 status=ok
// SIG undefined FUN_1483049da(void)

void FUN_1483049da(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  undefined8 *local_1c0;
  longlong local_1b0;
  int local_1a4;
  longlong local_1a0;
  longlong local_198;
  int local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  longlong local_110;
  longlong local_f8;
  longlong local_e0;
  longlong local_c8;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_148304ce0(&local_b0);
  FUN_148304ce0(local_118);
  local_1c0 = &local_148;
  local_148 = 0x7fefffffffffffff;
  local_140 = 0x7fefffffffffffff;
  local_138 = 0x7fefffffffffffff;
  local_130 = 0xffefffffffffffff;
  local_128 = 0xffefffffffffffff;
  local_120 = 0xffefffffffffffff;
  local_1d8 = *(undefined4 *)(param_1 + 0x18);
  local_1e0 = 0;
  uVar8 = 0;
  local_1e8 = param_4;
  local_1d0 = &local_b0;
  local_1c8 = local_118;
  local_1a4 = FUN_148304d1a(param_1,param_2,param_3,0);
  *(undefined8 *)(param_1 + 0x68) = local_b0;
  FUN_146bedfa8(param_1 + 0x70,local_a8);
  *(undefined8 *)(param_1 + 0x80) = local_98;
  FUN_146bee054(param_1 + 0x88,local_90);
  *(undefined8 *)(param_1 + 0x98) = local_80;
  FUN_146bee054(param_1 + 0xa0,local_78);
  *(undefined8 *)(param_1 + 0xb0) = local_68;
  FUN_146bedfa8(param_1 + 0xb8,local_60);
  *(int *)(param_1 + 200) = local_4c;
  local_1b0 = param_1;
  if (0 < local_b8) {
    local_198 = param_1 + 0x68;
    local_1a0 = param_1 + 0x80;
    do {
      uVar9 = (ulonglong)(uVar8 >> 9);
      lVar5 = *(longlong *)(local_f8 + uVar9 * 8);
      lVar6 = (ulonglong)((uVar8 & 0x1ff) * 8) * 3;
      piVar2 = (int *)(lVar5 + lVar6);
      local_168 = *piVar2;
      iStack_164 = piVar2[1];
      iStack_160 = piVar2[2];
      iStack_15c = piVar2[3];
      local_158 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      iVar1 = local_50 + uVar8;
      FUN_146bedee6(local_1a0,&local_168,iVar1);
      lVar5 = *(longlong *)(local_e0 + uVar9 * 8);
      puVar3 = (undefined4 *)(lVar5 + lVar6);
      local_188 = *puVar3;
      uStack_184 = puVar3[1];
      uStack_180 = puVar3[2];
      uStack_17c = puVar3[3];
      local_178 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      FUN_146bedee6(param_1 + 0x98,&local_188,iVar1);
      local_18c = *(int *)(*(longlong *)(local_110 + uVar9 * 8) + (ulonglong)(uVar8 & 0x1ff) * 4) +
                  local_4c;
      FUN_146bedf4e(local_198,&local_18c,iVar1);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b8);
  }
  if (0 < local_b4) {
    lVar5 = local_1b0 + 0xb0;
    uVar8 = 0;
    do {
      uVar4 = *(uint *)(*(longlong *)(local_c8 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
      uVar7 = ~uVar4;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4 + local_50;
      }
      local_168 = uVar7 + 1;
      FUN_146bedf4e(lVar5,&local_168,local_4c + uVar8);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b4);
  }
  *(int *)(local_1b0 + 0xcc) = local_50 + local_1a4;
  FUN_1483054be(local_118);
  FUN_1483054be(&local_b0);
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148304ce0 FUN_148304ce0 body=57 status=ok
// SIG undefined FUN_148304ce0(void)

longlong FUN_148304ce0(longlong param_1)

{
  FUN_141040b84();
  FUN_141040be6(param_1 + 0x18);
  FUN_141040be6(param_1 + 0x30);
  FUN_141040b84(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 148304d1a FUN_148304d1a body=1954 status=ok
// SIG undefined FUN_148304d1a(void)

uint FUN_148304d1a(longlong param_1,longlong *param_2,longlong *param_3,int param_4,uint param_5,
                  int param_6,int param_7,longlong param_8,longlong param_9,double *param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_138 [32];
  int local_118;
  int local_110;
  int local_108;
  longlong local_100;
  longlong local_f8;
  double *local_f0;
  int local_dc;
  ulonglong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  pdVar8 = param_10;
  lVar7 = param_8;
  uVar23 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((int)param_2[1] < 1) {
    uVar27 = SUB84(DAT_14c8464f0,0);
    uVar28 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    dVar30 = DAT_14c8464f0 + 0.0;
    dVar31 = DAT_14c8464e8 + 0.0;
    dVar25 = DAT_14c8464e0 + 0.0;
    dVar26 = DAT_14c8464e8;
    dVar29 = DAT_14c8464e0;
  }
  else {
    dVar25 = -1.79769313486232e+308;
    uVar27 = 0xffffffff;
    uVar28 = 0x7fefffff;
    dVar31 = -1.79769313486232e+308;
    dVar30 = -1.79769313486232e+308;
    dVar26 = 1.79769313486232e+308;
    dVar29 = 1.79769313486232e+308;
  }
  *param_10 = dVar29;
  param_10[1] = dVar26;
  param_10[2] = (double)CONCAT44(uVar28,uVar27);
  param_10[3] = dVar25;
  param_10[4] = dVar31;
  param_10[5] = dVar30;
  local_c8 = param_1;
  if (param_7 < (int)param_5) {
    local_98 = (double)CONCAT44(local_98._4_4_,param_6);
    pcVar3 = *(code **)(param_1 + 0x20);
    plVar12 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_1 + 0x30);
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    iVar10 = (*pcVar3)(uVar11,&local_98,pdVar8);
    lVar9 = local_c8;
    pdVar8 = param_10;
    lVar7 = param_9;
    if ((int)uVar23 < 1) {
      uVar27 = 0xffffffff;
      uVar28 = 0x7fefffff;
      dVar26 = -1.79769313486232e+308;
    }
    else {
      dVar29 = 1.79769313486232e+308;
      lVar18 = 0;
      dVar25 = -1.79769313486232e+308;
      do {
        dVar26 = *(double *)((longlong)iVar10 * 8 + *param_3 + (longlong)param_4 * 0x18 + lVar18);
        uVar27 = SUB84(dVar26,0);
        uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (dVar29 <= dVar26) {
          uVar27 = SUB84(dVar29,0);
          uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        }
        if (dVar26 <= dVar25) {
          dVar26 = dVar25;
        }
        lVar18 = lVar18 + 0x18;
        dVar29 = (double)CONCAT44(uVar28,uVar27);
        dVar25 = dVar26;
      } while ((ulonglong)uVar23 * 0x18 != lVar18);
    }
    if (dVar26 - (double)CONCAT44(uVar28,uVar27) <= 1e-08) {
      uVar22 = (ulonglong)(uint)((int)uVar23 / 2);
    }
    else {
      uVar22 = 0;
      if (1 < (int)uVar23) {
        dVar26 = (dVar26 + (double)CONCAT44(uVar28,uVar27)) * 0.5;
        iVar19 = uVar23 - 1;
        lVar13 = (longlong)param_4;
        local_c0 = lVar13 * 4;
        lVar18 = lVar13 * 0x18;
        uVar22 = 0;
        while( true ) {
          lVar15 = *param_3;
          iVar21 = (int)uVar22;
          uVar22 = (longlong)iVar21 - 1;
          puVar2 = (undefined8 *)((lVar13 + iVar21) * 0x18 + -0x18 + lVar15);
          do {
            puVar24 = puVar2;
            uVar22 = uVar22 + 1;
            puVar2 = puVar24 + 3;
          } while ((double)puVar24[(longlong)iVar10 + 3] <= dVar26);
          lVar20 = (longlong)iVar19;
          lVar17 = 0;
          lVar14 = lVar20 * 0x18;
          do {
            lVar16 = lVar14;
            lVar17 = lVar17 + -1;
            lVar14 = lVar16 + -0x18;
          } while (dVar26 < *(double *)(lVar18 + (longlong)iVar10 * 8 + lVar15 + lVar16));
          if (lVar20 + lVar17 + 1 <= (longlong)uVar22) break;
          lVar15 = lVar15 + lVar18 + lVar16 + -0x18;
          iVar19 = iVar19 + 1 + (int)lVar17;
          uVar11 = puVar24[5];
          uVar4 = *puVar2;
          uVar5 = puVar24[4];
          uVar6 = *(undefined8 *)(lVar15 + 0x20);
          *puVar2 = *(undefined8 *)(lVar15 + 0x18);
          puVar24[4] = uVar6;
          puVar24[5] = *(undefined8 *)(lVar15 + 0x28);
          lVar15 = *param_3;
          *(undefined8 *)(lVar16 + 0x10 + lVar15 + lVar18) = uVar11;
          puVar2 = (undefined8 *)(lVar16 + lVar15 + lVar18);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          lVar14 = local_c0 + *param_2;
          uVar27 = *(undefined4 *)(lVar14 + uVar22 * 4);
          lVar15 = lVar13 * 4 + 4 + lVar20 * 4;
          *(undefined4 *)(lVar14 + uVar22 * 4) = *(undefined4 *)(*param_2 + lVar15 + lVar17 * 4);
          *(undefined4 *)(lVar15 + *param_2 + lVar17 * 4) = uVar27;
        }
      }
    }
    iVar19 = (int)uVar22;
    local_d8 = (ulonglong)(uVar23 - iVar19);
    local_98 = 1.79769313486232e+308;
    dStack_90 = 1.79769313486232e+308;
    local_88 = 1.79769313486232e+308;
    local_80 = -1.79769313486232e+308;
    local_78 = -1.79769313486232e+308;
    local_70 = -1.79769313486232e+308;
    iVar10 = param_6 + 1;
    local_f0 = param_10;
    local_f8 = param_9;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = iVar19;
    local_110 = iVar10;
    local_dc = param_4;
    local_d0 = param_2;
    local_9c = FUN_148304d1a(local_c8,param_2,param_3,param_4);
    local_f0 = &local_98;
    local_f8 = lVar7;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = (int)local_d8;
    local_110 = iVar10;
    local_a0 = FUN_148304d1a(lVar9,param_2,param_3,iVar19 + param_4);
    dVar26 = pdVar8[1];
    uVar27 = SUB84(dVar26,0);
    uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
    dVar29 = *pdVar8;
    if (local_98 <= *pdVar8) {
      dVar29 = local_98;
    }
    *pdVar8 = dVar29;
    if (dStack_90 <= dVar26) {
      uVar27 = SUB84(dStack_90,0);
      uVar28 = (undefined4)((ulonglong)dStack_90 >> 0x20);
    }
    pdVar8[1] = (double)CONCAT44(uVar28,uVar27);
    dVar26 = pdVar8[2];
    if (local_88 <= pdVar8[2]) {
      dVar26 = local_88;
    }
    pdVar8[2] = dVar26;
    dVar26 = pdVar8[3];
    if (pdVar8[3] <= local_80) {
      dVar26 = local_80;
    }
    pdVar8[3] = dVar26;
    dVar26 = pdVar8[4];
    if (pdVar8[4] <= local_78) {
      dVar26 = local_78;
    }
    pdVar8[4] = dVar26;
    dVar26 = pdVar8[5];
    if (pdVar8[5] <= local_70) {
      dVar26 = local_70;
    }
    pdVar8[5] = dVar26;
    uVar23 = *(uint *)(lVar7 + 0x60);
    *(uint *)(lVar7 + 0x60) = uVar23 + 1;
    FUN_146bedf4e(lVar7,lVar7 + 100,uVar23);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_9c);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_a0);
    local_a8 = (pdVar8[2] + pdVar8[5]) * 0.5;
    local_b0 = (pdVar8[1] + pdVar8[4]) * 0.5;
    local_b8 = (*pdVar8 + pdVar8[3]) * 0.5;
    FUN_146bedee6(lVar7 + 0x18,&local_b8,uVar23);
    local_a8 = (pdVar8[5] - pdVar8[2]) * 0.5;
    local_b0 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_b8 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_b8,uVar23);
  }
  else {
    local_d0 = (longlong *)(ulonglong)*(uint *)(param_8 + 0x60);
    *(uint *)(param_8 + 0x60) = *(uint *)(param_8 + 0x60) + 1;
    piVar1 = (int *)(param_8 + 100);
    FUN_146bedf4e(param_8,piVar1);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&param_5);
    lVar9 = local_c8;
    if ((int)param_5 < 1) {
      dVar26 = pdVar8[2];
      dVar29 = pdVar8[5];
      dVar25 = *pdVar8;
      dVar30 = pdVar8[1];
      dVar31 = pdVar8[4];
      uVar27 = SUB84(pdVar8[3],0);
      uVar28 = (undefined4)((ulonglong)pdVar8[3] >> 0x20);
    }
    else {
      lVar13 = 0;
      lVar18 = 0;
      do {
        *piVar1 = *piVar1 + 1;
        FUN_146bedf4e(lVar7 + 0x48,*param_2 + (longlong)param_4 * 4 + lVar13);
        FUN_148305536(&local_98,*(undefined8 *)(lVar9 + 8),
                      *(undefined4 *)(*param_2 + (longlong)param_4 * 4 + lVar18 * 4));
        dVar25 = *pdVar8;
        if (local_98 <= *pdVar8) {
          dVar25 = local_98;
        }
        *pdVar8 = dVar25;
        dVar30 = pdVar8[1];
        if (dStack_90 <= pdVar8[1]) {
          dVar30 = dStack_90;
        }
        pdVar8[1] = dVar30;
        dVar26 = pdVar8[2];
        if (local_88 <= pdVar8[2]) {
          dVar26 = local_88;
        }
        pdVar8[2] = dVar26;
        dVar29 = pdVar8[3];
        uVar27 = SUB84(dVar29,0);
        uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        if (dVar29 <= local_80) {
          uVar27 = SUB84(local_80,0);
          uVar28 = (undefined4)((ulonglong)local_80 >> 0x20);
        }
        pdVar8[3] = (double)CONCAT44(uVar28,uVar27);
        dVar31 = pdVar8[4];
        if (pdVar8[4] <= local_78) {
          dVar31 = local_78;
        }
        pdVar8[4] = dVar31;
        dVar29 = pdVar8[5];
        if (pdVar8[5] <= local_70) {
          dVar29 = local_70;
        }
        pdVar8[5] = dVar29;
        lVar18 = lVar18 + 1;
        lVar13 = lVar13 + 4;
      } while (lVar18 < (int)param_5);
    }
    plVar12 = local_d0;
    lVar7 = param_8;
    local_88 = (dVar29 + dVar26) * 0.5;
    dStack_90 = (dVar31 + dVar30) * 0.5;
    local_98 = ((double)CONCAT44(uVar28,uVar27) + dVar25) * 0.5;
    uVar23 = (uint)local_d0;
    FUN_146bedee6(param_8 + 0x18,&local_98,(ulonglong)local_d0 & 0xffffffff);
    local_88 = (pdVar8[5] - pdVar8[2]) * 0.5;
    dStack_90 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_98 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_98,(ulonglong)plVar12 & 0xffffffff);
    uVar23 = ~uVar23;
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 1483054be FUN_1483054be body=120 status=ok
// SIG undefined FUN_1483054be(void)

void FUN_1483054be(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 8,0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148305536 FUN_148305536 body=279 status=ok
// SIG undefined FUN_148305536(void)

void FUN_148305536(double *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar1 = *(longlong *)(*param_2 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar6 = (ulonglong)(param_3 & 0x1ff);
  uVar7 = *(uint *)(lVar2 + uVar6 * 0xc);
  lVar3 = *(longlong *)(lVar1 + (ulonglong)(uVar7 >> 9) * 8);
  uVar8 = (ulonglong)(uVar7 & 0x1ff);
  dVar15 = *(double *)(lVar3 + uVar8 * 0x18);
  dVar16 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
  dVar17 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
  bVar5 = false;
  dVar9 = dVar15;
  dVar11 = dVar16;
  dVar13 = dVar17;
  uVar7 = *(uint *)(lVar2 + 4 + uVar6 * 0xc);
  do {
    lVar3 = *(longlong *)(lVar1 + (ulonglong)(uVar7 >> 9) * 8);
    uVar8 = (ulonglong)(uVar7 & 0x1ff);
    dVar12 = *(double *)(lVar3 + uVar8 * 0x18);
    dVar10 = dVar12;
    if ((dVar9 <= dVar12) && (dVar10 = dVar9, dVar15 < dVar12)) {
      dVar15 = dVar12;
    }
    dVar9 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
    dVar12 = dVar9;
    if ((dVar11 <= dVar9) && (dVar12 = dVar11, dVar16 < dVar9)) {
      dVar16 = dVar9;
    }
    dVar9 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
    dVar14 = dVar9;
    if ((dVar13 <= dVar9) && (dVar14 = dVar13, dVar17 < dVar9)) {
      dVar17 = dVar9;
    }
    bVar4 = !bVar5;
    bVar5 = true;
    dVar9 = dVar10;
    dVar11 = dVar12;
    dVar13 = dVar14;
    uVar7 = *(uint *)(lVar2 + 8 + uVar6 * 0xc);
  } while (bVar4);
  *param_1 = dVar10;
  param_1[1] = dVar12;
  param_1[2] = dVar14;
  param_1[3] = dVar15;
  param_1[4] = dVar16;
  param_1[5] = dVar17;
  return;
}



// FUNCTION 14830564e FUN_14830564e body=240 status=ok
// SIG undefined FUN_14830564e(void)

void FUN_14830564e(longlong param_1,double *param_2)

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



// FUNCTION 14830573e FUN_14830573e body=110 status=ok
// SIG undefined FUN_14830573e(void)

void FUN_14830573e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148305820(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14830589e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1483057ae FUN_1483057ae body=112 status=ok
// SIG undefined FUN_1483057ae(void)

void FUN_1483057ae(longlong *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_148305fa8(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_148305820(param_1,iVar1);
    }
    *(undefined1 *)(*param_1 + (longlong)iVar1) = *param_2;
  }
  return;
}



// FUNCTION 148305820 FUN_148305820 body=124 status=ok
// SIG undefined FUN_148305820(void)

void FUN_148305820(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14830589e FUN_14830589e body=119 status=ok
// SIG undefined FUN_14830589e(void)

void FUN_14830589e(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 14830591e FUN_14830591e body=1035 status=ok
// SIG undefined FUN_14830591e(void)

void FUN_14830591e(longlong *param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  double *pdVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  undefined1 local_110 [24];
  double local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  uVar13 = (ulonglong)param_2;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((((int)param_2 < 0) ||
      (lVar14 = *param_1,
      *(int *)(lVar14 + 0x140) * 0x200 + *(int *)(lVar14 + 0x144) <= (int)param_2)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar14 + 0x148) + (ulonglong)(param_2 >> 9) * 8)
                                  + (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    lVar14 = *(longlong *)param_1[1];
    uVar13 = (ulonglong)(int)param_2;
  }
  else {
    local_1c8 = &local_f0;
    FUN_146c1477c(lVar14,param_2,&local_d8,&local_f8);
    dVar11 = local_c8;
    dVar10 = dStack_d0;
    dVar9 = local_d8;
    dVar8 = local_e0;
    uVar7 = uStack_e4;
    uVar6 = uStack_e8;
    uVar5 = uStack_ec;
    uVar4 = local_f0;
    if ((0.1 <= local_c8 * local_c8 + local_d8 * local_d8 + dStack_d0 * dStack_d0) &&
       (1e-08 < local_f8)) {
      lVar14 = (longlong)*(int *)((undefined8 *)param_1[2] + 1);
      if (lVar14 != 0) {
        pdVar15 = *(double **)param_1[2];
        pdVar1 = pdVar15 + lVar14 * 3;
        dVar2 = (double)CONCAT44(uStack_ec,local_f0);
        dVar3 = (double)CONCAT44(uStack_e4,uStack_e8);
        do {
          dVar17 = pdVar15[2] * dVar11 + *pdVar15 * dVar9 + dVar10 * pdVar15[1];
          uVar16 = -(ulonglong)(-dVar17 <= dVar17);
          dVar17 = (double)(~uVar16 & (ulonglong)-dVar17 | (ulonglong)dVar17 & uVar16);
          if (*(double *)param_1[3] <= dVar17 && dVar17 != *(double *)param_1[3]) {
            dVar17 = *(double *)param_1[5];
            local_118 = pdVar15[2] * dVar17 + dVar8;
            local_120 = pdVar15[1] * dVar17 + dVar3;
            local_128 = *pdVar15 * dVar17 + dVar2;
            local_148 = local_d8;
            dStack_140 = dStack_d0;
            local_138 = local_c8;
            local_168 = local_f0;
            uStack_164 = uStack_ec;
            uStack_160 = uStack_e8;
            uStack_15c = uStack_e4;
            local_158 = local_e0;
            local_1c8 = (undefined4 *)CONCAT44(local_1c8._4_4_,param_2);
            local_1c0 = local_110;
            uVar12 = FUN_148305d2a(param_1[4],&local_168,&local_148,&local_128);
            if (uVar12 == param_2) goto LAB_148305c35;
          }
          pdVar15 = pdVar15 + 3;
        } while (pdVar15 != pdVar1);
      }
      pdVar1 = (double *)param_1[6];
      dVar2 = *(double *)param_1[5] * 1.01;
      local_170 = (dVar11 + pdVar1[2]) * dVar2 + dVar8;
      local_178 = (dVar10 + pdVar1[1]) * dVar2 + (double)CONCAT44(uVar7,uVar6);
      local_180 = dVar2 * (dVar9 + *pdVar1) + (double)CONCAT44(uVar5,uVar4);
      local_198 = local_d8;
      dStack_190 = dStack_d0;
      local_188 = local_c8;
      local_1b8 = local_f0;
      uStack_1b4 = uStack_ec;
      uStack_1b0 = uStack_e8;
      uStack_1ac = uStack_e4;
      local_1a8 = local_e0;
      local_1c0 = local_110;
      local_1c8 = (undefined4 *)CONCAT44(local_1c8._4_4_,param_2);
      uVar12 = FUN_148305d2a(param_1[4]);
      if (uVar12 == param_2) {
LAB_148305c35:
        *(undefined1 *)(*(longlong *)param_1[1] + uVar13) = 1;
      }
      goto LAB_1483059d8;
    }
    lVar14 = *(longlong *)param_1[1];
  }
  *(undefined1 *)(lVar14 + uVar13) = 2;
LAB_1483059d8:
  if ((local_c0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148305d2a FUN_148305d2a body=637 status=ok
// SIG undefined FUN_148305d2a(void)

undefined4
FUN_148305d2a(undefined8 *param_1,double *param_2,double *param_3,double *param_4,undefined4 param_5
             ,undefined8 *param_6)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 *local_180;
  undefined1 local_178 [12];
  undefined4 local_16c;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined4 local_b8 [4];
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [7];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar9 = param_2[2] - param_4[2];
  dVar11 = param_2[1] - param_4[1];
  dVar10 = *param_2 - *param_4;
  dVar2 = SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar11 * dVar11);
  dVar6 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  dVar3 = 0.0;
  if (0.0 < dVar2) {
    dVar8 = 1.0 / dVar2;
    dVar6 = dVar10 * dVar8;
    dVar7 = dVar11 * dVar8;
    dVar8 = dVar9 * dVar8;
    dVar3 = dVar2;
  }
  if ((*(char *)*param_1 != '\0') ||
     (uVar5 = 0xffffffff, param_3[2] * dVar8 + *param_3 * dVar6 + param_3[1] * dVar7 <= -0.001)) {
    local_158 = param_4[2];
    local_168 = *param_4;
    dStack_160 = param_4[1];
    local_b8[0] = param_5;
    local_150 = dVar6;
    local_148 = dVar7;
    local_140 = dVar8;
    cVar4 = (**(code **)param_1[1])(((undefined8 *)param_1[1])[1],local_b8);
    plVar1 = (longlong *)param_1[2];
    local_180 = local_b8;
    if (cVar4 == '\0') {
      local_138 = 0;
      local_128 = 0;
      FUN_146bee698(local_b8,dVar3 + 1.0);
      local_188 = param_6;
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_168,local_178,&local_16c);
      uVar5 = local_16c;
      if (local_a8 != 0) {
        if (local_98 == (longlong *)0x0) {
          local_98 = local_88;
        }
        (**(code **)(*local_98 + 0x10))();
        uVar5 = local_16c;
      }
    }
    else {
      local_f8 = 0;
      local_e8 = 0;
      FUN_146bee698(local_b8,dVar3);
      local_188 = param_6;
      cVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_168,local_178,&local_16c);
      if (local_a8 != 0) {
        if (local_98 == (longlong *)0x0) {
          local_98 = local_88;
        }
        (**(code **)(*local_98 + 0x10))();
      }
      uVar5 = local_16c;
      if (cVar4 == '\0') {
        *param_6 = 0x3fd5555555555555;
        param_6[1] = 0x3fd5555555555555;
        param_6[2] = 0x3fd5555555555555;
        uVar5 = param_5;
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148305fa8 FUN_148305fa8 body=87 status=ok
// SIG undefined FUN_148305fa8(void)

void FUN_148305fa8(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e(param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 148306008 FUN_148306008 body=2677 status=ok
// SIG undefined FUN_148306008(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148306008(longlong *param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  char cVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_2e8 [32];
  double *local_2c8;
  double *local_2c0;
  double local_2b0;
  ulonglong local_2a8;
  int local_2a0;
  int local_29c;
  longlong local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double dStack_240;
  longlong local_238;
  ulonglong uStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_210;
  double local_208;
  double local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  uint local_158;
  undefined4 uStack_154;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130 [8];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((-1 < (int)param_2) &&
     (lVar12 = *param_1, (int)param_2 < *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144))
     ) {
    uVar14 = (ulonglong)(param_2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar12 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           uVar14 * 2) - 1U) < 0xfffe) {
      cVar19 = *(char *)param_1[1];
      uVar17 = 0;
      if (cVar19 == '\x01') {
        uVar17 = FUN_146bc96d4(lVar12,param_2);
        if (((int)uVar17 < 0) || ((int)((longlong *)param_1[2])[1] <= (int)uVar17)) {
          cVar19 = '\0';
        }
        else if ((*(char *)(*(longlong *)param_1[2] + (ulonglong)uVar17) != '\0') ||
                (cVar19 = '\x01', (*(byte *)(*(longlong *)param_1[3] + (ulonglong)uVar17) & 1) != 0)
                ) goto LAB_148306108;
      }
      uVar15 = (ulonglong)param_2;
      if ((*(char *)(*(longlong *)param_1[4] + uVar15) == '\0') &&
         ((*(byte *)(*(longlong *)param_1[5] + uVar15) & 1) == 0)) {
        lVar12 = *param_1;
        lVar18 = *(longlong *)(*(longlong *)(lVar12 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
        uVar10 = *(uint *)(lVar18 + uVar14 * 0xc);
        lVar3 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        uVar16 = (ulonglong)uVar10 & 0x1ff;
        local_168 = *(double *)(lVar3 + 0x10 + uVar16 * 0x18);
        pdVar1 = (double *)(lVar3 + uVar16 * 0x18);
        local_178 = *pdVar1;
        dStack_170 = pdVar1[1];
        uVar10 = *(uint *)(lVar18 + 4 + uVar14 * 0xc);
        lVar3 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        uVar16 = (ulonglong)uVar10 & 0x1ff;
        local_188 = *(double *)(lVar3 + 0x10 + uVar16 * 0x18);
        pdVar1 = (double *)(lVar3 + uVar16 * 0x18);
        local_198 = *pdVar1;
        dStack_190 = pdVar1[1];
        uVar10 = *(uint *)(lVar18 + 8 + uVar14 * 0xc);
        lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        uVar14 = (ulonglong)uVar10 & 0x1ff;
        local_1a8 = *(double *)(lVar12 + 0x10 + uVar14 * 0x18);
        pdVar1 = (double *)(lVar12 + uVar14 * 0x18);
        local_1b8 = *pdVar1;
        dStack_1b0 = pdVar1[1];
        dVar4 = local_168 + local_188 + local_1a8;
        dVar5 = dStack_170 + dStack_190 + dStack_1b0;
        dVar6 = local_178 + local_198 + local_1b8;
        local_2c8 = &local_1c0;
        FUN_146b9cae0(&local_1d8,&local_178,&local_198,&local_1b8);
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0x3ff0000000000000;
        local_130[3] = (double)DAT_14c8463c8;
        local_130[1] = (double)DAT_14c8463b8;
        local_130[2] = (double)DAT_14c8463c0;
        local_210 = dVar6 * 0.3333333333333333;
        local_208 = dVar5 * 0.3333333333333333;
        local_200 = dVar4 * 0.3333333333333333;
        FUN_146bfb7f2(&local_1f8,local_130 + 1,&local_1d8);
        FUN_146bca7ae(&local_210,&local_140,&local_1b8,2);
        FUN_146bca7ae(&local_210,&local_158,&local_198,2);
        FUN_146bca7ae(&local_210,&local_228,&local_178,2);
        local_130[1] = local_228;
        local_130[2] = uStack_220;
        local_130[3] = (double)CONCAT44(uStack_154,local_158);
        local_130[4] = dStack_150;
        local_130[5] = local_140;
        local_130[6] = dStack_138;
        local_228 = local_228 + local_130[3];
        lVar12 = 8;
        do {
          *(double *)((longlong)local_130 + lVar12) =
               *(double *)((longlong)local_130 + lVar12) * 0.999 +
               (local_228 + local_140) * 0.3333333333333333 * 0.0010000000000000009;
          *(double *)((longlong)local_130 + lVar12 + 8U) =
               *(double *)((longlong)local_130 + lVar12 + 8U) * 0.999 +
               (uStack_220 + dStack_150 + dStack_138) * 0.3333333333333333 * 0.0010000000000000009;
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != 0x38);
        iVar9 = (int)(local_1c0 /
                     (*(double *)param_1[6] * 3.141592653589793 * *(double *)param_1[6]));
        local_29c = 8;
        if (8 < iVar9) {
          local_29c = iVar9;
        }
        dVar4 = local_130[4] - local_130[2];
        dVar5 = local_130[3] - local_130[1];
        dVar6 = local_130[6] - local_130[2];
        dVar7 = local_130[5] - local_130[1];
        local_228 = 0.0;
        uStack_220 = 0.0;
        local_238 = 0;
        uStack_230 = 0;
        local_2a8 = 0;
        local_298 = (longlong)(int)uVar17;
        iVar9 = 0;
        uVar17 = param_2;
        while( true ) {
          if (iVar9 == 10000) break;
          dVar22 = (double)((float)(uVar17 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0);
          uVar17 = uVar17 * -0x4b9b4d07 + 0x9d6f2492;
          dVar21 = (double)((float)(uVar17 >> 9 | 0x3f800000) + -1.0);
          dVar23 = dVar22 + dVar21;
          if (1.0 < dVar23) {
            dVar21 = 1.0 - dVar21;
          }
          uVar14 = -(ulonglong)(1.0 < dVar23);
          dVar22 = (double)(~uVar14 & (ulonglong)dVar22 | (ulonglong)(1.0 - dVar22) & uVar14);
          dStack_240 = dVar6 * dVar21 + dVar4 * dVar22 + local_130[2];
          local_248 = dVar21 * dVar7 + dVar22 * dVar5 + local_130[1];
          cVar8 = FUN_146bd16fa(local_130 + 1,local_130 + 3,local_130 + 5,&local_248);
          if (cVar8 != '\0') {
            local_140 = local_248;
            dStack_138 = dStack_240;
            local_130[0] = 0.0;
            FUN_146bed047(&local_158,&local_1f8,&local_140);
            local_2b0 = local_148 + local_200;
            dVar22 = dStack_150 + local_208;
            dVar21 = (double)CONCAT44(uStack_154,local_158) + local_210;
            bVar20 = (longlong)uStack_220 < 0;
            uStack_220 = (double)((ulonglong)uStack_220 & 0xffffffff00000000);
            if (bVar20) {
              FUN_14481578e(&local_228);
            }
            iVar11 = *(int *)param_1[7];
            if (0 < iVar11) {
              lVar18 = 0x10;
              lVar12 = 0;
              do {
                lVar3 = *(longlong *)param_1[8];
                dVar23 = *(double *)(lVar3 + -0x10 + lVar18);
                dVar2 = *(double *)(lVar3 + -8 + lVar18);
                dVar24 = local_1c8 * *(double *)(lVar3 + lVar18) +
                         local_1d8 * dVar23 + dStack_1d0 * dVar2;
                uVar14 = -(ulonglong)(-dVar24 <= dVar24);
                if (*(double *)param_1[9] <=
                    (double)(~uVar14 & (ulonglong)-dVar24 | (ulonglong)dVar24 & uVar14)) {
                  dVar24 = *(double *)param_1[10] + *(double *)param_1[10];
                  local_250 = *(double *)(lVar3 + lVar18) * dVar24 + local_2b0;
                  local_258 = dVar2 * dVar24 + dVar22;
                  local_260 = dVar23 * dVar24 + dVar21;
                  local_278 = local_1d8;
                  dStack_270 = dStack_1d0;
                  local_268 = local_1c8;
                  local_280 = local_2b0;
                  local_2c0 = &local_140;
                  local_2c8 = (double *)CONCAT44(local_2c8._4_4_,param_2);
                  local_290 = dVar21;
                  local_288 = dVar22;
                  local_158 = FUN_148305d2a(param_1[0xb],&local_290,&local_278,&local_260);
                  if ((local_158 != 0xffffffff) &&
                     (*(char *)(*(longlong *)param_1[4] + (longlong)(int)local_158) == '\0')) {
                    if (local_158 == param_2) {
                      lVar12 = (longlong)(int)uStack_220;
                      uVar13 = (int)uStack_220 + 1;
                      uStack_220 = (double)CONCAT44(uStack_220._4_4_,uVar13);
                      uVar10 = param_2;
                      if (uStack_220._4_4_ < uVar13) {
                        FUN_1446f48e2(&local_228);
                        uVar10 = local_158;
                      }
                      *(uint *)((longlong)local_228 + lVar12 * 4) = uVar10;
                      break;
                    }
                    dVar23 = local_140;
                    if (dStack_138 <= local_140) {
                      dVar23 = dStack_138;
                    }
                    if (local_130[0] <= dVar23) {
                      dVar23 = local_130[0];
                    }
                    if (0.001 < dVar23) {
                      dVar23 = local_140;
                      if (local_140 <= dStack_138) {
                        dVar23 = dStack_138;
                      }
                      if (dVar23 <= local_130[0]) {
                        dVar23 = local_130[0];
                      }
                      if (dVar23 < 0.999) {
                        FUN_1449e3bb0(&local_228);
                      }
                    }
                  }
                  iVar11 = *(int *)param_1[7];
                }
                lVar12 = lVar12 + 1;
                lVar18 = lVar18 + 0x18;
              } while (lVar12 < iVar11);
            }
            if ((longlong)(int)uStack_220 != 0) {
              lVar12 = 0;
              do {
                LOCK();
                *(undefined1 *)
                 (*(longlong *)param_1[5] + (longlong)*(int *)((longlong)local_228 + lVar12)) = 1;
                UNLOCK();
                lVar12 = lVar12 + 4;
              } while ((longlong)(int)uStack_220 << 2 != lVar12);
            }
            if (*(char *)param_1[1] != '\0') {
              if ((0x13 < (int)uStack_230) &&
                 (bVar20 = (longlong)uStack_230 < 0, uStack_230 = uStack_230 & 0xffffffff00000000,
                 bVar20)) {
                FUN_14481578e(&local_238,0);
              }
              lVar12 = (longlong)(int)uStack_220;
              if (lVar12 != 0) {
                local_2b0 = local_228;
                lVar18 = 0;
                do {
                  uVar10 = FUN_146bc96d4(*param_1,*(undefined4 *)((longlong)local_2b0 + lVar18));
                  local_140 = (double)CONCAT44(local_140._4_4_,uVar10);
                  if (((-1 < (int)uVar10) && ((int)uVar10 < (int)((longlong *)param_1[2])[1])) &&
                     (*(char *)(*(longlong *)param_1[2] + (ulonglong)uVar10) == '\0')) {
                    local_2a0 = (int)uStack_230;
                    iVar11 = FUN_1449e3bb0(&local_238,&local_140);
                    if (local_2a0 == iVar11) {
                      *(undefined1 *)(*(longlong *)param_1[3] + (longlong)local_140._0_4_) = 1;
                    }
                  }
                  lVar18 = lVar18 + 4;
                } while (lVar12 * 4 != lVar18);
              }
            }
            if (((*(byte *)(*(longlong *)param_1[5] + uVar15) & 1) != 0) ||
               ((local_2a8 = (ulonglong)((int)local_2a8 + 1), cVar19 != '\0' &&
                ((*(byte *)(*(longlong *)param_1[3] + local_298) & 1) != 0)))) break;
          }
          iVar9 = iVar9 + 1;
          if (local_29c <= (int)local_2a8) break;
        }
        if (local_238 != 0) {
          FUN_1400020a8();
        }
        if (local_228 != 0.0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_148306108:
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148306a7e FUN_148306a7e body=41 status=ok
// SIG undefined FUN_148306a7e(void)

void FUN_148306a7e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148306b3c(param_1);
    param_1 = param_1 + 0x1c0;
  }
  return;
}



// FUNCTION 148306aa8 FUN_148306aa8 body=146 status=ok
// SIG undefined FUN_148306aa8(void)

void FUN_148306aa8(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x1c0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 6;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x1c0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148306b3c FUN_148306b3c body=132 status=ok
// SIG undefined FUN_148306b3c(void)

longlong FUN_148306b3c(longlong param_1)

{
  FUN_148306bc0();
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  return param_1;
}



// FUNCTION 148306bc0 FUN_148306bc0 body=203 status=ok
// SIG undefined FUN_148306bc0(void)

undefined8 * FUN_148306bc0(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0xffffffff00000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff00000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000;
  param_1[0xd] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_146be9a22(param_1 + 4,1,0xffffffff);
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffff00000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffff00000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_146be9a22(param_1 + 0x11,1,0xffffffff);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 148306c8c FUN_148306c8c body=98 status=ok
// SIG undefined FUN_148306c8c(void)

void FUN_148306c8c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x1c0 + *param_1);
  FUN_148306d2c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x1c0 + (longlong)_Dst),(longlong)iVar2 * 0x1c0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148306cee FUN_148306cee body=62 status=ok
// SIG undefined FUN_148306cee(void)

void FUN_148306cee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148306e44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c0,8);
  }
  return;
}



// FUNCTION 148306d2c FUN_148306d2c body=41 status=ok
// SIG undefined FUN_148306d2c(void)

void FUN_148306d2c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148306d56(param_1);
    param_1 = param_1 + 0x1c0;
  }
  return;
}



// FUNCTION 148306d56 FUN_148306d56 body=238 status=ok
// SIG undefined FUN_148306d56(void)

void FUN_148306d56(longlong param_1)

{
  FUN_144716727(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b8));
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  FUN_146be9485(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x198));
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_146bc7b3e(param_1);
  return;
}



// FUNCTION 148306e44 FUN_148306e44 body=110 status=ok
// SIG undefined FUN_148306e44(void)

ulonglong FUN_148306e44(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1c0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148306e7d;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1c0,8);
      param_2 = param_2 / 0x1c0;
    }
  }
LAB_148306e7d:
  return param_2 & 0xffffffff;
}



// FUNCTION 148306eb2 FUN_148306eb2 body=96 status=ok
// SIG undefined FUN_148306eb2(void)

void FUN_148306eb2(longlong param_1,int param_2)

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



// FUNCTION 148306f12 FUN_148306f12 body=132 status=ok
// SIG undefined FUN_148306f12(void)

void FUN_148306f12(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148306f97 FUN_148306f97 body=42 status=ok
// SIG undefined FUN_148306f97(void)

void FUN_148306f97(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 148306fc2 FUN_148306fc2 body=147 status=ok
// SIG undefined FUN_148306fc2(void)

void FUN_148306fc2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148307056 FUN_148307056 body=62 status=ok
// SIG undefined FUN_148307056(void)

void FUN_148307056(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148307094(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 148307094 FUN_148307094 body=112 status=ok
// SIG undefined FUN_148307094(void)

ulonglong FUN_148307094(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483070ce;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_1483070ce:
  return param_2 & 0xffffffff;
}



// FUNCTION 148307104 FUN_148307104 body=152 status=ok
// SIG undefined FUN_148307104(void)

void FUN_148307104(int *param_1,undefined8 *param_2)

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
        FUN_1482fe0d4(param_1 + 2,iVar1);
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



// FUNCTION 14830719c FUN_14830719c body=215 status=ok
// SIG undefined FUN_14830719c(void)

void FUN_14830719c(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar2 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    uVar3 = (((int)uVar2 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar2 = 1;
    if (1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    puVar1 = (uint *)(param_1 + 4);
    iVar5 = uVar2 - *puVar1;
    if (iVar5 == 0 || (int)uVar2 < (int)*puVar1) {
      if (uVar2 < *puVar1) {
        FUN_148307274();
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x1000);
        memset(_Dst,0,0x1000);
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
        if ((uint)param_1[5] < iVar4 + 1U) {
          FUN_1482fe0d4(param_1 + 2,iVar4);
        }
        *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar4 * 8) = _Dst;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    iVar4 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar4 = 0;
    }
    *param_1 = iVar4;
    param_1[1] = iVar5;
  }
  return;
}



// FUNCTION 148307274 FUN_148307274 body=76 status=ok
// SIG undefined FUN_148307274(void)

void FUN_148307274(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < (int)uVar1) {
    uVar3 = (ulonglong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + uVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
      uVar1 = *(uint *)(param_1 + 1);
    } while ((longlong)uVar3 < (longlong)(int)uVar1);
  }
  if (uVar1 != param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 1483072c0 FUN_1483072c0 body=105 status=ok
// SIG undefined FUN_1483072c0(void)

void FUN_1483072c0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    lVar1 = param_1[1];
    if (lVar1 == param_3 || param_3 == 0) {
      plVar2 = param_1 + 1;
      if (lVar1 == 0) {
        plVar3 = param_1 + 2;
      }
      else {
        *(longlong *)(param_2 + 0x10) = lVar1;
        plVar3 = (longlong *)(*plVar2 + 0x18);
      }
    }
    else {
      plVar2 = (longlong *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(longlong *)(param_2 + 0x10) = param_3;
      plVar3 = (longlong *)(*(longlong *)(param_3 + 0x18) + 0x10);
    }
    *plVar3 = param_2;
    *plVar2 = param_2;
                    /* WARNING: Could not recover jumptable at 0x000148307320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
    return;
  }
  return;
}



// FUNCTION 14830732a FUN_14830732a body=132 status=ok
// SIG undefined FUN_14830732a(void)

void FUN_14830732a(longlong param_1,int param_2)

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



// FUNCTION 1483073b0 FUN_1483073b0 body=195 status=ok
// SIG undefined FUN_1483073b0(void)

void FUN_1483073b0(uint *param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar7 = param_2 * 2 + 1;
  uVar6 = *param_1;
  if (uVar7 < uVar6) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)param_2 * 4);
    uVar9 = param_2;
    do {
      uVar10 = uVar9 * 2 + 2;
      lVar4 = *(longlong *)(param_1 + 4);
      lVar5 = *(longlong *)(param_1 + 6);
      uVar8 = uVar7;
      if ((uVar10 < uVar6) &&
         (dVar2 = *(double *)(lVar5 + (ulonglong)*(uint *)(lVar4 + (ulonglong)uVar10 * 4) * 8),
         pdVar1 = (double *)(lVar5 + (ulonglong)*(uint *)(lVar4 + (ulonglong)uVar7 * 4) * 8),
         dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
        uVar8 = uVar10;
      }
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar8 * 4);
      dVar2 = *(double *)(lVar5 + (ulonglong)uVar3 * 8);
      pdVar1 = (double *)(lVar5 + (ulonglong)uVar6 * 8);
      if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
      *(uint *)(lVar4 + (ulonglong)uVar9 * 4) = uVar6;
      *(uint *)(*(longlong *)(param_1 + 8) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar9 * 4) * 4) = uVar9;
      uVar7 = uVar8 * 2 + 1;
      uVar6 = *param_1;
      uVar9 = uVar8;
    } while (uVar7 < uVar6);
    if (uVar9 != param_2) {
      *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar9 * 4) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 8) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar9 * 4) * 4) = uVar9;
    }
  }
  return;
}



// FUNCTION 148307474 FUN_148307474 body=132 status=ok
// SIG undefined FUN_148307474(void)

void FUN_148307474(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483074fa FUN_1483074fa body=201 status=ok
// SIG undefined FUN_1483074fa(void)

void FUN_1483074fa(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x1800);
      memset(_Dst,0,0x1800);
      lVar3 = 8;
      do {
        *(undefined4 *)((longlong)_Dst + lVar3 + -8) = 0xffffffff;
        *(undefined4 *)((longlong)_Dst + lVar3) = 0xffffffff;
        lVar3 = lVar3 + 0xc;
      } while (lVar3 != 0x1808);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_14830732a(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar4 = 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8);
  *(undefined4 *)(lVar3 + 8 + (ulonglong)uVar4 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (ulonglong)uVar4 * 0xc) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 1483075c4 FUN_1483075c4 body=260 status=ok
// SIG undefined FUN_1483075c4(void)

void FUN_1483075c4(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  int iVar6;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar2 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    uVar3 = (((int)uVar2 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar2 = 1;
    if (1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    plVar1 = (longlong *)(param_1 + 2);
    uVar3 = param_1[4];
    if ((int)uVar3 < (int)uVar2) {
      do {
        _Dst = (void *)FUN_14001cc68(0x1800);
        memset(_Dst,0,0x1800);
        lVar5 = 8;
        do {
          *(undefined4 *)((longlong)_Dst + lVar5 + -8) = 0xffffffff;
          *(undefined4 *)((longlong)_Dst + lVar5) = 0xffffffff;
          lVar5 = lVar5 + 0xc;
        } while (lVar5 != 0x1808);
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
        if ((uint)param_1[5] < iVar4 + 1U) {
          FUN_14830732a(plVar1,iVar4);
        }
        *(void **)(*plVar1 + (longlong)iVar4 * 8) = _Dst;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar2);
    }
    else if (uVar2 < uVar3) {
      FUN_1483076c8(plVar1,uVar2);
    }
    iVar4 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar4 = 0;
    }
    iVar6 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    *param_1 = iVar6;
    param_1[1] = iVar4;
  }
  return;
}



// FUNCTION 1483076c8 FUN_1483076c8 body=76 status=ok
// SIG undefined FUN_1483076c8(void)

void FUN_1483076c8(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < (int)uVar1) {
    uVar3 = (ulonglong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + uVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
      uVar1 = *(uint *)(param_1 + 1);
    } while ((longlong)uVar3 < (longlong)(int)uVar1);
  }
  if (uVar1 != param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 148307714 FUN_148307714 body=131 status=ok
// SIG undefined FUN_148307714(void)

void FUN_148307714(longlong param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 4);
  uVar5 = param_2;
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    do {
      uVar7 = (ulonglong)uVar5;
      uVar8 = uVar5 - 1;
      uVar6 = uVar8 >> 1;
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6 * 4);
      dVar2 = *(double *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar4 * 8);
      pdVar1 = (double *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 8);
      if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
      *(uint *)(*(longlong *)(param_1 + 0x10) + uVar7 * 4) = uVar4;
      *(uint *)(*(longlong *)(param_1 + 0x20) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + uVar7 * 4) * 4) = uVar5;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar6;
    } while (1 < uVar8);
  }
  if ((uint)uVar7 != param_2) {
    *(uint *)(*(longlong *)(param_1 + 0x10) + uVar7 * 4) = uVar3;
    *(uint *)(*(longlong *)(param_1 + 0x20) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + uVar7 * 4) * 4) = (uint)uVar7;
  }
  return;
}



// FUNCTION 148307798 FUN_148307798 body=95 status=ok
// SIG undefined FUN_148307798(void)

void FUN_148307798(uint *param_1,uint param_2)

{
  void *_Src;
  uint uVar1;
  void *_Dst;
  
  _Dst = (void *)FUN_144a7d36f((ulonglong)param_2 << 2);
  if ((ulonglong)param_1[1] != 0) {
    _Src = *(void **)(param_1 + 4);
    memcpy(_Dst,_Src,(ulonglong)param_1[1] << 2);
    if (_Src != (void *)0x0) {
      thunk_FUN_1400020a8(_Src);
    }
  }
  uVar1 = *param_1;
  if (param_2 <= *param_1) {
    uVar1 = param_2;
  }
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(void **)(param_1 + 4) = _Dst;
  return;
}



// FUNCTION 1483077f8 FUN_1483077f8 body=173 status=ok
// SIG undefined FUN_1483077f8(void)

void FUN_1483077f8(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar3 = FUN_144a7d36f((ulonglong)param_2 * 8);
  lVar4 = FUN_144a7d36f((ulonglong)param_2 << 2);
  uVar6 = (ulonglong)*(uint *)(param_1 + 8);
  if (uVar6 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar5 = *(longlong *)(param_1 + 0x20);
    uVar7 = 0;
    do {
      *(undefined8 *)(lVar3 + uVar7 * 8) = *(undefined8 *)(lVar2 + uVar7 * 8);
      *(undefined4 *)(lVar4 + uVar7 * 4) = *(undefined4 *)(lVar5 + uVar7 * 4);
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
    if (lVar2 != 0) {
      thunk_FUN_1400020a8(lVar2);
      lVar5 = *(longlong *)(param_1 + 0x20);
    }
    if (lVar5 != 0) {
      thunk_FUN_1400020a8();
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    memset((void *)(lVar4 + (ulonglong)uVar1 * 4),(int)CONCAT71((int7)(uVar6 >> 8),0xff),
           (ulonglong)(~uVar1 + param_2) * 4 + 4);
  }
  *(uint *)(param_1 + 8) = param_2;
  *(longlong *)(param_1 + 0x18) = lVar3;
  *(longlong *)(param_1 + 0x20) = lVar4;
  return;
}



// FUNCTION 1483078a6 FUN_1483078a6 body=103 status=ok
// SIG undefined FUN_1483078a6(void)

undefined8 FUN_1483078a6(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_14830790e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14830790e FUN_14830790e body=96 status=ok
// SIG undefined FUN_14830790e(void)

void FUN_14830790e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14830796e(param_1,param_2,1);
  return;
}



// FUNCTION 14830796e FUN_14830796e body=87 status=ok
// SIG undefined FUN_14830796e(void)

void FUN_14830796e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_146c58c90(param_1,param_2,param_3);
  return;
}



// FUNCTION 1483079c6 FUN_1483079c6 body=147 status=ok
// SIG undefined FUN_1483079c6(void)

void FUN_1483079c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148307a5a FUN_148307a5a body=62 status=ok
// SIG undefined FUN_148307a5a(void)

void FUN_148307a5a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148307a98(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 148307a98 FUN_148307a98 body=112 status=ok
// SIG undefined FUN_148307a98(void)

ulonglong FUN_148307a98(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148307ad2;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_148307ad2:
  return param_2 & 0xffffffff;
}



// FUNCTION 148307b08 FUN_148307b08 body=106 status=ok
// SIG undefined FUN_148307b08(void)

undefined8 FUN_148307b08(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x28,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x28)) {
    uVar5 = uVar2 / 0x28 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x28,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 148307b72 FUN_148307b72 body=48 status=ok
// SIG undefined FUN_148307b72(void)

void FUN_148307b72(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 148307ba2 FUN_148307ba2 body=147 status=ok
// SIG undefined FUN_148307ba2(void)

void FUN_148307ba2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148307c36 FUN_148307c36 body=59 status=ok
// SIG undefined FUN_148307c36(void)

void FUN_148307c36(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_148307c72(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 148307c72 FUN_148307c72 body=54 status=ok
// SIG undefined FUN_148307c72(void)

void FUN_148307c72(longlong *param_1)

{
  FUN_148307ca8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148307ca8 FUN_148307ca8 body=128 status=ok
// SIG undefined FUN_148307ca8(void)

void FUN_148307ca8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148307d2a FUN_148307d2a body=147 status=ok
// SIG undefined FUN_148307d2a(void)

void FUN_148307d2a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148307dbe FUN_148307dbe body=105 status=ok
// SIG undefined FUN_148307dbe(void)

undefined8 FUN_148307dbe(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x30)) {
    uVar5 = uVar2 / 0x30 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x30,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 148307e28 FUN_148307e28 body=48 status=ok
// SIG undefined FUN_148307e28(void)

void FUN_148307e28(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148307e58 FUN_148307e58 body=113 status=ok
// SIG undefined FUN_148307e58(void)

void FUN_148307e58(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 148307eca FUN_148307eca body=48 status=ok
// SIG undefined FUN_148307eca(void)

void FUN_148307eca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148307efa FUN_148307efa body=61 status=ok
// SIG undefined FUN_148307efa(void)

void FUN_148307efa(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148307f38 FUN_148307f38 body=48 status=ok
// SIG undefined FUN_148307f38(void)

void FUN_148307f38(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148307f68 FUN_148307f68 body=147 status=ok
// SIG undefined FUN_148307f68(void)

void FUN_148307f68(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148307ffc FUN_148307ffc body=19 status=ok
// SIG undefined FUN_148307ffc(void)

void FUN_148307ffc(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 5);
    return;
  }
  return;
}



// FUNCTION 148308010 FUN_148308010 body=132 status=ok
// SIG undefined FUN_148308010(void)

void FUN_148308010(longlong param_1,int param_2)

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



// FUNCTION 148308096 FUN_148308096 body=89 status=ok
// SIG undefined FUN_148308096(void)

void FUN_148308096(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x20 + *param_1);
  FUN_145cc015e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar2 << 5);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1483080f0 FUN_1483080f0 body=62 status=ok
// SIG undefined FUN_1483080f0(void)

void FUN_1483080f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14830812e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 14830812e FUN_14830812e body=93 status=ok
// SIG undefined FUN_14830812e(void)

ulonglong FUN_14830812e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 14830818b FUN_14830818b body=19 status=ok
// SIG undefined FUN_14830818b(void)

void FUN_14830818b(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 14830819e FUN_14830819e body=132 status=ok
// SIG undefined FUN_14830819e(void)

void FUN_14830819e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148308224 FUN_148308224 body=89 status=ok
// SIG undefined FUN_148308224(void)

void FUN_148308224(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_145cc00f9(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14830827e FUN_14830827e body=62 status=ok
// SIG undefined FUN_14830827e(void)

void FUN_14830827e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483082bc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1483082bc FUN_1483082bc body=93 status=ok
// SIG undefined FUN_1483082bc(void)

ulonglong FUN_1483082bc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148308319 FUN_148308319 body=42 status=ok
// SIG undefined FUN_148308319(void)

void FUN_148308319(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    uVar2 = DAT_14c8464e8;
    uVar1 = DAT_14c8464e0;
    param_1[3] = DAT_14c8464f0;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 148308344 FUN_148308344 body=132 status=ok
// SIG undefined FUN_148308344(void)

void FUN_148308344(longlong param_1,int param_2)

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



// FUNCTION 1483083ca FUN_1483083ca body=62 status=ok
// SIG undefined FUN_1483083ca(void)

void FUN_1483083ca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148308408(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 148308408 FUN_148308408 body=93 status=ok
// SIG undefined FUN_148308408(void)

ulonglong FUN_148308408(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 148308465 FUN_148308465 body=19 status=ok
// SIG undefined FUN_148308465(void)

void FUN_148308465(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 148308478 FUN_148308478 body=132 status=ok
// SIG undefined FUN_148308478(void)

void FUN_148308478(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483084fe FUN_1483084fe body=89 status=ok
// SIG undefined FUN_1483084fe(void)

void FUN_1483084fe(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_145cc0126(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148308558 FUN_148308558 body=62 status=ok
// SIG undefined FUN_148308558(void)

void FUN_148308558(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148308596(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148308596 FUN_148308596 body=93 status=ok
// SIG undefined FUN_148308596(void)

ulonglong FUN_148308596(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1483085f3 FUN_1483085f3 body=19 status=ok
// SIG undefined FUN_1483085f3(void)

void FUN_1483085f3(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 5);
    return;
  }
  return;
}



// FUNCTION 148308606 FUN_148308606 body=132 status=ok
// SIG undefined FUN_148308606(void)

void FUN_148308606(longlong param_1,int param_2)

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



// FUNCTION 14830868c FUN_14830868c body=89 status=ok
// SIG undefined FUN_14830868c(void)

void FUN_14830868c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x20 + *param_1);
  FUN_148307efa(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar2 << 5);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1483086e6 FUN_1483086e6 body=62 status=ok
// SIG undefined FUN_1483086e6(void)

void FUN_1483086e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148308724(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 148308724 FUN_148308724 body=93 status=ok
// SIG undefined FUN_148308724(void)

ulonglong FUN_148308724(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 148308781 FUN_148308781 body=38 status=ok
// SIG undefined FUN_148308781(void)

void FUN_148308781(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1483087a8(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1483087a8 FUN_1483087a8 body=137 status=ok
// SIG undefined FUN_1483087a8(void)

void FUN_1483087a8(longlong *param_1)

{
  FUN_144716727(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_146be9485(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_146be9485(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148308831 FUN_148308831 body=22 status=ok
// SIG undefined FUN_148308831(void)

void FUN_148308831(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x50);
    return;
  }
  return;
}



// FUNCTION 148308848 FUN_148308848 body=147 status=ok
// SIG undefined FUN_148308848(void)

void FUN_148308848(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483088dc FUN_1483088dc body=101 status=ok
// SIG undefined FUN_1483088dc(void)

void FUN_1483088dc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
  FUN_148308781(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148308942 FUN_148308942 body=62 status=ok
// SIG undefined FUN_148308942(void)

void FUN_148308942(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148308980(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 148308980 FUN_148308980 body=112 status=ok
// SIG undefined FUN_148308980(void)

ulonglong FUN_148308980(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483089ba;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_1483089ba:
  return param_2 & 0xffffffff;
}



// FUNCTION 1483089f0 FUN_1483089f0 body=43 status=ok
// SIG undefined FUN_1483089f0(void)

void FUN_1483089f0(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148308a1c FUN_148308a1c body=132 status=ok
// SIG undefined FUN_148308a1c(void)

void FUN_148308a1c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148308aa2 FUN_148308aa2 body=95 status=ok
// SIG undefined FUN_148308aa2(void)

void FUN_148308aa2(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_1483089f0(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148308b02 FUN_148308b02 body=63 status=ok
// SIG undefined FUN_148308b02(void)

void FUN_148308b02(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148308b42(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148308b42 FUN_148308b42 body=97 status=ok
// SIG undefined FUN_148308b42(void)

ulonglong FUN_148308b42(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148308ba4 FUN_148308ba4 body=57 status=ok
// SIG undefined FUN_148308ba4(void)

void FUN_148308ba4(undefined8 *param_1,int param_2)

{
  FUN_146be9485(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146c7f0ca(param_1,param_2);
  return;
}



// FUNCTION 148308bdd FUN_148308bdd body=43 status=ok
// SIG undefined FUN_148308bdd(void)

void FUN_148308bdd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148308c08 FUN_148308c08 body=96 status=ok
// SIG undefined FUN_148308c08(void)

void FUN_148308c08(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 148308c68 FUN_148308c68 body=332 status=ok
// SIG undefined FUN_148308c68(void)

undefined4 * FUN_148308c68(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146ec7336(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = (uint)uVar2;
  uVar6 = (uVar6 >> 2) + uVar6 * 0x40 + (int)((ulonglong)uVar2 >> 0x20) + 0x9e3779b9 ^ uVar6;
  local_58 = 0;
  cVar3 = FUN_146ec741c(param_1,uVar6,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)(local_40 + 2) = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146ec7548(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148308db6 FUN_148308db6 body=132 status=ok
// SIG undefined FUN_148308db6(void)

void FUN_148308db6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148308e3b FUN_148308e3b body=381 status=ok
// SIG undefined FUN_148308e3b(void)

void FUN_148308e3b(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  uint local_68;
  int local_60;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *param_2;
  lVar5 = (longlong)((int)param_2[1] + -1);
  uVar6 = *(uint *)(lVar8 + lVar5 * 0xc);
  if (((-1 < (int)uVar6) &&
      ((int)uVar6 < *(int *)(param_1 + 0xf0) * 0x200 + *(int *)(param_1 + 0xf4))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)(uVar6 >> 9) * 8)
                         + (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar9 = *(uint *)(lVar8 + 4 + lVar5 * 0xc);
    iVar7 = *(int *)(lVar8 + 8 + lVar5 * 0xc);
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)(uVar9 >> 9) * 8) +
                    (ulonglong)(uVar9 & 0x1ff) * 4);
    iVar3 = 0;
    if (0 < iVar1) {
      iVar3 = iVar1;
    }
    if ((0 < iVar7) && (iVar7 <= iVar3)) {
      do {
        uVar2 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar9 >> 9) * 8) + 8 +
                 (ulonglong)((uVar9 & 0x1ff) << 4));
        uVar4 = (uint)uVar2;
        bVar10 = uVar6 != uVar4;
        uVar6 = (uint)((ulonglong)uVar2 >> 0x20);
        if (bVar10) {
          uVar6 = uVar4;
        }
        local_68 = uVar9;
        local_60 = iVar7;
        FUN_14830904e(&local_50,param_1,param_1 + 0x1c0,uVar6);
        iVar7 = local_4c;
        uVar9 = local_50;
        iVar1 = (int)param_2[1];
        lVar8 = (longlong)iVar1;
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_148308fba(param_2,iVar1);
        }
        lVar5 = *param_2;
        *(uint *)(lVar5 + lVar8 * 0xc) = uVar6;
        *(uint *)(lVar5 + 4 + lVar8 * 0xc) = uVar9;
        *(int *)(lVar5 + 8 + lVar8 * 0xc) = iVar7;
      } while (iVar7 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148308fba FUN_148308fba body=147 status=ok
// SIG undefined FUN_148308fba(void)

void FUN_148308fba(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14830904e FUN_14830904e body=464 status=ok
// SIG undefined FUN_14830904e(void)

uint * FUN_14830904e(uint *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                    uint param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_78 [28];
  uint auStack_5c [3];
  undefined8 local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(param_4 >> 9) * 8);
  local_48 = *(uint *)(lVar3 + 8 + (ulonglong)(param_4 & 0x1ff) * 0xc);
  uVar4 = *(undefined8 *)(lVar3 + (ulonglong)(param_4 & 0x1ff) * 0xc);
  local_50 = uVar4;
  uVar4 = local_50;
  iVar10 = 0;
  local_50._4_4_ = (uint)((ulonglong)uVar4 >> 0x20);
  if (((uint)uVar4 != param_5) && (iVar10 = 1, local_50._4_4_ != param_5)) {
    iVar10 = (uint)(local_48 == param_5) * 3 + -1;
  }
  uVar7 = iVar10 - 2;
  if (iVar10 + 1U < 3) {
    uVar7 = iVar10 + 1U;
  }
  uVar7 = *(uint *)((longlong)&local_50 + (longlong)(int)uVar7 * 4);
  uVar11 = iVar10 - 1;
  if (iVar10 + 2U < 3) {
    uVar11 = iVar10 + 2U;
  }
  uVar11 = *(uint *)((longlong)&local_50 + (longlong)(int)uVar11 * 4);
  lVar3 = *(longlong *)(param_3 + 0x38);
  iVar10 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar9 = 0;
  if (0 < iVar10) {
    iVar9 = iVar10;
  }
  iVar1 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar7 >> 9) * 8) +
                  (ulonglong)(uVar7 & 0x1ff) * 4);
  iVar8 = 0;
  if (0 < iVar1) {
    iVar8 = iVar1;
  }
  iVar2 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar11 >> 9) * 8) +
                  (ulonglong)(uVar11 & 0x1ff) * 4);
  iVar6 = 0;
  if (0 < iVar2) {
    iVar6 = iVar2;
  }
  if (iVar6 + iVar8 < iVar10) {
    if ((int)param_6 <= iVar8) {
LAB_1483091b9:
      *param_1 = uVar7;
      goto LAB_1483091bc;
    }
    if ((int)param_6 <= iVar9 - iVar6) {
      param_6 = 0;
      uVar7 = 0;
      if (((uint)uVar4 != uVar11) && (uVar7 = 1, local_50._4_4_ != uVar11)) {
        uVar7 = (uint)(local_48 == uVar11) * 3 - 1;
      }
      *param_1 = uVar7;
      goto LAB_1483091bc;
    }
  }
  else if (iVar2 <= iVar8 + iVar9) {
    if (iVar1 <= iVar6 + iVar9) {
      iVar10 = ((iVar6 + iVar8) - iVar9) / 2;
      if (iVar8 - iVar10 < (int)param_6) {
        param_6 = (param_6 - ((iVar8 + iVar9) - iVar6) / 2) + iVar10;
        uVar7 = uVar11;
      }
      *param_1 = uVar7;
      goto LAB_1483091bc;
    }
    goto LAB_1483091b9;
  }
  *param_1 = uVar11;
  param_6 = (param_6 - iVar9) + iVar6;
LAB_1483091bc:
  param_1[1] = param_6;
  uVar5 = local_40 ^ (ulonglong)auStack_78;
  if (uVar5 != DAT_14c707940) {
    local_50 = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar5);
  }
  return param_1;
}



// FUNCTION 148309220 FUN_148309220 body=113 status=ok
// SIG undefined FUN_148309220(void)

void FUN_148309220(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 148309292 FUN_148309292 body=57 status=ok
// SIG undefined FUN_148309292(void)

void FUN_148309292(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 2) {
    *(undefined4 *)(param_1 + 8) = 2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < 2U - iVar1) {
      FUN_148308fba();
      return;
    }
  }
  else if (iVar1 != 2) {
    *(undefined4 *)(param_1 + 8) = 2;
    FUN_1483096e4();
    return;
  }
  return;
}



// FUNCTION 1483092cb FUN_1483092cb body=1048 status=ok
// SIG undefined FUN_1483092cb(void)

undefined1 (*) [16]
FUN_1483092cb(undefined1 (*param_1) [16],longlong param_2,ulonglong param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  int *local_78;
  int *local_70;
  char *local_68;
  char local_60 [4];
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  int iStack_50;
  int local_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar7 = (uint)param_3;
  if (((-1 < (int)uVar7) &&
      (lVar11 = *(longlong *)(param_2 + 0x1c0),
      (int)uVar7 < *(int *)(lVar11 + 0x140) * 0x200 + *(int *)(lVar11 + 0x144))) && (param_4 < 3)) {
    uVar9 = param_3 >> 9 & 0x7fffff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar11 + 0x148) + uVar9 * 8) +
                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar9 = (ulonglong)(uint)((int)uVar9 << 3);
      lVar3 = *(longlong *)(*(longlong *)(lVar11 + 0x130) + uVar9);
      lVar4 = (ulonglong)((uVar7 & 0x1ff) << 2) * 3;
      local_88._8_4_ = *(undefined4 *)(lVar3 + 8 + lVar4);
      local_88._0_8_ = *(undefined8 *)(lVar3 + lVar4);
      iVar1 = *(int *)(local_88 + (ulonglong)param_4 * 4);
      iVar6 = FUN_1482e2faa(param_2 + 0x1c0,iVar1,
                            *(undefined4 *)
                             (lVar4 + *(longlong *)(*(longlong *)(lVar11 + 0x180) + uVar9) +
                             (ulonglong)param_4 * 4));
      local_48 = *(int *)(*(longlong *)(param_2 + 0x220) + (longlong)iVar1 * 4);
      local_60[0] = '\0';
      local_5c = 0xffffffff;
      uStack_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      iStack_50 = -1;
      local_4c = -1;
      local_44 = iVar6;
      uVar7 = FUN_148309792(param_2,iVar1);
      uVar9 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar7 >> 9) * 8) + 8 +
               (ulonglong)((uVar7 & 0x1ff) << 4));
      uVar10 = (uint)uVar9;
      if (uVar10 == (uint)(uVar9 >> 0x20)) {
        uVar9 = uVar9 >> 9 & 0x7fffff;
        lVar11 = *(longlong *)(*(longlong *)(param_2 + 0xe0) + uVar9 * 8);
        uVar12 = (ulonglong)(uVar10 & 0x1ff);
        uStack_54 = 0;
        if ((*(int *)(lVar11 + uVar12 * 0xc) != iVar1) &&
           (uStack_54 = 1, *(int *)(lVar11 + uVar12 * 0xc + 4) != iVar1)) {
          uStack_54 = (uint)(*(int *)(lVar11 + 8 + uVar12 * 0xc) == iVar1) * 3 - 1;
        }
        iStack_50 = *(int *)(uVar12 * 0xc +
                             *(longlong *)(*(longlong *)(param_2 + 0x210) + uVar9 * 8) +
                            (longlong)(int)uStack_54 * 4);
        local_60[0] = iVar6 == iStack_50 &&
                      *(int *)(*(longlong *)
                                (*(longlong *)(param_2 + 0x1f8) + (ulonglong)(uVar7 >> 9) * 8) +
                              (ulonglong)(uVar7 & 0x1ff) * 4) == -1;
        local_5c = uVar10;
        uStack_58 = uVar7;
        local_4c = iStack_50;
      }
      else {
        local_88._8_8_ = param_2 + 0x1c0;
        local_88._0_8_ = param_2;
        local_78 = &local_44;
        local_70 = &local_48;
        local_68 = local_60;
        FUN_1483099a6(param_2,iVar1,uVar7);
      }
      local_88._0_12_ = ZEXT412(1) << 0x40;
      local_88._12_4_ = 0;
      FUN_148308fba(local_88);
      *(uint *)(local_88._0_8_ + 8) = 0;
      *(undefined8 *)local_88._0_8_ = 0;
      *(uint *)local_88._0_8_ = local_5c;
      *(uint *)(local_88._0_8_ + 4) = uStack_54;
      *(uint *)(local_88._0_8_ + 8) = 0;
      uVar5 = local_88._8_4_;
      if (local_60[0] == '\x01') {
        lVar11 = (longlong)(int)local_88._8_4_;
        local_88._8_4_ = local_88._8_4_ + 1;
        if ((uint)local_88._12_4_ < (uint)local_88._8_4_) {
          FUN_148308fba(local_88);
        }
        *(undefined4 *)(local_88._0_8_ + 8 + lVar11 * 0xc) = 0;
        *(undefined8 *)(local_88._0_8_ + lVar11 * 0xc) = 0;
        *(uint *)(local_88._0_8_ + lVar11 * 0xc) = local_5c;
        *(uint *)(local_88._0_8_ + 4 + lVar11 * 0xc) =
             uStack_54 + ((int)(uStack_54 + 1) / 3) * -3 + 1;
        *(undefined4 *)(local_88._0_8_ + 8 + lVar11 * 0xc) = 0;
      }
      else {
        lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(local_5c >> 9) * 8);
        local_90 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(local_5c & 0x1ff) * 0xc);
        local_98 = *(undefined8 *)(lVar11 + (ulonglong)(local_5c & 0x1ff) * 0xc);
        iVar6 = ((local_44 + local_48) - iStack_50) % local_48;
        iVar1 = *(int *)(*(longlong *)
                          (*(longlong *)(param_2 + 0x1f8) + (ulonglong)(uStack_58 >> 9) * 8) +
                        (ulonglong)(uStack_58 & 0x1ff) * 4);
        if (iVar1 != -1) {
          iVar8 = 0;
          if (0 < iVar1) {
            iVar8 = iVar1;
          }
          iVar6 = iVar6 + iVar8 + 1;
        }
        uVar2 = *(undefined4 *)((longlong)&local_98 + (longlong)((int)(uStack_54 + 1) % 3) * 4);
        lVar11 = (longlong)(int)local_88._8_4_;
        local_88._8_4_ = local_88._8_4_ + 1;
        if ((uint)local_88._12_4_ < (uint)local_88._8_4_) {
          FUN_148308fba(local_88,uVar5);
        }
        *(undefined4 *)(local_88._0_8_ + 8 + lVar11 * 0xc) = 0;
        *(undefined8 *)(local_88._0_8_ + lVar11 * 0xc) = 0;
        *(uint *)(local_88._0_8_ + lVar11 * 0xc) = local_5c;
        *(undefined4 *)(local_88._0_8_ + 4 + lVar11 * 0xc) = uVar2;
        *(int *)(local_88._0_8_ + 8 + lVar11 * 0xc) = iVar6;
        FUN_148309c4d(param_2);
      }
      *(undefined8 *)*param_1 = local_88._0_8_;
      *(undefined4 *)(*param_1 + 8) = local_88._8_4_;
      *(undefined4 *)(*param_1 + 0xc) = local_88._12_4_;
      if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  *param_1 = (undefined1  [16])0x0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1483096e4 FUN_1483096e4 body=62 status=ok
// SIG undefined FUN_1483096e4(void)

void FUN_1483096e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148309722(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 148309722 FUN_148309722 body=112 status=ok
// SIG undefined FUN_148309722(void)

ulonglong FUN_148309722(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14830975c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_14830975c:
  return param_2 & 0xffffffff;
}



// FUNCTION 148309792 FUN_148309792 body=531 status=ok
// SIG undefined FUN_148309792(void)

uint FUN_148309792(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [28];
  uint uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  undefined8 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = 0xffffffff;
  if (((-1 < (int)param_2) &&
      ((int)param_2 < *(int *)(param_1 + 0x30) * 0x200 + *(int *)(param_1 + 0x34))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x38) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    cVar3 = FUN_148309c8a(param_1,param_2);
    lVar1 = param_1 + 0x68;
    if (cVar3 == '\0') {
      FUN_146be983e(&local_58,lVar1,param_2,0);
      uVar4 = 0xffffffff;
      if ((local_40._4_4_ & (uint)local_40) != 0xffffffff || param_2 != local_50) {
        uVar4 = local_38;
      }
      if (local_58 != lVar1) {
        uVar4 = local_38;
      }
    }
    else {
      FUN_146be983e(&local_58,lVar1,param_2,0);
      if (((local_58 != lVar1) || (local_50 != param_2)) ||
         (((uint)local_40 != -1 || (local_40._4_4_ != -1)))) {
        lVar5 = local_58;
        uVar6 = local_50;
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(local_38 >> 9) * 8);
          if (*(int *)(lVar2 + 0xc + (ulonglong)((local_38 & 0x1ff) << 4)) == -1) {
            uVar8 = *(ulonglong *)(lVar2 + 8 + (ulonglong)((local_38 & 0x1ff) << 4));
            uVar7 = uVar8 >> 9 & 0x7fffff;
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar7 * 8);
            uVar8 = (ulonglong)((uint)uVar8 & 0x1ff);
            if (*(uint *)(lVar2 + uVar8 * 0xc) == local_38) {
              lVar9 = 0;
            }
            else {
              lVar9 = 1;
              if (*(uint *)(lVar2 + uVar8 * 0xc + 4) != local_38) {
                lVar9 = (ulonglong)(*(uint *)(lVar2 + 8 + uVar8 * 0xc) == local_38) * 3 + -1;
              }
            }
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + uVar7 * 8);
            local_60 = *(undefined4 *)(lVar2 + 8 + uVar8 * 0xc);
            local_68 = *(undefined8 *)(lVar2 + uVar8 * 0xc);
            uVar4 = local_38;
            if (*(uint *)((longlong)&local_68 + lVar9 * 4) == param_2) goto LAB_1483097e8;
          }
          if (local_48 == 0) {
            local_4c = 0xffffffff;
            local_40 = 0xffffffffffffffff;
            local_40._4_4_ = -1;
            local_40._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_58);
            lVar5 = local_58;
            uVar6 = local_50;
          }
        } while (((lVar5 != lVar1) || (uVar6 != param_2)) ||
                (((uint)local_40 != -1 || (local_40._4_4_ != -1))));
      }
      uVar4 = 0xffffffff;
    }
  }
LAB_1483097e8:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1483099a6 FUN_1483099a6 body=678 status=ok
// SIG undefined FUN_1483099a6(void)

void FUN_1483099a6(longlong param_1,uint param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_78 [28];
  uint uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  uint *local_38;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  local_2c = param_3;
  if ((((-1 < (int)param_3) &&
       ((int)param_3 < *(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c))) &&
      (-1 < (int)param_2)) &&
     ((((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x160) + (ulonglong)(param_3 >> 9) * 8) +
                           (ulonglong)(param_3 & 0x1ff) * 2) - 1U) < 0xfffe &&
       ((int)param_2 < *(int *)(param_1 + 0x30) * 0x200 + *(int *)(param_1 + 0x34))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x38) + (ulonglong)(param_2 >> 9) * 8) +
                          (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
    local_48 = &local_2c;
    local_38 = &local_30;
    local_40 = param_1;
    FUN_148309dbe(&local_48);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(local_2c >> 9) * 8);
    uVar5 = (ulonglong)((local_2c & 0x1ff) << 4);
    uVar6 = *(uint *)(lVar1 + 8 + uVar5);
    uVar7 = *(uint *)(lVar1 + 0xc + uVar5);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
    uVar5 = (ulonglong)(uVar6 & 0x1ff);
    uVar8 = *(uint *)(lVar1 + 8 + uVar5 * 0xc);
    local_40 = CONCAT44(local_40._4_4_,uVar8);
    local_48 = *(uint **)(lVar1 + uVar5 * 0xc);
    uVar2 = local_48;
    iVar9 = 0;
    if ((uint)local_48 != local_2c) {
      iVar9 = 1;
      local_48._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
      if (local_48._4_4_ != local_2c) {
        iVar9 = (uint)(uVar8 == local_2c) * 3 + -1;
      }
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar6 >> 9) * 8);
    local_50 = *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc);
    local_58 = *(undefined8 *)(lVar1 + uVar5 * 0xc);
    local_48 = (uint *)uVar2;
    uVar8 = local_2c;
    if (*(uint *)((longlong)&local_58 + (longlong)iVar9 * 4) != local_30) {
      if (uVar7 == 0xffffffff) goto LAB_148309a38;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
      uVar4 = *(uint *)(lVar1 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
      local_40 = CONCAT44(local_40._4_4_,uVar4);
      uVar2 = *(undefined8 *)(lVar1 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
      iVar9 = 0;
      uVar6 = uVar7;
      local_48 = (uint *)uVar2;
      if ((uint)uVar2 != local_2c) {
        iVar9 = 1;
        local_48._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
        bVar10 = local_48._4_4_ != local_2c;
        if (bVar10) {
          iVar9 = (uint)(uVar4 == local_2c) * 3 + -1;
        }
      }
    }
    do {
      cVar3 = FUN_148309ed0(param_4,uVar6,uVar8,iVar9);
      if (cVar3 != '\0') break;
      uVar7 = iVar9 - 1;
      if (iVar9 + 2U < 3) {
        uVar7 = iVar9 + 2U;
      }
      uVar8 = *(uint *)((longlong)&local_48 + (ulonglong)uVar7 * 4);
      uVar2 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar8 >> 9) * 8) + 8 +
               (ulonglong)((uVar8 & 0x1ff) << 4));
      uVar4 = (uint)uVar2;
      uVar7 = (uint)((ulonglong)uVar2 >> 0x20);
      if (uVar6 != uVar4) {
        uVar7 = uVar4;
      }
      if (uVar7 == 0xffffffff) break;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
      uVar6 = *(uint *)(lVar1 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
      local_40 = CONCAT44(local_40._4_4_,uVar6);
      uVar2 = *(undefined8 *)(lVar1 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
      iVar9 = 0;
      if ((uint)uVar2 != uVar8) {
        iVar9 = 1;
        local_48._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
        if (local_48._4_4_ != uVar8) {
          iVar9 = (uint)(uVar6 == uVar8) * 3 + -1;
        }
      }
      uVar6 = uVar7;
      local_48 = (uint *)uVar2;
    } while (uVar8 != local_2c);
  }
LAB_148309a38:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148309c4d FUN_148309c4d body=60 status=ok
// SIG undefined FUN_148309c4d(void)

void FUN_148309c4d(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    while (*(int *)(*param_2 + 8 + (longlong)(iVar1 + -1) * 0xc) != 0) {
      FUN_148308e3b(param_1,param_2);
      iVar1 = (int)param_2[1];
    }
  }
  return;
}



// FUNCTION 148309c8a FUN_148309c8a body=307 status=ok
// SIG undefined FUN_148309c8a(void)

undefined8 FUN_148309c8a(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined8 local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_2 < *(int *)(param_1 + 0x30) * 0x200 + *(int *)(param_1 + 0x34)) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x38) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar1 = param_1 + 0x68;
    FUN_146be983e(&local_50,lVar1,param_2,0);
    lVar3 = local_50;
    uVar5 = local_48;
    if (local_50 != lVar1) goto LAB_148309d8c;
    if (local_48 != param_2) goto LAB_148309d8c;
    if ((int)local_38 != -1) goto LAB_148309d8c;
    iVar2 = local_38._4_4_;
    while (iVar2 != -1) {
LAB_148309d8c:
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(local_30 >> 9) * 8)
                     + 0xc + (ulonglong)((local_30 & 0x1ff) << 4)) == -1) {
          uVar4 = 1;
          goto LAB_148309cd7;
        }
        if (local_40 == 0) {
          local_44 = 0xffffffff;
          local_38 = 0xffffffffffffffff;
          local_38._4_4_ = -1;
          local_38._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_50);
          lVar3 = local_50;
          uVar5 = local_48;
        }
      } while (((lVar3 != lVar1) || (uVar5 != param_2)) ||
              (iVar2 = local_38._4_4_, (int)local_38 != -1));
    }
  }
  uVar4 = 0;
LAB_148309cd7:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148309dbe FUN_148309dbe body=273 status=ok
// SIG undefined FUN_148309dbe(void)

void FUN_148309dbe(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined8 local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)param_1[2];
  lVar4 = param_1[1] + 0x68;
  FUN_146be983e(&local_50,lVar4,iVar1,0);
  if ((((local_50 != lVar4) || (local_48 != iVar1)) || ((int)local_38 != -1)) ||
     (local_38._4_4_ != -1)) {
    lVar2 = local_50;
    iVar3 = local_48;
    do {
      if ((local_30 != *(uint *)*param_1) &&
         (*(int *)(*(longlong *)(*(longlong *)(param_1[1] + 0x148) + (ulonglong)(local_30 >> 9) * 8)
                   + 0xc + (ulonglong)((local_30 & 0x1ff) << 4)) == -1)) break;
      if (local_40 == 0) {
        local_44 = 0xffffffff;
        local_38 = 0xffffffffffffffff;
        local_38._4_4_ = -1;
        local_38._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_50);
        lVar2 = local_50;
        iVar3 = local_48;
      }
    } while (((lVar2 != lVar4) || (iVar3 != iVar1)) ||
            (((int)local_38 != -1 || (local_38._4_4_ != -1))));
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148309ed0 FUN_148309ed0 body=436 status=ok
// SIG undefined FUN_148309ed0(void)

undefined8 FUN_148309ed0(longlong *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(*param_1 + 0x130);
  lVar5 = *(longlong *)(lVar4 + (ulonglong)(param_2 >> 9) * 8);
  lVar9 = (ulonglong)((param_2 & 0x1ff) << 2) * 3;
  local_40 = *(undefined4 *)(lVar5 + 8 + lVar9);
  local_48 = *(undefined8 *)(lVar5 + lVar9);
  lVar5 = *(longlong *)(param_1[1] + 0x50);
  iVar1 = *(int *)(lVar9 + *(longlong *)(lVar5 + (ulonglong)(param_2 >> 9) * 8) +
                  (longlong)param_4 * 4);
  if ((*(int *)(*(longlong *)(*(longlong *)(param_1[1] + 0x38) + (ulonglong)(param_3 >> 9) * 8) +
               (ulonglong)(param_3 & 0x1ff) * 4) == -1) && (iVar1 == *(int *)param_1[2])) {
    uVar7 = 1;
    iVar11 = -1;
  }
  else {
    uVar2 = *(uint *)((longlong)&local_48 + (ulonglong)((param_4 + 2U) % 3) * 4);
    uVar7 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*param_1 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) + 8 +
             (ulonglong)((uVar2 & 0x1ff) << 4));
    uVar10 = (uint)uVar7;
    uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
    if (uVar10 != param_2) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0xffffffff) {
      iVar11 = -1;
LAB_14830a007:
      uVar7 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar6 >> 9) * 8);
      uVar8 = (ulonglong)(uVar6 & 0x1ff);
      if (*(uint *)(lVar4 + uVar8 * 0xc) == uVar2) {
        lVar9 = 0;
      }
      else {
        lVar9 = 1;
        if (*(uint *)(lVar4 + uVar8 * 0xc + 4) != uVar2) {
          lVar9 = (ulonglong)(*(uint *)(lVar4 + 8 + uVar8 * 0xc) == uVar2) * 3 + -1;
        }
      }
      iVar11 = *(int *)(uVar8 * 0xc + *(longlong *)(lVar5 + (ulonglong)(uVar6 >> 9) * 8) + lVar9 * 4
                       );
      iVar3 = *(int *)param_1[2];
      if (iVar11 < iVar1) {
        if (iVar3 < iVar11) goto LAB_14830a007;
        iVar11 = iVar11 + *(int *)param_1[3];
      }
      uVar7 = 0;
      if ((iVar11 <= iVar3) || (iVar3 < iVar1)) goto LAB_14830a038;
    }
  }
  *(char *)param_1[4] = (char)uVar7;
  *(uint *)(param_1[4] + 4) = param_2;
  *(uint *)(param_1[4] + 8) = param_3;
  *(int *)(param_1[4] + 0xc) = param_4;
  *(int *)(param_1[4] + 0x10) = iVar1;
  lVar4 = param_1[4];
  *(int *)(lVar4 + 0x14) = iVar11;
  uVar7 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
LAB_14830a038:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}


