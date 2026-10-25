// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14681f3c8 FUN_14681f3c8 body=25 status=ok
// SIG undefined FUN_14681f3c8(void)

undefined8 FUN_14681f3c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1408383eb(param_2,param_1);
  return 1;
}



// FUNCTION 14681f3e2 FUN_14681f3e2 body=33 status=ok
// SIG undefined FUN_14681f3e2(void)

undefined8
FUN_14681f3e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_1408383eb(param_2,param_1);
  *param_4 = 1;
  return 1;
}



// FUNCTION 14681f404 FUN_14681f404 body=69 status=ok
// SIG undefined FUN_14681f404(void)

undefined8 FUN_14681f404(longlong *param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"%d.%h:%m:%s.%f";
  if (*param_1 + 863999999999U < 0x19254d37fff) {
    pwVar1 = L"%h:%m:%s.%f";
  }
  FUN_14681ea84(param_1,param_2,pwVar1);
  return param_2;
}



// FUNCTION 14681f449 FUN_14681f449 body=21 status=ok
// SIG undefined FUN_14681f449(void)

int FUN_14681f449(undefined8 *param_1)

{
  return (int)((ulonglong)*param_1 >> 0x20) * 0x17 + (int)*param_1;
}



// FUNCTION 14681f45e FUN_14681f45e body=200 status=ok
// SIG undefined FUN_14681f45e(void)

void FUN_14681f45e(undefined8 *param_1,LONG param_2)

{
  HANDLE pvVar1;
  ULONG_PTR UVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  ULONG_PTR UVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  HANDLE pvVar8;
  ULONG_PTR UVar9;
  PRTL_CRITICAL_SECTION_DEBUG p_Var10;
  undefined8 uVar11;
  HANDLE pvVar12;
  HANDLE pvVar13;
  PRTL_CRITICAL_SECTION_DEBUG p_Var14;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_1407bb416();
  EnterCriticalSection(lpCriticalSection);
  pvVar1 = lpCriticalSection[1].LockSemaphore;
  UVar2 = lpCriticalSection[1].SpinCount;
  p_Var3 = lpCriticalSection[2].DebugInfo;
  uStack_50._0_4_ = lpCriticalSection[2].LockCount;
  uStack_50._4_4_ = lpCriticalSection[2].RecursionCount;
  pvVar4 = lpCriticalSection[2].OwningThread;
  pvVar5 = lpCriticalSection[2].LockSemaphore;
  UVar6 = lpCriticalSection[2].SpinCount;
  p_Var7 = lpCriticalSection[3].DebugInfo;
  pvVar8 = (HANDLE)*param_1;
  UVar9 = param_1[1];
  p_Var10 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[2];
  uVar11 = param_1[3];
  pvVar12 = (HANDLE)param_1[4];
  pvVar13 = (HANDLE)param_1[5];
  p_Var14 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[7];
  lpCriticalSection[2].SpinCount = param_1[6];
  lpCriticalSection[3].DebugInfo = p_Var14;
  lpCriticalSection[2].OwningThread = pvVar12;
  lpCriticalSection[2].LockSemaphore = pvVar13;
  lpCriticalSection[2].DebugInfo = p_Var10;
  lpCriticalSection[2].LockCount = (int)uVar11;
  lpCriticalSection[2].RecursionCount = (int)((ulonglong)uVar11 >> 0x20);
  lpCriticalSection[1].LockSemaphore = pvVar8;
  lpCriticalSection[1].SpinCount = UVar9;
  local_68._0_4_ = SUB84(pvVar1,0);
  local_68._4_4_ = (undefined4)((ulonglong)pvVar1 >> 0x20);
  uStack_60._0_4_ = (undefined4)UVar2;
  uStack_60._4_4_ = (undefined4)(UVar2 >> 0x20);
  local_58._0_4_ = SUB84(p_Var3,0);
  local_58._4_4_ = (undefined4)((ulonglong)p_Var3 >> 0x20);
  local_48._0_4_ = SUB84(pvVar4,0);
  local_48._4_4_ = (undefined4)((ulonglong)pvVar4 >> 0x20);
  uStack_40._0_4_ = SUB84(pvVar5,0);
  uStack_40._4_4_ = (undefined4)((ulonglong)pvVar5 >> 0x20);
  local_38._0_4_ = (undefined4)UVar6;
  local_38._4_4_ = (undefined4)(UVar6 >> 0x20);
  uStack_30._0_4_ = SUB84(p_Var7,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)p_Var7 >> 0x20);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_38._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_1 + 5) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_40._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  *(undefined4 *)param_1 = (undefined4)local_68;
  *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
  lpCriticalSection[3].LockCount = param_2;
  local_68 = pvVar1;
  uStack_60 = UVar2;
  local_58 = p_Var3;
  local_48 = pvVar4;
  uStack_40 = pvVar5;
  local_38 = UVar6;
  uStack_30 = p_Var7;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681f538 FUN_14681f538 body=29 status=ok
// SIG undefined FUN_14681f538(void)

void FUN_14681f538(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407bb416();
  FUN_14278cbd4(uVar1,param_1);
  return;
}



// FUNCTION 14681f556 FUN_14681f556 body=80 status=ok
// SIG undefined FUN_14681f556(void)

undefined8 * FUN_14681f556(undefined8 *param_1)

{
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_144a787a6(param_1);
  FUN_14278ccde(param_1);
  return param_1;
}



// FUNCTION 14681f5a6 FUN_14681f5a6 body=375 status=ok
// SIG undefined FUN_14681f5a6(void)

undefined8 *
FUN_14681f5a6(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  void *_Src;
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(local_68,param_3);
  FUN_144a6c01e(local_68,&local_58);
  puVar4 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar4 = local_58;
  }
  FUN_140056680(&local_48,puVar4);
  puVar4 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  uVar5 = 0;
  uVar3 = (ulonglong)(local_40 - 1);
  if (local_40 == 0) {
    uVar3 = uVar5;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_1457511aa((longlong *)(param_1 + 0x20),uVar1,&local_48);
  if (iVar2 != -1) {
    uVar5 = (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x20);
  }
  puVar6 = (undefined8 *)(uVar5 + 0x10);
  if (uVar5 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (puVar6 == (undefined8 *)0x0) {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  else {
    *param_2 = 0;
    iVar2 = *(int *)(puVar6 + 1);
    _Src = (void *)*puVar6;
    *(int *)(param_2 + 1) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar2,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
    }
    if (*(int *)(param_4 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_4;
    }
    FUN_14107002a(param_2,puVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681f71e FUN_14681f71e body=64 status=ok
// SIG undefined FUN_14681f71e(void)

undefined8 * FUN_14681f71e(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14150c274(param_1);
  return param_1;
}



// FUNCTION 14681f75e FUN_14681f75e body=44 status=ok
// SIG undefined FUN_14681f75e(void)

void FUN_14681f75e(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146820454();
  return;
}



// FUNCTION 14681f78a FUN_14681f78a body=35 status=ok
// SIG undefined FUN_14681f78a(void)

undefined8 FUN_14681f78a(short *param_1)

{
  short sVar1;
  
  if (param_1 != (short *)0x0) {
    for (; sVar1 = *param_1, sVar1 != 0; param_1 = param_1 + 1) {
      if ((sVar1 == 0x2a) || (sVar1 == 0x3f)) {
        return CONCAT71((uint7)(byte)((ushort)sVar1 >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 14681f7ae FUN_14681f7ae body=141 status=ok
// SIG undefined FUN_14681f7ae(void)

undefined8 FUN_14681f7ae(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  
  if (param_2 != (short *)0x0 && param_1 != (short *)0x0) {
    sVar5 = *param_2;
    if (sVar5 != 0) {
      psVar2 = param_1;
      psVar3 = (short *)0x0;
      do {
        sVar1 = *param_1;
        if (sVar1 == 0x3f) {
LAB_14681f7fd:
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          psVar4 = psVar3;
        }
        else if (sVar1 == 0x2a) {
          if (param_1[1] == 0) {
            return 1;
          }
          psVar2 = param_1 + 1;
          param_1 = psVar2;
          psVar4 = param_2 + 1;
        }
        else {
          if (sVar1 == sVar5) goto LAB_14681f7fd;
          if (psVar3 == (short *)0x0) {
            return 0;
          }
          psVar4 = psVar3 + 1;
          param_1 = psVar2;
          param_2 = psVar3;
        }
        sVar5 = *param_2;
        psVar3 = psVar4;
      } while (sVar5 != 0);
    }
    for (; *param_1 == 0x2a; param_1 = param_1 + 1) {
    }
    if (*param_1 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14681f83c FUN_14681f83c body=269 status=ok
// SIG undefined FUN_14681f83c(void)

void FUN_14681f83c(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x7fefffffffffffff;
  param_1[5] = -0x10000000000001;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_146821058(param_1,0);
  }
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    uVar7 = 1;
    do {
      lVar3 = *param_2;
      if (uVar7 == (uVar5 & 0xffffffff)) {
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14577dc82(param_1,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x20 + *param_1);
        uVar8 = 0xe0000000;
        uVar9 = 0x47efffff;
      }
      else {
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14577dc82(param_1,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x20 + *param_1);
        uVar1 = *(undefined8 *)(lVar3 + uVar7 * 8);
        uVar8 = (undefined4)uVar1;
        uVar9 = (undefined4)((ulonglong)uVar1 >> 0x20);
      }
      *puVar6 = *(undefined8 *)(lVar3 + -8 + uVar7 * 8);
      puVar6[1] = CONCAT44(uVar9,uVar8);
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      uVar5 = (ulonglong)(int)param_2[1];
      bVar4 = (longlong)uVar7 < (longlong)uVar5;
      uVar7 = uVar7 + 1;
    } while (bVar4);
  }
  return;
}



// FUNCTION 14681f94c FUN_14681f94c body=19 status=ok
// SIG undefined FUN_14681f94c(void)

void FUN_14681f94c(void)

{
  FUN_14626c60c();
  FUN_14278e978();
  return;
}



// FUNCTION 14681f96c FUN_14681f96c body=25 status=ok
// SIG undefined FUN_14681f96c(void)

void FUN_14681f96c(void)

{
  FUN_14626c60c();
  DAT_14c874ad8 = 1;
  FUN_1468213de();
  return;
}



// FUNCTION 14681f986 FUN_14681f986 body=19 status=ok
// SIG undefined FUN_14681f986(void)

void FUN_14681f986(void)

{
  FUN_14626c60c();
  FUN_14278eb26();
  return;
}



// FUNCTION 14681f999 FUN_14681f999 body=108 status=ok
// SIG undefined FUN_14681f999(void)

int FUN_14681f999(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_144a8b586();
  iVar1 = FUN_1412eb7d2(uVar2);
  local_1c = 0;
  uVar2 = FUN_14118da1c();
  FUN_141369f9a(uVar2,L"-gABC=",&local_1c);
  if (local_1c != 0) {
    iVar1 = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681fa06 FUN_14681fa06 body=118 status=ok
// SIG undefined FUN_14681fa06(void)

undefined8 FUN_14681fa06(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_38,&DAT_149dfb77a);
  FUN_14681fa7d(param_1,local_38,param_2,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681fa7d FUN_14681fa7d body=1634 status=ok
// SIG undefined FUN_14681fa7d(void)

undefined8 * FUN_14681fa7d(undefined8 *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  DWORD DVar3;
  uint uVar4;
  longlong *plVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined1 local_c0 [8];
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = 0;
  param_1[1] = 0;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  if ((DAT_14c874b38 == (longlong *)0x0 || DAT_14c874b40 == 0) ||
     (cVar1 = (**(code **)(*DAT_14c874b38 + 0x30))(), cVar1 == '\0')) {
    FUN_14020fad6(&local_58,L"LoadTimeFile");
  }
  else {
    plVar5 = DAT_14c874b38;
    if (DAT_14c874b40 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_68);
    iVar13 = local_60 + -1;
    if (local_60 == 0) {
      iVar13 = 0;
    }
    FUN_1402980a2(&local_58,local_68,iVar13);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1400b22c2(&local_68,"Windows");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874b60) && (FUN_144b3d300(&DAT_14c874b60), DAT_14c874b60 == -1)) {
    FUN_140056680(&DAT_14c874b50,&DAT_149dfb77a);
    atexit((_func_5014 *)&LAB_14278f024);
    _Init_thread_footer(&DAT_14c874b60);
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (DAT_14c874b48 == '\0') {
    FUN_1402160b8(&local_a8);
    FUN_14047ad2e(&local_a8,&local_98,L"%m.%d-%H.%M.%S");
    local_c8 = &DAT_149dfb77a;
    if ((int)uStack_90 != 0) {
      local_c8 = local_98;
    }
    puVar11 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar11 = local_68;
    }
    puVar10 = &DAT_149dfb77a;
    if ((int)uStack_50 != 0) {
      puVar10 = local_58;
    }
    FUN_140002266(&local_88,L"%s-%s-%s",puVar10,puVar11);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_78 = local_88;
    local_88 = (void *)0x0;
    iVar13 = (int)local_80;
    uStack_70 = local_80;
    local_80 = 0;
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
      iVar13 = (int)uStack_70;
    }
    uVar4 = iVar13 - 1;
    if (iVar13 == 0) {
      uVar4 = 0;
    }
    uVar8 = 100;
    if ((int)uVar4 < 100) {
      uVar8 = uVar4;
    }
    if ((int)uVar8 < 1) {
      uVar8 = 0;
    }
    uVar7 = uVar4 - uVar8;
    if ((int)uVar4 <= (int)(uVar4 - uVar8)) {
      uVar7 = uVar4;
    }
    if (0 < (int)uVar7) {
      if (iVar13 - uVar7 != 0) {
        memmove(local_78,(void *)((longlong)local_78 + (ulonglong)uVar7 * 2),
                (longlong)(int)(iVar13 - uVar7) * 2);
        iVar13 = (int)uStack_70;
      }
      iVar13 = iVar13 - uVar7;
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar13);
      uVar4 = iVar13 - 1;
      if (iVar13 == 0) {
        uVar4 = 0;
      }
    }
    FUN_1402980a2(&DAT_14c874b50,local_78,uVar4);
    DAT_14c874b48 = '\x01';
  }
  else {
    iVar13 = DAT_14c874b58 + -1;
    if (DAT_14c874b58 == 0) {
      iVar13 = 0;
    }
    FUN_1402980a2(&local_78,DAT_14c874b50,iVar13);
  }
  uVar2 = FUN_14681f999();
  puVar11 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar11 = local_68;
  }
  puVar10 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar10 = local_58;
  }
  local_c8 = (undefined2 *)CONCAT44(local_c8._4_4_,uVar2);
  FUN_140002266(&local_88,L"%s-%s-%i",puVar10,puVar11);
  uVar4 = (int)local_80 - 1;
  if ((int)local_80 == 0) {
    uVar4 = 0;
  }
  uVar8 = 100;
  if ((int)uVar4 < 100) {
    uVar8 = uVar4;
  }
  if ((int)uVar8 < 1) {
    uVar8 = 0;
  }
  uVar7 = uVar4 - uVar8;
  if ((int)uVar4 <= (int)(uVar4 - uVar8)) {
    uVar7 = uVar4;
  }
  if (0 < (int)uVar7) {
    if ((int)local_80 - uVar7 != 0) {
      memmove(local_88,(void *)((longlong)local_88 + (ulonglong)uVar7 * 2),
              (longlong)(int)((int)local_80 - uVar7) * 2);
    }
    local_80 = CONCAT44(local_80._4_4_,(int)local_80 - uVar7);
  }
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  if (*(int *)(param_2 + 8) < 2) {
    FUN_1402160b8(local_c0);
    FUN_14047ad2e(local_c0,&local_b8,L"%d-%H.%M.%S");
    local_c8 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      local_c8 = local_b8;
    }
    puVar11 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar11 = local_68;
    }
    puVar10 = &DAT_149dfb77a;
    if ((int)uStack_50 != 0) {
      puVar10 = local_58;
    }
    FUN_140002266(&local_a8,L"%s-%s-%s",puVar10,puVar11);
    iVar13 = (int)local_a0;
    local_98 = local_a8;
    local_a8 = (undefined2 *)0x0;
    uStack_90 = local_a0;
    local_a0 = 0;
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_144a787a6(&local_98,param_2);
    iVar13 = (int)uStack_90;
  }
  uVar8 = 0;
  uVar4 = iVar13 - 1;
  if (iVar13 == 0) {
    uVar4 = 0;
  }
  uVar7 = 100;
  if ((int)uVar4 < 100) {
    uVar7 = uVar4;
  }
  if ((int)uVar7 < 1) {
    uVar7 = uVar8;
  }
  uVar12 = uVar4 - uVar7;
  if ((int)uVar4 <= (int)(uVar4 - uVar7)) {
    uVar12 = uVar4;
  }
  if (0 < (int)uVar12) {
    if (iVar13 - uVar12 != 0) {
      memmove(local_98,local_98 + uVar12,(longlong)(int)(iVar13 - uVar12) * 2);
      iVar13 = (int)uStack_90;
    }
    iVar13 = iVar13 - uVar12;
    uStack_90 = CONCAT44(uStack_90._4_4_,iVar13);
  }
  puVar11 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 1) != 0) {
    puVar11 = (undefined2 *)*param_3;
  }
  puVar10 = &DAT_149dfb77a;
  if (iVar13 != 0) {
    puVar10 = local_98;
  }
  DVar3 = GetCurrentProcessId();
  local_c8 = puVar11;
  FUN_140002266(&local_a8,L"Pid%d_%s%s",DVar3,puVar10);
  uVar4 = (int)local_a0 - 1;
  if ((int)local_a0 == 0) {
    uVar4 = uVar8;
  }
  uVar7 = 100;
  if ((int)uVar4 < 100) {
    uVar7 = uVar4;
  }
  if ((int)uVar7 < 1) {
    uVar7 = uVar8;
  }
  uVar8 = uVar4 - uVar7;
  if ((int)uVar4 <= (int)(uVar4 - uVar7)) {
    uVar8 = uVar4;
  }
  iVar13 = (int)local_a0;
  if (0 < (int)uVar8) {
    if ((int)local_a0 - uVar8 != 0) {
      memmove(local_a8,local_a8 + uVar8,(longlong)(int)((int)local_a0 - uVar8) * 2);
    }
    iVar13 = (int)local_a0 - uVar8;
    local_a0 = CONCAT44(local_a0._4_4_,iVar13);
  }
  iVar9 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar9 = 0;
  }
  if (param_4 == '\0') {
    pvVar6 = local_88;
    iVar13 = (int)local_80;
  }
  else {
    pvVar6 = local_78;
    iVar13 = (int)uStack_70;
  }
  local_b8 = (undefined2 *)0x0;
  local_c8 = (undefined2 *)CONCAT44(local_c8._4_4_,iVar9 + 1 + (uint)(iVar13 == 0));
  FUN_14125bce8(&local_b8,pvVar6,iVar13,0);
  FUN_1401aebe8(&local_b8,local_a8,iVar9);
  puVar11 = local_b8;
  iVar13 = local_b0 + -1;
  if (local_b0 == 0) {
    iVar13 = 0;
  }
  FUN_1402980a2(param_1,local_b8,iVar13);
  if (puVar11 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar11);
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468200e0 FUN_1468200e0 body=132 status=ok
// SIG undefined FUN_1468200e0(void)

void FUN_1468200e0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0xffffffff00000080;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0xffffffff00000080;
  param_1[0x23] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x35) = 0xffffffff00000080;
  param_1[0x37] = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  return;
}



// FUNCTION 146820164 FUN_146820164 body=156 status=ok
// SIG undefined FUN_146820164(void)

longlong FUN_146820164(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_30,L"Untracked Memory",1);
  uVar2 = local_30._0_4_ & 0xffff;
  plVar1 = (longlong *)
           FUN_14170bfd8(param_1 + 0x58,
                         (local_30._0_4_ << 0x10 | uVar2) + local_30._4_4_ +
                         (local_30._2_4_ << 0x13 | local_30._2_4_ & 0xffff) + (uVar2 >> 4),local_30)
  ;
  *plVar1 = *plVar1 + param_2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146820202 FUN_146820202 body=38 status=ok
// SIG undefined FUN_146820202(void)

undefined8 FUN_146820202(undefined8 param_1,int param_2)

{
  FUN_1457f3066();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14682022a FUN_14682022a body=116 status=ok
// SIG undefined FUN_14682022a(void)

void FUN_14682022a(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar4 = 5;
    if (5 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x24)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar4;
    FUN_1468202a0(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468202a0 FUN_1468202a0 body=133 status=ok
// SIG undefined FUN_1468202a0(void)

void FUN_1468202a0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146820326 FUN_146820326 body=282 status=ok
// SIG undefined FUN_146820326(void)

undefined8 *
FUN_146820326(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t sVar3;
  undefined2 *puVar4;
  int iVar5;
  char cVar6;
  ulonglong uVar7;
  wchar_t *_Str;
  
  if (*(uint *)(param_3 + 3) < param_4) {
    param_4 = *(uint *)(param_3 + 3);
  }
  lVar2 = param_3[2];
  puVar1 = (undefined8 *)(lVar2 + (longlong)(int)(param_4 - 1) * 0x18);
  if (*(int *)(puVar1 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*puVar1;
  }
  cVar6 = *(char *)(puVar1 + 2);
  if (*(char *)((longlong)puVar1 + 0x11) == '\x01') {
    iVar5 = *(int *)(lVar2 + 8 + (longlong)(int)(param_4 - 2) * 0x18);
    sVar3 = 0;
    uVar7 = (ulonglong)(iVar5 - 1);
    if (iVar5 == 0) {
      uVar7 = sVar3;
    }
    FUN_1449668a2(param_5,*(undefined8 *)(lVar2 + (longlong)(int)(param_4 - 2) * 0x18),uVar7);
    if (_Str != (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
    }
    FUN_1449668a2(param_5,_Str,sVar3 & 0xffffffff);
    *(undefined2 *)param_5[1] = 0;
    _Str = (wchar_t *)*param_5;
  }
  if (cVar6 == '\x04') {
    iVar5 = param_4 - 2;
    do {
      if (iVar5 == -1) {
        cVar6 = '\0';
        break;
      }
      cVar6 = *(char *)(param_3[2] + 0x10 + (longlong)iVar5 * 0x18);
      iVar5 = iVar5 + -1;
    } while (cVar6 == '\x04');
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  *param_2 = puVar4;
  param_2[1] = _Str;
  *(char *)(param_2 + 2) = cVar6;
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_3 + 0x24);
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_3 + 5);
  return param_2;
}



// FUNCTION 146820440 FUN_146820440 body=19 status=ok
// SIG undefined FUN_146820440(void)

void FUN_146820440(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146820454 FUN_146820454 body=122 status=ok
// SIG undefined FUN_146820454(void)

longlong FUN_146820454(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1468204ce(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1468204ce FUN_1468204ce body=210 status=ok
// SIG undefined FUN_1468204ce(void)

undefined8 * FUN_1468204ce(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c6e488(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1468205dc(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1468205a0 FUN_1468205a0 body=59 status=ok
// SIG undefined FUN_1468205a0(void)

void FUN_1468205a0(longlong *param_1)

{
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468205dc FUN_1468205dc body=105 status=ok
// SIG undefined FUN_1468205dc(void)

undefined8 * FUN_1468205dc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  FUN_146820646(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 146820646 FUN_146820646 body=77 status=ok
// SIG undefined FUN_146820646(void)

undefined8 * FUN_146820646(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140b856de(param_1,iVar1,0);
    FUN_140b8566a(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146820694 FUN_146820694 body=54 status=ok
// SIG undefined FUN_146820694(void)

void FUN_146820694(longlong *param_1)

{
  FUN_1468206ca(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468206ca FUN_1468206ca body=128 status=ok
// SIG undefined FUN_1468206ca(void)

void FUN_1468206ca(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 14682074c FUN_14682074c body=83 status=ok
// SIG undefined FUN_14682074c(void)

undefined8 * FUN_14682074c(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468207a0 FUN_1468207a0 body=52 status=ok
// SIG undefined FUN_1468207a0(void)

void FUN_1468207a0(longlong *param_1)

{
  FUN_1468207d4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468207d4 FUN_1468207d4 body=89 status=ok
// SIG undefined FUN_1468207d4(void)

void FUN_1468207d4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 14682082e FUN_14682082e body=476 status=ok
// SIG undefined FUN_14682082e(void)

void FUN_14682082e(longlong *param_1)

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



// FUNCTION 146820a0c FUN_146820a0c body=375 status=ok
// SIG undefined FUN_146820a0c(void)

undefined4 * FUN_146820a0c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146820b84(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[2] = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_40 + 3) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_40 + 0x1c) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_58 = 0;
  cVar3 = FUN_146820c6a(param_1,uVar4,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14682082e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146820b84 FUN_146820b84 body=230 status=ok
// SIG undefined FUN_146820b84(void)

int * FUN_146820b84(longlong *param_1,int *param_2)

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



// FUNCTION 146820c6a FUN_146820c6a body=135 status=ok
// SIG undefined FUN_146820c6a(void)

void FUN_146820c6a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_146820cf2();
    if (iVar10 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x28);
      FUN_1468205a0(puVar1);
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
      FUN_146820dbe(param_1,*param_4,1);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_146820c8b;
    }
  }
  uVar9 = 0;
LAB_146820c8b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 146820cf2 FUN_146820cf2 body=203 status=ok
// SIG undefined FUN_146820cf2(void)

int FUN_146820cf2(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_146820d3c:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_146820db2;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146820db2;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146820da3;
    }
  }
  return -1;
LAB_146820db2:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146820da3:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146820d3c;
}



// FUNCTION 146820dbe FUN_146820dbe body=138 status=ok
// SIG undefined FUN_146820dbe(void)

void FUN_146820dbe(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146820e48 FUN_146820e48 body=128 status=ok
// SIG undefined FUN_146820e48(void)

void FUN_146820e48(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c874630;
  if (DAT_14c874664 != 0) {
    *(int *)(DAT_14c874630 + (longlong)DAT_14c874660 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c874664) {
    iVar4 = DAT_14c874660;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14c874664 = DAT_14c874664 + 1;
  puVar3 = &DAT_14c874640;
  if (DAT_14c874650 != (undefined *)0x0) {
    puVar3 = DAT_14c874650;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c874660 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 146820ec8 FUN_146820ec8 body=285 status=ok
// SIG undefined FUN_146820ec8(void)

void FUN_146820ec8(longlong *param_1)

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
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146820fe6 FUN_146820fe6 body=114 status=ok
// SIG undefined FUN_146820fe6(void)

void FUN_146820fe6(longlong *param_1,int param_2)

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



// FUNCTION 146821058 FUN_146821058 body=96 status=ok
// SIG undefined FUN_146821058(void)

void FUN_146821058(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1468210da FUN_1468210da body=93 status=ok
// SIG undefined FUN_1468210da(void)

void FUN_1468210da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e35d40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146821138 FUN_146821138 body=126 status=ok
// SIG undefined FUN_146821138(void)

void FUN_146821138(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e35db0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e35d40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468211a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468211c0 FUN_1468211c0 body=20 status=ok
// SIG undefined FUN_1468211c0(void)

undefined8 FUN_1468211c0(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1468211d6 FUN_1468211d6 body=518 status=ok
// SIG undefined FUN_1468211d6(void)

void FUN_1468211d6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c874ac8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c874ac8,0,0,4);
  }
  uVar3 = DAT_14c874ad0;
  uVar2 = local_50;
  if (DAT_14c874ad0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c874ac0,0,DAT_14c874ad0,4);
    if (0 < (int)uVar3) {
      do {
        puVar5 = DAT_14c874ac8;
        if (DAT_14c874ac8 == (undefined *)0x0) {
          puVar5 = &DAT_14c874ac0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c874ad0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c874a98;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c874ab0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c874a88;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x60;
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c874ad0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x5c + lVar6) = iVar8;
        puVar5 = DAT_14c874ac8;
        if (DAT_14c874ac8 == (undefined *)0x0) {
          puVar5 = &DAT_14c874ac0;
        }
        *(undefined4 *)(lVar1 + 0x58 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c874ad0 - 1U & uVar9) * 4);
        puVar5 = DAT_14c874ac8;
        if (DAT_14c874ac8 == (undefined *)0x0) {
          puVar5 = &DAT_14c874ac0;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c874ad0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468213de FUN_1468213de body=52 status=ok
// SIG undefined FUN_1468213de(void)

void FUN_1468213de(void)

{
  if (1 < DAT_14c874ad0) {
    FUN_145ff3cc0();
    DAT_14c874ad0 = 1;
    FUN_1468211d6();
    return;
  }
  FUN_146821412();
  FUN_145ff3cc0();
  return;
}



// FUNCTION 146821412 FUN_146821412 body=381 status=ok
// SIG undefined FUN_146821412(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146821412(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14c874ac0;
  if (DAT_14c874ac8 != (undefined *)0x0) {
    puVar5 = DAT_14c874ac8;
  }
  iVar4 = DAT_14c874ad0 + 3;
  if (-1 < DAT_14c874ad0) {
    iVar4 = DAT_14c874ad0;
  }
  if (DAT_14c874a90 - _DAT_14c874abc < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c874a98;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c874ab0 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c874ab0;
    }
    local_78 = &DAT_14c874a88;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c874a98)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar3 * 0x60) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14c874a88 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14c874a98 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14c874ad0) {
      lVar2 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar2 * 4) = 0xffffffff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < DAT_14c874ad0);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146821590 FUN_146821590 body=138 status=ok
// SIG undefined FUN_146821590(void)

void FUN_146821590(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14682161a FUN_14682161a body=3 status=ok
// SIG undefined FUN_14682161a(void)

undefined8 FUN_14682161a(void)

{
  return 0;
}



// FUNCTION 14682161e FUN_14682161e body=3 status=ok
// SIG undefined FUN_14682161e(void)

undefined1 FUN_14682161e(void)

{
  return 1;
}



// FUNCTION 146821622 FUN_146821622 body=3 status=ok
// SIG undefined FUN_146821622(void)

undefined8 FUN_146821622(void)

{
  return 0;
}



// FUNCTION 146821626 FUN_146821626 body=3 status=ok
// SIG undefined FUN_146821626(void)

undefined1 FUN_146821626(void)

{
  return 1;
}



// FUNCTION 14682162e FUN_14682162e body=10 status=ok
// SIG undefined FUN_14682162e(void)

undefined8 * FUN_14682162e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 146821638 FUN_146821638 body=1 status=ok
// SIG undefined FUN_146821638(void)

void FUN_146821638(void)

{
  return;
}



// FUNCTION 14682163a FUN_14682163a body=3 status=ok
// SIG undefined FUN_14682163a(void)

undefined8 FUN_14682163a(void)

{
  return 0;
}



// FUNCTION 14682163e FUN_14682163e body=70 status=ok
// SIG undefined FUN_14682163e(void)

void FUN_14682163e(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)*param_1)(param_1[1],&DAT_14c874c10);
  if (cVar1 != '\x01') {
    cVar1 = (*(code *)*param_1)(param_1[1],&DAT_14c874c28);
    if (cVar1 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000146821681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(param_1[1],&DAT_14c874c40);
      return;
    }
  }
  return;
}



// FUNCTION 146821684 FUN_146821684 body=53 status=ok
// SIG undefined FUN_146821684(void)

void FUN_146821684(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  do {
    FUN_1400e9352(lVar1,param_2);
    lVar1 = *(longlong *)(lVar1 + 0x88);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1468216ba FUN_1468216ba body=31 status=ok
// SIG undefined FUN_1468216ba(void)

void FUN_1468216ba(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  do {
    *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | 6;
    lVar1 = *(longlong *)(lVar1 + 0x88);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1468216da FUN_1468216da body=31 status=ok
// SIG undefined FUN_1468216da(void)

void FUN_1468216da(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  do {
    *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) & 0xfd;
    lVar1 = *(longlong *)(lVar1 + 0x88);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1468216fa FUN_1468216fa body=32 status=ok
// SIG undefined FUN_1468216fa(void)

undefined8 FUN_1468216fa(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FArchive");
  return param_2;
}



// FUNCTION 14682171a FUN_14682171a body=41 status=ok
// SIG undefined FUN_14682171a(void)

undefined8 FUN_14682171a(undefined8 param_1)

{
  FUN_140033559(".\\Runtime/Core/Private/Serialization/Archive.cpp",0x1d9,
                L"FArchive does not support FLazyObjectPtr serialization. Use FArchiveUObject instead."
               );
  return param_1;
}



// FUNCTION 146821744 FUN_146821744 body=41 status=ok
// SIG undefined FUN_146821744(void)

undefined8 FUN_146821744(undefined8 param_1)

{
  FUN_140033559(".\\Runtime/Core/Private/Serialization/Archive.cpp",0x1e0,
                L"FArchive does not support FObjectPtr serialization. Use FArchiveUObject instead.")
  ;
  return param_1;
}



// FUNCTION 14682176e FUN_14682176e body=41 status=ok
// SIG undefined FUN_14682176e(void)

undefined8 FUN_14682176e(undefined8 param_1)

{
  FUN_140033559(".\\Runtime/Core/Private/Serialization/Archive.cpp",0x1e7,
                L"FArchive does not support FSoftObjectPtr serialization. Use FArchiveUObject instead."
               );
  return param_1;
}



// FUNCTION 146821798 FUN_146821798 body=41 status=ok
// SIG undefined FUN_146821798(void)

undefined8 FUN_146821798(undefined8 param_1)

{
  FUN_140033559(".\\Runtime/Core/Private/Serialization/Archive.cpp",0x1ee,
                L"FArchive does not support FSoftObjectPath serialization. Use FArchiveUObject instead."
               );
  return param_1;
}



// FUNCTION 1468217c2 FUN_1468217c2 body=41 status=ok
// SIG undefined FUN_1468217c2(void)

undefined8 FUN_1468217c2(undefined8 param_1)

{
  FUN_140033559(".\\Runtime/Core/Private/Serialization/Archive.cpp",0x1f5,
                L"FArchive does not support FWeakObjectPtr serialization. Use FArchiveUObject instead."
               );
  return param_1;
}



// FUNCTION 1468217ec FUN_1468217ec body=21 status=ok
// SIG undefined FUN_1468217ec(void)

void FUN_1468217ec(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401255f0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 146821802 FUN_146821802 body=8 status=ok
// SIG undefined FUN_146821802(void)

void FUN_146821802(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



// FUNCTION 14682180a FUN_14682180a body=55 status=ok
// SIG undefined FUN_14682180a(void)

void FUN_14682180a(longlong *param_1,char param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 8))();
  bVar1 = *(byte *)(lVar2 + 0x29);
  while( true ) {
    *(byte *)(lVar2 + 0x29) = bVar1 & 0xdf | param_2 << 5;
    lVar2 = *(longlong *)(lVar2 + 0x88);
    if (lVar2 == 0) break;
    bVar1 = *(byte *)(lVar2 + 0x29);
  }
  return;
}



// FUNCTION 146821842 FUN_146821842 body=30 status=ok
// SIG undefined FUN_146821842(void)

undefined8 FUN_146821842(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
  return param_2;
}



// FUNCTION 146821860 FUN_146821860 body=216 status=ok
// SIG undefined FUN_146821860(void)

longlong * FUN_146821860(longlong *param_1,longlong param_2,uint param_3)

{
  undefined1 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((int)param_3 < 2) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,(longlong)(int)param_3);
    }
    else {
      uVar5 = (ulonglong)param_3;
      lVar4 = 0;
      lVar3 = uVar5 - 2;
      do {
        uVar1 = *(undefined1 *)(param_2 + 1 + lVar3);
        *(undefined1 *)(param_2 + 1 + lVar3) = *(undefined1 *)(param_2 + lVar4);
        *(undefined1 *)(param_2 + lVar4) = uVar1;
        lVar4 = lVar4 + 1;
        bVar2 = lVar4 < lVar3;
        lVar3 = lVar3 + -1;
      } while (bVar2);
      (**(code **)(*param_1 + 0x170))(param_1,param_2,uVar5);
      lVar4 = 0;
      lVar3 = uVar5 - 2;
      do {
        uVar1 = *(undefined1 *)(param_2 + 1 + lVar3);
        *(undefined1 *)(param_2 + 1 + lVar3) = *(undefined1 *)(param_2 + lVar4);
        *(undefined1 *)(param_2 + lVar4) = uVar1;
        lVar4 = lVar4 + 1;
        bVar2 = lVar4 < lVar3;
        lVar3 = lVar3 + -1;
      } while (bVar2);
    }
  }
  else {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,(longlong)(int)param_3);
    if (1 < (int)param_3) {
      lVar4 = 0;
      lVar3 = (longlong)(int)param_3 + -2;
      do {
        uVar1 = *(undefined1 *)(param_2 + 1 + lVar3);
        *(undefined1 *)(param_2 + 1 + lVar3) = *(undefined1 *)(param_2 + lVar4);
        *(undefined1 *)(param_2 + lVar4) = uVar1;
        lVar4 = lVar4 + 1;
        bVar2 = lVar4 < lVar3;
        lVar3 = lVar3 + -1;
      } while (bVar2);
    }
  }
  return param_1;
}



// FUNCTION 146821938 thunk_FUN_1457251a8 body=5 status=ok
// SIG undefined thunk_FUN_1457251a8(void)

longlong * thunk_FUN_1457251a8(longlong *param_1,ushort *param_2)

{
  undefined1 auStack_48 [46];
  ushort uStack_1a;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uStack_1a = *param_2 << 8 | *param_2 >> 8;
    (**(code **)(*param_1 + 0x170))(param_1,&uStack_1a,2);
  }
  else {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    *param_2 = *param_2 << 8 | *param_2 >> 8;
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682193e thunk_FUN_14572512c body=5 status=ok
// SIG undefined thunk_FUN_14572512c(void)

longlong * thunk_FUN_14572512c(longlong *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [44];
  uint uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar1 = *param_2;
    uStack_1c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    (**(code **)(*param_1 + 0x170))(param_1,&uStack_1c,4);
  }
  else {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146821944 thunk_FUN_146821949 body=5 status=ok
// SIG undefined thunk_FUN_146821949(void)

longlong * thunk_FUN_146821949(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_48 [40];
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar1 = *param_2;
    uStack_20 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 |
                uVar1 << 0x38;
    (**(code **)(*param_1 + 0x170))(param_1,&uStack_20,8);
  }
  else {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146821949 FUN_146821949 body=129 status=ok
// SIG undefined FUN_146821949(void)

longlong * FUN_146821949(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar1 = *param_2;
    local_20 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    (**(code **)(*param_1 + 0x170))(param_1,&local_20,8);
  }
  else {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468219cc FUN_1468219cc body=349 status=ok
// SIG undefined FUN_1468219cc(void)

void FUN_1468219cc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  void *_Memory;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = 0x400;
  _Memory = (void *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  do {
    free(_Memory);
    _Memory = malloc((ulonglong)uVar6 * 2);
    local_50 = &local_res18;
    puVar4 = (undefined8 *)FUN_144737586();
    local_68 = 0;
    local_60 = &local_res18;
    uVar3 = __stdio_common_vswprintf(*puVar4,_Memory,(ulonglong)uVar6,param_2);
    uVar5 = 0xffffffff;
    if ((int)uVar3 >= 0) {
      uVar5 = uVar3;
    }
    bVar1 = (int)uVar6 <= (int)uVar5;
    uVar6 = uVar6 * 2;
  } while (bVar1 || (int)uVar3 < 0);
  *(undefined2 *)((longlong)_Memory + (ulonglong)uVar5 * 2) = 0;
  if (uVar3 != 0) {
    uVar8 = 0;
    do {
      uVar2 = *(ushort *)((longlong)_Memory + uVar8 * 2);
      local_50 = (undefined8 *)CONCAT62(local_50._2_6_,uVar2);
      if (0x7f < uVar2) {
        thunk_FUN_140e0237d(&local_50,1);
        uVar2 = 0x3f;
      }
      local_50 = (undefined8 *)CONCAT71(local_50._1_7_,(char)uVar2);
      (**(code **)(*param_1 + 0x170))(param_1,&local_50,1);
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
  }
  lVar7 = 0;
  do {
    local_50 = (undefined8 *)CONCAT71(local_50._1_7_,(&DAT_149e02010)[lVar7]);
    (**(code **)(*param_1 + 0x170))(param_1,&local_50,1);
    lVar7 = lVar7 + 2;
  } while (lVar7 != 4);
  free(_Memory);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146821b46 FUN_146821b46 body=14 status=ok
// SIG undefined FUN_146821b46(void)

void FUN_146821b46(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xdf | param_2 << 5;
  return;
}



// FUNCTION 146821b62 FUN_146821b62 body=295 status=ok
// SIG undefined FUN_146821b62(void)

longlong * FUN_146821b62(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  *param_1 = (longlong)&PTR__purecall_149e35f70;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[1] = (longlong)(param_1 + 2);
  param_1[0xf] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = DAT_14c89603c;
  *(undefined4 *)(param_1 + 9) = 1;
  puVar3 = (undefined8 *)FUN_144a8b586();
  *(undefined8 *)((longlong)param_1 + 0x4c) = *puVar3;
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xc] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)((longlong)param_1 + 0x2c) = *(byte *)((longlong)param_1 + 0x2c) & 0xfc;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  param_1[0xf] = 0;
  if (*(code **)(*param_1 + 0x68) == FUN_146821802) {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  *param_1 = (longlong)&PTR_FUN_149e36e20;
  lVar1 = DAT_14c874d68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  param_1[7] = (longlong)*(int *)(lVar1 + uVar4 * 4);
  return param_1;
}



// FUNCTION 146821c8a FUN_146821c8a body=112 status=ok
// SIG undefined FUN_146821c8a(void)

undefined8 * FUN_146821c8a(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1407134c4();
  *param_1 = &PTR_FUN_149e37220;
  param_1[0x12] = 0;
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined8 *)(param_2 + 0x98) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar1;
  return param_1;
}



// FUNCTION 146821cfa FUN_146821cfa body=60 status=ok
// SIG undefined FUN_146821cfa(void)

void FUN_146821cfa(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x98),(longlong)*(int *)(param_1 + 0x9c));
                    /* WARNING: Could not recover jumptable at 0x000146821d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,0xb0,0xb0);
  return;
}



// FUNCTION 146821d36 FUN_146821d36 body=99 status=ok
// SIG undefined FUN_146821d36(void)

void FUN_146821d36(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  if ((*(byte *)(param_1 + 0x29) & 2) == 0) {
    if (*(longlong *)(param_1 + 0xa0) < *(longlong *)(param_1 + 0xa8) + param_4) {
      FUN_1405d09b8(param_1,param_4);
      return;
    }
    if (param_4 != 0) {
      FUN_1449bc9dc(param_2,param_3,*(undefined8 *)(param_1 + 0x90),*(longlong *)(param_1 + 0xa8),
                    (int)param_4);
      *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + param_4;
    }
  }
  return;
}



// FUNCTION 146821d9a FUN_146821d9a body=70 status=ok
// SIG undefined FUN_146821d9a(void)

undefined8 * FUN_146821d9a(undefined8 *param_1)

{
  FUN_146821b62();
  *param_1 = &PTR_FUN_149e37560;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 1;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 0x80;
  return param_1;
}



// FUNCTION 146821de0 FUN_146821de0 body=60 status=ok
// SIG undefined FUN_146821de0(void)

void FUN_146821de0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x98),(longlong)*(int *)(param_1 + 0x9c));
                    /* WARNING: Could not recover jumptable at 0x000146821e19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,0xb8,0xb8);
  return;
}



// FUNCTION 146821e1c FUN_146821e1c body=127 status=ok
// SIG undefined FUN_146821e1c(void)

void FUN_146821e1c(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  bVar1 = *(byte *)((longlong)param_2 + 5);
  uVar8 = (uint)*(byte *)((longlong)param_2 + 6) * 0x100;
  bVar2 = *(byte *)((longlong)param_2 + 7);
  uVar7 = param_2[2];
  bVar3 = *(byte *)((longlong)param_2 + 9);
  uVar4 = *(ushort *)((longlong)param_2 + 10);
  *param_1 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  param_1[1] = (uVar8 & 0xf00) + ((uint)bVar2 | (uint)bVar1 << 0x10 | uVar6 << 0x18) + 0x4000;
  param_1[2] = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8) +
               (uVar7 * 0x1000000 & 0x3f000000 | (uint)bVar3 << 0x10) + 0x80000000;
  param_1[3] = uVar7 * 0x1000000 + uVar8;
  return;
}



// FUNCTION 146821e9c FUN_146821e9c body=272 status=ok
// SIG undefined FUN_146821e9c(void)

void FUN_146821e9c(byte *param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if ((param_3 & 0x40) != 0) {
    param_3 = *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 | 0x40;
  }
  if ((char)param_3 < '\0') {
    uVar5 = (ulonglong)(byte)~*param_2 * 2 + 1;
    uVar3 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar2 = 9 - (uint)uVar3;
    uVar4 = 0xffU >> ((byte)uVar2 & 0x1f) & (uint)*param_2;
    uVar5 = (ulonglong)uVar4;
    if ((uint)uVar3 < 8) {
      pbVar6 = param_2 + 1;
      switch(uVar3 & 0xffffffff) {
      case 0:
        pbVar6 = param_2 + 2;
        uVar4 = (uint)param_2[1];
      case 1:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar4 = uVar4 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar5 = (ulonglong)(uVar4 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 << 8 | (ulonglong)bVar1;
      case 7:
        uVar5 = uVar5 << 8 | (ulonglong)*pbVar6;
      }
    }
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
  }
  uVar3 = 0xffffffff;
  if (uVar5 < 0xffffffff) {
    uVar3 = uVar5;
  }
  *param_1 = param_3;
  *(int *)(param_1 + 4) = (int)uVar3;
  *(byte **)(param_1 + 8) = param_2 + uVar2 + uVar5;
  return;
}



// FUNCTION 146821fac FUN_146821fac body=336 status=ok
// SIG undefined FUN_146821fac(void)

undefined8 * FUN_146821fac(byte *param_1,undefined8 *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_1 & 0x1f) != 7) {
    param_1[1] = 1;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)param_2 = *param_3;
    *(undefined4 *)((longlong)param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 1) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  pbVar2 = *(byte **)(param_1 + 8);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  uVar9 = (ulonglong)(byte)~*pbVar2 * 2 + 1;
  uVar3 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  uVar7 = 9 - (uint)uVar3;
  uVar8 = 0xffU >> ((byte)uVar7 & 0x1f) & (uint)*pbVar2;
  uVar9 = (ulonglong)uVar8;
  if ((uint)uVar3 < 8) {
    pbVar10 = pbVar2 + 1;
    switch(uVar3 & 0xffffffff) {
    case 0:
      pbVar10 = pbVar2 + 2;
      uVar8 = (uint)pbVar2[1];
    case 1:
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar8 = uVar8 << 8 | (uint)bVar1;
    case 2:
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar9 = (ulonglong)(uVar8 << 8) | (ulonglong)bVar1;
    case 3:
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar9 = uVar9 << 8 | (ulonglong)bVar1;
    case 4:
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar9 = uVar9 << 8 | (ulonglong)bVar1;
    case 5:
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar9 = uVar9 << 8 | (ulonglong)bVar1;
    case 6:
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar9 = uVar9 << 8 | (ulonglong)bVar1;
    }
    if ((uVar9 << 8 & 0xffffffff80000000) != 0) {
      param_1[1] = 2;
      *(undefined4 *)param_2 = local_28;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_24;
      *(undefined4 *)(param_2 + 1) = uStack_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1c;
      goto LAB_1468220e6;
    }
    uVar8 = (uint)(uVar9 << 8) | (uint)*pbVar10;
  }
  param_1[1] = 0;
  *param_2 = pbVar2 + uVar7;
  *(uint *)(param_2 + 1) = uVar8;
LAB_1468220e6:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468220fe FUN_1468220fe body=293 status=ok
// SIG undefined FUN_1468220fe(void)

longlong FUN_1468220fe(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  switch(*param_1 & 0x1f) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0x1e:
  case 0x1f:
    pbVar2 = *(byte **)(param_1 + 8);
    uVar7 = (ulonglong)(byte)~*pbVar2 * 2 + 1;
    uVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    break;
  case 8:
  case 9:
    uVar7 = (ulonglong)(**(byte **)(param_1 + 8) ^ 0xff) * 2 + 1;
    uVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    return (uVar3 ^ 0x3f) - 0x36;
  case 10:
    return 4;
  case 0xb:
  case 0x12:
  case 0x13:
    return 8;
  default:
    return 0;
  case 0xe:
  case 0xf:
  case 0x10:
    return 0x14;
  case 0x11:
    return 0x10;
  case 0x14:
    return 0xc;
  }
  uVar5 = 9 - (uint)uVar3;
  uVar6 = 0xffU >> ((byte)uVar5 & 0x1f) & (uint)*pbVar2;
  uVar7 = (ulonglong)uVar6;
  if ((uint)uVar3 < 8) {
    pbVar4 = pbVar2 + 1;
    switch(uVar3 & 0xffffffff) {
    case 0:
      uVar6 = (uint)pbVar2[1];
      pbVar4 = pbVar2 + 2;
    case 1:
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar6 = uVar6 << 8 | (uint)bVar1;
    case 2:
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar7 = (ulonglong)(uVar6 << 8) | (ulonglong)bVar1;
    case 3:
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case 4:
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case 5:
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case 6:
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case 7:
      uVar7 = uVar7 << 8 | (ulonglong)*pbVar4;
    }
  }
  return uVar5 + uVar7;
}



// FUNCTION 146822224 FUN_146822224 body=410 status=ok
// SIG undefined FUN_146822224(void)

undefined8 * FUN_146822224(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar3 = *param_1 & 0x1e;
  if ((byte)(bVar3 - 2) < 4) {
    pbVar10 = *(byte **)(param_1 + 8);
    uVar8 = (ulonglong)(byte)~*pbVar10 * 2 + 1;
    uVar5 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    uVar4 = 9 - (uint)uVar5;
    uVar7 = 0xffU >> ((byte)uVar4 & 0x1f) & (uint)*pbVar10;
    uVar8 = (ulonglong)uVar7;
    if ((uint)uVar5 < 8) {
      pbVar6 = pbVar10 + 1;
      switch(uVar5 & 0xffffffff) {
      case 0:
        pbVar6 = pbVar10 + 2;
        uVar7 = (uint)pbVar10[1];
      case 1:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar7 = uVar7 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar8 = (ulonglong)(uVar7 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar8 = uVar8 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar8 = uVar8 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar8 = uVar8 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar8 = uVar8 << 8 | (ulonglong)bVar1;
      case 7:
        uVar8 = uVar8 << 8 | (ulonglong)*pbVar6;
      }
    }
    pbVar10 = pbVar10 + uVar4;
    if (bVar3 == 4) {
      uVar5 = (ulonglong)(*pbVar10 ^ 0xff) * 2 + 1;
      uVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar2 == 0; uVar2 = uVar2 - 1) {
        }
      }
      uVar5 = (uVar2 ^ 0x3f) - 0x36;
    }
    else {
      uVar5 = 0;
    }
    if (uVar5 < uVar8) {
      pbVar9 = pbVar10 + uVar8;
      pbVar6 = pbVar10 + uVar5;
      bVar3 = *param_1 & 0x1f;
      if ((bVar3 == 5) ||
         (pbVar10 = (byte *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),0x40), bVar3 == 3)) {
        pbVar10 = (byte *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),*pbVar6);
        pbVar6 = pbVar6 + 1;
      }
      if (pbVar9 == pbVar6) {
        *param_2 = 0;
        param_2[1] = 0;
        pbVar9 = (byte *)0x0;
      }
      else {
        FUN_146821e9c(&local_30,pbVar6,pbVar10);
        *(undefined4 *)param_2 = local_30;
        *(undefined4 *)((longlong)param_2 + 4) = uStack_2c;
        *(undefined4 *)(param_2 + 1) = uStack_28;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
      }
      param_2[2] = pbVar9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468223c2 FUN_1468223c2 body=72 status=ok
// SIG undefined FUN_1468223c2(void)

uint * FUN_1468223c2(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 2);
  lVar4 = FUN_1468220fe();
  uVar5 = 0;
  uVar6 = *(ulonglong *)(param_1 + 4);
  uVar2 = lVar1 + lVar4;
  uVar3 = (ulonglong)*param_1;
  if (lVar1 + lVar4 == *(ulonglong *)(param_1 + 4)) {
    uVar6 = uVar5;
    uVar2 = uVar5;
    uVar3 = uVar5;
  }
  FUN_146821e9c(param_1,uVar2,uVar3);
  *(ulonglong *)(param_1 + 4) = uVar6;
  return param_1;
}



// FUNCTION 14682240a FUN_14682240a body=232 status=ok
// SIG undefined FUN_14682240a(void)

uint * FUN_14682240a(undefined8 param_1,uint *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146822224(param_1,&local_58);
  if ((local_58 & 0x1f) != 0) {
    uVar8 = 0;
    do {
      lVar7 = CONCAT44(uStack_4c,uStack_50);
      bVar5 = (byte)local_58;
      if (*(uint *)(param_3 + 1) == uStack_54) {
        if ((uStack_54 == 0) ||
           (iVar3 = FUN_14018695a(*param_3,lVar7 - (ulonglong)uStack_54), iVar3 == 0))
        goto LAB_1468224c7;
        lVar7 = CONCAT44(uStack_4c,uStack_50);
        bVar5 = (byte)local_58;
      }
      lVar4 = FUN_1468220fe(&local_58);
      uVar6 = local_48;
      uVar1 = lVar7 + lVar4;
      uVar2 = (ulonglong)bVar5;
      if (lVar7 + lVar4 == local_48) {
        uVar6 = uVar8;
        uVar1 = uVar8;
        uVar2 = uVar8;
      }
      FUN_146821e9c(&local_58,uVar1,uVar2);
      local_48 = uVar6;
    } while ((local_58 & 0x1f) != 0);
  }
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
LAB_1468224c7:
  *param_2 = local_58;
  param_2[1] = uStack_54;
  param_2[2] = uStack_50;
  param_2[3] = uStack_4c;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468224f4 FUN_1468224f4 body=25 status=ok
// SIG undefined FUN_1468224f4(void)

undefined8 FUN_1468224f4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1468220fe();
  return CONCAT71((int7)(lVar1 - 2U >> 8),lVar1 - 2U < 0xfffffffffffffffd);
}



// FUNCTION 14682250e FUN_14682250e body=72 status=ok
// SIG undefined FUN_14682250e(void)

uint * FUN_14682250e(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 2);
  lVar4 = FUN_1468220fe();
  uVar5 = 0;
  uVar6 = *(ulonglong *)(param_1 + 6);
  uVar2 = lVar1 + lVar4;
  uVar3 = (ulonglong)*param_1;
  if (lVar1 + lVar4 == *(ulonglong *)(param_1 + 6)) {
    uVar6 = uVar5;
    uVar2 = uVar5;
    uVar3 = uVar5;
  }
  FUN_146821e9c(param_1,uVar2,uVar3);
  *(ulonglong *)(param_1 + 6) = uVar6;
  return param_1;
}



// FUNCTION 146822556 FUN_146822556 body=47 status=ok
// SIG undefined FUN_146822556(void)

void FUN_146822556(longlong *param_1)

{
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146822585 FUN_146822585 body=796 status=ok
// SIG undefined FUN_146822585(void)

bool FUN_146822585(undefined8 *param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  
  if (param_1[1] == 0) {
    *param_2 = 0;
    lVar9 = 1;
    goto LAB_1468226ed;
  }
  bVar1 = *(byte *)*param_1;
  *param_1 = (byte *)*param_1 + 1;
  param_1[1] = param_1[1] + -1;
  uVar10 = bVar1 & 0x1f;
  switch(uVar10) {
  case 1:
  case 0xc:
  case 0xd:
    bVar7 = 0;
    goto LAB_1468225da;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x1e:
  case 0x1f:
    bVar7 = 1;
LAB_1468225da:
    lVar9 = 0;
    goto LAB_1468225dd;
  case 10:
    lVar9 = 4;
    break;
  case 0xb:
  case 0x12:
  case 0x13:
    lVar9 = 8;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    lVar9 = 0x14;
    break;
  case 0x11:
    lVar9 = 0x10;
    break;
  case 0x14:
    lVar9 = 0xc;
    break;
  default:
    *param_2 = 0;
    lVar9 = 0;
    goto LAB_1468226ed;
  }
  bVar7 = 0;
LAB_1468225dd:
  *param_2 = bVar1;
  uVar8 = 1;
  if ((char)bVar1 < '\0') {
    uVar5 = param_1[1];
    if (uVar5 != 0) {
      pbVar2 = (byte *)*param_1;
      uVar8 = (ulonglong)(*pbVar2 ^ 0xff) * 2 + 1;
      uVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      uVar4 = 9 - (uint)uVar3;
      uVar8 = (ulonglong)uVar4;
      if (uVar8 <= uVar5) {
        uVar4 = 0xffU >> ((byte)uVar4 & 0x1f) & (uint)*pbVar2;
        uVar6 = (ulonglong)uVar4;
        if ((uint)uVar3 < 8) {
          pbVar11 = pbVar2 + 1;
          switch(uVar3 & 0xffffffff) {
          case 0:
            pbVar11 = pbVar2 + 2;
            uVar4 = (uint)pbVar2[1];
          case 1:
            bVar1 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar4 = uVar4 << 8 | (uint)bVar1;
          case 2:
            bVar1 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar6 = (ulonglong)(uVar4 << 8) | (ulonglong)bVar1;
          case 3:
            bVar1 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar6 = uVar6 << 8 | (ulonglong)bVar1;
          case 4:
            bVar1 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar6 = uVar6 << 8 | (ulonglong)bVar1;
          case 5:
            bVar1 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar6 = uVar6 << 8 | (ulonglong)bVar1;
          case 6:
            bVar1 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar6 = uVar6 << 8 | (ulonglong)bVar1;
          case 7:
            uVar6 = uVar6 << 8 | (ulonglong)*pbVar11;
          }
        }
        uVar6 = uVar6 + uVar8;
        if ((bool)(bVar7 & uVar5 < uVar6)) {
          lVar9 = uVar6 + 1;
          bVar12 = false;
          goto LAB_1468226ef;
        }
        uVar8 = uVar6;
        if (uVar5 < uVar6) {
          uVar8 = uVar5;
        }
        *param_1 = pbVar2 + uVar8;
        param_1[1] = uVar5 - uVar8;
        uVar8 = uVar6 + 1;
        goto LAB_1468225ed;
      }
      goto LAB_14682272c;
    }
    lVar9 = 2;
LAB_1468226ed:
    bVar12 = false;
  }
  else {
LAB_1468225ed:
    if ((byte)uVar10 < 0x20) {
      if ((0xc00000fcU >> uVar10 & 1) != 0) {
        if (param_1[1] != 0) {
          pbVar2 = (byte *)*param_1;
          uVar5 = (ulonglong)(*pbVar2 ^ 0xff) * 2 + 1;
          uVar3 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> uVar3 == 0; uVar3 = uVar3 - 1) {
            }
          }
          uVar10 = 9 - (uint)uVar3;
          bVar12 = (ulonglong)uVar10 <= (ulonglong)param_1[1];
          if (bVar12) {
            uVar4 = 0xffU >> ((byte)uVar10 & 0x1f) & (uint)*pbVar2;
            uVar5 = (ulonglong)uVar4;
            if ((uint)uVar3 < 8) {
              pbVar11 = pbVar2 + 1;
              switch(uVar3 & 0xffffffff) {
              case 0:
                uVar4 = (uint)pbVar2[1];
                pbVar11 = pbVar2 + 2;
              case 1:
                bVar1 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                uVar4 = uVar4 << 8 | (uint)bVar1;
              case 2:
                bVar1 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                uVar5 = (ulonglong)(uVar4 << 8) | (ulonglong)bVar1;
              case 3:
                bVar1 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                uVar5 = uVar5 << 8 | (ulonglong)bVar1;
              case 4:
                bVar1 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                uVar5 = uVar5 << 8 | (ulonglong)bVar1;
              case 5:
                bVar1 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                uVar5 = uVar5 << 8 | (ulonglong)bVar1;
              case 6:
                bVar1 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                uVar5 = uVar5 << 8 | (ulonglong)bVar1;
              case 7:
                uVar5 = uVar5 << 8 | (ulonglong)*pbVar11;
              }
            }
            uVar8 = uVar8 + uVar5;
          }
          lVar9 = uVar8 + uVar10;
          goto LAB_1468226ef;
        }
LAB_14682272c:
        lVar9 = uVar8 + 1;
        goto LAB_1468226ed;
      }
      if ((0x300U >> uVar10 & 1) == 0) goto LAB_14682284b;
      if (param_1[1] == 0) goto LAB_14682272c;
      uVar5 = (ulonglong)(*(byte *)*param_1 ^ 0xff) * 2 + 1;
      uVar3 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      lVar9 = uVar8 + (uVar3 ^ 0x3f) + -0x36;
    }
    else {
LAB_14682284b:
      lVar9 = uVar8 + lVar9;
    }
    bVar12 = true;
  }
LAB_1468226ef:
  *param_3 = lVar9;
  return bVar12;
}



// FUNCTION 1468228d4 FUN_1468228d4 body=4007 status=ok
// SIG undefined FUN_1468228d4(void)

void FUN_1468228d4(longlong *param_1,byte *param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  double dVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 **ppuVar12;
  char *pcVar13;
  undefined *puVar14;
  uint uVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_108 [32];
  byte *local_e8;
  longlong local_e0;
  byte *local_d8;
  undefined4 local_d0;
  byte *local_c8;
  longlong local_c0;
  byte *local_b8;
  uint local_b0;
  byte *local_a8;
  ulonglong local_a0;
  undefined8 **local_98;
  ulonglong uStack_90;
  undefined8 **local_88;
  ulonglong uStack_80;
  longlong local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((char)param_1[0xd] == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x2c;
  }
  if (*(char *)((longlong)param_1 + 0x69) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x69) = 0;
    FUN_1467f3718(*param_1,param_1[1],(int)param_1[2] - (int)param_1[1]);
  }
  uVar15 = *(uint *)(param_2 + 4);
  if ((ulonglong)uVar15 != 0) {
    local_78 = *(longlong *)(param_2 + 8) - (ulonglong)uVar15;
    local_70 = uVar15;
    FUN_1468293a2(param_1);
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x3a;
    FUN_1467f3718(lVar10,param_1[0xb],(int)param_1[0xc]);
  }
  if (0x1e < (*param_2 & 0x1f) - 1) goto switchD_14682296e_caseD_15;
  puVar2 = *(ulonglong **)(param_2 + 8);
  switch(*param_2 & 0x1f) {
  case 1:
    lVar10 = *param_1;
    puVar6 = *(undefined4 **)(lVar10 + 8);
    if (*(undefined4 **)(lVar10 + 0x10) <= puVar6 + 1) {
      FUN_1402134d6(lVar10,4);
      puVar6 = *(undefined4 **)(lVar10 + 8);
    }
    *puVar6 = 0x6c6c756e;
    goto LAB_146822bee;
  case 2:
  case 3:
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x7b;
    FUN_1467f3718(param_1 + 1,param_1[9],(int)param_1[10]);
    *(undefined1 *)((longlong)param_1 + 0x69) = 1;
    FUN_146822224(param_2,&local_68);
    if (((ulonglong)local_68 & 0x1f) != 0) {
      uVar16 = 0;
      do {
        local_88 = local_68;
        uStack_80 = uStack_60;
        FUN_1468228d4(param_1,&local_88);
        uVar5 = uStack_60;
        lVar10 = FUN_1468220fe(&local_68);
        uVar19 = local_58;
        uVar21 = uVar5 + lVar10;
        uVar3 = (ulonglong)local_68 & 0xffffffff;
        if (uVar5 + lVar10 == local_58) {
          uVar19 = uVar16;
          uVar21 = uVar16;
          uVar3 = uVar16;
        }
        FUN_146821e9c(&local_68,uVar21,uVar3);
        local_58 = uVar19;
      } while (((ulonglong)local_68 & 0x1f) != 0);
    }
    lVar10 = param_1[2] - (longlong)(int)param_1[10];
    param_1[2] = lVar10;
    if (((char)param_1[0xd] != '\0') && (*(char *)((longlong)param_1 + 0x69) == '\x01')) {
      *(undefined1 *)((longlong)param_1 + 0x69) = 0;
      FUN_1467f3718(*param_1,param_1[1],(int)lVar10 - (int)param_1[1]);
    }
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    goto LAB_14682377d;
  case 4:
  case 5:
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x5b;
    FUN_1467f3718(param_1 + 1,param_1[9],(int)param_1[10]);
    *(undefined1 *)((longlong)param_1 + 0x69) = 1;
    FUN_146822224(param_2,&local_68);
    if (((ulonglong)local_68 & 0x1f) != 0) {
      uVar16 = 0;
      do {
        local_98 = local_68;
        uStack_90 = uStack_60;
        FUN_1468228d4(param_1,&local_98);
        uVar5 = uStack_60;
        lVar10 = FUN_1468220fe(&local_68);
        uVar19 = local_58;
        uVar21 = uVar5 + lVar10;
        uVar3 = (ulonglong)local_68 & 0xffffffff;
        if (uVar5 + lVar10 == local_58) {
          uVar19 = uVar16;
          uVar21 = uVar16;
          uVar3 = uVar16;
        }
        FUN_146821e9c(&local_68,uVar21,uVar3);
        local_58 = uVar19;
      } while (((ulonglong)local_68 & 0x1f) != 0);
    }
    lVar10 = param_1[2] - (longlong)(int)param_1[10];
    param_1[2] = lVar10;
    if (((char)param_1[0xd] != '\0') && (*(char *)((longlong)param_1 + 0x69) == '\x01')) {
      *(undefined1 *)((longlong)param_1 + 0x69) = 0;
      FUN_1467f3718(*param_1,param_1[1],(int)lVar10 - (int)param_1[1]);
    }
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x5d;
    break;
  case 6:
    uVar16 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar21 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> uVar21 == 0; uVar21 = uVar21 - 1) {
      }
    }
    uVar20 = 9 - (uint)uVar21;
    uVar15 = 0xffU >> ((byte)uVar20 & 0x1f) & (uint)(byte)*puVar2;
    local_a0 = (ulonglong)uVar15;
    if ((uint)uVar21 < 8) {
      pbVar9 = (byte *)((longlong)puVar2 + 1);
      switch(uVar21 & 0xffffffff) {
      case 0:
        pbVar9 = (byte *)((longlong)puVar2 + 2);
        uVar15 = (uint)*(byte *)((longlong)puVar2 + 1);
      case 1:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar15 = uVar15 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        local_a0 = (ulonglong)(uVar15 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        local_a0 = local_a0 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        local_a0 = local_a0 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        local_a0 = local_a0 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        local_a0 = local_a0 << 8 | (ulonglong)bVar1;
      case 7:
        local_a0 = local_a0 << 8 | (ulonglong)*pbVar9;
      }
    }
    local_a8 = (byte *)((longlong)puVar2 + (ulonglong)uVar20);
    FUN_1468296ee(param_1);
    break;
  case 7:
    uVar16 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar21 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> uVar21 == 0; uVar21 = uVar21 - 1) {
      }
    }
    uVar15 = 9 - (uint)uVar21;
    local_b0 = 0xffU >> ((byte)uVar15 & 0x1f) & (uint)(byte)*puVar2;
    if ((uint)uVar21 < 8) {
      pbVar9 = (byte *)((longlong)puVar2 + 1);
      uVar21 = uVar21 & 0xffffffff;
      puVar18 = puVar2;
      switch(uVar21) {
      case 0:
        uVar21 = 2;
      case 1:
        puVar18 = (ulonglong *)(uVar21 + (longlong)puVar2);
      case 2:
        pbVar9 = (byte *)((longlong)puVar18 + 2);
      case 3:
        pbVar9 = pbVar9 + 1;
      case 4:
        local_b0 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      case 5:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        local_b0 = local_b0 << 8 | (uint)bVar1;
      case 6:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        local_b0 = local_b0 << 8 | (uint)bVar1;
      case 7:
        local_b0 = local_b0 << 8 | (uint)*pbVar9;
      }
    }
    local_b8 = (byte *)((longlong)puVar2 + (ulonglong)uVar15);
    FUN_1468293a2(param_1);
    break;
  case 8:
    uVar16 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar21 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> uVar21 == 0; uVar21 = uVar21 - 1) {
      }
    }
    lVar10 = *param_1;
    uVar15 = 0xffU >> (9U - (char)uVar21 & 0x1f) & (uint)(byte)*puVar2;
    uVar16 = (ulonglong)uVar15;
    if ((uint)uVar21 < 8) {
      pbVar9 = (byte *)((longlong)puVar2 + 1);
      switch(uVar21 & 0xffffffff) {
      case 0:
        uVar15 = (uint)*(byte *)((longlong)puVar2 + 1);
        pbVar9 = (byte *)((longlong)puVar2 + 2);
      case 1:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar15 = uVar15 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = (ulonglong)(uVar15 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 7:
        uVar16 = uVar16 << 8 | (ulonglong)*pbVar9;
      }
    }
    puVar14 = &DAT_149e1d7be;
    goto LAB_146822cb9;
  case 9:
    uVar16 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar21 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> uVar21 == 0; uVar21 = uVar21 - 1) {
      }
    }
    lVar10 = *param_1;
    uVar15 = 0xffU >> (9U - (char)uVar21 & 0x1f) & (uint)(byte)*puVar2;
    uVar16 = (ulonglong)uVar15;
    if ((uint)uVar21 < 8) {
      pbVar9 = (byte *)((longlong)puVar2 + 1);
      switch(uVar21 & 0xffffffff) {
      case 0:
        uVar15 = (uint)*(byte *)((longlong)puVar2 + 1);
        pbVar9 = (byte *)((longlong)puVar2 + 2);
      case 1:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar15 = uVar15 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = (ulonglong)(uVar15 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 7:
        uVar16 = uVar16 << 8 | (ulonglong)*pbVar9;
      }
    }
    uVar16 = ~uVar16;
    puVar14 = &DAT_149e1d7c3;
LAB_146822cb9:
    FUN_140850d22(lVar10,puVar14,uVar16);
    break;
  case 10:
    lVar10 = *param_1;
    uVar15 = (uint)*puVar2;
    dVar7 = (double)(float)(uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                           uVar15 << 0x18);
    pcVar13 = "%.9g";
    goto LAB_146822cda;
  case 0xb:
    lVar10 = *param_1;
    uVar16 = *puVar2;
    dVar7 = (double)(uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                     (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                     (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                     (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38);
    pcVar13 = "%.17g";
LAB_146822cda:
    FUN_140850d22(lVar10,pcVar13,dVar7);
    break;
  case 0xc:
    lVar10 = *param_1;
    puVar6 = *(undefined4 **)(lVar10 + 8);
    if (*(ulonglong *)(lVar10 + 0x10) <= (longlong)puVar6 + 5U) {
      FUN_1402134d6(lVar10,5);
      puVar6 = *(undefined4 **)(lVar10 + 8);
    }
    *(undefined1 *)(puVar6 + 1) = 0x65;
    *puVar6 = 0x736c6166;
    puVar6 = (undefined4 *)((longlong)puVar6 + 5);
    goto LAB_146822bf2;
  case 0xd:
    lVar10 = *param_1;
    puVar6 = *(undefined4 **)(lVar10 + 8);
    if (*(undefined4 **)(lVar10 + 0x10) <= puVar6 + 1) {
      FUN_1402134d6(lVar10,4);
      puVar6 = *(undefined4 **)(lVar10 + 8);
    }
    *puVar6 = 0x65757274;
LAB_146822bee:
    puVar6 = puVar6 + 1;
LAB_146822bf2:
    *(undefined4 **)(lVar10 + 8) = puVar6;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x22;
    local_50 = &local_68;
    local_58 = CONCAT44(local_58._4_4_,(uint)puVar2[2]);
    local_68 = (undefined8 **)*puVar2;
    uStack_60 = puVar2[1];
    ppuVar12 = &local_50;
    local_48 = 0x14;
    goto LAB_1468229c5;
  case 0x11:
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x22;
    local_68._0_4_ = (uint)*puVar2;
    local_68._4_4_ = (uint)(*puVar2 >> 0x20);
    local_68 = (undefined8 **)
               CONCAT44(local_68._4_4_ >> 0x18 | (local_68._4_4_ & 0xff0000) >> 8 |
                        (local_68._4_4_ & 0xff00) << 8 | local_68._4_4_ << 0x18,
                        (uint)local_68 >> 0x18 | ((uint)local_68 & 0xff0000) >> 8 |
                        ((uint)local_68 & 0xff00) << 8 | (uint)local_68 << 0x18);
    uStack_60._0_4_ = (uint)puVar2[1];
    uStack_60._4_4_ = (uint)(puVar2[1] >> 0x20);
    uStack_60 = CONCAT44(uStack_60._4_4_ >> 0x18 | (uStack_60._4_4_ & 0xff0000) >> 8 |
                         (uStack_60._4_4_ & 0xff00) << 8 | uStack_60._4_4_ << 0x18,
                         (uint)uStack_60 >> 0x18 | ((uint)uStack_60 & 0xff0000) >> 8 |
                         ((uint)uStack_60 & 0xff00) << 8 | (uint)uStack_60 << 0x18);
    FUN_1468122ee(&local_68,lVar10,3);
    goto LAB_1468229cd;
  case 0x12:
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x22;
    uVar16 = *puVar2;
    local_50 = (undefined8 *)
               (uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28
               | uVar16 << 0x38);
    FUN_14680f2de(&local_50,&local_68);
    goto LAB_146822ece;
  case 0x13:
    uVar16 = *puVar2;
    local_50 = (undefined8 *)
               (uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28
               | uVar16 << 0x38);
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if ((longlong)local_50 + 863999999999U < 0x19254d37fff) {
      if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
        FUN_1402134d6(lVar10,1);
        puVar11 = *(undefined1 **)(lVar10 + 8);
      }
      *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
      *puVar11 = 0x22;
      pwVar17 = L"%h:%m:%s.%n";
    }
    else {
      if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
        FUN_1402134d6(lVar10,1);
        puVar11 = *(undefined1 **)(lVar10 + 8);
      }
      *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
      *puVar11 = 0x22;
      pwVar17 = L"%d.%h:%m:%s.%n";
    }
    FUN_14681ea84(&local_50,&local_68,pwVar17);
LAB_146822ece:
    iVar4 = (uint)uStack_60 + -1;
    if ((uint)uStack_60 == 0) {
      iVar4 = 0;
    }
    lVar10 = FUN_144aa081e(lVar10,local_68,iVar4);
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x22;
    if (local_68 != (undefined8 **)0x0) {
      FUN_1400020a8();
    }
    break;
  case 0x14:
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x22;
    local_48 = (uint)puVar2[1];
    local_68 = &local_50;
    local_50 = (undefined8 *)*puVar2;
    ppuVar12 = (undefined8 **)&local_68;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xc);
LAB_1468229c5:
    FUN_14682b3da(ppuVar12,lVar10);
LAB_1468229cd:
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x22;
    break;
  case 0x1e:
    uVar16 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar21 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> uVar21 == 0; uVar21 = uVar21 - 1) {
      }
    }
    lVar10 = -(uVar21 & 0xffffffff);
    lVar8 = lVar10 + 9;
    uVar15 = 0xffU >> ((byte)lVar8 & 0x1f) & (uint)(byte)*puVar2;
    uVar16 = (ulonglong)uVar15;
    if ((uint)uVar21 < 8) {
      pbVar9 = (byte *)((longlong)puVar2 + 1);
      switch(uVar21 & 0xffffffff) {
      case 0:
        pbVar9 = (byte *)((longlong)puVar2 + 2);
        uVar15 = (uint)*(byte *)((longlong)puVar2 + 1);
      case 1:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar15 = uVar15 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = (ulonglong)(uVar15 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 7:
        uVar16 = uVar16 << 8 | (ulonglong)*pbVar9;
      }
    }
    uVar21 = (ulonglong)(byte)~*(byte *)((longlong)puVar2 + lVar8) * 2 + 1;
    uVar3 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar20 = 9 - (uint)uVar3;
    uVar15 = 0xffU >> ((byte)uVar20 & 0x1f) & (uint)*(byte *)((longlong)puVar2 + lVar8);
    uVar21 = (ulonglong)uVar15;
    if ((uint)uVar3 < 8) {
      pbVar9 = (byte *)((longlong)puVar2 + lVar10 + 10);
      switch(uVar3 & 0xffffffff) {
      case 0:
        pbVar9 = (byte *)((longlong)puVar2 + lVar10 + 0xb);
        uVar15 = (uint)*(byte *)((longlong)puVar2 + lVar10 + 10);
      case 1:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar15 = uVar15 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar21 = (ulonglong)(uVar15 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar21 = uVar21 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar21 = uVar21 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar21 = uVar21 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar21 = uVar21 << 8 | (ulonglong)bVar1;
      case 7:
        uVar21 = uVar21 << 8 | (ulonglong)*pbVar9;
      }
    }
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x7b;
    lVar10 = FUN_1467f3718(lVar10,param_1[0xb],(int)param_1[0xc]);
    puVar6 = *(undefined4 **)(lVar10 + 8);
    if (*(ulonglong *)(lVar10 + 0x10) <= (longlong)puVar6 + 5U) {
      FUN_1402134d6(lVar10,5);
      puVar6 = *(undefined4 **)(lVar10 + 8);
    }
    *(undefined1 *)(puVar6 + 1) = 0x3a;
    *puVar6 = 0x22644922;
    *(longlong *)(lVar10 + 8) = (longlong)puVar6 + 5;
    FUN_1467f3718(lVar10,param_1[0xb],(int)param_1[0xc]);
    FUN_140850d22(*param_1,&DAT_149e1d7be,uVar21);
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x2c;
    lVar10 = FUN_1467f3718(lVar10,param_1[0xb],(int)param_1[0xc]);
    puVar6 = *(undefined4 **)(lVar10 + 8);
    if (*(ulonglong *)(lVar10 + 0x10) <= (longlong)puVar6 + 7U) {
      FUN_1402134d6(lVar10,7);
      puVar6 = *(undefined4 **)(lVar10 + 8);
    }
    *(undefined4 *)((longlong)puVar6 + 3) = 0x3a226174;
    *puVar6 = 0x74614422;
    *(longlong *)(lVar10 + 8) = (longlong)puVar6 + 7;
    FUN_1467f3718(lVar10,param_1[0xb],(int)param_1[0xc]);
    local_c8 = (byte *)((longlong)puVar2 + (ulonglong)uVar20 + lVar8);
    local_c0 = uVar16 - uVar20;
    goto LAB_14682375e;
  case 0x1f:
    uVar16 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar21 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> uVar21 == 0; uVar21 = uVar21 - 1) {
      }
    }
    lVar10 = -(uVar21 & 0xffffffff);
    lVar8 = lVar10 + 9;
    uVar15 = 0xffU >> ((byte)lVar8 & 0x1f) & (uint)(byte)*puVar2;
    uVar16 = (ulonglong)uVar15;
    if ((uint)uVar21 < 8) {
      pbVar9 = (byte *)((longlong)puVar2 + 1);
      switch(uVar21 & 0xffffffff) {
      case 0:
        pbVar9 = (byte *)((longlong)puVar2 + 2);
        uVar15 = (uint)*(byte *)((longlong)puVar2 + 1);
      case 1:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar15 = uVar15 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = (ulonglong)(uVar15 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar16 = uVar16 << 8 | (ulonglong)bVar1;
      case 7:
        uVar16 = uVar16 << 8 | (ulonglong)*pbVar9;
      }
    }
    uVar21 = (ulonglong)(byte)~*(byte *)((longlong)puVar2 + lVar8) * 2 + 1;
    uVar3 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar15 = 9 - (uint)uVar3;
    uVar20 = 0xffU >> ((byte)uVar15 & 0x1f) & (uint)*(byte *)((longlong)puVar2 + lVar8);
    uVar21 = (ulonglong)uVar20;
    if ((uint)uVar3 < 8) {
      pbVar9 = (byte *)((longlong)puVar2 + lVar10 + 10);
      switch(uVar3 & 0xffffffff) {
      case 0:
        pbVar9 = (byte *)((longlong)puVar2 + lVar10 + 0xb);
        uVar20 = (uint)*(byte *)((longlong)puVar2 + lVar10 + 10);
      case 1:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar20 = uVar20 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar21 = (ulonglong)(uVar20 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar21 = uVar21 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar21 = uVar21 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar21 = uVar21 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar21 = uVar21 << 8 | (ulonglong)bVar1;
      case 7:
        uVar21 = uVar21 << 8 | (ulonglong)*pbVar9;
      }
    }
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    pbVar9 = (byte *)((longlong)puVar2 + (ulonglong)uVar15 + lVar8);
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x7b;
    lVar10 = FUN_1467f3718(lVar10,param_1[0xb],(int)param_1[0xc]);
    puVar6 = *(undefined4 **)(lVar10 + 8);
    if (*(ulonglong *)(lVar10 + 0x10) <= (longlong)puVar6 + 7U) {
      FUN_1402134d6(lVar10,7);
      puVar6 = *(undefined4 **)(lVar10 + 8);
    }
    *(undefined4 *)((longlong)puVar6 + 3) = 0x3a22656d;
    *puVar6 = 0x6d614e22;
    *(longlong *)(lVar10 + 8) = (longlong)puVar6 + 7;
    FUN_1467f3718(lVar10,param_1[0xb],(int)param_1[0xc]);
    local_d0 = (undefined4)uVar21;
    local_d8 = pbVar9;
    FUN_1468293a2(param_1);
    lVar10 = *param_1;
    puVar11 = *(undefined1 **)(lVar10 + 8);
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x2c;
    lVar10 = FUN_1467f3718(lVar10,param_1[0xb],(int)param_1[0xc]);
    puVar6 = *(undefined4 **)(lVar10 + 8);
    if (*(ulonglong *)(lVar10 + 0x10) <= (longlong)puVar6 + 7U) {
      FUN_1402134d6(lVar10,7);
      puVar6 = *(undefined4 **)(lVar10 + 8);
    }
    *(undefined4 *)((longlong)puVar6 + 3) = 0x3a226174;
    *puVar6 = 0x74614422;
    *(longlong *)(lVar10 + 8) = (longlong)puVar6 + 7;
    FUN_1467f3718(lVar10,param_1[0xb],(int)param_1[0xc]);
    local_e8 = pbVar9 + uVar21;
    local_e0 = uVar16 - (uVar15 + uVar21);
LAB_14682375e:
    FUN_1468296ee(param_1);
    lVar10 = FUN_1467f3718(*param_1,param_1[0xb],(int)param_1[0xc]);
    puVar11 = *(undefined1 **)(lVar10 + 8);
LAB_14682377d:
    if (*(undefined1 **)(lVar10 + 0x10) <= puVar11 + 1) {
      FUN_1402134d6(lVar10,1);
      puVar11 = *(undefined1 **)(lVar10 + 8);
    }
    *(undefined1 **)(lVar10 + 8) = puVar11 + 1;
    *puVar11 = 0x7d;
  }
switchD_14682296e_caseD_15:
  *(undefined2 *)(param_1 + 0xd) = 0x101;
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14682387c FUN_14682387c body=4166 status=ok
// SIG undefined FUN_14682387c(void)

void FUN_14682387c(longlong *param_1,byte *param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  double dVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_108 [32];
  byte *local_e8;
  longlong local_e0;
  byte *local_d8;
  undefined4 local_d0;
  byte *local_c8;
  longlong local_c0;
  byte *local_b8;
  uint local_b0;
  byte *local_a8;
  ulonglong local_a0;
  undefined8 **local_98;
  ulonglong uStack_90;
  undefined8 **local_88;
  ulonglong uStack_80;
  longlong local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((char)param_1[0x11] == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x2c;
  }
  if (*(char *)((longlong)param_1 + 0x89) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x89) = 0;
    FUN_1449668a2(*param_1,param_1[1],(ulonglong)(param_1[2] - param_1[1]) >> 1);
  }
  uVar14 = *(uint *)(param_2 + 4);
  if ((ulonglong)uVar14 != 0) {
    local_78 = *(longlong *)(param_2 + 8) - (ulonglong)uVar14;
    local_70 = uVar14;
    FUN_1468297c0(param_1);
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x3a;
    FUN_1449668a2(lVar9,param_1[0xf],(int)param_1[0x10]);
  }
  if (0x1e < (*param_2 & 0x1f) - 1) goto switchD_14682393a_caseD_15;
  puVar2 = *(ulonglong **)(param_2 + 8);
  switch(*param_2 & 0x1f) {
  case 1:
    lVar9 = *param_1;
    puVar11 = *(undefined8 **)(lVar9 + 8);
    if (*(undefined8 **)(lVar9 + 0x10) <= puVar11 + 1) {
      FUN_140213274(lVar9,4);
      puVar11 = *(undefined8 **)(lVar9 + 8);
    }
    uVar13 = 0x6c006c0075006e;
    goto LAB_146823bcf;
  case 2:
  case 3:
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x7b;
    FUN_1449668a2(param_1 + 1,param_1[0xd],(int)param_1[0xe]);
    *(undefined1 *)((longlong)param_1 + 0x89) = 1;
    FUN_146822224(param_2,&local_68);
    if (((ulonglong)local_68 & 0x1f) != 0) {
      uVar15 = 0;
      do {
        local_88 = local_68;
        uStack_80 = uStack_60;
        FUN_14682387c(param_1,&local_88);
        uVar5 = uStack_60;
        lVar9 = FUN_1468220fe(&local_68);
        uVar18 = local_58;
        uVar20 = uVar5 + lVar9;
        uVar3 = (ulonglong)local_68 & 0xffffffff;
        if (uVar5 + lVar9 == local_58) {
          uVar18 = uVar15;
          uVar20 = uVar15;
          uVar3 = uVar15;
        }
        FUN_146821e9c(&local_68,uVar20,uVar3);
        local_58 = uVar18;
      } while (((ulonglong)local_68 & 0x1f) != 0);
    }
    lVar9 = param_1[2] + (longlong)(int)param_1[0xe] * -2;
    param_1[2] = lVar9;
    if (((char)param_1[0x11] != '\0') && (*(char *)((longlong)param_1 + 0x89) == '\x01')) {
      *(undefined1 *)((longlong)param_1 + 0x89) = 0;
      FUN_1449668a2(*param_1,param_1[1],(ulonglong)(lVar9 - param_1[1]) >> 1);
    }
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    goto LAB_1468247f2;
  case 4:
  case 5:
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x5b;
    FUN_1449668a2(param_1 + 1,param_1[0xd],(int)param_1[0xe]);
    *(undefined1 *)((longlong)param_1 + 0x89) = 1;
    FUN_146822224(param_2,&local_68);
    if (((ulonglong)local_68 & 0x1f) != 0) {
      uVar15 = 0;
      do {
        local_98 = local_68;
        uStack_90 = uStack_60;
        FUN_14682387c(param_1,&local_98);
        uVar5 = uStack_60;
        lVar9 = FUN_1468220fe(&local_68);
        uVar18 = local_58;
        uVar20 = uVar5 + lVar9;
        uVar3 = (ulonglong)local_68 & 0xffffffff;
        if (uVar5 + lVar9 == local_58) {
          uVar18 = uVar15;
          uVar20 = uVar15;
          uVar3 = uVar15;
        }
        FUN_146821e9c(&local_68,uVar20,uVar3);
        local_58 = uVar18;
      } while (((ulonglong)local_68 & 0x1f) != 0);
    }
    lVar9 = param_1[2] + (longlong)(int)param_1[0xe] * -2;
    param_1[2] = lVar9;
    if (((char)param_1[0x11] != '\0') && (*(char *)((longlong)param_1 + 0x89) == '\x01')) {
      *(undefined1 *)((longlong)param_1 + 0x89) = 0;
      FUN_1449668a2(*param_1,param_1[1],(ulonglong)(lVar9 - param_1[1]) >> 1);
    }
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x5d;
    break;
  case 6:
    uVar15 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    uVar19 = 9 - (uint)uVar20;
    uVar14 = 0xffU >> ((byte)uVar19 & 0x1f) & (uint)(byte)*puVar2;
    local_a0 = (ulonglong)uVar14;
    if ((uint)uVar20 < 8) {
      pbVar8 = (byte *)((longlong)puVar2 + 1);
      switch(uVar20 & 0xffffffff) {
      case 0:
        pbVar8 = (byte *)((longlong)puVar2 + 2);
        uVar14 = (uint)*(byte *)((longlong)puVar2 + 1);
      case 1:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = uVar14 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_a0 = (ulonglong)(uVar14 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_a0 = local_a0 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_a0 = local_a0 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_a0 = local_a0 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_a0 = local_a0 << 8 | (ulonglong)bVar1;
      case 7:
        local_a0 = local_a0 << 8 | (ulonglong)*pbVar8;
      }
    }
    local_a8 = (byte *)((longlong)puVar2 + (ulonglong)uVar19);
    FUN_146829b18(param_1);
    break;
  case 7:
    uVar15 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    uVar14 = 9 - (uint)uVar20;
    local_b0 = 0xffU >> ((byte)uVar14 & 0x1f) & (uint)(byte)*puVar2;
    if ((uint)uVar20 < 8) {
      pbVar8 = (byte *)((longlong)puVar2 + 1);
      uVar20 = uVar20 & 0xffffffff;
      puVar17 = puVar2;
      switch(uVar20) {
      case 0:
        uVar20 = 2;
      case 1:
        puVar17 = (ulonglong *)(uVar20 + (longlong)puVar2);
      case 2:
        pbVar8 = (byte *)((longlong)puVar17 + 2);
      case 3:
        pbVar8 = pbVar8 + 1;
      case 4:
        local_b0 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      case 5:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_b0 = local_b0 << 8 | (uint)bVar1;
      case 6:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_b0 = local_b0 << 8 | (uint)bVar1;
      case 7:
        local_b0 = local_b0 << 8 | (uint)*pbVar8;
      }
    }
    local_b8 = (byte *)((longlong)puVar2 + (ulonglong)uVar14);
    FUN_1468297c0(param_1);
    break;
  case 8:
    uVar15 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    lVar9 = *param_1;
    uVar14 = 0xffU >> (9U - (char)uVar20 & 0x1f) & (uint)(byte)*puVar2;
    uVar15 = (ulonglong)uVar14;
    if ((uint)uVar20 < 8) {
      pbVar8 = (byte *)((longlong)puVar2 + 1);
      switch(uVar20 & 0xffffffff) {
      case 0:
        uVar14 = (uint)*(byte *)((longlong)puVar2 + 1);
        pbVar8 = (byte *)((longlong)puVar2 + 2);
      case 1:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = uVar14 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = (ulonglong)(uVar14 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 7:
        uVar15 = uVar15 << 8 | (ulonglong)*pbVar8;
      }
    }
    pwVar16 = L"%llu";
    goto LAB_146823c9d;
  case 9:
    uVar15 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    lVar9 = *param_1;
    uVar14 = 0xffU >> (9U - (char)uVar20 & 0x1f) & (uint)(byte)*puVar2;
    uVar15 = (ulonglong)uVar14;
    if ((uint)uVar20 < 8) {
      pbVar8 = (byte *)((longlong)puVar2 + 1);
      switch(uVar20 & 0xffffffff) {
      case 0:
        uVar14 = (uint)*(byte *)((longlong)puVar2 + 1);
        pbVar8 = (byte *)((longlong)puVar2 + 2);
      case 1:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = uVar14 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = (ulonglong)(uVar14 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 7:
        uVar15 = uVar15 << 8 | (ulonglong)*pbVar8;
      }
    }
    uVar15 = ~uVar15;
    pwVar16 = L"%lld";
LAB_146823c9d:
    FUN_140212e80(lVar9,pwVar16,uVar15);
    break;
  case 10:
    lVar9 = *param_1;
    uVar14 = (uint)*puVar2;
    dVar6 = (double)(float)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                           uVar14 << 0x18);
    pwVar16 = L"%.9g";
    goto LAB_146823cbe;
  case 0xb:
    lVar9 = *param_1;
    uVar15 = *puVar2;
    dVar6 = (double)(uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
                     (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
                     (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 |
                     (uVar15 & 0xff00) << 0x28 | uVar15 << 0x38);
    pwVar16 = L"%.17g";
LAB_146823cbe:
    FUN_140212e80(lVar9,pwVar16,dVar6);
    break;
  case 0xc:
    lVar9 = *param_1;
    pwVar16 = *(wchar_t **)(lVar9 + 8);
    if (*(wchar_t **)(lVar9 + 0x10) <= pwVar16 + 5) {
      FUN_140213274(lVar9,5);
      pwVar16 = *(wchar_t **)(lVar9 + 8);
    }
    builtin_wcsncpy(pwVar16,L"false",5);
    pwVar16 = pwVar16 + 5;
    goto LAB_146823bd6;
  case 0xd:
    lVar9 = *param_1;
    puVar11 = *(undefined8 **)(lVar9 + 8);
    if (*(undefined8 **)(lVar9 + 0x10) <= puVar11 + 1) {
      FUN_140213274(lVar9,4);
      puVar11 = *(undefined8 **)(lVar9 + 8);
    }
    uVar13 = 0x65007500720074;
LAB_146823bcf:
    *puVar11 = uVar13;
    pwVar16 = (wchar_t *)(puVar11 + 1);
LAB_146823bd6:
    *(wchar_t **)(lVar9 + 8) = pwVar16;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x22;
    local_50 = &local_68;
    local_58 = CONCAT44(local_58._4_4_,(uint)puVar2[2]);
    local_68 = (undefined8 **)*puVar2;
    uStack_60 = puVar2[1];
    ppuVar12 = &local_50;
    local_48 = 0x14;
    goto LAB_146823993;
  case 0x11:
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x22;
    local_68._0_4_ = (uint)*puVar2;
    local_68._4_4_ = (uint)(*puVar2 >> 0x20);
    local_68 = (undefined8 **)
               CONCAT44(local_68._4_4_ >> 0x18 | (local_68._4_4_ & 0xff0000) >> 8 |
                        (local_68._4_4_ & 0xff00) << 8 | local_68._4_4_ << 0x18,
                        (uint)local_68 >> 0x18 | ((uint)local_68 & 0xff0000) >> 8 |
                        ((uint)local_68 & 0xff00) << 8 | (uint)local_68 << 0x18);
    uStack_60._0_4_ = (uint)puVar2[1];
    uStack_60._4_4_ = (uint)(puVar2[1] >> 0x20);
    uStack_60 = CONCAT44(uStack_60._4_4_ >> 0x18 | (uStack_60._4_4_ & 0xff0000) >> 8 |
                         (uStack_60._4_4_ & 0xff00) << 8 | uStack_60._4_4_ << 0x18,
                         (uint)uStack_60 >> 0x18 | ((uint)uStack_60 & 0xff0000) >> 8 |
                         ((uint)uStack_60 & 0xff00) << 8 | (uint)uStack_60 << 0x18);
    FUN_1411a4a98(&local_68,lVar9,3);
    goto LAB_14682399b;
  case 0x12:
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x22;
    uVar15 = *puVar2;
    local_50 = (undefined8 *)
               (uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
                (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
                (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 | (uVar15 & 0xff00) << 0x28
               | uVar15 << 0x38);
    FUN_14680f2de(&local_50,&local_68);
    goto LAB_146823ea3;
  case 0x13:
    uVar15 = *puVar2;
    local_50 = (undefined8 *)
               (uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
                (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
                (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 | (uVar15 & 0xff00) << 0x28
               | uVar15 << 0x38);
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if ((longlong)local_50 + 863999999999U < 0x19254d37fff) {
      if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
        FUN_140213274(lVar9,1);
        puVar10 = *(undefined2 **)(lVar9 + 8);
      }
      *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
      *puVar10 = 0x22;
      pwVar16 = L"%h:%m:%s.%n";
    }
    else {
      if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
        FUN_140213274(lVar9,1);
        puVar10 = *(undefined2 **)(lVar9 + 8);
      }
      *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
      *puVar10 = 0x22;
      pwVar16 = L"%d.%h:%m:%s.%n";
    }
    FUN_14681ea84(&local_50,&local_68,pwVar16);
LAB_146823ea3:
    iVar4 = (uint)uStack_60 + -1;
    if ((uint)uStack_60 == 0) {
      iVar4 = 0;
    }
    lVar9 = FUN_1449668a2(lVar9,local_68,iVar4);
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x22;
    if (local_68 != (undefined8 **)0x0) {
      FUN_1400020a8();
    }
    break;
  case 0x14:
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x22;
    local_48 = (uint)puVar2[1];
    local_68 = &local_50;
    local_50 = (undefined8 *)*puVar2;
    ppuVar12 = (undefined8 **)&local_68;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xc);
LAB_146823993:
    FUN_14682b32b(ppuVar12,lVar9);
LAB_14682399b:
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x22;
    break;
  case 0x1e:
    uVar15 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    lVar9 = -(uVar20 & 0xffffffff);
    lVar7 = lVar9 + 9;
    uVar14 = 0xffU >> ((byte)lVar7 & 0x1f) & (uint)(byte)*puVar2;
    uVar15 = (ulonglong)uVar14;
    if ((uint)uVar20 < 8) {
      pbVar8 = (byte *)((longlong)puVar2 + 1);
      switch(uVar20 & 0xffffffff) {
      case 0:
        pbVar8 = (byte *)((longlong)puVar2 + 2);
        uVar14 = (uint)*(byte *)((longlong)puVar2 + 1);
      case 1:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = uVar14 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = (ulonglong)(uVar14 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 7:
        uVar15 = uVar15 << 8 | (ulonglong)*pbVar8;
      }
    }
    uVar20 = (ulonglong)(byte)~*(byte *)((longlong)puVar2 + lVar7) * 2 + 1;
    uVar3 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar19 = 9 - (uint)uVar3;
    uVar14 = 0xffU >> ((byte)uVar19 & 0x1f) & (uint)*(byte *)((longlong)puVar2 + lVar7);
    uVar20 = (ulonglong)uVar14;
    if ((uint)uVar3 < 8) {
      pbVar8 = (byte *)((longlong)puVar2 + lVar9 + 10);
      switch(uVar3 & 0xffffffff) {
      case 0:
        pbVar8 = (byte *)((longlong)puVar2 + lVar9 + 0xb);
        uVar14 = (uint)*(byte *)((longlong)puVar2 + lVar9 + 10);
      case 1:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = uVar14 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar20 = (ulonglong)(uVar14 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar20 = uVar20 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar20 = uVar20 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar20 = uVar20 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar20 = uVar20 << 8 | (ulonglong)bVar1;
      case 7:
        uVar20 = uVar20 << 8 | (ulonglong)*pbVar8;
      }
    }
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x7b;
    lVar9 = FUN_1449668a2(lVar9,param_1[0xf],(int)param_1[0x10]);
    puVar11 = *(undefined8 **)(lVar9 + 8);
    if (*(ulonglong *)(lVar9 + 0x10) <= (longlong)puVar11 + 10U) {
      FUN_140213274(lVar9,5);
      puVar11 = *(undefined8 **)(lVar9 + 8);
    }
    *puVar11 = 0x22006400490022;
    *(undefined2 *)(puVar11 + 1) = 0x3a;
    *(longlong *)(lVar9 + 8) = (longlong)puVar11 + 10;
    FUN_1449668a2(lVar9,param_1[0xf],(int)param_1[0x10]);
    FUN_140212e80(*param_1,L"%llu",uVar20);
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x2c;
    lVar9 = FUN_1449668a2(lVar9,param_1[0xf],(int)param_1[0x10]);
    puVar11 = *(undefined8 **)(lVar9 + 8);
    if (*(ulonglong *)(lVar9 + 0x10) <= (longlong)puVar11 + 0xeU) {
      FUN_140213274(lVar9,7);
      puVar11 = *(undefined8 **)(lVar9 + 8);
    }
    *(undefined8 *)((longlong)puVar11 + 6) = 0x3a002200610074;
    *puVar11 = 0x74006100440022;
    *(longlong *)(lVar9 + 8) = (longlong)puVar11 + 0xe;
    FUN_1449668a2(lVar9,param_1[0xf],(int)param_1[0x10]);
    local_c8 = (byte *)((longlong)puVar2 + (ulonglong)uVar19 + lVar7);
    local_c0 = uVar15 - uVar19;
    goto LAB_1468247d0;
  case 0x1f:
    uVar15 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    uVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    lVar9 = -(uVar20 & 0xffffffff);
    lVar7 = lVar9 + 9;
    uVar14 = 0xffU >> ((byte)lVar7 & 0x1f) & (uint)(byte)*puVar2;
    uVar15 = (ulonglong)uVar14;
    if ((uint)uVar20 < 8) {
      pbVar8 = (byte *)((longlong)puVar2 + 1);
      switch(uVar20 & 0xffffffff) {
      case 0:
        pbVar8 = (byte *)((longlong)puVar2 + 2);
        uVar14 = (uint)*(byte *)((longlong)puVar2 + 1);
      case 1:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = uVar14 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = (ulonglong)(uVar14 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar1;
      case 7:
        uVar15 = uVar15 << 8 | (ulonglong)*pbVar8;
      }
    }
    uVar20 = (ulonglong)(byte)~*(byte *)((longlong)puVar2 + lVar7) * 2 + 1;
    uVar3 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar14 = 9 - (uint)uVar3;
    uVar19 = 0xffU >> ((byte)uVar14 & 0x1f) & (uint)*(byte *)((longlong)puVar2 + lVar7);
    uVar20 = (ulonglong)uVar19;
    if ((uint)uVar3 < 8) {
      pbVar8 = (byte *)((longlong)puVar2 + lVar9 + 10);
      switch(uVar3 & 0xffffffff) {
      case 0:
        pbVar8 = (byte *)((longlong)puVar2 + lVar9 + 0xb);
        uVar19 = (uint)*(byte *)((longlong)puVar2 + lVar9 + 10);
      case 1:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar19 = uVar19 << 8 | (uint)bVar1;
      case 2:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar20 = (ulonglong)(uVar19 << 8) | (ulonglong)bVar1;
      case 3:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar20 = uVar20 << 8 | (ulonglong)bVar1;
      case 4:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar20 = uVar20 << 8 | (ulonglong)bVar1;
      case 5:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar20 = uVar20 << 8 | (ulonglong)bVar1;
      case 6:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar20 = uVar20 << 8 | (ulonglong)bVar1;
      case 7:
        uVar20 = uVar20 << 8 | (ulonglong)*pbVar8;
      }
    }
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    pbVar8 = (byte *)((longlong)puVar2 + (ulonglong)uVar14 + lVar7);
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x7b;
    lVar9 = FUN_1449668a2(lVar9,param_1[0xf],(int)param_1[0x10]);
    puVar11 = *(undefined8 **)(lVar9 + 8);
    if (*(ulonglong *)(lVar9 + 0x10) <= (longlong)puVar11 + 0xeU) {
      FUN_140213274(lVar9,7);
      puVar11 = *(undefined8 **)(lVar9 + 8);
    }
    *(undefined8 *)((longlong)puVar11 + 6) = 0x3a00220065006d;
    *puVar11 = 0x6d0061004e0022;
    *(longlong *)(lVar9 + 8) = (longlong)puVar11 + 0xe;
    FUN_1449668a2(lVar9,param_1[0xf],(int)param_1[0x10]);
    local_d0 = (undefined4)uVar20;
    local_d8 = pbVar8;
    FUN_1468297c0(param_1);
    lVar9 = *param_1;
    puVar10 = *(undefined2 **)(lVar9 + 8);
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x2c;
    lVar9 = FUN_1449668a2(lVar9,param_1[0xf],(int)param_1[0x10]);
    puVar11 = *(undefined8 **)(lVar9 + 8);
    if (*(ulonglong *)(lVar9 + 0x10) <= (longlong)puVar11 + 0xeU) {
      FUN_140213274(lVar9,7);
      puVar11 = *(undefined8 **)(lVar9 + 8);
    }
    *(undefined8 *)((longlong)puVar11 + 6) = 0x3a002200610074;
    *puVar11 = 0x74006100440022;
    *(longlong *)(lVar9 + 8) = (longlong)puVar11 + 0xe;
    FUN_1449668a2(lVar9,param_1[0xf],(int)param_1[0x10]);
    local_e8 = pbVar8 + uVar20;
    local_e0 = uVar15 - (uVar14 + uVar20);
LAB_1468247d0:
    FUN_146829b18(param_1);
    lVar9 = FUN_1449668a2(*param_1,param_1[0xf],(int)param_1[0x10]);
    puVar10 = *(undefined2 **)(lVar9 + 8);
LAB_1468247f2:
    if (*(undefined2 **)(lVar9 + 0x10) <= puVar10 + 1) {
      FUN_140213274(lVar9,1);
      puVar10 = *(undefined2 **)(lVar9 + 8);
    }
    *(undefined2 **)(lVar9 + 8) = puVar10 + 1;
    *puVar10 = 0x7d;
  }
switchD_14682393a_caseD_15:
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468248c3 FUN_1468248c3 body=158 status=ok
// SIG undefined FUN_1468248c3(void)

void FUN_1468248c3(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 **local_68;
  undefined1 local_60;
  undefined1 local_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 *local_28;
  undefined4 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = local_58;
  local_60 = 0;
  local_68 = &local_38;
  local_38 = &DAT_149e02088;
  local_30 = 0;
  local_28 = &DAT_149e02088;
  local_20 = 0;
  local_18 = 0;
  local_98 = *param_1;
  uStack_94 = param_1[1];
  uStack_90 = param_1[2];
  uStack_8c = param_1[3];
  local_80 = param_2;
  local_70 = local_78;
  FUN_1468228d4(&local_80);
  FUN_144afef72(&local_78);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146824962 FUN_146824962 body=158 status=ok
// SIG undefined FUN_146824962(void)

void FUN_146824962(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined2 **local_88;
  undefined1 local_80;
  undefined1 local_78 [64];
  undefined2 *local_38;
  undefined4 local_30;
  undefined2 *local_28;
  undefined4 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = local_78;
  local_80 = 0;
  local_88 = &local_38;
  local_38 = &DAT_149dfb77a;
  local_30 = 0;
  local_28 = &DAT_149dfb77a;
  local_20 = 0;
  local_18 = 0;
  local_b8 = *param_1;
  uStack_b4 = param_1[1];
  uStack_b0 = param_1[2];
  uStack_ac = param_1[3];
  local_a0 = param_2;
  local_90 = local_98;
  FUN_14682387c(&local_a0);
  FUN_144724f3c(&local_98);
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146824a02 FUN_146824a02 body=109 status=ok
// SIG undefined FUN_146824a02(void)

undefined8 * FUN_146824a02(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_146829bf2(param_1 + 3,0);
  puVar1 = (undefined8 *)param_1[3];
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  if (-1 < param_2) {
    if ((longlong)param_1[2] < param_2) {
      FUN_140d2d4a8(param_1,param_2);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146824a70 FUN_146824a70 body=5 status=ok
// SIG undefined FUN_146824a70(void)

undefined8 FUN_146824a70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 146824a76 FUN_146824a76 body=132 status=ok
// SIG undefined FUN_146824a76(void)

undefined8 * FUN_146824a76(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[1] != 0) {
    memcpy((void *)*param_3,(void *)*param_1,param_1[1]);
  }
  if (param_3[1] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = param_3[1] + *param_3;
    FUN_146821e9c(&local_30,*param_3,0x40);
    *(undefined4 *)param_2 = local_30;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_2c;
    *(undefined4 *)(param_2 + 1) = uStack_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
  }
  param_2[2] = lVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146824afc FUN_146824afc body=94 status=ok
// SIG undefined FUN_146824afc(void)

void FUN_146824afc(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (longlong)((int)param_1[4] + -1);
  bVar2 = *(byte *)(param_1[3] + lVar3 * 0x18);
  if ((bVar2 & 2) == 0) {
    pbVar1 = (byte *)(param_1[3] + lVar3 * 0x18);
    *pbVar1 = bVar2 | 2;
    lVar3 = param_1[1];
    param_1[1] = lVar3 + 1;
    if (param_1[2] == lVar3) {
      FUN_14112c458(param_1,lVar3);
    }
    *(undefined1 *)(*param_1 + lVar3) = 0;
    *(longlong *)(pbVar1 + 8) = lVar3;
  }
  return;
}



// FUNCTION 146824b5a FUN_146824b5a body=83 status=ok
// SIG undefined FUN_146824b5a(void)

void FUN_146824b5a(longlong *param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)(param_1[3] + (longlong)((int)param_1[4] + -1) * 0x18);
  param_2 = *pbVar1 << 7 | param_2;
  bVar2 = param_2;
  if (*(longlong *)(pbVar1 + 0x10) != 0) {
    if (pbVar1[1] == param_2) goto LAB_146824b93;
    bVar2 = 0;
  }
  pbVar1[1] = bVar2;
LAB_146824b93:
  *pbVar1 = *pbVar1 & 0xfc;
  *(longlong *)(pbVar1 + 0x10) = *(longlong *)(pbVar1 + 0x10) + 1;
  *(byte *)(*param_1 + *(longlong *)(pbVar1 + 8)) = param_2;
  return;
}



// FUNCTION 146824bae FUN_146824bae body=369 status=ok
// SIG undefined FUN_146824bae(void)

longlong * FUN_146824bae(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  
  lVar3 = param_1[4];
  lVar9 = param_1[3];
  FUN_146824afc();
  pbVar10 = (byte *)(lVar9 + (longlong)((int)lVar3 + -1) * 0x18);
  *pbVar10 = *pbVar10 | 1;
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar5 = 1;
  if (uVar1 != 0) {
    uVar5 = (ulonglong)(byte)((char)((uVar2 & 0xff) * 0x25 >> 8) + 1);
  }
  lVar9 = param_1[1];
  param_1[1] = uVar5 + lVar9;
  if ((ulonglong)(param_1[2] - lVar9) < uVar5) {
    FUN_14112c458(param_1,lVar9);
  }
  iVar4 = *(int *)(param_2 + 1);
  uVar5 = (ulonglong)iVar4;
  lVar3 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  bVar6 = (byte)(((uint)lVar3 & 0xff) * 0x93 >> 10);
  bVar7 = 8;
  if (bVar6 < 8) {
    bVar7 = bVar6;
  }
  uVar8 = 1;
  if (uVar5 != 0) {
    uVar8 = (ulonglong)(byte)(bVar7 + 1);
  }
  pbVar10 = (byte *)(uVar8 + lVar9 + *param_1 + -1);
  switch((int)uVar8) {
  case 9:
    lVar9 = lVar9 + *param_1 + uVar8;
    *(char *)(lVar9 + -1) = (char)iVar4;
    pbVar10 = (byte *)(lVar9 + -2);
    uVar5 = uVar5 >> 8;
  case 8:
    *pbVar10 = (byte)uVar5;
    pbVar10 = pbVar10 + -1;
    uVar5 = uVar5 >> 8;
  case 7:
    *pbVar10 = (byte)uVar5;
    pbVar10 = pbVar10 + -1;
    uVar5 = uVar5 >> 8;
  case 6:
    *pbVar10 = (byte)uVar5;
    pbVar10 = pbVar10 + -1;
    uVar5 = uVar5 >> 8;
  case 5:
    *pbVar10 = (byte)uVar5;
    pbVar10 = pbVar10 + -1;
    uVar5 = uVar5 >> 8;
  case 4:
    *pbVar10 = (byte)uVar5;
    pbVar10 = pbVar10 + -1;
    uVar5 = uVar5 >> 8;
  case 3:
    *pbVar10 = (byte)uVar5;
    pbVar10 = pbVar10 + -1;
    uVar5 = uVar5 >> 8;
  case 2:
    *pbVar10 = (byte)uVar5;
    pbVar10 = pbVar10 + -1;
    iVar4 = (int)(uVar5 >> 8);
  default:
    *pbVar10 = (byte)(0xff << (9U - (char)uVar8 & 0x1f)) | (byte)iVar4;
    iVar4 = *(int *)(param_2 + 1);
    uVar5 = (ulonglong)iVar4;
    _Src = (void *)*param_2;
    lVar9 = param_1[1];
    param_1[1] = lVar9 + uVar5;
    if ((ulonglong)(param_1[2] - lVar9) < uVar5) {
      FUN_14112c458(param_1,lVar9);
    }
    if (iVar4 != 0) {
      memcpy((void *)(lVar9 + *param_1),_Src,uVar5);
    }
    return param_1;
  }
}



// FUNCTION 146824d20 FUN_146824d20 body=330 status=ok
// SIG undefined FUN_146824d20(void)

void FUN_146824d20(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  void *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  
  FUN_146824afc();
  iVar1 = *(int *)(param_2 + 1);
  uVar6 = (ulonglong)iVar1;
  lVar2 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  bVar3 = (byte)(((uint)lVar2 & 0xff) * 0x93 >> 10);
  bVar5 = 8;
  if (bVar3 < 8) {
    bVar5 = bVar3;
  }
  uVar7 = 1;
  if (uVar6 != 0) {
    uVar7 = (ulonglong)(byte)(bVar5 + 1);
  }
  lVar2 = param_1[1];
  param_1[1] = uVar7 + uVar6 + lVar2;
  if ((ulonglong)(param_1[2] - lVar2) < uVar7 + uVar6) {
    FUN_14112c458(param_1,lVar2);
  }
  pbVar4 = (byte *)(uVar7 + lVar2 + *param_1 + -1);
  _Dst = (void *)(lVar2 + *param_1 + uVar7);
  bVar5 = (byte)iVar1;
  switch((int)uVar7) {
  case 2:
    goto LAB_146824e1f;
  case 3:
    goto LAB_146824e16;
  case 4:
    goto LAB_146824e0d;
  case 5:
    goto LAB_146824e04;
  case 6:
    goto LAB_146824dfb;
  case 7:
    goto LAB_146824df2;
  case 8:
    break;
  case 9:
    pbVar4 = (byte *)((longlong)_Dst + -2);
    *(byte *)((longlong)_Dst + -1) = bVar5;
    uVar6 = uVar6 >> 8;
    break;
  default:
    goto LAB_146824e28;
  }
  *pbVar4 = (byte)uVar6;
  pbVar4 = pbVar4 + -1;
  uVar6 = uVar6 >> 8;
LAB_146824df2:
  *pbVar4 = (byte)uVar6;
  pbVar4 = pbVar4 + -1;
  uVar6 = uVar6 >> 8;
LAB_146824dfb:
  *pbVar4 = (byte)uVar6;
  pbVar4 = pbVar4 + -1;
  uVar6 = uVar6 >> 8;
LAB_146824e04:
  *pbVar4 = (byte)uVar6;
  pbVar4 = pbVar4 + -1;
  uVar6 = uVar6 >> 8;
LAB_146824e0d:
  *pbVar4 = (byte)uVar6;
  pbVar4 = pbVar4 + -1;
  uVar6 = uVar6 >> 8;
LAB_146824e16:
  *pbVar4 = (byte)uVar6;
  pbVar4 = pbVar4 + -1;
  uVar6 = uVar6 >> 8;
LAB_146824e1f:
  *pbVar4 = (byte)uVar6;
  pbVar4 = pbVar4 + -1;
  bVar5 = (byte)(uVar6 >> 8);
LAB_146824e28:
  *pbVar4 = (byte)(0xff << (9U - (char)uVar7 & 0x1f)) | bVar5;
  if (iVar1 != 0) {
    memcpy(_Dst,(void *)*param_2,(longlong)*(int *)(param_2 + 1));
  }
  FUN_146824b5a(param_1,7);
  return;
}



// FUNCTION 146824e6a FUN_146824e6a body=261 status=ok
// SIG undefined FUN_146824e6a(void)

void FUN_146824e6a(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  void *_Src;
  ulonglong _Size;
  ulonglong uVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_3 - param_2;
  uVar3 = lVar4 - (ulonglong)(lVar4 != 0);
  if (lVar4 != 0) {
    param_2 = param_2 + *param_1;
    _Dst = (void *)((ulonglong)(lVar4 != 0) + param_2);
    do {
      local_68 = param_2;
      local_60 = lVar4;
      cVar1 = FUN_146822585(&local_68,&local_49,&local_58);
      _Size = local_58 - 1;
      if (cVar1 == '\0') {
        _Size = 0xffffffffffffffff;
      }
      _Src = (void *)(param_2 + 1);
      if (_Dst != _Src) {
        memmove(_Dst,_Src,_Size);
      }
      uVar5 = lVar4 - 1;
      uVar2 = _Size;
      if (uVar5 < _Size) {
        uVar2 = uVar5;
      }
      param_2 = (longlong)_Src + uVar2;
      if (uVar3 < _Size) {
        _Size = uVar3;
      }
      _Dst = (void *)((longlong)_Dst + _Size);
      uVar3 = uVar3 - _Size;
      lVar4 = uVar5 - uVar2;
    } while (lVar4 != 0);
  }
  if (uVar3 != 0) {
    if (param_1[1] - param_3 != 0) {
      memmove((void *)((param_3 - uVar3) + *param_1),(void *)(*param_1 + param_3),
              param_1[1] - param_3);
      param_3 = param_1[1];
    }
    param_1[1] = param_3 - uVar3;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146824f70 FUN_146824f70 body=89 status=ok
// SIG undefined FUN_146824f70(void)

void FUN_146824f70(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_146824afc();
  uVar1 = FUN_14278ff38(&local_28,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_146824b5a(param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146824fca FUN_146824fca body=92 status=ok
// SIG undefined FUN_146824fca(void)

void FUN_146824fca(longlong param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_146824afc();
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_146829bf2(param_1 + 0x18,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = 0;
  pbVar2 = (byte *)(*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0x20) + -1) * 0x18
                   );
  *pbVar2 = *pbVar2 | 8;
  return;
}



// FUNCTION 146825026 FUN_146825026 body=607 status=ok
// SIG undefined FUN_146825026(void)

void FUN_146825026(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar3 = (int)param_1[4] + -1;
  bVar10 = *(byte *)(param_1[3] + 1 + (longlong)iVar3 * 0x18);
  uVar11 = 0xffc >> (bVar10 & 0x1f);
  bVar10 = (byte)uVar11 | 0xd < bVar10;
  uVar13 = *(ulonglong *)(param_1[3] + 0x10 + (longlong)iVar3 * 0x18);
  *(int *)(param_1 + 4) = iVar3;
  FUN_146829c86(param_1 + 3);
  lVar5 = (longlong)((int)param_1[4] + -1);
  lVar9 = *(longlong *)(param_1[3] + 8 + lVar5 * 0x18) + 1;
  if ((*(byte *)(param_1[3] + lVar5 * 0x18) & 1) != 0) {
    lVar5 = *param_1;
    uVar14 = (ulonglong)(byte)~*(byte *)(lVar5 + lVar9) * 2 + 1;
    uVar1 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar7 = 9 - (uint)uVar1;
    uVar4 = 0xffU >> ((byte)uVar7 & 0x1f) & (uint)*(byte *)(lVar5 + lVar9);
    uVar14 = (ulonglong)uVar4;
    if ((uint)uVar1 < 8) {
      pbVar8 = (byte *)(lVar5 + lVar9 + 1);
      switch(uVar1 & 0xffffffff) {
      case 0:
        uVar4 = (uint)*(byte *)(lVar5 + lVar9 + 1);
        pbVar8 = (byte *)(lVar5 + lVar9 + 2);
      case 1:
        bVar12 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar4 = uVar4 << 8 | (uint)bVar12;
      case 2:
        bVar12 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = (ulonglong)(uVar4 << 8) | (ulonglong)bVar12;
      case 3:
        bVar12 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = uVar14 << 8 | (ulonglong)bVar12;
      case 4:
        bVar12 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = uVar14 << 8 | (ulonglong)bVar12;
      case 5:
        bVar12 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = uVar14 << 8 | (ulonglong)bVar12;
      case 6:
        bVar12 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar14 = uVar14 << 8 | (ulonglong)bVar12;
      case 7:
        uVar14 = uVar14 << 8 | (ulonglong)*pbVar8;
      }
    }
    lVar9 = lVar9 + (ulonglong)uVar7 + uVar14;
  }
  if ((1 < uVar13 & bVar10) == 1) {
    FUN_146824e6a(param_1,lVar9,param_1[1]);
  }
  lVar5 = param_1[1];
  uVar13 = lVar5 - lVar9;
  lVar2 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  bVar6 = (byte)(((uint)lVar2 & 0xff) * 0x93 >> 10);
  bVar12 = 8;
  if (bVar6 < 8) {
    bVar12 = bVar6;
  }
  uVar14 = 1;
  if (uVar13 != 0) {
    uVar14 = (ulonglong)(byte)(bVar12 + 1);
  }
  param_1[1] = lVar5 + uVar14;
  if ((ulonglong)(param_1[2] - lVar5) < uVar14) {
    FUN_14112c458(param_1);
  }
  memmove((void *)(*param_1 + lVar9 + uVar14),(void *)(*param_1 + lVar9),uVar13);
  pbVar8 = (byte *)(uVar14 + lVar9 + *param_1 + -1);
  switch((int)uVar14) {
  case 9:
    lVar5 = lVar9 + *param_1 + uVar14;
    *(char *)(lVar5 + -1) = (char)uVar13;
    pbVar8 = (byte *)(lVar5 + -2);
    uVar13 = uVar13 >> 8;
  case 8:
    *pbVar8 = (byte)uVar13;
    pbVar8 = pbVar8 + -1;
    uVar13 = uVar13 >> 8;
  case 7:
    *pbVar8 = (byte)uVar13;
    pbVar8 = pbVar8 + -1;
    uVar13 = uVar13 >> 8;
  case 6:
    *pbVar8 = (byte)uVar13;
    pbVar8 = pbVar8 + -1;
    uVar13 = uVar13 >> 8;
  case 5:
    *pbVar8 = (byte)uVar13;
    pbVar8 = pbVar8 + -1;
    uVar13 = uVar13 >> 8;
  case 4:
    *pbVar8 = (byte)uVar13;
    pbVar8 = pbVar8 + -1;
    uVar13 = uVar13 >> 8;
  case 3:
    *pbVar8 = (byte)uVar13;
    pbVar8 = pbVar8 + -1;
    uVar13 = uVar13 >> 8;
  case 2:
    *pbVar8 = (byte)uVar13;
    pbVar8 = pbVar8 + -1;
    uVar13 = uVar13 >> 8;
  default:
    *pbVar8 = (byte)uVar13 | (byte)(0xff << (9U - (char)uVar14 & 0x1f));
    FUN_146824b5a(param_1,CONCAT31((int3)(uVar11 >> 8),bVar10) & 0xffffff01 | 2);
    return;
  }
}



// FUNCTION 146825286 FUN_146825286 body=265 status=ok
// SIG undefined FUN_146825286(void)

void FUN_146825286(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_146824afc();
  uVar3 = FUN_14475aa65(0,*param_2,*(undefined4 *)(param_2 + 1));
  uVar5 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> uVar5 == 0; uVar5 = uVar5 - 1) {
    }
  }
  uVar6 = 1;
  if (uVar3 != 0) {
    uVar6 = (uint)(byte)((char)((uVar5 & 0xff) * 0x25 >> 8) + 1);
  }
  lVar2 = param_1[1];
  param_1[1] = lVar2 + (ulonglong)(uVar6 + uVar3);
  if ((ulonglong)(param_1[2] - lVar2) < (ulonglong)(uVar6 + uVar3)) {
    FUN_14112c458(param_1,lVar2);
  }
  lVar1 = lVar2 + *param_1 + (ulonglong)uVar6;
  pbVar4 = (byte *)((ulonglong)uVar6 + lVar2 + *param_1 + -1);
  uVar5 = uVar3;
  switch(uVar6) {
  case 5:
    pbVar4 = (byte *)(lVar1 + -2);
    *(char *)(lVar1 + -1) = (char)uVar3;
    uVar5 = uVar3 >> 8;
  case 4:
    *pbVar4 = (byte)uVar5;
    pbVar4 = pbVar4 + -1;
    uVar5 = uVar5 >> 8;
  case 3:
    *pbVar4 = (byte)uVar5;
    pbVar4 = pbVar4 + -1;
    uVar5 = uVar5 >> 8;
  case 2:
    *pbVar4 = (byte)uVar5;
    pbVar4 = pbVar4 + -1;
    uVar5 = uVar5 >> 8;
  default:
    *pbVar4 = (byte)(0xff << (9U - (char)uVar6 & 0x1f)) | (byte)uVar5;
    if (uVar3 != 0) {
      FUN_14475a98a(lVar1,uVar3,*param_2,*(undefined4 *)(param_2 + 1));
    }
    FUN_146824b5a(param_1,7);
    return;
  }
}



// FUNCTION 146825390 FUN_146825390 body=81 status=ok
// SIG undefined FUN_146825390(void)

void FUN_146825390(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  FUN_146824afc();
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 8;
  if ((ulonglong)(param_1[2] - lVar1) < 8) {
    FUN_14112c458(param_1,lVar1);
  }
  *(ulonglong *)(*param_1 + lVar1) =
       param_2 >> 0x38 | (param_2 & 0xff000000000000) >> 0x28 | (param_2 & 0xff0000000000) >> 0x18 |
       (param_2 & 0xff00000000) >> 8 | (param_2 & 0xff000000) << 8 | (param_2 & 0xff0000) << 0x18 |
       (param_2 & 0xff00) << 0x28 | param_2 << 0x38;
  FUN_146824b5a(param_1,0x12);
  return;
}



// FUNCTION 1468253e2 FUN_1468253e2 body=82 status=ok
// SIG undefined FUN_1468253e2(void)

void FUN_1468253e2(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_146824bae();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_146825390(param_1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146825436 FUN_146825436 body=185 status=ok
// SIG undefined FUN_146825436(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146825436(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c87e460) {
    FUN_144b3d300(&DAT_14c87e460);
    if (DAT_14c87e460 == -1) {
      InitializeSRWLock((PSRWLOCK)&DAT_14c87d788);
      DAT_14c87e3a0 = 0;
      _DAT_14c87e3a8 = 0x4000000000;
      DAT_14c87d790 = 0;
      _DAT_14c87d798 = 0;
      DAT_14c87e3b8 = 0;
      _DAT_14c87e3c0 = 0x4000000000;
      uRam000000014c87e3c8 = 0xffffffff;
      DAT_14c87e450 = 0;
      _DAT_14c87e458 = 0;
      atexit((_func_5014 *)&LAB_142790ecc);
      _Init_thread_footer(&DAT_14c87e460);
    }
  }
  return &DAT_14c87d788;
}



// FUNCTION 1468254f0 FUN_1468254f0 body=313 status=ok
// SIG undefined FUN_1468254f0(void)

longlong * FUN_1468254f0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  PSRWLOCK SRWLock;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined1 local_78 [16];
  int local_68;
  code *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  local_80 = param_3;
  if ((int)param_2[1] != 0) {
    SRWLock = (PSRWLOCK)FUN_146825436();
    AcquireSRWLockShared(SRWLock);
    if ((longlong)(int)param_2[1] != 0) {
      lVar7 = *param_2;
      lVar4 = (longlong)(int)param_2[1] * 0x28;
      do {
        FUN_1448a2778(SRWLock,local_78,lVar7);
        if (local_50 == '\x01') {
          if ((local_60 != (code *)0x0) &&
             (cVar2 = (*local_60)(lVar7,param_2,local_80), cVar2 == '\0')) {
            iVar6 = (int)param_1[1];
            uVar3 = iVar6 + 1;
            *(uint *)(param_1 + 1) = uVar3;
            iVar5 = 3;
            goto LAB_1468255b4;
          }
          if (local_68 != *(int *)(lVar7 + 0x10)) {
            iVar5 = (*(int *)(lVar7 + 0x10) <= local_68) + 1;
            iVar6 = (int)param_1[1];
            uVar3 = iVar6 + 1;
            *(uint *)(param_1 + 1) = uVar3;
            goto LAB_1468255b4;
          }
        }
        else {
          iVar6 = (int)param_1[1];
          uVar3 = iVar6 + 1;
          *(uint *)(param_1 + 1) = uVar3;
          iVar5 = 0;
LAB_1468255b4:
          if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
            FUN_146829d34(param_1,iVar6);
          }
          lVar1 = *param_1;
          *(int *)(lVar1 + (longlong)iVar6 * 0x10) = iVar5;
          *(longlong *)(lVar1 + 8 + (longlong)iVar6 * 0x10) = lVar7;
        }
        lVar7 = lVar7 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
    }
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14682562a FUN_14682562a body=99 status=ok
// SIG undefined FUN_14682562a(void)

void FUN_14682562a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  FUN_14682568e(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682568e FUN_14682568e body=1059 status=ok
// SIG undefined FUN_14682568e(void)

void FUN_14682568e(longlong *param_1,longlong *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == 1) {
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    local_78 = (undefined2 *)((ulonglong)local_78 & 0xffffffff00000000);
    FUN_1449b19ea(*param_2,&local_78);
    puVar7 = local_78;
    if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) == 0) {
LAB_146825762:
      if (0 < (int)local_78) {
        lVar11 = 0x18;
        lVar12 = 0;
        do {
          puVar7 = local_68;
          lVar10 = (longlong)local_68 + lVar11;
          FUN_14490a6ba(param_2,(longlong)local_68 + lVar11 + -0x18);
          FUN_144aa02de(*param_2,(longlong)puVar7 + lVar11 + -8);
          FUN_14021219d(*(undefined8 *)(*param_2 + 8),lVar10);
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 0x28;
        } while (lVar12 < (int)local_78);
      }
    }
    else {
      if (0 < (int)local_78) {
        uStack_60 = CONCAT44(uStack_60._4_4_,(int)local_78);
        FUN_14279106e(&local_68);
        FUN_14279105b(local_68,(ulonglong)puVar7 & 0xffffffff);
        goto LAB_146825762;
      }
      if ((int)local_78 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((ulonglong)local_78 & 0xffffffff);
      }
    }
    uVar9 = uStack_60;
    if ((int)uStack_60 < 0) {
LAB_146825aaa:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar9 & 0xffffffff);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != (int)uStack_60) {
      FUN_1401255f0(param_1);
    }
    puVar7 = local_68;
    if ((int)uStack_60 == 0) {
      uVar9 = 0;
    }
    else {
      lVar11 = (longlong)(int)uStack_60;
      lVar12 = 0;
      do {
        puVar8 = &DAT_149dfb77a;
        if (*(int *)((longlong)puVar7 + lVar12 + 0x20) != 0) {
          puVar8 = *(undefined2 **)((longlong)puVar7 + lVar12 + 0x18);
        }
        FUN_1446f470e(&local_50,puVar8,1);
        uVar6 = local_50;
        uVar3 = *(undefined4 *)((longlong)puVar7 + lVar12 + 0x10);
        local_78 = *(undefined2 **)((longlong)puVar7 + lVar12);
        uStack_70 = *(ulonglong *)((longlong)puVar7 + lVar12 + 8);
        iVar2 = (int)param_1[1];
        lVar10 = (longlong)iVar2;
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14009063a(param_1,iVar2);
        }
        lVar5 = *param_1;
        puVar1 = (undefined4 *)(lVar5 + lVar10 * 0x28);
        *puVar1 = (int)local_78;
        puVar1[1] = local_78._4_4_;
        puVar1[2] = (int)uStack_70;
        puVar1[3] = uStack_70._4_4_;
        *(undefined4 *)(lVar5 + 0x10 + lVar10 * 0x28) = uVar3;
        *(undefined4 *)(lVar5 + 0x14 + lVar10 * 0x28) = 1;
        *(undefined8 *)(lVar5 + 0x18 + lVar10 * 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x20 + lVar10 * 0x28) = uVar6;
        lVar12 = lVar12 + 0x28;
      } while (lVar11 * 0x28 != lVar12);
      uVar9 = uStack_60 & 0xffffffff;
    }
    FUN_14279102c(local_68,uVar9);
    puVar7 = local_68;
  }
  else {
    if (param_3 == 3) {
      local_68 = (undefined2 *)CONCAT44(local_68._4_4_,(int)param_1[1]);
      FUN_1449b19ea(*param_2);
      if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
        FUN_146829dba(param_1,(ulonglong)local_68 & 0xffffffff);
      }
      if (0 < (int)local_68) {
        lVar11 = 0x10;
        lVar12 = 0;
        do {
          lVar10 = *param_1;
          FUN_14490a6ba(param_2,lVar10 + lVar11 + -0x10);
          FUN_144aa02de(*param_2,lVar10 + lVar11);
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 0x28;
        } while (lVar12 < (int)local_68);
      }
      goto LAB_146825a0c;
    }
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    local_68 = (undefined2 *)((ulonglong)local_68._4_4_ << 0x20);
    FUN_1449b19ea(*param_2,&local_68);
    if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) == 0) {
LAB_1468258d9:
      if (0 < (int)local_68) {
        lVar11 = 4;
        lVar12 = 0;
        do {
          lVar10 = (longlong)local_78 + lVar11;
          FUN_144afef32(*param_2,(longlong)local_78 + lVar11 + -4);
          FUN_144aa02de(*param_2,lVar10);
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 8;
        } while (lVar12 < (int)local_68);
      }
    }
    else {
      if (0 < (int)local_68) {
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)local_68);
        FUN_142790ed2(&local_78);
        goto LAB_1468258d9;
      }
      if ((int)local_68 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4();
      }
    }
    uVar9 = uStack_70;
    if ((int)uStack_70 < 0) goto LAB_146825aaa;
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != (int)uStack_70) {
      FUN_1401255f0(param_1);
    }
    puVar7 = local_78;
    if (0 < (int)uStack_70) {
      lVar11 = 0;
      do {
        puVar7 = local_78;
        FUN_140002266(&local_68,L"EnumTag%u",*(undefined4 *)(local_78 + lVar11 * 4));
        puVar8 = &DAT_149dfb77a;
        if ((int)uStack_60 != 0) {
          puVar8 = local_68;
        }
        FUN_1446f470e(&local_50,puVar8,1);
        uVar6 = local_50;
        uVar3 = *(undefined4 *)(puVar7 + lVar11 * 4);
        uVar4 = *(undefined4 *)(puVar7 + lVar11 * 4 + 2);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar2 = (int)param_1[1];
        lVar12 = (longlong)iVar2;
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14009063a(param_1,iVar2);
        }
        lVar10 = *param_1;
        *(undefined8 *)(lVar10 + lVar12 * 0x28) = 0;
        *(undefined4 *)(lVar10 + 8 + lVar12 * 0x28) = 0;
        *(undefined4 *)(lVar10 + 0xc + lVar12 * 0x28) = uVar3;
        *(undefined4 *)(lVar10 + 0x10 + lVar12 * 0x28) = uVar4;
        *(undefined4 *)(lVar10 + 0x14 + lVar12 * 0x28) = 1;
        *(undefined8 *)(lVar10 + 0x18 + lVar12 * 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x20 + lVar12 * 0x28) = uVar6;
        lVar11 = lVar11 + 1;
        puVar7 = local_78;
      } while ((int)lVar11 < (int)uStack_70);
    }
  }
  if (puVar7 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_146825a0c:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146825ab4 FUN_146825ab4 body=18 status=ok
// SIG undefined FUN_146825ab4(void)

void FUN_146825ab4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_149e37810;
  param_1[1] = param_2;
  return;
}



// FUNCTION 146825ac6 FUN_146825ac6 body=1 status=ok
// SIG undefined FUN_146825ac6(void)

void FUN_146825ac6(void)

{
  return;
}



// FUNCTION 146825ac8 FUN_146825ac8 body=3 status=ok
// SIG undefined FUN_146825ac8(void)

undefined8 FUN_146825ac8(void)

{
  return 0;
}



// FUNCTION 146825acc FUN_146825acc body=42 status=ok
// SIG undefined FUN_146825acc(void)

undefined8 * FUN_146825acc(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  if (param_2 < 1) {
    param_2 = 0;
  }
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_145cbb9ce();
  return param_1;
}



// FUNCTION 146825af6 FUN_146825af6 body=13 status=ok
// SIG undefined FUN_146825af6(void)

void FUN_146825af6(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
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



// FUNCTION 146825b04 FUN_146825b04 body=38 status=ok
// SIG undefined FUN_146825b04(void)

void FUN_146825b04(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((longlong)param_1[2] < param_2) {
    param_1[2] = param_2;
    uVar1 = FUN_14001fdce(*param_1,param_2,0);
    *param_1 = uVar1;
  }
  return;
}



// FUNCTION 146825b32 FUN_146825b32 body=29 status=ok
// SIG undefined FUN_146825b32(void)

undefined8 FUN_146825b32(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0xb0);
  return param_2;
}



// FUNCTION 146825b50 FUN_146825b50 body=230 status=ok
// SIG undefined FUN_146825b50(void)

longlong * FUN_146825b50(longlong *param_1,longlong param_2,undefined4 param_3,wchar_t *param_4)

{
  wchar_t *pwVar1;
  
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (longlong)&PTR__purecall_149e35f70;
  *(undefined2 *)((longlong)param_1 + 0x4e) = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = (longlong)(param_1 + 2);
  FUN_1460d8f18();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = (longlong)&PTR_FUN_149e37db0;
  if (param_2 < 1) {
    param_2 = 0;
  }
  param_1[0x14] = param_2;
  param_1[0x15] = 0;
  FUN_145cbb9ce(param_1 + 0x13);
  pwVar1 = L"FLargeMemoryWriter";
  if (param_4 != (wchar_t *)0x0) {
    pwVar1 = param_4;
  }
  FUN_140056680(param_1 + 0x16,pwVar1);
  (**(code **)(*param_1 + 0xc0))(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,param_3);
  return param_1;
}



// FUNCTION 146825c36 FUN_146825c36 body=65 status=ok
// SIG undefined FUN_146825c36(void)

void FUN_146825c36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e37db0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 146825c78 FUN_146825c78 body=128 status=ok
// SIG undefined FUN_146825c78(void)

void FUN_146825c78(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined2 *puVar2;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)(param_1 + 0xb0);
    }
    FUN_140033559(".\\Runtime/Core/Private/Serialization/LargeMemoryWriter.cpp",0x1b,
                  L"Tried to serialize data to an FLargeMemoryWriter that was already released. Archive name: %s."
                  ,puVar2);
  }
  cVar1 = FUN_1401b3d84(param_1 + 0x98,param_2,*(undefined8 *)(param_1 + 0x90),param_3);
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
  }
  return;
}



// FUNCTION 146825cf8 FUN_146825cf8 body=89 status=ok
// SIG undefined FUN_146825cf8(void)

undefined8 * FUN_146825cf8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xb8);
  _Src = *(void **)(param_1 + 0xb0);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 146825d52 FUN_146825d52 body=37 status=ok
// SIG undefined FUN_146825d52(void)

void FUN_146825d52(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 146825d77 FUN_146825d77 body=607 status=ok
// SIG undefined FUN_146825d77(void)

int FUN_146825d77(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  void *_Dst;
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  void *_Src;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong _Size;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  
  iVar11 = 0;
  if ((*(char *)(param_3 + 100) != '\0') && (iVar11 = 0, *(char *)(param_3 + 0x66) == '\0')) {
    *param_4 = *param_2;
    iVar11 = (uint)((*(byte *)(param_1 + 0xc) & 2) == 0) * 4 + 4;
  }
  lVar8 = *(longlong *)(param_3 + 0x10);
  if (lVar8 != 0) {
    uVar9 = 0xffffffff;
    uVar12 = 0;
    bVar5 = false;
    do {
      lVar3 = *(longlong *)(lVar8 + 8);
      _Size = (ulonglong)*(uint *)(lVar3 + 0x58);
      uVar2 = *(uint *)(lVar8 + 0x20);
      _Dst = (void *)((ulonglong)uVar2 + (longlong)param_4);
      if (((*(byte *)(lVar8 + 0x28) & 1) == 0) || ((*(byte *)(param_1 + 0xc) & 8) != 0)) {
        if ((*(char *)(lVar8 + 0x29) == '\0') || (uVar2 != uVar9)) {
          bVar1 = *(byte *)(param_3 + 0x65);
          uVar6 = (**(code **)(lVar3 + 0x38))(lVar3,param_1 + 8);
          uVar9 = *(uint *)(param_1 + 8);
          if (uVar6 < *(uint *)(param_1 + 8)) {
            uVar9 = uVar6;
          }
          uVar9 = -uVar9 & (iVar11 + uVar9) - 1;
          pcVar4 = *(code **)(lVar3 + 0x28);
          iVar11 = (*pcVar4)(param_1,(longlong)param_2 + (ulonglong)uVar9,lVar3,_Dst);
          if (iVar11 == 0 && uVar12 < bVar1) {
            uVar7 = 1;
            if (bVar5) {
              bVar5 = true;
              goto LAB_146825ed4;
            }
            uVar7 = 0;
            bVar5 = true;
          }
          else {
            uVar7 = iVar11 + (uint)(iVar11 == 0);
LAB_146825ed4:
            if ((bVar1 <= uVar12) || ((*(byte *)(param_1 + 0xc) & 4) != 0)) {
              uVar7 = -uVar6 & (uVar7 + uVar6) - 1;
            }
          }
          iVar11 = uVar9 + uVar7;
          if (1 < *(uint *)(lVar8 + 0x24)) {
            lVar10 = (ulonglong)uVar9 + (ulonglong)uVar7 + (longlong)param_2;
            lVar13 = uVar2 + _Size + (longlong)param_4;
            uVar9 = 1;
            do {
              (*pcVar4)(param_1,lVar10,lVar3,lVar13);
              uVar9 = uVar9 + 1;
              iVar11 = iVar11 + uVar7;
              lVar10 = lVar10 + (ulonglong)uVar7;
              lVar13 = lVar13 + _Size;
            } while (uVar9 < *(uint *)(lVar8 + 0x24));
          }
        }
      }
      else if ((*(code **)(lVar3 + 0x48) == (code *)0x0) ||
              (_Src = (void *)(**(code **)(lVar3 + 0x48))(), _Src == (void *)0x0)) {
        memset(_Dst,0,_Size);
      }
      else {
        memcpy(_Dst,_Src,_Size);
      }
      uVar12 = uVar12 + 1;
      uVar9 = *(uint *)(lVar8 + 0x20);
      lVar8 = *(longlong *)(lVar8 + 0x10);
    } while (lVar8 != 0);
  }
  return iVar11;
}



// FUNCTION 146825fd6 FUN_146825fd6 body=668 status=ok
// SIG undefined FUN_146825fd6(void)

ulonglong FUN_146825fd6(longlong param_1,uint *param_2,undefined8 param_3)

{
  wchar_t *_Str;
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [35];
  byte local_75;
  int local_74;
  uint *local_70;
  undefined8 local_68;
  uint local_5c;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  _Str = *(wchar_t **)(param_1 + 8);
  sVar4 = wcslen(_Str);
  FUN_140c54e34(param_3,_Str,(sVar4 & 0xffffffff) * 2);
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 == 0) {
    FUN_140c54e34(param_3,param_1 + 0x5c,4);
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x5c);
  }
  else {
    uVar8 = 0;
    uVar10 = (ulonglong)((uint)((param_2[1] & 2) == 0) * 4 + 4);
    if (*(char *)(param_1 + 0x66) != '\0') {
      uVar10 = uVar8;
    }
    if (*(char *)(param_1 + 100) == '\0') {
      uVar10 = uVar8;
    }
    uVar6 = 0;
    uVar7 = 0;
    local_74 = 0;
    local_70 = param_2;
    local_68 = param_3;
    local_58 = param_1;
    do {
      if (((*(byte *)(lVar9 + 0x28) & 1) == 0) || ((param_2[1] & 8) != 0)) {
        uVar1 = *(ulonglong *)(lVar9 + 8);
        if (*(byte *)(lVar9 + 0x29) == 0) {
          local_5c = (uint)*(byte *)(local_58 + 0x65);
          local_75 = local_5c <= uVar7;
          uVar2 = (**(code **)(uVar1 + 0x38))(uVar1,param_2);
          uVar5 = local_68;
          uVar6 = *param_2;
          if (uVar2 < *param_2) {
            uVar6 = uVar2;
          }
          uVar6 = -uVar6 & (uVar6 + (int)uVar10) - 1;
          uVar10 = (ulonglong)uVar6;
          local_4c = uVar6;
          FUN_140c54e34(local_68,&local_4c,4);
          FUN_140c54e34(uVar5,(int *)(lVar9 + 0x24),4);
          iVar3 = (**(code **)(uVar1 + 0x30))(uVar1,param_2,uVar5);
          param_2 = local_70;
          if ((iVar3 != 0 | local_75) == 1) {
            iVar3 = iVar3 + (uint)(iVar3 == 0);
          }
          else {
            iVar3 = 1;
            if (local_74 == 0) {
              uVar6 = 0;
              local_74 = 1;
              uVar8 = 0;
              goto LAB_146826108;
            }
            local_74 = 1;
          }
          if ((local_5c <= uVar7) || ((local_70[1] & 4) != 0)) {
            iVar3 = (-uVar2 & (iVar3 + uVar2) - 1) * *(int *)(lVar9 + 0x24);
          }
          local_4c = iVar3 + uVar6;
          uVar10 = (ulonglong)local_4c;
          uVar6 = 0;
          uVar8 = 0;
        }
        else {
          if ((uVar8 != uVar1) ||
             (uVar6 = uVar6 + *(byte *)(lVar9 + 0x29), uVar5 = local_68,
             (uint)(*(int *)(uVar1 + 0x58) << 3) < uVar6)) {
            uVar2 = (**(code **)(uVar1 + 0x38))(uVar1,param_2);
            uVar5 = local_68;
            uVar6 = *param_2;
            if (uVar2 < *param_2) {
              uVar6 = uVar2;
            }
            uVar2 = -uVar6 & (uVar6 + (int)uVar10) - 1;
            local_4c = uVar2;
            FUN_140c54e34(local_68,&local_4c,4);
            iVar3 = (**(code **)(uVar1 + 0x30))(uVar1,param_2,uVar5);
            uVar6 = (uint)*(byte *)(lVar9 + 0x29);
            local_4c = iVar3 + uVar2;
            uVar10 = (ulonglong)local_4c;
            uVar8 = uVar1;
          }
          FUN_140c54e34(uVar5,(byte *)(lVar9 + 0x29),1);
          param_2 = local_70;
        }
      }
LAB_146826108:
      uVar7 = uVar7 + 1;
      lVar9 = *(longlong *)(lVar9 + 0x10);
    } while (lVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 146826273 FUN_146826273 body=324 status=ok
// SIG undefined FUN_146826273(void)

void FUN_146826273(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  int iVar7;
  
  FUN_140212e80(*param_4,&DAT_149e2b5d6,*(undefined8 *)(param_2 + 8));
  iVar7 = (int)param_4[2];
  *(int *)(param_4 + 2) = iVar7 + 1;
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    do {
      if (((*(byte *)(puVar6 + 5) & 1) == 0) || ((*(byte *)(param_3 + 4) & 8) != 0)) {
        lVar2 = puVar6[1];
        uVar1 = *(uint *)(puVar6 + 4);
        if (0 < (int)param_4[2]) {
          iVar7 = 0;
          do {
            lVar3 = *param_4;
            puVar4 = *(undefined8 **)(lVar3 + 8);
            if (*(undefined8 **)(lVar3 + 0x10) <= puVar4 + 1) {
              FUN_140213274(lVar3,4);
              puVar4 = *(undefined8 **)(lVar3 + 8);
            }
            *puVar4 = 0x20002000200020;
            *(undefined8 **)(lVar3 + 8) = puVar4 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)param_4[2]);
        }
        FUN_140212e80(*param_4,L"%s: ",*puVar6);
        if (*(char *)((longlong)puVar6 + 0x29) == '\0') {
          (**(code **)(lVar2 + 0x40))((ulonglong)uVar1 + param_1,lVar2,param_3,param_4);
        }
        else {
          lVar2 = *param_4;
          pwVar5 = *(wchar_t **)(lVar2 + 8);
          if (*(wchar_t **)(lVar2 + 0x10) <= pwVar5 + 0xb) {
            FUN_140213274(lVar2,0xb);
            pwVar5 = *(wchar_t **)(lVar2 + 8);
          }
          builtin_wcsncpy(pwVar5,L"(BITFIELD)\n",0xb);
          *(wchar_t **)(lVar2 + 8) = pwVar5 + 0xb;
        }
      }
      puVar6 = (undefined8 *)puVar6[2];
    } while (puVar6 != (undefined8 *)0x0);
    iVar7 = (int)param_4[2] + -1;
  }
  *(int *)(param_4 + 2) = iVar7;
  return;
}



// FUNCTION 1468263e0 FUN_1468263e0 body=17 status=ok
// SIG undefined FUN_1468263e0(void)

undefined4 FUN_1468263e0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 ^ 8 | param_1[1] ^ 5;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == 0);
}



// FUNCTION 1468263f2 FUN_1468263f2 body=39 status=ok
// SIG undefined FUN_1468263f2(void)

void FUN_1468263f2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x68);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    FUN_14682641a(param_1,*(undefined8 *)(lVar1 + 8));
    return;
  }
  *param_1 = 0x500000008;
  return;
}



// FUNCTION 14682641a FUN_14682641a body=187 status=ok
// SIG undefined FUN_14682641a(void)

void FUN_14682641a(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
    *param_1 = 0x500000008;
  }
  else {
    uVar1 = (**(code **)(param_2[1] + 0x80))(param_2 + 1);
    (**(code **)(*param_2 + 8))(param_2,local_38);
    lVar2 = FUN_140f7ad38(local_38);
    uVar1 = (uVar1 & 0xff) * 8 + 1;
    *(uint *)((longlong)param_1 + 4) = uVar1;
    if (*(char *)(lVar2 + 0x54) == '\x01') {
      uVar1 = uVar1 | 2;
      *(uint *)((longlong)param_1 + 4) = uVar1;
    }
    if (*(char *)(lVar2 + 0x56) == '\x01') {
      *(uint *)((longlong)param_1 + 4) = uVar1 | 4;
    }
    *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + 0x50);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468264d6 FUN_1468264d6 body=8 status=ok
// SIG undefined FUN_1468264d6(void)

undefined * FUN_1468264d6(void)

{
  return &DAT_149e381a8;
}



// FUNCTION 1468264de FUN_1468264de body=69 status=ok
// SIG undefined FUN_1468264de(void)

undefined4 FUN_1468264de(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_142790140(param_1,param_2,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146826524 FUN_146826524 body=7 status=ok
// SIG undefined FUN_146826524(void)

void FUN_146826524(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146826528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))();
  return;
}



// FUNCTION 146826540 FUN_146826540 body=1250 status=ok
// SIG undefined FUN_146826540(void)

void FUN_146826540(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  longlong *local_a8;
  byte *local_a0;
  int local_94;
  uint *local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  uint local_6c;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = *(longlong *)(*param_1 + 0x10);
  local_a8 = param_1;
  local_78 = param_2;
  local_68 = param_4;
  if ((*(char *)(param_3 + 100) != '\0') && (*(char *)(param_3 + 0x66) == '\0')) {
    FUN_146827bb2(*param_1,param_3,param_4);
  }
  local_50 = 0;
  lVar17 = *(longlong *)(param_3 + 0x10);
  if (lVar17 != 0) {
    local_90 = (uint *)(local_80 + 0x28);
    local_ac = (uint)*(byte *)(param_3 + 0x65);
    lVar11 = 0;
    lVar13 = 0;
    uVar15 = 0;
    uVar12 = 0;
    local_b0 = 0;
    local_94 = 0;
    uVar16 = 0;
    do {
      plVar4 = local_a8;
      lVar1 = *(longlong *)(lVar17 + 8);
      if (((*(byte *)(lVar17 + 0x28) & 1) == 0) || ((*(byte *)(local_80 + 0x2c) & 8) != 0)) {
        bVar6 = *(byte *)(lVar17 + 0x29);
        if (bVar6 != 0) {
          bVar18 = true;
          goto LAB_14682661d;
        }
        local_a0 = (byte *)(ulonglong)*(uint *)(lVar17 + 0x20);
        if (lVar13 != 0) {
          if ((int)uVar12 != 0) {
            uVar10 = *local_90;
            if (*(uint *)(lVar13 + 0x60) < *local_90) {
              uVar10 = *(uint *)(lVar13 + 0x60);
            }
            lVar2 = *local_a8;
            FUN_1401211f6(lVar2 + 0x18,-uVar10 & (*(int *)(lVar2 + 0x20) + uVar10) - 1,1);
            if (uVar10 <= *(uint *)(lVar2 + 0x7c)) {
              uVar10 = *(uint *)(lVar2 + 0x7c);
            }
            *(uint *)(lVar2 + 0x7c) = uVar10;
            uVar10 = *(uint *)(lVar13 + 0x58);
            lVar13 = *plVar4;
            uVar7 = *(uint *)(lVar13 + 0x20);
            FUN_140393c76(lVar13 + 0x18,uVar7 + uVar10,1);
            memcpy((void *)((ulonglong)uVar7 + *(longlong *)(lVar13 + 0x18)),&local_50,
                   (ulonglong)uVar10);
          }
          local_50 = 0;
          uVar16 = 0;
          uVar12 = 0;
        }
        puVar5 = local_90;
        bVar18 = *(int *)(lVar1 + 0x5c) != 0;
        bVar19 = local_94 != 0;
        if (!bVar18 && local_ac > local_b0) {
          local_94 = 1;
        }
        if ((bVar18 || local_ac <= local_b0) || bVar19) {
          local_60 = uVar12;
          uVar7 = (**(code **)(lVar1 + 0x38))(lVar1,local_90);
          uVar10 = *puVar5;
          if (uVar7 < *puVar5) {
            uVar10 = uVar7;
          }
          lVar13 = *local_a8;
          FUN_1401211f6(lVar13 + 0x18,-uVar10 & (*(int *)(lVar13 + 0x20) + uVar10) - 1,1);
          if (uVar10 <= *(uint *)(lVar13 + 0x7c)) {
            uVar10 = *(uint *)(lVar13 + 0x7c);
          }
          *(uint *)(lVar13 + 0x7c) = uVar10;
          if (*(int *)(lVar17 + 0x24) != 0) {
            local_a0 = local_a0 + local_78;
            lVar13 = lVar1;
            if (local_b0 < local_ac) {
              lVar13 = local_68;
            }
            pcVar3 = *(code **)(lVar17 + 0x18);
            uVar10 = 0;
            local_88 = uVar15;
            local_6c = uVar7;
            local_58 = lVar11;
            do {
              uVar9 = *(uint *)(*local_a8 + 0x20);
              local_b8 = lVar13;
              (*pcVar3)(local_a8,local_78,local_a0 + *(int *)(lVar1 + 0x58) * uVar10,lVar1);
              if ((local_ac <= local_b0) || ((*(byte *)(local_80 + 0x2c) & 4) != 0)) {
                FUN_1401211f6(*local_a8 + 0x18,
                              (~uVar9 + local_6c + *(int *)(*local_a8 + 0x20) & -uVar7) + uVar9,1);
              }
              uVar10 = uVar10 + 1;
              lVar11 = local_58;
              uVar15 = local_88;
            } while (uVar10 < *(uint *)(lVar17 + 0x24));
          }
          lVar13 = 0;
          uVar12 = local_60;
        }
        else {
          lVar13 = 0;
        }
      }
      else {
        bVar6 = *(byte *)(lVar17 + 0x29);
        if (bVar6 != 0) {
          bVar18 = false;
LAB_14682661d:
          if ((lVar11 != lVar1) || ((uint)(*(int *)(lVar1 + 0x58) << 3) < (int)uVar15 + (uint)bVar6)
             ) {
            uVar15 = 0;
            lVar11 = lVar1;
          }
          if (bVar18) {
            uVar10 = *(uint *)(lVar17 + 0x20);
            if ((lVar13 != lVar1) ||
               ((uint)(*(int *)(lVar1 + 0x58) << 3) < (int)uVar12 + (uint)bVar6)) {
              if (lVar13 != 0) {
                uVar7 = *local_90;
                if (*(uint *)(lVar13 + 0x60) < *local_90) {
                  uVar7 = *(uint *)(lVar13 + 0x60);
                }
                lVar2 = *local_a8;
                local_a0 = (byte *)(lVar17 + 0x29);
                local_88 = uVar15;
                FUN_1401211f6(lVar2 + 0x18,-uVar7 & (*(int *)(lVar2 + 0x20) + uVar7) - 1,1);
                uVar15 = local_88;
                if (uVar7 <= *(uint *)(lVar2 + 0x7c)) {
                  uVar7 = *(uint *)(lVar2 + 0x7c);
                }
                *(uint *)(lVar2 + 0x7c) = uVar7;
                uVar7 = *(uint *)(lVar13 + 0x58);
                lVar13 = *plVar4;
                uVar9 = *(uint *)(lVar13 + 0x20);
                FUN_140393c76(lVar13 + 0x18,uVar9 + uVar7,1);
                memcpy((void *)((ulonglong)uVar9 + *(longlong *)(lVar13 + 0x18)),&local_50,
                       (ulonglong)uVar7);
                bVar6 = *local_a0;
              }
              uVar16 = 0;
              uVar12 = 0;
              lVar13 = lVar1;
            }
            uVar7 = (uint)bVar6;
            if ((uint)uVar15 < uVar7 + (uint)uVar15) {
              uVar14 = uVar15 & 0xffffffff;
              uVar8 = uVar12 & 0xffffffff;
              uVar9 = uVar7;
              do {
                uVar16 = uVar16 | (ulonglong)
                                  ((*(byte *)((ulonglong)uVar10 + local_78 + (uVar14 >> 3)) >>
                                    ((uint)uVar14 & 7) & 1) != 0) << ((byte)uVar8 & 0x3f);
                uVar14 = (ulonglong)((uint)uVar14 + 1);
                uVar8 = (ulonglong)((int)uVar8 + 1);
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            uVar12 = (ulonglong)((int)uVar12 + uVar7);
            local_50 = uVar16;
          }
        }
      }
      plVar4 = local_a8;
      uVar15 = (ulonglong)((int)uVar15 + (uint)*(byte *)(lVar17 + 0x29));
      local_b0 = local_b0 + 1;
      lVar17 = *(longlong *)(lVar17 + 0x10);
    } while (lVar17 != 0);
    if (lVar13 != 0) {
      uVar10 = *local_90;
      if (*(uint *)(lVar13 + 0x60) < *local_90) {
        uVar10 = *(uint *)(lVar13 + 0x60);
      }
      lVar17 = *local_a8;
      FUN_1401211f6(lVar17 + 0x18,-uVar10 & (*(int *)(lVar17 + 0x20) + uVar10) - 1,1);
      if (uVar10 <= *(uint *)(lVar17 + 0x7c)) {
        uVar10 = *(uint *)(lVar17 + 0x7c);
      }
      *(uint *)(lVar17 + 0x7c) = uVar10;
      uVar10 = *(uint *)(lVar13 + 0x58);
      lVar17 = *plVar4;
      uVar7 = *(uint *)(lVar17 + 0x20);
      FUN_140393c76(lVar17 + 0x18,uVar7 + uVar10,1);
      memcpy((void *)((ulonglong)uVar7 + *(longlong *)(lVar17 + 0x18)),&local_50,(ulonglong)uVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146826a24 FUN_146826a24 body=12 status=ok
// SIG undefined FUN_146826a24(void)

longlong FUN_146826a24(longlong *param_1)

{
  return *(longlong *)(*param_1 + 0x10) + 0x28;
}



// FUNCTION 146826a30 FUN_146826a30 body=60 status=ok
// SIG undefined FUN_146826a30(void)

uint FUN_146826a30(longlong *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *param_1;
  uVar3 = -param_2 & (*(int *)(lVar1 + 0x20) + param_2) - 1;
  FUN_1401211f6(lVar1 + 0x18,uVar3,1);
  uVar2 = *(uint *)(lVar1 + 0x7c);
  if (*(uint *)(lVar1 + 0x7c) < param_2) {
    uVar2 = param_2;
  }
  *(uint *)(lVar1 + 0x7c) = uVar2;
  return uVar3;
}



// FUNCTION 146826a6c FUN_146826a6c body=67 status=ok
// SIG undefined FUN_146826a6c(void)

ulonglong FUN_146826a6c(longlong *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 0x20);
  FUN_140393c76(lVar2 + 0x18,uVar1 + param_3,1);
  memcpy((void *)((ulonglong)uVar1 + *(longlong *)(lVar2 + 0x18)),param_2,(ulonglong)param_3);
  return (ulonglong)uVar1;
}



// FUNCTION 146826aaf FUN_146826aaf body=114 status=ok
// SIG undefined FUN_146826aaf(void)

undefined4 FUN_146826aaf(wchar_t *param_1,undefined4 param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  sVar1 = wcslen(param_1);
  FUN_140c54e34(param_3,param_1,(sVar1 & 0xffffffff) * 2);
  FUN_140c54e34(param_3,&local_2c,4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146826b22 FUN_146826b22 body=65 status=ok
// SIG undefined FUN_146826b22(void)

void FUN_146826b22(longlong *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  
  lVar1 = *param_1;
  pwVar2 = *(wchar_t **)(lVar1 + 8);
  if (*(wchar_t **)(lVar1 + 0x10) <= pwVar2 + 8) {
    FUN_140213274(lVar1,8);
    pwVar2 = *(wchar_t **)(lVar1 + 8);
  }
  builtin_wcsncpy(pwVar2,L"nullptr\n",8);
  *(wchar_t **)(lVar1 + 8) = pwVar2 + 8;
  return;
}



// FUNCTION 146826b64 FUN_146826b64 body=29 status=ok
// SIG undefined FUN_146826b64(void)

void FUN_146826b64(undefined8 *param_1,longlong param_2)

{
  FUN_140212e80(*param_1,L"TMemoryImagePtr<%s> (Unfrozen), Target: ",*(undefined8 *)(param_2 + 8));
  return;
}



// FUNCTION 146826b82 FUN_146826b82 body=32 status=ok
// SIG undefined FUN_146826b82(void)

void FUN_146826b82(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  FUN_140212e80(*param_1,L"TMemoryImagePtr<%s>, FrozenTypeIndex: %d, Target: ",
                *(undefined8 *)(param_2 + 8),param_3);
  return;
}



// FUNCTION 146826ba2 FUN_146826ba2 body=94 status=ok
// SIG undefined FUN_146826ba2(void)

void FUN_146826ba2(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (0 < (int)param_1[2]) {
    iVar3 = 0;
    do {
      lVar1 = *param_1;
      puVar2 = *(undefined8 **)(lVar1 + 8);
      if (*(undefined8 **)(lVar1 + 0x10) <= puVar2 + 1) {
        FUN_140213274(lVar1,4);
        puVar2 = *(undefined8 **)(lVar1 + 8);
      }
      *puVar2 = 0x20002000200020;
      *(undefined8 **)(lVar1 + 8) = puVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[2]);
  }
  return;
}



// FUNCTION 146826c00 FUN_146826c00 body=28 status=ok
// SIG undefined FUN_146826c00(void)

void FUN_146826c00(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_140212e80(*param_4,&DAT_149e382fc,param_1);
  return;
}



// FUNCTION 146826c1c FUN_146826c1c body=32 status=ok
// SIG undefined FUN_146826c1c(void)

void FUN_146826c1c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_140212e80(*param_4,&DAT_149e382fc,param_1);
  return;
}



// FUNCTION 146826c3c FUN_146826c3c body=32 status=ok
// SIG undefined FUN_146826c3c(void)

void FUN_146826c3c(undefined2 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_140212e80(*param_4,&DAT_149e382fc,param_1);
  return;
}



// FUNCTION 146826c5c FUN_146826c5c body=34 status=ok
// SIG undefined FUN_146826c5c(void)

void FUN_146826c5c(float param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_140212e80(*param_4,&DAT_149e38304,(double)param_1);
  return;
}



// FUNCTION 146826c7e FUN_146826c7e body=110 status=ok
// SIG undefined FUN_146826c7e(void)

void FUN_146826c7e(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  lVar1 = *param_2;
  if ((int)param_1[1] < 1) {
    puVar3 = *(undefined4 **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) <= (longlong)puVar3 + 6U) {
      FUN_140213274(lVar1,3);
      puVar3 = *(undefined4 **)(lVar1 + 8);
    }
    *(undefined2 *)(puVar3 + 1) = 10;
    *puVar3 = 0x220022;
    *(longlong *)(lVar1 + 8) = (longlong)puVar3 + 6;
  }
  else {
    uVar2 = *param_1;
    uVar4 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar2;
    }
    FUN_140212e80(lVar1,L"\"%s\"\n",uVar4);
  }
  return;
}



// FUNCTION 146826cec FUN_146826cec body=64 status=ok
// SIG undefined FUN_146826cec(void)

void FUN_146826cec(longlong *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 0x20);
  FUN_140393c76(lVar2 + 0x18,uVar1 + param_3,1);
  memcpy((void *)((ulonglong)uVar1 + *(longlong *)(lVar2 + 0x18)),param_2,(ulonglong)param_3);
  return;
}



// FUNCTION 146826d2c FUN_146826d2c body=127 status=ok
// SIG undefined FUN_146826d2c(void)

void FUN_146826d2c(undefined8 param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  puVar1 = (ulonglong *)param_2[1];
  if (puVar1[1] < *puVar1 + 4) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_c,4);
    }
    else {
      FUN_14572512c(param_2,&local_c);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146826dac FUN_146826dac body=339 status=ok
// SIG undefined FUN_146826dac(void)

undefined8 * FUN_146826dac(undefined8 *param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  char cVar1;
  void *_Dst;
  undefined4 uVar2;
  ulonglong _Size;
  undefined1 auStack_108 [32];
  void *local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  undefined8 local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0;
  local_68 = 0x500000008;
  local_60 = 0x500000008;
  local_78 = param_4;
  local_90 = FUN_146827aca(&local_88);
  (**(code **)((longlong)param_3 + 0x20))(&local_90,param_2,param_3,param_3);
  local_d8 = 0;
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  local_d0 = 0xffffffff;
  local_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  FUN_146826f00(&local_88,&local_e8,1);
  uVar2 = (undefined4)uStack_e0;
  _Size = uStack_e0 & 0xffffffff;
  _Dst = (void *)FUN_14001cc68(_Size,0);
  memcpy(_Dst,local_e8,_Size);
  cVar1 = FUN_1427901e8(&local_e8,_Dst,_Size);
  if (cVar1 == '\0') {
    uVar2 = 0;
    _Dst = (void *)0x0;
    param_3 = (void *)0x0;
  }
  *param_1 = param_3;
  param_1[1] = _Dst;
  *(undefined4 *)(param_1 + 2) = uVar2;
  FUN_1468272e8(&local_e8);
  FUN_146828fdc(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146826f00 FUN_146826f00 body=997 status=ok
// SIG undefined FUN_146826f00(void)

void FUN_146826f00(longlong *param_1,longlong *param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong **pplVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_138 [40];
  undefined4 local_110;
  longlong *local_108;
  int local_f4;
  longlong *local_f0;
  longlong local_e8 [3];
  undefined8 uStack_d0;
  undefined8 *local_c8;
  longlong **local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8[2] = 0;
  uStack_d0 = 0;
  iVar2 = (int)param_1[1];
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  uVar3 = 0;
  if (iVar2 != 0) {
    FUN_14682a0c8(local_e8 + 2,iVar2,0);
    uVar3 = (undefined4)param_1[1];
  }
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_b8 = CONCAT44(local_b8._4_4_,0xffffffff);
  FUN_1448156a8(local_e8,&local_b8,uVar3);
  if (param_3 == '\0') {
    if (0 < (int)param_1[1]) {
      lVar9 = 0;
      do {
        uVar7 = uStack_d0;
        uVar1 = *(undefined8 *)(*param_1 + lVar9 * 8);
        lVar10 = (longlong)(int)uStack_d0;
        uVar4 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar4);
        if (uStack_d0._4_4_ < uVar4) {
          FUN_14682a190(local_e8 + 2,uVar7 & 0xffffffff);
        }
        *(undefined8 *)(local_e8[2] + lVar10 * 8) = uVar1;
        *(int *)(local_e8[0] + lVar9 * 4) = (int)lVar9;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_1[1]);
    }
  }
  else {
    local_c0 = &local_f0;
    local_b8 = 0;
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    local_c8 = (undefined8 *)&LAB_142791228;
    local_110 = 2;
    local_108 = &local_b8;
    local_f0 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",(int)param_1[1],1);
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    if (0 < (int)param_1[1]) {
      lVar9 = 0;
      do {
        lVar10 = *(longlong *)(*param_1 + lVar9 * 8);
        iVar2 = FUN_14682a11e(&local_b8,*(undefined4 *)(lVar10 + 0x68),(undefined8 *)(lVar10 + 0x68)
                             );
        uVar7 = uStack_d0;
        lVar5 = (longlong)iVar2 * 0x20 + local_b8;
        local_f4 = -1;
        if (lVar5 == 0 || iVar2 == -1) {
          iVar2 = (int)uStack_d0;
          uVar4 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar4);
          if (uStack_d0._4_4_ < uVar4) {
            FUN_14682a190(local_e8 + 2,uVar7 & 0xffffffff);
          }
          *(longlong *)(local_e8[2] + (longlong)iVar2 * 8) = lVar10;
          local_f4 = iVar2;
          local_c8 = (undefined8 *)(lVar10 + 0x68);
          local_c0 = (longlong **)&local_f4;
          FUN_14682a216(&local_b8,&local_f0,&local_c8);
          pplVar6 = (longlong **)&local_f4;
        }
        else {
          pplVar6 = (longlong **)(lVar5 + 0x14);
        }
        *(undefined4 *)(local_e8[0] + lVar9 * 4) = *(undefined4 *)pplVar6;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_1[1]);
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_146829152(&local_b8);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_14478085e(&local_b8,uStack_d0 & 0xffffffff,1);
  if (0 < (int)uStack_d0) {
    lVar9 = 0;
    do {
      uVar3 = FUN_146827d3e(*(undefined8 *)(local_e8[2] + lVar9 * 8),param_2);
      *(undefined4 *)(local_b8 + lVar9 * 4) = uVar3;
      lVar9 = lVar9 + 1;
      uVar7 = (ulonglong)(int)uStack_d0;
    } while (lVar9 < (longlong)uVar7);
    if (0 < (int)uStack_d0) {
      lVar9 = 0;
      do {
        lVar10 = *(longlong *)(local_e8[2] + lVar9 * 8);
        lVar5 = (longlong)*(int *)(lVar10 + 0x30);
        if (lVar5 != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x28);
          lVar8 = 0;
          do {
            uVar7 = (ulonglong)(uint)(*(int *)(lVar10 + 8 + lVar8) + *(int *)(local_b8 + lVar9 * 4))
            ;
            *(ulonglong *)(*param_2 + uVar7) =
                 ((*(uint *)(local_b8 +
                            (longlong)*(int *)(local_e8[0] + (longlong)*(int *)(lVar10 + lVar8) * 4)
                            * 4) - uVar7) + (ulonglong)*(uint *)(lVar10 + 4 + lVar8)) * 0x1000000 +
                 (ulonglong)((uint)*(undefined8 *)(*param_2 + uVar7) & 0xfffffe) + 1;
            lVar8 = lVar8 + 0xc;
          } while (lVar5 * 0xc != lVar8);
          uVar7 = uStack_d0 & 0xffffffff;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uVar7);
    }
  }
  param_2[2] = param_1[2];
  param_2[3] = param_1[5];
  FUN_14682a6d9(param_2[4],(int)param_2[5]);
  FUN_14682abcf(param_2[6],(int)param_2[7]);
  FUN_14682abcf(param_2[8],(int)param_2[9]);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468272e8 FUN_1468272e8 body=75 status=ok
// SIG undefined FUN_1468272e8(void)

void FUN_1468272e8(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146827334 FUN_146827334 body=1 status=ok
// SIG undefined FUN_146827334(void)

void FUN_146827334(void)

{
  return;
}



// FUNCTION 146827336 FUN_146827336 body=1699 status=ok
// SIG undefined FUN_146827336(void)

void FUN_146827336(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  uint *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined4 local_74;
  ulonglong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_74 = *(undefined4 *)(param_1 + 1);
  uVar7 = *param_1;
  FUN_14170c4c2(param_1 + 3);
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_74,4);
    }
    else {
      FUN_14572512c(param_2,&local_74);
    }
  }
  else {
    local_74 = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  local_d0 = (**(code **)(*param_2 + 0x28))(param_2);
  (**(code **)(*param_2 + 0x170))(param_2,uVar7,local_74);
  (**(code **)(*(longlong *)param_1[2] + 0x18))((longlong *)param_1[2],param_2,param_1 + 3,uVar7);
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  iVar12 = *(int *)(param_1 + 5);
  if ((longlong)iVar12 != 0) {
    lVar14 = param_1[4];
    lVar13 = 0;
    lVar15 = 0;
    uVar9 = 0;
    do {
      uVar11 = uStack_80;
      lVar8 = *(longlong *)(lVar14 + lVar13);
      uVar6 = uVar9;
      if ((lVar8 != lVar15) && (lVar15 = lVar8, uVar6 = 0, uVar9 != 0)) {
        lVar15 = (longlong)(int)uStack_80;
        uVar5 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
        if (uStack_80._4_4_ < uVar5) {
          FUN_1447808da(&local_88,uVar11 & 0xffffffff);
        }
        local_88[lVar15] = uVar9;
        lVar15 = *(longlong *)(lVar14 + lVar13);
      }
      uVar11 = uStack_80;
      uVar9 = uVar6 + 1;
      lVar13 = lVar13 + 0x10;
    } while ((longlong)iVar12 * 0x10 != lVar13);
    if (uVar9 != 0) {
      lVar14 = (longlong)(int)uStack_80;
      uVar6 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
      if (uStack_80._4_4_ < uVar6) {
        FUN_1447808da(&local_88,uVar11 & 0xffffffff);
      }
      local_88[lVar14] = uVar9;
    }
  }
  local_98 = 0;
  uStack_90 = 0;
  local_d8 = param_1 + 6;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_14279038a(local_d8,&local_98);
  local_e0 = param_1 + 8;
  FUN_14279038a(local_e0,&local_a8);
  local_ac = (int)uStack_80;
  local_b0 = (undefined4)uStack_90;
  local_b4 = (undefined4)uStack_a0;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_ac,4);
    }
    else {
      FUN_14572512c(param_2,&local_ac);
    }
  }
  else {
    local_ac = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_b0,4);
    }
    else {
      FUN_14572512c(param_2,&local_b0);
    }
  }
  else {
    local_b0 = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_b4,4);
    }
    else {
      FUN_14572512c(param_2,&local_b4);
    }
  }
  else {
    local_b4 = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if ((longlong)(int)uStack_80 != 0) {
    local_c8 = local_88 + (int)uStack_80;
    iVar12 = 0;
    puVar16 = local_88;
    do {
      local_b8 = *puVar16;
      local_70 = *(ulonglong *)(param_1[4] + (longlong)iVar12 * 0x10);
      plVar4 = (longlong *)param_2[1];
      if ((ulonglong *)plVar4[1] < (ulonglong *)*plVar4 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_70,8);
        }
        else {
          FUN_146821949(param_2,&local_70);
        }
      }
      else {
        local_70 = *(ulonglong *)*plVar4;
        *plVar4 = *plVar4 + 8;
      }
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_b8,4);
        }
        else {
          FUN_14572512c(param_2,&local_b8);
        }
      }
      else {
        local_b8 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_b8 != 0) {
        uVar11 = (longlong)iVar12 * 0x10 | 0xc;
        uVar9 = 0;
        do {
          local_bc = *(undefined4 *)(param_1[4] + -4 + uVar11);
          local_c0 = *(undefined4 *)(param_1[4] + uVar11);
          puVar3 = (ulonglong *)param_2[1];
          puVar1 = (undefined4 *)*puVar3 + 1;
          if ((undefined4 *)puVar3[1] < puVar1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_bc,4);
            }
            else {
              FUN_14572512c(param_2,&local_bc);
            }
          }
          else {
            local_bc = *(undefined4 *)*puVar3;
            *puVar3 = (ulonglong)puVar1;
          }
          puVar3 = (ulonglong *)param_2[1];
          if (puVar3[1] < *puVar3 + 4) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_c0,4);
            }
            else {
              FUN_14572512c(param_2,&local_c0);
            }
          }
          else {
            *puVar3 = *puVar3 + 4;
          }
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 + 0x10;
        } while (uVar9 < local_b8);
        iVar12 = iVar12 + uVar9;
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != local_c8);
  }
  FUN_14279044b(local_d8,&local_98,param_2);
  FUN_14279044b(local_e0,&local_a8,param_2);
  uVar7 = (**(code **)(*param_2 + 0x28))(param_2);
  lVar14 = local_d0;
  iVar12 = *(int *)(param_1 + 5);
  if ((longlong)iVar12 != 0) {
    lVar15 = param_1[4];
    lVar13 = 0;
    do {
      (**(code **)(*param_2 + 0x1a0))(param_2,(ulonglong)*(uint *)(lVar15 + 0xc + lVar13) + lVar14);
      if ((*(byte *)((longlong)param_1 + 0x1c) & 2) == 0) {
        local_70 = 0;
        lVar8 = *param_2;
        uVar10 = 8;
      }
      else {
        local_70 = local_70 & 0xffffffff00000000;
        lVar8 = *param_2;
        uVar10 = 4;
      }
      (**(code **)(lVar8 + 0x170))(param_2,&local_70,uVar10);
      lVar13 = lVar13 + 0x10;
    } while ((longlong)iVar12 * 0x10 != lVar13);
  }
  iVar12 = *(int *)(param_1 + 7);
  if ((longlong)iVar12 != 0) {
    lVar15 = param_1[6];
    lVar13 = 0;
    do {
      (**(code **)(*param_2 + 0x1a0))(param_2,(ulonglong)*(uint *)(lVar15 + 8 + lVar13) + lVar14);
      local_70 = 0;
      local_68 = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_70,0xc);
      lVar13 = lVar13 + 0xc;
    } while ((longlong)iVar12 * 0xc != lVar13);
  }
  iVar12 = *(int *)(param_1 + 9);
  if ((longlong)iVar12 != 0) {
    lVar15 = param_1[8];
    lVar13 = 0;
    do {
      (**(code **)(*param_2 + 0x1a0))(param_2,(ulonglong)*(uint *)(lVar15 + 8 + lVar13) + lVar14);
      local_68 = 0;
      local_70 = 0;
      (**(code **)(*param_2 + 0x170))
                (param_2,&local_70,(*(uint *)((longlong)param_1 + 0x1c) & 8) >> 1 | 8);
      lVar13 = lVar13 + 0xc;
    } while ((longlong)iVar12 * 0xc != lVar13);
  }
  (**(code **)(*param_2 + 0x1a0))(param_2,uVar7);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468279da FUN_1468279da body=184 status=ok
// SIG undefined FUN_1468279da(void)

void FUN_1468279da(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined4 *)FUN_146827a94(param_1 + 0x28);
  local_44 = 0;
  FUN_142790140(param_3,param_2,&local_44);
  uVar2 = local_44;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_44;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  FUN_140393c76(param_1 + 0x18,uVar1 + 8,1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1) = 0;
  puVar3[2] = uVar1;
  puVar3[1] = uVar2;
  *puVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_146827aca(*(undefined8 *)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
}



// FUNCTION 146827a94 FUN_146827a94 body=54 status=ok
// SIG undefined FUN_146827a94(void)

longlong FUN_146827a94(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146829e42(param_1,iVar1);
  }
  return (longlong)iVar1 * 0xc + *param_1;
}



// FUNCTION 146827aca FUN_146827aca body=147 status=ok
// SIG undefined FUN_146827aca(void)

undefined8 * FUN_146827aca(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_FUN_149e38430;
  puVar2[2] = param_1;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0x100000000;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468290cc(param_1,iVar1);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 146827b5e FUN_146827b5e body=83 status=ok
// SIG undefined FUN_146827b5e(void)

ulonglong FUN_146827b5e(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar3 = (ulonglong)uVar2;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c) & 2) == 0) {
    FUN_140393c76(plVar1,uVar2 + 8,1);
    *(undefined8 *)(*plVar1 + uVar3) = 0xffffffffffffffff;
  }
  else {
    FUN_140393c76(plVar1,uVar2 + 4,1);
    *(undefined4 *)(*plVar1 + uVar3) = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 146827bb2 FUN_146827bb2 body=127 status=ok
// SIG undefined FUN_146827bb2(void)

void FUN_146827bb2(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_146827c32(param_1 + 0x38);
  uVar1 = FUN_146827b5e(param_1);
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar1;
  *puVar2 = *(undefined8 *)(param_3 + 0x50);
  local_2c = 0;
  FUN_142790140(param_3,param_2,&local_2c);
  *(undefined4 *)(puVar2 + 1) = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146827c32 FUN_146827c32 body=53 status=ok
// SIG undefined FUN_146827c32(void)

longlong FUN_146827c32(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146829ed6(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x10 + *param_1;
}



// FUNCTION 146827c68 FUN_146827c68 body=69 status=ok
// SIG undefined FUN_146827c68(void)

int FUN_146827c68(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_1401211f6(param_1 + 0x18,param_2 + iVar1,1);
  if (*param_3 != 0) {
    plVar2 = (longlong *)FUN_146827cae(param_1 + 0x58);
    *plVar2 = *param_3;
    *(int *)(plVar2 + 1) = iVar1;
  }
  return iVar1;
}



// FUNCTION 146827cae FUN_146827cae body=63 status=ok
// SIG undefined FUN_146827cae(void)

longlong FUN_146827cae(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146829f64(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_146829f5b(lVar2);
  return lVar2;
}



// FUNCTION 146827cee FUN_146827cee body=80 status=ok
// SIG undefined FUN_146827cee(void)

int FUN_146827cee(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_1401211f6(param_1 + 0x18,iVar1 + 0xc,1);
  if (param_2[2] != 0 || *param_2 != 0) {
    puVar2 = (undefined8 *)FUN_146827cae(param_1 + 0x48);
    *puVar2 = CONCAT44(param_2[2],*param_2);
    *(int *)(puVar2 + 1) = iVar1;
  }
  return iVar1;
}



// FUNCTION 146827d3e FUN_146827d3e body=496 status=ok
// SIG undefined FUN_146827d3e(void)

uint FUN_146827d3e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  
  uVar14 = -*(int *)(param_1 + 0x7c) & ((int)param_2[1] + *(int *)(param_1 + 0x7c)) - 1U;
  FUN_1401211f6(param_2,*(int *)(param_1 + 0x20) + uVar14,1);
  memcpy((void *)((longlong)(int)uVar14 + *param_2),*(void **)(param_1 + 0x18),
         (longlong)*(int *)(param_1 + 0x20));
  iVar11 = *(int *)(param_1 + 0x40);
  iVar12 = (int)param_2[5] + iVar11;
  if (-1 < iVar12) {
    plVar1 = param_2 + 4;
    if (*(int *)((longlong)param_2 + 0x2c) < iVar12) {
      FUN_146829ff8(plVar1);
      iVar11 = *(int *)(param_1 + 0x40);
    }
    if (iVar11 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x38);
      lVar13 = 0;
      do {
        iVar12 = (int)param_2[5];
        *(uint *)(param_2 + 5) = iVar12 + 1U;
        if (*(uint *)((longlong)param_2 + 0x2c) < iVar12 + 1U) {
          FUN_146829ed6(plVar1,iVar12);
        }
        puVar2 = (undefined4 *)(lVar6 + lVar13);
        lVar15 = *plVar1;
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(lVar15 + (longlong)iVar12 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        piVar5 = (int *)(lVar15 + 0xc + (longlong)iVar12 * 0x10);
        *piVar5 = *piVar5 + uVar14;
        lVar13 = lVar13 + 0x10;
      } while ((longlong)iVar11 * 0x10 != lVar13);
    }
    iVar11 = *(int *)(param_1 + 0x50);
    iVar12 = (int)param_2[7] + iVar11;
    if (-1 < iVar12) {
      plVar1 = param_2 + 6;
      if (*(int *)((longlong)param_2 + 0x3c) < iVar12) {
        FUN_14682a058(plVar1);
        iVar11 = *(int *)(param_1 + 0x50);
      }
      if (iVar11 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x48);
        lVar13 = 0;
        do {
          iVar12 = (int)param_2[7];
          lVar15 = (longlong)iVar12;
          *(uint *)(param_2 + 7) = iVar12 + 1U;
          if (*(uint *)((longlong)param_2 + 0x3c) < iVar12 + 1U) {
            FUN_146829f64(plVar1,iVar12);
          }
          puVar4 = (undefined8 *)(lVar6 + lVar13);
          lVar7 = *plVar1;
          iVar12 = *(int *)(puVar4 + 1);
          *(int *)(lVar7 + 8 + lVar15 * 0xc) = iVar12;
          *(undefined8 *)(lVar7 + lVar15 * 0xc) = *puVar4;
          *(uint *)(lVar7 + 8 + lVar15 * 0xc) = iVar12 + uVar14;
          lVar13 = lVar13 + 0xc;
        } while ((longlong)iVar11 * 0xc != lVar13);
      }
      iVar11 = *(int *)(param_1 + 0x60);
      iVar12 = (int)param_2[9] + iVar11;
      if (-1 < iVar12) {
        plVar1 = param_2 + 8;
        if (*(int *)((longlong)param_2 + 0x4c) < iVar12) {
          FUN_14682a058(plVar1);
          iVar11 = *(int *)(param_1 + 0x60);
        }
        if (iVar11 != 0) {
          lVar6 = *(longlong *)(param_1 + 0x58);
          lVar13 = 0;
          do {
            iVar12 = (int)param_2[9];
            lVar15 = (longlong)iVar12;
            *(uint *)(param_2 + 9) = iVar12 + 1U;
            if (*(uint *)((longlong)param_2 + 0x4c) < iVar12 + 1U) {
              FUN_146829f64(plVar1,iVar12);
            }
            puVar4 = (undefined8 *)(lVar6 + lVar13);
            lVar7 = *plVar1;
            iVar12 = *(int *)(puVar4 + 1);
            *(int *)(lVar7 + 8 + lVar15 * 0xc) = iVar12;
            *(undefined8 *)(lVar7 + lVar15 * 0xc) = *puVar4;
            *(uint *)(lVar7 + 8 + lVar15 * 0xc) = iVar12 + uVar14;
            lVar13 = lVar13 + 0xc;
          } while ((longlong)iVar11 * 0xc != lVar13);
        }
        return uVar14;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar12);
}



// FUNCTION 146827f30 FUN_146827f30 body=191 status=ok
// SIG undefined FUN_146827f30(void)

void FUN_146827f30(longlong param_1)

{
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [136];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1427879d8(local_a0);
  FUN_140c54e34(local_a0,*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20));
  FUN_140c54e34(local_a0,*(undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x30) * 0xc);
  FUN_140c54e34(local_a0,*(undefined8 *)(param_1 + 0x38),*(int *)(param_1 + 0x40) << 4);
  FUN_142790d57(param_1 + 0x48,local_a0);
  FUN_142790d57(param_1 + 0x58,local_a0);
  FUN_140c54d7a(local_a0);
  FUN_142787a10(local_a0,param_1 + 0x68);
  FUN_1427879f6(local_a0);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146827ff0 FUN_146827ff0 body=12 status=ok
// SIG undefined FUN_146827ff0(void)

undefined8 FUN_146827ff0(longlong *param_1)

{
  return *(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x10);
}



// FUNCTION 146827ffc FUN_146827ffc body=12 status=ok
// SIG undefined FUN_146827ffc(void)

undefined8 FUN_146827ffc(longlong *param_1)

{
  return *(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x18);
}



// FUNCTION 146828008 FUN_146828008 body=10 status=ok
// SIG undefined FUN_146828008(void)

void FUN_146828008(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014682800f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x20))();
  return;
}



// FUNCTION 146828012 FUN_146828012 body=200 status=ok
// SIG undefined FUN_146828012(void)

void FUN_146828012(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar3 = (**(code **)(param_3 + 0x38))(param_3,*(longlong *)(*param_1 + 0x10) + 0x28);
  lVar2 = *param_1;
  FUN_1401211f6(lVar2 + 0x18,*(int *)(lVar2 + 0x20) + (uVar3 - 1) & -uVar3,1);
  uVar4 = *(uint *)(lVar2 + 0x7c);
  if (*(uint *)(lVar2 + 0x7c) < uVar3) {
    uVar4 = uVar3;
  }
  *(uint *)(lVar2 + 0x7c) = uVar4;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    (*pcVar1)(param_1,param_2,param_3,param_3);
    lVar2 = *param_1;
    FUN_1401211f6(lVar2 + 0x18,*(int *)(lVar2 + 0x20) + (uVar3 - 1) & -uVar3,1);
    uVar4 = *(uint *)(lVar2 + 0x7c);
    if (*(uint *)(lVar2 + 0x7c) < uVar3) {
      uVar4 = uVar3;
    }
    *(uint *)(lVar2 + 0x7c) = uVar4;
    param_2 = param_2 + (ulonglong)*(uint *)(param_3 + 0x58);
  }
  return;
}



// FUNCTION 1468280da FUN_1468280da body=48 status=ok
// SIG undefined FUN_1468280da(void)

ulonglong FUN_1468280da(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 0x20);
  FUN_140393c76(lVar2 + 0x18,uVar1 + 8,1);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar1) = 0;
  return (ulonglong)uVar1;
}



// FUNCTION 14682810a FUN_14682810a body=42 status=ok
// SIG undefined FUN_14682810a(void)

undefined8 *
FUN_14682810a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1468279da(*param_1,param_3,param_4,param_5);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146828134 FUN_146828134 body=34 status=ok
// SIG undefined FUN_146828134(void)

undefined8 * FUN_146828134(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1468279da(*param_1,param_3,param_3,0);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146828156 FUN_146828156 body=8 status=ok
// SIG undefined FUN_146828156(void)

void FUN_146828156(undefined8 *param_1)

{
  FUN_146827c68(*param_1);
  return;
}



// FUNCTION 14682815e FUN_14682815e body=8 status=ok
// SIG undefined FUN_14682815e(void)

void FUN_14682815e(undefined8 *param_1)

{
  FUN_146827cee(*param_1);
  return;
}



// FUNCTION 146828166 FUN_146828166 body=11 status=ok
// SIG undefined FUN_146828166(void)

undefined8 FUN_146828166(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 == -1) {
    uVar1 = param_2;
  }
  return uVar1;
}



// FUNCTION 146828172 FUN_146828172 body=110 status=ok
// SIG undefined FUN_146828172(void)

void FUN_146828172(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = FUN_141546ee8();
  if (cVar1 != '\0') {
    (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
    uVar2 = FUN_1401cb356();
    FUN_142746dae(uVar2,0x3c888889);
    local_18 = 0;
    uStack_10 = 0;
    FUN_1449db362();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468281e2 FUN_1468281e2 body=98 status=ok
// SIG undefined FUN_1468281e2(void)

undefined8 * FUN_1468281e2(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e36b00;
  puVar1 = (undefined8 *)param_1[0x12];
  do {
    puVar2 = puVar1;
    puVar1 = (undefined8 *)puVar2[0x11];
  } while (puVar1 != param_1);
  puVar2[0x11] = param_1[0x11];
  param_1[0x11] = 0;
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146828244 FUN_146828244 body=38 status=ok
// SIG undefined FUN_146828244(void)

undefined8 FUN_146828244(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14682826a FUN_14682826a body=41 status=ok
// SIG undefined FUN_14682826a(void)

void FUN_14682826a(void)

{
  FUN_140033559("Runtime\\Core\\Public\\Serialization/BitArchive.h",0x14,
                L"Pure virtual not implemented (%s)",L"FBitArchive::SerializeBitsWithOffset");
  return;
}



// FUNCTION 146828294 FUN_146828294 body=68 status=ok
// SIG undefined FUN_146828294(void)

undefined8 * FUN_146828294(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e37560;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468282d8 FUN_1468282d8 body=29 status=ok
// SIG undefined FUN_1468282d8(void)

undefined8 FUN_1468282d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146828300 FUN_146828300 body=1 status=ok
// SIG undefined FUN_146828300(void)

void FUN_146828300(void)

{
  return;
}



// FUNCTION 146828308 FUN_146828308 body=149 status=ok
// SIG undefined FUN_146828308(void)

bool FUN_146828308(longlong param_1,undefined8 param_2,byte param_3)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_1c = (uint)param_3;
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_1c,4);
    uVar5 = local_1c;
    if (1 < local_1c) {
      lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
      do {
        *(byte *)(lVar4 + 0x29) = *(byte *)(lVar4 + 0x29) | 2;
        lVar4 = *(longlong *)(lVar4 + 0x88);
        uVar5 = local_1c;
      } while (lVar4 != 0);
    }
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 != 0;
}



// FUNCTION 146828404 FUN_146828404 body=149 status=ok
// SIG undefined FUN_146828404(void)

bool FUN_146828404(longlong param_1,undefined8 param_2,byte param_3)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_1c = (uint)param_3;
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_1c,4);
    uVar5 = local_1c;
    if (1 < local_1c) {
      lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
      do {
        *(byte *)(lVar4 + 0x29) = *(byte *)(lVar4 + 0x29) | 2;
        lVar4 = *(longlong *)(lVar4 + 0x88);
        uVar5 = local_1c;
      } while (lVar4 != 0);
    }
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 != 0;
}



// FUNCTION 1468285c6 FUN_1468285c6 body=72 status=ok
// SIG undefined FUN_1468285c6(void)

undefined8 * FUN_1468285c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e37a60;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    FUN_1400020a8(param_1[0x14]);
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14682860e FUN_14682860e body=38 status=ok
// SIG undefined FUN_14682860e(void)

undefined8 FUN_14682860e(undefined8 param_1,int param_2)

{
  FUN_146825c36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14682863c FUN_14682863c body=104 status=ok
// SIG undefined FUN_14682863c(void)

void * FUN_14682863c(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x48);
    *(int *)((longlong)param_1 + 0x48) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
    }
    else {
      FUN_1468286a4(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x40);
        if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1468286a4 FUN_1468286a4 body=99 status=ok
// SIG undefined FUN_1468286a4(void)

void FUN_1468286a4(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_140b4c53c(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 146828710 FUN_146828710 body=364 status=ok
// SIG undefined FUN_146828710(void)

void FUN_146828710(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0xc30;
  if (*(longlong *)(param_1 + 0xcb0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xcb0);
  }
  iVar6 = *(int *)(param_1 + 0xcb8);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0xc08) - *(int *)(param_1 + 0xc2c) < iVar3 >> 2) {
    lVar2 = param_1 + 0xc10;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0xc20) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a7765a(&local_50);
      iVar6 = *(int *)(param_1 + 0xc20);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0xc00);
        if (*(longlong *)(local_78 + 0xc00) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0x2c + (longlong)iVar3 * 0x30) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a7765a(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0xcb8));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14682887e FUN_14682887e body=118 status=ok
// SIG undefined FUN_14682887e(void)

void FUN_14682887e(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar5;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar1 = param_1;
  }
  lVar4 = param_1 + 0xc30;
  if (*(longlong *)(param_1 + 0xcb0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xcb0);
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)(lVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)(lVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar4 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar4 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar4 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_1468288f4(param_1,param_2,1);
  return;
}



// FUNCTION 1468288f4 FUN_1468288f4 body=185 status=ok
// SIG undefined FUN_1468288f4(void)

void FUN_1468288f4(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  lVar6 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar6 = param_1;
  }
  if (param_3 != 0) {
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar6 + 4);
    do {
      if (*(int *)(param_1 + 0xc2c) != 0) {
        *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0xc28) * 0x30) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)(param_1 + 0xc2c) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0xc28);
      }
      *puVar7 = uVar3;
      *(int *)(param_1 + 0xc28) = param_2;
      *(int *)(param_1 + 0xc2c) = *(int *)(param_1 + 0xc2c) + 1;
      lVar4 = *(longlong *)(param_1 + 0xc18);
      if (*(longlong *)(param_1 + 0xc18) == 0) {
        lVar4 = param_1 + 0xc10;
      }
      iVar5 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar5 = param_2;
      }
      bVar2 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1468289c4 FUN_1468289c4 body=31 status=ok
// SIG undefined FUN_1468289c4(void)

undefined8
FUN_1468289c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_146828c1c(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 1468289e4 FUN_1468289e4 body=118 status=ok
// SIG undefined FUN_1468289e4(void)

undefined8 FUN_1468289e4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  wchar_t *_Str;
  size_t sVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _Str = *(wchar_t **)(param_1 + 8);
  local_24 = 0x10;
  sVar1 = wcslen(_Str);
  FUN_140c54e34(param_3,_Str,(sVar1 & 0xffffffff) * 2);
  FUN_140c54e34(param_3,&local_24,4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146828a76 FUN_146828a76 body=37 status=ok
// SIG undefined FUN_146828a76(void)

void FUN_146828a76(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 146828a9c FUN_146828a9c body=274 status=ok
// SIG undefined FUN_146828a9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146828a9c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if ((DAT_14c87e597 & 2) == 0) {
    DAT_14c87e597 = DAT_14c87e597 | 3;
    _DAT_14c87e538 = L"wchar_t";
    _DAT_14c87e550 = FUN_146828bae;
    _DAT_14c87e558 = &LAB_146828be0;
    _DAT_14c87e560 = &LAB_146828bee;
    _DAT_14c87e568 = &LAB_146828bf4;
    _DAT_14c87e570 = FUN_146828bf8;
    _DAT_14c87e548 = &LAB_146828c16;
    _DAT_14c87e588 = &DAT_200000002;
    _DAT_14c87e590 = 2;
    DAT_14c87e594 = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14c87e530,*(undefined4 *)(param_1 + 8),0);
  lVar2 = *param_2;
  uVar1 = *(uint *)(lVar2 + 0x20);
  FUN_140393c76(lVar2 + 0x18,uVar1 + 4,1);
  *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar1) = *(undefined4 *)(param_1 + 8);
  lVar2 = *param_2;
  uVar1 = *(uint *)(lVar2 + 0x20);
  FUN_140393c76(lVar2 + 0x18,uVar1 + 4,1);
  *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar1) = *(undefined4 *)(param_1 + 8);
  return;
}



// FUNCTION 146828bae FUN_146828bae body=50 status=ok
// SIG undefined FUN_146828bae(void)

void FUN_146828bae(longlong *param_1,undefined2 *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 0x20);
  FUN_140393c76(lVar2 + 0x18,uVar1 + 2,1);
  *(undefined2 *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar1) = *param_2;
  return;
}



// FUNCTION 146828bf8 FUN_146828bf8 body=29 status=ok
// SIG undefined FUN_146828bf8(void)

void FUN_146828bf8(undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_140212e80(*param_4,&DAT_149e382fc,*param_1);
  return;
}



// FUNCTION 146828c1c FUN_146828c1c body=245 status=ok
// SIG undefined FUN_146828c1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146828c1c(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_146828d12(param_3,*(undefined4 *)(param_1 + 8));
  uVar1 = *param_3;
  if ((DAT_14c87e597 & 2) == 0) {
    DAT_14c87e597 = DAT_14c87e597 | 3;
    _DAT_14c87e538 = L"wchar_t";
    _DAT_14c87e550 = FUN_146828bae;
    _DAT_14c87e558 = &LAB_146828be0;
    _DAT_14c87e560 = &LAB_146828bee;
    _DAT_14c87e568 = &LAB_146828bf4;
    _DAT_14c87e570 = FUN_146828bf8;
    _DAT_14c87e548 = &LAB_146828c16;
    _DAT_14c87e588 = &DAT_200000002;
    _DAT_14c87e590 = 2;
    DAT_14c87e594 = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14c87e530,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 146828d12 FUN_146828d12 body=59 status=ok
// SIG undefined FUN_146828d12(void)

void FUN_146828d12(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_146828d4e(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_146828da2();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146828d4e FUN_146828d4e body=84 status=ok
// SIG undefined FUN_146828d4e(void)

void FUN_146828d4e(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1403aba84(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 2),0,(longlong)(int)param_2 * 2);
  return;
}



// FUNCTION 146828da2 FUN_146828da2 body=62 status=ok
// SIG undefined FUN_146828da2(void)

void FUN_146828da2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146828de0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,2);
  }
  return;
}



// FUNCTION 146828de0 FUN_146828de0 body=88 status=ok
// SIG undefined FUN_146828de0(void)

ulonglong FUN_146828de0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e(param_1 * 2,2);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 146828e38 FUN_146828e38 body=203 status=ok
// SIG undefined FUN_146828e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146828e38(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14c87e597 & 2) == 0) {
    DAT_14c87e597 = DAT_14c87e597 | 3;
    _DAT_14c87e538 = L"wchar_t";
    _DAT_14c87e550 = FUN_146828bae;
    _DAT_14c87e558 = &LAB_146828be0;
    _DAT_14c87e560 = &LAB_146828bee;
    _DAT_14c87e568 = &LAB_146828bf4;
    _DAT_14c87e570 = FUN_146828bf8;
    _DAT_14c87e548 = &LAB_146828c16;
    _DAT_14c87e588 = &DAT_200000002;
    _DAT_14c87e590 = 2;
    DAT_14c87e594 = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14c87e530,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 146828f04 FUN_146828f04 body=48 status=ok
// SIG undefined FUN_146828f04(void)

void FUN_146828f04(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 0x20);
  FUN_140393c76(lVar2 + 0x18,uVar1 + 4,1);
  *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar1) = *param_2;
  return;
}



// FUNCTION 146828f46 FUN_146828f46 body=28 status=ok
// SIG undefined FUN_146828f46(void)

void FUN_146828f46(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_140212e80(*param_4,&DAT_149e382fc,*param_1);
  return;
}



// FUNCTION 146828f6a FUN_146828f6a body=50 status=ok
// SIG undefined FUN_146828f6a(void)

void FUN_146828f6a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 0x20);
  FUN_140393c76(lVar2 + 0x18,uVar1 + 8,1);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar1) = *param_2;
  return;
}



// FUNCTION 146828fb2 FUN_146828fb2 body=28 status=ok
// SIG undefined FUN_146828fb2(void)

void FUN_146828fb2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_140212e80(*param_4,&DAT_149e382fc,*param_1);
  return;
}



// FUNCTION 146828fdc FUN_146828fdc body=57 status=ok
// SIG undefined FUN_146828fdc(void)

void FUN_146828fdc(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 146829016 FUN_146829016 body=38 status=ok
// SIG undefined FUN_146829016(void)

undefined8 FUN_146829016(undefined8 param_1,int param_2)

{
  FUN_146829064();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14682903c FUN_14682903c body=39 status=ok
// SIG undefined FUN_14682903c(void)

undefined8 * FUN_14682903c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146829064 FUN_146829064 body=104 status=ok
// SIG undefined FUN_146829064(void)

void FUN_146829064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e38430;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e38530;
  return;
}



// FUNCTION 1468290cc FUN_1468290cc body=132 status=ok
// SIG undefined FUN_1468290cc(void)

void FUN_1468290cc(longlong param_1,int param_2)

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



// FUNCTION 146829152 FUN_146829152 body=54 status=ok
// SIG undefined FUN_146829152(void)

void FUN_146829152(longlong *param_1)

{
  FUN_146829188(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146829188 FUN_146829188 body=128 status=ok
// SIG undefined FUN_146829188(void)

void FUN_146829188(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
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



// FUNCTION 14682920a FUN_14682920a body=38 status=ok
// SIG undefined FUN_14682920a(void)

undefined8 FUN_14682920a(undefined8 param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146829230 FUN_146829230 body=208 status=ok
// SIG undefined FUN_146829230(void)

void FUN_146829230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c868840;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c86884c = DAT_14c86884c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c868838 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c868838 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c86884c = DAT_14c86884c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1468292d3;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c86884c = DAT_14c86884c + -1;
LAB_1468292d3:
  FUN_14474d06a(&DAT_14c868838,0);
  return;
}



// FUNCTION 146829300 FUN_146829300 body=67 status=ok
// SIG undefined FUN_146829300(void)

void FUN_146829300(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_146829344(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = lVar1;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),lVar1,0x10,8);
  }
  return;
}



// FUNCTION 146829344 FUN_146829344 body=94 status=ok
// SIG undefined FUN_146829344(void)

ulonglong FUN_146829344(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (((((param_2 - param_1 & 0xffffffffffffc00) != 0) ||
       ((longlong)(param_1 * 3) < (longlong)(param_2 * 2))) &&
      (param_1 == 0 || 0x40 < (longlong)(param_2 - param_1))) &&
     (param_2 = param_1, 0 < (longlong)param_1)) {
    uVar1 = FUN_144a3809e(param_1 << 4,8);
    param_2 = uVar1 >> 4;
  }
  return param_2;
}



// FUNCTION 1468293a2 FUN_1468293a2 body=844 status=ok
// SIG undefined FUN_1468293a2(void)

void FUN_1468293a2(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  lVar10 = *param_1;
  puVar7 = *(undefined1 **)(lVar10 + 8);
  if (*(undefined1 **)(lVar10 + 0x10) <= puVar7 + 1) {
    FUN_1402134d6(lVar10,1);
    puVar7 = *(undefined1 **)(lVar10 + 8);
  }
  *(undefined1 **)(lVar10 + 8) = puVar7 + 1;
  *puVar7 = 0x22;
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (*(uint *)(param_2 + 1) != 0) {
    lVar10 = *param_2;
    uVar15 = 0;
    do {
      iVar8 = (int)uVar5;
      lVar4 = 0;
      do {
        bVar1 = *(byte *)(lVar10 + lVar4);
        uVar13 = 1L << (bVar1 & 0x3f);
        uVar5 = uVar13 & 0x4ffffffff;
        if (0x3f < bVar1) {
          uVar5 = uVar15;
        }
        uVar13 = (ulonglong)((uint)uVar13 & 0x10000000);
        if ((bVar1 & 0xc0) != 0x40) {
          uVar13 = uVar15;
        }
        if (uVar13 != 0 || uVar5 != 0) {
          iVar8 = (int)lVar4;
          break;
        }
        lVar4 = lVar4 + 1;
      } while (iVar8 != lVar4);
      FUN_1467f3718(*param_1,lVar10,iVar8);
      uVar11 = *(uint *)(param_2 + 1);
      uVar3 = uVar11 - iVar8;
      if ((int)uVar11 <= (int)(uVar11 - iVar8)) {
        uVar3 = uVar11;
      }
      uVar5 = 0;
      if (0 < (int)uVar3) {
        uVar5 = (ulonglong)uVar3;
      }
      lVar9 = (longlong)(int)uVar11 + *param_2;
      lVar10 = lVar9 - uVar5;
      *param_2 = lVar10;
      *(int *)(param_2 + 1) = (int)uVar5;
      lVar4 = lVar10;
      if (0 < (int)uVar3) {
        lVar12 = -uVar5;
        do {
          bVar1 = *(byte *)(lVar9 + lVar12);
          uVar14 = 1L << (bVar1 & 0x3f);
          uVar13 = uVar14 & 0x4ffffffff;
          if (0x3f < bVar1) {
            uVar13 = uVar15;
          }
          uVar14 = (ulonglong)((uint)uVar14 & 0x10000000);
          if ((bVar1 & 0xc0) != 0x40) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0 && uVar13 == 0) {
            lVar4 = lVar9 + lVar12;
            break;
          }
          lVar12 = lVar12 + 1;
          lVar4 = lVar9;
        } while (lVar12 != 0);
      }
      iVar8 = (int)(lVar4 - lVar10);
      if ((lVar4 - lVar10 & 0xffffffffU) != 0) {
        lVar4 = 0;
        do {
          cVar2 = *(char *)(lVar10 + lVar4);
          switch(cVar2) {
          case '\b':
            lVar9 = *param_1;
            puVar6 = *(undefined2 **)(lVar9 + 8);
            if (*(undefined2 **)(lVar9 + 0x10) <= puVar6 + 1) {
              FUN_1402134d6(lVar9,2);
              puVar6 = *(undefined2 **)(lVar9 + 8);
            }
            *puVar6 = 0x625c;
            break;
          case '\t':
            lVar9 = *param_1;
            puVar6 = *(undefined2 **)(lVar9 + 8);
            if (*(undefined2 **)(lVar9 + 0x10) <= puVar6 + 1) {
              FUN_1402134d6(lVar9,2);
              puVar6 = *(undefined2 **)(lVar9 + 8);
            }
            *puVar6 = 0x745c;
            break;
          case '\n':
            lVar9 = *param_1;
            puVar6 = *(undefined2 **)(lVar9 + 8);
            if (*(undefined2 **)(lVar9 + 0x10) <= puVar6 + 1) {
              FUN_1402134d6(lVar9,2);
              puVar6 = *(undefined2 **)(lVar9 + 8);
            }
            *puVar6 = 0x6e5c;
            break;
          case '\v':
switchD_146829510_caseD_b:
            FUN_140850d22(*param_1,"\\u%04x");
            goto LAB_146829638;
          case '\f':
            lVar9 = *param_1;
            puVar6 = *(undefined2 **)(lVar9 + 8);
            if (*(undefined2 **)(lVar9 + 0x10) <= puVar6 + 1) {
              FUN_1402134d6(lVar9,2);
              puVar6 = *(undefined2 **)(lVar9 + 8);
            }
            *puVar6 = 0x665c;
            break;
          case '\r':
            lVar9 = *param_1;
            puVar6 = *(undefined2 **)(lVar9 + 8);
            if (*(undefined2 **)(lVar9 + 0x10) <= puVar6 + 1) {
              FUN_1402134d6(lVar9,2);
              puVar6 = *(undefined2 **)(lVar9 + 8);
            }
            *puVar6 = 0x725c;
            break;
          default:
            if (cVar2 == '\"') {
              lVar9 = *param_1;
              puVar6 = *(undefined2 **)(lVar9 + 8);
              if (*(undefined2 **)(lVar9 + 0x10) <= puVar6 + 1) {
                FUN_1402134d6(lVar9,2);
                puVar6 = *(undefined2 **)(lVar9 + 8);
              }
              *puVar6 = 0x225c;
            }
            else {
              if (cVar2 != '\\') goto switchD_146829510_caseD_b;
              lVar9 = *param_1;
              puVar6 = *(undefined2 **)(lVar9 + 8);
              if (*(undefined2 **)(lVar9 + 0x10) <= puVar6 + 1) {
                FUN_1402134d6(lVar9,2);
                puVar6 = *(undefined2 **)(lVar9 + 8);
              }
              *puVar6 = 0x5c5c;
            }
          }
          *(undefined2 **)(lVar9 + 8) = puVar6 + 1;
LAB_146829638:
          lVar4 = lVar4 + 1;
        } while (iVar8 != lVar4);
        uVar5 = (ulonglong)*(uint *)(param_2 + 1);
        lVar10 = *param_2;
      }
      uVar3 = (uint)uVar5;
      uVar11 = uVar3 - iVar8;
      if ((int)uVar3 <= (int)uVar11) {
        uVar11 = uVar3;
      }
      uVar5 = 0;
      if (0 < (int)uVar11) {
        uVar5 = (ulonglong)uVar11;
      }
      lVar10 = ((int)uVar3 + lVar10) - uVar5;
      *param_2 = lVar10;
      *(int *)(param_2 + 1) = (int)uVar5;
    } while (0 < (int)uVar11);
  }
  lVar10 = *param_1;
  puVar7 = *(undefined1 **)(lVar10 + 8);
  if (*(undefined1 **)(lVar10 + 0x10) <= puVar7 + 1) {
    FUN_1402134d6(lVar10,1);
    puVar7 = *(undefined1 **)(lVar10 + 8);
  }
  *(undefined1 **)(lVar10 + 8) = puVar7 + 1;
  *puVar7 = 0x22;
  return;
}



// FUNCTION 1468296ee FUN_1468296ee body=210 status=ok
// SIG undefined FUN_1468296ee(void)

void FUN_1468296ee(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  puVar3 = *(undefined1 **)(lVar2 + 8);
  if (*(undefined1 **)(lVar2 + 0x10) <= puVar3 + 1) {
    FUN_1402134d6(lVar2,1);
    puVar3 = *(undefined1 **)(lVar2 + 8);
  }
  *(undefined1 **)(lVar2 + 8) = puVar3 + 1;
  *puVar3 = 0x22;
  piVar1 = (int *)*param_1;
  lVar2 = *(longlong *)(piVar1 + 2);
  lVar4 = (longlong)
          (int)((int)((ulonglong)(*(int *)(param_2 + 1) + 2) * 0xaaaaaaab >> 0x20) * 2 & 0xfffffffc)
  ;
  if (*(ulonglong *)(piVar1 + 4) <= (ulonglong)(lVar2 + lVar4)) {
    FUN_1402134d6(piVar1,lVar4);
    lVar2 = *(longlong *)(piVar1 + 2);
  }
  *(longlong *)(piVar1 + 2) = lVar4 + lVar2;
  FUN_1410fe63e(*param_2,*(undefined4 *)(param_2 + 1),
                (longlong)((int)lVar2 - *piVar1) + *(longlong *)*param_1,0);
  lVar2 = *param_1;
  puVar3 = *(undefined1 **)(lVar2 + 8);
  if (*(undefined1 **)(lVar2 + 0x10) <= puVar3 + 1) {
    FUN_1402134d6(lVar2,1);
    puVar3 = *(undefined1 **)(lVar2 + 8);
  }
  *(undefined1 **)(lVar2 + 8) = puVar3 + 1;
  *puVar3 = 0x22;
  return;
}



// FUNCTION 1468297c0 FUN_1468297c0 body=855 status=ok
// SIG undefined FUN_1468297c0(void)

void FUN_1468297c0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  lVar10 = *param_1;
  puVar7 = *(undefined2 **)(lVar10 + 8);
  if (*(undefined2 **)(lVar10 + 0x10) <= puVar7 + 1) {
    FUN_140213274(lVar10,1);
    puVar7 = *(undefined2 **)(lVar10 + 8);
  }
  *(undefined2 **)(lVar10 + 8) = puVar7 + 1;
  *puVar7 = 0x22;
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (*(uint *)(param_2 + 1) != 0) {
    lVar10 = *param_2;
    uVar15 = 0;
    do {
      iVar8 = (int)uVar5;
      lVar4 = 0;
      do {
        bVar1 = *(byte *)(lVar10 + lVar4);
        uVar13 = 1L << (bVar1 & 0x3f);
        uVar5 = uVar13 & 0x4ffffffff;
        if (0x3f < bVar1) {
          uVar5 = uVar15;
        }
        uVar13 = (ulonglong)((uint)uVar13 & 0x10000000);
        if ((bVar1 & 0xc0) != 0x40) {
          uVar13 = uVar15;
        }
        if (uVar13 != 0 || uVar5 != 0) {
          iVar8 = (int)lVar4;
          break;
        }
        lVar4 = lVar4 + 1;
      } while (iVar8 != lVar4);
      FUN_144724f4c(*param_1,lVar10,iVar8);
      uVar11 = *(uint *)(param_2 + 1);
      uVar3 = uVar11 - iVar8;
      if ((int)uVar11 <= (int)(uVar11 - iVar8)) {
        uVar3 = uVar11;
      }
      uVar5 = 0;
      if (0 < (int)uVar3) {
        uVar5 = (ulonglong)uVar3;
      }
      lVar9 = (longlong)(int)uVar11 + *param_2;
      lVar10 = lVar9 - uVar5;
      *param_2 = lVar10;
      *(int *)(param_2 + 1) = (int)uVar5;
      lVar4 = lVar10;
      if (0 < (int)uVar3) {
        lVar12 = -uVar5;
        do {
          bVar1 = *(byte *)(lVar9 + lVar12);
          uVar14 = 1L << (bVar1 & 0x3f);
          uVar13 = uVar14 & 0x4ffffffff;
          if (0x3f < bVar1) {
            uVar13 = uVar15;
          }
          uVar14 = (ulonglong)((uint)uVar14 & 0x10000000);
          if ((bVar1 & 0xc0) != 0x40) {
            uVar14 = uVar15;
          }
          if (uVar14 == 0 && uVar13 == 0) {
            lVar4 = lVar9 + lVar12;
            break;
          }
          lVar12 = lVar12 + 1;
          lVar4 = lVar9;
        } while (lVar12 != 0);
      }
      iVar8 = (int)(lVar4 - lVar10);
      if ((lVar4 - lVar10 & 0xffffffffU) != 0) {
        lVar4 = 0;
        do {
          cVar2 = *(char *)(lVar10 + lVar4);
          switch(cVar2) {
          case '\b':
            lVar9 = *param_1;
            puVar6 = *(undefined4 **)(lVar9 + 8);
            if (*(undefined4 **)(lVar9 + 0x10) <= puVar6 + 1) {
              FUN_140213274(lVar9,2);
              puVar6 = *(undefined4 **)(lVar9 + 8);
            }
            *puVar6 = 0x62005c;
            break;
          case '\t':
            lVar9 = *param_1;
            puVar6 = *(undefined4 **)(lVar9 + 8);
            if (*(undefined4 **)(lVar9 + 0x10) <= puVar6 + 1) {
              FUN_140213274(lVar9,2);
              puVar6 = *(undefined4 **)(lVar9 + 8);
            }
            *puVar6 = 0x74005c;
            break;
          case '\n':
            lVar9 = *param_1;
            puVar6 = *(undefined4 **)(lVar9 + 8);
            if (*(undefined4 **)(lVar9 + 0x10) <= puVar6 + 1) {
              FUN_140213274(lVar9,2);
              puVar6 = *(undefined4 **)(lVar9 + 8);
            }
            *puVar6 = 0x6e005c;
            break;
          case '\v':
switchD_146829930_caseD_b:
            FUN_140212e80(*param_1,L"\\u%04x");
            goto LAB_146829a5e;
          case '\f':
            lVar9 = *param_1;
            puVar6 = *(undefined4 **)(lVar9 + 8);
            if (*(undefined4 **)(lVar9 + 0x10) <= puVar6 + 1) {
              FUN_140213274(lVar9,2);
              puVar6 = *(undefined4 **)(lVar9 + 8);
            }
            *puVar6 = 0x66005c;
            break;
          case '\r':
            lVar9 = *param_1;
            puVar6 = *(undefined4 **)(lVar9 + 8);
            if (*(undefined4 **)(lVar9 + 0x10) <= puVar6 + 1) {
              FUN_140213274(lVar9,2);
              puVar6 = *(undefined4 **)(lVar9 + 8);
            }
            *puVar6 = 0x72005c;
            break;
          default:
            if (cVar2 == '\"') {
              lVar9 = *param_1;
              puVar6 = *(undefined4 **)(lVar9 + 8);
              if (*(undefined4 **)(lVar9 + 0x10) <= puVar6 + 1) {
                FUN_140213274(lVar9,2);
                puVar6 = *(undefined4 **)(lVar9 + 8);
              }
              *puVar6 = 0x22005c;
            }
            else {
              if (cVar2 != '\\') goto switchD_146829930_caseD_b;
              lVar9 = *param_1;
              puVar6 = *(undefined4 **)(lVar9 + 8);
              if (*(undefined4 **)(lVar9 + 0x10) <= puVar6 + 1) {
                FUN_140213274(lVar9,2);
                puVar6 = *(undefined4 **)(lVar9 + 8);
              }
              *puVar6 = 0x5c005c;
            }
          }
          *(undefined4 **)(lVar9 + 8) = puVar6 + 1;
LAB_146829a5e:
          lVar4 = lVar4 + 1;
        } while (iVar8 != lVar4);
        uVar5 = (ulonglong)*(uint *)(param_2 + 1);
        lVar10 = *param_2;
      }
      uVar3 = (uint)uVar5;
      uVar11 = uVar3 - iVar8;
      if ((int)uVar3 <= (int)uVar11) {
        uVar11 = uVar3;
      }
      uVar5 = 0;
      if (0 < (int)uVar11) {
        uVar5 = (ulonglong)uVar11;
      }
      lVar10 = ((int)uVar3 + lVar10) - uVar5;
      *param_2 = lVar10;
      *(int *)(param_2 + 1) = (int)uVar5;
    } while (0 < (int)uVar11);
  }
  lVar10 = *param_1;
  puVar7 = *(undefined2 **)(lVar10 + 8);
  if (*(undefined2 **)(lVar10 + 0x10) <= puVar7 + 1) {
    FUN_140213274(lVar10,1);
    puVar7 = *(undefined2 **)(lVar10 + 8);
  }
  *(undefined2 **)(lVar10 + 8) = puVar7 + 1;
  *puVar7 = 0x22;
  return;
}



// FUNCTION 146829b18 FUN_146829b18 body=218 status=ok
// SIG undefined FUN_146829b18(void)

void FUN_146829b18(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  puVar3 = *(undefined2 **)(lVar2 + 8);
  if (*(undefined2 **)(lVar2 + 0x10) <= puVar3 + 1) {
    FUN_140213274(lVar2,1);
    puVar3 = *(undefined2 **)(lVar2 + 8);
  }
  *(undefined2 **)(lVar2 + 8) = puVar3 + 1;
  *puVar3 = 0x22;
  plVar1 = (longlong *)*param_1;
  lVar2 = plVar1[1];
  lVar4 = (longlong)
          (int)((int)((ulonglong)(*(int *)(param_2 + 1) + 2) * 0xaaaaaaab >> 0x20) * 2 & 0xfffffffc)
  ;
  if ((ulonglong)plVar1[2] <= (ulonglong)(lVar2 + lVar4 * 2)) {
    FUN_140213274(plVar1,lVar4);
    lVar2 = plVar1[1];
  }
  plVar1[1] = lVar2 + lVar4 * 2;
  FUN_14155584c(*param_2,*(undefined4 *)(param_2 + 1),
                (longlong)(int)((ulonglong)(lVar2 - *plVar1) >> 1) * 2 + *(longlong *)*param_1,0);
  lVar2 = *param_1;
  puVar3 = *(undefined2 **)(lVar2 + 8);
  if (*(undefined2 **)(lVar2 + 0x10) <= puVar3 + 1) {
    FUN_140213274(lVar2,1);
    puVar3 = *(undefined2 **)(lVar2 + 8);
  }
  *(undefined2 **)(lVar2 + 8) = puVar3 + 1;
  *puVar3 = 0x22;
  return;
}



// FUNCTION 146829bf2 FUN_146829bf2 body=147 status=ok
// SIG undefined FUN_146829bf2(void)

void FUN_146829bf2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146829c86 FUN_146829c86 body=62 status=ok
// SIG undefined FUN_146829c86(void)

void FUN_146829c86(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146829cc4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146829cc4 FUN_146829cc4 body=112 status=ok
// SIG undefined FUN_146829cc4(void)

ulonglong FUN_146829cc4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146829cfe;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_146829cfe:
  return param_2 & 0xffffffff;
}



// FUNCTION 146829d34 FUN_146829d34 body=132 status=ok
// SIG undefined FUN_146829d34(void)

void FUN_146829d34(longlong param_1,int param_2)

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



// FUNCTION 146829dba FUN_146829dba body=134 status=ok
// SIG undefined FUN_146829dba(void)

void FUN_146829dba(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_14009063a(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x28 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_140e4b4d4(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146829e42 FUN_146829e42 body=147 status=ok
// SIG undefined FUN_146829e42(void)

void FUN_146829e42(longlong param_1,int param_2)

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



// FUNCTION 146829ed6 FUN_146829ed6 body=132 status=ok
// SIG undefined FUN_146829ed6(void)

void FUN_146829ed6(longlong param_1,int param_2)

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



// FUNCTION 146829f5b FUN_146829f5b body=8 status=ok
// SIG undefined FUN_146829f5b(void)

void FUN_146829f5b(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 146829f64 FUN_146829f64 body=147 status=ok
// SIG undefined FUN_146829f64(void)

void FUN_146829f64(longlong param_1,int param_2)

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



// FUNCTION 146829ff8 FUN_146829ff8 body=95 status=ok
// SIG undefined FUN_146829ff8(void)

void FUN_146829ff8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14682a058 FUN_14682a058 body=112 status=ok
// SIG undefined FUN_14682a058(void)

void FUN_14682a058(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 14682a0c8 FUN_14682a0c8 body=86 status=ok
// SIG undefined FUN_14682a0c8(void)

void FUN_14682a0c8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14682a11e FUN_14682a11e body=113 status=ok
// SIG undefined FUN_14682a11e(void)

int FUN_14682a11e(longlong *param_1,uint param_2,undefined1 (*param_3) [16])

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
        lVar4 = (longlong)iVar1 * 0x20;
        if (*(int *)(lVar2 + 0x10 + lVar4) == *(int *)param_3[1] &&
            *(undefined1 (*) [16])(lVar2 + lVar4) == *param_3) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14682a190 FUN_14682a190 body=132 status=ok
// SIG undefined FUN_14682a190(void)

void FUN_14682a190(longlong param_1,int param_2)

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



// FUNCTION 14682a216 FUN_14682a216 body=310 status=ok
// SIG undefined FUN_14682a216(void)

undefined4 * FUN_14682a216(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14682a34e(param_1,local_48);
  puVar1 = (uint *)*param_3;
  puVar2 = (uint *)param_3[1];
  local_40[4] = puVar1[4];
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar3 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar6;
  local_40[2] = uVar7;
  local_40[3] = uVar3;
  local_40[5] = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = *local_40;
  local_58 = 0;
  cVar4 = FUN_14682a434(param_1,uVar6,local_40);
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar5 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_40[7] = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14682a532(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682a34e FUN_14682a34e body=229 status=ok
// SIG undefined FUN_14682a34e(void)

int * FUN_14682a34e(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14682a434 FUN_14682a434 body=116 status=ok
// SIG undefined FUN_14682a434(void)

void FUN_14682a434(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_14682a11e();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar8 * 0x20) = *(undefined8 *)(param_3 + 4);
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar8 * 0x20);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_14682a4a8(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_14682a450;
    }
  }
  uVar7 = 0;
LAB_14682a450:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 14682a4a8 FUN_14682a4a8 body=138 status=ok
// SIG undefined FUN_14682a4a8(void)

void FUN_14682a4a8(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14682a532 FUN_14682a532 body=422 status=ok
// SIG undefined FUN_14682a532(void)

void FUN_14682a532(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 14682a6d9 FUN_14682a6d9 body=700 status=ok
// SIG undefined FUN_14682a6d9(void)

void FUN_14682a6d9(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong *puVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328 [188];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (1 < (int)param_2) {
    memset(local_328,0,0x2f0);
    local_330 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_338 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_328[0] = (int)(longlong)(fVar16 + fVar16);
    plVar12 = &local_338;
    do {
      puVar7 = (ulonglong *)*plVar12;
      puVar14 = (ulonglong *)plVar12[1];
      iVar13 = (int)plVar12[2];
      iVar8 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar7) >> 4);
      if (iVar13 != 0) {
LAB_14682a772:
        if (8 < (int)(iVar8 + 1U)) {
          uVar9 = (ulonglong)(iVar8 + 1U >> 1);
          uVar1 = puVar7[uVar9 * 2];
          uVar2 = (puVar7 + uVar9 * 2)[1];
          uVar3 = puVar7[1];
          puVar7[uVar9 * 2] = *puVar7;
          (puVar7 + uVar9 * 2)[1] = uVar3;
          *puVar7 = uVar1;
          puVar7[1] = uVar2;
          puVar10 = puVar14 + 2;
          puVar6 = puVar7;
          do {
            puVar6 = puVar6 + 2;
            if (puVar6 <= puVar14) {
              do {
                bVar15 = *puVar7 < *puVar6;
                if ((*puVar7 == *puVar6) &&
                   (bVar15 = (uint)puVar7[1] < (uint)puVar6[1], (uint)puVar7[1] == (uint)puVar6[1]))
                {
                  bVar15 = *(uint *)((longlong)puVar7 + 0xc) < *(uint *)((longlong)puVar6 + 0xc);
                }
              } while ((!bVar15) && (puVar6 = puVar6 + 2, puVar6 <= puVar14));
            }
            puVar4 = puVar10 + -2;
            puVar5 = puVar10;
            if (puVar7 < puVar4) {
              do {
                puVar11 = puVar4;
                bVar15 = puVar10[-2] < *puVar7;
                puVar4 = puVar11;
                if ((puVar10[-2] == *puVar7) &&
                   (bVar15 = (uint)puVar11[1] < (uint)puVar7[1], (uint)puVar11[1] == (uint)puVar7[1]
                   )) {
                  if (*(uint *)((longlong)puVar11 + 0xc) < *(uint *)((longlong)puVar7 + 0xc)) {
                    puVar5 = puVar11 + 2;
                    break;
                  }
                }
                else {
                  puVar5 = puVar10;
                  if (bVar15) break;
                }
                puVar4 = puVar11 + -2;
                puVar10 = puVar11;
                puVar5 = puVar11;
              } while (puVar7 < puVar4);
            }
            puVar10 = puVar4;
            if (puVar10 < puVar6) goto LAB_14682a84a;
            uVar1 = *puVar6;
            uVar2 = puVar6[1];
            uVar3 = puVar10[1];
            *puVar6 = *puVar10;
            puVar6[1] = uVar3;
            *puVar10 = uVar1;
            puVar10[1] = uVar2;
          } while( true );
        }
        for (; puVar10 = puVar7, puVar6 = puVar7, puVar7 < puVar14; puVar14 = puVar14 + -2) {
          while (puVar4 = puVar10, puVar10 = puVar6 + 2, puVar10 <= puVar14) {
            bVar15 = *puVar4 < *puVar10;
            if ((*puVar4 == *puVar10) &&
               (bVar15 = (uint)puVar4[1] < (uint)puVar10[1], (uint)puVar4[1] == (uint)puVar10[1])) {
              bVar15 = *(uint *)((longlong)puVar4 + 0xc) < *(uint *)((longlong)puVar6 + 0x1c);
            }
            puVar6 = puVar10;
            if (!bVar15) {
              puVar10 = puVar4;
            }
          }
          local_38 = *puVar4;
          uStack_30 = puVar4[1];
          uVar2 = local_38;
          uVar3 = uStack_30;
          uVar1 = puVar14[1];
          *puVar4 = *puVar14;
          puVar4[1] = uVar1;
          local_38._4_4_ = (undefined4)(local_38 >> 0x20);
          uStack_30._4_4_ = (undefined4)(uStack_30 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar14 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_30._4_4_;
          local_38 = uVar2;
          uStack_30 = uVar3;
        }
        goto LAB_14682a962;
      }
LAB_14682a8e5:
      FUN_14682a996(puVar7);
LAB_14682a962:
      plVar12 = plVar12 + -3;
    } while (&local_338 <= plVar12);
  }
  if ((local_28 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14682a84a:
  local_38 = *puVar7;
  uStack_30 = puVar7[1];
  uVar2 = local_38;
  uVar3 = uStack_30;
  uVar1 = puVar10[1];
  *puVar7 = *puVar10;
  puVar7[1] = uVar1;
  local_38._4_4_ = (undefined4)(local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)(uStack_30 >> 0x20);
  *(undefined4 *)puVar10 = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar10 + 4) = local_38._4_4_;
  *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_30._4_4_;
  iVar13 = iVar13 + -1;
  puVar5 = puVar5 + -4;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)puVar5 - (longlong)puVar7 < (longlong)puVar14 - (longlong)puVar6) {
    if (puVar6 < puVar14) {
      *plVar12 = (longlong)puVar6;
      plVar12[1] = (longlong)puVar14;
      *(int *)(plVar12 + 2) = iVar13;
      plVar12 = plVar12 + 3;
    }
    if (puVar10 <= puVar7 + 2) goto LAB_14682a962;
  }
  else {
    if (puVar7 + 2 < puVar10) {
      *plVar12 = (longlong)puVar7;
      plVar12[1] = (longlong)puVar5;
      *(int *)(plVar12 + 2) = iVar13;
      plVar12 = plVar12 + 3;
    }
    puVar5 = puVar14;
    puVar7 = puVar6;
    if (puVar14 <= puVar6) goto LAB_14682a962;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar5 - (longlong)puVar7) >> 4);
  puVar14 = puVar5;
  if (iVar13 == 0) goto LAB_14682a8e5;
  goto LAB_14682a772;
}


