// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489bf014 FUN_1489bf014 body=102 status=ok
// SIG undefined FUN_1489bf014(void)

void FUN_1489bf014(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_2,local_30);
  (**(code **)(*param_1 + 0x38))(param_1,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bf07c FUN_1489bf07c body=110 status=ok
// SIG undefined FUN_1489bf07c(void)

void FUN_1489bf07c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,local_40);
  (**(code **)(*param_1 + 0x48))(param_1,local_40,param_3);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bf0ec FUN_1489bf0ec body=102 status=ok
// SIG undefined FUN_1489bf0ec(void)

void FUN_1489bf0ec(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_2,local_30);
  (**(code **)(*param_1 + 0x58))(param_1,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bf154 FUN_1489bf154 body=73 status=ok
// SIG undefined FUN_1489bf154(void)

undefined8 * FUN_1489bf154(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b439230;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bf19e FUN_1489bf19e body=73 status=ok
// SIG undefined FUN_1489bf19e(void)

undefined8 * FUN_1489bf19e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b439230;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bf1e8 FUN_1489bf1e8 body=25 status=ok
// SIG undefined FUN_1489bf1e8(void)

void FUN_1489bf1e8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489bf1fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1489bf202 FUN_1489bf202 body=29 status=ok
// SIG undefined FUN_1489bf202(void)

undefined8 FUN_1489bf202(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489bf24c FUN_1489bf24c body=136 status=ok
// SIG undefined FUN_1489bf24c(void)

IStreamReader * FUN_1489bf24c(IStreamReader *param_1,undefined8 param_2)

{
  renoir::IStreamReader::IStreamReader(param_1);
  *(undefined ***)param_1 = &PTR_FUN_14b439b30;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 8),4000);
  FUN_140056680(param_1 + 0x30,param_2);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_1489bf2d4(param_1);
  return param_1;
}



// FUNCTION 1489bf2d4 FUN_1489bf2d4 body=388 status=ok
// SIG undefined FUN_1489bf2d4(void)

longlong * FUN_1489bf2d4(longlong param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  DWORD DVar8;
  undefined2 *puVar9;
  undefined1 auStack_78 [32];
  longlong *local_58;
  DWORD local_4c;
  DWORD *local_48;
  longlong **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DVar1 = GetCurrentThreadId();
  local_4c = DVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar4 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x88);
    }
    DVar6 = *(DWORD *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & DVar1) * 4);
    if (DVar6 != 0xffffffff) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      DVar8 = DVar6;
      do {
        if (*(DWORD *)(lVar4 + (longlong)(int)DVar8 * 0x18) == DVar1) goto LAB_1489bf3f5;
        DVar8 = *(DWORD *)(lVar4 + (longlong)(int)DVar8 * 0x18 + 0x10);
      } while (DVar8 != 0xffffffff);
    }
  }
  plVar3 = (longlong *)FUN_1400dbadc();
  plVar5 = (longlong *)*plVar3;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_140e92164();
    *plVar3 = (longlong)plVar5;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x30);
  }
  local_58 = (longlong *)(**(code **)(*plVar5 + 0xe8))(plVar5,puVar9,0);
  if (local_58 != (longlong *)0x0) {
    local_48 = &local_4c;
    local_40 = &local_58;
    FUN_1411e00f4((longlong *)(param_1 + 0x48),local_34,&local_48,0);
  }
  goto LAB_1489bf374;
  while (DVar6 = pDVar7[4], DVar6 != 0xffffffff) {
LAB_1489bf3f5:
    pDVar7 = (DWORD *)(lVar4 + (longlong)(int)DVar6 * 0x18);
    if (*pDVar7 == DVar1) goto LAB_1489bf438;
  }
  pDVar7 = (DWORD *)0x0;
LAB_1489bf438:
  local_58 = *(longlong **)(pDVar7 + 2);
LAB_1489bf374:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (local_58 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = local_58;
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar2 = (**(code **)(*local_58 + 0x50))(local_58);
      *(undefined4 *)(param_1 + 0x40) = uVar2;
      plVar5 = local_58;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 1489bf45e FUN_1489bf45e body=105 status=ok
// SIG undefined FUN_1489bf45e(void)

uint FUN_1489bf45e(undefined8 param_1,int param_2,longlong param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_1489bf2d4();
  if (((param_3 == 0 || plVar4 == (longlong *)0x0) ||
      (cVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2), cVar1 == '\0')) ||
     (cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_4), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(*plVar4 + 0x50))(plVar4);
    uVar3 = iVar2 - param_2;
    if (param_4 < (uint)(iVar2 - param_2)) {
      uVar3 = param_4;
    }
  }
  return uVar3;
}



// FUNCTION 1489bf4d4 FUN_1489bf4d4 body=297 status=ok
// SIG undefined FUN_1489bf4d4(void)

undefined4 FUN_1489bf4d4(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  size_t sVar3;
  longlong *plVar4;
  undefined1 auStack_178 [40];
  undefined **local_150;
  undefined1 local_148;
  longlong local_140;
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1408be2c4(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_148 = 0;
  local_150 = &PTR_FUN_14b43b070;
  local_140 = param_1 + 8;
  plVar2 = (longlong *)FUN_1400dbadc();
  plVar4 = (longlong *)*plVar2;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_140e92164();
    *plVar2 = (longlong)plVar4;
  }
  local_38 = 0;
  if (param_2 == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar3 = strlen(param_2);
    FUN_1446e6fe8(local_138,param_2,sVar3 & 0xffffffff,1);
  }
  uVar1 = (**(code **)(*plVar4 + 0x130))(plVar4,local_30,&local_150);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bf5fe FUN_1489bf5fe body=310 status=ok
// SIG undefined FUN_1489bf5fe(void)

undefined8 FUN_1489bf5fe(longlong param_1)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined8 uVar4;
  wchar_t *_Str;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    uVar4 = 0;
    goto LAB_1489bf6d4;
  }
  *(uint *)(param_1 + 0x18) = uVar1 + 1;
  if (*(int *)(*(longlong *)(param_1 + 8) + 8 + (longlong)(int)uVar1 * 0x10) == 0) {
    _Str = L"";
LAB_1489bf65e:
    local_38 = 0;
    sVar2 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar2 & 0xffffffff,1);
    iVar3 = local_28 + 1;
  }
  else {
    _Str = *(wchar_t **)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 0x10);
    local_38 = 0;
    if (_Str != (wchar_t *)0x0) goto LAB_1489bf65e;
    local_30 = (void *)0x0;
    local_28 = 0;
    iVar3 = 1;
  }
  FUN_1410fe350(param_1 + 0x20,iVar3,1);
  memcpy(*(void **)(param_1 + 0x20),local_30,(longlong)local_28);
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + -1 + (longlong)*(int *)(param_1 + 0x28)) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1489bf6d4:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bf736 FUN_1489bf736 body=245 status=ok
// SIG undefined FUN_1489bf736(void)

undefined8 * FUN_1489bf736(undefined8 param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  local_38 = 0;
  if (param_2 == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_138,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_1489bf24c(puVar1,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  lVar3 = FUN_1489bf2d4(puVar1);
  if (puVar1 != (undefined8 *)0x0 && lVar3 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (lVar3 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489bf82c FUN_1489bf82c body=704 status=ok
// SIG undefined FUN_1489bf82c(void)

/* WARNING: Removing unreachable block (ram,0x0001489bf9cd) */

longlong * FUN_1489bf82c(longlong *param_1,longlong *param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  size_t sVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_188 [32];
  void *local_168;
  int local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = 0;
  if (param_3 == (char *)0x0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    sVar3 = strlen(param_3);
    FUN_1446e6fe8(&local_158,param_3,sVar3 & 0xffffffff,1);
  }
  FUN_140056680(&local_168,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_160 < 2) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_1489bfa96;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1];
  if (local_160 == iVar2) {
    if (1 < local_160) {
      lVar5 = 0;
      while( true ) {
        uVar7 = *(ushort *)((longlong)local_168 + lVar5);
        uVar8 = (ulonglong)uVar7;
        uVar9 = *(ushort *)(*param_1 + lVar5);
        if (uVar7 != uVar9) break;
        if (uVar7 == 0) goto LAB_1489bfa8a;
LAB_1489bf919:
        lVar5 = lVar5 + 2;
      }
      if ((uVar9 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar10 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_1489bf919;
      }
      if (uVar7 != uVar9) goto LAB_1489bf948;
    }
LAB_1489bfa8a:
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    if (local_160 + iVar2 == 1) goto LAB_1489bfa8a;
LAB_1489bf948:
    uVar4 = 0;
    iVar11 = 0;
    if (1 < *(uint *)(param_1 + 2)) {
      if (iVar2 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_1;
      }
      FUN_140002266(&local_158,L"Warning \'%s\' repeated (%d) times",puVar6);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_2,iVar2);
      }
      lVar5 = *param_2;
      lVar12 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar5 + lVar12) = 0;
      *(undefined8 *)(lVar5 + lVar12) = local_158;
      *(undefined4 *)(lVar5 + 8 + lVar12) = (undefined4)local_150;
      *(undefined4 *)(lVar5 + 0xc + lVar12) = local_150._4_4_;
      local_150 = 0;
      local_158 = 0;
      iVar11 = (int)param_2[1];
      uVar4 = *(uint *)((longlong)param_2 + 0xc);
    }
    *(uint *)(param_2 + 1) = iVar11 + 1U;
    if (uVar4 < iVar11 + 1U) {
      FUN_1447a1bd6(param_2,iVar11);
    }
    _Src = local_168;
    lVar5 = *param_2;
    lVar12 = (longlong)iVar11 * 0x10;
    puVar1 = (undefined8 *)(lVar5 + lVar12);
    *(undefined8 *)(lVar5 + lVar12) = 0;
    lVar13 = (longlong)local_160;
    *(int *)(lVar5 + 8 + lVar12) = local_160;
    if (lVar13 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,local_160,0);
      memcpy((void *)*puVar1,_Src,lVar13 * 2);
    }
    iVar2 = local_160 + -1;
    if (local_160 == 0) {
      iVar2 = 0;
    }
    FUN_1402980a2(param_1,local_168,iVar2);
    *(undefined4 *)(param_1 + 2) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
LAB_1489bfa96:
  if (local_168 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489bfaee FUN_1489bfaee body=248 status=ok
// SIG undefined FUN_1489bfaee(void)

void FUN_1489bfaee(longlong param_1,uint param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar3 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1e0);
    }
    uVar2 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a0) + (longlong)(int)uVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 != (uint *)0x0) {
            FUN_1400b22c2(&local_20,param_3);
            if ((*(longlong *)(puVar1 + 2) != 0) &&
               (lVar3 = *(longlong *)(*(longlong *)(puVar1 + 2) + 0x58), lVar3 != 0)) {
              puVar4 = local_20;
              if (local_18 == 0) {
                puVar4 = &DAT_149dfb77a;
              }
              (**(code **)(*DAT_14ca83900 + 0x248))(DAT_14ca83900,&DAT_14ca85100,lVar3,puVar4);
            }
            if (local_20 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        uVar2 = puVar1[4];
      } while (uVar2 != 0xffffffff);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489bfbe8 FUN_1489bfbe8 body=334 status=ok
// SIG undefined FUN_1489bfbe8(void)

void FUN_1489bfbe8(longlong param_1,int param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0x198) != 0) {
    uVar4 = 0;
    lVar5 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 400) + uVar4) == param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          FUN_1400b22c2(&local_28,param_3);
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 400) + 8 + (lVar5 >> 0x20) * 0x10);
          lVar3 = *(longlong *)(lVar5 + 0x10);
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
            LOCK();
            puVar1 = (uint *)(lVar3 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
            puVar6 = local_28;
            if (local_20 == 0) {
              puVar6 = &DAT_149dfb77a;
            }
            lVar5 = *(longlong *)(lVar5 + 0x10);
            if (lVar5 == 0) {
              (**(code **)(*DAT_14ca83900 + 0x248))(DAT_14ca83900,&DAT_14ca85100,0,puVar6);
            }
            else {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
              (**(code **)(*DAT_14ca83900 + 0x248))(DAT_14ca83900,&DAT_14ca85100,lVar5);
              LOCK();
              puVar1 = (uint *)(lVar5 + 8);
              uVar2 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar2 & 0x3fffffff) == 1) {
                FUN_144a54812(lVar5);
              }
            }
          }
          if (local_28 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar5 = lVar5 + 0x100000000;
      uVar4 = uVar4 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x198) * 0x10 != uVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489bfd38 FUN_1489bfd38 body=777 status=ok
// SIG undefined FUN_1489bfd38(void)

longlong * FUN_1489bfd38(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar4 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1e0);
    }
    uVar3 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & param_3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a0) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == param_3) {
          if (puVar1 != (uint *)0x0) {
            if ((longlong)*(int *)(param_1 + 0x198) == 0) goto LAB_1489bffd4;
            lVar4 = 0;
            uVar6 = 0;
            lVar5 = 0;
            goto LAB_1489bfdee;
          }
          break;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
    }
  }
  lVar5 = 0;
  lVar4 = 0;
  goto LAB_1489bfe19;
  while( true ) {
    lVar5 = lVar5 + 0x100000000;
    uVar6 = uVar6 + 0x10;
    if ((longlong)*(int *)(param_1 + 0x198) * 0x10 == uVar6) break;
LAB_1489bfdee:
    if (*(int *)(*(longlong *)(param_1 + 400) + uVar6) == param_4) {
      if ((int)(~uVar6 >> 4) == 0) {
LAB_1489bffd4:
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 400) + 8 + (lVar5 >> 0x20) * 0x10);
      }
      break;
    }
  }
  lVar5 = *(longlong *)(*(longlong *)(puVar1 + 2) + 0x58);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
LAB_1489bfe19:
  local_68 = 0xffffffffffffffff;
  local_60 = 0xffffffff;
  local_50 = 1;
  local_4c = 0x100000000000;
  local_44 = 0;
  local_38 = '\0';
  local_70 = 1;
  local_78 = &local_68;
  local_58 = lVar5;
  FUN_144760590(&DAT_14ca85100,&local_78,0);
  if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(lVar2 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    lVar2 = *(longlong *)(lVar4 + 0x10);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    local_68 = 0xffffffffffffffff;
    local_60 = 0xffffffff;
    local_50 = 1;
    local_4c = 0x800000000000;
    local_44 = 0;
    local_38 = '\0';
    local_70 = 1;
    local_78 = &local_68;
    local_58 = lVar2;
    FUN_144760590(&DAT_14ca85100,&local_78,0);
    if (local_38 == '\x01') {
      local_38 = '\0';
    }
    if (lVar2 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar2 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar2);
      }
    }
  }
  if (lVar5 == 0) {
    *param_2 = 0;
    param_2[1] = lVar4;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar5);
    }
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    *param_2 = lVar5;
    param_2[1] = lVar4;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar5);
    }
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489c0042 FUN_1489c0042 body=1232 status=ok
// SIG undefined FUN_1489c0042(void)

void FUN_1489c0042(longlong param_1,int param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 local_5a;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14ca85180 == (longlong *)0x0) {
    plVar22 = (longlong *)((longlong)DAT_14ca85100 + 0xfU & 0xfffffffffffffff0);
    plVar23 = plVar22 + 9;
    if (DAT_14ca85108 < plVar23) {
      FUN_140023dd8(&DAT_14ca85100,0x58);
      plVar22 = (longlong *)((longlong)DAT_14ca85100 + 0xfU & 0xfffffffffffffff0);
      plVar23 = plVar22 + 9;
    }
    puVar15 = (undefined8 *)((longlong)plVar23 + 0xfU & 0xfffffffffffffff0);
    DAT_14ca85100 = puVar15 + 0x16;
    if (DAT_14ca85108 < DAT_14ca85100) {
      DAT_14ca85100 = plVar23;
      FUN_140023dd8(&DAT_14ca85100,0xc0);
      puVar15 = (undefined8 *)((longlong)DAT_14ca85100 + 0xfU & 0xfffffffffffffff0);
      DAT_14ca85100 = puVar15 + 0x16;
    }
    *puVar15 = DAT_14ca85188;
    puVar15[1] = &DAT_14ca85100;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    *(undefined8 *)((longlong)puVar15 + 0x2e) = 0;
    if (DAT_14c872d30 == 0) {
      FUN_145bdc178();
      bVar24 = DAT_14c872d30 != 0;
      puVar15[7] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      *(undefined8 *)((longlong)puVar15 + 0x56) = 0;
      if (bVar24) goto LAB_1489c02aa;
      FUN_145bdc178();
      bVar24 = DAT_14c872d30 != 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
      *(undefined8 *)((longlong)puVar15 + 0x7e) = 0;
      if (bVar24) goto LAB_1489c02bf;
      FUN_145bdc178();
      bVar24 = DAT_14c872d30 == 0;
      puVar15[0x11] = 0;
      puVar15[0x12] = 0;
      puVar15[0x13] = 0;
      puVar15[0x14] = 0;
      *(undefined8 *)((longlong)puVar15 + 0xa6) = 0;
      if (bVar24) {
        FUN_145bdc178();
      }
    }
    else {
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[7] = 0;
      puVar15[8] = 0;
      *(undefined8 *)((longlong)puVar15 + 0x56) = 0;
LAB_1489c02aa:
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      *(undefined8 *)((longlong)puVar15 + 0x7e) = 0;
LAB_1489c02bf:
      puVar15[0x13] = 0;
      puVar15[0x14] = 0;
      puVar15[0x11] = 0;
      puVar15[0x12] = 0;
      *(undefined8 *)((longlong)puVar15 + 0xa6) = 0;
    }
    DAT_14ca85188 = puVar15;
    *plVar22 = (longlong)puVar15;
    plVar22[1] = 0;
    *(undefined4 *)(plVar22 + 2) = 0;
    plVar22[3] = 0;
    *(undefined4 *)(plVar22 + 4) = 0;
    plVar22[5] = 0;
    *(undefined4 *)(plVar22 + 6) = 0;
    plVar22[7] = 0;
    *(undefined4 *)(plVar22 + 8) = 0;
    DAT_14ca85180 = plVar22;
  }
  plVar23 = DAT_14ca85180;
  lVar14 = (longlong)param_2;
  iVar18 = (int)DAT_14ca85180[6] + (int)DAT_14ca85180[4];
  iVar19 = iVar18 + (int)DAT_14ca85180[8];
  if (iVar19 != 0 && SCARRY4(iVar18,(int)DAT_14ca85180[8]) == iVar19 < 0) {
    DAT_14ca85180[1] = 0;
    *(undefined4 *)(plVar23 + 2) = 0;
    plVar23[3] = 0;
    *(undefined4 *)(plVar23 + 4) = 0;
    plVar23[5] = 0;
    *(undefined4 *)(plVar23 + 6) = 0;
    plVar23[7] = 0;
    *(undefined4 *)(plVar23 + 8) = 0;
  }
  plVar23 = DAT_14ca85180;
  if (*(char *)(param_1 + 0xfc + lVar14 * 4) == '\0') goto LAB_1489c009a;
  uVar4 = *(undefined2 *)(param_1 + 0xfa + lVar14 * 4);
  if (*(char *)(param_1 + 0xfd + lVar14 * 4) == '\x05') {
    local_68 = &local_5a;
    local_5a = uVar4;
    local_58 = param_3;
    FUN_141763902(*DAT_14ca85180,*DAT_14ca85180 + 0x88,DAT_14ca85180 + 7);
    goto LAB_1489c009a;
  }
  lVar17 = *DAT_14ca85180;
  puVar1 = (ulonglong *)(lVar17 + 0x60);
  lVar14 = (longlong)(int)DAT_14ca85180[6] + 1;
  puVar15 = *(undefined8 **)(lVar17 + 0x60);
  if ((longlong)(int)DAT_14ca85180[6] == 0) {
    puVar15 = (undefined8 *)((longlong)puVar15 + 7U & 0xfffffffffffffff8);
    puVar20 = puVar15 + 2;
    puVar16 = puVar15;
    if (*(undefined8 **)(lVar17 + 0x68) < puVar20) {
      FUN_140023dd8(puVar1,0x18);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar20 = puVar15 + 2;
      puVar16 = puVar15;
    }
LAB_1489c0121:
    *puVar1 = (ulonglong)puVar20;
  }
  else {
    puVar20 = puVar15 + 2;
    if (puVar20 <= *(undefined8 **)(lVar17 + 0x68)) {
      puVar16 = (undefined8 *)DAT_14ca85180[5];
      goto LAB_1489c0121;
    }
    puVar16 = (undefined8 *)((longlong)puVar15 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + lVar14 * 2;
    if (*(undefined8 **)(lVar17 + 0x68) < puVar15) {
      FUN_140023dd8(puVar1,(int)lVar14 * 0x10 | 8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + lVar14 * 2;
    }
    *puVar1 = (ulonglong)puVar15;
    puVar15 = puVar16;
    if (0 < (int)plVar23[6]) {
      lVar17 = 0;
      lVar21 = 0;
      do {
        puVar2 = (undefined4 *)(plVar23[5] + lVar17);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)((longlong)puVar16 + lVar17);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        lVar21 = lVar21 + 1;
        lVar17 = lVar17 + 0x10;
      } while (lVar21 < (int)plVar23[6]);
      puVar15 = (undefined8 *)(lVar17 + (longlong)puVar16);
    }
  }
  *puVar15 = param_3;
  *(undefined2 *)(puVar15 + 1) = uVar4;
  *(undefined1 *)((longlong)puVar15 + 10) = 3;
  plVar23[5] = (longlong)puVar16;
  *(int *)(plVar23 + 6) = (int)lVar14;
LAB_1489c009a:
  uVar13 = DAT_14ca85298;
  iVar18 = (int)plVar23[6] + (int)plVar23[4];
  iVar19 = iVar18 + (int)plVar23[8];
  if (iVar19 != 0 && SCARRY4(iVar18,(int)plVar23[8]) == iVar19 < 0) {
    puVar15 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    plVar22 = puVar15 + 0xb;
    if (DAT_14ca85108 < plVar22) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar15 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      plVar22 = puVar15 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = plVar22;
    *DAT_14ca85130 = puVar15;
    DAT_14ca85130 = puVar15 + 1;
    lVar14 = plVar23[7];
    lVar9 = plVar23[8];
    lVar17 = plVar23[5];
    lVar10 = plVar23[6];
    lVar21 = plVar23[3];
    lVar11 = plVar23[4];
    lVar5 = plVar23[1];
    lVar12 = plVar23[2];
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_14a1e7fd8;
    puVar15[2] = uVar13;
    puVar15[3] = lVar5;
    *(int *)(puVar15 + 4) = (int)lVar12;
    puVar15[5] = lVar21;
    *(int *)(puVar15 + 6) = (int)lVar11;
    puVar15[7] = lVar17;
    *(int *)(puVar15 + 8) = (int)lVar10;
    puVar15[9] = lVar14;
    *(int *)(puVar15 + 10) = (int)lVar9;
    plVar23[1] = 0;
    *(undefined4 *)(plVar23 + 2) = 0;
    plVar23[3] = 0;
    *(undefined4 *)(plVar23 + 4) = 0;
    plVar23[5] = 0;
    *(undefined4 *)(plVar23 + 6) = 0;
    plVar23[7] = 0;
    *(undefined4 *)(plVar23 + 8) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489c0514 FUN_1489c0514 body=42 status=ok
// SIG undefined FUN_1489c0514(void)

void FUN_1489c0514(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1489c054a FUN_1489c054a body=93 status=ok
// SIG undefined FUN_1489c054a(void)

longlong FUN_1489c054a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"Data_VS",0);
  return lVar1;
}



// FUNCTION 1489c05a8 FUN_1489c05a8 body=59 status=ok
// SIG undefined FUN_1489c05a8(void)

longlong FUN_1489c05a8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  return lVar1;
}



// FUNCTION 1489c05e4 FUN_1489c05e4 body=42 status=ok
// SIG undefined FUN_1489c05e4(void)

void FUN_1489c05e4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c061a FUN_1489c061a body=39 status=ok
// SIG undefined FUN_1489c061a(void)

void FUN_1489c061a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c0642 FUN_1489c0642 body=64 status=ok
// SIG undefined FUN_1489c0642(void)

longlong FUN_1489c0642(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c0682 FUN_1489c0682 body=42 status=ok
// SIG undefined FUN_1489c0682(void)

void FUN_1489c0682(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1489c06b8 FUN_1489c06b8 body=93 status=ok
// SIG undefined FUN_1489c06b8(void)

longlong FUN_1489c06b8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"Data_VS",0);
  return lVar1;
}



// FUNCTION 1489c0716 FUN_1489c0716 body=59 status=ok
// SIG undefined FUN_1489c0716(void)

longlong FUN_1489c0716(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  return lVar1;
}



// FUNCTION 1489c0752 FUN_1489c0752 body=42 status=ok
// SIG undefined FUN_1489c0752(void)

void FUN_1489c0752(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c0788 FUN_1489c0788 body=39 status=ok
// SIG undefined FUN_1489c0788(void)

void FUN_1489c0788(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c07b0 FUN_1489c07b0 body=64 status=ok
// SIG undefined FUN_1489c07b0(void)

longlong FUN_1489c07b0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c07f0 FUN_1489c07f0 body=42 status=ok
// SIG undefined FUN_1489c07f0(void)

void FUN_1489c07f0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1489c0826 FUN_1489c0826 body=93 status=ok
// SIG undefined FUN_1489c0826(void)

longlong FUN_1489c0826(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"Data_VS",0);
  return lVar1;
}



// FUNCTION 1489c0884 FUN_1489c0884 body=59 status=ok
// SIG undefined FUN_1489c0884(void)

longlong FUN_1489c0884(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  return lVar1;
}



// FUNCTION 1489c08c0 FUN_1489c08c0 body=42 status=ok
// SIG undefined FUN_1489c08c0(void)

void FUN_1489c08c0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c08f6 FUN_1489c08f6 body=39 status=ok
// SIG undefined FUN_1489c08f6(void)

void FUN_1489c08f6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c091e FUN_1489c091e body=64 status=ok
// SIG undefined FUN_1489c091e(void)

longlong FUN_1489c091e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c095e FUN_1489c095e body=42 status=ok
// SIG undefined FUN_1489c095e(void)

void FUN_1489c095e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1489c0994 FUN_1489c0994 body=93 status=ok
// SIG undefined FUN_1489c0994(void)

longlong FUN_1489c0994(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"Data_VS",0);
  return lVar1;
}



// FUNCTION 1489c09f2 FUN_1489c09f2 body=59 status=ok
// SIG undefined FUN_1489c09f2(void)

longlong FUN_1489c09f2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  return lVar1;
}



// FUNCTION 1489c0a2e FUN_1489c0a2e body=42 status=ok
// SIG undefined FUN_1489c0a2e(void)

void FUN_1489c0a2e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c0a64 FUN_1489c0a64 body=39 status=ok
// SIG undefined FUN_1489c0a64(void)

void FUN_1489c0a64(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c0a8c FUN_1489c0a8c body=64 status=ok
// SIG undefined FUN_1489c0a8c(void)

longlong FUN_1489c0a8c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c0acc FUN_1489c0acc body=42 status=ok
// SIG undefined FUN_1489c0acc(void)

void FUN_1489c0acc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c0b02 FUN_1489c0b02 body=39 status=ok
// SIG undefined FUN_1489c0b02(void)

void FUN_1489c0b02(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c0b2a FUN_1489c0b2a body=64 status=ok
// SIG undefined FUN_1489c0b2a(void)

longlong FUN_1489c0b2a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c0b6a FUN_1489c0b6a body=42 status=ok
// SIG undefined FUN_1489c0b6a(void)

void FUN_1489c0b6a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c0ba0 FUN_1489c0ba0 body=39 status=ok
// SIG undefined FUN_1489c0ba0(void)

void FUN_1489c0ba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c0bc8 FUN_1489c0bc8 body=64 status=ok
// SIG undefined FUN_1489c0bc8(void)

longlong FUN_1489c0bc8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c0c08 FUN_1489c0c08 body=42 status=ok
// SIG undefined FUN_1489c0c08(void)

void FUN_1489c0c08(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c0c3e FUN_1489c0c3e body=39 status=ok
// SIG undefined FUN_1489c0c3e(void)

void FUN_1489c0c3e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c0c66 FUN_1489c0c66 body=64 status=ok
// SIG undefined FUN_1489c0c66(void)

longlong FUN_1489c0c66(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c0ca6 FUN_1489c0ca6 body=42 status=ok
// SIG undefined FUN_1489c0ca6(void)

void FUN_1489c0ca6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c0cdc FUN_1489c0cdc body=39 status=ok
// SIG undefined FUN_1489c0cdc(void)

void FUN_1489c0cdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c0d04 FUN_1489c0d04 body=64 status=ok
// SIG undefined FUN_1489c0d04(void)

longlong FUN_1489c0d04(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c0d44 FUN_1489c0d44 body=42 status=ok
// SIG undefined FUN_1489c0d44(void)

void FUN_1489c0d44(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1489c0d7a FUN_1489c0d7a body=93 status=ok
// SIG undefined FUN_1489c0d7a(void)

longlong FUN_1489c0d7a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"Data_VS",0);
  return lVar1;
}



// FUNCTION 1489c0dd8 FUN_1489c0dd8 body=59 status=ok
// SIG undefined FUN_1489c0dd8(void)

longlong FUN_1489c0dd8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  return lVar1;
}



// FUNCTION 1489c0e14 FUN_1489c0e14 body=42 status=ok
// SIG undefined FUN_1489c0e14(void)

void FUN_1489c0e14(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c0e4a FUN_1489c0e4a body=39 status=ok
// SIG undefined FUN_1489c0e4a(void)

void FUN_1489c0e4a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c0e72 FUN_1489c0e72 body=64 status=ok
// SIG undefined FUN_1489c0e72(void)

longlong FUN_1489c0e72(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c0eb2 FUN_1489c0eb2 body=42 status=ok
// SIG undefined FUN_1489c0eb2(void)

void FUN_1489c0eb2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1489c0ee8 FUN_1489c0ee8 body=93 status=ok
// SIG undefined FUN_1489c0ee8(void)

longlong FUN_1489c0ee8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"Data_VS",0);
  return lVar1;
}



// FUNCTION 1489c0f46 FUN_1489c0f46 body=59 status=ok
// SIG undefined FUN_1489c0f46(void)

longlong FUN_1489c0f46(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  return lVar1;
}



// FUNCTION 1489c0f82 FUN_1489c0f82 body=42 status=ok
// SIG undefined FUN_1489c0f82(void)

void FUN_1489c0f82(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c0fb8 FUN_1489c0fb8 body=39 status=ok
// SIG undefined FUN_1489c0fb8(void)

void FUN_1489c0fb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c0fe0 FUN_1489c0fe0 body=64 status=ok
// SIG undefined FUN_1489c0fe0(void)

longlong FUN_1489c0fe0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c1020 FUN_1489c1020 body=42 status=ok
// SIG undefined FUN_1489c1020(void)

void FUN_1489c1020(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c1056 FUN_1489c1056 body=39 status=ok
// SIG undefined FUN_1489c1056(void)

void FUN_1489c1056(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c107e FUN_1489c107e body=64 status=ok
// SIG undefined FUN_1489c107e(void)

longlong FUN_1489c107e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c10be FUN_1489c10be body=42 status=ok
// SIG undefined FUN_1489c10be(void)

void FUN_1489c10be(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1489c10f4 FUN_1489c10f4 body=93 status=ok
// SIG undefined FUN_1489c10f4(void)

longlong FUN_1489c10f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"Data_VS",0);
  return lVar1;
}



// FUNCTION 1489c1152 FUN_1489c1152 body=59 status=ok
// SIG undefined FUN_1489c1152(void)

longlong FUN_1489c1152(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  return lVar1;
}



// FUNCTION 1489c118e FUN_1489c118e body=42 status=ok
// SIG undefined FUN_1489c118e(void)

void FUN_1489c118e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c11c4 FUN_1489c11c4 body=39 status=ok
// SIG undefined FUN_1489c11c4(void)

void FUN_1489c11c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1489c20e8(uVar1,param_1);
  return;
}



// FUNCTION 1489c11ec FUN_1489c11ec body=64 status=ok
// SIG undefined FUN_1489c11ec(void)

longlong FUN_1489c11ec(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 1489c122c FUN_1489c122c body=307 status=ok
// SIG undefined FUN_1489c122c(void)

void FUN_1489c122c(longlong param_1,longlong param_2)

{
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"Data_PS",0);
  FUN_147440a6c(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"txBuffer",0);
  FUN_147440a6c(param_1 + 0xea,*(undefined8 *)(param_2 + 0x28),L"txBuffer1",0);
  FUN_147440a6c(param_1 + 0xee,*(undefined8 *)(param_2 + 0x28),L"txBuffer2",0);
  FUN_147440a6c(param_1 + 0xf2,*(undefined8 *)(param_2 + 0x28),L"txBuffer3",0);
  FUN_147440a6c(param_1 + 0xf6,*(undefined8 *)(param_2 + 0x28),L"txBuffer4",0);
  FUN_147440a6c(param_1 + 0xfa,*(undefined8 *)(param_2 + 0x28),L"samplertxBuffer",0);
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"samplertxBuffer1",0);
  FUN_147440a6c(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"samplertxBuffer2",0);
  FUN_147440a6c(param_1 + 0x106,*(undefined8 *)(param_2 + 0x28),L"samplertxBuffer3",0);
  FUN_147440a6c(param_1 + 0x10a,*(undefined8 *)(param_2 + 0x28),L"samplertxBuffer4",0);
  return;
}



// FUNCTION 1489c1360 FUN_1489c1360 body=55 status=ok
// SIG undefined FUN_1489c1360(void)

void FUN_1489c1360(void)

{
  FUN_140596bca();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
  FUN_1489c1398(&DAT_14cb8fba8,0);
                    /* WARNING: Could not recover jumptable at 0x0001489c1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
  return;
}



// FUNCTION 1489c1398 FUN_1489c1398 body=110 status=ok
// SIG undefined FUN_1489c1398(void)

void FUN_1489c1398(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_146016dae(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140596fba(param_1);
    return;
  }
  FUN_1489c2126(param_1);
  FUN_146016dae(param_1,param_2);
  return;
}



// FUNCTION 1489c1406 FUN_1489c1406 body=38 status=ok
// SIG undefined FUN_1489c1406(void)

undefined8 FUN_1489c1406(undefined8 param_1,int param_2)

{
  FUN_1489c226a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c1488 FUN_1489c1488 body=138 status=ok
// SIG undefined FUN_1489c1488(void)

void FUN_1489c1488(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1489c1512 FUN_1489c1512 body=31 status=ok
// SIG undefined FUN_1489c1512(void)

undefined8 FUN_1489c1512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c154e FUN_1489c154e body=93 status=ok
// SIG undefined FUN_1489c154e(void)

void FUN_1489c154e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b43b610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489c15ac FUN_1489c15ac body=126 status=ok
// SIG undefined FUN_1489c15ac(void)

void FUN_1489c15ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b43b610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489c161b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489c162a FUN_1489c162a body=21 status=ok
// SIG undefined FUN_1489c162a(void)

undefined8 FUN_1489c162a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489c1685 FUN_1489c1685 body=54 status=ok
// SIG undefined FUN_1489c1685(void)

void FUN_1489c1685(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1489c16bb FUN_1489c16bb body=54 status=ok
// SIG undefined FUN_1489c16bb(void)

void FUN_1489c16bb(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1489c16f1 FUN_1489c16f1 body=44 status=ok
// SIG undefined FUN_1489c16f1(void)

void FUN_1489c16f1(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      FUN_145711bb6(*puVar1);
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1489c171d FUN_1489c171d body=69 status=ok
// SIG undefined FUN_1489c171d(void)

void FUN_1489c171d(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      if (*plVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(*plVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      plVar3 = plVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1489c1762 FUN_1489c1762 body=114 status=ok
// SIG undefined FUN_1489c1762(void)

void FUN_1489c1762(longlong *param_1,int param_2)

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



// FUNCTION 1489c17d4 FUN_1489c17d4 body=62 status=ok
// SIG undefined FUN_1489c17d4(void)

void FUN_1489c17d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489c1812(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 1489c1812 FUN_1489c1812 body=93 status=ok
// SIG undefined FUN_1489c1812(void)

ulonglong FUN_1489c1812(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1489c1870 FUN_1489c1870 body=62 status=ok
// SIG undefined FUN_1489c1870(void)

void FUN_1489c1870(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489c18ae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 1489c18ae FUN_1489c18ae body=93 status=ok
// SIG undefined FUN_1489c18ae(void)

ulonglong FUN_1489c18ae(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1489c190c FUN_1489c190c body=62 status=ok
// SIG undefined FUN_1489c190c(void)

void FUN_1489c190c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489c194a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 1489c194a FUN_1489c194a body=93 status=ok
// SIG undefined FUN_1489c194a(void)

ulonglong FUN_1489c194a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1489c19a8 FUN_1489c19a8 body=48 status=ok
// SIG undefined FUN_1489c19a8(void)

void FUN_1489c19a8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1489c19d8 FUN_1489c19d8 body=48 status=ok
// SIG undefined FUN_1489c19d8(void)

void FUN_1489c19d8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1489c1a08 FUN_1489c1a08 body=48 status=ok
// SIG undefined FUN_1489c1a08(void)

void FUN_1489c1a08(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1489c1a38 FUN_1489c1a38 body=322 status=ok
// SIG undefined FUN_1489c1a38(void)

void FUN_1489c1a38(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1489c1b7c FUN_1489c1b7c body=48 status=ok
// SIG undefined FUN_1489c1b7c(void)

void FUN_1489c1b7c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 1489c1bac FUN_1489c1bac body=48 status=ok
// SIG undefined FUN_1489c1bac(void)

void FUN_1489c1bac(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x98,4);
  }
  return;
}



// FUNCTION 1489c1bdc FUN_1489c1bdc body=322 status=ok
// SIG undefined FUN_1489c1bdc(void)

void FUN_1489c1bdc(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 1489c1d20 FUN_1489c1d20 body=322 status=ok
// SIG undefined FUN_1489c1d20(void)

void FUN_1489c1d20(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 1489c1e64 FUN_1489c1e64 body=322 status=ok
// SIG undefined FUN_1489c1e64(void)

void FUN_1489c1e64(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1489c1fa8 FUN_1489c1fa8 body=114 status=ok
// SIG undefined FUN_1489c1fa8(void)

void FUN_1489c1fa8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 1489c201a FUN_1489c201a body=114 status=ok
// SIG undefined FUN_1489c201a(void)

void FUN_1489c201a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 1489c208c FUN_1489c208c body=42 status=ok
// SIG undefined FUN_1489c208c(void)

void FUN_1489c208c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1489c20ba FUN_1489c20ba body=42 status=ok
// SIG undefined FUN_1489c20ba(void)

void FUN_1489c20ba(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1489c20e8 FUN_1489c20e8 body=62 status=ok
// SIG undefined FUN_1489c20e8(void)

longlong FUN_1489c20e8(longlong param_1,undefined8 param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfe) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0;
  FUN_1489c122c(param_1,param_2);
  return param_1;
}



// FUNCTION 1489c2126 FUN_1489c2126 body=322 status=ok
// SIG undefined FUN_1489c2126(void)

void FUN_1489c2126(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1489c226a FUN_1489c226a body=97 status=ok
// SIG undefined FUN_1489c226a(void)

void FUN_1489c226a(IStreamReader *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_14b439b30;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1489c22cc(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001489c22c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  renoir::IStreamReader::~IStreamReader(param_1);
  return;
}



// FUNCTION 1489c22cc FUN_1489c22cc body=54 status=ok
// SIG undefined FUN_1489c22cc(void)

void FUN_1489c22cc(longlong *param_1)

{
  FUN_14130acc6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489c2302 FUN_1489c2302 body=194 status=ok
// SIG undefined FUN_1489c2302(void)

undefined1 * FUN_1489c2302(undefined1 *param_1,void *param_2,uint param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = param_4;
  iVar4 = param_3 + 0x10;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  if (-1 < iVar4) {
    plVar1 = (longlong *)(param_1 + 8);
    if (iVar4 == 0) {
      iVar3 = 0;
      iVar4 = 0;
    }
    else {
      FUN_144893a1c(plVar1);
      iVar4 = *(int *)(param_1 + 0x10);
      iVar3 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x10) = iVar4 + 0x10;
    if ((uint)(iVar3 - iVar4) < 0x10) {
      FUN_1447403be(plVar1,iVar4);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(lVar2 + iVar4) = 0;
    ((undefined8 *)(lVar2 + iVar4))[1] = 0;
    iVar4 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar4 + param_3;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar4) < param_3) {
      FUN_1447403be(plVar1,iVar4);
    }
    if (param_3 != 0) {
      memcpy((void *)((longlong)iVar4 + *plVar1),param_2,(longlong)(int)param_3);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 1489c23c6 FUN_1489c23c6 body=196 status=ok
// SIG undefined FUN_1489c23c6(void)

void FUN_1489c23c6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  do {
    cVar4 = FUN_1489c3b08(param_1 + 0x180);
  } while (cVar4 != '\0');
  do {
    cVar4 = FUN_1489c3b82(param_1 + 400);
  } while (cVar4 != '\0');
  do {
    cVar4 = FUN_1489c3bfc(param_1 + 0x1a0);
  } while (cVar4 != '\0');
  while (lVar3 = **(longlong **)(param_1 + 0x1b8), lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 8);
    lVar2 = *(longlong *)(param_1 + 0x1b8);
    *(longlong *)(param_1 + 0x1b8) = lVar3;
    *(undefined8 *)(lVar3 + 8) = 0;
    if (lVar2 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar1);
    }
  }
  FUN_14005eb28(param_1 + 0x168,0);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 1489c248a FUN_1489c248a body=81 status=ok
// SIG undefined FUN_1489c248a(void)

void FUN_1489c248a(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    plVar2 = (longlong *)puVar1[1];
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar2);
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1489c24dc FUN_1489c24dc body=81 status=ok
// SIG undefined FUN_1489c24dc(void)

void FUN_1489c24dc(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    plVar2 = (longlong *)puVar1[1];
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar2);
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1489c252e FUN_1489c252e body=81 status=ok
// SIG undefined FUN_1489c252e(void)

void FUN_1489c252e(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    plVar2 = (longlong *)puVar1[1];
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar2);
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1489c2662 FUN_1489c2662 body=121 status=ok
// SIG undefined FUN_1489c2662(void)

void FUN_1489c2662(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_14001cc68(0x20,0x10);
  FUN_1489c2302(uVar2,param_2,param_3,param_4);
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar3 = 0;
  puVar3[1] = uVar2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x1b0);
    *(undefined8 **)(param_1 + 0x1b0) = puVar3;
    *puVar1 = puVar3;
  }
  return;
}



// FUNCTION 1489c26dc FUN_1489c26dc body=241 status=ok
// SIG undefined FUN_1489c26dc(void)

void FUN_1489c26dc(longlong *param_1,undefined8 *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  longlong lVar3;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_40 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
    lVar3 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_c0,_Str,sVar1 & 0xffffffff,1);
    lVar3 = (longlong)local_30;
  }
  (**(code **)(*param_1 + 0x20))(param_1,local_38,lVar3,0);
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_1411f311e(uVar2,param_2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c27d6 FUN_1489c27d6 body=76 status=ok
// SIG undefined FUN_1489c27d6(void)

bool FUN_1489c27d6(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar3 = 2;
  if ((longlong)*(int *)(param_2 + 4) < 1) {
    uVar3 = *param_2;
  }
  lVar2 = (longlong)*(int *)(param_2 + 4) + 0x10;
  iVar1 = FUN_144bd8dc0(*(undefined8 *)(param_1 + 0x128),
                        (longlong)(int)lVar2 + *(longlong *)(param_2 + 8),
                        *(int *)(param_2 + 0x10) - lVar2,uVar3);
  if (0 < iVar1) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar1;
  }
  return -1 < iVar1;
}



// FUNCTION 1489c2822 FUN_1489c2822 body=459 status=ok
// SIG undefined FUN_1489c2822(void)

void FUN_1489c2822(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  cVar2 = (char)param_1[8];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if ((cVar2 != (char)param_1[0xc]) && (*(char *)(param_1 + 0xc) = cVar2, cVar2 == '\x03')) {
    uVar3 = (**(code **)(*param_1 + 0x38))(param_1);
    FUN_1447f69b6(uVar3);
  }
  if ((int)param_1[0xd] == 0) {
    local_28 = (longlong *)0x0;
    cVar2 = FUN_1489c29ee(param_1 + 0x34);
    if (cVar2 != '\0') {
      do {
        uVar3 = (**(code **)(*param_1 + 0x50))(param_1);
        FUN_1411f311e(uVar3,local_28);
        cVar2 = FUN_1489c29ee(param_1 + 0x34,&local_28);
      } while (cVar2 != '\0');
    }
    local_30 = (longlong *)0x0;
    cVar2 = FUN_1489c2aa2(param_1 + 0x30);
    if (cVar2 != '\0') {
      do {
        uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
        FUN_1489c3c76(uVar3,*local_30,(longlong)(int)local_30[1],(longlong)(int)local_30[2]);
        cVar2 = FUN_1489c2aa2(param_1 + 0x30,&local_30);
      } while (cVar2 != '\0');
    }
    local_38 = (longlong *)0x0;
    cVar2 = FUN_1489c2b56(param_1 + 0x32);
    if (cVar2 != '\0') {
      do {
        uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
        FUN_1489c3d38(uVar3,*local_38,(longlong)(int)local_38[1],(char)local_38[2]);
        cVar2 = FUN_1489c2b56(param_1 + 0x32,&local_38);
      } while (cVar2 != '\0');
    }
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      if (*local_38 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      if (*local_30 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      if (*local_28 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c29ee FUN_1489c29ee body=180 status=ok
// SIG undefined FUN_1489c29ee(void)

bool FUN_1489c29ee(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 8);
    if (plVar1 != param_2) {
      plVar3 = (longlong *)*param_2;
      *param_2 = *plVar1;
      *plVar1 = 0;
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
    }
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    plVar1 = *(longlong **)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
    if (lVar4 != 0) {
      plVar1 = *(longlong **)(lVar4 + 8);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      FUN_1400020a8(lVar4);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1489c2aa2 FUN_1489c2aa2 body=180 status=ok
// SIG undefined FUN_1489c2aa2(void)

bool FUN_1489c2aa2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 8);
    if (plVar1 != param_2) {
      plVar3 = (longlong *)*param_2;
      *param_2 = *plVar1;
      *plVar1 = 0;
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
    }
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    plVar1 = *(longlong **)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
    if (lVar4 != 0) {
      plVar1 = *(longlong **)(lVar4 + 8);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      FUN_1400020a8(lVar4);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1489c2b56 FUN_1489c2b56 body=180 status=ok
// SIG undefined FUN_1489c2b56(void)

bool FUN_1489c2b56(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 8);
    if (plVar1 != param_2) {
      plVar3 = (longlong *)*param_2;
      *param_2 = *plVar1;
      *plVar1 = 0;
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
    }
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    plVar1 = *(longlong **)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
    if (lVar4 != 0) {
      plVar1 = *(longlong **)(lVar4 + 8);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      FUN_1400020a8(lVar4);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1489c2c0a FUN_1489c2c0a body=126 status=ok
// SIG undefined FUN_1489c2c0a(void)

longlong FUN_1489c2c0a(longlong param_1,undefined8 *param_2)

{
  wchar_t *_Str;
  size_t sVar1;
  
  if ((*(char *)(param_1 + 0x98) == '\x01') && (*(longlong *)(param_1 + 0x80) != 0)) {
    FUN_1400020a8();
  }
  _Str = (wchar_t *)*param_2;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (_Str == (wchar_t *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(param_1,_Str,sVar1 & 0xffffffff,1);
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  return param_1;
}



// FUNCTION 1489c2c88 FUN_1489c2c88 body=376 status=ok
// SIG undefined FUN_1489c2c88(void)

undefined8 * FUN_1489c2c88(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b43c190;
  param_1[1] = &PTR_LAB_14b43c1b0;
  param_1[2] = &PTR_FUN_14b43c1e0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xd] = puVar1;
  param_1[0xc] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xf] = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0x3fa1111120000000;
  FUN_14612afb8(DAT_14c872ce0,L"WebSockets.LibWebSockets",L"ThreadTargetFrameTimeInSeconds",
                param_1 + 0x16,&DAT_14c872ce8);
  param_1[0x17] = 0;
  FUN_14612afb8(DAT_14c872ce0,L"WebSockets.LibWebSockets",L"ThreadMinimumSleepTimeInSeconds",
                param_1 + 0x17,&DAT_14c872ce8);
  FUN_14052bb08(DAT_14c872ce0,L"LwsWebSocket",L"bDisableDomainAllowlist",param_1 + 0x18,
                &DAT_14c872ce8);
  FUN_14052bb08(DAT_14c872ce0,L"LwsWebSocket",L"bDisableCertValidation",(longlong)param_1 + 0xc1,
                &DAT_14c872ce8);
  return param_1;
}



// FUNCTION 1489c2e00 FUN_1489c2e00 body=123 status=ok
// SIG undefined FUN_1489c2e00(void)

longlong FUN_1489c2e00(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb901f8 == 0) {
    FUN_1446ddc76(&local_20,"WebSockets",1);
    uVar1 = FUN_144a52528();
    FUN_1402c9134(uVar1,local_20,local_14,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14cb901f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c2e7c FUN_1489c2e7c body=76 status=ok
// SIG undefined FUN_1489c2e7c(void)

void FUN_1489c2e7c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_1489c2e00();
  FUN_1489c3048(*(undefined8 *)(lVar1 + 0x20),param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 1489c2ecc FUN_1489c2ecc body=227 status=ok
// SIG undefined FUN_1489c2ecc(void)

undefined8 FUN_1489c2ecc(longlong param_1)

{
  double dVar1;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0xa0) == 0) {
    do {
      QueryPerformanceCounter(&local_48);
      dVar1 = (double)local_48.QuadPart * DAT_14c83f420;
      (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
      QueryPerformanceCounter(&local_48);
      dVar1 = *(double *)(param_1 + 0xa8) -
              (((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar1 + 16777216.0));
      if (dVar1 <= *(double *)(param_1 + 0xb0)) {
        dVar1 = *(double *)(param_1 + 0xb0);
      }
      FUN_14279b9b6((float)dVar1);
    } while (*(int *)(param_1 + 0xa0) == 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1489c2fbc FUN_1489c2fbc body=140 status=ok
// SIG undefined FUN_1489c2fbc(void)

void FUN_1489c2fbc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar6);
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = 0;
      puVar5[1] = uVar3;
      if (puVar5 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)(param_1 + 0x68);
        *(undefined8 **)(param_1 + 0x68) = puVar5;
        *puVar4 = puVar5;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) == 0) {
    return;
  }
  FUN_1489c41e8(param_1 + 0x40);
  return;
}



// FUNCTION 1489c3048 FUN_1489c3048 body=256 status=ok
// SIG undefined FUN_1489c3048(void)

undefined8
FUN_1489c3048(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = param_4;
  if (param_3 < 0x15) {
    if (param_3 < 8) {
      if ((1 < param_3 - 3U) && (param_3 != 1)) {
        return 0;
      }
    }
    else if ((1 < param_3 - 10U) && (param_3 != 8)) {
      return 0;
    }
  }
  else if (param_3 < 0x1e) {
    if (param_3 - 0x15U < 2) {
      lVar2 = FUN_14158df5e();
      (**(code **)(**(longlong **)(lVar2 + 8) + 8))(*(longlong **)(lVar2 + 8),param_4);
      return 0;
    }
    if (param_3 != 0x18) {
      return 0;
    }
  }
  else if (param_3 == 0x1e) {
    iVar1 = *(int *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
      FUN_1489c4218((longlong *)(param_1 + 0x80),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 8) = param_4;
  }
  else if (param_3 != 0x26) {
    if (param_3 != 0x3a) {
      return 0;
    }
    uVar3 = FUN_144bd66d0(param_2);
    param_5 = param_4;
  }
  uVar3 = FUN_143e7b14c(uVar3,param_2,param_3,param_5,param_6);
  return uVar3;
}



// FUNCTION 1489c3148 FUN_1489c3148 body=192 status=ok
// SIG undefined FUN_1489c3148(void)

void FUN_1489c3148(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 8;
    lVar9 = 0;
    while (*(longlong *)(lVar1 + lVar9 * 8) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_1489c31f4;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),
              (longlong)iVar6 << 3);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_1489c31f4:
  FUN_1489c429e(param_1);
  return;
}



// FUNCTION 1489c3208 FUN_1489c3208 body=629 status=ok
// SIG undefined FUN_1489c3208(void)

longlong *
FUN_1489c3208(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78 [2];
  longlong local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78[0] = 0;
  local_78[1] = 0;
  plVar3 = param_5 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar7 = 0;
  local_60 = plVar3;
  if ((int)param_5[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar7 = (int)param_5[5];
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = (longlong *)local_68;
  local_90 = local_60;
  local_a0 = param_5;
  if ((iStack_54 != iVar7) || (local_60 != plVar3)) {
    do {
      puVar2 = (undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x28);
      puVar8 = &DAT_149dfb77a;
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(puVar2 + 3) != 0) {
        puVar9 = (undefined2 *)puVar2[2];
      }
      if (*(int *)(puVar2 + 1) != 0) {
        puVar8 = (undefined2 *)*puVar2;
      }
      FUN_140002266(&local_68,L"%s: %s\r\n",puVar8,puVar9);
      iVar4 = (int)local_60 + -1;
      if ((int)local_60 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(local_78,local_68,iVar4);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != param_5 || (local_90 != plVar3 || iStack_84 != iVar7));
  }
  local_68 = CONCAT44(local_68._4_4_,0x100000);
  local_a8 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"WebSockets",L"TextMessageMemoryLimit",&local_68);
  plVar6 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b43c4f0;
  plVar3 = plVar6 + 2;
  local_a8 = (undefined8 *)(longlong)(int)local_68;
  FUN_143e7a9b4(plVar3,param_3,param_4,local_78);
  local_a0 = plVar3;
  local_98 = plVar6;
  FUN_1489c4362(&local_a0,plVar3);
  plVar5 = local_98;
  *param_2 = (longlong)plVar3;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_98 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c347e FUN_1489c347e body=106 status=ok
// SIG undefined FUN_1489c347e(void)

void FUN_1489c347e(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar3 = 0;
  bVar1 = false;
  do {
    uVar3 = (ulonglong)(int)uVar3;
    plVar4 = (longlong *)(uVar3 * 0x10 + *param_1);
    while (*plVar4 != *param_2) {
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 2;
      if ((longlong)iVar2 <= (longlong)uVar3) {
        if (!bVar1) {
          return;
        }
        goto LAB_1489c34d9;
      }
    }
    FUN_1489c44ce(param_1,uVar3 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar3 < iVar2);
LAB_1489c34d9:
  FUN_1489c4490(param_1);
  return;
}



// FUNCTION 1489c34e8 FUN_1489c34e8 body=433 status=ok
// SIG undefined FUN_1489c34e8(void)

/* WARNING: Removing unreachable block (ram,0x0001489c35b0) */
/* WARNING: Removing unreachable block (ram,0x0001489c3620) */

void FUN_1489c34e8(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = &DAT_14c872ce8;
  DAT_14cb901f8 = param_1;
  FUN_14105aa76(DAT_14c872ce0,L"WebSockets",L"WebSocketsProtocols",&local_28);
  if ((int)uStack_20 == 0) {
    FUN_140056680(&local_38,&DAT_149f28a02);
    uVar1 = uStack_20;
    lVar4 = (longlong)(int)uStack_20;
    uVar2 = (int)uStack_20 + 1;
    uStack_20 = CONCAT44(uStack_20._4_4_,uVar2);
    if (uStack_20._4_4_ < uVar2) {
      FUN_1447a1bd6(&local_28,uVar1 & 0xffffffff);
    }
    lVar4 = lVar4 * 0x10;
    *(undefined8 *)(local_28 + lVar4) = 0;
    *(undefined8 *)(local_28 + lVar4) = local_38;
    *(undefined4 *)(local_28 + 8 + lVar4) = (undefined4)local_30;
    *(undefined4 *)(local_28 + 0xc + lVar4) = local_30._4_4_;
    local_30 = 0;
    local_38 = 0;
    FUN_140056680(&local_38,&DAT_149f289fa);
    uVar1 = uStack_20;
    lVar4 = (longlong)(int)uStack_20;
    uVar2 = (int)uStack_20 + 1;
    uStack_20 = CONCAT44(uStack_20._4_4_,uVar2);
    if (uStack_20._4_4_ < uVar2) {
      FUN_1447a1bd6(&local_28,uVar1 & 0xffffffff);
    }
    lVar4 = lVar4 * 0x10;
    *(undefined8 *)(local_28 + lVar4) = 0;
    *(undefined8 *)(local_28 + lVar4) = local_38;
    local_38 = 0;
    *(undefined4 *)(local_28 + 8 + lVar4) = (undefined4)local_30;
    *(undefined4 *)(local_28 + 0xc + lVar4) = local_30._4_4_;
    local_30 = 0;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  FUN_1489c2c88(puVar3);
  *(undefined8 **)(param_1 + 0x20) = puVar3;
  local_48 = local_28;
  local_40 = (int)uStack_20;
  (**(code **)*puVar3)(puVar3);
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489c369a FUN_1489c369a body=68 status=ok
// SIG undefined FUN_1489c369a(void)

void FUN_1489c369a(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  DAT_14cb901f8 = 0;
  return;
}



// FUNCTION 1489c36de FUN_1489c36de body=560 status=ok
// SIG undefined FUN_1489c36de(void)

undefined8 *
FUN_1489c36de(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int *piVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  iVar9 = *(int *)(param_4 + 1);
  uVar4 = *param_4;
  if (iVar9 == 0) {
    local_4c = 0;
  }
  else {
    iVar16 = 0;
    local_50 = iVar9;
    FUN_140b856de(&local_58,iVar9,0);
    FUN_140b8566a(local_58,uVar4,iVar9);
    iVar7 = local_50;
    lVar6 = local_58;
    lVar17 = (longlong)local_50;
    iVar9 = local_50;
    if (lVar17 != 0) {
      lVar2 = local_58 + 0x18;
      bVar13 = *(int *)(local_58 + 8) < 2;
      iVar10 = 0;
      local_88 = param_1;
      local_80 = param_4;
      local_78 = param_3;
      local_70 = param_2;
      do {
        lVar15 = (longlong)iVar10;
        iVar9 = iVar10 + 1;
        if (iVar10 + 1 < iVar7) {
          iVar9 = iVar7;
        }
        lVar8 = lVar15 * 0x10;
        piVar14 = (int *)(lVar2 + lVar8);
        iVar11 = iVar10;
        do {
          lVar15 = lVar15 + 1;
          iVar12 = iVar9;
          if (lVar17 <= lVar15) break;
          iVar3 = *piVar14;
          iVar11 = iVar11 + 1;
          piVar14 = piVar14 + 4;
          iVar12 = iVar11;
        } while (bVar13 == iVar3 < 2);
        iVar9 = iVar12 - iVar10;
        if (bVar13 == false) {
          if (iVar16 != iVar10) {
            memmove((void *)((longlong)iVar16 * 0x10 + lVar6),(void *)(lVar8 + lVar6),
                    (longlong)iVar9 << 4);
          }
          iVar16 = iVar16 + iVar9;
        }
        else {
          FUN_1447a1747(lVar8 + lVar6,iVar9);
        }
        param_4 = local_80;
        param_2 = local_70;
        param_3 = local_78;
        param_1 = local_88;
        bVar13 = (bool)(bVar13 ^ 1);
        iVar10 = iVar12;
        iVar9 = iVar16;
      } while (lVar15 < lVar17);
    }
  }
  local_50 = iVar9;
  local_98 = param_5;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
            (*(longlong **)(param_1 + 0x20),param_2,param_3,&local_58);
  local_68 = *param_2;
  local_60 = (longlong *)param_2[1];
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  FUN_1489c476e(param_1 + 8,&local_68,param_4,param_3);
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar14 = (int *)((longlong)plVar5 + 0xc);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1447a1747(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489c3910 FUN_1489c3910 body=261 status=ok
// SIG undefined FUN_1489c3910(void)

undefined8
FUN_1489c3910(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  if (1 < *(int *)(param_4 + 1)) {
    uStack_50 = 1;
    FUN_1447a1bd6(&local_58,0);
    puVar2 = local_58;
    *local_58 = 0;
    iVar1 = *(int *)(param_4 + 1);
    _Src = (void *)*param_4;
    *(int *)(local_58 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)local_58 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(local_58,iVar1,0);
      memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
    }
  }
  local_68 = param_5;
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,&local_58);
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c3a16 FUN_1489c3a16 body=38 status=ok
// SIG undefined FUN_1489c3a16(void)

undefined8 FUN_1489c3a16(undefined8 param_1,int param_2)

{
  FUN_143e7ac48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c3a80 FUN_1489c3a80 body=38 status=ok
// SIG undefined FUN_1489c3a80(void)

undefined8 FUN_1489c3a80(undefined8 param_1,int param_2)

{
  FUN_1489c4830();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c3aac FUN_1489c3aac body=45 status=ok
// SIG undefined FUN_1489c3aac(void)

longlong FUN_1489c3aac(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1489c4830(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c3ada FUN_1489c3ada body=45 status=ok
// SIG undefined FUN_1489c3ada(void)

longlong FUN_1489c3ada(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_1489c4830(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c3b08 FUN_1489c3b08 body=122 status=ok
// SIG undefined FUN_1489c3b08(void)

bool FUN_1489c3b08(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    plVar3 = *(longlong **)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar3);
    }
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar2 + 8);
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 1489c3b82 FUN_1489c3b82 body=122 status=ok
// SIG undefined FUN_1489c3b82(void)

bool FUN_1489c3b82(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    plVar3 = *(longlong **)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar3);
    }
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar2 + 8);
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 1489c3bfc FUN_1489c3bfc body=122 status=ok
// SIG undefined FUN_1489c3bfc(void)

bool FUN_1489c3bfc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    plVar3 = *(longlong **)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar3);
    }
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar2 + 8);
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 1489c3c76 FUN_1489c3c76 body=193 status=ok
// SIG undefined FUN_1489c3c76(void)

void FUN_1489c3c76(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489c3d0d;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489c3d0d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489c3d38 FUN_1489c3d38 body=193 status=ok
// SIG undefined FUN_1489c3d38(void)

void FUN_1489c3d38(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489c3dcf;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489c3dcf:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489c3dfa FUN_1489c3dfa body=192 status=ok
// SIG undefined FUN_1489c3dfa(void)

void FUN_1489c3dfa(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_1489c3e90;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489c3e90:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489c3eba FUN_1489c3eba body=109 status=ok
// SIG undefined FUN_1489c3eba(void)

void FUN_1489c3eba(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 1489c3f28 FUN_1489c3f28 body=143 status=ok
// SIG undefined FUN_1489c3f28(void)

void FUN_1489c3f28(longlong param_1,int param_2)

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



// FUNCTION 1489c3fb8 FUN_1489c3fb8 body=29 status=ok
// SIG undefined FUN_1489c3fb8(void)

undefined8 FUN_1489c3fb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c3ff2 FUN_1489c3ff2 body=101 status=ok
// SIG undefined FUN_1489c3ff2(void)

void FUN_1489c3ff2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b43c480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489c4058 FUN_1489c4058 body=101 status=ok
// SIG undefined FUN_1489c4058(void)

void FUN_1489c4058(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b43c480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489c40be FUN_1489c40be body=134 status=ok
// SIG undefined FUN_1489c40be(void)

void FUN_1489c40be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b43c480;
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
                    /* WARNING: Could not recover jumptable at 0x0001489c4135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489c4156 FUN_1489c4156 body=25 status=ok
// SIG undefined FUN_1489c4156(void)

undefined8 FUN_1489c4156(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489c416f FUN_1489c416f body=73 status=ok
// SIG undefined FUN_1489c416f(void)

void FUN_1489c416f(longlong param_1,int param_2)

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



// FUNCTION 1489c41b8 FUN_1489c41b8 body=48 status=ok
// SIG undefined FUN_1489c41b8(void)

void FUN_1489c41b8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1489c41e8 FUN_1489c41e8 body=48 status=ok
// SIG undefined FUN_1489c41e8(void)

void FUN_1489c41e8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1489c4218 FUN_1489c4218 body=132 status=ok
// SIG undefined FUN_1489c4218(void)

void FUN_1489c4218(longlong param_1,int param_2)

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



// FUNCTION 1489c429e FUN_1489c429e body=62 status=ok
// SIG undefined FUN_1489c429e(void)

void FUN_1489c429e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489c42dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1489c42dc FUN_1489c42dc body=93 status=ok
// SIG undefined FUN_1489c42dc(void)

ulonglong FUN_1489c42dc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1489c433a FUN_1489c433a body=9 status=ok
// SIG undefined FUN_1489c433a(void)

void FUN_1489c433a(longlong param_1)

{
  FUN_143e7ac48(param_1 + 0x10);
  return;
}



// FUNCTION 1489c4344 FUN_1489c4344 body=29 status=ok
// SIG undefined FUN_1489c4344(void)

undefined8 FUN_1489c4344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c4362 FUN_1489c4362 body=167 status=ok
// SIG undefined FUN_1489c4362(void)

void FUN_1489c4362(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489c43dd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489c43dd;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1489c43dd:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001489c43fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489c440a FUN_1489c440a body=132 status=ok
// SIG undefined FUN_1489c440a(void)

void FUN_1489c440a(longlong param_1,int param_2)

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



// FUNCTION 1489c4490 FUN_1489c4490 body=62 status=ok
// SIG undefined FUN_1489c4490(void)

void FUN_1489c4490(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489c4556(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1489c44ce FUN_1489c44ce body=136 status=ok
// SIG undefined FUN_1489c44ce(void)

void FUN_1489c44ce(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar4 != (longlong *)0x0) {
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1489c4556 FUN_1489c4556 body=93 status=ok
// SIG undefined FUN_1489c4556(void)

ulonglong FUN_1489c4556(uint param_1,uint param_2)

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



// FUNCTION 1489c45b4 FUN_1489c45b4 body=57 status=ok
// SIG undefined FUN_1489c45b4(void)

void FUN_1489c45b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14b43c580;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 2;
  puVar1[4] = 0;
  return;
}



// FUNCTION 1489c45ee FUN_1489c45ee body=31 status=ok
// SIG undefined FUN_1489c45ee(void)

undefined8 FUN_1489c45ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c462a FUN_1489c462a body=93 status=ok
// SIG undefined FUN_1489c462a(void)

void FUN_1489c462a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b43c510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489c4688 FUN_1489c4688 body=126 status=ok
// SIG undefined FUN_1489c4688(void)

void FUN_1489c4688(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b43c510;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489c46f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489c4712 FUN_1489c4712 body=21 status=ok
// SIG undefined FUN_1489c4712(void)

undefined8 FUN_1489c4712(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489c4728 FUN_1489c4728 body=69 status=ok
// SIG undefined FUN_1489c4728(void)

undefined8 * FUN_1489c4728(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b43c580;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c476e FUN_1489c476e body=193 status=ok
// SIG undefined FUN_1489c476e(void)

void FUN_1489c476e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1489c4805;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489c4805:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489c4830 FUN_1489c4830 body=186 status=ok
// SIG undefined FUN_1489c4830(void)

void FUN_1489c4830(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b43c190;
  param_1[1] = &PTR_LAB_14b43c1b0;
  param_1[2] = &PTR_FUN_14b43c1e0;
  plVar2 = (longlong *)param_1[0x13];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x10] == 0) goto LAB_1489c4881;
  while( true ) {
    FUN_1400020a8();
LAB_1489c4881:
    if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) break;
    param_1[0xf] = *(undefined8 *)param_1[0xf];
  }
  while ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
    param_1[0xd] = *(undefined8 *)param_1[0xd];
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1489c416f(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489c4902 FUN_1489c4902 body=156 status=ok
// SIG undefined FUN_1489c4902(void)

void FUN_1489c4902(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489ccd6c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c49b6 FUN_1489c49b6 body=261 status=ok
// SIG undefined FUN_1489c49b6(void)

void FUN_1489c49b6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e7fc3a(param_1,local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c4abc FUN_1489c4abc body=38 status=ok
// SIG undefined FUN_1489c4abc(void)

void FUN_1489c4abc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489ccad2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c4afc FUN_1489c4afc body=158 status=ok
// SIG undefined FUN_1489c4afc(void)

void FUN_1489c4afc(undefined8 param_1,longlong param_2)

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
  FUN_1489cbf6a(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c4ba0 FUN_1489c4ba0 body=158 status=ok
// SIG undefined FUN_1489c4ba0(void)

void FUN_1489c4ba0(undefined8 param_1,longlong param_2)

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
  FUN_1489cc7f8(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c4c5c FUN_1489c4c5c body=162 status=ok
// SIG undefined FUN_1489c4c5c(void)

void FUN_1489c4c5c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x488))(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c4d04 FUN_1489c4d04 body=37 status=ok
// SIG undefined FUN_1489c4d04(void)

void FUN_1489c4d04(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489cc672();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c4d2e FUN_1489c4d2e body=37 status=ok
// SIG undefined FUN_1489c4d2e(void)

void FUN_1489c4d2e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489ccab4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c4d58 FUN_1489c4d58 body=37 status=ok
// SIG undefined FUN_1489c4d58(void)

void FUN_1489c4d58(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489cbfd0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c4d7e FUN_1489c4d7e body=171 status=ok
// SIG undefined FUN_1489c4d7e(void)

void FUN_1489c4d7e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489cc69c(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c4e2a FUN_1489c4e2a body=171 status=ok
// SIG undefined FUN_1489c4e2a(void)

void FUN_1489c4e2a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489ccd5a(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c4ed6 FUN_1489c4ed6 body=171 status=ok
// SIG undefined FUN_1489c4ed6(void)

void FUN_1489c4ed6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489ccd48(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c4f82 FUN_1489c4f82 body=355 status=ok
// SIG undefined FUN_1489c4f82(void)

void FUN_1489c4f82(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  local_68 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_60 = (int)uStack_30;
  if (lVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,uStack_30 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar1 * 2);
  }
  FUN_143e7e41c(param_1,&local_68,&local_58);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5112 FUN_1489c5112 body=156 status=ok
// SIG undefined FUN_1489c5112(void)

void FUN_1489c5112(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e7fcfa(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c51b6 FUN_1489c51b6 body=163 status=ok
// SIG undefined FUN_1489c51b6(void)

void FUN_1489c51b6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489ccd90(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5260 FUN_1489c5260 body=178 status=ok
// SIG undefined FUN_1489c5260(void)

void FUN_1489c5260(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489ccd7e(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5314 FUN_1489c5314 body=239 status=ok
// SIG undefined FUN_1489c5314(void)

void FUN_1489c5314(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x478))(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5404 FUN_1489c5404 body=239 status=ok
// SIG undefined FUN_1489c5404(void)

void FUN_1489c5404(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x480))(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c54f4 FUN_1489c54f4 body=190 status=ok
// SIG undefined FUN_1489c54f4(void)

void FUN_1489c54f4(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_418 [40];
  undefined1 local_3f0 [976];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_1458d791c(local_3f0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3f0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_3f0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489ccdae(param_1,puVar1);
  FUN_1458219bc(local_3f0);
  if ((local_20 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c55b8 FUN_1489c55b8 body=158 status=ok
// SIG undefined FUN_1489c55b8(void)

void FUN_1489c55b8(undefined8 param_1,longlong param_2)

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
  FUN_1489cc67e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c566e FUN_1489c566e body=261 status=ok
// SIG undefined FUN_1489c566e(void)

void FUN_1489c566e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e7fbe8(param_1,local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5774 FUN_1489c5774 body=156 status=ok
// SIG undefined FUN_1489c5774(void)

void FUN_1489c5774(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e7fc92(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5844 FUN_1489c5844 body=349 status=ok
// SIG undefined FUN_1489c5844(void)

void FUN_1489c5844(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_1489cd12e(local_20,plVar1,local_3c);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c59a8 FUN_1489c59a8 body=232 status=ok
// SIG undefined FUN_1489c59a8(void)

void FUN_1489c59a8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  thunk_FUN_1489ccff2(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5a92 FUN_1489c5a92 body=219 status=ok
// SIG undefined FUN_1489c5a92(void)

void FUN_1489c5a92(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489cce06(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5b6e FUN_1489c5b6e body=230 status=ok
// SIG undefined FUN_1489c5b6e(void)

void FUN_1489c5b6e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_1489ccf66(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5c56 FUN_1489c5c56 body=225 status=ok
// SIG undefined FUN_1489c5c56(void)

void FUN_1489c5c56(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_1489cce1c(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5d38 FUN_1489c5d38 body=230 status=ok
// SIG undefined FUN_1489c5d38(void)

void FUN_1489c5d38(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_1489cd072(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5e20 FUN_1489c5e20 body=253 status=ok
// SIG undefined FUN_1489c5e20(void)

void FUN_1489c5e20(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_1489cce98(local_28[2],local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5f1e FUN_1489c5f1e body=156 status=ok
// SIG undefined FUN_1489c5f1e(void)

void FUN_1489c5f1e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489ccdfa(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c5fbc FUN_1489c5fbc body=336 status=ok
// SIG undefined FUN_1489c5fbc(void)

void FUN_1489c5fbc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e8133e(local_28[2],local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c610e FUN_1489c610e body=506 status=ok
// SIG undefined FUN_1489c610e(void)

void FUN_1489c610e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  plVar5 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar6) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar6 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
    }
    else {
      bVar6 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar4 = 0;
    if (bVar6) {
      lVar4 = lVar1;
    }
  }
  lVar2 = local_48[2];
  lVar1 = *(longlong *)(lVar4 + 0x78);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar6) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar6 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
    }
    else {
      bVar6 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    lVar4 = 0;
    if (bVar6) {
      lVar4 = lVar1;
    }
  }
  FUN_1489d2b9a(lVar2,plVar5,*(undefined8 *)(lVar4 + 0x70));
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489c630a FUN_1489c630a body=280 status=ok
// SIG undefined FUN_1489c630a(void)

void FUN_1489c630a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446dcc8c();
    lVar5 = 0;
    if (lVar3 == lVar4) {
      lVar5 = lVar1;
    }
  }
  thunk_FUN_1489d2c7c(local_30,lVar5,uVar2);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6432 FUN_1489c6432 body=7 status=ok
// SIG undefined FUN_1489c6432(void)

void FUN_1489c6432(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 1489c6455 FUN_1489c6455 body=96 status=ok
// SIG undefined FUN_1489c6455(void)

void FUN_1489c6455(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c64b6 FUN_1489c64b6 body=141 status=ok
// SIG undefined FUN_1489c64b6(void)

void FUN_1489c64b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_144a787a6(local_48 + 2,param_3);
  FUN_1447cd2ec(param_1,local_48);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6549 FUN_1489c6549 body=138 status=ok
// SIG undefined FUN_1489c6549(void)

ulonglong FUN_1489c6549(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  local_28 = 0;
  FUN_144a787a6(local_38);
  plVar1 = (longlong *)FUN_14479d2ce(param_1);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,local_38);
  uVar3 = CONCAT71((int7)((ulonglong)plVar1 >> 8),local_28);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c65d4 FUN_1489c65d4 body=57 status=ok
// SIG undefined FUN_1489c65d4(void)

void FUN_1489c65d4(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001489c660a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,0,*(code **)(*plVar1 + 0x248));
  return;
}



// FUNCTION 1489c6612 FUN_1489c6612 body=162 status=ok
// SIG undefined FUN_1489c6612(void)

undefined4 * FUN_1489c6612(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14477b072(param_1,DAT_14cb904f8);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
    *param_2 = (undefined4)local_38;
    param_2[1] = local_38._4_4_;
    param_2[2] = (undefined4)uStack_30;
    param_2[3] = uStack_30._4_4_;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  (**(code **)(*param_1 + 0x6e8))(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489c66b6 FUN_1489c66b6 body=92 status=ok
// SIG undefined FUN_1489c66b6(void)

void FUN_1489c66b6(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6e8))(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6738 FUN_1489c6738 body=732 status=ok
// SIG undefined FUN_1489c6738(void)

void FUN_1489c6738(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar5 = local_5c;
  local_60 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  iVar4 = local_60;
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar3 = local_64;
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar2 = local_68;
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  iVar1 = local_6c;
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_70 != 0;
  local_90 = iVar2 != 0;
  local_88 = iVar1 != 0;
  local_98 = iVar3 != 0;
  FUN_143e873c8(param_1,local_58,iVar5 != 0,iVar4 != 0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6a18 FUN_1489c6a18 body=55 status=ok
// SIG undefined FUN_1489c6a18(void)

void FUN_1489c6a18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90530 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90530 = FUN_14171c317(FUN_146565864,uVar1,L"ECohtmlTickGroup");
  }
  return;
}



// FUNCTION 1489c6a58 FUN_1489c6a58 body=61 status=ok
// SIG undefined FUN_1489c6a58(void)

void FUN_1489c6a58(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6a96 FUN_1489c6a96 body=61 status=ok
// SIG undefined FUN_1489c6a96(void)

void FUN_1489c6a96(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6ad4 FUN_1489c6ad4 body=61 status=ok
// SIG undefined FUN_1489c6ad4(void)

void FUN_1489c6ad4(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6b12 FUN_1489c6b12 body=61 status=ok
// SIG undefined FUN_1489c6b12(void)

void FUN_1489c6b12(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6b50 FUN_1489c6b50 body=374 status=ok
// SIG undefined FUN_1489c6b50(void)

/* WARNING: Removing unreachable block (ram,0x0001489c6bfe) */
/* WARNING: Removing unreachable block (ram,0x0001489c6c04) */
/* WARNING: Removing unreachable block (ram,0x0001489c6c12) */

void FUN_1489c6b50(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined3 uStack_40;
  undefined4 uStack_3d;
  undefined4 uStack_39;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &PTR_FUN_149eda650;
  local_90 = param_2[3];
  local_a0 = param_2[1];
  uStack_98 = param_2[2];
  local_88 = *(undefined4 *)(param_2 + 4);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_80 = *(undefined4 *)(param_2 + 5);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_78 = *(undefined4 *)(param_2 + 6);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_70 = *(undefined4 *)(param_2 + 7);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_68 = param_2[8];
  local_60 = param_2[9];
  plStack_58 = (longlong *)param_2[10];
  if (plStack_58 == (longlong *)0x0) {
    plStack_58 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
    UNLOCK();
  }
  local_50 = param_2[0xb];
  uStack_48 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)((longlong)param_2 + 100);
  uStack_3d = *(undefined4 *)((longlong)param_2 + 0x6b);
  uStack_39 = *(undefined4 *)((longlong)param_2 + 0x6f);
  uStack_44 = (undefined2)uVar4;
  uStack_42 = (undefined1)((uint)uVar4 >> 0x10);
  uStack_40 = (undefined3)((uint)*(undefined4 *)((longlong)param_2 + 0x67) >> 8);
  uStack_41 = (undefined1)((uint)uVar4 >> 0x18);
  FUN_1447cd2ec(param_1,&local_a8);
  plVar3 = plStack_58;
  local_a8 = &PTR_FUN_149eda650;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *param_2 = &PTR_FUN_149eda650;
  plVar3 = (longlong *)param_2[10];
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
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489c6cc7 FUN_1489c6cc7 body=61 status=ok
// SIG undefined FUN_1489c6cc7(void)

void FUN_1489c6cc7(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6d0a FUN_1489c6d0a body=158 status=ok
// SIG undefined FUN_1489c6d0a(void)

void FUN_1489c6d0a(undefined8 param_1,longlong param_2)

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
  FUN_1489d03d0(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6daa FUN_1489c6daa body=37 status=ok
// SIG undefined FUN_1489c6daa(void)

void FUN_1489c6daa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489d08d6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c6dd0 FUN_1489c6dd0 body=404 status=ok
// SIG undefined FUN_1489c6dd0(void)

void FUN_1489c6dd0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_20;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  local_1b = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  FUN_1489cffe4(param_1,local_19,local_1a,local_1b);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c6f6a FUN_1489c6f6a body=37 status=ok
// SIG undefined FUN_1489c6f6a(void)

void FUN_1489c6f6a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489d081a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c6f94 FUN_1489c6f94 body=158 status=ok
// SIG undefined FUN_1489c6f94(void)

void FUN_1489c6f94(undefined8 param_1,longlong param_2)

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
  FUN_143e7fda8(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c7034 FUN_1489c7034 body=156 status=ok
// SIG undefined FUN_1489c7034(void)

void FUN_1489c7034(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489ccde8(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c70d2 FUN_1489c70d2 body=152 status=ok
// SIG undefined FUN_1489c70d2(void)

void FUN_1489c70d2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489d08be(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c716c FUN_1489c716c body=152 status=ok
// SIG undefined FUN_1489c716c(void)

void FUN_1489c716c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489d08de(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c7212 FUN_1489c7212 body=671 status=ok
// SIG undefined FUN_1489c7212(void)

void FUN_1489c7212(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  int local_38;
  int local_34;
  undefined4 local_30;
  byte local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_2a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
  local_2b = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2b);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_38 != 0;
  local_48 = iVar1 != 0;
  local_50 = local_30;
  local_58 = (uint)local_2b;
  FUN_143e87d1e(param_1,local_28,local_29,local_2a);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c74d2 FUN_1489c74d2 body=45 status=ok
// SIG undefined FUN_1489c74d2(void)

longlong FUN_1489c74d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a616d8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c750a FUN_1489c750a body=45 status=ok
// SIG undefined FUN_1489c750a(void)

longlong FUN_1489c750a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a3ebe0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c75aa FUN_1489c75aa body=70 status=ok
// SIG undefined FUN_1489c75aa(void)

undefined8 FUN_1489c75aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1489c7618 FUN_1489c7618 body=59 status=ok
// SIG undefined FUN_1489c7618(void)

undefined8 FUN_1489c7618(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c765e FUN_1489c765e body=37 status=ok
// SIG undefined FUN_1489c765e(void)

void FUN_1489c765e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1489c77a2 FUN_1489c77a2 body=110 status=ok
// SIG undefined FUN_1489c77a2(void)

undefined1 FUN_1489c77a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489c7d66(param_2,param_3);
    FUN_1489c7d06(param_2 + 0x50,param_3 + 0x50);
    FUN_1489c7fa4(param_2 + 0x60,param_3 + 0x60);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 1489c7838 FUN_1489c7838 body=59 status=ok
// SIG undefined FUN_1489c7838(void)

undefined8 FUN_1489c7838(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c7884 FUN_1489c7884 body=40 status=ok
// SIG undefined FUN_1489c7884(void)

void FUN_1489c7884(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1489c78fa(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1489c78fa FUN_1489c78fa body=109 status=ok
// SIG undefined FUN_1489c78fa(void)

void FUN_1489c78fa(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_1489c7968(param_1 + 0x60);
  FUN_1489c7b21(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1489c7b6a(param_1);
  return;
}



// FUNCTION 1489c7968 FUN_1489c7968 body=54 status=ok
// SIG undefined FUN_1489c7968(void)

void FUN_1489c7968(longlong *param_1)

{
  FUN_1489c799e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489c799e FUN_1489c799e body=385 status=ok
// SIG undefined FUN_1489c799e(void)

void FUN_1489c799e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x10 + lVar5 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar5 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140b7ce44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1489c7b21 FUN_1489c7b21 body=73 status=ok
// SIG undefined FUN_1489c7b21(void)

void FUN_1489c7b21(longlong param_1,int param_2)

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



// FUNCTION 1489c7b6a FUN_1489c7b6a body=54 status=ok
// SIG undefined FUN_1489c7b6a(void)

void FUN_1489c7b6a(longlong *param_1)

{
  FUN_1489c7ba0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489c7ba0 FUN_1489c7ba0 body=355 status=ok
// SIG undefined FUN_1489c7ba0(void)

void FUN_1489c7ba0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
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
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1489c7d06 FUN_1489c7d06 body=95 status=ok
// SIG undefined FUN_1489c7d06(void)

undefined8 * FUN_1489c7d06(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1489c7b21(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489c7f14(param_1,iVar1);
      FUN_1489c7f76(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489c7d66 FUN_1489c7d66 body=122 status=ok
// SIG undefined FUN_1489c7d66(void)

longlong FUN_1489c7d66(longlong param_1,longlong param_2)

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
    FUN_1489c7de0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1489c7de0 FUN_1489c7de0 body=201 status=ok
// SIG undefined FUN_1489c7de0(void)

undefined8 * FUN_1489c7de0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1489c7ba0(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
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
          FUN_1489c7eaa(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}


