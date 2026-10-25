// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14692ae4e FUN_14692ae4e body=182 status=ok
// SIG undefined FUN_14692ae4e(void)

void FUN_14692ae4e(longlong param_1)

{
  HMODULE pHVar1;
  code *pcVar2;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pHVar1 = GetModuleHandleW(L"user32.dll");
  if (pHVar1 != (HMODULE)0x0) {
    pcVar2 = (code *)FUN_14170ce66(pHVar1,L"SetWindowFeedbackSetting");
    if (pcVar2 != (code *)0x0) {
      local_24 = 0;
      local_38 = &local_24;
      (*pcVar2)(*(undefined8 *)(param_1 + 0x28),1,0,4);
      local_38 = &local_24;
      (*pcVar2)(*(undefined8 *)(param_1 + 0x28),7,0,4);
      local_38 = &local_24;
      (*pcVar2)(*(undefined8 *)(param_1 + 0x28),9,0,4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692af06 FUN_14692af06 body=44 status=ok
// SIG undefined FUN_14692af06(void)

void FUN_14692af06(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  HRGN hRgn;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  hRgn = (HRGN)FUN_1402f0a4a(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00014692af2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowRgn(*(HWND *)(param_1 + 0x28),hRgn,0);
  return;
}



// FUNCTION 14692af32 FUN_14692af32 body=154 status=ok
// SIG undefined FUN_14692af32(void)

undefined8 FUN_14692af32(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  HMONITOR hMonitor;
  undefined1 auStack_78 [32];
  tagMONITORINFO local_58;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  hMonitor = MonitorFromWindow(*(HWND *)(param_1 + 0x28),2 - (*(int *)(param_1 + 0x38) == 0));
  local_58.cbSize = 0x28;
  GetMonitorInfoW(hMonitor,&local_58);
  *param_2 = local_58.rcMonitor.left;
  *param_3 = local_58.rcMonitor.top;
  *param_4 = local_58.rcMonitor.right - *param_2;
  iVar1 = *param_3;
  *param_5 = local_58.rcMonitor.bottom - iVar1;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((uint7)(uint3)((uint)(local_58.rcMonitor.bottom - iVar1) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692afce FUN_14692afce body=181 status=ok
// SIG undefined FUN_14692afce(void)

void FUN_14692afce(longlong param_1,int param_2,int param_3)

{
  DWORD dwStyle;
  DWORD dwExStyle;
  undefined1 auStackY_88 [32];
  tagRECT local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_88;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x18) == '\x01') {
    dwStyle = GetWindowLongW(*(HWND *)(param_1 + 0x28),-0x10);
    dwExStyle = GetWindowLongW(*(HWND *)(param_1 + 0x28),-0x14);
    local_48.left = 0;
    local_48.top = 0;
    local_48.right = 0;
    local_48.bottom = 0;
    AdjustWindowRectEx(&local_48,dwStyle,0,dwExStyle);
    param_2 = param_2 + local_48.left;
    param_3 = param_3 + local_48.top;
  }
  SetWindowPos(*(HWND *)(param_1 + 0x28),(HWND)0x0,param_2,param_3,0,0,0x15);
  if ((local_30 ^ (ulonglong)auStackY_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692b084 FUN_14692b084 body=128 status=ok
// SIG undefined FUN_14692b084(void)

void FUN_14692b084(longlong param_1,byte param_2)

{
  BOOL BVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x25) != '\x01') {
    SetWindowPos(*(HWND *)(param_1 + 0x28),
                 (HWND)-(ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x1a),0,0,0,0,
                 (uint)(param_2 ^ 1) << 4 | 0x203);
    return;
  }
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x28));
  if (BVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014692b0b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ShowWindow(*(HWND *)(param_1 + 0x28),9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014692b0fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetActiveWindow(*(HWND *)(param_1 + 0x28));
  return;
}



// FUNCTION 14692b110 FUN_14692b110 body=54 status=ok
// SIG undefined FUN_14692b110(void)

void FUN_14692b110(longlong param_1)

{
  BOOL BVar1;
  
  if (0 < *(int *)(param_1 + 0x3c)) {
    BVar1 = IsWindow(*(HWND *)(param_1 + 0x28));
    if (BVar1 != 0) {
      RevokeDragDrop(*(HWND *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014692b13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroyWindow(*(HWND *)(param_1 + 0x28));
  return;
}



// FUNCTION 14692b264 FUN_14692b264 body=242 status=ok
// SIG undefined FUN_14692b264(void)

undefined8 FUN_14692b264(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  BOOL BVar1;
  LONG LVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  HMONITOR hMonitor;
  ulonglong uVar3;
  undefined1 auStack_a8 [36];
  tagMONITORINFO local_84;
  WINDOWPLACEMENT local_5c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_5c.length = 0x2c;
  BVar1 = GetWindowPlacement(*(HWND *)(param_1 + 0x28),&local_5c);
  uVar3 = CONCAT44(extraout_var,BVar1);
  if (BVar1 != 0) {
    *param_2 = local_5c.rcNormalPosition.left;
    *param_3 = local_5c.rcNormalPosition.top;
    *param_4 = local_5c.rcNormalPosition.right - local_5c.rcNormalPosition.left;
    *param_5 = local_5c.rcNormalPosition.bottom - local_5c.rcNormalPosition.top;
    LVar2 = GetWindowLongW(*(HWND *)(param_1 + 0x28),-0x14);
    uVar3 = CONCAT44(extraout_var_00,LVar2);
    if (-1 < (char)LVar2) {
      hMonitor = MonitorFromWindow(*(HWND *)(param_1 + 0x28),2 - (*(int *)(param_1 + 0x38) == 0));
      local_84.cbSize = 0x28;
      GetMonitorInfoW(hMonitor,&local_84);
      *param_2 = *param_2 + (local_84.rcWork.left - local_84.rcMonitor.left);
      uVar3 = (ulonglong)(uint)(local_84.rcWork.top - local_84.rcMonitor.top);
      *param_3 = *param_3 + (local_84.rcWork.top - local_84.rcMonitor.top);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),BVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692b368 FUN_14692b368 body=144 status=ok
// SIG undefined FUN_14692b368(void)

void FUN_14692b368(longlong param_1,double *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 8) == 0) || (*(char *)(*(longlong *)(param_1 + 8) + 0x27) != '\x01'))
  {
    if (*(HWND *)(param_1 + 0x28) == (HWND)0x0) goto LAB_14692b3c5;
    GetClientRect(*(HWND *)(param_1 + 0x28),&local_28);
    *param_2 = (double)(local_28.right - local_28.left);
    iVar1 = local_28.bottom - local_28.top;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9c);
    *param_2 = (double)*(int *)(param_1 + 0x98);
  }
  param_2[1] = (double)iVar1;
LAB_14692b3c5:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692b3fa FUN_14692b3fa body=41 status=ok
// SIG undefined FUN_14692b3fa(void)

void FUN_14692b3fa(longlong param_1)

{
  HWND pHVar1;
  
  pHVar1 = GetFocus();
  if (pHVar1 == *(HWND *)(param_1 + 0x28)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014692b41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetFocus(*(HWND *)(param_1 + 0x28));
  return;
}



// FUNCTION 14692b452 FUN_14692b452 body=24 status=ok
// SIG undefined FUN_14692b452(void)

bool FUN_14692b452(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindowEnabled(*(HWND *)(param_1 + 0x28));
  return BVar1 != 0;
}



// FUNCTION 14692b46a FUN_14692b46a body=140 status=ok
// SIG undefined FUN_14692b46a(void)

UINT FUN_14692b46a(longlong *param_1)

{
  UINT UVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_78 [36];
  tagWINDOWINFO local_54;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar2 = (int *)(**(code **)(*param_1 + 0xe0))();
  if (*piVar2 == 5) {
    lVar3 = (**(code **)(*param_1 + 0xe0))(param_1);
    UVar1 = 0;
    if (*(char *)(lVar3 + 0x18) != '\x01') goto LAB_14692b4d9;
  }
  local_54.dwStyle = 0;
  local_54.dwExStyle = 0;
  local_54.dwWindowStatus = 0;
  local_54.cxWindowBorders = 0;
  local_54.rcClient.left = 0;
  local_54.rcClient.top = 0;
  local_54.rcClient.right = 0;
  local_54.rcClient.bottom = 0;
  local_54.rcWindow.left = 0;
  local_54.rcWindow.top = 0;
  local_54.rcWindow.right = 0;
  local_54.rcWindow.bottom = 0;
  local_54.cyWindowBorders = 0;
  local_54.atomWindowType = 0;
  local_54.wCreatorVersion = 0;
  local_54.cbSize = 0x3c;
  GetWindowInfo((HWND)param_1[5],&local_54);
  UVar1 = local_54.cxWindowBorders;
LAB_14692b4d9:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692b510 FUN_14692b510 body=100 status=ok
// SIG undefined FUN_14692b510(void)

void FUN_14692b510(longlong param_1,int *param_2)

{
  undefined1 auStack_48 [32];
  FLASHWINFO local_28;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28.dwFlags = 0;
  local_28.uCount = 0;
  local_28.dwTimeout = 0;
  local_28._28_4_ = 0;
  local_28.cbSize = 0x20;
  local_28._4_4_ = 0;
  local_28.hwnd = *(HWND *)(param_1 + 0x28);
  if (*param_2 == 0) {
    local_28.dwFlags = 0xe;
    local_28.uCount = 0;
  }
  FlashWindowEx(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692b576 FUN_14692b576 body=88 status=ok
// SIG undefined FUN_14692b576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14692b576(longlong *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*param_2 != _DAT_1499d7710) {
    if (*param_2 != _DAT_1499d77c0) {
      param_1 = (longlong *)0x0;
      uVar1 = 0x80004002;
      goto LAB_14692b5c4;
    }
  }
  (**(code **)(*param_1 + 8))(param_1);
  uVar1 = 0;
LAB_14692b5c4:
  *param_3 = param_1;
  return uVar1;
}



// FUNCTION 14692b5de FUN_14692b5de body=931 status=ok
// SIG undefined FUN_14692b5de(void)

void ** FUN_14692b5de(void **param_1,longlong *param_2)

{
  void **ppvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LPVOID pvVar8;
  uint *puVar9;
  short *psVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [40];
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  STGMEDIUM local_c0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_1[2] = (void *)0x0;
  param_1[3] = (void *)0x0;
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  *(undefined1 *)(param_1 + 4) = 0;
  local_58 = 0xffffffff00000001;
  uStack_50 = 1;
  local_68 = 1;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iVar5 = (**(code **)(*param_2 + 0x28))(param_2);
  local_78 = 0xffffffff00000001;
  uStack_70 = 1;
  local_88 = 0xd;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  iVar6 = (**(code **)(*param_2 + 0x28))(param_2);
  local_98 = 0xffffffff00000001;
  uStack_90 = 1;
  local_a8 = 0xf;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  iVar7 = (**(code **)(*param_2 + 0x28))(param_2);
  if ((iVar6 == 0) &&
     (iVar6 = (**(code **)(*param_2 + 0x18))(param_2,&local_88,&local_c0), iVar6 == 0)) {
    pvVar8 = GlobalLock(local_c0.u.hGlobal);
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    FUN_14020fad6(param_1,pvVar8);
    GlobalUnlock(local_c0.u.hGlobal);
    ReleaseStgMedium(&local_c0);
  }
  if ((iVar5 == 0) &&
     (iVar5 = (**(code **)(*param_2 + 0x18))(param_2,&local_68,&local_c0), iVar5 == 0)) {
    pvVar8 = GlobalLock(local_c0.u.hGlobal);
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    FUN_1400b22c2(&local_d0,pvVar8);
    if (&local_d0 == param_1) {
      if (local_d0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_d0;
      local_d0 = (void *)0x0;
      *(int *)(param_1 + 1) = local_c8;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_c4;
    }
    GlobalUnlock(local_c0.u.hGlobal);
    ReleaseStgMedium(&local_c0);
  }
  if ((iVar7 == 0) &&
     (iVar5 = (**(code **)(*param_2 + 0x18))(param_2,&local_a8,&local_c0), iVar5 == 0)) {
    ppvVar1 = param_1 + 2;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
    puVar9 = GlobalLock(local_c0.u.hGlobal);
    psVar10 = (short *)((ulonglong)*puVar9 + (longlong)puVar9);
    if (puVar9[4] == 0) {
      if ((char)*psVar10 != '\0') {
        do {
          FUN_1400b22c2(&local_d0,psVar10);
          iVar5 = *(int *)(param_1 + 3);
          *(uint *)(param_1 + 3) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
            FUN_1447a1bd6(ppvVar1,iVar5);
          }
          pvVar4 = local_d0;
          pvVar3 = *ppvVar1;
          lVar12 = (longlong)iVar5 * 0x10;
          puVar2 = (undefined8 *)((longlong)pvVar3 + lVar12);
          *(undefined8 *)((longlong)pvVar3 + lVar12) = 0;
          lVar11 = (longlong)local_c8;
          *(int *)((longlong)pvVar3 + lVar12 + 8) = local_c8;
          if (lVar11 == 0) {
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar2,local_c8,0);
            memcpy((void *)*puVar2,pvVar4,lVar11 * 2);
          }
          iVar5 = local_c8 + (uint)(local_c8 == 0);
          if (local_d0 != (void *)0x0) {
            FUN_1400020a8();
          }
          psVar10 = (short *)((longlong)psVar10 + (longlong)iVar5);
        } while ((char)*psVar10 != '\0');
      }
    }
    else if (*psVar10 != 0) {
      do {
        FUN_140056680(&local_d0,psVar10);
        iVar5 = *(int *)(param_1 + 3);
        *(uint *)(param_1 + 3) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
          FUN_1447a1bd6(ppvVar1,iVar5);
        }
        pvVar4 = local_d0;
        pvVar3 = *ppvVar1;
        lVar12 = (longlong)iVar5 * 0x10;
        puVar2 = (undefined8 *)((longlong)pvVar3 + lVar12);
        *(undefined8 *)((longlong)pvVar3 + lVar12) = 0;
        lVar11 = (longlong)local_c8;
        *(int *)((longlong)pvVar3 + lVar12 + 8) = local_c8;
        if (lVar11 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,local_c8,0);
          memcpy((void *)*puVar2,pvVar4,lVar11 * 2);
        }
        iVar5 = local_c8 + (uint)(local_c8 == 0);
        if (local_d0 != (void *)0x0) {
          FUN_1400020a8();
        }
        psVar10 = psVar10 + iVar5;
      } while (*psVar10 != 0);
    }
    GlobalUnlock(local_c0.u.hGlobal);
    ReleaseStgMedium(&local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14692b982 FUN_14692b982 body=341 status=ok
// SIG undefined FUN_14692b982(void)

undefined4
FUN_14692b982(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  void *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  void *local_70;
  uint local_68;
  undefined1 local_60 [16];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14692b5de(&local_70);
  cVar2 = FUN_144a61b4f();
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (cVar2 == '\0') {
    local_b0 = *(undefined8 *)(param_1 + 0x10);
    local_80 = 0;
    uStack_7c = 0;
    uVar3 = 0;
    local_78 = 0;
    local_b8 = 0;
    local_a8 = (void *)0x0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_a0 = (ulonglong)local_68;
    if ((longlong)(int)local_68 != 0) {
      FUN_1446dd670(&local_a8,local_68,0);
      memcpy(local_a8,local_70,(longlong)(int)local_68 * 2);
    }
    FUN_140bee9ec(&local_98,local_60);
    local_88 = local_50;
    uStack_7c = (undefined4)param_4;
    local_78 = (undefined4)((ulonglong)param_4 >> 0x20);
    local_80 = param_3;
    FUN_14691a7ec(uVar1);
    FUN_146929ef0(&local_a8);
  }
  else {
    local_c0 = param_5;
    local_c8 = param_4;
    uVar3 = FUN_14691a0ce(uVar1,*(undefined8 *)(param_1 + 0x10),&local_70,param_3);
  }
  FUN_146929ef0(&local_70);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692bad8 FUN_14692bad8 body=178 status=ok
// SIG undefined FUN_14692bad8(void)

undefined8 FUN_14692bad8(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    local_78 = param_4;
    FUN_14691a2ca(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  local_68 = *(undefined8 *)(param_1 + 0x10);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_40 = 0;
  local_70[0] = 1;
  local_38 = param_2;
  local_34 = param_3;
  FUN_14691a7ec(*(undefined8 *)(param_1 + 8),local_70);
  FUN_146929ef0(&local_60);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692bb8e FUN_14692bb8e body=155 status=ok
// SIG undefined FUN_14692bb8e(void)

undefined8 FUN_14692bb8e(longlong param_1)

{
  char cVar1;
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
  }
  local_58 = *(undefined8 *)(param_1 + 0x10);
  local_28 = 0;
  local_20 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_60[0] = 2;
  FUN_14691a7ec(*(undefined8 *)(param_1 + 8),local_60);
  FUN_146929ef0(&local_50);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692bc3c FUN_14692bc3c body=352 status=ok
// SIG undefined FUN_14692bc3c(void)

undefined4
FUN_14692bc3c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulonglong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  void *local_68;
  uint local_60;
  undefined1 local_58 [16];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14692b5de(&local_68);
  cVar2 = FUN_144a61b4f();
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (cVar2 == '\0') {
    local_a8 = *(undefined8 *)(param_1 + 0x10);
    local_78 = 0;
    uStack_74 = 0;
    local_70 = 0;
    local_a0 = (void *)0x0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_b0 = 3;
    uStack_98 = (ulonglong)local_60;
    if ((longlong)(int)local_60 != 0) {
      FUN_1446dd670(&local_a0,local_60,0);
      memcpy(local_a0,local_68,(longlong)(int)local_60 * 2);
    }
    FUN_140bee9ec(&local_90,local_58);
    local_80 = local_48;
    uStack_74 = (undefined4)param_4;
    local_70 = (undefined4)((ulonglong)param_4 >> 0x20);
    local_78 = param_3;
    FUN_14691a7ec(uVar1);
    FUN_146929ef0(&local_a0);
    uVar3 = 0;
  }
  else {
    local_c0 = param_5;
    local_c8 = param_4;
    uVar3 = FUN_14691a51e(uVar1,*(undefined8 *)(param_1 + 0x10),&local_68,param_3);
  }
  FUN_146929ef0(&local_68);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692bd9e FUN_14692bd9e body=38 status=ok
// SIG undefined FUN_14692bd9e(void)

undefined8 FUN_14692bd9e(undefined8 param_1,int param_2)

{
  FUN_14691422a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14692bdce FUN_14692bdce body=29 status=ok
// SIG undefined FUN_14692bdce(void)

undefined8 FUN_14692bdce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14692bdec FUN_14692bdec body=29 status=ok
// SIG undefined FUN_14692bdec(void)

undefined8 FUN_14692bdec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14692be0a FUN_14692be0a body=114 status=ok
// SIG undefined FUN_14692be0a(void)

void FUN_14692be0a(longlong *param_1,int param_2)

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



// FUNCTION 14692be7c FUN_14692be7c body=153 status=ok
// SIG undefined FUN_14692be7c(void)

void FUN_14692be7c(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar1 = (ulonglong)uVar2;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar3 = 4;
  if (4 < uVar2) {
    if (4 < *(uint *)(param_1 + 0x2c)) {
      uVar1 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
    }
    uVar1 = FUN_144a3809e(uVar1 << 3,0);
    uVar3 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar1 >> 3)) {
      uVar3 = uVar1 >> 3 & 0xffffffff;
    }
  }
  uVar2 = (uint)uVar3;
  *(uint *)(param_1 + 0x2c) = uVar2;
  if ((uVar2 < 5) && (*(longlong *)(param_1 + 0x20) == 0)) {
    return;
  }
  if (uVar2 < 5) {
    uVar3 = 0;
  }
  FUN_1446efa72(param_1 + 0x20,0,uVar3,8);
  return;
}



// FUNCTION 14692bf16 FUN_14692bf16 body=87 status=ok
// SIG undefined FUN_14692bf16(void)

void FUN_14692bf16(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_14692bf6e();
  return;
}



// FUNCTION 14692bf6e FUN_14692bf6e body=59 status=ok
// SIG undefined FUN_14692bf6e(void)

void FUN_14692bf6e(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14692bfaa(param_1,param_2);
  return;
}



// FUNCTION 14692bfaa FUN_14692bfaa body=114 status=ok
// SIG undefined FUN_14692bfaa(void)

void FUN_14692bfaa(longlong *param_1,int param_2)

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



// FUNCTION 14692c01c FUN_14692c01c body=364 status=ok
// SIG undefined FUN_14692c01c(void)

int FUN_14692c01c(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar9 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar10 = *(longlong *)(*param_1 + lVar8 * 0x18);
      plVar4 = *(longlong **)(*param_1 + 8 + lVar8 * 0x18);
      if (plVar4 == (longlong *)0x0) {
LAB_14692c0c3:
        plVar11 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_14692c0c3;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar12 = iVar6 == iVar5;
          if (bVar12) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
          plVar11 = plVar4;
        } while (!bVar12);
      }
      bVar12 = true;
      if (plVar7 != (longlong *)0x0) {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_14692c102;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar13 = iVar6 == iVar5;
          if (bVar13) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar13);
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
        bVar12 = false;
      }
LAB_14692c102:
      if (plVar11 == (longlong *)0x0) {
        lVar10 = 0;
      }
      else {
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (bVar12) {
        lVar9 = 0;
      }
      if (lVar10 == lVar9) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x10 + lVar8 * 0x18);
    }
  }
  return -1;
}



// FUNCTION 14692c1a0 FUN_14692c1a0 body=29 status=ok
// SIG undefined FUN_14692c1a0(void)

undefined8 FUN_14692c1a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14692c1bd FUN_14692c1bd body=302 status=ok
// SIG undefined FUN_14692c1bd(void)

void FUN_14692c1bd(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  char *_Dest;
  void *pvVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar3 = strstr(param_1,"<defs");
  if (pcVar3 != (char *)0x0) {
    sVar4 = strlen(pcVar3);
    _Dest = malloc(sVar4 + 1);
    if (_Dest != (char *)0x0) {
      strcpy(_Dest,pcVar3);
      if (*(char *)(param_2 + 0x9c63) == '\0') {
        iVar6 = 2;
        pcVar3 = _Dest;
        pcVar8 = _Dest;
        do {
          if (iVar6 == 2 && *pcVar8 == '<') {
            *pcVar8 = '\0';
            pcVar7 = pcVar8 + 1;
            iVar6 = 1;
            cVar2 = *pcVar3;
            while (cVar2 != '\0') {
              pvVar5 = memchr(&DAT_149ecafe3,(int)cVar2,7);
              if (pvVar5 == (void *)0x0) {
                FUN_142857942(param_2,pcVar3);
                break;
              }
              pcVar1 = pcVar3 + 1;
              pcVar3 = pcVar3 + 1;
              cVar2 = *pcVar1;
            }
          }
          else {
            pcVar7 = pcVar3;
            if (iVar6 == 1 && *pcVar8 == '>') {
              *pcVar8 = '\0';
              FUN_142857670(pcVar3,param_2);
              iVar6 = 2;
              pcVar7 = pcVar8 + 1;
            }
          }
          pcVar8 = pcVar8 + 1;
          pcVar3 = pcVar7;
        } while (*(char *)(param_2 + 0x9c63) == '\0');
      }
                    /* WARNING: Could not recover jumptable at 0x00014692c221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      free(_Dest);
      return;
    }
  }
  return;
}



// FUNCTION 14692c2eb FUN_14692c2eb body=210 status=ok
// SIG undefined FUN_14692c2eb(void)

void FUN_14692c2eb(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  
  FUN_14692c1bd();
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    iVar4 = 2;
    pcVar5 = param_1;
    do {
      if (iVar4 == 2 && cVar2 == '<') {
        *pcVar5 = '\0';
        iVar4 = 1;
        cVar2 = *param_1;
        while (pcVar1 = pcVar5 + 1, cVar2 != '\0') {
          pvVar3 = memchr(&DAT_149ecafe3,(int)cVar2,7);
          if (pvVar3 == (void *)0x0) {
            FUN_142857942(param_2,param_1);
            break;
          }
          pcVar1 = param_1 + 1;
          param_1 = param_1 + 1;
          cVar2 = *pcVar1;
        }
      }
      else {
        pcVar1 = param_1;
        if (iVar4 == 1 && cVar2 == '>') {
          *pcVar5 = '\0';
          FUN_142857670(param_1,param_2);
          iVar4 = 2;
          pcVar1 = pcVar5 + 1;
        }
      }
      param_1 = pcVar1;
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    } while (cVar2 != '\0');
  }
  return;
}



// FUNCTION 14692c3bd nsvgParse body=1776 status=ok
// SIG undefined nsvgParse(void)

float * nsvgParse(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  int iVar6;
  void *_Memory;
  void *pvVar7;
  float *pfVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_108 [32];
  float local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_c0;
  
                    /* 0x692c3bd  624  nsvgParse */
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  _Memory = calloc(1,0x9c68);
  if (_Memory != (void *)0x0) {
    pvVar7 = calloc(1,0x10);
    *(void **)((longlong)_Memory + 0x9c20) = pvVar7;
    if (pvVar7 != (void *)0x0) {
      *(undefined4 *)((longlong)_Memory + 0x40) = 0x3f800000;
      *(undefined4 *)((longlong)_Memory + 0x4c) = 0x3f800000;
      *(undefined1 **)((longlong)_Memory + 0x60) = &DAT_3f8000003f800000;
      *(undefined4 *)((longlong)_Memory + 0x68) = 0x3f800000;
      *(undefined4 *)((longlong)_Memory + 300) = 0x3f800000;
      *(undefined4 *)((longlong)_Memory + 0xec) = 0x3f800000;
      *(undefined4 *)((longlong)_Memory + 0x11c) = 0x40800000;
      *(undefined1 *)((longlong)_Memory + 0x134) = 1;
      *(undefined1 *)((longlong)_Memory + 0x136) = 1;
      *(undefined4 *)((longlong)_Memory + 0x9c5c) = param_3;
      FUN_14692c2eb(param_1,_Memory);
      pfVar8 = *(float **)((longlong)_Memory + 0x9c20);
      lVar9 = *(longlong *)(pfVar8 + 2);
      fVar12 = 0.0;
      fVar15 = 0.0;
      fVar14 = 0.0;
      fVar17 = 0.0;
      if (lVar9 != 0) {
        fVar17 = *(float *)(lVar9 + 0x98);
        fVar14 = *(float *)(lVar9 + 0x9c);
        fVar15 = *(float *)(lVar9 + 0xa0);
        fVar12 = *(float *)(lVar9 + 0xa4);
        while (lVar9 = *(longlong *)(lVar9 + 0xb0), lVar9 != 0) {
          if (*(float *)(lVar9 + 0x98) <= fVar17) {
            fVar17 = *(float *)(lVar9 + 0x98);
          }
          if (*(float *)(lVar9 + 0x9c) <= fVar14) {
            fVar14 = *(float *)(lVar9 + 0x9c);
          }
          if (fVar15 <= *(float *)(lVar9 + 0xa0)) {
            fVar15 = *(float *)(lVar9 + 0xa0);
          }
          if (fVar12 <= *(float *)(lVar9 + 0xa4)) {
            fVar12 = *(float *)(lVar9 + 0xa4);
          }
        }
      }
      fVar16 = *(float *)((longlong)_Memory + 0x9c48);
      if ((fVar16 == 0.0) && (!NAN(fVar16))) {
        fVar16 = *pfVar8;
        if (fVar16 <= 0.0) {
          *(float *)((longlong)_Memory + 40000) = fVar17;
          fVar16 = fVar15 - fVar17;
        }
        *(float *)((longlong)_Memory + 0x9c48) = fVar16;
      }
      if ((*(float *)((longlong)_Memory + 0x9c4c) == 0.0) &&
         (!NAN(*(float *)((longlong)_Memory + 0x9c4c)))) {
        fVar17 = pfVar8[1];
        if (fVar17 <= 0.0) {
          *(float *)((longlong)_Memory + 0x9c44) = fVar14;
          fVar17 = fVar12 - fVar14;
        }
        *(float *)((longlong)_Memory + 0x9c4c) = fVar17;
      }
      if ((*pfVar8 == 0.0) && (!NAN(*pfVar8))) {
        *pfVar8 = fVar16;
        pfVar8 = *(float **)((longlong)_Memory + 0x9c20);
      }
      fVar17 = 0.0;
      if ((pfVar8[1] == 0.0) && (!NAN(pfVar8[1]))) {
        pfVar8[1] = *(float *)((longlong)_Memory + 0x9c4c);
      }
      fVar14 = *(float *)((longlong)_Memory + 0x9c48);
      if (0.0 < fVar14) {
        fVar17 = **(float **)((longlong)_Memory + 0x9c20) / fVar14;
      }
      fVar15 = *(float *)((longlong)_Memory + 0x9c4c);
      fVar12 = 0.0;
      if (0.0 < fVar15) {
        fVar12 = *(float *)(*(longlong *)((longlong)_Memory + 0x9c20) + 4) / fVar15;
      }
      fVar16 = *(float *)((longlong)_Memory + 40000);
      fVar19 = *(float *)((longlong)_Memory + 0x9c44);
      lVar9 = FUN_14285cad2(param_2);
      fVar18 = 0.0;
      fVar13 = (float)FUN_14285c961(_Memory,(lVar9 << 0x20) + 0x3f800000,0,0x3f800000);
      if (*(int *)((longlong)_Memory + 0x9c58) == 1) {
        if (fVar12 <= fVar17) {
          fVar17 = fVar12;
        }
        pfVar8 = *(float **)((longlong)_Memory + 0x9c20);
        if ((*(int *)((longlong)_Memory + 0x9c50) != 0) &&
           (fVar18 = *pfVar8 - fVar14 * fVar17, *(int *)((longlong)_Memory + 0x9c50) != 2)) {
          fVar18 = fVar18 * 0.5;
        }
        fVar18 = fVar18 / fVar17;
        iVar6 = *(int *)((longlong)_Memory + 0x9c54);
        if (iVar6 == 0) {
          fVar12 = 0.0;
        }
        else {
LAB_14692c768:
          fVar12 = pfVar8[1] - fVar15 * fVar17;
          if (iVar6 != 2) {
            fVar12 = fVar12 * 0.5;
          }
        }
LAB_14692c786:
        fVar18 = fVar18 - fVar16;
        fVar19 = fVar12 / fVar17 - fVar19;
        fVar12 = fVar17;
      }
      else {
        if (*(int *)((longlong)_Memory + 0x9c58) == 2) {
          if (fVar17 <= fVar12) {
            fVar17 = fVar12;
          }
          pfVar8 = *(float **)((longlong)_Memory + 0x9c20);
          fVar12 = 0.0;
          fVar18 = 0.0;
          if ((*(int *)((longlong)_Memory + 0x9c50) != 0) &&
             (fVar18 = *pfVar8 - fVar14 * fVar17, *(int *)((longlong)_Memory + 0x9c50) != 2)) {
            fVar18 = fVar18 * 0.5;
          }
          fVar18 = fVar18 / fVar17;
          iVar6 = *(int *)((longlong)_Memory + 0x9c54);
          if (iVar6 != 0) goto LAB_14692c768;
          goto LAB_14692c786;
        }
        fVar18 = -fVar16;
        fVar19 = -fVar19;
        pfVar8 = *(float **)((longlong)_Memory + 0x9c20);
      }
      lVar9 = *(longlong *)(pfVar8 + 2);
      if (lVar9 != 0) {
        fVar17 = fVar17 * (1.0 / fVar13);
        fVar12 = (1.0 / fVar13) * fVar12;
        fVar14 = (fVar17 + fVar12) * 0.5;
        do {
          *(float *)(lVar9 + 0x98) = (*(float *)(lVar9 + 0x98) + fVar18) * fVar17;
          *(float *)(lVar9 + 0x9c) = (*(float *)(lVar9 + 0x9c) + fVar19) * fVar12;
          *(float *)(lVar9 + 0xa0) = (*(float *)(lVar9 + 0xa0) + fVar18) * fVar17;
          *(float *)(lVar9 + 0xa4) = (*(float *)(lVar9 + 0xa4) + fVar19) * fVar12;
          for (plVar10 = *(longlong **)(lVar9 + 0xa8); plVar10 != (longlong *)0x0;
              plVar10 = (longlong *)plVar10[4]) {
            *(float *)(plVar10 + 2) = (*(float *)(plVar10 + 2) + fVar18) * fVar17;
            *(float *)((longlong)plVar10 + 0x14) =
                 (*(float *)((longlong)plVar10 + 0x14) + fVar19) * fVar12;
            *(float *)(plVar10 + 3) = (*(float *)(plVar10 + 3) + fVar18) * fVar17;
            *(float *)((longlong)plVar10 + 0x1c) =
                 (*(float *)((longlong)plVar10 + 0x1c) + fVar19) * fVar12;
            if (0 < (int)plVar10[1]) {
              lVar11 = 0;
              do {
                lVar1 = *plVar10;
                *(float *)(lVar1 + lVar11 * 8) = (*(float *)(lVar1 + lVar11 * 8) + fVar18) * fVar17;
                *(float *)(lVar1 + 4 + lVar11 * 8) =
                     (*(float *)(lVar1 + 4 + lVar11 * 8) + fVar19) * fVar12;
                lVar11 = lVar11 + 1;
              } while (lVar11 < (int)plVar10[1]);
            }
          }
          if ((*(byte *)(lVar9 + 0x40) & 0xfe) == 2) {
            local_e8 = fVar12;
            FUN_14285e04c(*(undefined8 *)(lVar9 + 0x48),fVar18,fVar19,fVar17);
            puVar2 = *(undefined4 **)(lVar9 + 0x48);
            local_c8 = *(undefined8 *)(puVar2 + 4);
            local_d8 = *puVar2;
            uStack_d4 = puVar2[1];
            uStack_d0 = puVar2[2];
            uStack_cc = puVar2[3];
            FUN_14285d911(puVar2,&local_d8);
          }
          if ((*(byte *)(lVar9 + 0x50) & 0xfe) == 2) {
            local_e8 = fVar12;
            FUN_14285e04c(*(undefined8 *)(lVar9 + 0x58),fVar18,fVar19,fVar17);
            puVar2 = *(undefined4 **)(lVar9 + 0x58);
            local_c8 = *(undefined8 *)(puVar2 + 4);
            local_d8 = *puVar2;
            uStack_d4 = puVar2[1];
            uStack_d0 = puVar2[2];
            uStack_cc = puVar2[3];
            FUN_14285d911(puVar2,&local_d8);
          }
          *(float *)(lVar9 + 100) = *(float *)(lVar9 + 100) * fVar14;
          *(float *)(lVar9 + 0x68) = *(float *)(lVar9 + 0x68) * fVar14;
          if ('\0' < *(char *)(lVar9 + 0x8c)) {
            lVar11 = 0;
            do {
              *(float *)(lVar9 + 0x6c + lVar11 * 4) = *(float *)(lVar9 + 0x6c + lVar11 * 4) * fVar14
              ;
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(char *)(lVar9 + 0x8c));
          }
          lVar9 = *(longlong *)(lVar9 + 0xb0);
        } while (lVar9 != 0);
        pfVar8 = *(float **)((longlong)_Memory + 0x9c20);
      }
      *(undefined8 *)((longlong)_Memory + 0x9c20) = 0;
      puVar5 = *(undefined8 **)((longlong)_Memory + 0x9c28);
      while (puVar5 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puVar5[2];
        if ((void *)*puVar5 != (void *)0x0) {
          free((void *)*puVar5);
        }
        if ((void *)puVar5[1] != (void *)0x0) {
          free((void *)puVar5[1]);
        }
        free(puVar5);
        puVar5 = puVar3;
      }
      puVar5 = *(undefined8 **)((longlong)_Memory + 0x9c18);
      while (puVar5 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puVar5[4];
        if ((void *)*puVar5 != (void *)0x0) {
          free((void *)*puVar5);
        }
        free(puVar5);
        puVar5 = puVar3;
      }
      pvVar7 = *(void **)((longlong)_Memory + 0x9c30);
      while (pvVar7 != (void *)0x0) {
        pvVar4 = *(void **)((longlong)pvVar7 + 0xd8);
        free(*(void **)((longlong)pvVar7 + 0xd0));
        free(pvVar7);
        pvVar7 = pvVar4;
      }
      nsvgDelete(*(undefined8 *)((longlong)_Memory + 0x9c20));
      free(*(void **)((longlong)_Memory + 0x9c08));
      free(_Memory);
      goto LAB_14692c466;
    }
    free(_Memory);
  }
  pfVar8 = (float *)0x0;
LAB_14692c466:
  if ((local_c0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return pfVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692caae nsvgParseFromFile body=217 status=ok
// SIG undefined nsvgParseFromFile(void)

undefined8 nsvgParseFromFile(char *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  FILE *_File;
  void *_DstBuf;
  size_t sVar2;
  undefined8 uVar3;
  size_t _Count;
  
                    /* 0x692caae  625  nsvgParseFromFile */
  _File = fopen(param_1,"rb");
  if (_File != (FILE *)0x0) {
    fseek(_File,0,2);
    lVar1 = ftell(_File);
    _Count = (size_t)lVar1;
    fseek(_File,0,0);
    _DstBuf = malloc(_Count + 1);
    if (_DstBuf == (void *)0x0) {
      fclose(_File);
    }
    else {
      sVar2 = fread(_DstBuf,1,_Count,_File);
      if (sVar2 == _Count) {
        *(undefined1 *)((longlong)_DstBuf + _Count) = 0;
        fclose(_File);
        uVar3 = nsvgParse(_DstBuf,param_2,param_3);
        free(_DstBuf);
        return uVar3;
      }
      fclose(_File);
      free(_DstBuf);
    }
  }
  return 0;
}



// FUNCTION 14692cb87 nsvgDelete body=173 status=ok
// SIG undefined nsvgDelete(void)

void nsvgDelete(void *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *_Memory;
  void *_Memory_00;
  
                    /* 0x692cb87  621  nsvgDelete */
  if (param_1 == (void *)0x0) {
    return;
  }
  _Memory_00 = *(void **)((longlong)param_1 + 8);
  while (_Memory_00 != (void *)0x0) {
    pvVar1 = *(void **)((longlong)_Memory_00 + 0xb0);
    _Memory = *(undefined8 **)((longlong)_Memory_00 + 0xa8);
    while (_Memory != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)_Memory[4];
      if ((void *)*_Memory != (void *)0x0) {
        free((void *)*_Memory);
      }
      free(_Memory);
      _Memory = puVar2;
    }
    if ((*(byte *)((longlong)_Memory_00 + 0x40) & 0xfe) == 2) {
      free(*(void **)((longlong)_Memory_00 + 0x48));
    }
    if ((*(byte *)((longlong)_Memory_00 + 0x50) & 0xfe) == 2) {
      free(*(void **)((longlong)_Memory_00 + 0x58));
    }
    free(_Memory_00);
    _Memory_00 = pvVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014692cc1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}



// FUNCTION 14692cc34 nsvgDuplicatePath body=122 status=ok
// SIG undefined nsvgDuplicatePath(void)

undefined8 * nsvgDuplicatePath(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *_Memory;
  void *_Dst;
  size_t _Size;
  
                    /* 0x692cc34  623  nsvgDuplicatePath */
  if ((param_1 != (undefined8 *)0x0) && (_Memory = calloc(1,0x28), _Memory != (undefined8 *)0x0)) {
    iVar1 = *(int *)(param_1 + 1);
    _Size = (longlong)iVar1 << 3;
    _Dst = malloc(_Size);
    *_Memory = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,(void *)*param_1,_Size);
      *(int *)(_Memory + 1) = iVar1;
      uVar2 = param_1[3];
      _Memory[2] = param_1[2];
      _Memory[3] = uVar2;
      *(undefined1 *)((longlong)_Memory + 0xc) = *(undefined1 *)((longlong)param_1 + 0xc);
      return _Memory;
    }
    free(_Memory);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14692ccae nsvgParseTransform body=5 status=ok
// SIG undefined nsvgParseTransform(void)

void nsvgParseTransform(float *param_1,char *param_2)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar11;
  float unaff_XMM9_Da;
  float fVar12;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float fVar13;
  float unaff_XMM15_Da;
  undefined1 auStack_138 [44];
  int iStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  ulonglong uStack_f0;
  
  uStack_f0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  cVar4 = *param_2;
                    /* 0x692ccae  626  nsvgParseTransform */
  while (cVar4 != '\0') {
    while (iVar6 = strncmp(param_2,"matrix",6), iVar6 != 0) {
      iVar6 = strncmp(param_2,"translate",9);
      if (iVar6 == 0) {
        iStack_10c = 0;
        iVar6 = FUN_14285e1b9(param_2,&fStack_108,2,&iStack_10c);
        unaff_XMM6_Da = 0.0;
        unaff_XMM13_Da = 0.0;
        unaff_XMM15_Da = fStack_108;
        if (iStack_10c != 1) {
          unaff_XMM13_Da = fStack_104;
        }
LAB_14285a0f0:
        unaff_XMM7_Da = 0.0;
LAB_14285a144:
        unaff_XMM9_Da = 1.0;
        unaff_XMM14_Da = 1.0;
        goto LAB_14285a22e;
      }
      iVar6 = strncmp(param_2,"scale",5);
      if (iVar6 == 0) {
        iStack_10c = 0;
        iVar6 = FUN_14285e1b9(param_2,&fStack_108,2,&iStack_10c);
        unaff_XMM14_Da = fStack_108;
        if (iStack_10c != 1) {
          unaff_XMM14_Da = fStack_104;
        }
        unaff_XMM6_Da = 0.0;
        unaff_XMM7_Da = 0.0;
        unaff_XMM9_Da = fStack_108;
        unaff_XMM13_Da = 0.0;
        unaff_XMM15_Da = 0.0;
        goto LAB_14285a22e;
      }
      iVar6 = strncmp(param_2,"rotate",6);
      if (iVar6 == 0) {
        iStack_10c = 0;
        iVar6 = FUN_14285e1b9(param_2,&fStack_108,3,&iStack_10c);
        fVar3 = fStack_100;
        fVar2 = fStack_104;
        iVar5 = iStack_10c;
        fVar9 = (fStack_108 / 180.0) * 3.1415927;
        fVar7 = cosf(fVar9);
        fVar9 = sinf(fVar9);
        if (iVar5 < 2) {
          fVar8 = 0.0;
          fVar12 = 0.0;
        }
        else {
          fVar12 = 0.0 - fVar2;
          fVar8 = 0.0 - fVar3;
        }
        fVar11 = fVar7 - fVar9 * 0.0;
        fVar13 = (fVar12 * fVar7 - fVar8 * fVar9) + 0.0;
        unaff_XMM7_Da = fVar9 + fVar7 * 0.0;
        fVar10 = fVar7 * 0.0 - fVar9;
        unaff_XMM14_Da = fVar9 * 0.0 + fVar7;
        unaff_XMM13_Da = fVar12 * fVar9 + fVar8 * fVar7 + 0.0;
        unaff_XMM6_Da = fVar10;
        unaff_XMM9_Da = fVar11;
        unaff_XMM15_Da = fVar13;
        if (1 < iVar5) {
          unaff_XMM9_Da = unaff_XMM7_Da * 0.0 + fVar11;
          unaff_XMM6_Da = unaff_XMM14_Da * 0.0 + fVar10;
          unaff_XMM15_Da = fVar2 + unaff_XMM13_Da * 0.0 + fVar13;
          unaff_XMM7_Da = unaff_XMM7_Da + fVar11 * 0.0;
          unaff_XMM14_Da = unaff_XMM14_Da + fVar10 * 0.0;
          unaff_XMM13_Da = fVar3 + fVar13 * 0.0 + unaff_XMM13_Da;
        }
        goto LAB_14285a22e;
      }
      iVar6 = strncmp(param_2,"skewX",5);
      if (iVar6 == 0) {
        iStack_10c = 0;
        iVar6 = FUN_14285e1b9(param_2,&fStack_108,1,&iStack_10c);
        unaff_XMM6_Da = tanf((fStack_108 / 180.0) * 3.1415927);
        unaff_XMM13_Da = 0.0;
        unaff_XMM15_Da = 0.0;
        goto LAB_14285a0f0;
      }
      iVar6 = strncmp(param_2,"skewY",5);
      if (iVar6 == 0) {
        iStack_10c = 0;
        iVar6 = FUN_14285e1b9(param_2,&fStack_108,1,&iStack_10c);
        unaff_XMM7_Da = tanf((fStack_108 / 180.0) * 3.1415927);
        unaff_XMM13_Da = 0.0;
        unaff_XMM15_Da = 0.0;
        unaff_XMM6_Da = 0.0;
        goto LAB_14285a144;
      }
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      if (*pcVar1 == '\0') goto LAB_14285a2f0;
    }
    iStack_10c = 0;
    iVar6 = FUN_14285e1b9(param_2,&fStack_108,6,&iStack_10c);
    if (iStack_10c == 6) {
      unaff_XMM6_Da = fStack_100;
      unaff_XMM7_Da = fStack_104;
      unaff_XMM9_Da = fStack_108;
      unaff_XMM13_Da = fStack_f4;
      unaff_XMM14_Da = fStack_fc;
      unaff_XMM15_Da = fStack_f8;
    }
LAB_14285a22e:
    fVar2 = param_1[2];
    fVar3 = *param_1;
    fVar7 = param_1[1];
    fVar9 = param_1[3];
    *param_1 = unaff_XMM9_Da * fVar3 + unaff_XMM7_Da * fVar2;
    param_1[1] = unaff_XMM9_Da * fVar7 + unaff_XMM7_Da * fVar9;
    param_1[2] = unaff_XMM6_Da * fVar3 + unaff_XMM14_Da * fVar2;
    param_1[3] = unaff_XMM6_Da * fVar7 + unaff_XMM14_Da * fVar9;
    param_1[4] = fVar3 * unaff_XMM15_Da + fVar2 * unaff_XMM13_Da + param_1[4];
    param_1[5] = fVar7 * unaff_XMM15_Da + fVar9 * unaff_XMM13_Da + param_1[5];
    cVar4 = param_2[iVar6];
    param_2 = param_2 + iVar6;
  }
LAB_14285a2f0:
  if ((uStack_f0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692ccb3 nsvgCreateRasterizer body=43 status=ok
// SIG undefined nsvgCreateRasterizer(void)

void nsvgCreateRasterizer(void)

{
  void *pvVar1;
  
                    /* 0x692ccb3  620  nsvgCreateRasterizer */
  pvVar1 = calloc(1,0x80);
  if (pvVar1 != (void *)0x0) {
    *(undefined8 *)((longlong)pvVar1 + 8) = 0x3c23d70a3e800000;
  }
  return;
}



// FUNCTION 14692ccde nsvgDeleteRasterizer body=134 status=ok
// SIG undefined nsvgDeleteRasterizer(void)

void nsvgDeleteRasterizer(void *param_1)

{
  void *pvVar1;
  void *_Memory;
  
                    /* 0x692ccde  622  nsvgDeleteRasterizer */
  if (param_1 != (void *)0x0) {
    _Memory = *(void **)((longlong)param_1 + 0x48);
    while (_Memory != (void *)0x0) {
      pvVar1 = *(void **)((longlong)_Memory + 0x408);
      free(_Memory);
      _Memory = pvVar1;
    }
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      free(*(void **)((longlong)param_1 + 0x10));
    }
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      free(*(void **)((longlong)param_1 + 0x20));
    }
    if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
      free(*(void **)((longlong)param_1 + 0x30));
    }
    if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
      free(*(void **)((longlong)param_1 + 0x58));
    }
                    /* WARNING: Could not recover jumptable at 0x00014692cd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    free(param_1);
    return;
  }
  return;
}



// FUNCTION 14692cd64 nsvgRasterizeFull body=3870 status=ok
// SIG undefined nsvgRasterizeFull(void)

void nsvgRasterizeFull(longlong param_1,longlong param_2,float param_3,float param_4,float param_5,
                      float param_6,void *param_7,uint param_8,uint param_9,int param_10)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  uint uVar10;
  void *pvVar11;
  undefined8 uVar12;
  float *pfVar13;
  uint uVar14;
  size_t sVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  ushort uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_668 [32];
  float local_648;
  undefined1 *local_640;
  float local_638;
  float local_630;
  float local_628;
  undefined4 local_620;
  undefined4 local_618;
  longlong local_608;
  longlong local_600;
  ulonglong local_5f8;
  longlong local_5f0;
  longlong local_5e8;
  ulonglong local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  longlong local_5c8;
  longlong local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  float local_5a8;
  float local_5a4;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 local_590;
  undefined1 local_58c;
  undefined2 local_58b;
  undefined1 local_589;
  float local_588;
  float local_584;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  float local_570;
  undefined1 local_56c;
  undefined2 local_56b;
  undefined1 local_569;
  float local_568;
  float local_564;
  float local_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  float local_550;
  undefined1 local_54c;
  undefined2 local_54b;
  undefined1 local_549;
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  float local_518;
  undefined2 local_510;
  undefined1 local_50e;
  undefined1 local_50c [1052];
  ulonglong local_f0;
  
                    /* 0x692cd64  628  nsvgRasterizeFull */
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_668;
  *(void **)(param_1 + 0x68) = param_7;
  *(uint *)(param_1 + 0x70) = param_8;
  *(uint *)(param_1 + 0x74) = param_9;
  *(int *)(param_1 + 0x78) = param_10;
  if (*(int *)(param_1 + 0x60) < (int)param_8) {
    *(uint *)(param_1 + 0x60) = param_8;
    pvVar11 = realloc(*(void **)(param_1 + 0x58),(longlong)(int)param_8);
    *(void **)(param_1 + 0x58) = pvVar11;
    if (pvVar11 == (void *)0x0) {
      if ((local_f0 ^ (ulonglong)auStack_668) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  lVar24 = (longlong)param_10;
  uVar26 = (ulonglong)param_9;
  local_5e0 = uVar26;
  if (0 < (int)param_9) {
    pvVar11 = param_7;
    do {
      memset(pvVar11,0,(longlong)(int)(param_8 * 4));
      pvVar11 = (void *)((longlong)pvVar11 + lVar24);
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  lVar21 = *(longlong *)(param_2 + 8);
  local_5d8 = lVar24;
  if (lVar21 != 0) {
    local_608 = CONCAT44(local_608._4_4_,param_5 + param_6);
    do {
      if ((*(byte *)(lVar21 + 0x95) & 1) != 0) {
        if (*(char *)(lVar21 + 0x40) != '\0') {
          lVar23 = *(longlong *)(param_1 + 0x48);
          if (lVar23 == 0) {
            uVar12 = 0;
          }
          else {
            do {
              *(undefined4 *)(lVar23 + 0x400) = 0;
              lVar23 = *(longlong *)(lVar23 + 0x408);
            } while (lVar23 != 0);
            uVar12 = *(undefined8 *)(param_1 + 0x48);
          }
          *(undefined8 *)(param_1 + 0x50) = uVar12;
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          plVar19 = *(longlong **)(lVar21 + 0xa8);
          if (plVar19 == (longlong *)0x0) {
            iVar16 = 0;
LAB_14692d0fe:
            sVar15 = (size_t)iVar16;
          }
          else {
            do {
              *(undefined4 *)(param_1 + 0x28) = 0;
              FUN_14285e2b9(param_1,*(float *)*plVar19 * param_5,((float *)*plVar19)[1] * param_6,0)
              ;
              if (1 < (int)plVar19[1]) {
                lVar23 = 0;
                do {
                  lVar25 = *plVar19;
                  local_628 = *(float *)(lVar25 + 0x1c + lVar23 * 8) * param_6;
                  local_630 = *(float *)(lVar25 + 0x18 + lVar23 * 8) * param_5;
                  local_638 = *(float *)(lVar25 + 0x14 + lVar23 * 8) * param_6;
                  local_648 = *(float *)(lVar25 + 0xc + lVar23 * 8) * param_6;
                  local_618 = 0;
                  local_620 = 0;
                  local_640 = (undefined1 *)
                              CONCAT44(local_640._4_4_,
                                       *(float *)(lVar25 + 0x10 + lVar23 * 8) * param_5);
                  FUN_14285e380(param_1,*(float *)(lVar25 + lVar23 * 8) * param_5,
                                *(float *)(lVar25 + 4 + lVar23 * 8) * param_6,
                                *(float *)(lVar25 + 8 + lVar23 * 8) * param_5);
                  lVar23 = lVar23 + 3;
                } while ((int)lVar23 < (int)plVar19[1] + -1);
              }
              FUN_14285e2b9(param_1,*(float *)*plVar19 * param_5,((float *)*plVar19)[1] * param_6,0)
              ;
              if (0 < *(int *)(param_1 + 0x28)) {
                lVar25 = 4;
                lVar23 = 0;
                do {
                  local_648 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar25);
                  FUN_14285e66c(param_1);
                  lVar23 = lVar23 + 1;
                  lVar25 = lVar25 + 0x20;
                } while (lVar23 < *(int *)(param_1 + 0x28));
              }
              plVar19 = (longlong *)plVar19[4];
            } while (plVar19 != (longlong *)0x0);
            iVar16 = *(int *)(param_1 + 0x18);
            if (iVar16 < 1) goto LAB_14692d0fe;
            lVar23 = 0xc;
            lVar25 = 0;
            do {
              lVar7 = *(longlong *)(param_1 + 0x10);
              *(float *)(lVar7 + -0xc + lVar23) = *(float *)(lVar7 + -0xc + lVar23) + param_3;
              *(float *)(lVar7 + -8 + lVar23) = (*(float *)(lVar7 + -8 + lVar23) + param_4) * 5.0;
              *(float *)(lVar7 + -4 + lVar23) = *(float *)(lVar7 + -4 + lVar23) + param_3;
              *(float *)(lVar7 + lVar23) = (*(float *)(lVar7 + lVar23) + param_4) * 5.0;
              lVar25 = lVar25 + 1;
              sVar15 = (size_t)*(int *)(param_1 + 0x18);
              lVar23 = lVar23 + 0x20;
            } while (lVar25 < (longlong)sVar15);
          }
          qsort(*(void **)(param_1 + 0x10),sVar15,0x20,(_PtFuncCompare *)&LAB_14285a36a);
          FUN_14285a388(local_50c,lVar21 + 0x40,*(undefined4 *)(lVar21 + 0x60));
          local_638 = (float)CONCAT31(local_638._1_3_,*(undefined1 *)(lVar21 + 0x94));
          local_648 = param_6;
          local_640 = local_50c;
          FUN_14285a850(param_1);
        }
        if ((*(char *)(lVar21 + 0x50) != '\0') &&
           (0.01 < *(float *)(lVar21 + 100) * (float)local_608 * 0.5)) {
          lVar24 = *(longlong *)(param_1 + 0x48);
          if (lVar24 == 0) {
            uVar12 = 0;
          }
          else {
            do {
              *(undefined4 *)(lVar24 + 0x400) = 0;
              lVar24 = *(longlong *)(lVar24 + 0x408);
            } while (lVar24 != 0);
            uVar12 = *(undefined8 *)(param_1 + 0x48);
          }
          *(undefined8 *)(param_1 + 0x50) = uVar12;
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          local_5f0 = CONCAT44(local_5f0._4_4_,*(float *)(lVar21 + 100) * (float)local_608 * 0.5);
          plVar19 = *(longlong **)(lVar21 + 0xa8);
          if (plVar19 == (longlong *)0x0) {
            iVar16 = 0;
LAB_14692d875:
            sVar15 = (size_t)iVar16;
          }
          else {
            local_5e8 = CONCAT44(local_5e8._4_4_,*(undefined4 *)(lVar21 + 0x90));
            local_5f8 = CONCAT44(local_5f8._4_4_,(int)*(char *)(lVar21 + 0x8d));
            local_600 = CONCAT44(local_600._4_4_,(int)*(char *)(lVar21 + 0x8e));
            do {
              *(undefined4 *)(param_1 + 0x28) = 0;
              FUN_14285e2b9(param_1,*(float *)*plVar19 * param_5,((float *)*plVar19)[1] * param_6,1)
              ;
              if (1 < (int)plVar19[1]) {
                lVar24 = 0;
                do {
                  lVar23 = *plVar19;
                  local_628 = *(float *)(lVar23 + 0x1c + lVar24 * 8) * param_6;
                  local_630 = *(float *)(lVar23 + 0x18 + lVar24 * 8) * param_5;
                  local_638 = *(float *)(lVar23 + 0x14 + lVar24 * 8) * param_6;
                  local_648 = *(float *)(lVar23 + 0xc + lVar24 * 8) * param_6;
                  local_640 = (undefined1 *)
                              CONCAT44(local_640._4_4_,
                                       *(float *)(lVar23 + 0x10 + lVar24 * 8) * param_5);
                  local_618 = 1;
                  local_620 = 0;
                  FUN_14285e380(param_1,*(float *)(lVar23 + lVar24 * 8) * param_5,
                                *(float *)(lVar23 + 4 + lVar24 * 8) * param_6,
                                *(float *)(lVar23 + 8 + lVar24 * 8) * param_5);
                  lVar24 = lVar24 + 3;
                } while ((int)lVar24 < (int)plVar19[1] + -1);
              }
              iVar16 = *(int *)(param_1 + 0x28);
              lVar24 = (longlong)iVar16;
              if (1 < lVar24) {
                pfVar13 = *(float **)(param_1 + 0x20);
                if ((*pfVar13 - pfVar13[lVar24 * 8 + -8]) * (*pfVar13 - pfVar13[lVar24 * 8 + -8]) +
                    (pfVar13[1] - pfVar13[lVar24 * 8 + -7]) *
                    (pfVar13[1] - pfVar13[lVar24 * 8 + -7]) <
                    *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc)) {
                  *(int *)(param_1 + 0x28) = iVar16 + -1;
                  if ('\0' < *(char *)(lVar21 + 0x8c)) {
LAB_14692d37b:
                    local_548 = *pfVar13;
                    fStack_544 = pfVar13[1];
                    fStack_540 = pfVar13[2];
                    fStack_53c = pfVar13[3];
                    local_538 = *(undefined8 *)(pfVar13 + 4);
                    uStack_530 = *(undefined8 *)(pfVar13 + 6);
                    FUN_14285e813(param_1,&local_548);
                    iVar16 = *(int *)(param_1 + 0x28);
                    goto LAB_14692d3a5;
                  }
                  iVar18 = 1;
LAB_14692d7a3:
                  fVar32 = (float)local_5f8;
                  FUN_14285e87a(param_1,lVar24 * 0x20,local_5f8 & 0xffffffff);
                  iVar16 = *(int *)(param_1 + 0x28);
                  uVar12 = *(undefined8 *)(param_1 + 0x20);
                  local_638 = (float)local_5f0;
                  local_640 = (undefined1 *)CONCAT44(local_640._4_4_,(undefined4)local_600);
                  local_648 = fVar32;
                }
                else {
                  iVar18 = (int)*(char *)((longlong)plVar19 + 0xc);
                  if (*(char *)(lVar21 + 0x8c) < '\x01') goto LAB_14692d7a3;
                  if (*(char *)((longlong)plVar19 + 0xc) != '\0') goto LAB_14692d37b;
LAB_14692d3a5:
                  pvVar11 = *(void **)(param_1 + 0x30);
                  if (*(int *)(param_1 + 0x3c) < iVar16) {
                    *(int *)(param_1 + 0x3c) = iVar16;
                    pvVar11 = realloc(pvVar11,(longlong)iVar16 << 5);
                    *(void **)(param_1 + 0x30) = pvVar11;
                    if (pvVar11 != (void *)0x0) {
                      iVar16 = *(int *)(param_1 + 0x28);
                      goto LAB_14692d3d1;
                    }
                    pfVar13 = (float *)0x0;
                  }
                  else {
LAB_14692d3d1:
                    memcpy(pvVar11,*(void **)(param_1 + 0x20),(longlong)iVar16 << 5);
                    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
                    pfVar13 = *(float **)(param_1 + 0x30);
                  }
                  *(undefined4 *)(param_1 + 0x28) = 0;
                  fVar32 = *pfVar13;
                  fVar35 = pfVar13[1];
                  local_518 = pfVar13[6];
                  local_528 = *(undefined8 *)(pfVar13 + 2);
                  uStack_520 = *(undefined8 *)(pfVar13 + 4);
                  local_54c = *(undefined1 *)(pfVar13 + 7);
                  local_510 = *(undefined2 *)((longlong)pfVar13 + 0x1d);
                  local_50e = *(undefined1 *)((longlong)pfVar13 + 0x1f);
                  local_560 = pfVar13[2];
                  fStack_55c = pfVar13[3];
                  fStack_558 = pfVar13[4];
                  fStack_554 = pfVar13[5];
                  local_550 = pfVar13[6];
                  local_54b = *(undefined2 *)((longlong)pfVar13 + 0x1d);
                  local_549 = *(undefined1 *)((longlong)pfVar13 + 0x1f);
                  local_568 = fVar32;
                  local_564 = fVar35;
                  FUN_14285e813();
                  cVar2 = *(char *)(lVar21 + 0x8c);
                  if (cVar2 < '\x01') {
                    fVar31 = 0.0;
                  }
                  else {
                    fVar31 = 0.0;
                    uVar26 = 0;
                    do {
                      fVar31 = fVar31 + *(float *)(lVar21 + 0x6c + uVar26 * 4);
                      uVar26 = uVar26 + 1;
                    } while ((uint)(int)cVar2 != uVar26);
                  }
                  if (((int)cVar2 & 1U) != 0) {
                    fVar31 = fVar31 + fVar31;
                  }
                  fVar27 = fmodf(*(float *)(lVar21 + 0x68),fVar31);
                  fVar27 = (float)(~-(uint)(fVar27 < 0.0) & (uint)fVar27 |
                                  (uint)(fVar31 + fVar27) & -(uint)(fVar27 < 0.0));
                  fVar31 = *(float *)(lVar21 + 0x6c);
                  uVar26 = 0;
                  if (fVar31 < fVar27) {
                    uVar26 = 0;
                    do {
                      fVar27 = fVar27 - fVar31;
                      uVar8 = (longlong)((int)uVar26 + 1) % (longlong)(int)*(char *)(lVar21 + 0x8c);
                      uVar26 = uVar8 & 0xffffffff;
                      fVar31 = *(float *)(lVar21 + 0x6c + (longlong)(int)uVar8 * 4);
                    } while (fVar31 < fVar27);
                  }
                  bVar9 = true;
                  if (1 < *(int *)(param_1 + 0x38)) {
                    fVar27 = (fVar31 - fVar27) * (float)local_608 * 0.5;
                    iVar16 = 1;
                    fVar31 = 0.0;
                    do {
                      lVar24 = *(longlong *)(param_1 + 0x30);
                      lVar23 = (longlong)iVar16 * 0x20;
                      fVar1 = *(float *)(lVar24 + lVar23);
                      fVar33 = *(float *)(lVar24 + 4 + lVar23);
                      fVar29 = fVar1 - fVar32;
                      fVar28 = fVar33 - fVar35;
                      fVar30 = SQRT(fVar29 * fVar29 + fVar28 * fVar28);
                      fVar34 = fVar31 + fVar30;
                      if (fVar34 <= fVar27) {
                        lVar24 = lVar24 + lVar23;
                        local_518 = *(float *)(lVar24 + 0x18);
                        local_528 = *(undefined8 *)(lVar24 + 8);
                        uStack_520 = *(undefined8 *)(lVar24 + 0x10);
                        local_58c = *(undefined1 *)(lVar24 + 0x1c);
                        local_50e = *(undefined1 *)(lVar24 + 0x1f);
                        local_510 = *(undefined2 *)(lVar24 + 0x1d);
                        local_590 = *(undefined4 *)(lVar24 + 0x18);
                        local_5a0 = *(undefined4 *)(lVar24 + 8);
                        uStack_59c = *(undefined4 *)(lVar24 + 0xc);
                        uStack_598 = *(undefined4 *)(lVar24 + 0x10);
                        uStack_594 = *(undefined4 *)(lVar24 + 0x14);
                        local_589 = *(undefined1 *)(lVar24 + 0x1f);
                        local_58b = *(undefined2 *)(lVar24 + 0x1d);
                        local_5a8 = fVar1;
                        local_5a4 = fVar33;
                        FUN_14285e813(param_1,&local_5a8);
                        iVar16 = iVar16 + 1;
                        fVar32 = fVar1;
                      }
                      else {
                        fVar30 = (fVar27 - fVar31) / fVar30;
                        fVar32 = fVar29 * fVar30 + fVar32;
                        fVar33 = fVar28 * fVar30 + fVar35;
                        FUN_14285e2b9(param_1);
                        if ((1 < *(int *)(param_1 + 0x28)) && (bVar9)) {
                          fVar35 = (float)local_5f8;
                          FUN_14285e87a(param_1);
                          local_638 = (float)local_5f0;
                          local_640 = (undefined1 *)CONCAT44(local_640._4_4_,(undefined4)local_600);
                          local_648 = fVar35;
                          FUN_14285eac5(param_1,*(undefined8 *)(param_1 + 0x20),
                                        *(undefined4 *)(param_1 + 0x28),0);
                        }
                        bVar9 = !bVar9;
                        uVar8 = (longlong)((int)uVar26 + 1) %
                                (longlong)(int)*(char *)(lVar21 + 0x8c);
                        uVar26 = uVar8 & 0xffffffff;
                        fVar27 = *(float *)(lVar21 + 0x6c + (longlong)(int)uVar8 * 4) *
                                 (float)local_608 * 0.5;
                        *(undefined4 *)(param_1 + 0x28) = 0;
                        local_570 = local_518;
                        local_580 = (undefined4)local_528;
                        uStack_57c = local_528._4_4_;
                        uStack_578 = (undefined4)uStack_520;
                        uStack_574 = uStack_520._4_4_;
                        local_56c = 1;
                        local_569 = local_50e;
                        local_56b = local_510;
                        local_588 = fVar32;
                        local_584 = fVar33;
                        FUN_14285e813(param_1,&local_588);
                        fVar34 = 0.0;
                      }
                      fVar31 = fVar34;
                      fVar35 = fVar33;
                    } while (iVar16 < *(int *)(param_1 + 0x38));
                  }
                  iVar16 = *(int *)(param_1 + 0x28);
                  if ((iVar16 < 2) || (!bVar9)) goto LAB_14692d302;
                  uVar12 = *(undefined8 *)(param_1 + 0x20);
                  local_638 = (float)local_5f0;
                  local_640 = (undefined1 *)CONCAT44(local_640._4_4_,(undefined4)local_600);
                  local_648 = (float)local_5f8;
                  iVar18 = 0;
                }
                FUN_14285eac5(param_1,uVar12,iVar16,iVar18);
              }
LAB_14692d302:
              plVar19 = (longlong *)plVar19[4];
            } while (plVar19 != (longlong *)0x0);
            iVar16 = *(int *)(param_1 + 0x18);
            if (iVar16 < 1) goto LAB_14692d875;
            lVar24 = 0xc;
            lVar23 = 0;
            do {
              lVar25 = *(longlong *)(param_1 + 0x10);
              *(float *)(lVar25 + -0xc + lVar24) = *(float *)(lVar25 + -0xc + lVar24) + param_3;
              *(float *)(lVar25 + -8 + lVar24) = (*(float *)(lVar25 + -8 + lVar24) + param_4) * 5.0;
              *(float *)(lVar25 + -4 + lVar24) = *(float *)(lVar25 + -4 + lVar24) + param_3;
              *(float *)(lVar25 + lVar24) = (*(float *)(lVar25 + lVar24) + param_4) * 5.0;
              lVar23 = lVar23 + 1;
              sVar15 = (size_t)*(int *)(param_1 + 0x18);
              lVar24 = lVar24 + 0x20;
            } while (lVar23 < (longlong)sVar15);
          }
          lVar24 = local_5d8;
          qsort(*(void **)(param_1 + 0x10),sVar15,0x20,(_PtFuncCompare *)&LAB_14285a36a);
          FUN_14285a388(local_50c,lVar21 + 0x50,*(undefined4 *)(lVar21 + 0x60));
          local_648 = param_6;
          local_638 = (float)((uint)local_638 & 0xffffff00);
          local_640 = local_50c;
          FUN_14285a850(param_1);
        }
      }
      lVar21 = *(longlong *)(lVar21 + 0xb0);
    } while (lVar21 != 0);
  }
  if (0 < (int)param_9) {
    lVar21 = (longlong)param_7 + 3;
    uVar26 = 0;
    do {
      if (0 < (int)param_8) {
        lVar23 = 0;
        do {
          bVar3 = *(byte *)(lVar21 + lVar23 * 4);
          if (bVar3 != 0) {
            bVar4 = *(byte *)(lVar21 + -1 + lVar23 * 4);
            bVar5 = *(byte *)(lVar21 + -2 + lVar23 * 4);
            bVar6 = *(byte *)(lVar21 + -3 + lVar23 * 4);
            uVar20 = (ushort)bVar3;
            *(char *)(lVar21 + -3 + lVar23 * 4) =
                 (char)(((uint)bVar6 * 0x100 - (uint)bVar6 & 0xffff) / (uint)uVar20);
            *(char *)(lVar21 + -2 + lVar23 * 4) =
                 (char)(((uint)bVar5 * 0x100 - (uint)bVar5 & 0xffff) / (uint)uVar20);
            *(char *)(lVar21 + -1 + lVar23 * 4) =
                 (char)(((uint)bVar4 * 0x100 - (uint)bVar4 & 0xffff) / (uint)uVar20);
          }
          lVar23 = lVar23 + 1;
        } while (param_8 != (uint)lVar23);
      }
      uVar26 = uVar26 + 1;
      lVar21 = lVar21 + lVar24;
    } while (uVar26 != local_5e0);
    local_5e8 = (longlong)(3 - param_10);
    local_5b0 = (longlong)(1 - param_10);
    local_5b8 = (longlong)(2 - param_10);
    local_5c0 = (longlong)(param_10 + 3);
    local_5c8 = (longlong)(param_10 + 1);
    local_5d0 = (longlong)(param_10 + 2);
    uVar26 = 0;
    do {
      if (0 < (int)param_8) {
        lVar23 = uVar26 * lVar24;
        local_608 = local_5d0 + lVar23;
        local_5f0 = local_5c8 + lVar23;
        lVar21 = lVar24 * (uVar26 + 1);
        local_5f8 = local_5b8 + lVar23;
        local_600 = local_5b0 + lVar23;
        lVar25 = (uVar26 - 1) * lVar24;
        uVar22 = 0;
        pvVar11 = param_7;
        do {
          if (*(char *)((longlong)pvVar11 + lVar23 + 3) == '\0') {
            uVar10 = 0;
            uVar20 = 0;
            uVar14 = 0;
            uVar17 = 0;
            if (1 < uVar22) {
              if (*(char *)((longlong)pvVar11 + lVar23 + -1) == '\0') {
                uVar10 = 0;
              }
              else {
                uVar10 = (uint)*(byte *)((longlong)pvVar11 + lVar23 + -4);
                uVar20 = (ushort)*(byte *)((longlong)pvVar11 + lVar23 + -3);
                uVar14 = (uint)*(byte *)((longlong)pvVar11 + lVar23 + -2);
                uVar17 = 1;
              }
            }
            if (((int)(uVar22 + 1) < (int)param_8) &&
               (*(char *)((longlong)pvVar11 + lVar23 + 7) != '\0')) {
              uVar10 = uVar10 + *(byte *)((longlong)pvVar11 + lVar23 + 4);
              uVar20 = uVar20 + *(byte *)((longlong)pvVar11 + lVar23 + 5);
              uVar14 = uVar14 + *(byte *)((longlong)pvVar11 + lVar23 + 6);
              uVar17 = uVar17 + 1;
            }
            if ((1 < uVar26) && (*(char *)((longlong)pvVar11 + local_5e8 + lVar23) != '\0')) {
              uVar10 = uVar10 + *(byte *)((longlong)pvVar11 + lVar25);
              uVar20 = uVar20 + *(byte *)((longlong)pvVar11 + local_600);
              uVar14 = uVar14 + *(byte *)((longlong)pvVar11 + local_5f8);
              uVar17 = uVar17 + 1;
            }
            if (((longlong)(uVar26 + 1) < (longlong)local_5e0) &&
               (*(char *)((longlong)pvVar11 + local_5c0 + lVar23) != '\0')) {
              uVar10 = uVar10 + *(byte *)((longlong)pvVar11 + lVar21);
              uVar20 = uVar20 + *(byte *)((longlong)pvVar11 + local_5f0);
              uVar14 = uVar14 + *(byte *)((longlong)pvVar11 + local_608);
              uVar17 = uVar17 + 1;
            }
            else if (uVar17 == 0) goto LAB_14692da85;
            *(char *)((longlong)pvVar11 + lVar23) = (char)(uVar10 / uVar17);
            *(char *)((longlong)pvVar11 + lVar23 + 1) = (char)(uVar20 / uVar17);
            *(char *)((longlong)pvVar11 + lVar23 + 2) = (char)(uVar14 / uVar17);
          }
LAB_14692da85:
          uVar22 = uVar22 + 1;
          pvVar11 = (void *)((longlong)pvVar11 + 4);
          lVar24 = local_5d8;
        } while (uVar22 != param_8);
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != local_5e0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_668);
}



// FUNCTION 14692dc83 nsvgRasterize body=88 status=ok
// SIG undefined nsvgRasterize(void)

void nsvgRasterize(void)

{
                    /* 0x692dc83  627  nsvgRasterize */
  nsvgRasterizeFull();
  return;
}



// FUNCTION 14692dce4 FUN_14692dce4 body=491 status=ok
// SIG undefined FUN_14692dce4(void)

undefined8 * FUN_14692dce4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c967ac0) {
    FUN_144b3d300(&DAT_14c967ac0);
    if (DAT_14c967ac0 == -1) {
      FUN_1446f470e(&DAT_14c967ab8,L"Project",1);
      _Init_thread_footer(&DAT_14c967ac0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c967ad0) {
    FUN_144b3d300(&DAT_14c967ad0);
    if (DAT_14c967ad0 == -1) {
      FUN_1446f470e(&DAT_14c967ac8,L"Editor",1);
      _Init_thread_footer(&DAT_14c967ad0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c967ae0) {
    FUN_144b3d300(&DAT_14c967ae0);
    if (DAT_14c967ae0 == -1) {
      FUN_1446f470e(&DAT_14c967ad8,L"EditorSettings",1);
      _Init_thread_footer(&DAT_14c967ae0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c967af0) {
    FUN_144b3d300(&DAT_14c967af0);
    if (DAT_14c967af0 == -1) {
      FUN_1446f470e(&DAT_14c967ae8,L"EditorPerProjectUserSettings",1);
      _Init_thread_footer(&DAT_14c967af0);
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe8);
  puVar2 = (undefined8 *)&DAT_14c967ab8;
  if (lVar1 == DAT_14c967ae8) {
    puVar2 = &DAT_14c967ac8;
  }
  if (lVar1 == DAT_14c967ad8) {
    puVar2 = &DAT_14c967ac8;
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 14692ded0 FUN_14692ded0 body=663 status=ok
// SIG undefined FUN_14692ded0(void)

ulonglong * FUN_14692ded0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c967b00) && (FUN_144b3d300(&DAT_14c967b00), DAT_14c967b00 == -1)) {
    FUN_1446f470e(&DAT_14c967af8,L"General",1);
    _Init_thread_footer(&DAT_14c967b00);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c967b10) && (FUN_144b3d300(&DAT_14c967b10), DAT_14c967b10 == -1)) {
    FUN_1446f470e(&DAT_14c967b08,L"EditorSettings",1);
    _Init_thread_footer(&DAT_14c967b10);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c967b20) && (FUN_144b3d300(&DAT_14c967b20), DAT_14c967b20 == -1)) {
    FUN_1446f470e(&DAT_14c967b18,L"EditorPerProjectUserSettings",1);
    _Init_thread_footer(&DAT_14c967b20);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 0x28) != 0) goto LAB_14692df64;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xe8);
  FUN_1401a700c(&local_24,0x1f);
  if ((uVar1 == local_24) || (FUN_1401a700c(&local_24,0xce), uVar1 == local_24)) {
LAB_14692dfc6:
    uVar3 = 0x1f;
  }
  else {
    uVar2 = DAT_14c967af8;
    if ((uVar1 == DAT_14c967b08) || (uVar1 == DAT_14c967b18)) goto LAB_14692df64;
    FUN_1401a700c(&local_24,0x20);
    if ((((uVar1 == local_24) || (FUN_1401a700c(&local_24,0xfb), uVar1 == local_24)) ||
        (FUN_1401a700c(&local_24,600), uVar1 == local_24)) ||
       (FUN_1401a700c(&local_24,0x259), uVar1 == local_24)) {
      uVar3 = 0x20;
    }
    else {
      FUN_1401a700c(&local_24,0xdd);
      if (uVar1 != local_24) goto LAB_14692dfc6;
      uVar3 = 0xdd;
    }
  }
  FUN_1401a700c(&local_24,uVar3);
  uVar2 = (ulonglong)local_24;
LAB_14692df64:
  *param_2 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14692e1de FUN_14692e1de body=54 status=ok
// SIG undefined FUN_14692e1de(void)

undefined1 FUN_14692e1de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14692e2f6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14692e23c FUN_14692e23c body=59 status=ok
// SIG undefined FUN_14692e23c(void)

undefined8 FUN_14692e23c(longlong *param_1)

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



// FUNCTION 14692e282 FUN_14692e282 body=37 status=ok
// SIG undefined FUN_14692e282(void)

void FUN_14692e282(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14692e2f6 FUN_14692e2f6 body=79 status=ok
// SIG undefined FUN_14692e2f6(void)

undefined8 * FUN_14692e2f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14692e346(param_1,iVar1);
      FUN_14692e3a8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14692e346 FUN_14692e346 body=98 status=ok
// SIG undefined FUN_14692e346(void)

void FUN_14692e346(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14692e3a8 FUN_14692e3a8 body=78 status=ok
// SIG undefined FUN_14692e3a8(void)

void FUN_14692e3a8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14692e452 FUN_14692e452 body=46 status=ok
// SIG undefined FUN_14692e452(void)

void FUN_14692e452(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1459dff72(param_2 + 8);
  return;
}



// FUNCTION 14692e496 FUN_14692e496 body=97 status=ok
// SIG undefined FUN_14692e496(void)

undefined1 FUN_14692e496(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_14689c22e();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *(longlong *)(param_2 + -8) = lVar1;
      FUN_14692e5ec(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14692e520 FUN_14692e520 body=59 status=ok
// SIG undefined FUN_14692e520(void)

undefined8 FUN_14692e520(longlong *param_1)

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



// FUNCTION 14692e566 FUN_14692e566 body=56 status=ok
// SIG undefined FUN_14692e566(void)

void FUN_14692e566(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x50) = 0;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_1459dff72(param_2 + 8);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14692e5ec FUN_14692e5ec body=122 status=ok
// SIG undefined FUN_14692e5ec(void)

longlong FUN_14692e5ec(longlong param_1,longlong param_2)

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
    FUN_14692e666(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14692e666 FUN_14692e666 body=237 status=ok
// SIG undefined FUN_14692e666(void)

longlong * FUN_14692e666(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1459dffaa(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar7);
          *(longlong *)(lVar4 + 8 + lVar7) = lVar3;
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_14689c22e();
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar2 + 0x10 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14692e754 FUN_14692e754 body=29 status=ok
// SIG undefined FUN_14692e754(void)

void FUN_14692e754(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_149eccdb0;
  return;
}



// FUNCTION 14692e772 FUN_14692e772 body=36 status=ok
// SIG undefined FUN_14692e772(void)

undefined8 FUN_14692e772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14692e7b2 FUN_14692e7b2 body=93 status=ok
// SIG undefined FUN_14692e7b2(void)

void FUN_14692e7b2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149eccd40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14692e810 FUN_14692e810 body=123 status=ok
// SIG undefined FUN_14692e810(void)

void FUN_14692e810(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_149eccd40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14692e898 FUN_14692e898 body=21 status=ok
// SIG undefined FUN_14692e898(void)

undefined8 FUN_14692e898(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14692e8ae FUN_14692e8ae body=34 status=ok
// SIG undefined FUN_14692e8ae(void)

undefined8 FUN_14692e8ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14692e8d0 FUN_14692e8d0 body=116 status=ok
// SIG undefined FUN_14692e8d0(void)

void FUN_14692e8d0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 14692e944 FUN_14692e944 body=180 status=ok
// SIG undefined FUN_14692e944(void)

longlong * FUN_14692e944(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14692e9db;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14692e9fa(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_14692e9db:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14692e9fa FUN_14692e9fa body=278 status=ok
// SIG undefined FUN_14692e9fa(void)

undefined4 * FUN_14692e9fa(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14692eb12(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_14692ebf8(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_14692ecea(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692eb12 FUN_14692eb12 body=230 status=ok
// SIG undefined FUN_14692eb12(void)

int * FUN_14692eb12(longlong *param_1,int *param_2)

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



// FUNCTION 14692ebf8 FUN_14692ebf8 body=128 status=ok
// SIG undefined FUN_14692ebf8(void)

undefined8 FUN_14692ebf8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14692ec78((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14692ec78 FUN_14692ec78 body=114 status=ok
// SIG undefined FUN_14692ec78(void)

void FUN_14692ec78(longlong *param_1,int param_2)

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



// FUNCTION 14692ecea FUN_14692ecea body=455 status=ok
// SIG undefined FUN_14692ecea(void)

void FUN_14692ecea(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar4 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x18);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14692eeb2 FUN_14692eeb2 body=55 status=ok
// SIG undefined FUN_14692eeb2(void)

void FUN_14692eeb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967c38 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967c38 = FUN_14171c317(FUN_14627895f,uVar1,L"EFontRasterizationMode");
  }
  return;
}



// FUNCTION 14692eee9 FUN_14692eee9 body=55 status=ok
// SIG undefined FUN_14692eee9(void)

void FUN_14692eee9(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967d10 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967d10 = FUN_14171c317(FUN_146278b83,uVar1,L"EUINavigation");
  }
  return;
}



// FUNCTION 14692ef24 FUN_14692ef24 body=11 status=ok
// SIG undefined FUN_14692ef24(void)

undefined8 * FUN_14692ef24(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  return param_1;
}



// FUNCTION 14692ef30 FUN_14692ef30 body=85 status=ok
// SIG undefined FUN_14692ef30(void)

undefined8 FUN_14692ef30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined8 uVar4;
  
  if (*param_1 == 0) {
    return 0;
  }
  fVar3 = (float)FUN_14692ef86();
  lVar2 = (longlong)(int)param_1[1];
  lVar1 = *(longlong *)(*param_1 + 0x40);
  fVar3 = (fVar3 - *(float *)(lVar1 + 4 + lVar2 * 0xc)) / *(float *)(lVar1 + lVar2 * 0xc);
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  uVar4 = FUN_14692effc(fVar3,*(undefined1 *)(lVar1 + 8 + lVar2 * 0xc));
  return uVar4;
}



// FUNCTION 14692ef86 FUN_14692ef86 body=102 status=ok
// SIG undefined FUN_14692ef86(void)

void FUN_14692ef86(longlong param_1)

{
  byte bVar1;
  double dVar2;
  
  bVar1 = *(byte *)(param_1 + 0x68);
  if ((bVar1 & 4) == 0) {
    dVar2 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
    bVar1 = *(byte *)(param_1 + 0x68);
  }
  else {
    dVar2 = *(double *)(param_1 + 0x58);
  }
  if ((bVar1 & 1) == 0) {
    dVar2 = dVar2 - *(double *)(param_1 + 0x50);
  }
  else {
    dVar2 = *(double *)(param_1 + 0x60) - (dVar2 - *(double *)(param_1 + 0x50));
  }
  if ((bVar1 & 2) == 0) {
    return;
  }
  FUN_1447c7e44((float)dVar2,(float)*(double *)(param_1 + 0x60));
  return;
}



// FUNCTION 14692efec FUN_14692efec body=16 status=ok
// SIG undefined FUN_14692efec(void)

longlong FUN_14692efec(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x40);
}



// FUNCTION 14692effc FUN_14692effc body=273 status=ok
// SIG undefined FUN_14692effc(void)

ulonglong FUN_14692effc(undefined8 param_1,undefined1 param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  switch(param_2) {
  case 0:
    fVar3 = 0.0;
    goto LAB_14692f027;
  case 1:
    return (ulonglong)(uint)(fVar1 * fVar1 + 0.0);
  case 2:
    return (ulonglong)(uint)(0.0 - (fVar1 + -2.0) * fVar1);
  case 3:
    if (0.5 <= fVar1) {
      fVar1 = fVar1 + -0.5 + fVar1 + -0.5;
      return (ulonglong)(uint)(((fVar1 + -2.0) * fVar1 + -1.0) * -0.5 + 0.0);
    }
    fVar1 = fVar1 + fVar1;
    fVar3 = 0.5;
    goto LAB_14692f01c;
  case 4:
    fVar3 = fVar1;
LAB_14692f01c:
    fVar3 = fVar3 * fVar1 * fVar1;
    break;
  case 5:
    fVar1 = fVar1 + -1.0;
    fVar3 = fVar1 * fVar1 * fVar1 + 1.0;
    break;
  case 6:
    fVar1 = fVar1 + fVar1;
    if (fVar1 < 1.0) {
      fVar3 = fVar1 * 0.5;
      goto LAB_14692f01c;
    }
    fVar1 = fVar1 + -2.0;
    fVar3 = (fVar1 * fVar1 * fVar1 + 2.0) * 0.5;
    break;
  default:
    return 0;
  }
  fVar1 = 0.0;
  uVar2 = 0;
LAB_14692f027:
  return CONCAT44(uVar2,fVar1 + fVar3);
}



// FUNCTION 14692f10e FUN_14692f10e body=119 status=ok
// SIG undefined FUN_14692f10e(void)

undefined8 *
FUN_14692f10e(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[10] = 0;
  param_1[0xb] = 0;
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
  param_1[0xc] = 0;
  *(byte *)(param_1 + 0xd) = (*(byte *)(param_1 + 0xd) & 0xf8) + 1;
  local_28 = param_4;
  FUN_14692f186(0,local_20,param_2,param_3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692f186 FUN_14692f186 body=153 status=ok
// SIG undefined FUN_14692f186(void)

longlong *
FUN_14692f186(longlong param_1,longlong *param_2,float param_3,float param_4,undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  
  dVar4 = *(double *)(param_1 + 0x60);
  if (*(double *)(param_1 + 0x60) <= (double)(param_3 + param_4)) {
    dVar4 = (double)(param_3 + param_4);
  }
  *(double *)(param_1 + 0x60) = dVar4;
  *(double *)(param_1 + 0x50) = dVar4;
  iVar1 = *(int *)(param_1 + 0x48);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_146934398(param_1 + 0x40,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  *(float *)(lVar2 + lVar3 * 0xc) = param_4;
  *(float *)(lVar2 + 4 + lVar3 * 0xc) = param_3;
  *(undefined1 *)(lVar2 + 8 + lVar3 * 0xc) = param_5;
  iVar1 = *(int *)(param_1 + 0x48);
  *param_2 = param_1;
  *(int *)(param_2 + 1) = iVar1 + -1;
  return param_2;
}



// FUNCTION 14692f220 FUN_14692f220 body=159 status=ok
// SIG undefined FUN_14692f220(void)

void FUN_14692f220(longlong param_1,undefined8 *param_2,char param_3,float param_4,char param_5)

{
  double dVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_5 != '\0') {
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_14692f2c0(param_1,&local_40);
  }
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xf8 | param_3 * '\x02';
  dVar1 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
  *(double *)(param_1 + 0x50) = dVar1 - (double)param_4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692f2c0 FUN_14692f2c0 body=440 status=ok
// SIG undefined FUN_14692f2c0(void)

void FUN_14692f2c0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x28) + 8) < 1)) {
    uVar2 = *param_2;
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = 3;
    *local_48 = &PTR_LAB_149ed0600;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_48[2] = lVar6;
    *local_48 = &PTR_FUN_149ed0430;
    local_48[3] = param_1;
    local_48[4] = FUN_14692f65a;
    FUN_14697ef1e(uVar2,&local_38,0,&local_48);
    plVar5 = local_30;
    *(undefined8 *)(param_1 + 0x20) = local_38;
    plVar4 = *(longlong **)(param_1 + 0x28);
    if (plVar4 != local_30) {
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(param_1 + 0x28);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x28) = plVar5;
      plVar5 = local_30;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    plVar4 = (longlong *)param_2[1];
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (plVar5 != plVar4) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar5 = *(longlong **)(param_1 + 0x18);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x18) = plVar4;
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692f47a FUN_14692f47a body=115 status=ok
// SIG undefined FUN_14692f47a(void)

void FUN_14692f47a(longlong param_1)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = (float)FUN_14692ef86();
  dVar1 = (double)fVar2 / *(double *)(param_1 + 0x60);
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) ^ 1;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar3 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    dVar1 = 1.0 - dVar1;
  }
  *(double *)(param_1 + 0x50) = dVar3 - dVar1 * *(double *)(param_1 + 0x60);
  return;
}



// FUNCTION 14692f4ee FUN_14692f4ee body=161 status=ok
// SIG undefined FUN_14692f4ee(void)

void FUN_14692f4ee(longlong param_1,undefined8 *param_2,char param_3,float param_4,char param_5)

{
  double dVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_5 != '\0') {
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_14692f2c0(param_1,&local_40);
  }
  *(byte *)(param_1 + 0x68) = (param_3 * '\x02' | *(byte *)(param_1 + 0x68) & 0xf8) + 1;
  dVar1 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
  *(double *)(param_1 + 0x50) = dVar1 - (double)param_4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692f590 FUN_14692f590 body=70 status=ok
// SIG undefined FUN_14692f590(void)

undefined8 FUN_14692f590(longlong param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  double extraout_XMM0_Qa;
  
  bVar1 = *(byte *)(param_1 + 0x68);
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  if ((bVar1 & 1) == 0) {
    return 0;
  }
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 2) != 0) {
      return 0;
    }
    uVar3 = (**(code **)(*DAT_14c968098 + 0x60))();
    if (extraout_XMM0_Qa - *(double *)(param_1 + 0x50) <= *(double *)(param_1 + 0x60)) {
      return 0;
    }
    uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),*(undefined1 *)(param_1 + 0x68));
  }
  return CONCAT71((int7)(uVar2 >> 8),(uVar2 & 2) == 0);
}



// FUNCTION 14692f5d6 FUN_14692f5d6 body=8 status=ok
// SIG undefined FUN_14692f5d6(void)

bool FUN_14692f5d6(longlong param_1)

{
  return (*(byte *)(param_1 + 0x68) & 1) == 0;
}



// FUNCTION 14692f5de FUN_14692f5de body=6 status=ok
// SIG undefined FUN_14692f5de(void)

byte FUN_14692f5de(longlong param_1)

{
  return *(byte *)(param_1 + 0x68) & 1;
}



// FUNCTION 14692f5e4 FUN_14692f5e4 body=47 status=ok
// SIG undefined FUN_14692f5e4(void)

void FUN_14692f5e4(longlong param_1)

{
  double dVar1;
  
  *(byte *)(param_1 + 0x68) = (*(byte *)(param_1 + 0x68) & 0xf8) + 1;
  dVar1 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
  *(double *)(param_1 + 0x50) = dVar1 - *(double *)(param_1 + 0x60);
  return;
}



// FUNCTION 14692f614 FUN_14692f614 body=69 status=ok
// SIG undefined FUN_14692f614(void)

void FUN_14692f614(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  local_18 = param_1;
  FUN_14692ef30(&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692f65a FUN_14692f65a body=63 status=ok
// SIG undefined FUN_14692f65a(void)

bool FUN_14692f65a(longlong param_1)

{
  bool bVar1;
  double dVar2;
  
  if ((*(byte *)(param_1 + 0x68) & 4) == 0) {
    bVar1 = true;
    if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
      dVar2 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
      bVar1 = dVar2 - *(double *)(param_1 + 0x50) <= *(double *)(param_1 + 0x60);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 14692f69a FUN_14692f69a body=83 status=ok
// SIG undefined FUN_14692f69a(void)

undefined4 *
FUN_14692f69a(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  FUN_1469345d2(param_1 + 2,param_3);
  *(undefined8 *)(param_1 + 6) = param_4;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_1449db362(param_3);
  return param_1;
}



// FUNCTION 14692f6ee FUN_14692f6ee body=169 status=ok
// SIG undefined FUN_14692f6ee(void)

undefined8 FUN_14692f6ee(float *param_1,double param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  double dVar4;
  
  uVar2 = 1;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
    if ((param_1[4] != 0.0) && (*(longlong **)(param_1 + 2) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 2) + 0x30))();
      if (cVar1 != '\0') {
        if ((0.0 < *param_1) && (dVar4 = *(double *)(param_1 + 6), dVar4 <= param_2)) {
          do {
            dVar4 = dVar4 + (double)*param_1;
          } while (dVar4 <= param_2);
          *(double *)(param_1 + 6) = dVar4;
        }
        if (param_1[4] == 0.0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 2);
        }
                    /* WARNING: Could not recover jumptable at 0x00014692f77e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3);
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14692f96c FUN_14692f96c body=49 status=ok
// SIG undefined FUN_14692f96c(void)

undefined8
FUN_14692f96c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6)

{
  (**(code **)(*(longlong *)*param_1 + 0x1a8))
            ((longlong *)*param_1,param_2,param_3,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 14692f99e FUN_14692f99e body=5 status=ok
// SIG undefined FUN_14692f99e(void)

longlong FUN_14692f99e(longlong param_1)

{
  return param_1 + 0x30;
}



// FUNCTION 14692f9a4 FUN_14692f9a4 body=123 status=ok
// SIG undefined FUN_14692f9a4(void)

void FUN_14692f9a4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14693466e((longlong *)(param_1 + 0x10),iVar1);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
  *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00014692fa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  return;
}



// FUNCTION 14692fa20 FUN_14692fa20 body=153 status=ok
// SIG undefined FUN_14692fa20(void)

void FUN_14692fa20(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  local_30 = *param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14692faba(param_1 + 0x10,&local_30,1);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692faba FUN_14692faba body=65 status=ok
// SIG undefined FUN_14692faba(void)

undefined8 FUN_14692faba(undefined8 param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1469346f4();
  uVar2 = 0;
  if (iVar1 != -1) {
    FUN_1469347e4(param_1,iVar1);
    uVar2 = 1;
    if (param_3 == '\x01') {
      FUN_146934856(param_1);
    }
  }
  return uVar2;
}



// FUNCTION 14692fafc FUN_14692fafc body=128 status=ok
// SIG undefined FUN_14692fafc(void)

int FUN_14692fafc(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1413f6722(param_1,iVar1);
  }
  lVar4 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 14692fb7c FUN_14692fb7c body=241 status=ok
// SIG undefined FUN_14692fb7c(void)

ulonglong FUN_14692fb7c(longlong *param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  ulonglong unaff_R14;
  int iVar6;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = 0;
  if (0 < (int)param_1[1]) {
    lVar5 = 0;
    do {
      lVar1 = *param_1;
      FUN_144b016b8(*(undefined8 *)(lVar1 + lVar5),&local_78);
      fVar3 = local_74;
      fVar2 = local_78;
      FUN_14287c17c(*(undefined8 *)(lVar1 + lVar5),&local_78);
      unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
      if ((((*param_2 <= local_78) && (fVar2 < param_2[2] || fVar2 == param_2[2])) &&
          (param_2[1] <= local_74)) && (fVar3 < param_2[3] || fVar3 == param_2[3]))
      goto LAB_14692fc39;
      cVar4 = FUN_14692fb7c(*(longlong *)(lVar1 + lVar5) + 0x600,param_2);
      if (cVar4 != '\0') goto LAB_14692fc39;
      lVar5 = lVar5 + 0x10;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_1[1]);
  }
  unaff_R14 = 0;
LAB_14692fc39:
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return unaff_R14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692fc6e FUN_14692fc6e body=227 status=ok
// SIG undefined FUN_14692fc6e(void)

ulonglong FUN_14692fc6e(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [288];
  undefined1 *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar2 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x128);
  }
  local_178 = 4;
  local_170 = param_3;
  FUN_1469348f2(param_1,local_168,param_2,lVar2 + (longlong)(*(int *)(param_1 + 0x130) + -1) * 0x48)
  ;
  if (local_38 < 1) {
    uVar3 = 0;
  }
  else {
    lVar2 = 0;
    lVar4 = 0;
    do {
      puVar1 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar1 = local_160;
      }
      FUN_1402018be(param_1,puVar1 + lVar2);
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x48;
    } while (lVar4 < local_38);
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),0 < local_38);
  }
  FUN_144715780(local_160);
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692fd52 FUN_14692fd52 body=14 status=ok
// SIG undefined FUN_14692fd52(void)

void FUN_14692fd52(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar1;
  *param_2 = iVar1;
  return;
}



// FUNCTION 14692fd60 FUN_14692fd60 body=15 status=ok
// SIG undefined FUN_14692fd60(void)

void FUN_14692fd60(longlong param_1,int *param_2)

{
  if (*param_2 != -1) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *param_2 = -1;
  }
  return;
}



// FUNCTION 14692fd70 FUN_14692fd70 body=190 status=ok
// SIG undefined FUN_14692fd70(void)

undefined8 *
FUN_14692fd70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_60 = param_6;
  local_68 = param_5;
  local_40 = 1;
  local_48 = 0;
  local_58 = param_3;
  local_50 = param_4;
  FUN_1412ce282(param_1,3,param_2,&local_38);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_149ed05a0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfc | 2;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692fe30 FUN_14692fe30 body=255 status=ok
// SIG undefined FUN_14692fe30(void)

void FUN_14692fe30(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0xc0) & 2) != 0) &&
     (*(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfd, DAT_14c968098 != 0)) {
    FUN_14695e688(local_28);
    FUN_14171dc1a(param_1 + 0x98,local_28);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0xc0) & 1) != 0)) {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_14482b126(lVar4,0x40000000);
    }
    plVar3 = *(longlong **)(DAT_14c968098 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0xa0))(plVar3,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692ff30 FUN_14692ff30 body=111 status=ok
// SIG undefined FUN_14692ff30(void)

void FUN_14692ff30(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05a0;
  FUN_14692fe30();
  plVar3 = (longlong *)param_1[0x17];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x14];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014692ff94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14692ffa0 FUN_14692ffa0 body=32 status=ok
// SIG undefined FUN_14692ffa0(void)

undefined8 FUN_14692ffa0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSlateInvalidationRoot");
  return param_2;
}



// FUNCTION 14692ffc0 FUN_14692ffc0 body=114 status=ok
// SIG undefined FUN_14692ffc0(void)

void FUN_14692ffc0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar3 = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x108);
  if ((longlong)iVar2 != 0) {
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x10) + 0x10 +
                         (ulonglong)((*(uint *)(lVar3 + lVar4) & 0xffff) << 6)) + 0x16 +
                       (ulonglong)(*(uint *)(lVar3 + lVar4) >> 0x10) * 0x18);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) == 0x20) {
    return;
  }
  FUN_1469333d8(param_1,0x20);
  return;
}



// FUNCTION 146930032 FUN_146930032 body=138 status=ok
// SIG undefined FUN_146930032(void)

void FUN_146930032(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar3 = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x108);
  if ((longlong)iVar2 != 0) {
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x10) + 0x10 +
                         (ulonglong)((*(uint *)(lVar3 + lVar4) & 0xffff) << 6)) + 0x16 +
                       (ulonglong)(*(uint *)(lVar3 + lVar4) >> 0x10) * 0x18);
      *pbVar1 = *pbVar1 & 0xfb;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0x20) {
    FUN_1469333d8(param_1,0x20);
  }
  *(undefined1 *)(param_1 + 0x118) = 0;
  return;
}



// FUNCTION 1469300bc FUN_1469300bc body=138 status=ok
// SIG undefined FUN_1469300bc(void)

void FUN_1469300bc(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 800);
  if (*(longlong *)(param_1 + 800) == 0) {
    lVar3 = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x328);
  if ((longlong)iVar2 != 0) {
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0x10) + 0x10 +
                         (ulonglong)((*(uint *)(lVar3 + lVar4) & 0xffff) << 6)) + 0x16 +
                       (ulonglong)(*(uint *)(lVar3 + lVar4) >> 0x10) * 0x18);
      *pbVar1 = *pbVar1 & 0xfd;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x328) = 0;
  if (*(int *)(param_1 + 0x32c) != 100) {
    FUN_1469334ce(param_1,100);
  }
  *(undefined1 *)(param_1 + 0x33c) = 0;
  return;
}



// FUNCTION 146930146 FUN_146930146 body=29 status=ok
// SIG undefined FUN_146930146(void)

void FUN_146930146(longlong param_1)

{
  FUN_140163244(*(undefined8 *)(param_1 + 0x50),0x80);
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



// FUNCTION 146930164 FUN_146930164 body=113 status=ok
// SIG undefined FUN_146930164(void)

void FUN_146930164(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  uint local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 0x16) & 1) == 0) {
    *(byte *)(param_2 + 0x16) = *(byte *)(param_2 + 0x16) | 1;
    local_10 = *(uint *)(param_2 + 8);
    local_c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x10) + 8 +
                      (ulonglong)((local_10 & 0xffff) << 6)) * 0x400 + (local_10 >> 0x10);
    FUN_1469335ca();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469301d6 FUN_1469301d6 body=127 status=ok
// SIG undefined FUN_1469301d6(void)

void FUN_1469301d6(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_2 + 0x16) & 4) == 0) {
    *(byte *)(param_2 + 0x16) = *(byte *)(param_2 + 0x16) | 4;
    uVar1 = *(uint *)(param_2 + 8);
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x10) + 8 +
                    (ulonglong)((uVar1 & 0xffff) << 6));
    iVar3 = *(int *)(param_1 + 0x108);
    *(uint *)(param_1 + 0x108) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x10c) < iVar3 + 1U) {
      FUN_146933668(param_1,iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar4 = param_1;
    }
    *(undefined4 *)(lVar4 + (longlong)iVar3 * 8) = *(undefined4 *)(param_2 + 8);
    *(uint *)(lVar4 + 4 + (longlong)iVar3 * 8) = iVar2 * 0x400 + (uVar1 >> 0x10);
  }
  return;
}



// FUNCTION 146930256 FUN_146930256 body=459 status=ok
// SIG undefined FUN_146930256(void)

void FUN_146930256(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  iVar8 = *(int *)(lVar6 + 0x58);
  if (iVar8 != -1) {
    fVar9 = (float)((ulonglong)param_2 >> 0x20);
    lVar11 = *(longlong *)(lVar6 + 0x10);
    do {
      lVar10 = (longlong)iVar8 * 0x40;
      uVar5 = *(uint *)(lVar11 + 0x18 + lVar10);
      uVar4 = *(ushort *)(lVar11 + 0xc + lVar10);
      if ((int)(uint)uVar4 < (int)uVar5) {
        lVar12 = (ulonglong)uVar5 - (ulonglong)uVar4;
        lVar13 = (ulonglong)uVar4 * 0x18;
        do {
          lVar7 = *(longlong *)(*(longlong *)(lVar11 + lVar10 + 0x10) + lVar13);
          if (lVar7 != 0) {
            FUN_144b00ffc(lVar7 + 0xd0,lVar7 + 0x98);
            fVar1 = *(float *)(lVar7 + 0xfc);
            fVar2 = *(float *)(lVar7 + 0xec);
            fVar3 = *(float *)(lVar7 + 0xf4);
            *(float *)(lVar7 + 0xec) = *(float *)(lVar7 + 0xf0) * 0.0 + fVar2;
            *(float *)(lVar7 + 0xf0) = fVar2 * 0.0 + *(float *)(lVar7 + 0xf0);
            *(float *)(lVar7 + 0xf4) = *(float *)(lVar7 + 0xf8) * 0.0 + fVar3;
            *(float *)(lVar7 + 0xf8) = fVar3 * 0.0 + *(float *)(lVar7 + 0xf8);
            *(float *)(lVar7 + 0xfc) = *(float *)(lVar7 + 0x100) * 0.0 + fVar1 + (float)param_2;
            *(float *)(lVar7 + 0x100) = fVar1 * 0.0 + *(float *)(lVar7 + 0x100) + fVar9;
            *(ulonglong *)(lVar7 + 0xdc) =
                 CONCAT44(*(float *)(lVar7 + 0xe0) + fVar9,*(float *)(lVar7 + 0xdc) + (float)param_2
                         );
          }
          lVar13 = lVar13 + 0x18;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        lVar11 = *(longlong *)(lVar6 + 0x10);
      }
      iVar8 = *(int *)(lVar11 + 4 + lVar10);
    } while (iVar8 != -1);
  }
  return;
}



// FUNCTION 146930422 FUN_146930422 body=205 status=ok
// SIG undefined FUN_146930422(void)

void FUN_146930422(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined1 *)(param_1 + 0x7e);
  *(undefined1 *)(param_1 + 0x7e) = 1;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar2 + 0x108) = 0;
  if (*(int *)(lVar2 + 0x10c) != 0x20) {
    FUN_1469333d8(lVar2,0x20);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar2 + 0x108) = 0;
  if (*(int *)(lVar2 + 0x10c) != 0x20) {
    FUN_1469333d8(lVar2,0x20);
  }
  *(undefined1 *)(lVar2 + 0x118) = 0;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x328) = 0;
  if (*(int *)(lVar2 + 0x32c) != 100) {
    FUN_1469334ce(lVar2,100);
  }
  *(undefined1 *)(lVar2 + 0x33c) = 0;
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_146934f1c(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_142860522(*(undefined8 *)(param_1 + 0x10),param_2);
  *(undefined1 *)(param_1 + 0x7e) = uVar1;
  return;
}



// FUNCTION 1469304f0 FUN_1469304f0 body=754 status=ok
// SIG undefined FUN_1469304f0(void)

void FUN_1469304f0(longlong *param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined1 auStack_b8 [37];
  undefined1 local_93;
  undefined1 local_92;
  byte local_91;
  undefined **local_90;
  longlong local_88;
  uint *local_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_92 = *(undefined1 *)((longlong)param_1 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
  (**(code **)(*param_1 + 0x20))(param_1,&local_58);
  plVar5 = *(longlong **)(param_1[2] + 0x50);
  if (plVar5 != (longlong *)0x0) {
    lVar12 = *(longlong *)(param_1[2] + 0x48);
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    iVar10 = (int)plVar5[1];
    do {
      plVar14 = (longlong *)0x0;
      if (iVar10 == 0) break;
      LOCK();
      iVar8 = (int)plVar5[1];
      bVar17 = iVar10 == iVar8;
      if (bVar17) {
        *(int *)(plVar5 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
      plVar14 = plVar5;
    } while (!bVar17);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    if (plVar14 == (longlong *)0x0) {
      lVar12 = 0;
    }
    bVar17 = lVar12 == local_58;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar14 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (bVar17 && lVar12 != 0) {
      local_88 = param_1[2];
      puVar16 = (uint *)param_1[3];
      local_78 = param_1[4];
      lStack_70 = param_1[5];
      local_90 = &PTR_FUN_149ed0400;
      local_68 = 0;
      uStack_60 = 0;
      local_80 = puVar16;
      while ((0 < (int)puVar16[0x42] && ((char)param_1[0xf] == '\0'))) {
        puVar11 = *(uint **)(puVar16 + 0x40);
        if (*(uint **)(puVar16 + 0x40) == (uint *)0x0) {
          puVar11 = puVar16;
        }
        uVar4 = *puVar11;
        FUN_146933fd4(puVar16);
        uVar13 = (ulonglong)(uVar4 >> 0x10);
        uVar15 = uVar4 & 0xffff;
        lVar7 = (ulonglong)((uVar4 >> 0x10) * 8) * 3;
        pbVar2 = (byte *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(puVar16 + 0x44) + 0x10) + 0x10 +
                           (ulonglong)(uVar15 << 6)) + 0x16 + lVar7);
        *pbVar2 = *pbVar2 & 0xfe;
        lVar12 = *(longlong *)(*(longlong *)(param_1[2] + 0x10) + 0x10 + (ulonglong)(uVar15 << 6));
        lVar6 = *(longlong *)(lVar12 + lVar7);
        if (lVar6 != 0) {
          bVar3 = *(byte *)(lVar12 + 0x14 + lVar7);
          if ((bVar3 & 8) != 0) {
            local_93 = *(undefined1 *)((longlong)param_1 + 0x7f);
            *(undefined1 *)((longlong)param_1 + 0x7f) = 1;
            cVar9 = FUN_1428606d8(param_1[2],uVar4,&local_90);
            if (cVar9 == '\0') {
              *(undefined1 *)((longlong)param_1 + 0x7f) = local_93;
              goto LAB_146930668;
            }
            pbVar2 = (byte *)(*(longlong *)
                               (*(longlong *)(param_1[2] + 0x10) + 0x10 + (ulonglong)(uVar15 << 6))
                              + 0x14 + uVar13 * 0x18);
            *pbVar2 = *pbVar2 & 0xf7;
            *(undefined1 *)((longlong)param_1 + 0x7f) = local_93;
          }
          if ((bVar3 & 0x40) != 0) {
            lVar12 = *(longlong *)
                      (*(longlong *)(param_1[2] + 0x10) + 0x10 + (ulonglong)(uVar15 << 6)) +
                     uVar13 * 0x18;
            FUN_146930f0a(param_1[2],lVar12);
            pbVar2 = (byte *)(lVar12 + 0x14);
            *pbVar2 = *pbVar2 & 0xbf;
          }
          if ((bVar3 & 0x20) != 0) {
            lVar12 = *(longlong *)
                      (*(longlong *)(param_1[2] + 0x10) + 0x10 + (ulonglong)(uVar15 << 6)) +
                     uVar13 * 0x18;
            local_91 = *(byte *)(lVar12 + 0x15) * '\x02' & 10 | *(byte *)(lVar12 + 0x15) & 5;
            FUN_14287b4d8(lVar6,&local_91,param_1[0xb]);
            *(byte *)(lVar12 + 0x14) = *(byte *)(lVar12 + 0x14) & 0xcf | 0x10;
            lVar6 = param_1[5];
            if (*(char *)(lVar6 + 0x33c) == '\x01') {
              FUN_1469314fa(lVar6,lVar12);
            }
            else {
              FUN_1469336e0(lVar6,lVar12);
            }
          }
        }
LAB_146930668:
        puVar16 = (uint *)param_1[3];
      }
      local_90 = &PTR_FUN_149ed0400;
      FUN_142861b3c(&local_68);
      goto LAB_1469306c8;
    }
  }
  FUN_146930422(param_1,&local_58);
  FUN_1469300bc(param_1[5]);
  FUN_140163244(local_58,0x80);
LAB_1469306c8:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x7a) = local_92;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469307e4 FUN_1469307e4 body=41 status=ok
// SIG undefined FUN_1469307e4(void)

void FUN_1469307e4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146934f1c();
  return;
}



// FUNCTION 14693080e FUN_14693080e body=114 status=ok
// SIG undefined FUN_14693080e(void)

void FUN_14693080e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar3 = uVar2 & 0xffff;
  if ((int)uVar3 < *(int *)(lVar1 + 0x38)) {
    lVar4 = lVar1 + 0x20;
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x30);
    }
    if ((*(uint *)(lVar4 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
      uVar2 = uVar2 >> 0x10;
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if (((*(ushort *)(lVar1 + 0xc + (ulonglong)(uVar3 << 6)) <= uVar2) &&
          ((int)uVar2 < *(int *)((ulonglong)(uVar3 << 6) + lVar1 + 0x18))) &&
         (lVar1 = *(longlong *)(lVar1 + 0x10 + (ulonglong)(uVar3 << 6)),
         *(longlong *)(lVar1 + (ulonglong)uVar2 * 0x18) == param_2)) {
        *(undefined8 *)(lVar1 + (ulonglong)uVar2 * 0x18) = 0;
      }
    }
  }
  return;
}



// FUNCTION 146930880 FUN_146930880 body=205 status=ok
// SIG undefined FUN_146930880(void)

void FUN_146930880(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 8 +
                  (ulonglong)((param_2 & 0xffff) << 6)) * 0x400 + (param_2 >> 0x10);
  plVar1 = (longlong *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x38);
  uVar6 = (ulonglong)uVar2;
  uVar7 = uVar6;
  do {
    uVar7 = uVar7 - 1;
    uVar5 = (uint)uVar6;
    uVar9 = (int)uVar2 >> 0x1f & uVar2;
    if ((int)uVar5 < 1) break;
    uVar3 = *(undefined8 *)(*plVar1 + uVar7 * 8);
    if ((short)uVar3 == (short)param_2 && ((uint)uVar3 ^ param_2) < 0x10000) {
      return;
    }
    uVar6 = (ulonglong)(uVar5 - 1);
    uVar9 = uVar5;
  } while ((uint)((ulonglong)uVar3 >> 0x20) <= uVar8);
  *(uint *)(param_1 + 0x38) = uVar2 + 1;
  if (*(uint *)(param_1 + 0x3c) == uVar2) {
    FUN_146934e96(plVar1,uVar2);
  }
  lVar10 = (longlong)(int)uVar9;
  memmove((void *)(*plVar1 + lVar10 * 8 + 8),(void *)(*plVar1 + lVar10 * 8),
          (ulonglong)(uVar2 - uVar9) << 3);
  lVar4 = *plVar1;
  *(uint *)(lVar4 + lVar10 * 8) = param_2;
  *(uint *)(lVar4 + 4 + lVar10 * 8) = uVar8;
  return;
}



// FUNCTION 14693094e FUN_14693094e body=165 status=ok
// SIG undefined FUN_14693094e(void)

void FUN_14693094e(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_3 + 0xc);
  if (uVar1 != DAT_14c967f78) {
    lVar2 = *(longlong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x10 +
               (ulonglong)((uVar1 & 0xffff) << 6)) + (ulonglong)(uVar1 >> 0x10) * 0x18);
    if (*(int *)(lVar2 + 0x15c) < param_4) {
      *(int *)(lVar2 + 0x15c) = param_4;
      local_18 = CONCAT44(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 8 +
                                  (ulonglong)((uVar1 & 0xffff) << 6)) * 0x400 + (uVar1 >> 0x10),
                          uVar1);
      FUN_1469337de(param_2,&local_18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469309f4 FUN_1469309f4 body=700 status=ok
// SIG undefined FUN_1469309f4(void)

void FUN_1469309f4(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int local_6c;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(*param_3 + 0x163) & 4) != 0) goto LAB_146930a1f;
  uVar12 = DAT_14c967f78 >> 0x10;
  local_68 = *(longlong *)(param_1 + 0x10);
  sVar7 = (short)DAT_14c967f78;
  if (*(short *)((longlong)param_3 + 0xc) == sVar7) {
    uVar11 = 0;
    uVar13 = 0;
    uVar6 = uVar12;
    uVar4 = DAT_14c967f78;
    if (uVar12 != *(ushort *)((longlong)param_3 + 0xe)) goto LAB_146930a90;
  }
  else {
LAB_146930a90:
    uVar5 = (ulonglong)(*(uint *)((longlong)param_3 + 0xc) >> 0x10);
    lVar1 = *(longlong *)(local_68 + 0x10);
    lVar2 = *(longlong *)
             (lVar1 + 0x10 + (ulonglong)((*(uint *)((longlong)param_3 + 0xc) & 0xffff) << 6));
    uVar4 = *(uint *)(lVar2 + 8 + uVar5 * 0x18);
    uVar13 = *(uint *)(lVar2 + 0x10 + uVar5 * 0x18);
    uVar6 = uVar4 >> 0x10;
    uVar11 = *(int *)(lVar1 + 8 + (ulonglong)((uVar4 & 0xffff) << 6)) * 0x400 + uVar6;
    uVar13 = *(int *)(lVar1 + 8 + (ulonglong)((uVar13 & 0xffff) << 6)) * 0x400 + (uVar13 >> 0x10);
  }
  local_60 = (ulonglong)uVar4;
  local_6c = *(int *)(*param_3 + 0x158);
  local_78 = param_4;
  local_58 = param_2;
  FUN_146930cb2(local_68,&local_4c,(int)param_3[1]);
  if (((short)local_4c != sVar7) || (uVar12 != local_4c >> 0x10)) {
    lVar1 = *(longlong *)(local_68 + 0x10);
    bVar14 = (short)local_60 == sVar7;
    do {
      lVar2 = *(longlong *)(lVar1 + 0x10 + (ulonglong)((local_4c & 0xffff) << 6));
      lVar3 = *(longlong *)(lVar2 + (ulonglong)(local_4c >> 0x10) * 0x18);
      if (((lVar3 != 0) &&
          ((*(byte *)(lVar2 + 0x15 + (ulonglong)(local_4c >> 0x10) * 0x18) & 3) == 3)) &&
         ((*(byte *)(lVar3 + 0x163) & 4) == 0)) {
        uVar4 = *(uint *)(param_1 + 0x38);
        if (0 < (int)uVar4) {
          uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar4 - 1) * 8);
          uVar9 = (uint)uVar10;
          sVar8 = (short)uVar10;
          while (sVar8 != (short)local_4c || 0xffff < (uVar9 ^ local_4c)) {
            if (uVar12 == uVar6 && bVar14) {
              if (uVar4 < 2) goto LAB_146930c18;
            }
            else if (((uVar4 < 2) || (uVar9 = (uint)((ulonglong)uVar10 >> 0x20), uVar9 < uVar11)) ||
                    (uVar13 < uVar9)) goto LAB_146930c18;
            uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar4 - 2) * 8);
            uVar9 = (uint)uVar10;
            uVar4 = uVar4 - 1;
            sVar8 = (short)uVar10;
          }
          if ((*(byte *)(lVar3 + 0x38) & 0x50) != 0) {
            if (*(int *)(lVar3 + 0x158) <= (int)local_78 && *(int *)(lVar3 + 0x158) != local_6c) {
              *(int *)(lVar3 + 0x158) = (int)local_78 + 1;
            }
            break;
          }
        }
LAB_146930c18:
        if (*(int *)(lVar3 + 0x158) != local_6c) {
          if (*(int *)(lVar3 + 0x158) <= (int)local_78) {
            *(int *)(lVar3 + 0x158) = (int)local_78 + 1;
            *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) | 0x10;
            FUN_146930880(param_1,local_4c);
          }
          break;
        }
      }
      FUN_146930cb2(local_68,&local_50);
      local_4c = local_50;
    } while (uVar12 != local_50 >> 0x10 || sVar7 != (short)local_50);
  }
  FUN_14693094e(param_1,local_58,param_3,local_78);
LAB_146930a1f:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146930cb2 FUN_146930cb2 body=217 status=ok
// SIG undefined FUN_146930cb2(void)

void FUN_146930cb2(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = DAT_14c967f78;
  *param_2 = DAT_14c967f78;
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x10 + (ulonglong)((param_3 & 0xffff) << 6));
  uVar5 = *(uint *)(lVar3 + 0x10 + (ulonglong)(param_3 >> 0x10) * 0x18);
  uVar6 = (uVar5 >> 0x10) + 1;
  uVar4 = (ulonglong)((uVar5 & 0xffff) << 6);
  if (*(int *)(lVar2 + 0x18 + uVar4) <= (int)(uVar6 & 0xffff)) {
    uVar5 = *(uint *)(uVar4 + lVar2 + 4);
    if (uVar5 == 0xffffffff) {
      uVar6 = uVar1 >> 0x10;
      uVar5 = uVar1;
    }
    else {
      uVar6 = (uint)*(ushort *)(lVar2 + 0xc + (ulonglong)((uVar5 & 0xffff) << 6));
    }
  }
  uVar7 = uVar6 & 0xffff;
  if (((short)uVar5 != (short)uVar1) || (uVar1 >> 0x10 != uVar7)) {
    lVar2 = *(longlong *)(lVar2 + 0x10 + (ulonglong)((uVar5 & 0xffff) << 6));
    uVar1 = *(uint *)(lVar3 + (ulonglong)(param_3 >> 0x10) * 0x18 + 0xc);
    if ((*(short *)(lVar2 + 0xc + (ulonglong)uVar7 * 0x18) == (short)uVar1) &&
       (uVar1 >> 0x10 == (uint)*(ushort *)(lVar2 + (ulonglong)uVar7 * 0x18 + 0xe))) {
      *param_2 = uVar6 << 0x10 | uVar5 & 0xffff;
    }
  }
  return;
}



// FUNCTION 146930d8c FUN_146930d8c body=380 status=ok
// SIG undefined FUN_146930d8c(void)

ulonglong FUN_146930d8c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  char local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x30) + -8 + (longlong)*(int *)(param_1 + 0x38) * 8);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  uVar10 = (ulonglong)(uVar2 >> 0x10);
  lVar7 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x10 +
           (ulonglong)((uVar2 & 0xffff) << 6));
  if (((~*(byte *)(lVar7 + 0x15 + uVar10 * 0x18) & 3) == 0) &&
     (plVar1 = (longlong *)(lVar7 + uVar10 * 0x18), *plVar1 != 0)) {
    FUN_1428621b2(plVar1,&local_34,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x28));
    uVar10 = CONCAT71((int7)((ulonglong)&local_34 >> 8),local_2c);
    if (local_2c == '\x01') {
      if (0 < (longlong)*(int *)(param_1 + 0x38)) {
        uVar2 = *(uint *)(plVar1 + 1);
        uVar3 = *(uint *)(plVar1 + 2);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar7 + 8 + (ulonglong)((uVar2 & 0xffff) << 6));
        iVar5 = *(int *)(lVar7 + 8 + (ulonglong)((uVar3 & 0xffff) << 6));
        uVar9 = (longlong)*(int *)(param_1 + 0x38);
        do {
          uVar6 = *(uint *)(*(longlong *)(param_1 + 0x30) + 4 + (uVar9 - 1 & 0xffffffff) * 8);
          if ((uVar6 < iVar4 * 0x400 + (uVar2 >> 0x10)) || (iVar5 * 0x400 + (uVar3 >> 0x10) < uVar6)
             ) break;
          *(int *)(param_1 + 0x38) = (int)uVar9 + -1;
          bVar8 = 1 < uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar8);
      }
      if ((((local_34 < local_30) && (DAT_14c75ed28 == '\x01')) &&
          ((~*(byte *)((longlong)plVar1 + 0x15) & 3) == 0)) && (*plVar1 != 0)) {
        FUN_1469309f4(param_1,param_3,plVar1);
      }
      if (local_30 < *(int *)(param_1 + 0x60)) {
        local_30 = *(int *)(param_1 + 0x60);
      }
      *(int *)(param_1 + 0x60) = local_30;
    }
  }
  else {
    uVar10 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146930f0a FUN_146930f0a body=45 status=ok
// SIG undefined FUN_146930f0a(void)

void FUN_146930f0a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  void *_Dst;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(ushort *)(param_2 + 1) * 0x40;
  if ((~*(byte *)(*param_2 + 0x31) & 3) != 0) {
    uVar4 = *(uint *)(lVar5 + 0x28);
    lVar2 = *(longlong *)(lVar5 + 0x20);
    uVar7 = 0;
    uVar6 = uVar4;
    if (0 < (int)uVar4) {
      do {
        uVar1 = (uVar6 >> 1) + uVar7;
        if (*(ushort *)(lVar2 + (ulonglong)uVar1 * 2) < *(ushort *)((longlong)param_2 + 10)) {
          uVar7 = uVar1 + (uVar6 & 1);
        }
        bVar3 = 1 < uVar6;
        uVar6 = uVar6 >> 1;
      } while (bVar3);
    }
    if (((int)uVar7 < (int)uVar4) &&
       (*(ushort *)(lVar2 + (ulonglong)uVar7 * 2) <= *(ushort *)((longlong)param_2 + 10))) {
      if (~uVar7 + uVar4 != 0) {
        _Dst = (void *)(lVar2 + (ulonglong)uVar7 * 2);
        memmove(_Dst,(void *)((longlong)_Dst + 2),(longlong)(int)(~uVar7 + uVar4) * 2);
        uVar4 = *(uint *)(lVar5 + 0x28);
      }
      *(uint *)(lVar5 + 0x28) = uVar4 - 1;
    }
    return;
  }
  FUN_146932108();
  return;
}



// FUNCTION 146930f38 FUN_146930f38 body=255 status=ok
// SIG undefined FUN_146930f38(void)

void FUN_146930f38(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  uint local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined1 *)(param_1 + 0x7b);
  *(undefined1 *)(param_1 + 0x7b) = 1;
  FUN_146931612(&local_50,*(undefined8 *)(param_1 + 0x10));
  if (((short)local_48 != (short)DAT_14c967f78) || (DAT_14c967f78 >> 0x10 != local_48 >> 0x10)) {
    do {
      uVar4 = (local_48 & 0xffff) << 6;
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x10 + (ulonglong)uVar4);
      lVar3 = *(longlong *)(lVar2 + (ulonglong)(local_48 >> 0x10) * 0x18);
      if (lVar3 != 0) {
        lVar2 = lVar2 + (ulonglong)(local_48 >> 0x10) * 0x18;
        if ((*(byte *)(lVar2 + 0x15) & 4) == 0) {
          FUN_144aa2924(lVar3,CONCAT71((uint7)(uint3)(uVar4 >> 8),1));
          if ((*(byte *)(lVar2 + 0x15) & 0xc) == 0) {
            FUN_14016305e(lVar3,1);
            goto LAB_146930fdd;
          }
        }
        FUN_146973f50(lVar3);
      }
LAB_146930fdd:
      FUN_146931038(&local_50);
    } while (((short)local_48 != (short)DAT_14c967f78) ||
            (DAT_14c967f78 >> 0x10 != local_48 >> 0x10));
  }
  *(int *)(local_50 + 0x60) = *(int *)(local_50 + 0x60) + -1;
  *(undefined1 *)(param_1 + 0x7b) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146931038 FUN_146931038 body=193 status=ok
// SIG undefined FUN_146931038(void)

void FUN_146931038(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = param_1[2];
  iVar5 = (int)lVar4 + 1;
  *(int *)(param_1 + 2) = iVar5;
  uVar1 = *(ushort *)(param_1 + 1);
  lVar3 = *(longlong *)(*param_1 + 0x10);
  if (*(int *)(lVar3 + 0x28 + (ulonglong)uVar1 * 0x40) <= iVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  uVar2 = *(ushort *)
           (*(longlong *)(lVar3 + (ulonglong)uVar1 * 0x40 + 0x20) + 2 + (longlong)(int)lVar4 * 2);
  *(uint *)(param_1 + 1) = CONCAT22(uVar2,uVar1);
  if ((uVar1 == (ushort)DAT_14c967f78) && (DAT_14c967f78 >> 0x10 == (uint)uVar2)) {
    FUN_14693527c(&local_1c);
  }
  else {
    local_1c = *(int *)(*(longlong *)(*param_1 + 0x10) + 8 + (ulonglong)uVar1 * 0x40) * 0x400 +
               (uint)uVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693110a FUN_14693110a body=376 status=ok
// SIG undefined FUN_14693110a(void)

void FUN_14693110a(longlong param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar2 = *(undefined1 *)(param_1 + 0x7c);
  *(undefined1 *)(param_1 + 0x7c) = 1;
  puVar10 = *(ulonglong **)(param_1 + 0x20);
  if ((int)puVar10[0x21] != 0) {
    uVar15 = DAT_14c967f78 >> 0x10;
    uVar13 = 0;
    uVar12 = 0;
    uVar14 = DAT_14c967f78;
    do {
      puVar6 = (ulonglong *)puVar10[0x20];
      if ((ulonglong *)puVar10[0x20] == (ulonglong *)0x0) {
        puVar6 = puVar10;
      }
      uVar3 = *puVar6;
      FUN_1469340aa(puVar10);
      uVar8 = uVar3 >> 0x10 & 0xffff;
      uVar7 = (uint)uVar3 & 0xffff;
      pbVar1 = (byte *)(*(longlong *)
                         (*(longlong *)(puVar10[0x22] + 0x10) + 0x10 + (ulonglong)(uVar7 << 6)) +
                        0x16 + uVar8 * 0x18);
      *pbVar1 = *pbVar1 & 0xfb;
      if (((((short)uVar14 == (short)DAT_14c967f78) && (DAT_14c967f78 >> 0x10 == uVar15)) ||
          (uVar9 = (uint)(uVar3 >> 0x20), uVar9 < uVar12)) || (uVar13 < uVar9)) {
        lVar11 = *(longlong *)(param_1 + 0x10);
        lVar4 = *(longlong *)(lVar11 + 0x10);
        lVar5 = *(longlong *)(lVar4 + 0x10 + (ulonglong)(uVar7 << 6));
        uVar13 = *(uint *)(lVar5 + 0x10 + uVar8 * 0x18);
        uVar14 = *(uint *)(lVar5 + 8 + uVar8 * 0x18);
        uVar15 = uVar14 >> 0x10;
        uVar12 = *(int *)(lVar4 + 8 + (ulonglong)((uVar14 & 0xffff) << 6)) * 0x400 + uVar15;
        uVar13 = *(int *)(lVar4 + 8 + (ulonglong)((uVar13 & 0xffff) << 6)) * 0x400 +
                 (uVar13 >> 0x10);
        lVar4 = *(longlong *)(lVar5 + uVar8 * 0x18);
        if (lVar4 != 0) {
          lVar5 = lVar5 + uVar8 * 0x18;
          if (((*(byte *)(lVar5 + 0x15) & 0xc) == 0) && ((*(byte *)(lVar5 + 0x16) & 0x10) != 0)) {
            pbVar1 = (byte *)(lVar4 + 0x30);
            *pbVar1 = *pbVar1 | 0x80;
            lVar11 = *(longlong *)(param_1 + 0x10);
          }
          FUN_1428622aa(lVar5,*(undefined8 *)(param_1 + 0x28),lVar11,param_1);
          *(byte *)(lVar5 + 0x14) = *(byte *)(lVar5 + 0x14) & 0x68;
        }
      }
      puVar10 = *(ulonglong **)(param_1 + 0x20);
    } while ((int)puVar10[0x21] != 0);
  }
  FUN_146930032(puVar10);
  *(undefined1 *)(param_1 + 0x7c) = uVar2;
  return;
}



// FUNCTION 146931282 FUN_146931282 body=287 status=ok
// SIG undefined FUN_146931282(void)

byte FUN_146931282(longlong param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong *puVar11;
  longlong lVar12;
  
  uVar2 = *(undefined1 *)(param_1 + 0x7d);
  *(undefined1 *)(param_1 + 0x7d) = 1;
  puVar11 = *(ulonglong **)(param_1 + 0x28);
  if ((int)puVar11[0x65] == 0) {
    bVar10 = 0;
  }
  else {
    bVar10 = 0;
    do {
      if (*(char *)(param_1 + 0x78) != '\0') break;
      puVar8 = (ulonglong *)puVar11[100];
      if ((ulonglong *)puVar11[100] == (ulonglong *)0x0) {
        puVar8 = puVar11;
      }
      uVar4 = *puVar8;
      FUN_146934180(puVar11);
      uVar9 = (ulonglong)(((uint)uVar4 & 0xffff) << 6);
      lVar6 = (ulonglong)((uint)(uVar4 >> 0xd) & 0x7fff8) * 3;
      pbVar1 = (byte *)(*(longlong *)(*(longlong *)(puVar11[0x66] + 0x10) + 0x10 + uVar9) + 0x16 +
                       lVar6);
      *pbVar1 = *pbVar1 & 0xfd;
      lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x10 + uVar9);
      lVar5 = *(longlong *)(lVar12 + lVar6);
      if (lVar5 != 0) {
        lVar12 = lVar12 + lVar6;
        bVar7 = FUN_1428622aa(lVar12,*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x10),
                              param_1);
        *(byte *)(lVar12 + 0x14) = *(byte *)(lVar12 + 0x14) & 0x68;
        bVar10 = bVar10 | bVar7;
        if ((*(char *)(lVar5 + 0x38) != '\0') && ((~*(byte *)(lVar12 + 0x15) & 3) == 0)) {
          iVar3 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
            FUN_146934e96((longlong *)(param_1 + 0x30),iVar3);
          }
          lVar12 = *(longlong *)(param_1 + 0x30);
          *(uint *)(lVar12 + (longlong)iVar3 * 8) = (uint)uVar4;
          *(int *)(lVar12 + 4 + (longlong)iVar3 * 8) = (int)(uVar4 >> 0x20);
        }
      }
      puVar11 = *(ulonglong **)(param_1 + 0x28);
    } while ((int)puVar11[0x65] != 0);
  }
  FUN_1469300bc(puVar11);
  *(undefined1 *)(param_1 + 0x7d) = uVar2;
  return bVar10 & 1;
}



// FUNCTION 1469313a2 FUN_1469313a2 body=171 status=ok
// SIG undefined FUN_1469313a2(void)

void FUN_1469313a2(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar1 = *(int *)(param_1 + 0x108);
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar3 = param_1;
  }
  if (iVar1 != 0) {
    iVar4 = (iVar1 - (iVar1 + -2 >> 0x1f)) + -2 >> 1;
    iVar5 = iVar4;
joined_r0x0001469313dd:
    do {
      iVar6 = iVar4 * 2 + 1;
      if (iVar6 < iVar1) {
        iVar8 = iVar4 * 2 + 2;
        if ((iVar8 < iVar1) &&
           (*(uint *)(lVar3 + 4 + (longlong)iVar8 * 8) <= *(uint *)(lVar3 + 4 + (longlong)iVar6 * 8)
           )) {
          iVar6 = iVar8;
        }
        lVar9 = (longlong)iVar4;
        lVar7 = (longlong)iVar6;
        if (*(uint *)(lVar3 + 4 + lVar7 * 8) < *(uint *)(lVar3 + 4 + lVar9 * 8)) {
          uVar2 = *(undefined8 *)(lVar3 + lVar9 * 8);
          *(undefined8 *)(lVar3 + lVar9 * 8) = *(undefined8 *)(lVar3 + lVar7 * 8);
          *(undefined8 *)(lVar3 + lVar7 * 8) = uVar2;
          iVar4 = iVar6;
          goto joined_r0x0001469313dd;
        }
      }
      bVar10 = iVar5 != 0;
      iVar4 = iVar5 + -1;
      iVar5 = iVar4;
    } while (bVar10);
  }
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



// FUNCTION 14693144e FUN_14693144e body=171 status=ok
// SIG undefined FUN_14693144e(void)

void FUN_14693144e(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar1 = *(int *)(param_1 + 0x328);
  lVar3 = *(longlong *)(param_1 + 800);
  if (*(longlong *)(param_1 + 800) == 0) {
    lVar3 = param_1;
  }
  if (iVar1 != 0) {
    iVar4 = (iVar1 - (iVar1 + -2 >> 0x1f)) + -2 >> 1;
    iVar5 = iVar4;
joined_r0x000146931489:
    do {
      iVar6 = iVar4 * 2 + 1;
      if (iVar6 < iVar1) {
        iVar8 = iVar4 * 2 + 2;
        if ((iVar8 < iVar1) &&
           (*(uint *)(lVar3 + 4 + (longlong)iVar6 * 8) <= *(uint *)(lVar3 + 4 + (longlong)iVar8 * 8)
           )) {
          iVar6 = iVar8;
        }
        lVar9 = (longlong)iVar4;
        lVar7 = (longlong)iVar6;
        if (*(uint *)(lVar3 + 4 + lVar9 * 8) < *(uint *)(lVar3 + 4 + lVar7 * 8)) {
          uVar2 = *(undefined8 *)(lVar3 + lVar9 * 8);
          *(undefined8 *)(lVar3 + lVar9 * 8) = *(undefined8 *)(lVar3 + lVar7 * 8);
          *(undefined8 *)(lVar3 + lVar7 * 8) = uVar2;
          iVar4 = iVar6;
          goto joined_r0x000146931489;
        }
      }
      bVar10 = iVar5 != 0;
      iVar4 = iVar5 + -1;
      iVar5 = iVar4;
    } while (bVar10);
  }
  *(undefined1 *)(param_1 + 0x33c) = 1;
  return;
}



// FUNCTION 1469314fa FUN_1469314fa body=118 status=ok
// SIG undefined FUN_1469314fa(void)

void FUN_1469314fa(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  uint local_14;
  int local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 0x16) & 2) == 0) {
    *(byte *)(param_2 + 0x16) = *(byte *)(param_2 + 0x16) | 2;
    local_14 = *(uint *)(param_2 + 8);
    local_10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x330) + 0x10) + 8 +
                       (ulonglong)((local_14 & 0xffff) << 6)) * 0x400 + (local_14 >> 0x10);
    FUN_146934256(param_1,&local_14,&local_9);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146931572 FUN_146931572 body=113 status=ok
// SIG undefined FUN_146931572(void)

void FUN_146931572(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  uint local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 0x16) & 4) == 0) {
    *(byte *)(param_2 + 0x16) = *(byte *)(param_2 + 0x16) | 4;
    local_10 = *(uint *)(param_2 + 8);
    local_c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x10) + 8 +
                      (ulonglong)((local_10 & 0xffff) << 6)) * 0x400 + (local_10 >> 0x10);
    FUN_1469342fa();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469315e4 FUN_1469315e4 body=4 status=ok
// SIG undefined FUN_1469315e4(void)

void FUN_1469315e4(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x78) = param_2;
  return;
}



// FUNCTION 1469315e8 FUN_1469315e8 body=41 status=ok
// SIG undefined FUN_1469315e8(void)

void FUN_1469315e8(longlong param_1,char param_2)

{
  FUN_14032aaf4();
  if (param_2 != '\0') {
    FUN_14032abc4(param_1,1);
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



// FUNCTION 146931612 FUN_146931612 body=152 status=ok
// SIG undefined FUN_146931612(void)

longlong * FUN_146931612(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = DAT_14c967f78;
  FUN_14693527c((longlong)param_1 + 0xc);
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_14c967f78;
  *(undefined1 *)(param_1 + 3) = 0;
  *(int *)(*param_1 + 0x60) = *(int *)(*param_1 + 0x60) + 1;
  uVar3 = *(uint *)(*param_1 + 0x58);
  if (uVar3 != 0xffffffff) {
    lVar2 = *(longlong *)(*param_1 + 0x10);
    do {
      lVar1 = lVar2 + (longlong)(int)uVar3 * 0x40;
      if (0 < *(int *)(lVar2 + 0x28 + (longlong)(int)uVar3 * 0x40)) {
        uVar4 = (uint)**(ushort **)(lVar1 + 0x20);
        *(uint *)(param_1 + 1) = uVar4 << 0x10 | uVar3 & 0xffff;
        *(uint *)((longlong)param_1 + 0xc) =
             *(int *)(*(longlong *)(param_2 + 0x10) + 8 + (ulonglong)((uVar3 & 0xffff) << 6)) *
             0x400 + uVar4;
        return param_1;
      }
      uVar3 = *(uint *)(lVar1 + 4);
    } while (uVar3 != 0xffffffff);
  }
  return param_1;
}



// FUNCTION 14693175a FUN_14693175a body=109 status=ok
// SIG undefined FUN_14693175a(void)

longlong * FUN_14693175a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = DAT_14c967f78;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar2 = *(uint *)(param_2 + 0x58);
  if (uVar2 != 0xffffffff) {
    do {
      lVar1 = *(longlong *)(param_2 + 0x10) + (longlong)(int)uVar2 * 0x40;
      if (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 0x38 + (longlong)(int)uVar2 * 0x40)) {
        *(uint *)(param_1 + 1) = uVar2 & 0xffff | (uint)**(ushort **)(lVar1 + 0x30) << 0x10;
        break;
      }
      uVar2 = *(uint *)(lVar1 + 4);
    } while (uVar2 != 0xffffffff);
  }
  FUN_1469317c8(param_1);
  return param_1;
}



// FUNCTION 1469317c8 FUN_1469317c8 body=234 status=ok
// SIG undefined FUN_1469317c8(void)

void FUN_1469317c8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  while( true ) {
    uVar3 = DAT_14c967f78;
    if (((short)param_1[1] == (short)DAT_14c967f78) &&
       (DAT_14c967f78 >> 0x10 == (uint)*(ushort *)((longlong)param_1 + 10))) {
      return;
    }
    uVar6 = (ulonglong)(*(uint *)(param_1 + 1) >> 0x10);
    lVar1 = *(longlong *)(*param_1 + 0x10);
    lVar2 = *(longlong *)(lVar1 + 0x10 + (ulonglong)((*(uint *)(param_1 + 1) & 0xffff) << 6));
    if ((*(byte *)(lVar2 + 0x15 + uVar6 * 0x18) & 0xc) == 0) {
      return;
    }
    uVar4 = *(uint *)(lVar2 + uVar6 * 0x18 + 0x10);
    uVar5 = (uVar4 >> 0x10) + 1;
    uVar6 = (ulonglong)((uVar4 & 0xffff) << 6);
    if (*(int *)(lVar1 + 0x18 + uVar6) <= (int)(uVar5 & 0xffff)) {
      uVar4 = *(uint *)(uVar6 + lVar1 + 4);
      if (uVar4 == 0xffffffff) {
        uVar5 = DAT_14c967f78 >> 0x10;
        uVar4 = DAT_14c967f78;
      }
      else {
        uVar5 = (uint)*(ushort *)(lVar1 + 0xc + (ulonglong)((uVar4 & 0xffff) << 6));
      }
    }
    if (((short)uVar4 == (short)DAT_14c967f78) && (DAT_14c967f78 >> 0x10 == (uVar5 & 0xffff)))
    break;
    FUN_146931936(param_1,uVar4 & 0xffff | uVar5 << 0x10);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(uint *)(param_1 + 1) = uVar3;
  return;
}



// FUNCTION 1469318b2 FUN_1469318b2 body=131 status=ok
// SIG undefined FUN_1469318b2(void)

void FUN_1469318b2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = iVar1 + 1;
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  lVar2 = *(longlong *)(*param_1 + 0x10);
  lVar6 = (ulonglong)*(ushort *)(param_1 + 1) * 0x40;
  lVar4 = lVar2 + lVar6;
  if (iVar5 < *(int *)(lVar2 + 0x38 + lVar6)) {
    uVar3 = CONCAT22(*(undefined2 *)(*(longlong *)(lVar4 + 0x30) + 2 + (longlong)iVar1 * 2),
                     *(ushort *)(param_1 + 1));
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 1) = DAT_14c967f78;
    do {
      uVar3 = *(uint *)(lVar4 + 4);
      if ((longlong)(int)uVar3 == -1) {
        return;
      }
      lVar2 = *(longlong *)(*param_1 + 0x10);
      lVar6 = (longlong)(int)uVar3 * 0x40;
      lVar4 = lVar2 + lVar6;
    } while (*(int *)(lVar2 + 0x38 + lVar6) < 1);
    uVar3 = uVar3 & 0xffff | (uint)**(ushort **)(lVar4 + 0x30) << 0x10;
  }
  *(uint *)(param_1 + 1) = uVar3;
  return;
}



// FUNCTION 146931936 FUN_146931936 body=190 status=ok
// SIG undefined FUN_146931936(void)

void FUN_146931936(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  lVar3 = *(longlong *)(*param_1 + 0x10);
  uVar5 = (ulonglong)((param_2 & 0xffff) << 6);
  lVar7 = lVar3 + uVar5;
  uVar2 = *(uint *)(lVar3 + 0x38 + uVar5);
  if (0 < (int)uVar2) {
    uVar9 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar9;
      if (*(ushort *)(*(longlong *)(lVar3 + 0x30 + uVar5) + (ulonglong)uVar1 * 2) <
          (ushort)(param_2 >> 0x10)) {
        uVar9 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
    if ((int)uVar9 < (int)uVar2) {
      *(uint *)((longlong)param_1 + 0xc) = uVar9;
      *(uint *)(param_1 + 1) =
           (uint)*(ushort *)(*(longlong *)(lVar7 + 0x30) + (ulonglong)uVar9 * 2) << 0x10 |
           param_2 & 0xffff;
      return;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c967f78;
  do {
    uVar2 = *(uint *)(lVar7 + 4);
    if ((longlong)(int)uVar2 == -1) {
      return;
    }
    lVar3 = *(longlong *)(*param_1 + 0x10);
    lVar8 = (longlong)(int)uVar2 * 0x40;
    lVar7 = lVar3 + lVar8;
  } while (*(int *)(lVar3 + 0x38 + lVar8) < 1);
  *(uint *)(param_1 + 1) = uVar2 & 0xffff | (uint)**(ushort **)(lVar7 + 0x30) << 0x10;
  return;
}



// FUNCTION 1469319f4 FUN_1469319f4 body=121 status=ok
// SIG undefined FUN_1469319f4(void)

ushort * FUN_1469319f4(longlong param_1,ushort *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = FUN_146932422(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 0x40;
  iVar2 = *(int *)(lVar1 + 0x18);
  *(uint *)(lVar1 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar1 + 0x1c) < iVar2 + 1U) {
    FUN_146934f7c((longlong *)(lVar1 + 0x10),iVar2);
  }
  FUN_146935286((longlong)iVar2 * 0x18 + *(longlong *)(lVar1 + 0x10),param_4);
  *param_2 = uVar3;
  param_2[1] = (ushort)iVar2;
  return param_2;
}



// FUNCTION 146931a6e FUN_146931a6e body=159 status=ok
// SIG undefined FUN_146931a6e(void)

void FUN_146931a6e(longlong param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  short sVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = DAT_14c967f78 >> 0x10;
  sVar2 = (short)DAT_14c967f78;
  if ((*(short *)(param_2 + 0xc) != sVar2) || (uVar4 != *(ushort *)(param_2 + 0xe))) {
    uVar3 = (ulonglong)(*(uint *)(param_2 + 0xc) >> 0x10);
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x10) + 0x10 +
             (ulonglong)((*(uint *)(param_2 + 0xc) & 0xffff) << 6));
    if (*(short *)(lVar1 + 0x10 + uVar3 * 0x18) == (short)param_3) {
      lVar5 = lVar1 + uVar3 * 0x18;
      lVar1 = lVar1 + uVar3 * 0x18;
      do {
        if (param_3 >> 0x10 != (uint)*(ushort *)(lVar5 + 0x12)) {
          return;
        }
        *(undefined4 *)(lVar1 + 0x10) = param_4;
        if ((*(short *)(lVar5 + 0xc) != sVar2) || (uVar4 != *(ushort *)(lVar5 + 0xe))) {
          lVar5 = (ulonglong)((*(uint *)(lVar5 + 0xc) >> 0x10) * 0x18) +
                  *(longlong *)
                   (*(longlong *)(param_1 + 0x10) + 0x10 +
                   (ulonglong)((*(uint *)(lVar5 + 0xc) & 0xffff) << 6));
        }
        lVar1 = lVar5;
      } while (*(short *)(lVar5 + 0x10) == (short)param_3);
    }
  }
  return;
}



// FUNCTION 146931b0e FUN_146931b0e body=1310 status=ok
// SIG undefined FUN_146931b0e(void)

void FUN_146931b0e(longlong param_1,uint *param_2)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  ushort uVar16;
  bool bVar17;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar12 = *param_2;
  uVar10 = uVar12 >> 0x10;
  lVar6 = *(longlong *)(param_1 + 0x10);
  lVar11 = *(longlong *)(lVar6 + 0x10 + (ulonglong)((uVar12 & 0xffff) << 6)) +
           (ulonglong)uVar10 * 0x18;
  if ((*(short *)(lVar11 + 0xc) != (short)DAT_14c967f78) ||
     (DAT_14c967f78 >> 0x10 != (uint)*(ushort *)(lVar11 + 0xe))) {
    uVar4 = *(uint *)(*(longlong *)
                       (lVar6 + 0x10 + (ulonglong)((*(uint *)(lVar11 + 0xc) & 0xffff) << 6)) + 0x10
                     + (ulonglong)(*(uint *)(lVar11 + 0xc) >> 0x10) * 0x18);
    uVar13 = *(int *)(lVar6 + 8 + (ulonglong)((uVar4 & 0xffff) << 6)) * 0x400 + (uVar4 >> 0x10);
    if ((param_2[2] <= uVar13) && (uVar13 <= param_2[3])) {
      uVar7 = (ulonglong)((uVar12 & 0xffff) << 6);
      if (uVar10 == *(ushort *)(lVar6 + 0xc + uVar7)) {
        uVar12 = *(uint *)(uVar7 + lVar6);
        if (uVar12 != 0xffffffff) {
          uVar10 = *(uint *)(lVar6 + 0x18 + (ulonglong)((uVar12 & 0xffff) << 6));
          goto LAB_146932025;
        }
        uVar10 = DAT_14c967f78 >> 0x10;
        uVar12 = DAT_14c967f78;
      }
      else {
LAB_146932025:
        uVar10 = uVar10 + 0xffff;
      }
      FUN_146931a6e(param_1,lVar11,uVar4,uVar12 & 0xffff | uVar10 << 0x10);
      lVar6 = *(longlong *)(param_1 + 0x10);
      uVar12 = *param_2;
    }
  }
  uVar10 = param_2[1];
  iVar5 = ~(uVar10 >> 0x10) + *(int *)(lVar6 + 0x18 + (ulonglong)((uVar10 & 0xffff) << 6));
  uVar14 = (ushort)uVar12;
  uVar8 = (ushort)uVar10;
  local_50 = param_1;
  if (iVar5 < *(int *)(param_1 + 0x74) || uVar14 != uVar8) {
    if (iVar5 < *(int *)(param_1 + 0x74)) goto LAB_146931e2d;
LAB_146931c01:
    if (uVar14 == uVar8) {
      FUN_142861342(&local_50,uVar10,uVar12 >> 0x10,(uVar10 >> 0x10) + 1);
      *(ushort *)(*(longlong *)(param_1 + 0x10) + 0xc + (ulonglong)(ushort)*param_2 * 0x40) =
           *(ushort *)((longlong)param_2 + 6) + 1;
      lVar11 = (ulonglong)(ushort)*param_2 * 0x40;
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x18 + lVar11) <=
          (int)(uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + 0xc + lVar11)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
      goto LAB_146931df1;
    }
    uVar14 = *(ushort *)(lVar6 + 4 + (ulonglong)((uVar12 & 0xffff) << 6));
    if (uVar8 != uVar14) {
      bVar3 = false;
      goto LAB_146931c27;
    }
LAB_146931cdb:
    FUN_142861342(&local_50,uVar10,
                  *(undefined2 *)(lVar6 + 0xc + (ulonglong)((uVar10 & 0xffff) << 6)),
                  (uVar10 >> 0x10) + 1);
    *(short *)(*(longlong *)(param_1 + 0x10) + 0xc + (ulonglong)((param_2[1] & 0xffff) << 6)) =
         (short)(param_2[1] >> 0x10) + 1;
    uVar10 = (uint)(ushort)param_2[1];
    lVar11 = *(longlong *)(param_1 + 0x10);
    lVar6 = (ulonglong)(ushort)param_2[1] * 0x40;
    if (*(int *)(lVar11 + 0x18 + lVar6) <= (int)(uint)*(ushort *)(lVar11 + 0xc + lVar6)) {
LAB_146931eda:
      FUN_14693272e(param_1,uVar10);
      lVar11 = *(longlong *)(param_1 + 0x10);
    }
    uVar10 = DAT_14c967f78;
    uVar4 = *param_2 & 0xffff;
    uVar7 = (ulonglong)(uVar4 << 6);
    lVar15 = lVar11 + uVar7;
    uVar13 = *param_2 >> 0x10;
    lVar11 = lVar11 + uVar7;
    lVar6 = lVar11 + 0x10;
    uVar12 = *(uint *)(lVar11 + 0x18);
    if ((int)uVar13 < (int)uVar12) {
      lVar9 = (ulonglong)uVar12 - (ulonglong)uVar13;
      lVar11 = (ulonglong)(uVar13 << 3) * 3;
      do {
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10 + (ulonglong)(uVar4 << 6)) +
                 lVar11);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x18) = 0;
          *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
          *(uint *)(lVar2 + 0x28) = uVar10;
          *(undefined4 *)(lVar2 + 0x2c) = 0;
        }
        lVar11 = lVar11 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  else {
    if (*(short *)(lVar6 + 0xc + (ulonglong)((uVar12 & 0xffff) << 6)) == (short)(uVar12 >> 0x10))
    goto LAB_146931c01;
LAB_146931e2d:
    FUN_1469327ec(param_1,&local_50,uVar10);
    uVar12 = DAT_14c967f78;
    lVar6 = *(longlong *)(param_1 + 0x10);
    uVar4 = *param_2 & 0xffff;
    uVar10 = param_2[1];
    if (uVar14 != uVar8) {
      uVar14 = *(ushort *)(lVar6 + 4 + (ulonglong)(uVar4 << 6));
      bVar3 = true;
      if ((ushort)uVar10 != uVar14) {
LAB_146931c27:
        uVar8 = *(ushort *)(lVar6 + (ulonglong)((uVar10 & 0xffff) << 6));
        uVar16 = uVar14;
        do {
          uVar10 = DAT_14c967f78;
          lVar11 = *(longlong *)(param_1 + 0x10);
          uVar12 = *(uint *)(lVar11 + 0x18 + (ulonglong)uVar14 * 0x40);
          uVar1 = *(ushort *)(lVar11 + 0xc + (ulonglong)uVar14 * 0x40);
          if ((int)(uint)uVar1 < (int)uVar12) {
            lVar6 = (ulonglong)uVar12 - (ulonglong)uVar1;
            lVar11 = (ulonglong)uVar1 * 0x18;
            do {
              lVar15 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)(param_1 + 0x10) + 0x10 + (ulonglong)uVar14 * 0x40) + lVar11
                        );
              if (lVar15 != 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                *(undefined4 *)(lVar15 + 0x20) = 0xffffffff;
                *(uint *)(lVar15 + 0x28) = uVar10;
                *(undefined4 *)(lVar15 + 0x2c) = 0;
              }
              lVar11 = lVar11 + 0x18;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
            lVar11 = *(longlong *)(param_1 + 0x10);
          }
          uVar1 = *(ushort *)(lVar11 + 4 + (ulonglong)uVar16 * 0x40);
          FUN_14693272e(param_1,uVar16);
          bVar17 = uVar16 != uVar8;
          uVar14 = uVar16;
          uVar16 = uVar1;
        } while (bVar17);
        uVar10 = param_2[1];
        lVar6 = *(longlong *)(param_1 + 0x10);
        if (!bVar3) goto LAB_146931cdb;
      }
      uVar12 = DAT_14c967f78;
      uVar8 = *(ushort *)(lVar6 + 0xc + (ulonglong)((uVar10 & 0xffff) << 6));
      if ((uint)uVar8 <= uVar10 >> 0x10) {
        lVar6 = ((ulonglong)(uVar10 >> 0x10) - (ulonglong)uVar8) + 1;
        lVar11 = (ulonglong)uVar8 * 0x18;
        do {
          lVar15 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x10) + 0x10 + (ulonglong)((uVar10 & 0xffff) << 6)) +
                    lVar11);
          if (lVar15 != 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            *(undefined4 *)(lVar15 + 0x20) = 0xffffffff;
            *(uint *)(lVar15 + 0x28) = uVar12;
            *(undefined4 *)(lVar15 + 0x2c) = 0;
          }
          lVar11 = lVar11 + 0x18;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        uVar10 = param_2[1];
      }
      goto LAB_146931eda;
    }
    uVar13 = *param_2 >> 0x10;
    lVar15 = lVar6 + (ulonglong)(uVar4 << 6);
    lVar6 = (ulonglong)(uVar4 << 6) + lVar6 + 0x10;
    if (uVar13 < uVar10 >> 0x10) {
      lVar9 = (ulonglong)(uVar10 >> 0x10) - (ulonglong)uVar13;
      lVar11 = (ulonglong)(uVar13 << 3) * 3;
      do {
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10 + (ulonglong)(uVar4 << 6)) +
                 lVar11);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x18) = 0;
          *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
          *(uint *)(lVar2 + 0x28) = uVar12;
          *(undefined4 *)(lVar2 + 0x2c) = 0;
        }
        lVar11 = lVar11 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  uVar12 = *param_2;
  uVar10 = uVar12;
  if (*(uint *)(lVar15 + 0x18) != uVar12 >> 0x10) {
    *(uint *)(lVar15 + 0x18) = uVar12 >> 0x10;
    FUN_1469351ce(lVar6);
    uVar10 = (uint)(ushort)*param_2;
  }
  uVar7 = (ulonglong)((uVar10 & 0xffff) << 6);
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x18 + uVar7) <=
      (int)(uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  local_42 = (undefined2)(uVar12 >> 0x10);
  FUN_142860dc2(&local_42,lVar15 + 0x20);
  FUN_142860dc2(&local_42,lVar15 + 0x30);
LAB_146931df1:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14693204c FUN_14693204c body=185 status=ok
// SIG undefined FUN_14693204c(void)

int * FUN_14693204c(longlong param_1,int *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [38];
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1469327ec();
  iVar2 = *param_2;
  if (iVar2 != -1) {
    uVar4 = (ulonglong)((param_3 & 0xffff) << 6);
    lVar1 = *(longlong *)(param_1 + 0x10) + uVar4;
    iVar3 = iVar2;
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x18 + uVar4) != iVar2) {
      *(int *)(lVar1 + 0x18) = iVar2;
      FUN_1469351ce(lVar1 + 0x10);
      iVar3 = *(int *)(lVar1 + 0x18);
    }
    if (iVar3 == 0) {
      FUN_14693272e(param_1,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    local_32 = (undefined2)iVar2;
    FUN_142860dc2(&local_32,lVar1 + 0x20);
    FUN_142860dc2(&local_32,lVar1 + 0x30);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146932108 FUN_146932108 body=148 status=ok
// SIG undefined FUN_146932108(void)

void FUN_146932108(longlong *param_1,ushort param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  lVar2 = *param_1;
  uVar6 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar5 = (int)(uVar3 >> 1) + uVar6;
      uVar4 = (uint)uVar3;
      if (*(ushort *)(lVar2 + (ulonglong)uVar5 * 2) < param_2) {
        uVar6 = uVar5 + (uVar4 & 1);
      }
      uVar3 = uVar3 >> 1;
    } while (1 < uVar4);
  }
  uVar3 = (ulonglong)uVar6;
  if ((uVar1 - uVar6 == 0 || (int)uVar1 < (int)uVar6) || (param_2 < *(ushort *)(lVar2 + uVar3 * 2)))
  {
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
      FUN_14488eebe(param_1);
      lVar2 = *param_1;
    }
    memmove((void *)(lVar2 + uVar3 * 2 + 2),(void *)(lVar2 + uVar3 * 2),
            (ulonglong)(uVar1 - uVar6) * 2);
    *(ushort *)(*param_1 + uVar3 * 2) = param_2;
  }
  return;
}



// FUNCTION 14693219c FUN_14693219c body=119 status=ok
// SIG undefined FUN_14693219c(void)

void FUN_14693219c(longlong *param_1,ushort param_2)

{
  uint uVar1;
  void *_Dst;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)(param_1 + 1);
  lVar2 = *param_1;
  uVar6 = 0;
  uVar5 = uVar4;
  if (0 < (int)uVar4) {
    do {
      uVar1 = (uVar5 >> 1) + uVar6;
      if (*(ushort *)(lVar2 + (ulonglong)uVar1 * 2) < param_2) {
        uVar6 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
  }
  if (((int)uVar6 < (int)uVar4) && (*(ushort *)(lVar2 + (ulonglong)uVar6 * 2) <= param_2)) {
    if (~uVar6 + uVar4 != 0) {
      _Dst = (void *)(lVar2 + (ulonglong)uVar6 * 2);
      memmove(_Dst,(void *)((longlong)_Dst + 2),(longlong)(int)(~uVar6 + uVar4) * 2);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
  }
  return;
}



// FUNCTION 146932214 FUN_146932214 body=76 status=ok
// SIG undefined FUN_146932214(void)

void FUN_146932214(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if ((*(byte *)(lVar1 + 0x38) & 0xcc) == 0) {
    FUN_14693219c();
  }
  else {
    FUN_146932108(*(longlong *)(param_1 + 0x10) + 0x30 + (ulonglong)*(ushort *)(param_2 + 1) * 0x40,
                  *(undefined2 *)((longlong)param_2 + 10));
  }
  *(byte *)((longlong)param_2 + 0x16) =
       *(byte *)((longlong)param_2 + 0x16) & 0xef | *(byte *)(lVar1 + 0x38) >> 3 & 0x10;
  return;
}



// FUNCTION 146932260 FUN_146932260 body=385 status=ok
// SIG undefined FUN_146932260(void)

ulonglong FUN_146932260(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined6 local_88;
  undefined2 uStack_82;
  undefined6 local_80;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = (ulonglong)*(int *)(param_1 + 0x5c);
  if (((uVar5 == 0xffffffffffffffff) ||
      (*(int *)(param_1 + 0x70) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x18 + uVar5 * 0x40)))
     && ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44)) + 1U != (uint)(ushort)DAT_14c967f78))
  {
    plVar1 = (longlong *)(param_1 + 0x10);
    local_80 = 0;
    uStack_7a = 0;
    local_88 = 0xffffffffffff;
    uStack_82 = 0xffff;
    FUN_146935010(plVar1,local_48);
    *(ulonglong *)((longlong)local_40 + 6) = CONCAT62(local_80,uStack_82);
    *local_40 = CONCAT26(uStack_82,local_88);
    local_40[2] = 0;
    local_78 = 0;
    local_40[3] = 0;
    local_70 = 0;
    local_40[4] = 0;
    local_68 = 0;
    local_40[5] = 0;
    local_60 = 0;
    local_40[6] = 0;
    local_58 = 0;
    local_40[7] = 0;
    local_50 = 0;
    uVar5 = (ulonglong)local_48[0];
    lVar6 = (longlong)(int)local_48[0];
    FUN_1469323e4(&local_88);
    lVar3 = *plVar1;
    if (param_2 != '\0') {
      iVar2 = *(int *)(param_1 + 0x70);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if (*(int *)(lVar3 + 0x1c + lVar6 * 0x40) < iVar2) {
        FUN_1469350f6(lVar6 * 0x40 + lVar3 + 0x10);
        lVar3 = *plVar1;
      }
    }
    if ((longlong)*(int *)(param_1 + 0x5c) == -1) {
      uVar4 = 0xffffffff;
    }
    else {
      *(uint *)(lVar3 + 4 + (longlong)*(int *)(param_1 + 0x5c) * 0x40) = local_48[0];
      *(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar6 * 0x40) =
           *(int *)(param_1 + 0x78) +
           *(int *)(*(longlong *)(param_1 + 0x10) + 8 + (longlong)*(int *)(param_1 + 0x5c) * 0x40);
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      lVar3 = *(longlong *)(param_1 + 0x10);
    }
    *(undefined4 *)(lVar3 + lVar6 * 0x40) = uVar4;
    *(uint *)(param_1 + 0x5c) = local_48[0];
    if (*(int *)(param_1 + 0x58) == -1) {
      *(uint *)(param_1 + 0x58) = local_48[0];
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469323e4 FUN_1469323e4 body=62 status=ok
// SIG undefined FUN_1469323e4(void)

void FUN_1469323e4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146932422 FUN_146932422 body=49 status=ok
// SIG undefined FUN_146932422(void)

ulonglong FUN_146932422(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  if ((short)DAT_14c967f78 == (short)param_2) {
    uVar1 = FUN_146932260(param_1,1);
    return uVar1;
  }
  uVar2 = (param_2 & 0xffff) << 6;
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x18 + (ulonglong)uVar2) < *(int *)(param_1 + 0x70))
  {
    return (ulonglong)param_2;
  }
  uVar1 = FUN_146932454(param_1,param_2,CONCAT71((uint7)(uint3)(uVar2 >> 8),1));
  return uVar1;
}



// FUNCTION 146932454 FUN_146932454 body=438 status=ok
// SIG undefined FUN_146932454(void)

uint FUN_146932454(longlong param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  undefined6 local_90;
  undefined2 uStack_8a;
  undefined6 local_88;
  undefined2 uStack_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x58) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  }
  if ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44)) + 1U == (uint)(ushort)DAT_14c967f78) {
    local_50[0] = (uint)*(ushort *)(param_1 + 0x5c);
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x10);
    local_88 = 0;
    uStack_82 = 0;
    local_90 = 0xffffffffffff;
    uStack_8a = 0xffff;
    FUN_146935010(plVar1,local_50);
    *(ulonglong *)((longlong)local_48 + 6) = CONCAT62(local_88,uStack_8a);
    *local_48 = CONCAT26(uStack_8a,local_90);
    local_48[2] = 0;
    local_80 = 0;
    local_48[3] = 0;
    local_78 = 0;
    local_48[4] = 0;
    local_70 = 0;
    local_48[5] = 0;
    local_68 = 0;
    local_48[6] = 0;
    local_60 = 0;
    local_48[7] = 0;
    local_58 = 0;
    lVar4 = (longlong)(int)local_50[0];
    FUN_1469323e4(&local_90);
    lVar3 = *plVar1;
    if (param_3 != '\0') {
      iVar2 = *(int *)(param_1 + 0x70);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if (*(int *)(lVar3 + 0x1c + lVar4 * 0x40) < iVar2) {
        FUN_1469350f6(lVar4 * 0x40 + lVar3 + 0x10);
        lVar3 = *plVar1;
      }
    }
    param_2 = param_2 & 0xffff;
    iVar2 = *(int *)(lVar3 + 4 + (ulonglong)(param_2 << 6));
    if ((longlong)iVar2 == -1) {
      *(uint *)(param_1 + 0x5c) = local_50[0];
      *(uint *)(lVar3 + lVar4 * 0x40) = param_2;
      *(uint *)(*(longlong *)(param_1 + 0x10) + 4 + (ulonglong)(param_2 << 6)) = local_50[0];
      *(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar4 * 0x40) =
           *(int *)(param_1 + 0x78) +
           *(int *)(*(longlong *)(param_1 + 0x10) + 8 + (ulonglong)(param_2 << 6));
    }
    else {
      *(uint *)(lVar3 + (longlong)iVar2 * 0x40) = local_50[0];
      *(int *)(*(longlong *)(param_1 + 0x10) + 4 + lVar4 * 0x40) = iVar2;
      *(uint *)((ulonglong)(param_2 << 6) + lVar3 + 4) = local_50[0];
      *(uint *)(*(longlong *)(param_1 + 0x10) + lVar4 * 0x40) = param_2;
      if (*(uint *)(param_1 + 0x5c) == param_2) {
        *(uint *)(param_1 + 0x5c) = local_50[0];
      }
      FUN_146932628(param_1,local_50[0]);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return local_50[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146932628 FUN_146932628 body=260 status=ok
// SIG undefined FUN_146932628(void)

void FUN_146932628(longlong param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar6 = (uint)param_2;
  lVar5 = *(longlong *)(param_1 + 0x10);
  local_28 = param_1;
  do {
    lVar7 = (longlong)(int)uVar6 * 0x40;
    if ((longlong)*(int *)(lVar5 + lVar7) == -1) {
      iVar8 = 0;
    }
    else {
      iVar2 = *(int *)(lVar5 + 4 + lVar7);
      iVar8 = *(int *)(lVar5 + 8 + (longlong)*(int *)(lVar5 + lVar7) * 0x40);
      iVar3 = *(int *)(param_1 + 0x70);
      iVar1 = iVar3 + iVar8;
      if (iVar2 == -1) {
        if (*(int *)(lVar5 + lVar7 + 8) < iVar1) {
          FUN_14286120c(&local_28,uVar6,iVar8 + *(int *)(param_1 + 0x78));
        }
        break;
      }
      iVar2 = *(int *)(lVar5 + 8 + (longlong)iVar2 * 0x40);
      iVar4 = *(int *)(lVar5 + lVar7 + 8);
      if ((iVar1 < iVar4) && (iVar4 + iVar3 < iVar2)) break;
      iVar4 = *(int *)(param_1 + 0x78);
      iVar8 = iVar8 + iVar4;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2 - iVar1;
        if ((iVar8 == 0 || iVar2 < iVar1) || (iVar8 < iVar3)) {
          iVar8 = iVar3 * 2;
          if (iVar4 <= iVar3 * 2) {
            iVar8 = iVar4;
          }
          iVar8 = iVar8 + iVar1;
        }
        else {
          iVar8 = ((int)(((uint)((ulonglong)((longlong)iVar8 / (longlong)iVar3) >> 0x1f) & 1) +
                        (int)((longlong)iVar8 / (longlong)iVar3)) >> 1) * iVar3 + iVar1;
        }
      }
    }
    FUN_14286120c(&local_28,uVar6,iVar8);
    lVar5 = *(longlong *)(param_1 + 0x10);
    uVar6 = *(uint *)(lVar5 + 4 + lVar7);
  } while (uVar6 != 0xffffffff);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14693272e FUN_14693272e body=189 status=ok
// SIG undefined FUN_14693272e(void)

void FUN_14693272e(longlong param_1,ushort param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar6 = (ulonglong)param_2 * 0x40;
  piVar2 = (int *)(lVar4 + lVar6);
  iVar5 = *(int *)(lVar4 + lVar6);
  iVar3 = *(int *)(lVar4 + 4 + lVar6);
  if ((longlong)iVar5 == -1) {
    *(int *)(param_1 + 0x58) = iVar3;
    iVar5 = *piVar2;
  }
  else {
    *(int *)(lVar4 + 4 + (longlong)iVar5 * 0x40) = iVar3;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (iVar3 == -1) {
    *(int *)(param_1 + 0x5c) = iVar5;
  }
  else {
    *(int *)(*plVar1 + (longlong)iVar3 * 0x40) = iVar5;
  }
  piVar2[6] = 0;
  if (piVar2[7] != 0) {
    FUN_1469350f6(piVar2 + 4,0);
  }
  piVar2[10] = 0;
  if (piVar2[0xb] != 0) {
    FUN_1448759c8(piVar2 + 8,0);
  }
  piVar2[0xe] = 0;
  if (piVar2[0xf] != 0) {
    FUN_1448759c8(piVar2 + 0xc,0);
  }
  FUN_1469323e4((ulonglong)param_2 * 0x40 + *plVar1);
  FUN_146935166(plVar1,param_2);
  return;
}



// FUNCTION 1469327ec FUN_1469327ec body=1743 status=ok
// SIG undefined FUN_1469327ec(void)

uint * FUN_1469327ec(undefined4 *param_1,uint *param_2,uint param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  short sVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined2 uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c4;
  ulonglong local_c0;
  uint local_b8;
  ushort local_b2;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  uint local_8c;
  uint local_88;
  uint local_84;
  longlong local_80;
  uint *local_78;
  ulonglong local_70;
  uint *local_68;
  uint local_60;
  uint local_58;
  uint local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0xffffffff;
  uVar13 = DAT_14c967f78;
  local_58 = DAT_14c967f78;
  local_54 = DAT_14c967f78;
  local_50 = 0;
  uVar23 = DAT_14c967f78 >> 0x10;
  uVar12 = param_3 & 0xffff;
  uVar15 = *(uint *)(*(longlong *)(param_1 + 4) + 0x18 + (ulonglong)(uVar12 << 6));
  uVar16 = uVar23;
  uVar25 = DAT_14c967f78;
  if ((int)(param_3 >> 0x10) < (int)(uVar15 - 1)) {
    uVar25 = (param_3 >> 0x10) + 1;
    local_b2 = FUN_146932454(param_1,param_3,0);
    local_b8 = uVar15 & 0xffff;
    local_70 = (ulonglong)(uVar25 & 0xffff);
    local_84 = local_b8 - (uVar25 & 0xffff);
    if ((int)local_84 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_84);
    }
    local_b0 = (ulonglong)local_b2;
    lVar9 = *(longlong *)(param_1 + 4);
    if (*(int *)(lVar9 + 0x1c + (ulonglong)local_b2 * 0x40) < (int)local_84) {
      FUN_1469350f6((ulonglong)local_b2 * 0x40 + lVar9 + 0x10);
      lVar9 = *(longlong *)(param_1 + 4);
    }
    uVar21 = (uint)local_70;
    local_78 = param_2;
    if (uVar21 < local_b8) {
      local_54 = uVar15 * 0x10000 - 0x10000;
      iVar8 = *(int *)(lVar9 + 8 + (ulonglong)(uVar12 << 6)) * 0x400;
      uVar17 = iVar8 + uVar21;
      uVar16 = (local_54 >> 0x10) + iVar8;
      local_54 = local_54 | uVar12;
      local_58 = uVar21 << 0x10 | uVar12;
      local_50 = CONCAT44(uVar16,uVar17);
      *param_2 = uVar21;
      uVar15 = uVar25 & 0xffff;
      uVar10 = (ulonglong)uVar15;
      local_a8 = (ulonglong)(uint)((int)local_b0 << 6);
      local_a0 = (ulonglong)(uVar12 << 6);
      local_c8 = uVar13;
      local_c4 = uVar23;
      local_8c = uVar25;
      local_88 = param_3;
      do {
        lVar9 = *(longlong *)(param_1 + 4) + local_a8;
        puVar24 = (undefined4 *)
                  (uVar10 * 0x18 + *(longlong *)(*(longlong *)(param_1 + 4) + 0x10 + local_a0));
        local_c0 = (ulonglong)*(int *)(lVar9 + 0x18);
        uVar25 = *(int *)(lVar9 + 0x18) + 1;
        *(uint *)(lVar9 + 0x18) = uVar25;
        local_98 = uVar10;
        if (*(uint *)(lVar9 + 0x1c) < uVar25) {
          FUN_146934f7c((longlong *)(lVar9 + 0x10));
        }
        lVar9 = *(longlong *)(lVar9 + 0x10);
        *(undefined8 *)(lVar9 + 0xd + local_c0 * 0x18) = *(undefined8 *)((longlong)puVar24 + 0xd);
        uVar5 = puVar24[1];
        uVar6 = puVar24[2];
        uVar7 = puVar24[3];
        puVar1 = (undefined4 *)(lVar9 + local_c0 * 0x18);
        *puVar1 = *puVar24;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        *(undefined1 *)(lVar9 + 0x15 + local_c0 * 0x18) = *(undefined1 *)((longlong)puVar24 + 0x15);
        *(undefined1 *)(lVar9 + 0x16 + local_c0 * 0x18) = *(undefined1 *)((longlong)puVar24 + 0x16);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x10 + local_a0) + uVar10 * 0x18)
             = 0;
        uVar13 = (uint)local_c0;
        uVar23 = (uint)local_b0;
        uVar25 = uVar13 << 0x10 | uVar23;
        plVar2 = (longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 4) + 0x10 + local_a8) +
                 (ulonglong)(uVar13 & 0xffff) * 0x18);
        local_c4 = local_c4 & 0xffff;
        if ((short)local_c8 == (short)DAT_14c967f78 && DAT_14c967f78 >> 0x10 == local_c4) {
          local_c4 = uVar13;
          local_c8 = uVar23;
        }
        *(uint *)(plVar2 + 1) = uVar25;
        uVar12 = *(uint *)((longlong)plVar2 + 0xc);
        lVar9 = *(longlong *)(param_1 + 4);
        uVar21 = *(int *)(lVar9 + 8 + (ulonglong)((uVar12 & 0xffff) << 6)) * 0x400 +
                 (uVar12 >> 0x10);
        if ((uVar17 <= uVar21) && (uVar21 <= uVar16)) {
          uVar12 = ((uVar12 >> 0x10) - uVar15) * 0x10000 | uVar23;
          *(uint *)((longlong)plVar2 + 0xc) = uVar12;
          lVar9 = *(longlong *)(param_1 + 4);
        }
        uVar18 = *(uint *)(plVar2 + 2) >> 0x10;
        uVar21 = *(int *)(lVar9 + 8 + (ulonglong)((*(uint *)(plVar2 + 2) & 0xffff) << 6)) * 0x400 +
                 uVar18;
        if ((uVar17 <= uVar21) && (uVar21 <= uVar16)) {
          *(uint *)(plVar2 + 2) = (uVar18 - uVar15) * 0x10000 | uVar23;
        }
        while( true ) {
          lVar9 = *(longlong *)
                   (*(longlong *)(param_1 + 4) + 0x10 + (ulonglong)((uVar12 & 0xffff) << 6));
          uVar21 = *(uint *)(lVar9 + 0x10 + (ulonglong)(uVar12 >> 0x10) * 0x18);
          uVar18 = uVar21 >> 0x10;
          uVar21 = *(int *)(*(longlong *)(param_1 + 4) + 8 + (ulonglong)((uVar21 & 0xffff) << 6)) *
                   0x400 + uVar18;
          if ((uVar21 < uVar17) || (uVar16 < uVar21)) break;
          lVar9 = lVar9 + (ulonglong)(uVar12 >> 0x10) * 0x18;
          *(uint *)(lVar9 + 0x10) = (uVar18 - uVar15) * 0x10000 | uVar23;
          if ((*(short *)(lVar9 + 0xc) == (short)DAT_14c967f78) &&
             (DAT_14c967f78 >> 0x10 == (uint)*(ushort *)(lVar9 + 0xe))) break;
          uVar12 = *(uint *)(lVar9 + 0xc);
        }
        lVar9 = *plVar2;
        uVar20 = (undefined2)local_c0;
        if (lVar9 != 0) {
          iVar8 = *(int *)(*(longlong *)(param_1 + 4) + 8 + local_a8);
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          *(undefined4 *)(lVar9 + 0x18) = *param_1;
          *(undefined4 *)(lVar9 + 0x1c) = uVar5;
          *(undefined4 *)(lVar9 + 0x20) = uVar6;
          *(undefined4 *)(lVar9 + 0x24) = uVar7;
          *(uint *)(lVar9 + 0x28) = uVar25;
          *(uint *)(lVar9 + 0x2c) = iVar8 * 0x400 + (uVar13 & 0xffff);
          if ((~*(byte *)(lVar9 + 0x31) & 3) == 0) {
            lVar22 = *(longlong *)(param_1 + 4) + local_a8;
            lVar14 = (longlong)*(int *)(lVar22 + 0x28);
            uVar25 = *(int *)(lVar22 + 0x28) + 1;
            *(uint *)(lVar22 + 0x28) = uVar25;
            if (*(uint *)(lVar22 + 0x2c) < uVar25) {
              local_80 = lVar14;
              FUN_14488eebe((longlong *)(lVar22 + 0x20),lVar14);
              uVar20 = (undefined2)local_c0;
              lVar14 = local_80;
            }
            *(undefined2 *)(*(longlong *)(lVar22 + 0x20) + lVar14 * 2) = uVar20;
            *(byte *)((longlong)plVar2 + 0x14) = *(byte *)((longlong)plVar2 + 0x14) & 0xbf;
          }
          if ((*(byte *)(lVar9 + 0x38) & 0xcc) != 0) {
            lVar9 = *(longlong *)(param_1 + 4) + local_a8;
            iVar8 = *(int *)(lVar9 + 0x38);
            *(uint *)(lVar9 + 0x38) = iVar8 + 1U;
            if (*(uint *)(lVar9 + 0x3c) < iVar8 + 1U) {
              FUN_14488eebe((longlong *)(lVar9 + 0x30),iVar8);
              uVar20 = (undefined2)local_c0;
            }
            *(undefined2 *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar8 * 2) = uVar20;
          }
        }
        uVar10 = local_98 + 1;
      } while ((uint)uVar10 < local_b8);
      uVar21 = (uint)local_70;
      uVar13 = local_88;
      uVar23 = local_8c;
      uVar16 = local_c4;
      uVar25 = local_c8;
    }
    else {
      *param_2 = uVar21;
      uVar25 = uVar13;
    }
    param_2 = local_78;
    if (local_b8 != uVar21) {
      local_98 = 1;
      if (1 < (int)local_84) {
        local_98 = (ulonglong)local_84;
      }
      local_c0 = (ulonglong)(uint)((int)local_b0 << 6);
      uVar10 = 0;
      do {
        lVar22 = *(longlong *)(param_1 + 4);
        lVar9 = *(longlong *)(lVar22 + 0x10 + local_c0);
        uVar11 = uVar10 + 1;
        if ((*(ushort *)(lVar9 + 0x10 + uVar10 * 0x18) != local_b2) ||
           (uVar10 != *(ushort *)(lVar9 + 0x12 + uVar10 * 0x18))) {
          uVar12 = (int)uVar10 * 0x10000 + (int)local_b0;
          uVar19 = uVar11 & 0xffffffff;
          uVar15 = uVar12;
          if (*(int *)(lVar22 + 0x18 + local_c0) <= (int)uVar11) {
            uVar15 = *(uint *)(lVar22 + local_c0 + 4);
            if (uVar15 == 0xffffffff) {
              uVar19 = (ulonglong)(DAT_14c967f78 >> 0x10);
              uVar15 = DAT_14c967f78;
            }
            else {
              uVar19 = (ulonglong)*(ushort *)(lVar22 + 0xc + (ulonglong)((uVar15 & 0xffff) << 6));
            }
          }
          lVar9 = lVar9 + uVar10 * 0x18;
          do {
            lVar22 = *(longlong *)(lVar22 + 0x10 + (ulonglong)((uVar15 & 0xffff) << 6));
            *(uint *)(lVar22 + 0xc + (uVar19 & 0xffff) * 0x18) = uVar12;
            uVar21 = *(uint *)(lVar22 + 0x10 + (uVar19 & 0xffff) * 0x18);
            sVar3 = *(short *)(lVar9 + 0x10);
            uVar4 = *(ushort *)(lVar9 + 0x12);
            if ((sVar3 == (short)uVar21) && (uVar21 >> 0x10 == (uint)uVar4)) goto LAB_146932d5c;
            uVar17 = (uVar21 >> 0x10) + 1;
            uVar19 = (ulonglong)uVar17;
            uVar15 = uVar21 & 0xffff;
            lVar22 = *(longlong *)(param_1 + 4);
            if (*(int *)(lVar22 + 0x18 + (ulonglong)(uVar15 << 6)) <= (int)(uVar17 & 0xffff)) {
              uVar21 = *(uint *)((ulonglong)(uVar15 << 6) + lVar22 + 4);
              if (uVar21 == 0xffffffff) {
                uVar19 = (ulonglong)(DAT_14c967f78 >> 0x10);
                uVar15 = DAT_14c967f78 & 0xffff;
                uVar21 = DAT_14c967f78;
              }
              else {
                uVar15 = uVar21 & 0xffff;
                uVar19 = (ulonglong)*(ushort *)(lVar22 + 0xc + (ulonglong)(uVar15 << 6));
              }
            }
          } while ((sVar3 != (short)uVar21) || ((ushort)uVar19 != uVar4));
          *(uint *)(*(longlong *)(lVar22 + 0x10 + (ulonglong)(uVar15 << 6)) + 0xc +
                   (ulonglong)uVar4 * 0x18) = uVar12;
        }
LAB_146932d5c:
        uVar10 = uVar11;
        local_c8 = uVar25;
        local_c4 = uVar16;
      } while (uVar11 != local_98);
    }
  }
  if ((*(longlong **)(param_1 + 0x1a) != (longlong *)0x0) &&
     (((short)uVar13 != (short)DAT_14c967f78 || (DAT_14c967f78 >> 0x10 != (uVar23 & 0xffff))))) {
    local_60 = uVar25 & 0xffff | uVar16 << 0x10;
    local_68 = &local_58;
    (**(code **)(**(longlong **)(param_1 + 0x1a) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146932ee2 FUN_146932ee2 body=38 status=ok
// SIG undefined FUN_146932ee2(void)

undefined8 FUN_146932ee2(undefined8 param_1,int param_2)

{
  FUN_14692ff30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146932f76 FUN_146932f76 body=59 status=ok
// SIG undefined FUN_146932f76(void)

undefined8 FUN_146932f76(longlong *param_1)

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



// FUNCTION 14693306c FUN_14693306c body=59 status=ok
// SIG undefined FUN_14693306c(void)

undefined8 FUN_14693306c(longlong *param_1)

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



// FUNCTION 14693315c FUN_14693315c body=78 status=ok
// SIG undefined FUN_14693315c(void)

void FUN_14693315c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,8,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146933272 FUN_146933272 body=59 status=ok
// SIG undefined FUN_146933272(void)

undefined8 FUN_146933272(longlong *param_1)

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



// FUNCTION 1469332b8 FUN_1469332b8 body=32 status=ok
// SIG undefined FUN_1469332b8(void)

void FUN_1469332b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_142873a18(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 146933328 FUN_146933328 body=88 status=ok
// SIG undefined FUN_146933328(void)

void FUN_146933328(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar1 = param_1;
  }
  FUN_1447157bd(lVar1,*(undefined4 *)(param_1 + 0x128));
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) == param_2) {
    return;
  }
  FUN_1402b1622(param_1,param_2);
  return;
}



// FUNCTION 146933382 FUN_146933382 body=86 status=ok
// SIG undefined FUN_146933382(void)

undefined8 * FUN_146933382(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x14];
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



// FUNCTION 1469333d8 FUN_1469333d8 body=104 status=ok
// SIG undefined FUN_1469333d8(void)

void FUN_1469333d8(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = iVar3;
    FUN_146933440(param_1,*(undefined4 *)(param_1 + 0x108));
    return;
  }
  return;
}



// FUNCTION 146933440 FUN_146933440 body=141 status=ok
// SIG undefined FUN_146933440(void)

void FUN_146933440(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 1469334ce FUN_1469334ce body=110 status=ok
// SIG undefined FUN_1469334ce(void)

void FUN_1469334ce(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 100;
    if (100 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x32c)) {
    *(int *)(param_1 + 0x32c) = (int)uVar2;
    FUN_14693353c(param_1,*(undefined4 *)(param_1 + 0x328),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 14693353c FUN_14693353c body=142 status=ok
// SIG undefined FUN_14693353c(void)

void FUN_14693353c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 800);
  if ((uint)param_3 < 0x65) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 800,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 800),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 800,param_2,param_3,param_4);
  return;
}



// FUNCTION 1469335ca FUN_1469335ca body=157 status=ok
// SIG undefined FUN_1469335ca(void)

void FUN_1469335ca(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_146933668(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *param_2;
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  if (1 < *(int *)(param_1 + 0x108)) {
    uVar3 = (ulonglong)(*(int *)(param_1 + 0x108) - 1);
    uVar4 = (ulonglong)*(uint *)(lVar2 + 4 + uVar3 * 8);
    do {
      uVar5 = (int)uVar3 - 1;
      uVar6 = (ulonglong)(uVar5 >> 1);
      if (*(uint *)(lVar2 + 4 + uVar6 * 8) <= (uint)uVar4) {
        return;
      }
      uVar4 = *(ulonglong *)(lVar2 + uVar3 * 8);
      *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + uVar6 * 8);
      *(ulonglong *)(lVar2 + uVar6 * 8) = uVar4;
      uVar4 = uVar4 >> 0x20;
      uVar3 = uVar6;
    } while (1 < uVar5);
  }
  return;
}



// FUNCTION 146933668 FUN_146933668 body=119 status=ok
// SIG undefined FUN_146933668(void)

void FUN_146933668(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_146933440(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1469336e0 FUN_1469336e0 body=127 status=ok
// SIG undefined FUN_1469336e0(void)

void FUN_1469336e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_2 + 0x16) & 2) == 0) {
    *(byte *)(param_2 + 0x16) = *(byte *)(param_2 + 0x16) | 2;
    uVar1 = *(uint *)(param_2 + 8);
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x330) + 0x10) + 8 +
                    (ulonglong)((uVar1 & 0xffff) << 6));
    iVar3 = *(int *)(param_1 + 0x328);
    *(uint *)(param_1 + 0x328) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x32c) < iVar3 + 1U) {
      FUN_146933760(param_1,iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 800);
    if (*(longlong *)(param_1 + 800) == 0) {
      lVar4 = param_1;
    }
    *(undefined4 *)(lVar4 + (longlong)iVar3 * 8) = *(undefined4 *)(param_2 + 8);
    *(uint *)(lVar4 + 4 + (longlong)iVar3 * 8) = iVar2 * 0x400 + (uVar1 >> 0x10);
  }
  return;
}



// FUNCTION 146933760 FUN_146933760 body=125 status=ok
// SIG undefined FUN_146933760(void)

void FUN_146933760(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x328);
  if (param_2 <= (int)uVar1) {
    uVar4 = 100;
    if (100 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (100 < *(uint *)(param_1 + 0x32c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x32c) = (int)uVar4;
    FUN_14693353c(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1469337de FUN_1469337de body=157 status=ok
// SIG undefined FUN_1469337de(void)

void FUN_1469337de(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
    FUN_14693387c(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *param_2;
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  if (1 < *(int *)(param_1 + 0x88)) {
    uVar3 = (ulonglong)(*(int *)(param_1 + 0x88) - 1);
    uVar4 = (ulonglong)*(uint *)(lVar2 + 4 + uVar3 * 8);
    do {
      uVar5 = (int)uVar3 - 1;
      uVar6 = (ulonglong)(uVar5 >> 1);
      if (*(uint *)(lVar2 + 4 + uVar6 * 8) <= (uint)uVar4) {
        return;
      }
      uVar4 = *(ulonglong *)(lVar2 + uVar3 * 8);
      *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + uVar6 * 8);
      *(ulonglong *)(lVar2 + uVar6 * 8) = uVar4;
      uVar4 = uVar4 >> 0x20;
      uVar3 = uVar6;
    } while (1 < uVar5);
  }
  return;
}



// FUNCTION 14693387c FUN_14693387c body=119 status=ok
// SIG undefined FUN_14693387c(void)

void FUN_14693387c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1469338f4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1469338f4 FUN_1469338f4 body=141 status=ok
// SIG undefined FUN_1469338f4(void)

void FUN_1469338f4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 146933982 FUN_146933982 body=213 status=ok
// SIG undefined FUN_146933982(void)

void FUN_146933982(void *param_1)

{
  undefined8 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  iVar2 = *(int *)((longlong)param_1 + 0x88) + -1;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  }
  else {
    iVar7 = 1;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    pvVar3 = *(void **)((longlong)param_1 + 0x80);
    if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
      pvVar3 = param_1;
    }
    memmove(pvVar3,(void *)((longlong)pvVar3 +
                           (longlong)(*(int *)((longlong)param_1 + 0x88) - iVar2) * 8),
            (longlong)iVar2 << 3);
    iVar4 = *(int *)((longlong)param_1 + 0x88);
    iVar2 = iVar4 + -1;
    *(int *)((longlong)param_1 + 0x88) = iVar2;
    pvVar3 = *(void **)((longlong)param_1 + 0x80);
    if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
      pvVar3 = param_1;
    }
    if (2 < iVar4) {
      iVar4 = 0;
      iVar8 = 0;
      do {
        iVar4 = iVar4 + 2;
        iVar6 = iVar7;
        if ((iVar4 < iVar2) &&
           (*(uint *)((longlong)pvVar3 + (longlong)iVar4 * 8 + 4) <=
            *(uint *)((longlong)pvVar3 + (longlong)iVar7 * 8 + 4))) {
          iVar6 = iVar4;
        }
        lVar5 = (longlong)iVar8;
        lVar9 = (longlong)iVar6;
        if (*(uint *)((longlong)pvVar3 + lVar5 * 8 + 4) <=
            *(uint *)((longlong)pvVar3 + lVar9 * 8 + 4)) {
          return;
        }
        uVar1 = *(undefined8 *)((longlong)pvVar3 + lVar5 * 8);
        *(undefined8 *)((longlong)pvVar3 + lVar5 * 8) =
             *(undefined8 *)((longlong)pvVar3 + lVar9 * 8);
        *(undefined8 *)((longlong)pvVar3 + lVar9 * 8) = uVar1;
        iVar4 = iVar6 * 2;
        iVar7 = iVar6 * 2 + 1;
        iVar8 = iVar6;
      } while (iVar7 < iVar2);
    }
  }
  return;
}



// FUNCTION 146933a58 FUN_146933a58 body=134 status=ok
// SIG undefined FUN_146933a58(void)

void FUN_146933a58(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x108);
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar5 = param_1;
      }
      uVar2 = *(uint *)(lVar5 + 4 + (longlong)iVar4 * 8);
      if ((*(uint *)(param_2 + 8) <= uVar2) && (uVar2 <= *(uint *)(param_2 + 0xc))) {
        uVar2 = *(uint *)(lVar5 + (longlong)iVar4 * 8);
        pbVar1 = (byte *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x10) + 0x10 +
                           (ulonglong)((uVar2 & 0xffff) << 6)) + 0x16 +
                         (ulonglong)(uVar2 >> 0x10) * 0x18);
        *pbVar1 = *pbVar1 & 0xfe;
        FUN_146933cc2(param_1);
        iVar3 = *(int *)(param_1 + 0x108);
        iVar4 = -1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}



// FUNCTION 146933ade FUN_146933ade body=242 status=ok
// SIG undefined FUN_146933ade(void)

void FUN_146933ade(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x328);
  if (0 < (longlong)iVar6) {
    iVar7 = -iVar6;
    uVar5 = (longlong)iVar6;
    do {
      lVar4 = *(longlong *)(param_1 + 800);
      if (*(longlong *)(param_1 + 800) == 0) {
        lVar4 = param_1;
      }
      uVar3 = *(uint *)(lVar4 + -4 + uVar5 * 8);
      if ((*(uint *)(param_2 + 8) <= uVar3) && (uVar3 <= *(uint *)(param_2 + 0xc))) {
        uVar3 = *(uint *)(lVar4 + -8 + uVar5 * 8);
        pbVar1 = (byte *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0x10) + 0x10 +
                           (ulonglong)((uVar3 & 0xffff) << 6)) + 0x16 +
                         (ulonglong)(uVar3 >> 0x10) * 0x18);
        *pbVar1 = *pbVar1 & 0xfd;
        uVar3 = *(uint *)(param_1 + 0x328);
        if (uVar5 != uVar3) {
          iVar6 = iVar7 + uVar3;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          lVar4 = *(longlong *)(param_1 + 800);
          if (*(longlong *)(param_1 + 800) == 0) {
            lVar4 = param_1;
          }
          memmove((void *)(lVar4 + uVar5 * 8 + -8),
                  (void *)(lVar4 + (longlong)(int)(uVar3 - iVar6) * 8),(longlong)iVar6 << 3);
          uVar3 = *(uint *)(param_1 + 0x328);
        }
        *(uint *)(param_1 + 0x328) = uVar3 - 1;
        FUN_146933eb2(param_1);
      }
      iVar7 = iVar7 + 1;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 146933bd0 FUN_146933bd0 body=242 status=ok
// SIG undefined FUN_146933bd0(void)

void FUN_146933bd0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x108);
  if (0 < (longlong)iVar6) {
    iVar7 = -iVar6;
    uVar5 = (longlong)iVar6;
    do {
      lVar4 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar4 = param_1;
      }
      uVar3 = *(uint *)(lVar4 + -4 + uVar5 * 8);
      if ((*(uint *)(param_2 + 8) <= uVar3) && (uVar3 <= *(uint *)(param_2 + 0xc))) {
        uVar3 = *(uint *)(lVar4 + -8 + uVar5 * 8);
        pbVar1 = (byte *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x10) + 0x10 +
                           (ulonglong)((uVar3 & 0xffff) << 6)) + 0x16 +
                         (ulonglong)(uVar3 >> 0x10) * 0x18);
        *pbVar1 = *pbVar1 & 0xfb;
        uVar3 = *(uint *)(param_1 + 0x108);
        if (uVar5 != uVar3) {
          iVar6 = iVar7 + uVar3;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          lVar4 = *(longlong *)(param_1 + 0x100);
          if (*(longlong *)(param_1 + 0x100) == 0) {
            lVar4 = param_1;
          }
          memmove((void *)(lVar4 + uVar5 * 8 + -8),
                  (void *)(lVar4 + (longlong)(int)(uVar3 - iVar6) * 8),(longlong)iVar6 << 3);
          uVar3 = *(uint *)(param_1 + 0x108);
        }
        *(uint *)(param_1 + 0x108) = uVar3 - 1;
        FUN_146933e02(param_1);
      }
      iVar7 = iVar7 + 1;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 146933cc2 FUN_146933cc2 body=319 status=ok
// SIG undefined FUN_146933cc2(void)

void FUN_146933cc2(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  iVar2 = *(int *)(param_1 + 0x108);
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar10 = 1;
    if (iVar4 < 1) {
      iVar10 = iVar4;
    }
    lVar9 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar9 = param_1;
    }
    memmove((void *)(lVar9 + (longlong)(int)param_2 * 8),
            (void *)(lVar9 + (longlong)(iVar2 - iVar10) * 8),(longlong)iVar10 << 3);
    iVar2 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar2 + -1;
  FUN_146933e02(param_1);
  iVar2 = *(int *)(param_1 + 0x108);
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar5 = lVar9;
  if (lVar9 == 0) {
    lVar5 = param_1;
  }
  uVar7 = param_2 * 2 + 1;
  uVar3 = (ulonglong)param_2;
  uVar8 = param_2;
  if ((int)uVar7 < iVar2) {
    do {
      uVar11 = uVar8 * 2 + 2;
      uVar8 = uVar7;
      if (((int)uVar11 < iVar2) &&
         (*(uint *)(lVar5 + 4 + (longlong)(int)uVar11 * 8) <=
          *(uint *)(lVar5 + 4 + (longlong)(int)uVar7 * 8))) {
        uVar8 = uVar11;
      }
      lVar12 = (longlong)(int)uVar3;
      lVar9 = (longlong)(int)uVar8;
      if (*(uint *)(lVar5 + 4 + lVar12 * 8) <= *(uint *)(lVar5 + 4 + lVar9 * 8)) break;
      uVar1 = *(undefined8 *)(lVar5 + lVar12 * 8);
      *(undefined8 *)(lVar5 + lVar12 * 8) = *(undefined8 *)(lVar5 + lVar9 * 8);
      *(undefined8 *)(lVar5 + lVar9 * 8) = uVar1;
      uVar7 = uVar8 * 2 + 1;
      uVar3 = (ulonglong)uVar8;
    } while ((int)uVar7 < iVar2);
    iVar2 = *(int *)(param_1 + 0x108);
    lVar9 = *(longlong *)(param_1 + 0x100);
  }
  uVar3 = (ulonglong)(iVar2 - 1U);
  if ((int)param_2 < (int)(iVar2 - 1U)) {
    uVar3 = (ulonglong)param_2;
  }
  if (lVar9 != 0) {
    param_1 = lVar9;
  }
  if (0 < (int)uVar3) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 4 + uVar3 * 8);
    do {
      uVar8 = (int)uVar3 - 1;
      uVar13 = (ulonglong)(uVar8 >> 1);
      if (*(uint *)(param_1 + 4 + uVar13 * 8) <= (uint)uVar6) {
        return;
      }
      uVar6 = *(ulonglong *)(param_1 + uVar3 * 8);
      *(undefined8 *)(param_1 + uVar3 * 8) = *(undefined8 *)(param_1 + uVar13 * 8);
      *(ulonglong *)(param_1 + uVar13 * 8) = uVar6;
      uVar6 = uVar6 >> 0x20;
      uVar3 = uVar13;
    } while (1 < uVar8);
  }
  return;
}



// FUNCTION 146933e02 FUN_146933e02 body=67 status=ok
// SIG undefined FUN_146933e02(void)

void FUN_146933e02(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146933e46(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
  if (iVar1 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = iVar1;
  FUN_146933440(param_1,*(undefined4 *)(param_1 + 0x108),iVar1);
  return;
}



// FUNCTION 146933e46 FUN_146933e46 body=108 status=ok
// SIG undefined FUN_146933e46(void)

ulonglong FUN_146933e46(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146933eb2 FUN_146933eb2 body=73 status=ok
// SIG undefined FUN_146933eb2(void)

void FUN_146933eb2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146933efc(*(undefined4 *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x32c));
  if (iVar1 == *(int *)(param_1 + 0x32c)) {
    return;
  }
  *(int *)(param_1 + 0x32c) = iVar1;
  FUN_14693353c(param_1,*(undefined4 *)(param_1 + 0x328),iVar1,8);
  return;
}



// FUNCTION 146933efc FUN_146933efc body=108 status=ok
// SIG undefined FUN_146933efc(void)

ulonglong FUN_146933efc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 100;
  if (100 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146933f68 FUN_146933f68 body=85 status=ok
// SIG undefined FUN_146933f68(void)

void FUN_146933f68(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14286195a();
  return;
}



// FUNCTION 146933fbe FUN_146933fbe body=21 status=ok
// SIG undefined FUN_146933fbe(void)

void FUN_146933fbe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_14286195a(param_1,0);
    return;
  }
  return;
}



// FUNCTION 146933fd4 FUN_146933fd4 body=213 status=ok
// SIG undefined FUN_146933fd4(void)

void FUN_146933fd4(void *param_1)

{
  undefined8 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  iVar2 = *(int *)((longlong)param_1 + 0x108) + -1;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  }
  else {
    iVar7 = 1;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    pvVar3 = *(void **)((longlong)param_1 + 0x100);
    if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
      pvVar3 = param_1;
    }
    memmove(pvVar3,(void *)((longlong)pvVar3 +
                           (longlong)(*(int *)((longlong)param_1 + 0x108) - iVar2) * 8),
            (longlong)iVar2 << 3);
    iVar4 = *(int *)((longlong)param_1 + 0x108);
    iVar2 = iVar4 + -1;
    *(int *)((longlong)param_1 + 0x108) = iVar2;
    pvVar3 = *(void **)((longlong)param_1 + 0x100);
    if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
      pvVar3 = param_1;
    }
    if (2 < iVar4) {
      iVar4 = 0;
      iVar8 = 0;
      do {
        iVar4 = iVar4 + 2;
        iVar6 = iVar7;
        if ((iVar4 < iVar2) &&
           (*(uint *)((longlong)pvVar3 + (longlong)iVar4 * 8 + 4) <=
            *(uint *)((longlong)pvVar3 + (longlong)iVar7 * 8 + 4))) {
          iVar6 = iVar4;
        }
        lVar5 = (longlong)iVar8;
        lVar9 = (longlong)iVar6;
        if (*(uint *)((longlong)pvVar3 + lVar5 * 8 + 4) <=
            *(uint *)((longlong)pvVar3 + lVar9 * 8 + 4)) {
          return;
        }
        uVar1 = *(undefined8 *)((longlong)pvVar3 + lVar5 * 8);
        *(undefined8 *)((longlong)pvVar3 + lVar5 * 8) =
             *(undefined8 *)((longlong)pvVar3 + lVar9 * 8);
        *(undefined8 *)((longlong)pvVar3 + lVar9 * 8) = uVar1;
        iVar4 = iVar6 * 2;
        iVar7 = iVar6 * 2 + 1;
        iVar8 = iVar6;
      } while (iVar7 < iVar2);
    }
  }
  return;
}



// FUNCTION 1469340aa FUN_1469340aa body=213 status=ok
// SIG undefined FUN_1469340aa(void)

void FUN_1469340aa(void *param_1)

{
  undefined8 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  iVar2 = *(int *)((longlong)param_1 + 0x108) + -1;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  }
  else {
    iVar7 = 1;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    pvVar3 = *(void **)((longlong)param_1 + 0x100);
    if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
      pvVar3 = param_1;
    }
    memmove(pvVar3,(void *)((longlong)pvVar3 +
                           (longlong)(*(int *)((longlong)param_1 + 0x108) - iVar2) * 8),
            (longlong)iVar2 << 3);
    iVar4 = *(int *)((longlong)param_1 + 0x108);
    iVar2 = iVar4 + -1;
    *(int *)((longlong)param_1 + 0x108) = iVar2;
    pvVar3 = *(void **)((longlong)param_1 + 0x100);
    if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
      pvVar3 = param_1;
    }
    if (2 < iVar4) {
      iVar4 = 0;
      iVar8 = 0;
      do {
        iVar4 = iVar4 + 2;
        iVar6 = iVar7;
        if ((iVar4 < iVar2) &&
           (*(uint *)((longlong)pvVar3 + (longlong)iVar4 * 8 + 4) <=
            *(uint *)((longlong)pvVar3 + (longlong)iVar7 * 8 + 4))) {
          iVar6 = iVar4;
        }
        lVar5 = (longlong)iVar8;
        lVar9 = (longlong)iVar6;
        if (*(uint *)((longlong)pvVar3 + lVar5 * 8 + 4) <=
            *(uint *)((longlong)pvVar3 + lVar9 * 8 + 4)) {
          return;
        }
        uVar1 = *(undefined8 *)((longlong)pvVar3 + lVar5 * 8);
        *(undefined8 *)((longlong)pvVar3 + lVar5 * 8) =
             *(undefined8 *)((longlong)pvVar3 + lVar9 * 8);
        *(undefined8 *)((longlong)pvVar3 + lVar9 * 8) = uVar1;
        iVar4 = iVar6 * 2;
        iVar7 = iVar6 * 2 + 1;
        iVar8 = iVar6;
      } while (iVar7 < iVar2);
    }
  }
  return;
}



// FUNCTION 146934180 FUN_146934180 body=213 status=ok
// SIG undefined FUN_146934180(void)

void FUN_146934180(void *param_1)

{
  undefined8 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  iVar2 = *(int *)((longlong)param_1 + 0x328) + -1;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x328) = 0;
  }
  else {
    iVar7 = 1;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    pvVar3 = *(void **)((longlong)param_1 + 800);
    if (*(void **)((longlong)param_1 + 800) == (void *)0x0) {
      pvVar3 = param_1;
    }
    memmove(pvVar3,(void *)((longlong)pvVar3 +
                           (longlong)(*(int *)((longlong)param_1 + 0x328) - iVar2) * 8),
            (longlong)iVar2 << 3);
    iVar4 = *(int *)((longlong)param_1 + 0x328);
    iVar2 = iVar4 + -1;
    *(int *)((longlong)param_1 + 0x328) = iVar2;
    pvVar3 = *(void **)((longlong)param_1 + 800);
    if (*(void **)((longlong)param_1 + 800) == (void *)0x0) {
      pvVar3 = param_1;
    }
    if (2 < iVar4) {
      iVar4 = 0;
      iVar8 = 0;
      do {
        iVar4 = iVar4 + 2;
        iVar6 = iVar7;
        if ((iVar4 < iVar2) &&
           (*(uint *)((longlong)pvVar3 + (longlong)iVar7 * 8 + 4) <=
            *(uint *)((longlong)pvVar3 + (longlong)iVar4 * 8 + 4))) {
          iVar6 = iVar4;
        }
        lVar5 = (longlong)iVar8;
        lVar9 = (longlong)iVar6;
        if (*(uint *)((longlong)pvVar3 + lVar9 * 8 + 4) <=
            *(uint *)((longlong)pvVar3 + lVar5 * 8 + 4)) {
          return;
        }
        uVar1 = *(undefined8 *)((longlong)pvVar3 + lVar5 * 8);
        *(undefined8 *)((longlong)pvVar3 + lVar5 * 8) =
             *(undefined8 *)((longlong)pvVar3 + lVar9 * 8);
        *(undefined8 *)((longlong)pvVar3 + lVar9 * 8) = uVar1;
        iVar4 = iVar6 * 2;
        iVar7 = iVar6 * 2 + 1;
        iVar8 = iVar6;
      } while (iVar7 < iVar2);
    }
  }
  return;
}



// FUNCTION 146934256 FUN_146934256 body=163 status=ok
// SIG undefined FUN_146934256(void)

ulonglong FUN_146934256(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x328);
  *(uint *)(param_1 + 0x328) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x32c) < iVar1 + 1U) {
    FUN_146933760(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 800);
  if (*(longlong *)(param_1 + 800) == 0) {
    lVar3 = param_1;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = *param_2;
  uVar4 = (ulonglong)(*(int *)(param_1 + 0x328) - 1);
  lVar3 = *(longlong *)(param_1 + 800);
  if (*(longlong *)(param_1 + 800) == 0) {
    lVar3 = param_1;
  }
  if (1 < *(int *)(param_1 + 0x328)) {
    uVar6 = (ulonglong)*(uint *)(lVar3 + 4 + uVar4 * 8);
    uVar5 = uVar4;
    do {
      uVar7 = (int)uVar5 - 1;
      uVar2 = uVar7 >> 1;
      uVar4 = (ulonglong)uVar2;
      if ((uint)uVar6 <= *(uint *)(lVar3 + 4 + uVar4 * 8)) {
        return uVar5;
      }
      uVar6 = *(ulonglong *)(lVar3 + uVar5 * 8);
      *(undefined8 *)(lVar3 + uVar5 * 8) = *(undefined8 *)(lVar3 + uVar4 * 8);
      *(ulonglong *)(lVar3 + uVar4 * 8) = uVar6;
      uVar6 = uVar6 >> 0x20;
      uVar5 = (ulonglong)uVar2;
    } while (1 < uVar7);
  }
  return uVar4;
}



// FUNCTION 1469342fa FUN_1469342fa body=157 status=ok
// SIG undefined FUN_1469342fa(void)

void FUN_1469342fa(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_146933668(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *param_2;
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  if (1 < *(int *)(param_1 + 0x108)) {
    uVar3 = (ulonglong)(*(int *)(param_1 + 0x108) - 1);
    uVar4 = (ulonglong)*(uint *)(lVar2 + 4 + uVar3 * 8);
    do {
      uVar5 = (int)uVar3 - 1;
      uVar6 = (ulonglong)(uVar5 >> 1);
      if (*(uint *)(lVar2 + 4 + uVar6 * 8) <= (uint)uVar4) {
        return;
      }
      uVar4 = *(ulonglong *)(lVar2 + uVar3 * 8);
      *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + uVar6 * 8);
      *(ulonglong *)(lVar2 + uVar6 * 8) = uVar4;
      uVar4 = uVar4 >> 0x20;
      uVar3 = uVar6;
    } while (1 < uVar5);
  }
  return;
}



// FUNCTION 146934398 FUN_146934398 body=147 status=ok
// SIG undefined FUN_146934398(void)

void FUN_146934398(longlong param_1,int param_2)

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



// FUNCTION 14693442c FUN_14693442c body=29 status=ok
// SIG undefined FUN_14693442c(void)

undefined8 FUN_14693442c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146934472 FUN_146934472 body=93 status=ok
// SIG undefined FUN_146934472(void)

void FUN_146934472(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ed0430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1469344d0 FUN_1469344d0 body=93 status=ok
// SIG undefined FUN_1469344d0(void)

void FUN_1469344d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ed0430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14693452e FUN_14693452e body=126 status=ok
// SIG undefined FUN_14693452e(void)

void FUN_14693452e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ed0600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149ed0430;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014693459d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469345ba FUN_1469345ba body=21 status=ok
// SIG undefined FUN_1469345ba(void)

undefined8 FUN_1469345ba(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1469345d2 FUN_1469345d2 body=130 status=ok
// SIG undefined FUN_1469345d2(void)

void FUN_1469345d2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693466e FUN_14693466e body=132 status=ok
// SIG undefined FUN_14693466e(void)

void FUN_14693466e(longlong param_1,int param_2)

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



// FUNCTION 1469346f4 FUN_1469346f4 body=240 status=ok
// SIG undefined FUN_1469346f4(void)

ulonglong FUN_1469346f4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_146934742:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_146934742;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_146934788:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_146934788;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 1469347e4 FUN_1469347e4 body=113 status=ok
// SIG undefined FUN_1469347e4(void)

void FUN_1469347e4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_145e10c41(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146934856 FUN_146934856 body=62 status=ok
// SIG undefined FUN_146934856(void)

void FUN_146934856(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146934894(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146934894 FUN_146934894 body=93 status=ok
// SIG undefined FUN_146934894(void)

ulonglong FUN_146934894(uint param_1,uint param_2)

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



// FUNCTION 1469348f2 FUN_1469348f2 body=312 status=ok
// SIG undefined FUN_1469348f2(void)

undefined1 *
FUN_1469348f2(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             char param_5,undefined1 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = param_6;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0x400000000;
  param_2[0x138] = 0;
  if (param_5 == '\x04') {
    FUN_146934a2c(param_3,param_4,param_2);
  }
  else {
    FUN_146934b98(param_3,param_4,param_2);
  }
  uVar1 = (ulonglong)*(int *)(param_2 + 0x130);
  if (1 < (longlong)uVar1) {
    lVar6 = uVar1 * 0x48;
    lVar8 = 0;
    uVar9 = 0;
    uVar7 = uVar1;
    do {
      uVar7 = uVar7 - 1;
      lVar6 = lVar6 + -0x48;
      if (uVar9 != (uVar7 & 0xffffffff)) {
        puVar3 = *(undefined1 **)(param_2 + 0x128);
        if (*(undefined1 **)(param_2 + 0x128) == (undefined1 *)0x0) {
          puVar3 = param_2 + 8;
        }
        puVar4 = (undefined8 *)(puVar3 + lVar8);
        puVar5 = local_78;
        for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = (undefined8 *)(puVar3 + lVar6);
        puVar5 = (undefined8 *)(puVar3 + lVar8);
        for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = local_78;
        puVar5 = (undefined8 *)(puVar3 + lVar6);
        for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        uVar1 = (ulonglong)*(uint *)(param_2 + 0x130);
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x48;
    } while ((longlong)uVar9 < (longlong)((int)(((uint)(uVar1 >> 0x1f) & 1) + (int)uVar1) >> 1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146934a2c FUN_146934a2c body=363 status=ok
// SIG undefined FUN_146934a2c(void)

ulonglong FUN_146934a2c(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_1b8 [40];
  longlong *local_190;
  undefined1 local_188 [8];
  undefined1 local_180 [288];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_188[0] = (undefined1)param_4;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 1;
  local_190 = param_1;
  FUN_144911a0c(*(undefined8 *)(param_2 + 0x38),param_2,local_188,1);
  if (0 < (int)local_58) {
    lVar10 = 0;
    lVar8 = 0;
    do {
      puVar7 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar7 = local_180;
      }
      lVar3 = *(longlong *)(puVar7 + lVar10 + 0x38);
      plVar4 = *(longlong **)(puVar7 + lVar10 + 0x40);
      if (plVar4 == (longlong *)0x0) {
        if (*local_190 != lVar3) goto LAB_146934b1d;
LAB_146934b50:
        FUN_1402018be(param_3,puVar7 + lVar10);
        uVar9 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        goto LAB_146934b5e;
      }
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      lVar5 = *local_190;
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
      if (lVar5 == lVar3) goto LAB_146934b50;
LAB_146934b1d:
      cVar6 = FUN_146934a2c(local_190,puVar7 + lVar10,param_3,param_4);
      if (cVar6 != '\0') goto LAB_146934b50;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x48;
    } while (lVar8 < (int)local_58);
  }
  uVar9 = 0;
LAB_146934b5e:
  FUN_144715780(local_180);
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 146934b98 FUN_146934b98 body=338 status=ok
// SIG undefined FUN_146934b98(void)

ulonglong FUN_146934b98(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_1b8 [47];
  undefined1 local_189;
  undefined1 local_188 [8];
  undefined1 local_180 [288];
  undefined1 *local_60;
  ulonglong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 1;
  local_189 = param_4;
  local_188[0] = param_4;
  FUN_144911a0c(*(undefined8 *)(param_2 + 0x38),param_2,local_188,1);
  iVar8 = (int)local_58 + 1;
  lVar5 = (local_58 & 0xffffffff) * 0x48;
  do {
    lVar9 = lVar5 + -0x48;
    iVar8 = iVar8 + -1;
    if (iVar8 < 1) goto LAB_146934cac;
    puVar7 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar7 = local_180;
    }
    lVar3 = *(longlong *)(puVar7 + lVar5 + -0x10);
    plVar4 = *(longlong **)(puVar7 + lVar5 + -8);
    if (plVar4 == (longlong *)0x0) {
      lVar5 = *param_1;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      lVar5 = *param_1;
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
  } while ((lVar5 != lVar3) &&
          (cVar6 = FUN_146934b98(param_1,puVar7 + lVar9,param_3,local_189), lVar5 = lVar9,
          cVar6 == '\0'));
  FUN_1402018be(param_3,puVar7 + lVar9);
LAB_146934cac:
  FUN_144715780(local_180);
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)param_3 >> 8),0 < iVar8) & 0xffffffff;
}



// FUNCTION 146934cec FUN_146934cec body=24 status=ok
// SIG undefined FUN_146934cec(void)

void FUN_146934cec(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146934d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146934d04 FUN_146934d04 body=29 status=ok
// SIG undefined FUN_146934d04(void)

undefined8 FUN_146934d04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146934d32 FUN_146934d32 body=101 status=ok
// SIG undefined FUN_146934d32(void)

void FUN_146934d32(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149ed0530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146934d98 FUN_146934d98 body=101 status=ok
// SIG undefined FUN_146934d98(void)

void FUN_146934d98(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149ed0530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146934dfe FUN_146934dfe body=134 status=ok
// SIG undefined FUN_146934dfe(void)

void FUN_146934dfe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149ed0530;
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
                    /* WARNING: Could not recover jumptable at 0x000146934e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146934e96 FUN_146934e96 body=132 status=ok
// SIG undefined FUN_146934e96(void)

void FUN_146934e96(longlong param_1,int param_2)

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



// FUNCTION 146934f1c FUN_146934f1c body=95 status=ok
// SIG undefined FUN_146934f1c(void)

void FUN_146934f1c(longlong param_1,uint param_2)

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



// FUNCTION 146934f7c FUN_146934f7c body=147 status=ok
// SIG undefined FUN_146934f7c(void)

void FUN_146934f7c(longlong param_1,int param_2)

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



// FUNCTION 146935010 FUN_146935010 body=229 status=ok
// SIG undefined FUN_146935010(void)

int * FUN_146935010(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1469350f6 FUN_1469350f6 body=112 status=ok
// SIG undefined FUN_1469350f6(void)

void FUN_1469350f6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 146935166 FUN_146935166 body=104 status=ok
// SIG undefined FUN_146935166(void)

void FUN_146935166(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x40 + 4) = uVar4;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1469351ce FUN_1469351ce body=62 status=ok
// SIG undefined FUN_1469351ce(void)

void FUN_1469351ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14693520c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14693520c FUN_14693520c body=112 status=ok
// SIG undefined FUN_14693520c(void)

ulonglong FUN_14693520c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146935246;
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
LAB_146935246:
  return param_2 & 0xffffffff;
}



// FUNCTION 14693527c FUN_14693527c body=10 status=ok
// SIG undefined FUN_14693527c(void)

undefined4 * FUN_14693527c(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return param_1;
}



// FUNCTION 146935286 FUN_146935286 body=32 status=ok
// SIG undefined FUN_146935286(void)

void FUN_146935286(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  uVar1 = DAT_14c967f78;
  *(undefined4 *)(param_1 + 1) = DAT_14c967f78;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  return;
}



// FUNCTION 1469352a6 FUN_1469352a6 body=105 status=ok
// SIG undefined FUN_1469352a6(void)

undefined8 * FUN_1469352a6(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar3 = *param_1;
  if ((lVar3 == 0) || (plVar4 = *(longlong **)(lVar3 + 0x10), plVar4 == (longlong *)0x0)) {
LAB_1469352ff:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_1469352ff;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    *param_2 = *(undefined8 *)(lVar3 + 8);
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 146935310 FUN_146935310 body=568 status=ok
// SIG undefined FUN_146935310(void)

undefined4 *
FUN_146935310(longlong *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  byte local_90;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = *param_1;
  FUN_146953b4c(param_4);
  cVar3 = *(char *)(lVar6 + 0x90);
  if (cVar3 == '\x01') {
    FUN_1400d7fca(param_4 + 0x120,lVar6 + 0x50);
  }
  uVar4 = *(undefined4 *)(*(longlong *)(param_3 + 2) + 0xe0);
  *(int *)(*(longlong *)(param_3 + 2) + 0xe0) = (int)*(char *)(lVar6 + 0x160);
  local_79 = DAT_14c96b1e0;
  DAT_14c96b1e0 = *(undefined1 *)(lVar6 + 0x161);
  plVar7 = *(longlong **)(lVar6 + 0x48);
  if (plVar7 == (longlong *)0x0) {
LAB_1469353f7:
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_68 = *(undefined8 *)(param_3 + 4);
    local_58 = *(undefined8 *)(param_3 + 8);
    uStack_50 = *(undefined8 *)(param_3 + 10);
    uStack_60 = 0;
  }
  else {
    iVar9 = (int)plVar7[1];
    do {
      if (iVar9 == 0) goto LAB_1469353f7;
      LOCK();
      iVar8 = (int)plVar7[1];
      bVar13 = iVar9 == iVar8;
      if (bVar13) {
        *(int *)(plVar7 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar13);
    uStack_60 = *(undefined8 *)(lVar6 + 0x40);
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_68 = *(undefined8 *)(param_3 + 4);
    local_58 = *(undefined8 *)(param_3 + 8);
    uStack_50 = *(undefined8 *)(param_3 + 10);
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
  bVar10 = uStack_50._4_1_ & 0xfc;
  uStack_50._0_5_ = CONCAT14(*(byte *)(lVar6 + 0x163) >> 1 & 3 | bVar10,(undefined4)uStack_50);
  uVar5 = *(undefined4 *)(lVar6 + 0x15c);
  if (((DAT_14c979cd2 == '\x01') && ((*(byte *)(lVar6 + 0x38) & 0x40) != 0)) &&
     ((*(byte *)(lVar6 + 0x32) & 2) != 0)) {
    *(byte *)(lVar6 + 0x30) = *(byte *)(lVar6 + 0x30) | 0x80;
    if ((*(byte *)(lVar6 + 0x31) & 0x40) == 0) {
      uVar14 = 0x3f800000;
    }
    else {
      uVar14 = *(undefined4 *)(lVar6 + 0x3c);
    }
    FUN_1405d299c(lVar6,uVar14);
  }
  if (*(char *)(lVar6 + 0x162) != '\0') {
    FUN_146953b6a(param_4);
  }
  local_90 = *(byte *)(lVar6 + 0x163) & 1;
  local_98 = lVar6 + 0x118;
  local_a0 = *(undefined4 *)(lVar6 + 0x158);
  puVar11 = &local_78;
  local_a8 = param_4;
  uVar14 = FUN_14016eaf2(lVar6,puVar11,lVar6 + 0x98,lVar6 + 0x108);
  *(undefined4 *)(*(longlong *)(param_3 + 2) + 0xe0) = uVar4;
  if (cVar3 != '\0') {
    FUN_14171ebf2(param_4);
  }
  if (*(char *)(lVar6 + 0x162) != '\0') {
    FUN_146953bc8(param_4);
  }
  uVar12 = CONCAT71((int7)((ulonglong)puVar11 >> 8),*(undefined1 *)(lVar6 + 0x163)) &
           0xffffffffffffff08;
  FUN_142869278(param_4,CONCAT71((int7)(uVar12 >> 8),(byte)uVar12 >> 3));
  *param_2 = uVar5;
  param_2[1] = uVar14;
  *(undefined1 *)(param_2 + 2) = 1;
  DAT_14c96b1e0 = local_79;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14693554a FUN_14693554a body=55 status=ok
// SIG undefined FUN_14693554a(void)

void FUN_14693554a(longlong *param_1,undefined4 param_2)

{
  FUN_142860494(*param_1,(ulonglong)((*(uint *)(param_1 + 2) >> 0x10) * 0x18) +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x10) + 0x10 +
                          (ulonglong)((*(uint *)(param_1 + 2) & 0xffff) << 6)),param_2);
  return;
}



// FUNCTION 146935588 FUN_146935588 body=54 status=ok
// SIG undefined FUN_146935588(void)

longlong FUN_146935588(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    uVar1 = FUN_1406d9ab2();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001469355b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    return lVar3;
  }
  return param_1;
}



// FUNCTION 1469355be FUN_1469355be body=296 status=ok
// SIG undefined FUN_1469355be(void)

ulonglong FUN_1469355be(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar8;
  uint uVar9;
  undefined7 uVar7;
  
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (param_1 != param_2) {
    lVar8 = param_2[4];
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
    }
    if (param_1[4] == lVar8) {
      if (lVar8 != 0) {
        lVar3 = param_2[4];
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
          lVar8 = param_1[4];
        }
        if (lVar8 == lVar3) goto LAB_1469355d1;
      }
      if (((((int)param_1[2] == (int)param_2[2]) &&
           (*(char *)((longlong)param_1 + 0x14) == *(char *)((longlong)param_2 + 0x14))) &&
          (*(char *)((longlong)param_1 + 0x15) == *(char *)((longlong)param_2 + 0x15))) &&
         ((int)param_1[3] == (int)param_2[3])) {
        iVar5 = (int)param_1[1];
        if (iVar5 == (int)param_2[1]) {
          if (iVar5 < 2) goto LAB_1469355d1;
          lVar8 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*param_1 + lVar8);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)(*param_2 + lVar8);
            uVar9 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146935684;
              }
              iVar5 = uVar4 - uVar9;
              goto LAB_1469356b8;
            }
            if (uVar1 == 0) break;
LAB_146935684:
            lVar8 = lVar8 + 2;
          }
          iVar5 = 0;
        }
        else {
          iVar5 = (int)param_2[1] + iVar5 + -1;
        }
LAB_1469356b8:
        uVar6 = CONCAT71(uVar7,iVar5 == 0);
        goto LAB_1469355d1;
      }
    }
    uVar6 = 0;
  }
LAB_1469355d1:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1469356e6 FUN_1469356e6 body=32 status=ok
// SIG undefined FUN_1469356e6(void)

undefined8 FUN_1469356e6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FStandaloneCompositeFont");
  return param_2;
}



// FUNCTION 146935716 FUN_146935716 body=66 status=ok
// SIG undefined FUN_146935716(void)

undefined1 FUN_146935716(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14c968358;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(undefined1 *)(lVar1 + uVar3);
}



// FUNCTION 146935758 FUN_146935758 body=123 status=ok
// SIG undefined FUN_146935758(void)

ulonglong FUN_146935758(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  
  plVar2 = (longlong *)*param_1;
  if ((plVar2 == (longlong *)0x0) || (plVar3 = (longlong *)plVar2[1], plVar3 == (longlong *)0x0)) {
LAB_1469357a7:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469357a7;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (((undefined8 *)*plVar2 == (undefined8 *)0x0) || ((int)param_1[2] == 0)) {
      uVar6 = 0;
    }
    else {
      iVar5 = FUN_144b42f90(*(undefined8 *)*plVar2,0xfffd);
      uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),(int)param_1[2] != iVar5);
    }
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1469357d3 FUN_1469357d3 body=89 status=ok
// SIG undefined FUN_1469357d3(void)

int FUN_1469357d3(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (0.0 <= param_1) {
    fVar3 = param_1;
  }
  fVar2 = 0.0;
  if (0.0 <= param_2) {
    fVar2 = param_2;
  }
  iVar1 = FUN_144b42fe0(((int)(fVar3 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar2 * 65536.0));
  return iVar1 + 0x20 >> 6;
}



// FUNCTION 14693582c FUN_14693582c body=223 status=ok
// SIG undefined FUN_14693582c(void)

ulonglong *
FUN_14693582c(ulonglong *param_1,ulonglong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,float param_6)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  param_1[1] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 0xc) = *(int *)(uVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  fVar6 = logf(param_6);
  *(int *)((longlong)param_1 + 0x1c) = (int)ROUND(fVar6 + fVar6 + -0.5) >> 1;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar4 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = FUN_144a78877(0,uVar4 >> 0x10 ^ uVar4);
  *(undefined4 *)(param_1 + 4) = uVar5;
  uVar5 = FUN_144a78877(uVar5,(int)param_1[2]);
  *(undefined4 *)(param_1 + 4) = uVar5;
  uVar5 = FUN_144a78877(uVar5,*(undefined4 *)((longlong)param_1 + 0x14));
  *(undefined4 *)(param_1 + 4) = uVar5;
  uVar5 = FUN_144a78877(uVar5,(int)param_1[3]);
  *(undefined4 *)(param_1 + 4) = uVar5;
  uVar5 = FUN_144a78877(uVar5,*(undefined4 *)((longlong)param_1 + 0x1c));
  *(undefined4 *)(param_1 + 4) = uVar5;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 14693590c FUN_14693590c body=299 status=ok
// SIG undefined FUN_14693590c(void)

longlong *
FUN_14693590c(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 *local_70;
  longlong *local_68;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = *(uint *)(param_1 + 1);
  if ((ulonglong)uVar5 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  local_4c = param_5;
  local_58 = 0;
  if (0 < (int)uVar5) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      local_68 = &local_58;
      local_78 = (undefined4)lVar4;
      local_70 = &local_4c;
      bVar1 = FUN_146935a38(param_1,param_3,param_4,*param_1 + lVar3);
      bVar6 = (ulonglong)uVar5 - 1 == lVar4;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0xa8;
    } while ((bVar6 | bVar1) != 1);
    if (local_58 != 0) {
      *param_2 = local_58;
      *(undefined4 *)(param_2 + 1) = local_4c;
      iVar2 = *(int *)(local_58 + 0x14);
      goto LAB_146935a1e;
    }
    uVar5 = *(uint *)(param_1 + 1);
  }
  iVar2 = (int)param_1[0xb];
  if (*(char *)(*param_1 + 0x23 + (longlong)(int)(uVar5 - 1) * 0xa8) == '\0') {
    iVar2 = iVar2 + *(int *)((longlong)param_1 + 0x5c);
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
LAB_146935a1e:
  *(int *)((longlong)param_2 + 0xc) = iVar2;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146935a38 FUN_146935a38 body=328 status=ok
// SIG undefined FUN_146935a38(void)

ulonglong FUN_146935a38(longlong *param_1,undefined8 param_2,int param_3,longlong param_4,
                       uint param_5,int *param_6,longlong *param_7)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_88 [36];
  int local_64;
  longlong local_60;
  undefined1 local_58 [2];
  short local_56;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = 0;
  if (*(char *)(param_4 + 0x21) != '\0') {
    lVar7 = (longlong)(int)param_5;
    lVar5 = *param_1;
    iVar6 = 0;
    lVar10 = lVar7 * 0xa8;
    local_64 = param_3;
    local_60 = param_4;
    do {
      if (*(char *)(lVar5 + 0x24 + lVar10) == '\x01') {
        FUN_140c765f8(param_2,local_58,lVar5 + lVar10,&DAT_14c96b1c0);
        sVar3 = local_56;
      }
      else {
        sVar3 = 0;
      }
      iVar4 = (int)*(short *)(lVar5 + 0x18 + lVar10);
      iVar6 = iVar6 + sVar3 + iVar4;
      uVar8 = (int)uVar9 + iVar4;
      uVar9 = (ulonglong)uVar8;
      if (((int)param_5 < -1) || (lVar7 = lVar7 + 1, (int)param_1[1] <= lVar7)) break;
      piVar1 = (int *)(lVar5 + 0x14 + lVar10);
      lVar5 = *param_1;
      piVar2 = (int *)(lVar5 + 0xbc + lVar10);
      lVar10 = lVar10 + 0xa8;
    } while (*piVar1 == *piVar2);
    iVar4 = iVar6 / 2;
    if (1 < *(byte *)(local_60 + 0x22)) {
      iVar4 = iVar6;
    }
    if (local_64 < iVar4 + *param_6) {
      lVar5 = local_60;
      if (((0 < (int)param_5) && (*(char *)(local_60 + 0x23) != '\0')) &&
         ((int)param_5 <= (int)param_1[1])) {
        lVar5 = *param_1 + (ulonglong)param_5 * 0xa8 + -0xa8;
      }
      *param_7 = lVar5;
      uVar9 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
    }
    else {
      *param_6 = *param_6 + uVar8;
      uVar9 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146935b82 FUN_146935b82 body=366 status=ok
// SIG undefined FUN_146935b82(void)

longlong *
FUN_146935b82(longlong *param_1,longlong *param_2,undefined8 param_3,int param_4,int param_5,
             undefined8 param_6,int param_7,char param_8)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  code *local_80;
  longlong **local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_2c = param_7;
  iVar3 = 0;
  local_38 = 0;
  local_40 = 0;
  if (0 < param_4 && param_8 == '\x01') {
    uVar4 = ~*(uint *)(param_1 + 0xb) + param_4;
    if ((((-1 < (int)uVar4) && ((int)uVar4 < (int)param_1[0xd])) &&
        (piVar5 = (int *)((ulonglong)uVar4 * 0x18 + param_1[0xc]), piVar5 != (int *)0x0)) &&
       (lVar6 = (longlong)*piVar5, iVar3 = 0, lVar6 != -1)) {
      iVar3 = (int)*(char *)(*param_1 + 0x20 + lVar6 * 0xa8);
    }
    local_2c = iVar3 + param_7;
  }
  local_78 = &local_70;
  local_60 = (undefined1 *)&param_6;
  local_58 = &local_2c;
  local_50 = &local_38;
  local_48 = &local_40;
  local_80 = FUN_14286739e;
  local_70 = param_1;
  local_68 = param_3;
  cVar1 = FUN_146935cf2(param_1,param_4,param_5);
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_146935c8b;
  }
  if (local_38 == 0) {
    if ((local_40 == 0) || (*(char *)(local_40 + 0x23) == '\0')) {
      uVar2 = 0;
      iVar3 = 0;
      if ((param_5 < (int)param_1[0xb]) ||
         (param_4 = param_5, (int)param_1[0xb] + *(int *)((longlong)param_1 + 0x5c) < param_5))
      goto LAB_146935c8b;
    }
    else {
      uVar2 = 0;
      iVar3 = 0;
      if ((param_4 < (int)param_1[0xb]) ||
         ((int)param_1[0xb] + *(int *)((longlong)param_1 + 0x5c) < param_4)) goto LAB_146935c8b;
    }
  }
  else {
    param_4 = *(int *)(local_38 + 0x14);
    iVar3 = local_2c;
  }
  *param_2 = local_38;
  *(int *)(param_2 + 1) = iVar3;
  *(int *)((longlong)param_2 + 0xc) = param_4;
  uVar2 = 1;
LAB_146935c8b:
  *(undefined1 *)(param_2 + 2) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146935cf2 FUN_146935cf2 body=569 status=ok
// SIG undefined FUN_146935cf2(void)

ulonglong FUN_146935cf2(longlong *param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_88 [36];
  uint local_64;
  uint local_60;
  uint local_5c;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar14 = CONCAT71((int7)(local_48 >> 8),2);
  if (param_2 == param_3) goto LAB_146935d18;
  uVar13 = *(uint *)(param_1 + 0xb);
  uVar5 = param_2 - uVar13;
  if (((int)uVar5 < 0) || ((int)param_1[0xd] <= (int)uVar5)) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = (uint *)((ulonglong)uVar5 * 0x18 + param_1[0xc]);
  }
  uVar5 = ~uVar13 + param_3;
  if (((int)uVar5 < 0) || ((int)param_1[0xd] <= (int)uVar5)) {
    puVar11 = (uint *)0x0;
  }
  else {
    puVar11 = (uint *)((ulonglong)uVar5 * 0x18 + param_1[0xc]);
  }
  if (puVar7 != (uint *)0x0) {
    uVar14 = (ulonglong)(int)*puVar7;
    if (uVar14 != 0xffffffffffffffff) {
      puVar2 = puVar7;
      if (puVar11 == (uint *)0x0) {
        if ((uint)*(byte *)(*param_1 + 0x21 + uVar14 * 0xa8) +
            *(int *)(*param_1 + 0x14 + uVar14 * 0xa8) != param_3) goto LAB_146935f25;
LAB_146935de3:
        puVar7 = puVar2;
        uVar6 = puVar7[4];
      }
      else {
        uVar5 = *puVar11;
        if (uVar5 == 0xffffffff) {
          if ((uint)*(byte *)(*param_1 + 0x21 + uVar14 * 0xa8) +
              *(int *)(*param_1 + 0x14 + uVar14 * 0xa8) == param_3) goto LAB_146935de3;
          uVar5 = *puVar11;
          if (uVar5 == 0xffffffff) goto LAB_146935f25;
        }
        puVar2 = puVar11;
        if ((int)*puVar7 <= (int)uVar5) goto LAB_146935de3;
        uVar6 = puVar7[4];
        uVar14 = (ulonglong)uVar5;
      }
      if (0 < (int)uVar6) {
        puVar7 = (uint *)(*(longlong *)(puVar7 + 2) + (ulonglong)uVar6 * 4 + -4);
      }
      uVar5 = *puVar7;
      uVar6 = *(int *)((longlong)param_1 + 0x5c) + uVar13;
      iVar12 = (int)uVar14;
      if ((int)uVar5 < iVar12) {
        uVar14 = (ulonglong)
                 CONCAT31((int3)(uVar13 >> 8),(param_2 == uVar13 && uVar6 == param_3) * '\x02');
      }
      else {
        bVar16 = uVar6 == param_3;
        bVar17 = param_2 == uVar13;
        local_5c = uVar5 + 1;
        lVar9 = (longlong)iVar12 * 0xa8;
        bVar15 = false;
        lVar8 = (longlong)iVar12;
        local_64 = param_3;
        local_60 = param_2;
        local_58 = (longlong)(int)uVar5;
        do {
          lVar1 = *param_1;
          if ((bVar17 == false) || (bVar10 = bVar17, bVar16 == false)) {
            uVar13 = *(uint *)(lVar1 + 0x14 + lVar9);
            bVar10 = true;
            if (uVar13 != local_60) {
              bVar10 = bVar17;
            }
            bVar4 = true;
            if (*(byte *)(lVar1 + 0x21 + lVar9) + uVar13 != local_64) {
              bVar4 = bVar16;
            }
            if (bVar16 == false) {
              bVar16 = bVar4;
            }
            if (bVar17 != false) {
              bVar16 = bVar4;
              bVar10 = bVar17;
            }
          }
          bVar17 = bVar10;
          local_4c = (int)uVar14;
          cVar3 = (*(code *)*param_4)(param_4[1],lVar1 + lVar9,&local_4c);
          if (cVar3 == '\0') break;
          bVar15 = local_58 <= lVar8;
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          lVar9 = lVar9 + 0xa8;
          lVar8 = lVar8 + 1;
        } while (local_5c != uVar13);
        uVar14 = 1;
        if (bVar15) {
          uVar14 = (ulonglong)(byte)((bVar17 & bVar16) * '\x02');
        }
      }
      goto LAB_146935d18;
    }
  }
LAB_146935f25:
  uVar14 = 0;
LAB_146935d18:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146935f2c FUN_146935f2c body=402 status=ok
// SIG undefined FUN_146935f2c(void)

longlong * FUN_146935f2c(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  longlong local_98;
  int *local_90;
  longlong *local_80;
  int *local_78;
  int local_70;
  int local_6c;
  code *local_68;
  undefined8 **ppuStack_60;
  code *local_50;
  undefined8 **ppuStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_6c = param_4 - param_3;
  local_68 = (code *)0x0;
  ppuStack_60 = (longlong **)0x0;
  if (local_6c < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_6c);
  }
  if (local_6c != 0) {
    FUN_1406d9c90(&local_68,local_6c);
  }
  local_80 = (longlong *)&local_68;
  ppuStack_48 = &local_80;
  local_50 = FUN_1428673e4;
  local_78 = &local_70;
  local_70 = param_3;
  cVar3 = FUN_146935cf2(param_1,param_3,param_4);
  if (cVar3 == '\x02') {
    plVar4 = (longlong *)FUN_14001cc68(0x88,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_149eda170;
    local_a0 = *(undefined1 *)(param_1 + 0x14);
    local_a8 = *(undefined8 *)(param_1 + 0x18);
    local_50 = local_68;
    ppuStack_48 = ppuStack_60;
    local_68 = (code *)0x0;
    ppuStack_60 = (longlong **)0x0;
    local_98 = param_1 + 0x20;
    local_90 = &local_70;
    FUN_140af815e(plVar4 + 2,&local_50,*(undefined2 *)(param_1 + 0x10),
                  *(undefined2 *)(param_1 + 0x12));
    *param_2 = (longlong)(plVar4 + 2);
    param_2[1] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_140af7df7(local_68,(ulonglong)ppuStack_60 & 0xffffffff);
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469360c0 FUN_1469360c0 body=62 status=ok
// SIG undefined FUN_1469360c0(void)

void FUN_1469360c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1448304f6(param_1,param_2,param_4);
  FUN_1448304f6(param_1,param_3,param_4);
  FUN_14483063e();
  return;
}



// FUNCTION 1469360fe FUN_1469360fe body=9 status=ok
// SIG undefined FUN_1469360fe(void)

void FUN_1469360fe(longlong param_1)

{
  FUN_14574f6a4(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 146936108 FUN_146936108 body=9 status=ok
// SIG undefined FUN_146936108(void)

void FUN_146936108(longlong param_1)

{
  FUN_14574f520(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 146936112 FUN_146936112 body=105 status=ok
// SIG undefined FUN_146936112(void)

void FUN_146936112(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"Culture for localization was changed");
  (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469361ea FUN_1469361ea body=103 status=ok
// SIG undefined FUN_1469361ea(void)

bool FUN_1469361ea(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = 0x1a0;
  iVar4 = param_2 - *(int *)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x1a8) <= param_2) {
    lVar2 = 0x1b0;
    iVar3 = iVar4 - *(int *)(param_1 + 0x1b8);
    param_2 = iVar4;
    if (*(int *)(param_1 + 0x1b8) <= iVar4) {
      lVar2 = 0x1c0;
      param_2 = iVar3;
      if (*(int *)(param_1 + 0x1c8) <= iVar3) {
        uVar1 = 0;
        goto LAB_14693622f;
      }
    }
  }
  uVar1 = (uint)*(byte *)(*(longlong *)(param_1 + lVar2) + (longlong)param_2);
LAB_14693622f:
  iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1e0) + (ulonglong)(uVar1 << 4)) +
                      0x18))();
  return iVar4 == 0;
}



// FUNCTION 146936252 FUN_146936252 body=94 status=ok
// SIG undefined FUN_146936252(void)

undefined8
FUN_146936252(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined1 param_9)

{
  FUN_1428629c6(*(undefined8 *)(param_1 + 0x50),param_2,param_3,param_4,param_5,param_6,param_7,
                param_8,param_9);
  return param_2;
}



// FUNCTION 1469362b0 FUN_1469362b0 body=154 status=ok
// SIG undefined FUN_1469362b0(void)

undefined8 FUN_1469362b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  int iVar5;
  
  uVar1 = (**(code **)(*DAT_14c968338 + 0xb0))();
  uVar3 = (undefined1)uVar1;
  iVar5 = 0;
  if (2 < uVar1) {
    uVar3 = 0;
  }
  puVar2 = (undefined8 *)FUN_1447a1f4a(param_1 + 0x260);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
    iVar5 = *(int *)(puVar2 + 1) + -1;
  }
  FUN_140a6a694(*(undefined8 *)(param_1 + 0x50),param_2,puVar4,0,iVar5,param_3,param_4,0,uVar3);
  return param_2;
}



// FUNCTION 14693634a FUN_14693634a body=9 status=ok
// SIG undefined FUN_14693634a(void)

void FUN_14693634a(longlong param_1)

{
  FUN_146936354(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 146936354 FUN_146936354 body=241 status=ok
// SIG undefined FUN_146936354(void)

void FUN_146936354(longlong param_1,longlong param_2,float param_3,undefined2 *param_4,
                  undefined2 *param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = FUN_140af7eac(*(undefined8 *)(param_1 + 0x10));
  lVar4 = FUN_14011f70a(param_1,uVar3);
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 8) & 1) == 0)) {
    *param_4 = 0;
    uVar1 = 0;
  }
  else {
    fVar5 = 0.0;
    if (0.0 <= *(float *)(param_2 + 0x48)) {
      fVar5 = *(float *)(param_2 + 0x48);
    }
    fVar6 = 0.0;
    if (0.0 <= param_3) {
      fVar6 = param_3;
    }
    iVar2 = FUN_144b42fe0(((int)(fVar5 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar6 * 65536.0));
    FUN_14011ecb7(lVar4,iVar2 + 0x20 >> 6);
    iVar2 = FUN_144b42fe0((int)*(short *)(lVar4 + 0x74),
                          *(undefined4 *)(*(longlong *)(lVar4 + 0x80) + 0x20));
    *param_4 = (short)(iVar2 + 0x20U >> 6);
    iVar2 = FUN_144b42fe0((int)*(short *)(lVar4 + 0x76),
                          *(undefined4 *)(*(longlong *)(lVar4 + 0x80) + 0x20));
    uVar1 = (undefined2)(iVar2 + 0x20U >> 6);
  }
  *param_5 = uVar1;
  return;
}



// FUNCTION 146936446 FUN_146936446 body=9 status=ok
// SIG undefined FUN_146936446(void)

void FUN_146936446(longlong param_1)

{
  FUN_146936450(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 146936450 FUN_146936450 body=406 status=ok
// SIG undefined FUN_146936450(void)

void FUN_146936450(longlong param_1,longlong param_2,float param_3,undefined2 *param_4,
                  undefined2 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  
  lVar7 = FUN_140af7eac(*(undefined8 *)(param_1 + 0x10));
  lVar8 = FUN_14011f70a(param_1,lVar7);
  if ((lVar8 == 0) || ((*(byte *)(lVar8 + 8) & 1) == 0)) {
    *param_4 = 0;
    uVar4 = 0;
  }
  else {
    fVar12 = 0.0;
    if (0.0 <= *(float *)(param_2 + 0x48)) {
      fVar12 = *(float *)(param_2 + 0x48);
    }
    fVar13 = 0.0;
    if (0.0 <= param_3) {
      fVar13 = param_3;
    }
    iVar5 = FUN_144b42fe0(((int)(fVar12 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar13 * 65536.0));
    FUN_14011ecb7(lVar8,iVar5 + 0x20 >> 6);
    uVar1 = *(undefined4 *)(*(longlong *)(lVar8 + 0x80) + 0x20);
    lVar2 = *(longlong *)(lVar7 + 0x20);
    bVar11 = true;
    if (lVar2 == 0) {
      uVar6 = 0x3c;
    }
    else {
      uVar9 = FUN_1406d9ab2();
      plVar10 = (longlong *)FUN_144718840(lVar2,uVar9);
      uVar6 = (**(code **)(*plVar10 + 0x50))(plVar10);
      lVar7 = *(longlong *)(lVar7 + 0x20);
      if (lVar7 != 0) {
        uVar9 = FUN_1406d9ab2();
        plVar10 = (longlong *)FUN_144718840(lVar7,uVar9);
        cVar3 = (**(code **)(*plVar10 + 0x28))(plVar10);
        bVar11 = cVar3 == '\0';
      }
    }
    if ((*(uint *)(lVar8 + 8) & 1) == 0) {
      iVar5 = 0;
      if ((*(uint *)(lVar8 + 8) & 2) != 0) {
        iVar5 = *(int *)(*(longlong *)(lVar8 + 0x80) + 0x2c);
      }
    }
    else if (bVar11) {
      iVar5 = (int)*(short *)(lVar8 + 0x6e);
    }
    else {
      iVar5 = *(int *)(lVar8 + 100) - *(int *)(lVar8 + 0x5c);
    }
    uVar6 = FUN_144b42fe0(iVar5,uVar6);
    uVar6 = FUN_144b555e0(uVar6,100);
    iVar5 = FUN_144b42fe0(uVar6,uVar1);
    *param_4 = (short)(iVar5 + 0x20U >> 6);
    iVar5 = FUN_144b42fe0((int)*(short *)(lVar8 + 0x76),
                          *(undefined4 *)(*(longlong *)(lVar8 + 0x80) + 0x20));
    uVar4 = (undefined2)(iVar5 + 0x20U >> 6);
  }
  *param_5 = uVar4;
  return;
}



// FUNCTION 1469365e6 FUN_1469365e6 body=287 status=ok
// SIG undefined FUN_1469365e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1469365e6(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c968470) {
    FUN_144b3d300(&DAT_14c968470);
    if (DAT_14c968470 == -1) {
      DAT_14c968440 = 0;
      _DAT_14c968448 = 0;
      DAT_14c968420 = 0;
      _DAT_14c968428 = 0;
      _DAT_14c96844c = 0xffffffff00000080;
      _DAT_14c968454 = 0;
      DAT_14c968460 = 0;
      _DAT_14c968468 = 0;
      atexit(FUN_142864221);
      _Init_thread_footer(&DAT_14c968470);
    }
  }
  FUN_1406d8dea(param_1,&local_30,param_2);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  puVar3 = &DAT_14c968420;
  if (local_30 != 0) {
    puVar3 = (undefined8 *)(local_30 + 200);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146936706 FUN_146936706 body=234 status=ok
// SIG undefined FUN_146936706(void)

void FUN_146936706(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_14c968098;
  cVar2 = FUN_140d2ceff();
  if (cVar2 != '\0') {
    FUN_140898514(lVar1 + 0xd8,0);
  }
  lVar1 = DAT_14c968358;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  if (*(char *)(lVar1 + uVar4) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))();
  }
  if (DAT_14c75ed3c != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    FUN_14695089a(lVar1);
    FUN_146950a22(lVar1 + 0x50);
    FUN_146950baa(lVar1 + 0xa0);
    lVar1 = *(longlong *)(param_1 + 0x40);
    FUN_14694f598(lVar1 + 8);
    FUN_14694f71c(lVar1 + 0x58);
  }
  FUN_1458b1ae6(param_1 + 0x60);
  FUN_1458b1b26(param_1 + 0xb0);
  FUN_14694e8d8(param_1 + 0x100);
  FUN_14694ea5c(param_1 + 0x150);
  return;
}



// FUNCTION 1469367f0 FUN_1469367f0 body=9 status=ok
// SIG undefined FUN_1469367f0(void)

void FUN_1469367f0(longlong param_1)

{
  FUN_1469367fa(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 1469367fa FUN_1469367fa body=311 status=ok
// SIG undefined FUN_1469367fa(void)

longlong FUN_1469367fa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x58);
  lVar2 = param_1 + 0x68;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x80);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 == iVar4) && (uStack_50 == lVar2)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      if (*(longlong *)(*local_80 + 0x20 + (longlong)iStack_64 * 0x40) == param_2) {
        lVar3 = *(longlong *)(*(longlong *)(*local_80 + (longlong)iStack_64 * 0x40 + 0x28) + 8);
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (longlong)*(int *)(lVar3 + 0xc);
        }
        lVar5 = lVar5 + lVar3;
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 146936932 FUN_146936932 body=250 status=ok
// SIG undefined FUN_146936932(void)

void FUN_146936932(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x30);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (uStack_40 != lVar2)) {
    do {
      FUN_1406db586(*(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x20));
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar3));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146936a2e FUN_146936a2e body=621 status=ok
// SIG undefined FUN_146936a2e(void)

longlong FUN_146936a2e(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar7 = (longlong)(int)((longlong *)*param_2)[1];
  uVar10 = 0;
  local_b0 = param_1;
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)*param_2;
    local_b8 = lVar7 * 0x30 + lVar6;
    plVar1 = param_3 + 2;
    lVar7 = 0;
    do {
      local_a8 = lVar7;
      local_a0 = lVar6;
      local_98 = uVar10;
      plVar5 = (longlong *)FUN_1469365e6(local_b0,lVar6 + 8);
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      uVar10 = 0;
      iVar12 = 0;
      local_60 = plVar1;
      if ((int)param_3[5] != 0) {
        FUN_1449c0562(&local_68);
        iVar12 = (int)param_3[5];
      }
      local_78 = local_58;
      uVar3 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = param_3;
      if ((local_78._4_4_ != iVar12) || (local_60 != plVar1)) {
        uVar10 = 0;
        iVar4 = local_78._4_4_;
        local_78 = uVar3;
        do {
          iVar11 = 0;
          if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
            lVar7 = *(longlong *)(*local_90 + (longlong)iVar4 * 0x10);
            uVar2 = (uint)((ulonglong)lVar7 >> 0x10);
            uVar9 = (uint)lVar7 & 0xffff;
            plVar8 = (longlong *)plVar5[8];
            if ((longlong *)plVar5[8] == (longlong *)0x0) {
              plVar8 = plVar5 + 7;
            }
            iVar4 = *(int *)((longlong)plVar8 +
                            (ulonglong)
                            ((int)plVar5[9] - 1U &
                            (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar9) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
            iVar11 = 0;
            if (iVar4 != -1) {
              do {
                if (*(longlong *)(*plVar5 + (longlong)iVar4 * 0x10) == lVar7) {
                  iVar11 = 1;
                  goto LAB_146936b98;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar5 + 8);
              } while (iVar4 != -1);
              iVar11 = 0;
            }
          }
LAB_146936b98:
          uVar10 = (ulonglong)(uint)((int)uVar10 + iVar11);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar4 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != param_3 || (local_80 != plVar1 || local_78._4_4_ != iVar12));
      }
      local_78 = uVar3;
      lVar7 = lVar6 + 8;
      if ((int)uVar10 <= (int)local_98 && local_a8 != 0) {
        lVar7 = local_a8;
        uVar10 = local_98 & 0xffffffff;
      }
      lVar6 = local_a0 + 0x30;
    } while (lVar6 != local_b8);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146936c9c FUN_146936c9c body=67 status=ok
// SIG undefined FUN_146936c9c(void)

undefined8 FUN_146936c9c(longlong param_1,char param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20);
    if (param_2 != '\0') {
      uVar2 = FUN_144b42fe0(*(undefined4 *)(param_1 + 100),uVar1);
      return uVar2;
    }
    uVar2 = FUN_144b42fe0((int)*(short *)(param_1 + 0x6a),uVar1);
    return uVar2;
  }
  if ((*(uint *)(param_1 + 8) & 2) == 0) {
    return 0;
  }
  uVar2 = FUN_144b42fe0(*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x24),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20));
  return uVar2;
}



// FUNCTION 146936ce0 FUN_146936ce0 body=95 status=ok
// SIG undefined FUN_146936ce0(void)

undefined8 * FUN_146936ce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  
  uVar1 = FUN_1400dbadc();
  plVar2 = (longlong *)FUN_1415bdc84(uVar1);
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  uVar1 = 0;
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0xe8))(plVar2,puVar3,0);
  *param_1 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
  }
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 146936d40 FUN_146936d40 body=40 status=ok
// SIG undefined FUN_146936d40(void)

void FUN_146936d40(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  return;
}



// FUNCTION 146936d68 FUN_146936d68 body=85 status=ok
// SIG undefined FUN_146936d68(void)

int FUN_146936d68(longlong param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar2 = (longlong *)*plVar1;
  if ((plVar2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2), cVar3 == '\0')) {
    return 0;
  }
  if (param_4 != 0) {
    plVar1 = (longlong *)*plVar1;
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_3,param_4);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  return param_4;
}



// FUNCTION 146936dbe FUN_146936dbe body=146 status=ok
// SIG undefined FUN_146936dbe(void)

undefined8 *
FUN_146936dbe(undefined8 *param_1,undefined8 param_2,undefined4 param_3,float param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *param_1 = param_2;
  fVar3 = 0.0;
  if (0.0 <= param_4) {
    fVar3 = param_4;
  }
  fVar2 = 0.0;
  if (0.0 <= param_5) {
    fVar2 = param_5;
  }
  *(undefined4 *)(param_1 + 1) = param_3;
  iVar1 = FUN_144b42fe0(((int)(fVar3 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar2 * 65536.0));
  *(int *)((longlong)param_1 + 0xc) = iVar1 + 0x20 >> 6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



// FUNCTION 146936e50 FUN_146936e50 body=523 status=ok
// SIG undefined FUN_146936e50(void)

undefined8 FUN_146936e50(longlong *param_1,uint param_2,undefined8 *param_3)

{
  short sVar1;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  int iVar20;
  longlong *plVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined1 auStack_a8 [44];
  uint local_7c;
  uint *local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = param_2;
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    plVar21 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[10];
    }
    iVar20 = *(int *)((longlong)plVar21 + (ulonglong)((int)param_1[0xb] - 1U & param_2) * 4);
    if (iVar20 != -1) {
      lVar23 = param_1[2];
      do {
        lVar19 = lVar23 + (longlong)iVar20 * 0x60;
        if (*(uint *)(lVar23 + (longlong)iVar20 * 0x60) == param_2) {
          if ((undefined4 *)(lVar19 + 8) != (undefined4 *)0x0 && lVar19 != 0) {
            uVar2 = *(undefined4 *)(lVar19 + 8);
            uVar3 = *(undefined4 *)(lVar19 + 0xc);
            uVar4 = *(undefined4 *)(lVar19 + 0x10);
            uVar5 = *(undefined4 *)(lVar19 + 0x14);
            uVar6 = *(undefined4 *)(lVar19 + 0x18);
            uVar7 = *(undefined4 *)(lVar19 + 0x1c);
            uVar8 = *(undefined4 *)(lVar19 + 0x20);
            uVar9 = *(undefined4 *)(lVar19 + 0x24);
            uVar10 = *(undefined4 *)(lVar19 + 0x28);
            uVar11 = *(undefined4 *)(lVar19 + 0x2c);
            uVar12 = *(undefined4 *)(lVar19 + 0x30);
            uVar13 = *(undefined4 *)(lVar19 + 0x34);
            uVar14 = *(undefined4 *)(lVar19 + 0x3c);
            uVar15 = *(undefined4 *)(lVar19 + 0x40);
            uVar16 = *(undefined4 *)(lVar19 + 0x44);
            *(undefined4 *)(param_3 + 6) = *(undefined4 *)(lVar19 + 0x38);
            *(undefined4 *)((longlong)param_3 + 0x34) = uVar14;
            *(undefined4 *)(param_3 + 7) = uVar15;
            *(undefined4 *)((longlong)param_3 + 0x3c) = uVar16;
            *(undefined4 *)(param_3 + 4) = uVar10;
            *(undefined4 *)((longlong)param_3 + 0x24) = uVar11;
            *(undefined4 *)(param_3 + 5) = uVar12;
            *(undefined4 *)((longlong)param_3 + 0x2c) = uVar13;
            *(undefined4 *)(param_3 + 2) = uVar6;
            *(undefined4 *)((longlong)param_3 + 0x14) = uVar7;
            *(undefined4 *)(param_3 + 3) = uVar8;
            *(undefined4 *)((longlong)param_3 + 0x1c) = uVar9;
            *(undefined4 *)param_3 = uVar2;
            *(undefined4 *)((longlong)param_3 + 4) = uVar3;
            *(undefined4 *)(param_3 + 1) = uVar4;
            *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
            FUN_14694a7d6(param_3 + 8,lVar19 + 0x48);
            goto LAB_146937055;
          }
          break;
        }
        iVar20 = *(int *)(lVar19 + 0x58);
      } while (iVar20 != -1);
    }
  }
  lVar19 = param_1[1];
  lVar23 = *param_1;
  FUN_14011ecb7(lVar23,*(undefined4 *)((longlong)param_1 + 0xc));
  iVar20 = FUN_144b54d40(lVar23,param_2,(int)lVar19);
  if (iVar20 == 0) {
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    plVar21 = param_3 + 8;
    if (param_3[8] != 0) {
      FUN_1400020a8();
    }
    *plVar21 = 0;
    param_3[9] = 0;
    *(undefined2 *)param_3 = *(undefined2 *)(*param_1 + 0x6e);
    lVar23 = *(longlong *)(*param_1 + 0x78);
    uVar22 = *(undefined8 *)(lVar23 + 0x30);
    uVar17 = *(undefined8 *)(lVar23 + 0x38);
    uVar18 = *(undefined8 *)(lVar23 + 0x48);
    *(undefined8 *)((longlong)param_3 + 0x14) = *(undefined8 *)(lVar23 + 0x40);
    *(undefined8 *)((longlong)param_3 + 0x1c) = uVar18;
    *(undefined8 *)((longlong)param_3 + 4) = uVar22;
    *(undefined8 *)((longlong)param_3 + 0xc) = uVar17;
    lVar23 = *(longlong *)(*param_1 + 0x80);
    uVar2 = *(undefined4 *)(lVar23 + 0x18);
    uVar3 = *(undefined4 *)(lVar23 + 0x1c);
    uVar4 = *(undefined4 *)(lVar23 + 0x20);
    uVar5 = *(undefined4 *)(lVar23 + 0x24);
    uVar6 = *(undefined4 *)(lVar23 + 0x28);
    uVar7 = *(undefined4 *)(lVar23 + 0x2c);
    uVar8 = *(undefined4 *)(lVar23 + 0x30);
    *(undefined4 *)(param_3 + 6) = *(undefined4 *)(lVar23 + 0x24);
    *(undefined4 *)((longlong)param_3 + 0x34) = uVar6;
    *(undefined4 *)(param_3 + 7) = uVar7;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uVar8;
    *(undefined4 *)((longlong)param_3 + 0x24) = uVar2;
    *(undefined4 *)(param_3 + 5) = uVar3;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uVar4;
    *(undefined4 *)(param_3 + 6) = uVar5;
    sVar1 = *(short *)(*(longlong *)(*param_1 + 0x78) + 0x9a);
    if (0 < sVar1) {
      FUN_14694f8fe(plVar21,(int)sVar1);
      lVar23 = 0;
      do {
        lVar19 = *(longlong *)(*(longlong *)(*param_1 + 0x78) + 0xa0);
        iVar20 = *(int *)(param_3 + 9);
        *(uint *)(param_3 + 9) = iVar20 + 1U;
        if (*(uint *)((longlong)param_3 + 0x4c) < iVar20 + 1U) {
          FUN_14694f954(plVar21,iVar20);
        }
        *(undefined8 *)(*plVar21 + (longlong)iVar20 * 8) = *(undefined8 *)(lVar19 + lVar23 * 8);
        lVar23 = lVar23 + 1;
      } while ((int)sVar1 != lVar23);
    }
    local_78 = &local_7c;
    local_70 = param_3;
    FUN_14694f9da(param_1 + 2,local_64);
LAB_146937055:
    uVar22 = 1;
  }
  else {
    uVar22 = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22;
}


