// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1493a409e FUN_1493a409e body=62 status=ok
// SIG undefined FUN_1493a409e(void)

undefined8 * FUN_1493a409e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc940b0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a40f0 FUN_1493a40f0 body=64 status=ok
// SIG undefined FUN_1493a40f0(void)

void FUN_1493a40f0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a4206(*param_2,param_1);
  return;
}



// FUNCTION 1493a4130 FUN_1493a4130 body=64 status=ok
// SIG undefined FUN_1493a4130(void)

void FUN_1493a4130(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a4206(*param_2,param_1);
  return;
}



// FUNCTION 1493a4170 FUN_1493a4170 body=98 status=ok
// SIG undefined FUN_1493a4170(void)

void FUN_1493a4170(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a4206(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a41c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a41e6 FUN_1493a41e6 body=31 status=ok
// SIG undefined FUN_1493a41e6(void)

undefined1 FUN_1493a41e6(longlong param_1,undefined8 param_2)

{
  FUN_1493a428e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a4206 FUN_1493a4206 body=135 status=ok
// SIG undefined FUN_1493a4206(void)

undefined8 * FUN_1493a4206(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc940b0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a428e FUN_1493a428e body=306 status=ok
// SIG undefined FUN_1493a428e(void)

ulonglong FUN_1493a428e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_1493a430f;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_1493a439d:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_1493a430f;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_1493a439d;
  bVar1 = FUN_1493a43c2(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_1493a430f:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a43c2 FUN_1493a43c2 body=177 status=ok
// SIG undefined FUN_1493a43c2(void)

ulonglong FUN_1493a43c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1493a4474(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 4);
      goto LAB_1493a4444;
    }
  }
  uVar3 = 0;
LAB_1493a4444:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a4474 FUN_1493a4474 body=253 status=ok
// SIG undefined FUN_1493a4474(void)

undefined8 *
FUN_1493a4474(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1493a262e(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1493a2382(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_140056680(local_50,L"RegisterAttribute");
  FUN_1444ba954(uVar1,local_50,&local_40);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a4574 FUN_1493a4574 body=485 status=ok
// SIG undefined FUN_1493a4574(void)

longlong * FUN_1493a4574(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 0x15) goto LAB_1493a4707;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493a4707:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a475a FUN_1493a475a body=198 status=ok
// SIG undefined FUN_1493a475a(void)

undefined8 FUN_1493a475a(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x15)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493a4820 FUN_1493a4820 body=378 status=ok
// SIG undefined FUN_1493a4820(void)

ulonglong FUN_1493a4820(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_1493a48f7:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x15;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493a48f7;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x15) goto LAB_1493a48c4;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493a48c4;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_1493a499c(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493a48c4:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a499c FUN_1493a499c body=202 status=ok
// SIG undefined FUN_1493a499c(void)

undefined8 FUN_1493a499c(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 0x15) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a4a68 FUN_1493a4a68 body=135 status=ok
// SIG undefined FUN_1493a4a68(void)

undefined8 * FUN_1493a4a68(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc94120;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a4af0 FUN_1493a4af0 body=62 status=ok
// SIG undefined FUN_1493a4af0(void)

undefined8 * FUN_1493a4af0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc94120;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a4b42 FUN_1493a4b42 body=64 status=ok
// SIG undefined FUN_1493a4b42(void)

void FUN_1493a4b42(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a4c58(*param_2,param_1);
  return;
}



// FUNCTION 1493a4b82 FUN_1493a4b82 body=64 status=ok
// SIG undefined FUN_1493a4b82(void)

void FUN_1493a4b82(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a4c58(*param_2,param_1);
  return;
}



// FUNCTION 1493a4bc2 FUN_1493a4bc2 body=98 status=ok
// SIG undefined FUN_1493a4bc2(void)

void FUN_1493a4bc2(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a4c58(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a4c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a4c38 FUN_1493a4c38 body=31 status=ok
// SIG undefined FUN_1493a4c38(void)

undefined1 FUN_1493a4c38(longlong param_1,undefined8 param_2)

{
  FUN_1493a4ce0(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a4c58 FUN_1493a4c58 body=135 status=ok
// SIG undefined FUN_1493a4c58(void)

undefined8 * FUN_1493a4c58(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc94120;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a4ce0 FUN_1493a4ce0 body=204 status=ok
// SIG undefined FUN_1493a4ce0(void)

undefined4 FUN_1493a4ce0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1493a4dae(param_1,param_2,&local_41);
    if ((char)uVar1 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_68);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        *(undefined1 *)(local_38 + *(int *)(lVar2 + 0x44)) = local_41;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a4dae FUN_1493a4dae body=295 status=ok
// SIG undefined FUN_1493a4dae(void)

ulonglong FUN_1493a4dae(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1493a4574(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1493a4ea3:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if ((cVar3 == '\0') || (iVar4 = FUN_1419073b0(local_58[2],plVar1), iVar4 != 0x15))
      goto LAB_1493a4ea3;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1493a475a(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1493a4e09;
  }
  param_3 = 0;
LAB_1493a4e09:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 & 0xffffff01;
}



// FUNCTION 1493a4ed6 FUN_1493a4ed6 body=135 status=ok
// SIG undefined FUN_1493a4ed6(void)

undefined8 * FUN_1493a4ed6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc94190;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a4f5e FUN_1493a4f5e body=62 status=ok
// SIG undefined FUN_1493a4f5e(void)

undefined8 * FUN_1493a4f5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc94190;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a4fb0 FUN_1493a4fb0 body=64 status=ok
// SIG undefined FUN_1493a4fb0(void)

void FUN_1493a4fb0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a50c6(*param_2,param_1);
  return;
}



// FUNCTION 1493a4ff0 FUN_1493a4ff0 body=64 status=ok
// SIG undefined FUN_1493a4ff0(void)

void FUN_1493a4ff0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a50c6(*param_2,param_1);
  return;
}



// FUNCTION 1493a5030 FUN_1493a5030 body=98 status=ok
// SIG undefined FUN_1493a5030(void)

void FUN_1493a5030(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a50c6(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a5083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a50a6 FUN_1493a50a6 body=31 status=ok
// SIG undefined FUN_1493a50a6(void)

undefined1 FUN_1493a50a6(longlong param_1,undefined8 param_2)

{
  FUN_1493a514e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a50c6 FUN_1493a50c6 body=135 status=ok
// SIG undefined FUN_1493a50c6(void)

undefined8 * FUN_1493a50c6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc94190;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a514e FUN_1493a514e body=306 status=ok
// SIG undefined FUN_1493a514e(void)

ulonglong FUN_1493a514e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_1493a51cf;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_1493a525d:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_1493a51cf;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_1493a525d;
  bVar1 = FUN_1493a5282(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_1493a51cf:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a5282 FUN_1493a5282 body=177 status=ok
// SIG undefined FUN_1493a5282(void)

ulonglong FUN_1493a5282(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1493a5334(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 0x15);
      goto LAB_1493a5304;
    }
  }
  uVar3 = 0;
LAB_1493a5304:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a5334 FUN_1493a5334 body=250 status=ok
// SIG undefined FUN_1493a5334(void)

undefined8 *
FUN_1493a5334(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1493a4820(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1493a4574(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_140056680(local_50,L"RegisterAttribute");
  FUN_1444ba954(uVar1,local_50,&local_40);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a5432 FUN_1493a5432 body=485 status=ok
// SIG undefined FUN_1493a5432(void)

longlong * FUN_1493a5432(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 7) goto LAB_1493a55c5;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493a55c5:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a5618 FUN_1493a5618 body=198 status=ok
// SIG undefined FUN_1493a5618(void)

undefined8 FUN_1493a5618(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 7)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493a56de FUN_1493a56de body=378 status=ok
// SIG undefined FUN_1493a56de(void)

ulonglong FUN_1493a56de(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_1493a57b5:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 7;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493a57b5;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 7) goto LAB_1493a5782;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493a5782;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_1493a585a(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493a5782:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a585a FUN_1493a585a body=202 status=ok
// SIG undefined FUN_1493a585a(void)

undefined8 FUN_1493a585a(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 7) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a5926 FUN_1493a5926 body=135 status=ok
// SIG undefined FUN_1493a5926(void)

undefined8 * FUN_1493a5926(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc94200;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a59ae FUN_1493a59ae body=62 status=ok
// SIG undefined FUN_1493a59ae(void)

undefined8 * FUN_1493a59ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc94200;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a5a00 FUN_1493a5a00 body=64 status=ok
// SIG undefined FUN_1493a5a00(void)

void FUN_1493a5a00(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a5b16(*param_2,param_1);
  return;
}



// FUNCTION 1493a5a40 FUN_1493a5a40 body=64 status=ok
// SIG undefined FUN_1493a5a40(void)

void FUN_1493a5a40(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a5b16(*param_2,param_1);
  return;
}



// FUNCTION 1493a5a80 FUN_1493a5a80 body=98 status=ok
// SIG undefined FUN_1493a5a80(void)

void FUN_1493a5a80(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a5b16(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a5ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a5af6 FUN_1493a5af6 body=31 status=ok
// SIG undefined FUN_1493a5af6(void)

undefined1 FUN_1493a5af6(longlong param_1,undefined8 param_2)

{
  FUN_1493a5b9e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a5b16 FUN_1493a5b16 body=135 status=ok
// SIG undefined FUN_1493a5b16(void)

undefined8 * FUN_1493a5b16(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc94200;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a5b9e FUN_1493a5b9e body=204 status=ok
// SIG undefined FUN_1493a5b9e(void)

undefined4 FUN_1493a5b9e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1493a5c6c(param_1,param_2,&local_41);
    if ((char)uVar1 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_68);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        *(undefined1 *)(local_38 + *(int *)(lVar2 + 0x44)) = local_41;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a5c6c FUN_1493a5c6c body=295 status=ok
// SIG undefined FUN_1493a5c6c(void)

ulonglong FUN_1493a5c6c(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1493a5432(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1493a5d61:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if ((cVar3 == '\0') || (iVar4 = FUN_1419073b0(local_58[2],plVar1), iVar4 != 7))
      goto LAB_1493a5d61;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1493a5618(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1493a5cc7;
  }
  param_3 = 0;
LAB_1493a5cc7:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 & 0xffffff01;
}



// FUNCTION 1493a5d94 FUN_1493a5d94 body=135 status=ok
// SIG undefined FUN_1493a5d94(void)

undefined8 * FUN_1493a5d94(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc94270;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a5e1c FUN_1493a5e1c body=62 status=ok
// SIG undefined FUN_1493a5e1c(void)

undefined8 * FUN_1493a5e1c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc94270;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a5e6e FUN_1493a5e6e body=64 status=ok
// SIG undefined FUN_1493a5e6e(void)

void FUN_1493a5e6e(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a5f84(*param_2,param_1);
  return;
}



// FUNCTION 1493a5eae FUN_1493a5eae body=64 status=ok
// SIG undefined FUN_1493a5eae(void)

void FUN_1493a5eae(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a5f84(*param_2,param_1);
  return;
}



// FUNCTION 1493a5eee FUN_1493a5eee body=98 status=ok
// SIG undefined FUN_1493a5eee(void)

void FUN_1493a5eee(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a5f84(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a5f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a5f64 FUN_1493a5f64 body=31 status=ok
// SIG undefined FUN_1493a5f64(void)

undefined1 FUN_1493a5f64(longlong param_1,undefined8 param_2)

{
  FUN_1493a600c(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a5f84 FUN_1493a5f84 body=135 status=ok
// SIG undefined FUN_1493a5f84(void)

undefined8 * FUN_1493a5f84(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc94270;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a600c FUN_1493a600c body=306 status=ok
// SIG undefined FUN_1493a600c(void)

ulonglong FUN_1493a600c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_1493a608d;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_1493a611b:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_1493a608d;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_1493a611b;
  bVar1 = FUN_1493a6140(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_1493a608d:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a6140 FUN_1493a6140 body=177 status=ok
// SIG undefined FUN_1493a6140(void)

ulonglong FUN_1493a6140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1493a61f2(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 7);
      goto LAB_1493a61c2;
    }
  }
  uVar3 = 0;
LAB_1493a61c2:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a61f2 FUN_1493a61f2 body=250 status=ok
// SIG undefined FUN_1493a61f2(void)

undefined8 *
FUN_1493a61f2(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1493a56de(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1493a5432(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_140056680(local_50,L"RegisterAttribute");
  FUN_1444ba954(uVar1,local_50,&local_40);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a62f0 FUN_1493a62f0 body=485 status=ok
// SIG undefined FUN_1493a62f0(void)

longlong * FUN_1493a62f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 7) goto LAB_1493a6483;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493a6483:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a64d6 FUN_1493a64d6 body=198 status=ok
// SIG undefined FUN_1493a64d6(void)

undefined8 FUN_1493a64d6(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 7)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493a659c FUN_1493a659c body=378 status=ok
// SIG undefined FUN_1493a659c(void)

ulonglong FUN_1493a659c(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_1493a6673:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 7;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493a6673;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 7) goto LAB_1493a6640;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493a6640;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_1493a6718(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493a6640:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a6718 FUN_1493a6718 body=202 status=ok
// SIG undefined FUN_1493a6718(void)

undefined8 FUN_1493a6718(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 7) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a67e4 FUN_1493a67e4 body=135 status=ok
// SIG undefined FUN_1493a67e4(void)

undefined8 * FUN_1493a67e4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc942e0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a686c FUN_1493a686c body=62 status=ok
// SIG undefined FUN_1493a686c(void)

undefined8 * FUN_1493a686c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc942e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a68be FUN_1493a68be body=64 status=ok
// SIG undefined FUN_1493a68be(void)

void FUN_1493a68be(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a69d4(*param_2,param_1);
  return;
}



// FUNCTION 1493a68fe FUN_1493a68fe body=64 status=ok
// SIG undefined FUN_1493a68fe(void)

void FUN_1493a68fe(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a69d4(*param_2,param_1);
  return;
}



// FUNCTION 1493a693e FUN_1493a693e body=98 status=ok
// SIG undefined FUN_1493a693e(void)

void FUN_1493a693e(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a69d4(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a6991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a69b4 FUN_1493a69b4 body=31 status=ok
// SIG undefined FUN_1493a69b4(void)

undefined1 FUN_1493a69b4(longlong param_1,undefined8 param_2)

{
  FUN_1493a6a5c(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a69d4 FUN_1493a69d4 body=135 status=ok
// SIG undefined FUN_1493a69d4(void)

undefined8 * FUN_1493a69d4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc942e0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a6a5c FUN_1493a6a5c body=204 status=ok
// SIG undefined FUN_1493a6a5c(void)

undefined4 FUN_1493a6a5c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1493a6b2a(param_1,param_2,&local_41);
    if ((char)uVar1 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_68);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        *(undefined1 *)(local_38 + *(int *)(lVar2 + 0x44)) = local_41;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a6b2a FUN_1493a6b2a body=295 status=ok
// SIG undefined FUN_1493a6b2a(void)

ulonglong FUN_1493a6b2a(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1493a62f0(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1493a6c1f:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if ((cVar3 == '\0') || (iVar4 = FUN_1419073b0(local_58[2],plVar1), iVar4 != 7))
      goto LAB_1493a6c1f;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1493a64d6(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1493a6b85;
  }
  param_3 = 0;
LAB_1493a6b85:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 & 0xffffff01;
}



// FUNCTION 1493a6c52 FUN_1493a6c52 body=135 status=ok
// SIG undefined FUN_1493a6c52(void)

undefined8 * FUN_1493a6c52(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc94350;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a6cda FUN_1493a6cda body=62 status=ok
// SIG undefined FUN_1493a6cda(void)

undefined8 * FUN_1493a6cda(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc94350;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a6d2c FUN_1493a6d2c body=64 status=ok
// SIG undefined FUN_1493a6d2c(void)

void FUN_1493a6d2c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a6e42(*param_2,param_1);
  return;
}



// FUNCTION 1493a6d6c FUN_1493a6d6c body=64 status=ok
// SIG undefined FUN_1493a6d6c(void)

void FUN_1493a6d6c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a6e42(*param_2,param_1);
  return;
}



// FUNCTION 1493a6dac FUN_1493a6dac body=98 status=ok
// SIG undefined FUN_1493a6dac(void)

void FUN_1493a6dac(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a6e42(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a6dff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a6e22 FUN_1493a6e22 body=31 status=ok
// SIG undefined FUN_1493a6e22(void)

undefined1 FUN_1493a6e22(longlong param_1,undefined8 param_2)

{
  FUN_1493a6eca(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a6e42 FUN_1493a6e42 body=135 status=ok
// SIG undefined FUN_1493a6e42(void)

undefined8 * FUN_1493a6e42(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc94350;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a6eca FUN_1493a6eca body=306 status=ok
// SIG undefined FUN_1493a6eca(void)

ulonglong FUN_1493a6eca(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_1493a6f4b;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_1493a6fd9:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_1493a6f4b;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_1493a6fd9;
  bVar1 = FUN_1493a6ffe(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_1493a6f4b:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a6ffe FUN_1493a6ffe body=177 status=ok
// SIG undefined FUN_1493a6ffe(void)

ulonglong FUN_1493a6ffe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1493a70b0(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 7);
      goto LAB_1493a7080;
    }
  }
  uVar3 = 0;
LAB_1493a7080:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a70b0 FUN_1493a70b0 body=250 status=ok
// SIG undefined FUN_1493a70b0(void)

undefined8 *
FUN_1493a70b0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1493a659c(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1493a62f0(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_140056680(local_50,L"RegisterAttribute");
  FUN_1444ba954(uVar1,local_50,&local_40);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a71ae FUN_1493a71ae body=485 status=ok
// SIG undefined FUN_1493a71ae(void)

longlong * FUN_1493a71ae(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 7) goto LAB_1493a7341;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493a7341:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a7394 FUN_1493a7394 body=198 status=ok
// SIG undefined FUN_1493a7394(void)

undefined8 FUN_1493a7394(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 7)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493a745a FUN_1493a745a body=378 status=ok
// SIG undefined FUN_1493a745a(void)

ulonglong FUN_1493a745a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_1493a7531:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 7;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493a7531;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 7) goto LAB_1493a74fe;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493a74fe;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_1493a75d6(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493a74fe:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a75d6 FUN_1493a75d6 body=202 status=ok
// SIG undefined FUN_1493a75d6(void)

undefined8 FUN_1493a75d6(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 7) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a76a2 FUN_1493a76a2 body=135 status=ok
// SIG undefined FUN_1493a76a2(void)

undefined8 * FUN_1493a76a2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc943c0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a772a FUN_1493a772a body=62 status=ok
// SIG undefined FUN_1493a772a(void)

undefined8 * FUN_1493a772a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc943c0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a777c FUN_1493a777c body=64 status=ok
// SIG undefined FUN_1493a777c(void)

void FUN_1493a777c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a7892(*param_2,param_1);
  return;
}



// FUNCTION 1493a77bc FUN_1493a77bc body=64 status=ok
// SIG undefined FUN_1493a77bc(void)

void FUN_1493a77bc(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a7892(*param_2,param_1);
  return;
}



// FUNCTION 1493a77fc FUN_1493a77fc body=98 status=ok
// SIG undefined FUN_1493a77fc(void)

void FUN_1493a77fc(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a7892(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a784f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a7872 FUN_1493a7872 body=31 status=ok
// SIG undefined FUN_1493a7872(void)

undefined1 FUN_1493a7872(longlong param_1,undefined8 param_2)

{
  FUN_1493a791a(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a7892 FUN_1493a7892 body=135 status=ok
// SIG undefined FUN_1493a7892(void)

undefined8 * FUN_1493a7892(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc943c0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a791a FUN_1493a791a body=204 status=ok
// SIG undefined FUN_1493a791a(void)

undefined4 FUN_1493a791a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1493a79e8(param_1,param_2,&local_41);
    if ((char)uVar1 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_68);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        *(undefined1 *)(local_38 + *(int *)(lVar2 + 0x44)) = local_41;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a79e8 FUN_1493a79e8 body=295 status=ok
// SIG undefined FUN_1493a79e8(void)

ulonglong FUN_1493a79e8(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1493a71ae(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1493a7add:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if ((cVar3 == '\0') || (iVar4 = FUN_1419073b0(local_58[2],plVar1), iVar4 != 7))
      goto LAB_1493a7add;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1493a7394(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1493a7a43;
  }
  param_3 = 0;
LAB_1493a7a43:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 & 0xffffff01;
}



// FUNCTION 1493a7b10 FUN_1493a7b10 body=135 status=ok
// SIG undefined FUN_1493a7b10(void)

undefined8 * FUN_1493a7b10(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc94430;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a7b98 FUN_1493a7b98 body=62 status=ok
// SIG undefined FUN_1493a7b98(void)

undefined8 * FUN_1493a7b98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc94430;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a7bea FUN_1493a7bea body=64 status=ok
// SIG undefined FUN_1493a7bea(void)

void FUN_1493a7bea(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a7d00(*param_2,param_1);
  return;
}



// FUNCTION 1493a7c2a FUN_1493a7c2a body=64 status=ok
// SIG undefined FUN_1493a7c2a(void)

void FUN_1493a7c2a(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a7d00(*param_2,param_1);
  return;
}



// FUNCTION 1493a7c6a FUN_1493a7c6a body=98 status=ok
// SIG undefined FUN_1493a7c6a(void)

void FUN_1493a7c6a(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a7d00(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a7cbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a7ce0 FUN_1493a7ce0 body=31 status=ok
// SIG undefined FUN_1493a7ce0(void)

undefined1 FUN_1493a7ce0(longlong param_1,undefined8 param_2)

{
  FUN_1493a7d88(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a7d00 FUN_1493a7d00 body=135 status=ok
// SIG undefined FUN_1493a7d00(void)

undefined8 * FUN_1493a7d00(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc94430;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a7d88 FUN_1493a7d88 body=306 status=ok
// SIG undefined FUN_1493a7d88(void)

ulonglong FUN_1493a7d88(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_1493a7e09;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_1493a7e97:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_1493a7e09;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_1493a7e97;
  bVar1 = FUN_1493a7ebc(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_1493a7e09:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a7ebc FUN_1493a7ebc body=177 status=ok
// SIG undefined FUN_1493a7ebc(void)

ulonglong FUN_1493a7ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1493a7f6e(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 7);
      goto LAB_1493a7f3e;
    }
  }
  uVar3 = 0;
LAB_1493a7f3e:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a7f6e FUN_1493a7f6e body=250 status=ok
// SIG undefined FUN_1493a7f6e(void)

undefined8 *
FUN_1493a7f6e(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1493a745a(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1493a71ae(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_140056680(local_50,L"RegisterAttribute");
  FUN_1444ba954(uVar1,local_50,&local_40);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a806c FUN_1493a806c body=485 status=ok
// SIG undefined FUN_1493a806c(void)

longlong * FUN_1493a806c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 7) goto LAB_1493a81ff;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493a81ff:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a8252 FUN_1493a8252 body=198 status=ok
// SIG undefined FUN_1493a8252(void)

undefined8 FUN_1493a8252(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 7)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493a8318 FUN_1493a8318 body=378 status=ok
// SIG undefined FUN_1493a8318(void)

ulonglong FUN_1493a8318(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_1493a83ef:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 7;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493a83ef;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 7) goto LAB_1493a83bc;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493a83bc;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_1493a8494(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493a83bc:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a8494 FUN_1493a8494 body=202 status=ok
// SIG undefined FUN_1493a8494(void)

undefined8 FUN_1493a8494(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 7) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a8560 FUN_1493a8560 body=135 status=ok
// SIG undefined FUN_1493a8560(void)

undefined8 * FUN_1493a8560(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc944a0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a85e8 FUN_1493a85e8 body=62 status=ok
// SIG undefined FUN_1493a85e8(void)

undefined8 * FUN_1493a85e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc944a0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a863a FUN_1493a863a body=64 status=ok
// SIG undefined FUN_1493a863a(void)

void FUN_1493a863a(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a8750(*param_2,param_1);
  return;
}



// FUNCTION 1493a867a FUN_1493a867a body=64 status=ok
// SIG undefined FUN_1493a867a(void)

void FUN_1493a867a(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a8750(*param_2,param_1);
  return;
}



// FUNCTION 1493a86ba FUN_1493a86ba body=98 status=ok
// SIG undefined FUN_1493a86ba(void)

void FUN_1493a86ba(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a8750(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a870d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a8730 FUN_1493a8730 body=31 status=ok
// SIG undefined FUN_1493a8730(void)

undefined1 FUN_1493a8730(longlong param_1,undefined8 param_2)

{
  FUN_1493a87d8(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a8750 FUN_1493a8750 body=135 status=ok
// SIG undefined FUN_1493a8750(void)

undefined8 * FUN_1493a8750(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc944a0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a87d8 FUN_1493a87d8 body=204 status=ok
// SIG undefined FUN_1493a87d8(void)

undefined4 FUN_1493a87d8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1493a88a6(param_1,param_2,&local_41);
    if ((char)uVar1 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_68);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        *(undefined1 *)(local_38 + *(int *)(lVar2 + 0x44)) = local_41;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a88a6 FUN_1493a88a6 body=295 status=ok
// SIG undefined FUN_1493a88a6(void)

ulonglong FUN_1493a88a6(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1493a806c(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1493a899b:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if ((cVar3 == '\0') || (iVar4 = FUN_1419073b0(local_58[2],plVar1), iVar4 != 7))
      goto LAB_1493a899b;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1493a8252(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1493a8901;
  }
  param_3 = 0;
LAB_1493a8901:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 & 0xffffff01;
}



// FUNCTION 1493a89ce FUN_1493a89ce body=135 status=ok
// SIG undefined FUN_1493a89ce(void)

undefined8 * FUN_1493a89ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc94510;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a8a56 FUN_1493a8a56 body=62 status=ok
// SIG undefined FUN_1493a8a56(void)

undefined8 * FUN_1493a8a56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc94510;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a8aa8 FUN_1493a8aa8 body=64 status=ok
// SIG undefined FUN_1493a8aa8(void)

void FUN_1493a8aa8(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a8bbe(*param_2,param_1);
  return;
}



// FUNCTION 1493a8ae8 FUN_1493a8ae8 body=64 status=ok
// SIG undefined FUN_1493a8ae8(void)

void FUN_1493a8ae8(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a8bbe(*param_2,param_1);
  return;
}



// FUNCTION 1493a8b28 FUN_1493a8b28 body=98 status=ok
// SIG undefined FUN_1493a8b28(void)

void FUN_1493a8b28(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a8bbe(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a8b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a8b9e FUN_1493a8b9e body=31 status=ok
// SIG undefined FUN_1493a8b9e(void)

undefined1 FUN_1493a8b9e(longlong param_1,undefined8 param_2)

{
  FUN_1493a8c46(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a8bbe FUN_1493a8bbe body=135 status=ok
// SIG undefined FUN_1493a8bbe(void)

undefined8 * FUN_1493a8bbe(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc94510;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a8c46 FUN_1493a8c46 body=306 status=ok
// SIG undefined FUN_1493a8c46(void)

ulonglong FUN_1493a8c46(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_1493a8cc7;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_1493a8d55:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_1493a8cc7;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_1493a8d55;
  bVar1 = FUN_1493a8d7a(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_1493a8cc7:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a8d7a FUN_1493a8d7a body=177 status=ok
// SIG undefined FUN_1493a8d7a(void)

ulonglong FUN_1493a8d7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1493a8e2c(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 7);
      goto LAB_1493a8dfc;
    }
  }
  uVar3 = 0;
LAB_1493a8dfc:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a8e2c FUN_1493a8e2c body=250 status=ok
// SIG undefined FUN_1493a8e2c(void)

undefined8 *
FUN_1493a8e2c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1493a8318(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1493a806c(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_140056680(local_50,L"RegisterAttribute");
  FUN_1444ba954(uVar1,local_50,&local_40);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a8f2a FUN_1493a8f2a body=418 status=ok
// SIG undefined FUN_1493a8f2a(void)

void FUN_1493a8f2a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
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
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1493a8f8c;
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar9 = iVar7 == iVar8;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      iVar7 = iVar8;
      UNLOCK();
    } while (!bVar9);
    lVar4 = param_1[0xd];
    if (lVar4 != 0) {
      plVar1 = param_1 + 2;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar7 = 0;
      local_60 = plVar1;
      if ((int)param_1[5] != 0) {
        FUN_1449c0562(&local_68);
        iVar7 = (int)param_1[5];
      }
      local_78 = local_58;
      uVar6 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar8 = local_78._4_4_;
      local_90 = param_1;
      if ((local_78._4_4_ != iVar7) || (local_78 = uVar6, local_60 != plVar1)) {
        do {
          local_78 = uVar6;
          lVar5 = *local_90;
          FUN_1492f0b5e(lVar4,lVar5 + (longlong)iVar8 * 0x48 + 0x18);
          FUN_1492f0b5e(lVar4,lVar5 + (longlong)iVar8 * 0x48 + 0x30);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar8 = local_78._4_4_;
          uVar6 = local_78;
        } while (local_90 != param_1 || (local_80 != plVar1 || local_78._4_4_ != iVar7));
      }
      FUN_1493054d0(param_1,0);
      local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
      if (param_1[10] != 0) {
        FUN_149303af2(param_1[10],param_1 + 0xb,&local_90);
      }
    }
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
LAB_1493a8f8c:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493a90ce FUN_1493a90ce body=485 status=ok
// SIG undefined FUN_1493a90ce(void)

longlong * FUN_1493a90ce(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 0x10) goto LAB_1493a9261;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493a9261:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a92b4 FUN_1493a92b4 body=399 status=ok
// SIG undefined FUN_1493a92b4(void)

ulonglong FUN_1493a92b4(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  size_t _Size;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  _Size = FUN_1493a9444(param_3);
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_1493a9398:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar5 = *param_1 + (longlong)local_4c * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x10;
    *(size_t *)(lVar5 + 0x18) = _Size;
    lVar5 = param_1[0xb];
    param_1[0xb] = _Size + lVar5;
    if ((ulonglong)(param_1[0xc] - lVar5) < _Size) {
      FUN_14112c458(param_1 + 10);
    }
    memset((void *)(param_1[10] + lVar5),0,_Size);
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493a9398;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x10) goto LAB_1493a9364;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493a9364;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_1493a94a0(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493a9364:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a9444 FUN_1493a9444 body=90 status=ok
// SIG undefined FUN_1493a9444(void)

undefined8 FUN_1493a9444(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1,local_28);
  uVar1 = FUN_1492ffc82(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a94a0 FUN_1493a94a0 body=141 status=ok
// SIG undefined FUN_1493a94a0(void)

undefined8 FUN_1493a94a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined1 *local_48;
  undefined8 **local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_3,local_38);
  local_40 = &local_50;
  local_48 = &LAB_1493a9762;
  local_50 = local_38;
  uVar1 = FUN_1493a952e(param_1,param_2,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a952e FUN_1493a952e body=563 status=ok
// SIG undefined FUN_1493a952e(void)

ulonglong FUN_1493a952e(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  void *_Src;
  size_t _Size;
  void *_Src_00;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  longlong *local_78;
  longlong local_70;
  void *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void **local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  uVar4 = 0x800000;
  if ((param_2 != (longlong *)0x0) && (uVar4 = 0x100000, (int)param_2[2] == 0x10)) {
    _Size = FUN_1493a9444(param_3);
    _Src_00 = (void *)(*(code *)*param_4)(param_4[1]);
    uVar4 = 0x8000000;
    if (_Size == 0 || _Src_00 != (void *)0x0) {
      if ((ulonglong)param_2[1] < _Size) {
        puVar2 = (undefined8 *)FUN_149302582(param_1,param_2);
        uVar4 = 0x800000;
        if (puVar2 == (undefined8 *)0x0) goto LAB_1493a957d;
        local_68 = (void *)0x0;
        iStack_60 = *(int *)(puVar2 + 1);
        lVar5 = (longlong)iStack_60;
        _Src = (void *)*puVar2;
        if (lVar5 == 0) {
          uStack_5c = 0;
        }
        else {
          FUN_1446dd670(&local_68,iStack_60,0);
          memcpy(local_68,_Src,lVar5 * 2);
        }
        uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
        uVar4 = FUN_1492f0b5e(param_1,&local_68);
        if ((uVar4 & 1) != 0) {
          local_7c = uVar1;
          local_58 = &local_68;
          FUN_140c5653a(param_1,&local_4c,&local_58,0);
          local_70 = *param_1;
          lVar5 = local_70 + (longlong)local_4c * 0x40;
          param_2 = (longlong *)(lVar5 + 0x10);
          *(undefined4 *)(lVar5 + 0x20) = 0x10;
          lVar5 = param_1[0xb];
          param_1[0xb] = _Size + lVar5;
          plVar3 = param_1 + 10;
          if ((ulonglong)(param_1[0xc] - lVar5) < _Size) {
            local_78 = param_1 + 10;
            FUN_14112c458();
            plVar3 = local_78;
          }
          memset((void *)(*plVar3 + lVar5),0,_Size);
          *param_2 = lVar5;
          *(undefined4 *)(local_70 + 0x24 + (longlong)local_4c * 0x40) = local_7c;
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        if ((uVar4 & 1) == 0) goto LAB_1493a957d;
      }
      else {
        param_1[0xd] = param_1[0xd] + (param_2[1] - _Size);
      }
      param_2[1] = _Size;
      FUN_140c54cf0(&local_68,_Src_00,_Size);
      param_2[3] = (longlong)local_68;
      param_2[4] = CONCAT44(uStack_5c,iStack_60);
      uVar4 = 1;
      if (_Size != 0) {
        memcpy((void *)(param_1[10] + *param_2),_Src_00,_Size);
      }
    }
  }
LAB_1493a957d:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1493a9778 FUN_1493a9778 body=34 status=ok
// SIG undefined FUN_1493a9778(void)

undefined8 FUN_1493a9778(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493a97b4 FUN_1493a97b4 body=29 status=ok
// SIG undefined FUN_1493a97b4(void)

bool FUN_1493a97b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493a97d2 FUN_1493a97d2 body=26 status=ok
// SIG undefined FUN_1493a97d2(void)

bool FUN_1493a97d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493a97ec FUN_1493a97ec body=24 status=ok
// SIG undefined FUN_1493a97ec(void)

bool FUN_1493a97ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493a9804 FUN_1493a9804 body=93 status=ok
// SIG undefined FUN_1493a9804(void)

void FUN_1493a9804(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc94580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a9862 FUN_1493a9862 body=93 status=ok
// SIG undefined FUN_1493a9862(void)

void FUN_1493a9862(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc94580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a98c0 FUN_1493a98c0 body=126 status=ok
// SIG undefined FUN_1493a98c0(void)

void FUN_1493a98c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc94580;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a992f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a993e FUN_1493a993e body=40 status=ok
// SIG undefined FUN_1493a993e(void)

void FUN_1493a993e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493a9963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493a9966 FUN_1493a9966 body=140 status=ok
// SIG undefined FUN_1493a9966(void)

bool FUN_1493a9966(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1493a99f4 FUN_1493a99f4 body=34 status=ok
// SIG undefined FUN_1493a99f4(void)

undefined8 FUN_1493a99f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493a9a30 FUN_1493a9a30 body=29 status=ok
// SIG undefined FUN_1493a9a30(void)

bool FUN_1493a9a30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493a9a4e FUN_1493a9a4e body=26 status=ok
// SIG undefined FUN_1493a9a4e(void)

bool FUN_1493a9a4e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493a9a68 FUN_1493a9a68 body=24 status=ok
// SIG undefined FUN_1493a9a68(void)

bool FUN_1493a9a68(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493a9a80 FUN_1493a9a80 body=93 status=ok
// SIG undefined FUN_1493a9a80(void)

void FUN_1493a9a80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc945f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a9ade FUN_1493a9ade body=93 status=ok
// SIG undefined FUN_1493a9ade(void)

void FUN_1493a9ade(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc945f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a9b3c FUN_1493a9b3c body=126 status=ok
// SIG undefined FUN_1493a9b3c(void)

void FUN_1493a9b3c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc945f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a9bab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a9bba FUN_1493a9bba body=40 status=ok
// SIG undefined FUN_1493a9bba(void)

void FUN_1493a9bba(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493a9bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493a9be2 FUN_1493a9be2 body=140 status=ok
// SIG undefined FUN_1493a9be2(void)

bool FUN_1493a9be2(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1493a9c70 FUN_1493a9c70 body=34 status=ok
// SIG undefined FUN_1493a9c70(void)

undefined8 FUN_1493a9c70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493a9cac FUN_1493a9cac body=29 status=ok
// SIG undefined FUN_1493a9cac(void)

bool FUN_1493a9cac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493a9cca FUN_1493a9cca body=26 status=ok
// SIG undefined FUN_1493a9cca(void)

bool FUN_1493a9cca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493a9ce4 FUN_1493a9ce4 body=24 status=ok
// SIG undefined FUN_1493a9ce4(void)

bool FUN_1493a9ce4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493a9cfc FUN_1493a9cfc body=93 status=ok
// SIG undefined FUN_1493a9cfc(void)

void FUN_1493a9cfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc94660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a9d5a FUN_1493a9d5a body=93 status=ok
// SIG undefined FUN_1493a9d5a(void)

void FUN_1493a9d5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc94660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a9db8 FUN_1493a9db8 body=126 status=ok
// SIG undefined FUN_1493a9db8(void)

void FUN_1493a9db8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc94660;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a9e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a9e36 FUN_1493a9e36 body=40 status=ok
// SIG undefined FUN_1493a9e36(void)

void FUN_1493a9e36(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493a9e5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493a9e5e FUN_1493a9e5e body=140 status=ok
// SIG undefined FUN_1493a9e5e(void)

bool FUN_1493a9e5e(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1493a9eec FUN_1493a9eec body=34 status=ok
// SIG undefined FUN_1493a9eec(void)

undefined8 FUN_1493a9eec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493a9f28 FUN_1493a9f28 body=29 status=ok
// SIG undefined FUN_1493a9f28(void)

bool FUN_1493a9f28(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493a9f46 FUN_1493a9f46 body=26 status=ok
// SIG undefined FUN_1493a9f46(void)

bool FUN_1493a9f46(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493a9f60 FUN_1493a9f60 body=24 status=ok
// SIG undefined FUN_1493a9f60(void)

bool FUN_1493a9f60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493a9f78 FUN_1493a9f78 body=93 status=ok
// SIG undefined FUN_1493a9f78(void)

void FUN_1493a9f78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc946d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a9fd6 FUN_1493a9fd6 body=93 status=ok
// SIG undefined FUN_1493a9fd6(void)

void FUN_1493a9fd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc946d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493aa034 FUN_1493aa034 body=126 status=ok
// SIG undefined FUN_1493aa034(void)

void FUN_1493aa034(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc946d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493aa0a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493aa0b2 FUN_1493aa0b2 body=40 status=ok
// SIG undefined FUN_1493aa0b2(void)

void FUN_1493aa0b2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493aa0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493aa0da FUN_1493aa0da body=140 status=ok
// SIG undefined FUN_1493aa0da(void)

bool FUN_1493aa0da(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1493aa168 FUN_1493aa168 body=420 status=ok
// SIG undefined FUN_1493aa168(void)

void ** FUN_1493aa168(longlong param_1,void **param_2,undefined4 param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a83b10(local_48,param_3);
  FUN_1493aa30e();
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1 + 0x18);
  lVar2 = (longlong)local_70;
  pvVar1 = *(void **)(param_1 + 0x10);
  if (lVar2 == 0) {
    local_6c = 0;
    local_60 = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar1,lVar2 * 2);
    pvVar1 = local_78;
    lVar2 = (longlong)local_70;
    local_68 = (void *)0x0;
    local_60 = local_70;
    if (lVar2 != 0) {
      FUN_1446dd670(&local_68,local_70,0);
      memcpy(local_68,pvVar1,lVar2 * 2);
      goto LAB_1493aa234;
    }
  }
  local_68 = (void *)0x0;
  local_5c = 0;
LAB_1493aa234:
  FUN_144a7dea0(local_58,&local_68,&DAT_14cc10428);
  FUN_1401c7f3e(&local_38,local_58,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  pvVar1 = local_38;
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  if (&local_38 != param_2) {
    *(int *)(param_2 + 1) = local_30;
    if ((longlong)local_30 != 0) {
      FUN_1446dd670(param_2,local_30,0);
      memcpy(*param_2,pvVar1,(longlong)local_30 * 2);
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493aa30e FUN_1493aa30e body=110 status=ok
// SIG undefined FUN_1493aa30e(void)

void FUN_1493aa30e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10438) {
    FUN_144b3d300(&DAT_14cc10438);
    if (DAT_14cc10438 == -1) {
      FUN_140056680(&DAT_14cc10428,L"_NameIndex_");
      atexit((_func_5014 *)&LAB_1444ddbf7);
      _Init_thread_footer(&DAT_14cc10438);
      return;
    }
  }
  return;
}



// FUNCTION 1493aa37c FUN_1493aa37c body=34 status=ok
// SIG undefined FUN_1493aa37c(void)

undefined8 FUN_1493aa37c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493aa3b8 FUN_1493aa3b8 body=29 status=ok
// SIG undefined FUN_1493aa3b8(void)

bool FUN_1493aa3b8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493aa3d6 FUN_1493aa3d6 body=26 status=ok
// SIG undefined FUN_1493aa3d6(void)

bool FUN_1493aa3d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493aa3f0 FUN_1493aa3f0 body=24 status=ok
// SIG undefined FUN_1493aa3f0(void)

bool FUN_1493aa3f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493aa408 FUN_1493aa408 body=93 status=ok
// SIG undefined FUN_1493aa408(void)

void FUN_1493aa408(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc94740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493aa466 FUN_1493aa466 body=93 status=ok
// SIG undefined FUN_1493aa466(void)

void FUN_1493aa466(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc94740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493aa4c4 FUN_1493aa4c4 body=126 status=ok
// SIG undefined FUN_1493aa4c4(void)

void FUN_1493aa4c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc94740;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493aa533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493aa542 FUN_1493aa542 body=40 status=ok
// SIG undefined FUN_1493aa542(void)

void FUN_1493aa542(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493aa567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493aa56a FUN_1493aa56a body=140 status=ok
// SIG undefined FUN_1493aa56a(void)

bool FUN_1493aa56a(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1493aa5f8 FUN_1493aa5f8 body=34 status=ok
// SIG undefined FUN_1493aa5f8(void)

undefined8 FUN_1493aa5f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493aa634 FUN_1493aa634 body=29 status=ok
// SIG undefined FUN_1493aa634(void)

bool FUN_1493aa634(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493aa652 FUN_1493aa652 body=26 status=ok
// SIG undefined FUN_1493aa652(void)

bool FUN_1493aa652(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493aa66c FUN_1493aa66c body=24 status=ok
// SIG undefined FUN_1493aa66c(void)

bool FUN_1493aa66c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493aa684 FUN_1493aa684 body=93 status=ok
// SIG undefined FUN_1493aa684(void)

void FUN_1493aa684(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc947b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493aa6e2 FUN_1493aa6e2 body=93 status=ok
// SIG undefined FUN_1493aa6e2(void)

void FUN_1493aa6e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc947b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493aa740 FUN_1493aa740 body=126 status=ok
// SIG undefined FUN_1493aa740(void)

void FUN_1493aa740(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc947b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493aa7af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493aa7be FUN_1493aa7be body=40 status=ok
// SIG undefined FUN_1493aa7be(void)

void FUN_1493aa7be(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493aa7e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493aa7e6 FUN_1493aa7e6 body=140 status=ok
// SIG undefined FUN_1493aa7e6(void)

bool FUN_1493aa7e6(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1493aa874 FUN_1493aa874 body=485 status=ok
// SIG undefined FUN_1493aa874(void)

longlong * FUN_1493aa874(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 0x15) goto LAB_1493aaa07;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493aaa07:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aaa5a FUN_1493aaa5a body=198 status=ok
// SIG undefined FUN_1493aaa5a(void)

undefined8 FUN_1493aaa5a(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x15)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493aab20 FUN_1493aab20 body=378 status=ok
// SIG undefined FUN_1493aab20(void)

ulonglong FUN_1493aab20(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_1493aabf7:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x15;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493aabf7;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x15) goto LAB_1493aabc4;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493aabc4;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_1493aac9c(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493aabc4:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aac9c FUN_1493aac9c body=202 status=ok
// SIG undefined FUN_1493aac9c(void)

undefined8 FUN_1493aac9c(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 0x15) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aad68 FUN_1493aad68 body=128 status=ok
// SIG undefined FUN_1493aad68(void)

undefined8 FUN_1493aad68(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_144a7937e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = FUN_1493ab0bc(param_1,&local_1c);
      if ((char)uVar2 != '\0') {
        *(undefined4 *)(param_2 + 0xf8) = local_1c;
      }
      goto LAB_1493aadaa;
    }
  }
  uVar2 = 0;
LAB_1493aadaa:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aadea FUN_1493aadea body=85 status=ok
// SIG undefined FUN_1493aadea(void)

undefined8 FUN_1493aadea(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a7937e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = FUN_1493ab3d8(param_1,param_2 + 0xf8,0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1493aae40 FUN_1493aae40 body=34 status=ok
// SIG undefined FUN_1493aae40(void)

undefined8 FUN_1493aae40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493aae7c FUN_1493aae7c body=29 status=ok
// SIG undefined FUN_1493aae7c(void)

bool FUN_1493aae7c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493aae9a FUN_1493aae9a body=26 status=ok
// SIG undefined FUN_1493aae9a(void)

bool FUN_1493aae9a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493aaeb4 FUN_1493aaeb4 body=24 status=ok
// SIG undefined FUN_1493aaeb4(void)

bool FUN_1493aaeb4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493aaecc FUN_1493aaecc body=93 status=ok
// SIG undefined FUN_1493aaecc(void)

void FUN_1493aaecc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc94a20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493aaf2a FUN_1493aaf2a body=93 status=ok
// SIG undefined FUN_1493aaf2a(void)

void FUN_1493aaf2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc94a20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493aaf88 FUN_1493aaf88 body=126 status=ok
// SIG undefined FUN_1493aaf88(void)

void FUN_1493aaf88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc94a20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493aaff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493ab006 FUN_1493ab006 body=40 status=ok
// SIG undefined FUN_1493ab006(void)

void FUN_1493ab006(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493ab02b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493ab02e FUN_1493ab02e body=140 status=ok
// SIG undefined FUN_1493ab02e(void)

bool FUN_1493ab02e(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1493ab0bc FUN_1493ab0bc body=159 status=ok
// SIG undefined FUN_1493ab0bc(void)

undefined4 FUN_1493ab0bc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetDownscale");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x72,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ab15c FUN_1493ab15c body=34 status=ok
// SIG undefined FUN_1493ab15c(void)

undefined8 FUN_1493ab15c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493ab198 FUN_1493ab198 body=29 status=ok
// SIG undefined FUN_1493ab198(void)

bool FUN_1493ab198(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493ab1b6 FUN_1493ab1b6 body=26 status=ok
// SIG undefined FUN_1493ab1b6(void)

bool FUN_1493ab1b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493ab1d0 FUN_1493ab1d0 body=24 status=ok
// SIG undefined FUN_1493ab1d0(void)

bool FUN_1493ab1d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493ab1e8 FUN_1493ab1e8 body=93 status=ok
// SIG undefined FUN_1493ab1e8(void)

void FUN_1493ab1e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc94a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493ab246 FUN_1493ab246 body=93 status=ok
// SIG undefined FUN_1493ab246(void)

void FUN_1493ab246(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc94a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493ab2a4 FUN_1493ab2a4 body=126 status=ok
// SIG undefined FUN_1493ab2a4(void)

void FUN_1493ab2a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc94a90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493ab313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493ab322 FUN_1493ab322 body=40 status=ok
// SIG undefined FUN_1493ab322(void)

void FUN_1493ab322(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493ab347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493ab34a FUN_1493ab34a body=140 status=ok
// SIG undefined FUN_1493ab34a(void)

bool FUN_1493ab34a(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1493ab3d8 FUN_1493ab3d8 body=666 status=ok
// SIG undefined FUN_1493ab3d8(void)

undefined4 FUN_1493ab3d8(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetDownscale");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_149331d89(param_1[5],param_1 + 0x72,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_68 = FUN_144a7937e();
    uVar4 = ((uint)(local_68 >> 0x14) & 0xffff ^ (uint)(local_68 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_149308cea(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94a20;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = FUN_1493aad68;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    uVar4 = ((uint)(local_68 >> 0x14) & 0xffff ^ (uint)(local_68 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_149308cea(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94a90;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = FUN_1493aadea;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ab67a FUN_1493ab67a body=175 status=ok
// SIG undefined FUN_1493ab67a(void)

void FUN_1493ab67a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ab72a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ab72a FUN_1493ab72a body=159 status=ok
// SIG undefined FUN_1493ab72a(void)

undefined4 FUN_1493ab72a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAdjustBrightness");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x30,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ab7d0 FUN_1493ab7d0 body=175 status=ok
// SIG undefined FUN_1493ab7d0(void)

void FUN_1493ab7d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ab880(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ab880 FUN_1493ab880 body=159 status=ok
// SIG undefined FUN_1493ab880(void)

undefined4 FUN_1493ab880(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAdjustBrightnessCurve");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x32,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ab926 FUN_1493ab926 body=175 status=ok
// SIG undefined FUN_1493ab926(void)

void FUN_1493ab926(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ab9d6(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ab9d6 FUN_1493ab9d6 body=159 status=ok
// SIG undefined FUN_1493ab9d6(void)

undefined4 FUN_1493ab9d6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAdjustHue");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x3a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aba7c FUN_1493aba7c body=175 status=ok
// SIG undefined FUN_1493aba7c(void)

void FUN_1493aba7c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493abb2c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493abb2c FUN_1493abb2c body=159 status=ok
// SIG undefined FUN_1493abb2c(void)

undefined4 FUN_1493abb2c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAdjustMaxAlpha");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x3e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493abbd2 FUN_1493abbd2 body=175 status=ok
// SIG undefined FUN_1493abbd2(void)

void FUN_1493abbd2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493abc82(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493abc82 FUN_1493abc82 body=159 status=ok
// SIG undefined FUN_1493abc82(void)

undefined4 FUN_1493abc82(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAdjustMinAlpha");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x3c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493abd28 FUN_1493abd28 body=175 status=ok
// SIG undefined FUN_1493abd28(void)

void FUN_1493abd28(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493abdd8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493abdd8 FUN_1493abdd8 body=159 status=ok
// SIG undefined FUN_1493abdd8(void)

undefined4 FUN_1493abdd8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAdjustRGBCurve");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x38,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493abe7e FUN_1493abe7e body=175 status=ok
// SIG undefined FUN_1493abe7e(void)

void FUN_1493abe7e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493abf2e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493abf2e FUN_1493abf2e body=159 status=ok
// SIG undefined FUN_1493abf2e(void)

undefined4 FUN_1493abf2e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAdjustSaturation");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x36,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493abfd4 FUN_1493abfd4 body=175 status=ok
// SIG undefined FUN_1493abfd4(void)

void FUN_1493abfd4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ac084(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac084 FUN_1493ac084 body=159 status=ok
// SIG undefined FUN_1493ac084(void)

undefined4 FUN_1493ac084(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAdjustVibrance");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x34,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac12e FUN_1493ac12e body=172 status=ok
// SIG undefined FUN_1493ac12e(void)

void FUN_1493ac12e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ac1dc(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac1dc FUN_1493ac1dc body=159 status=ok
// SIG undefined FUN_1493ac1dc(void)

undefined4 FUN_1493ac1dc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAllowNonPowerOfTwo");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x7a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac282 FUN_1493ac282 body=196 status=ok
// SIG undefined FUN_1493ac282(void)

void FUN_1493ac282(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ac348(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac348 FUN_1493ac348 body=159 status=ok
// SIG undefined FUN_1493ac348(void)

undefined4 FUN_1493ac348(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAlphaCoverageThresholds");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493b2fd3(param_1[5],param_1 + 0x54,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac3f2 FUN_1493ac3f2 body=172 status=ok
// SIG undefined FUN_1493ac3f2(void)

void FUN_1493ac3f2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ac4a0(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac4a0 FUN_1493ac4a0 body=159 status=ok
// SIG undefined FUN_1493ac4a0(void)

undefined4 FUN_1493ac4a0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetbChromaKeyTexture");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x40,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac54a FUN_1493ac54a body=172 status=ok
// SIG undefined FUN_1493ac54a(void)

void FUN_1493ac54a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ac5f8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac5f8 FUN_1493ac5f8 body=159 status=ok
// SIG undefined FUN_1493ac5f8(void)

undefined4 FUN_1493ac5f8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetbDoScaleMipsForAlphaCoverage");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x52,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac6a2 FUN_1493ac6a2 body=172 status=ok
// SIG undefined FUN_1493ac6a2(void)

void FUN_1493ac6a2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ac750(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac750 FUN_1493ac750 body=159 status=ok
// SIG undefined FUN_1493ac750(void)

undefined4 FUN_1493ac750(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetbFlipGreenChannel");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x56,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac7fa FUN_1493ac7fa body=172 status=ok
// SIG undefined FUN_1493ac7fa(void)

void FUN_1493ac7fa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ac8a8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac8a8 FUN_1493ac8a8 body=159 status=ok
// SIG undefined FUN_1493ac8a8(void)

undefined4 FUN_1493ac8a8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetbPreserveBorder");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x6a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ac952 FUN_1493ac952 body=172 status=ok
// SIG undefined FUN_1493ac952(void)

void FUN_1493ac952(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493aca00(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aca00 FUN_1493aca00 body=159 status=ok
// SIG undefined FUN_1493aca00(void)

undefined4 FUN_1493aca00(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetbUseLegacyGamma");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 100,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493acaa6 FUN_1493acaa6 body=167 status=ok
// SIG undefined FUN_1493acaa6(void)

void FUN_1493acaa6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  puVar2 = local_24;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493acb4e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493acb4e FUN_1493acb4e body=159 status=ok
// SIG undefined FUN_1493acb4e(void)

undefined4 FUN_1493acb4e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetChromaKeyColor");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149381a82(param_1[5],param_1 + 0x44,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493acbf4 FUN_1493acbf4 body=175 status=ok
// SIG undefined FUN_1493acbf4(void)

void FUN_1493acbf4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493acca4(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493acca4 FUN_1493acca4 body=159 status=ok
// SIG undefined FUN_1493acca4(void)

undefined4 FUN_1493acca4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetChromaKeyThreshold");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x42,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493acd4a FUN_1493acd4a body=172 status=ok
// SIG undefined FUN_1493acd4a(void)

void FUN_1493acd4a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493acdf8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493acdf8 FUN_1493acdf8 body=159 status=ok
// SIG undefined FUN_1493acdf8(void)

undefined4 FUN_1493acdf8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetColorSpace");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493b2d3b(param_1[5],param_1 + 0x68,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ace9e FUN_1493ace9e body=175 status=ok
// SIG undefined FUN_1493ace9e(void)

void FUN_1493ace9e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493acf4e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493acf4e FUN_1493acf4e body=159 status=ok
// SIG undefined FUN_1493acf4e(void)

undefined4 FUN_1493acf4e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetCompositePower");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x78,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


