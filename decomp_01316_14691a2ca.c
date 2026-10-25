// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14691a2ca FUN_14691a2ca body=309 status=ok
// SIG undefined FUN_14691a2ca(void)

undefined8
FUN_14691a2ca(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1428503e2(&local_30,param_1 + 0x100,param_2);
  if (local_30 != 0) {
    cVar5 = FUN_14692b452(local_30);
    plVar3 = local_28;
    if (cVar5 == '\0') {
      *param_5 = 0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x18);
      if (local_28 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
        local_38 = local_28;
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      uVar6 = (**(code **)(*plVar4 + 0x1c8))(plVar4,local_40);
      plVar4 = local_38;
      *param_5 = uVar6;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691a51e FUN_14691a51e body=309 status=ok
// SIG undefined FUN_14691a51e(void)

undefined8 FUN_14691a51e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 *in_stack_00000030;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1428503e2(&local_30,param_1 + 0x100,param_2);
  if (local_30 != 0) {
    cVar5 = FUN_14692b452(local_30);
    plVar3 = local_28;
    if (cVar5 == '\0') {
      *in_stack_00000030 = 0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x18);
      if (local_28 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
        local_38 = local_28;
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      uVar6 = (**(code **)(*plVar4 + 0x1d8))(plVar4,local_40);
      plVar4 = local_38;
      *in_stack_00000030 = uVar6;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691a654 FUN_14691a654 body=52 status=ok
// SIG undefined FUN_14691a654(void)

undefined8 FUN_14691a654(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((0xe < param_1 - 0x200U) &&
     (((0xd < param_1 - 0xa0U || ((0x3bf1U >> (param_1 - 0xa0U & 0x1f) & 1) == 0)) &&
      (3 < param_1 - 0x2a0U)))) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14691a688 FUN_14691a688 body=149 status=ok
// SIG undefined FUN_14691a688(void)

void FUN_14691a688(void)

{
  BOOL BVar1;
  undefined1 auStackY_88 [32];
  tagMSG local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStackY_88;
  BVar1 = PeekMessageW(&local_58,(HWND)0x0,0,0,1);
  if (BVar1 != 0) {
    do {
      TranslateMessage(&local_58);
      DispatchMessageW(&local_58);
      BVar1 = PeekMessageW(&local_58,(HWND)0x0,0,0,1);
    } while (BVar1 != 0);
  }
  if ((local_28 ^ (ulonglong)auStackY_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691a71e FUN_14691a71e body=98 status=ok
// SIG undefined FUN_14691a71e(void)

void FUN_14691a71e(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x33) == '\x01') && (0 < *(int *)(param_1 + 0x80))) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + lVar3);
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 14691a780 FUN_14691a780 body=107 status=ok
// SIG undefined FUN_14691a780(void)

void FUN_14691a780(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x33) == '\x01') && (0 < *(int *)(param_1 + 0x80))) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      puVar1 = (undefined8 *)
               (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x78) + lVar3) + 0x58))();
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,param_2,param_3,param_4);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 14691a7ec FUN_14691a7ec body=107 status=ok
// SIG undefined FUN_14691a7ec(void)

void FUN_14691a7ec(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xe8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xec) < iVar2 + 1U) {
    FUN_14692a41a((longlong *)(param_1 + 0xe0),iVar2);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar2 * 0x48);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  FUN_14692a348(puVar1 + 4,param_2 + 4);
  *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  puVar1[0x10] = param_2[0x10];
  return;
}



// FUNCTION 14691a858 FUN_14691a858 body=54 status=ok
// SIG undefined FUN_14691a858(void)

void FUN_14691a858(void)

{
  int iVar1;
  
  do {
    iVar1 = ShowCursor(1);
  } while (iVar1 < 0);
  ReleaseCapture();
  ClipCursor((RECT *)0x0);
  FUN_142855b70(&DAT_14c86aa70);
  return;
}



// FUNCTION 14691a88e FUN_14691a88e body=285 status=ok
// SIG undefined FUN_14691a88e(void)

void FUN_14691a88e(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  HWND hWnd;
  undefined1 auStack_68 [32];
  longlong local_48;
  _CONSOLE_SCREEN_BUFFER_INFO local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c872ce0 != 0) && (1 < *(int *)(param_1 + 0x18))) {
    lVar1 = param_1 + 0x10;
    hWnd = GetConsoleWindow();
    if (hWnd != (HWND)0x0) {
      GetWindowRect(hWnd,(LPRECT)&local_40);
      local_48 = lVar1;
      FUN_141301e58(DAT_14c872ce0,L"DebugWindows",L"ConsoleX",local_40.dwSize);
      local_48 = lVar1;
      FUN_141301e58(DAT_14c872ce0,L"DebugWindows",L"ConsoleY",local_40.dwCursorPosition);
    }
    if (*(HANDLE *)(param_1 + 0x20) != (HANDLE)0x0) {
      BVar2 = GetConsoleScreenBufferInfo(*(HANDLE *)(param_1 + 0x20),&local_40);
      if (BVar2 != 0) {
        local_48 = lVar1;
        FUN_141301e58(DAT_14c872ce0,L"DebugWindows",L"ConsoleWidth",(int)local_40.dwSize.X);
        local_48 = lVar1;
        FUN_141301e58(DAT_14c872ce0,L"DebugWindows",L"ConsoleHeight",(int)local_40.dwSize.Y);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691a9ac FUN_14691a9ac body=1683 status=ok
// SIG undefined FUN_14691a9ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14691a9ac(longlong param_1,char param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  BOOL BVar4;
  HANDLE hConsoleOutput;
  HWND pHVar5;
  LPCWSTR lpConsoleTitle;
  COORD dwSize;
  int iVar6;
  int Y;
  undefined1 auStackY_148 [32];
  LPCWSTR local_108;
  undefined8 uStack_100;
  tagRECT local_f0;
  _CONSOLE_SCREEN_BUFFER_INFO local_de;
  int local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  SMALL_RECT local_b8;
  longlong local_b0;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStackY_148;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_14691a88e(param_1);
      *(undefined8 *)(param_1 + 0x20) = 0;
      FreeConsole();
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x20) == 0) {
    BVar4 = AllocConsole();
    if (BVar4 == 0) {
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    else {
      FUN_142797a0c();
    }
    hConsoleOutput = GetStdHandle(0xfffffff5);
    *(HANDLE *)(param_1 + 0x20) = hConsoleOutput;
    if (hConsoleOutput != (HANDLE)0xffffffffffffffff) {
      local_bc = 0xa0;
      local_c0 = 4000;
      cVar1 = '\0';
      local_c4 = 0;
      local_c8 = 0;
      if (DAT_14c872ce0 == 0) {
        dwSize.X = 0xa0;
        dwSize.Y = 4000;
        cVar2 = '\0';
      }
      else {
        FUN_1414d73b6(DAT_14c872ce0,L"DebugWindows",L"ConsoleWidth",&local_bc);
        FUN_1414d73b6(DAT_14c872ce0,L"DebugWindows",L"ConsoleHeight",&local_c0);
        cVar1 = FUN_1414d73b6(DAT_14c872ce0,L"DebugWindows",L"ConsoleX",&local_c4);
        cVar2 = FUN_1414d73b6(DAT_14c872ce0,L"DebugWindows",L"ConsoleY",&local_c8);
        dwSize = (COORD)(local_c0 << 0x10 | local_bc & 0xffff);
        hConsoleOutput = *(HANDLE *)(param_1 + 0x20);
      }
      SetConsoleScreenBufferSize(hConsoleOutput,dwSize);
      BVar4 = GetConsoleScreenBufferInfo(*(HANDLE *)(param_1 + 0x20),&local_de);
      if (BVar4 != 0) {
        local_b8.Bottom = local_de.srWindow.Bottom;
        local_b8._0_4_ = local_de.srWindow._0_4_;
        local_b8.Right = local_de.dwSize.X + -1;
        SetConsoleWindowInfo(*(HANDLE *)(param_1 + 0x20),1,&local_b8);
      }
      pHVar5 = GetConsoleWindow();
      GetWindowRect(pHVar5,&local_f0);
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar3 = FUN_141369f9a(&DAT_14c846b20,L"ConsoleX=",&local_c4);
      if (cVar1 == '\0' && cVar3 == '\0') {
        local_c4 = local_f0.left;
      }
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar1 = FUN_141369f9a(&DAT_14c846b20,L"ConsoleY=",&local_c8);
      if (cVar2 == '\0' && cVar1 == '\0') {
        local_c8 = local_f0.top;
      }
      local_108 = (LPCWSTR)0x0;
      uStack_100 = 0;
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar1 = FUN_14063337c(&DAT_14c846b20,L"ConsoleTitle=",&local_108,1);
      if (cVar1 != '\0') {
        lpConsoleTitle = local_108;
        if ((int)uStack_100 == 0) {
          lpConsoleTitle = L"";
        }
        SetConsoleTitleW(lpConsoleTitle);
      }
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      FUN_140c2d49a();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c967360) && (FUN_144b3d300(&DAT_14c967360), DAT_14c967360 == -1))
      {
        DAT_14c96735c = local_f0.right - local_f0.left;
        _Init_thread_footer(&DAT_14c967360);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c967368) && (FUN_144b3d300(&DAT_14c967368), DAT_14c967368 == -1))
      {
        DAT_14c967364 = local_f0.bottom - local_f0.top;
        _Init_thread_footer(&DAT_14c967368);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c967370) && (FUN_144b3d300(&DAT_14c967370), DAT_14c967370 == -1))
      {
        DAT_14c96736c = (int)uStack_88 - (int)local_90;
        _Init_thread_footer(&DAT_14c967370);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c967378) && (FUN_144b3d300(&DAT_14c967378), DAT_14c967378 == -1))
      {
        DAT_14c967374 = uStack_88._4_4_ - local_90._4_4_;
        _Init_thread_footer(&DAT_14c967378);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c967380) && (FUN_144b3d300(&DAT_14c967380), DAT_14c967380 == -1))
      {
        iVar6 = DAT_14c96735c / 2;
        if (DAT_14c96736c / 2 <= DAT_14c96735c / 2) {
          iVar6 = DAT_14c96736c / 2;
        }
        _DAT_14c96737c = 0x32;
        if (0x32 < iVar6) {
          _DAT_14c96737c = iVar6;
        }
        _Init_thread_footer(&DAT_14c967380);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c967388) && (FUN_144b3d300(&DAT_14c967388), DAT_14c967388 == -1))
      {
        iVar6 = DAT_14c967364 / 2;
        if (DAT_14c967374 / 2 <= DAT_14c967364 / 2) {
          iVar6 = DAT_14c967374 / 2;
        }
        _DAT_14c967384 = 0x32;
        if (0x32 < iVar6) {
          _DAT_14c967384 = iVar6;
        }
        _Init_thread_footer(&DAT_14c967388);
      }
      if (local_c4 < (int)local_90) {
        local_c4 = (int)local_90;
      }
      iVar6 = local_c4;
      if ((int)uStack_88 - _DAT_14c96737c <= local_c4) {
        iVar6 = (int)uStack_88 - _DAT_14c96737c;
      }
      if (local_c8 < local_90._4_4_) {
        local_c8 = local_90._4_4_;
      }
      Y = local_c8;
      if (uStack_88._4_4_ - _DAT_14c967384 <= local_c8) {
        Y = uStack_88._4_4_ - _DAT_14c967384;
      }
      local_c8 = Y;
      local_c4 = iVar6;
      pHVar5 = GetConsoleWindow();
      SetWindowPos(pHVar5,(HWND)0x0,iVar6,Y,0,0,0x405);
      FUN_140ecb711(local_b0,uStack_a8 & 0xffffffff);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_108 != (LPCWSTR)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStackY_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14691b04a FUN_14691b04a body=367 status=ok
// SIG undefined FUN_14691b04a(void)

void FUN_14691b04a(longlong param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  wchar_t local_38 [2];
  short sStack_34;
  short sStack_32;
  undefined8 uStack_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)param_2 + lVar2);
    uVar5 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)&DAT_149dfb77a + lVar2);
    if (uVar4 != uVar6) break;
    if (uVar4 == 0) goto LAB_14691b1a3;
LAB_14691b08c:
    lVar2 = lVar2 + 2;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_14691b08c;
  }
  if (uVar4 != uVar6) {
    _local_38 = 0;
    uStack_30 = 0;
    uVar4 = 0;
    local_28 = 0;
    wcsncpy(local_38,param_2,8);
    local_28 = 0;
    if (local_38[0] != L'\0') {
      pwVar3 = local_38;
      wVar1 = local_38[0];
      do {
        pwVar3 = pwVar3 + 1;
        pwVar3[-1] = wVar1 + L'￐';
        wVar1 = *pwVar3;
      } while (wVar1 != L'\0');
      uVar4 = (ushort)(local_38[0] != L'\0') << 2;
    }
    SetConsoleTextAttribute
              (*(HANDLE *)(param_1 + 0x20),
               (ushort)(uStack_30._6_2_ != 0) << 7 |
               (ushort)(uStack_30._4_2_ != 0) << 4 | (ushort)(uStack_30._2_2_ != 0) << 5 |
               (ushort)((short)uStack_30 != 0) << 6 |
               ((ushort)(sStack_34 != 0) | (ushort)(local_38[1] != 0) * 2 | uVar4) +
               (ushort)(sStack_32 != 0) * 8);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14691b1a3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14691b1d0 FUN_14691b1d0 body=31 status=ok
// SIG undefined FUN_14691b1d0(void)

void FUN_14691b1d0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))();
  return;
}



// FUNCTION 14691b1f0 FUN_14691b1f0 body=61 status=ok
// SIG undefined FUN_14691b1f0(void)

undefined1 FUN_14691b1f0(longlong param_1)

{
  undefined1 uVar1;
  BOOL BVar2;
  DWORD DVar3;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    BVar2 = AttachConsole(0xffffffff);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 5) {
        return 1;
      }
    }
    else {
      FreeConsole();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x29);
  }
  return uVar1;
}



// FUNCTION 14691b236 FUN_14691b236 body=494 status=ok
// SIG undefined FUN_14691b236(void)

void FUN_14691b236(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  PostMessageW(*(HWND *)(param_1 + 0xd8),0x10,0,0);
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x2e0),1000);
  CloseHandle(*(HANDLE *)(param_1 + 0x2e0));
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  CloseHandle(*(HANDLE *)(param_1 + 0x2d8));
  do {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x1b8 + lVar1 * 8));
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_1400020a8();
  }
  FUN_14691da56(*(undefined8 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c8));
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x298));
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 0x248);
  FUN_14691da93(*(undefined8 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x240));
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_1400020a8();
  }
  FUN_14691d9f6(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14691ddbe(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14691ddbe(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014691b41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 14691b424 FUN_14691b424 body=837 status=ok
// SIG undefined FUN_14691b424(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14691b424(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_3ce8 [32];
  void **local_3cc8;
  undefined4 local_3cbc;
  undefined4 local_3cb8;
  undefined4 local_3cb4;
  void *local_3cb0;
  int local_3ca8;
  undefined4 local_3ca4;
  undefined2 *local_3ca0;
  int local_3c98;
  undefined4 local_3c94;
  undefined2 *local_3c90;
  int local_3c88;
  undefined4 local_3c84;
  undefined1 local_3c80 [15416];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3ce8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x30));
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_3ce8);
  }
  uVar2 = *(undefined4 *)(lVar7 + 0x2f4);
  local_3cbc = *(undefined4 *)(lVar7 + 0x2f8);
  uVar3 = *(undefined4 *)(lVar7 + 0x2fc);
  uVar4 = *(undefined4 *)(lVar7 + 0x300);
  local_3cb8 = *(undefined4 *)(lVar7 + 0x304);
  local_3cb4 = *(undefined4 *)(lVar7 + 0x308);
  local_3c90 = (undefined2 *)0x0;
  local_3c88 = *(int *)(lVar7 + 0x318);
  lVar8 = (longlong)local_3c88;
  pvVar5 = *(void **)(lVar7 + 0x310);
  if (lVar8 == 0) {
    local_3c84 = 0;
  }
  else {
    FUN_1446dd670(&local_3c90,local_3c88,0);
    memcpy(local_3c90,pvVar5,lVar8 * 2);
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  local_3ca0 = (undefined2 *)0x0;
  local_3c98 = *(int *)(lVar7 + 0x328);
  lVar8 = (longlong)local_3c98;
  pvVar5 = *(void **)(lVar7 + 800);
  if (lVar8 == 0) {
    local_3c94 = 0;
  }
  else {
    FUN_1446dd670(&local_3ca0,local_3c98,0);
    memcpy(local_3ca0,pvVar5,lVar8 * 2);
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  uVar1 = *(undefined1 *)(lVar7 + 0x340);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x30));
  FUN_14691b788();
  pvVar5 = DAT_14c967398;
  local_3cb0 = (void *)0x0;
  lVar7 = (longlong)DAT_14c9673a0;
  local_3ca8 = DAT_14c9673a0;
  if (lVar7 == 0) {
    local_3ca4 = 0;
  }
  else {
    FUN_1446dd670(&local_3cb0,DAT_14c9673a0,0);
    memcpy(local_3cb0,pvVar5,lVar7 * 2);
  }
  FUN_1468047ba(local_3c80,0,0,0);
  FUN_1427777c2(local_3c80,&local_3cb0,0,0);
  local_3cc8 = &local_3cb0;
  FUN_141301e58(local_3c80,L"GameConsoleWindows",L"ConsoleX",uVar3);
  local_3cc8 = &local_3cb0;
  FUN_141301e58(local_3c80,L"GameConsoleWindows",L"ConsoleY",uVar4);
  local_3cc8 = &local_3cb0;
  FUN_141301e58(local_3c80,L"GameConsoleWindows",L"ConsoleWidth",uVar2);
  local_3cc8 = &local_3cb0;
  FUN_141301e58(local_3c80,L"GameConsoleWindows",L"ConsoleHeight",local_3cbc);
  local_3cc8 = &local_3cb0;
  FUN_141301e58(local_3c80,L"GameConsoleWindows",L"ConsoleColor",local_3cb8);
  local_3cc8 = &local_3cb0;
  FUN_14593bea2(local_3c80,L"GameConsoleWindows",L"ConsoleExpanded",
                CONCAT71((int7)((ulonglong)param_1 >> 8),uVar1) & 0xffffffff);
  local_3cc8 = &local_3cb0;
  FUN_141301e58(local_3c80,L"GameConsoleWindows",L"ConsoleShowDateTime",local_3cb4);
  puVar6 = &DAT_149dfb77a;
  if (local_3c88 != 0) {
    puVar6 = local_3c90;
  }
  local_3cc8 = &local_3cb0;
  FUN_1410abc14(local_3c80,L"GameConsoleWindows",L"IncludeFilter",puVar6);
  puVar6 = &DAT_149dfb77a;
  if (local_3c98 != 0) {
    puVar6 = local_3ca0;
  }
  local_3cc8 = &local_3cb0;
  FUN_1410abc14(local_3c80,L"GameConsoleWindows",L"ExcludeFilter",puVar6);
  FUN_140d6d8de(local_3c80,0,&local_3cb0);
  FUN_1457585f6(local_3c80);
  if (local_3cb0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_3ca0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_3c90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3ce8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691b788 FUN_14691b788 body=278 status=ok
// SIG undefined FUN_14691b788(void)

void FUN_14691b788(void)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9673a8) {
    FUN_144b3d300(&DAT_14c9673a8);
    if (DAT_14c9673a8 == -1) {
      FUN_145cbe856(&local_40);
      FUN_1412cfe60(&local_30,&local_40,(local_38 == 0) + '\a');
      FUN_1401aebe8(&local_30,L"Config",6);
      FUN_1412cfe60(&DAT_14c967398,&local_30,(local_28 == 0) + '\x11');
      FUN_1401aebe8(&DAT_14c967398,L"DebugConsole.ini",0x10);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142850a38);
      _Init_thread_footer(&DAT_14c9673a8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691b8a0 FUN_14691b8a0 body=2197 status=ok
// SIG undefined FUN_14691b8a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14691b8a0(longlong param_1,char param_2)

{
  LPVOID lpParameter;
  void *_Src;
  char cVar1;
  char cVar2;
  char cVar3;
  HANDLE pvVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStackY_3d98 [32];
  longlong local_3d68;
  longlong lStack_3d60;
  void *local_3d50;
  int local_3d48;
  undefined4 local_3d44;
  undefined1 local_3d39;
  longlong local_3d38;
  undefined8 uStack_3d30;
  longlong local_3d28;
  undefined8 uStack_3d20;
  undefined4 local_3d10;
  undefined4 local_3d0c;
  int local_3d08;
  int local_3d04;
  int local_3d00;
  int local_3cfc;
  longlong local_3cf8;
  longlong lStack_3cf0;
  ulonglong local_3ce8;
  undefined8 local_3ce0;
  undefined8 uStack_3cd8;
  undefined8 local_3cd0;
  undefined8 uStack_3cc8;
  undefined8 local_3cb8;
  undefined8 uStack_3cb0;
  undefined8 local_3ca8;
  undefined8 uStack_3ca0;
  undefined8 local_3c98;
  undefined8 uStack_3c90;
  undefined8 local_3c88;
  undefined8 uStack_3c80;
  undefined1 local_3c70 [15416];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStackY_3d98;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_14691b424(param_1);
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x2f0) = 0;
    }
  }
  else {
    local_3cfc = 1000;
    local_3d00 = 700;
    local_3d04 = 0;
    local_3d08 = 0;
    local_3d0c = 0;
    local_3d10 = 0;
    local_3d28 = 0;
    uStack_3d20 = 0;
    local_3d38 = 0;
    uStack_3d30 = 0;
    local_3d39 = 0;
    FUN_14691b788();
    _Src = DAT_14c967398;
    local_3d50 = (void *)0x0;
    lVar6 = (longlong)DAT_14c9673a0;
    local_3d48 = DAT_14c9673a0;
    if (lVar6 == 0) {
      local_3d44 = 0;
    }
    else {
      FUN_1446dd670(&local_3d50,DAT_14c9673a0,0);
      memcpy(local_3d50,_Src,lVar6 * 2);
    }
    FUN_1468047ba(local_3c70,1,0,0);
    FUN_1427777c2(local_3c70,&local_3d50,0,0);
    FUN_1414d73b6(local_3c70,L"GameConsoleWindows",L"ConsoleWidth",&local_3cfc);
    FUN_1414d73b6(local_3c70,L"GameConsoleWindows",L"ConsoleHeight",&local_3d00);
    cVar1 = FUN_1414d73b6(local_3c70,L"GameConsoleWindows",L"ConsoleX",&local_3d04);
    cVar2 = FUN_1414d73b6(local_3c70,L"GameConsoleWindows",L"ConsoleY",&local_3d08);
    FUN_1414d73b6(local_3c70,L"GameConsoleWindows",L"ConsoleColor",&local_3d0c);
    FUN_14052bb08(local_3c70,L"GameConsoleWindows",L"ConsoleExpanded",&local_3d39);
    FUN_1414d73b6(local_3c70,L"GameConsoleWindows",L"ConsoleShowDateTime",&local_3d10);
    FUN_1449da20c(local_3c70,L"GameConsoleWindows",L"IncludeFilter",&local_3d28);
    FUN_1449da20c(local_3c70,L"GameConsoleWindows",L"ExcludeFilter",&local_3d38);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar3 = FUN_141369f9a(&DAT_14c846b20,L"ConsoleX=",&local_3d04);
    if (cVar1 == '\0' && cVar3 == '\0') {
      local_3d04 = -0x80000000;
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_141369f9a(&DAT_14c846b20,L"ConsoleY=",&local_3d08);
    if (cVar2 == '\0' && cVar1 == '\0') {
      local_3d08 = -0x80000000;
    }
    local_3d68 = 0;
    lStack_3d60 = 0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14063337c(&DAT_14c846b20,L"ConsoleTitle=",&local_3d68,1);
    if (cVar1 == '\0') {
      FUN_146830748();
      FUN_140002266(&local_3cf8,L"%s Console (%s) - %s  (F1 for help)",L"Client",&DAT_14c764000);
      if (local_3d68 != 0) {
        FUN_1400020a8();
      }
      local_3d68 = local_3cf8;
      lStack_3d60 = lStack_3cf0;
    }
    local_3cd0 = 0;
    uStack_3cc8 = 0;
    local_3ce0 = 0;
    uStack_3cd8 = 0;
    lStack_3cf0 = 0;
    local_3ce8 = 0;
    local_3cb8 = 0;
    uStack_3cb0 = 0;
    local_3ca8 = 0;
    uStack_3ca0 = 0;
    local_3c98 = 0;
    uStack_3c90 = 0;
    local_3c88 = 0;
    uStack_3c80 = 0;
    FUN_140c2d49a();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9673b0) && (FUN_144b3d300(&DAT_14c9673b0), DAT_14c9673b0 == -1)) {
      DAT_14c9673ac = local_3cfc;
      _Init_thread_footer(&DAT_14c9673b0);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9673b8) && (FUN_144b3d300(&DAT_14c9673b8), DAT_14c9673b8 == -1)) {
      DAT_14c9673b4 = local_3d00;
      _Init_thread_footer(&DAT_14c9673b8);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9673c0) && (FUN_144b3d300(&DAT_14c9673c0), DAT_14c9673c0 == -1)) {
      DAT_14c9673bc = (int)uStack_3cc8 - (int)local_3cd0;
      _Init_thread_footer(&DAT_14c9673c0);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9673c8) && (FUN_144b3d300(&DAT_14c9673c8), DAT_14c9673c8 == -1)) {
      DAT_14c9673c4 = uStack_3cc8._4_4_ - local_3cd0._4_4_;
      _Init_thread_footer(&DAT_14c9673c8);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9673d0) && (FUN_144b3d300(&DAT_14c9673d0), DAT_14c9673d0 == -1)) {
      iVar7 = DAT_14c9673ac / 2;
      if (DAT_14c9673bc / 2 <= DAT_14c9673ac / 2) {
        iVar7 = DAT_14c9673bc / 2;
      }
      _DAT_14c9673cc = 0x32;
      if (0x32 < iVar7) {
        _DAT_14c9673cc = iVar7;
      }
      _Init_thread_footer(&DAT_14c9673d0);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9673d8) && (FUN_144b3d300(&DAT_14c9673d8), DAT_14c9673d8 == -1)) {
      iVar7 = DAT_14c9673b4 / 2;
      if (DAT_14c9673c4 / 2 <= DAT_14c9673b4 / 2) {
        iVar7 = DAT_14c9673c4 / 2;
      }
      _DAT_14c9673d4 = 0x32;
      if (0x32 < iVar7) {
        _DAT_14c9673d4 = iVar7;
      }
      _Init_thread_footer(&DAT_14c9673d8);
    }
    if (!SBORROW4(0,local_3d04)) {
      if (local_3d04 < (int)local_3cd0) {
        local_3d04 = (int)local_3cd0;
      }
      if ((int)uStack_3cc8 - _DAT_14c9673cc <= local_3d04) {
        local_3d04 = (int)uStack_3cc8 - _DAT_14c9673cc;
      }
    }
    if (!SBORROW4(0,local_3d08)) {
      if (local_3d08 < local_3cd0._4_4_) {
        local_3d08 = local_3cd0._4_4_;
      }
      if (uStack_3cc8._4_4_ - _DAT_14c9673d4 <= local_3d08) {
        local_3d08 = uStack_3cc8._4_4_ - _DAT_14c9673d4;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x30));
    lVar6 = *(longlong *)(param_1 + 0x28);
    lVar5 = lVar6;
    if (lVar6 == 0) {
      lVar5 = FUN_14001cc68(0x348,0x10);
      FUN_14691c136(lVar5,param_1);
      *(longlong *)(param_1 + 0x28) = lVar5;
    }
    *(int *)(lVar5 + 0x2fc) = local_3d04;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x300) = local_3d08;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x2f4) = local_3cfc;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x2f8) = local_3d00;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x304) = local_3d0c;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x308) = local_3d10;
    iVar7 = (int)uStack_3d20 + -1;
    if ((int)uStack_3d20 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(*(longlong *)(param_1 + 0x28) + 0x310,local_3d28,iVar7);
    iVar7 = (int)uStack_3d30 + -1;
    if ((int)uStack_3d30 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(*(longlong *)(param_1 + 0x28) + 800,local_3d38,iVar7);
    iVar7 = (int)lStack_3d60 + -1;
    if ((int)lStack_3d60 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(*(longlong *)(param_1 + 0x28) + 0x330,local_3d68,iVar7);
    *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x340) = local_3d39;
    *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x2f0) = 1;
    if (lVar6 == 0) {
      lpParameter = *(LPVOID *)(param_1 + 0x28);
      pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14691e066,lpParameter,0,(LPDWORD)0x0);
      *(HANDLE *)((longlong)lpParameter + 0x2e0) = pvVar4;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x30));
    FUN_140ecb711(lStack_3cf0,local_3ce8 & 0xffffffff);
    if (lStack_3cf0 != 0) {
      FUN_1400020a8();
    }
    if (local_3d68 != 0) {
      FUN_1400020a8();
    }
    FUN_1457585f6(local_3c70);
    if (local_3d50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_3d38 != 0) {
      FUN_1400020a8();
    }
    if (local_3d28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStackY_3d98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14691c136 FUN_14691c136 body=555 status=ok
// SIG undefined FUN_14691c136(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LARGE_INTEGER FUN_14691c136(LARGE_INTEGER param_1,undefined8 param_2)

{
  HBRUSH pHVar1;
  HANDLE pvVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)param_1 = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1.QuadPart + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1.QuadPart + 8),4000);
  *(undefined8 *)(param_1.QuadPart + 0x30) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x38) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x40) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x48) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x50) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x58) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x60) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x68) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x70) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x78) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x80) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x88) = 0;
  lVar3 = 0;
  *(undefined8 *)(param_1.QuadPart + 0x90) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1.QuadPart + 0xa0) = 0;
  *(undefined8 *)(param_1.QuadPart + 0xa8) = 0;
  *(undefined4 *)(param_1.QuadPart + 0xb8) = 0xffffffff;
  *(undefined8 *)(param_1.QuadPart + 0x1f0) = 0;
  *(undefined4 *)(param_1.QuadPart + 0x1f8) = 0;
  *(undefined4 *)(param_1.QuadPart + 0x1fc) = 0xffffffff;
  *(undefined4 *)(param_1.QuadPart + 0x200) = 0xffffffff;
  *(undefined4 *)(param_1.QuadPart + 0x204) = 0xffffffff;
  *(undefined4 *)(param_1.QuadPart + 0x208) = 0xffffffff;
  *(undefined8 *)(param_1.QuadPart + 0x268) = 0;
  *(undefined4 *)(param_1.QuadPart + 0x270) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x210) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x218) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x220) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x228) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x248) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x250) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x238) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x240) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x274) = 0xffffffff00000080;
  *(undefined4 *)(param_1.QuadPart + 0x27c) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x288) = 0;
  *(undefined4 *)(param_1.QuadPart + 0x290) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1.QuadPart + 0x298));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1.QuadPart + 0x298),4000);
  *(undefined8 *)(param_1.QuadPart + 0x2c0) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x2c8) = 0;
  *(undefined4 *)(param_1.QuadPart + 0x2d0) = 0;
  *(undefined2 *)(param_1.QuadPart + 0x2e8) = 1;
  *(undefined4 *)(param_1.QuadPart + 0x2ec) = 0;
  *(undefined1 *)(param_1.QuadPart + 0x2f0) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x2f4) = 0xfa0000000a0;
  *(undefined8 *)(param_1.QuadPart + 0x2fc) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x304) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x310) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x318) = 0;
  *(undefined8 *)(param_1.QuadPart + 800) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x328) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x330) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x338) = 0;
  *(undefined1 *)(param_1.QuadPart + 0x340) = 0;
  FUN_1402160b8(&local_48);
  ((LARGE_INTEGER *)(param_1.QuadPart + 0xa8))->QuadPart = (LONGLONG)local_48;
  QueryPerformanceCounter(&local_48);
  *(double *)(param_1.QuadPart + 0xb0) =
       ((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
  do {
    pHVar1 = CreateSolidBrush(*(COLORREF *)((longlong)&DAT_149ec88f0 + lVar3));
    *(HBRUSH *)((longlong)(param_1.QuadPart + 0x1b8) + lVar3 * 2) = pHVar1;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0xc);
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)(param_1.QuadPart + 0x2d8) = pvVar2;
  local_48 = param_1;
  FUN_14691ddea(local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (LARGE_INTEGER)param_1.s;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691c376 FUN_14691c376 body=347 status=ok
// SIG undefined FUN_14691c376(void)

void FUN_14691c376(longlong param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  wchar_t local_38 [2];
  short sStack_34;
  short sStack_32;
  undefined8 uStack_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)param_2 + lVar2);
    uVar5 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)&DAT_149dfb77a + lVar2);
    if (uVar4 != uVar6) break;
    if (uVar4 == 0) goto LAB_14691c4ad;
LAB_14691c3b8:
    lVar2 = lVar2 + 2;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_14691c3b8;
  }
  if (uVar4 != uVar6) {
    _local_38 = 0;
    uStack_30 = 0;
    uVar4 = 0;
    local_28 = 0;
    wcsncpy(local_38,param_2,8);
    local_28 = 0;
    if (local_38[0] != L'\0') {
      pwVar3 = local_38;
      wVar1 = local_38[0];
      do {
        pwVar3 = pwVar3 + 1;
        pwVar3[-1] = wVar1 + L'￐';
        wVar1 = *pwVar3;
      } while (wVar1 != L'\0');
      uVar4 = (ushort)(local_38[0] != L'\0') << 2;
    }
    *(ushort *)(param_1 + 0x20) =
         (ushort)(uStack_30._6_2_ != 0) << 7 |
         (ushort)(uStack_30._4_2_ != 0) << 4 | (ushort)(uStack_30._2_2_ != 0) << 5 |
         (ushort)((short)uStack_30 != 0) << 6 |
         ((ushort)(sStack_34 != 0) | (ushort)(local_38[1] != 0) * 2 | uVar4) +
         (ushort)(sStack_32 != 0) * 8;
    goto LAB_14691c4b3;
  }
LAB_14691c4ad:
  *(undefined2 *)(param_1 + 0x20) = 7;
LAB_14691c4b3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691c4d2 FUN_14691c4d2 body=256 status=ok
// SIG undefined FUN_14691c4d2(void)

void FUN_14691c4d2(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined2 param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_14006620a(&local_70,*param_2,*(undefined4 *)(param_2 + 1));
  uVar2 = *param_4;
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_1469279b6(param_1 + 0x30,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar4) = local_70;
  *(undefined4 *)(lVar3 + 8 + lVar4) = local_68;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_64;
  *(undefined1 *)(lVar3 + 0x10 + lVar4) = param_3;
  *(undefined8 *)(lVar3 + 0x14 + lVar4) = uVar2;
  *(undefined8 *)(lVar3 + 0x20 + lVar4) = param_5;
  *(undefined2 *)(lVar3 + 0x28 + lVar4) = param_6;
  SetEvent(*(HANDLE *)(param_1 + 0x2d8));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691c5d4 FUN_14691c5d4 body=30 status=ok
// SIG undefined FUN_14691c5d4(void)

void FUN_14691c5d4(void)

{
  FUN_142850a4a();
  return;
}



// FUNCTION 14691c618 FUN_14691c618 body=43 status=ok
// SIG undefined FUN_14691c618(void)

void FUN_14691c618(undefined8 param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    do {
      iVar1 = ShowCursor(0);
    } while (-1 < iVar1);
  }
  else {
    do {
      iVar1 = ShowCursor(1);
    } while (iVar1 < 0);
  }
  return;
}



// FUNCTION 14691c672 FUN_14691c672 body=38 status=ok
// SIG undefined FUN_14691c672(void)

undefined8 FUN_14691c672(undefined8 param_1,int param_2)

{
  FUN_145e376c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691c69e FUN_14691c69e body=104 status=ok
// SIG undefined FUN_14691c69e(void)

undefined8 * FUN_14691c69e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_149ec5bf0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *param_2 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149eca0b0;
  puVar2[2] = puVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 14691c76e FUN_14691c76e body=38 status=ok
// SIG undefined FUN_14691c76e(void)

undefined8 FUN_14691c76e(undefined8 param_1,int param_2)

{
  FUN_14692a534();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691c794 FUN_14691c794 body=38 status=ok
// SIG undefined FUN_14691c794(void)

undefined8 FUN_14691c794(undefined8 param_1,int param_2)

{
  FUN_146915302();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691c7d4 FUN_14691c7d4 body=48 status=ok
// SIG undefined FUN_14691c7d4(void)

longlong FUN_14691c7d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_146915302(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691c804 FUN_14691c804 body=48 status=ok
// SIG undefined FUN_14691c804(void)

longlong FUN_14691c804(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_146915302(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691c83a FUN_14691c83a body=29 status=ok
// SIG undefined FUN_14691c83a(void)

undefined8 FUN_14691c83a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691c864 FUN_14691c864 body=83 status=ok
// SIG undefined FUN_14691c864(void)

undefined8 * FUN_14691c864(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ec5bf0;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 14691c8c4 FUN_14691c8c4 body=38 status=ok
// SIG undefined FUN_14691c8c4(void)

undefined8 FUN_14691c8c4(undefined8 param_1,int param_2)

{
  FUN_146915ed4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691c8ea FUN_14691c8ea body=38 status=ok
// SIG undefined FUN_14691c8ea(void)

undefined8 FUN_14691c8ea(undefined8 param_1,int param_2)

{
  FUN_146915ed4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691c910 FUN_14691c910 body=38 status=ok
// SIG undefined FUN_14691c910(void)

undefined8 FUN_14691c910(undefined8 param_1,int param_2)

{
  FUN_146915ed4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691c94a FUN_14691c94a body=45 status=ok
// SIG undefined FUN_14691c94a(void)

int FUN_14691c94a(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x18) + -1;
  *(int *)(param_1 + -0x18) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x38);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 14691c98c FUN_14691c98c body=45 status=ok
// SIG undefined FUN_14691c98c(void)

int FUN_14691c98c(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x20) + -1;
  *(int *)(param_1 + -0x20) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x40);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 14691c9ce FUN_14691c9ce body=45 status=ok
// SIG undefined FUN_14691c9ce(void)

int FUN_14691c9ce(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x28) + -1;
  *(int *)(param_1 + -0x28) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x48);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 14691ca10 FUN_14691ca10 body=45 status=ok
// SIG undefined FUN_14691ca10(void)

int FUN_14691ca10(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x30) + -1;
  *(int *)(param_1 + -0x30) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x50);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 14691ca52 FUN_14691ca52 body=45 status=ok
// SIG undefined FUN_14691ca52(void)

int FUN_14691ca52(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x38) + -1;
  *(int *)(param_1 + -0x38) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x58);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 14691ca94 FUN_14691ca94 body=45 status=ok
// SIG undefined FUN_14691ca94(void)

int FUN_14691ca94(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x40) + -1;
  *(int *)(param_1 + -0x40) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x60);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 14691cad6 FUN_14691cad6 body=45 status=ok
// SIG undefined FUN_14691cad6(void)

int FUN_14691cad6(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x48) + -1;
  *(int *)(param_1 + -0x48) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x68);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 14691cb04 FUN_14691cb04 body=38 status=ok
// SIG undefined FUN_14691cb04(void)

undefined8 FUN_14691cb04(undefined8 param_1,int param_2)

{
  FUN_146919460();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691cb2a FUN_14691cb2a body=38 status=ok
// SIG undefined FUN_14691cb2a(void)

undefined8 FUN_14691cb2a(undefined8 param_1,int param_2)

{
  FUN_146919460();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691cb64 FUN_14691cb64 body=45 status=ok
// SIG undefined FUN_14691cb64(void)

int FUN_14691cb64(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x18) + -1;
  *(int *)(param_1 + -0x18) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x38);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 14691cba2 FUN_14691cba2 body=48 status=ok
// SIG undefined FUN_14691cba2(void)

longlong FUN_14691cba2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145e372a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691cbd6 FUN_14691cbd6 body=38 status=ok
// SIG undefined FUN_14691cbd6(void)

undefined8 FUN_14691cbd6(undefined8 param_1,int param_2)

{
  FUN_1428509ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691cc10 FUN_14691cc10 body=31 status=ok
// SIG undefined FUN_14691cc10(void)

undefined8 FUN_14691cc10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691cc4c FUN_14691cc4c body=93 status=ok
// SIG undefined FUN_14691cc4c(void)

void FUN_14691cc4c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149ec8090;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14691ccaa FUN_14691ccaa body=126 status=ok
// SIG undefined FUN_14691ccaa(void)

void FUN_14691ccaa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149ec8090;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014691cd19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14691cd36 FUN_14691cd36 body=21 status=ok
// SIG undefined FUN_14691cd36(void)

undefined8 FUN_14691cd36(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14691cd8e FUN_14691cd8e body=179 status=ok
// SIG undefined FUN_14691cd8e(void)

undefined8 FUN_14691cd8e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140adf126(&local_44,param_3);
    local_48 = 0xffffffff;
    plVar2 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_3,&local_44,&local_48);
    local_58 = param_4;
    uVar3 = (**(code **)(*param_1 + 0x98))(param_1,param_2,local_44,local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691ce42 FUN_14691ce42 body=92 status=ok
// SIG undefined FUN_14691ce42(void)

undefined8
FUN_14691ce42(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014691ce9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_5);
  return uVar2;
}



// FUNCTION 14691ce9e FUN_14691ce9e body=169 status=ok
// SIG undefined FUN_14691ce9e(void)

undefined8 FUN_14691ce9e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140adf126(&local_3c,param_3);
    local_40 = 0xffffffff;
    plVar2 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_3,&local_3c,&local_40);
    local_48 = param_4;
    uVar3 = (**(code **)(*param_1 + 0xa8))(param_1,param_2,local_3c,local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691cf48 FUN_14691cf48 body=81 status=ok
// SIG undefined FUN_14691cf48(void)

undefined8
FUN_14691cf48(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014691cf96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0xa0))
                    (param_1,param_2,param_3,
                     CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return uVar2;
}



// FUNCTION 14691cf9a FUN_14691cf9a body=169 status=ok
// SIG undefined FUN_14691cf9a(void)

undefined8 FUN_14691cf9a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140adf126(&local_3c,param_3);
    local_40 = 0xffffffff;
    plVar2 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_3,&local_3c,&local_40);
    local_48 = param_4;
    uVar3 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,local_3c,local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691d044 FUN_14691d044 body=81 status=ok
// SIG undefined FUN_14691d044(void)

undefined8
FUN_14691d044(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014691d092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0xb0))
                    (param_1,param_2,param_3,
                     CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return uVar2;
}



// FUNCTION 14691d09e FUN_14691d09e body=214 status=ok
// SIG undefined FUN_14691d09e(void)

undefined8
FUN_14691d09e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140adf126(&local_54,param_6);
    local_58 = 0xffffffff;
    plVar2 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_6,&local_54,&local_58);
    local_68 = local_58;
    local_70 = local_54;
    local_78 = param_5;
    uVar3 = (**(code **)(*param_1 + 0xe0))(param_1,param_2,param_3,param_4);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691d176 FUN_14691d176 body=89 status=ok
// SIG undefined FUN_14691d176(void)

undefined8 FUN_14691d176(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014691d1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0xd8))(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 14691d1d0 FUN_14691d1d0 body=197 status=ok
// SIG undefined FUN_14691d1d0(void)

undefined8
FUN_14691d1d0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140adf126(&local_54,param_5);
    local_58 = 0xffffffff;
    plVar2 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_5,&local_54,&local_58);
    local_60 = local_58;
    local_68 = local_54;
    uVar3 = (**(code **)(*param_1 + 0xf0))(param_1,param_2,param_3,param_4);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691d296 FUN_14691d296 body=89 status=ok
// SIG undefined FUN_14691d296(void)

undefined8 FUN_14691d296(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014691d2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0xe8))(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 14691d2f0 FUN_14691d2f0 body=173 status=ok
// SIG undefined FUN_14691d2f0(void)

undefined8 FUN_14691d2f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140adf126(&local_3c,param_4);
    local_40 = 0xffffffff;
    plVar2 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_4,&local_3c,&local_40);
    local_48 = local_40;
    uVar3 = (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3,local_3c);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691d39e FUN_14691d39e body=80 status=ok
// SIG undefined FUN_14691d39e(void)

undefined8 FUN_14691d39e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014691d3eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 14691d3ee FUN_14691d3ee body=197 status=ok
// SIG undefined FUN_14691d3ee(void)

undefined8
FUN_14691d3ee(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140adf126(&local_54,param_5);
    local_58 = 0xffffffff;
    plVar2 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_5,&local_54,&local_58);
    local_60 = local_58;
    local_68 = local_54;
    uVar3 = (**(code **)(*param_1 + 0x110))(param_1,param_2,param_3,param_4);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691d4b4 FUN_14691d4b4 body=89 status=ok
// SIG undefined FUN_14691d4b4(void)

undefined8 FUN_14691d4b4(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014691d50a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x108))(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 14691d50e FUN_14691d50e body=197 status=ok
// SIG undefined FUN_14691d50e(void)

undefined8
FUN_14691d50e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140adf126(&local_54,param_5);
    local_58 = 0xffffffff;
    plVar2 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_5,&local_54,&local_58);
    local_60 = local_58;
    local_68 = local_54;
    uVar3 = (**(code **)(*param_1 + 0x120))(param_1,param_2,param_3,param_4);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691d5d4 FUN_14691d5d4 body=89 status=ok
// SIG undefined FUN_14691d5d4(void)

undefined8 FUN_14691d5d4(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014691d62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x118))(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 14691d630 FUN_14691d630 body=210 status=ok
// SIG undefined FUN_14691d630(void)

undefined8
FUN_14691d630(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140adf126(&local_4c,param_6);
    local_50 = 0xffffffff;
    plVar2 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_6,&local_4c,&local_50);
    local_58 = local_50;
    local_60 = local_4c;
    local_68 = param_5;
    uVar3 = (**(code **)(*param_1 + 0x138))(param_1,param_2,param_3,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691d704 FUN_14691d704 body=80 status=ok
// SIG undefined FUN_14691d704(void)

undefined8 FUN_14691d704(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014691d751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x130))(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 14691d7a4 FUN_14691d7a4 body=52 status=ok
// SIG undefined FUN_14691d7a4(void)

void FUN_14691d7a4(longlong *param_1)

{
  FUN_14691d7d8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14691d7d8 FUN_14691d7d8 body=89 status=ok
// SIG undefined FUN_14691d7d8(void)

void FUN_14691d7d8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 14691d832 FUN_14691d832 body=143 status=ok
// SIG undefined FUN_14691d832(void)

void FUN_14691d832(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14691d8c2 FUN_14691d8c2 body=138 status=ok
// SIG undefined FUN_14691d8c2(void)

void FUN_14691d8c2(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14691d94c FUN_14691d94c body=164 status=ok
// SIG undefined FUN_14691d94c(void)

void FUN_14691d94c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14691d9cc;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14691d9cc:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14691d9f6 FUN_14691d9f6 body=96 status=ok
// SIG undefined FUN_14691d9f6(void)

void FUN_14691d9f6(longlong *param_1)

{
  FUN_14691dd20(param_1,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2]);
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  FUN_1446f8d3c(param_1,0,0,0x30,8);
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14691da56 FUN_14691da56 body=61 status=ok
// SIG undefined FUN_14691da56(void)

void FUN_14691da56(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14691da93 FUN_14691da93 body=61 status=ok
// SIG undefined FUN_14691da93(void)

void FUN_14691da93(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14691dad0 FUN_14691dad0 body=590 status=ok
// SIG undefined FUN_14691dad0(void)

void FUN_14691dad0(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar20 = (int)param_1[2] - *(int *)((longlong)param_1 + 0xc);
  if (iVar20 == 0 || param_2 == 0) {
    local_58 = 8;
    FUN_1446f8d3c(param_1,0,param_2,0x30);
  }
  else {
    lVar11 = *param_1;
    lVar17 = param_1[1];
    local_50 = 0;
    local_58 = 8;
    FUN_1446f8d3c(&local_50,0);
    lVar9 = local_50;
    uVar12 = *(uint *)((longlong)param_1 + 0xc) & *(uint *)(param_1 + 1);
    uVar13 = *(uint *)(param_1 + 1) & *(uint *)(param_1 + 2);
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
      uVar14 = (int)lVar17 + 1;
      uVar10 = uVar14 - uVar12;
      uVar19 = 0;
      if (uVar12 <= uVar14 && uVar10 != 0) {
        lVar17 = (ulonglong)uVar12 * 0x30 + lVar11;
        lVar18 = 0;
        uVar16 = uVar10;
        do {
          *(undefined8 *)(local_50 + lVar18) = 0;
          *(undefined8 *)(local_50 + lVar18) = *(undefined8 *)(lVar17 + lVar18);
          *(undefined8 *)(lVar17 + lVar18) = 0;
          *(undefined4 *)(local_50 + 8 + lVar18) = *(undefined4 *)(lVar17 + 8 + lVar18);
          *(undefined4 *)(local_50 + 0xc + lVar18) = *(undefined4 *)(lVar17 + 0xc + lVar18);
          *(undefined8 *)(lVar17 + 8 + lVar18) = 0;
          puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar18);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined8 *)(lVar17 + 0x1c + lVar18);
          uVar8 = puVar2[1];
          puVar3 = (undefined8 *)(local_50 + 0x1c + lVar18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar1 = (undefined4 *)(local_50 + 0x10 + lVar18);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          lVar18 = lVar18 + 0x30;
          uVar16 = uVar16 - 1;
          uVar19 = uVar10;
        } while (uVar16 != 0);
      }
      FUN_14691dd20(param_1,uVar12,uVar14);
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = 0;
        lVar17 = 0;
        do {
          uVar15 = (ulonglong)uVar19;
          uVar19 = uVar19 + 1;
          lVar18 = uVar15 * 0x30;
          *(undefined8 *)(lVar9 + lVar18) = 0;
          *(undefined8 *)(lVar9 + lVar18) = *(undefined8 *)(lVar11 + lVar17);
          *(undefined8 *)(lVar11 + lVar17) = 0;
          *(undefined4 *)(lVar9 + 8 + lVar18) = *(undefined4 *)(lVar11 + 8 + lVar17);
          *(undefined4 *)(lVar9 + 0xc + lVar18) = *(undefined4 *)(lVar11 + 0xc + lVar17);
          *(undefined8 *)(lVar11 + 8 + lVar17) = 0;
          puVar1 = (undefined4 *)(lVar11 + 0x10 + lVar17);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined8 *)(lVar11 + 0x1c + lVar17);
          uVar8 = puVar2[1];
          puVar3 = (undefined8 *)(lVar9 + 0x1c + lVar18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar1 = (undefined4 *)(lVar9 + 0x10 + lVar18);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          lVar17 = lVar17 + 0x30;
        } while ((ulonglong)uVar13 * 0x30 != lVar17);
      }
    }
    else {
      lVar11 = (ulonglong)uVar12 * 0x30 + lVar11;
      lVar17 = 0;
      do {
        *(undefined8 *)(local_50 + lVar17) = 0;
        *(undefined8 *)(local_50 + lVar17) = *(undefined8 *)(lVar11 + lVar17);
        *(undefined8 *)(lVar11 + lVar17) = 0;
        *(undefined4 *)(local_50 + 8 + lVar17) = *(undefined4 *)(lVar11 + 8 + lVar17);
        *(undefined4 *)(local_50 + 0xc + lVar17) = *(undefined4 *)(lVar11 + 0xc + lVar17);
        *(undefined8 *)(lVar11 + 8 + lVar17) = 0;
        puVar1 = (undefined4 *)(lVar11 + 0x10 + lVar17);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined8 *)(lVar11 + 0x1c + lVar17);
        uVar8 = puVar2[1];
        puVar3 = (undefined8 *)(local_50 + 0x1c + lVar17);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar1 = (undefined4 *)(local_50 + 0x10 + lVar17);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        lVar17 = lVar17 + 0x30;
      } while ((ulonglong)(uVar13 - uVar12) * 0x30 != lVar17);
    }
    FUN_14691dd20(param_1,uVar12,uVar13);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_50;
  }
  *(int *)(param_1 + 1) = param_2 + -1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(int *)(param_1 + 2) = iVar20;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14691dd20 FUN_14691dd20 body=115 status=ok
// SIG undefined FUN_14691dd20(void)

void FUN_14691dd20(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = param_3 - param_2;
  if (uVar1 + 1 < uVar3 || uVar3 == 0) {
    return;
  }
  lVar2 = *param_1;
  param_2 = param_2 & uVar1;
  param_3 = param_3 & uVar1;
  if (param_2 < param_3) {
    lVar2 = lVar2 + (ulonglong)param_2 * 0x30;
    param_3 = uVar3;
  }
  else {
    FUN_14691dd93((ulonglong)param_2 * 0x30 + lVar2,(uVar1 + 1) - param_2);
  }
  FUN_14691dd93(lVar2,param_3);
  return;
}



// FUNCTION 14691dd93 FUN_14691dd93 body=43 status=ok
// SIG undefined FUN_14691dd93(void)

void FUN_14691dd93(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 14691ddbe FUN_14691ddbe body=43 status=ok
// SIG undefined FUN_14691ddbe(void)

void FUN_14691ddbe(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 14691ddea FUN_14691ddea body=215 status=ok
// SIG undefined FUN_14691ddea(void)

undefined8 FUN_14691ddea(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149ec8900;
  local_30[3] = *param_2;
  FUN_1448b6402(&DAT_14c8687e8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691dec2 FUN_14691dec2 body=29 status=ok
// SIG undefined FUN_14691dec2(void)

undefined8 FUN_14691dec2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14691def4 FUN_14691def4 body=93 status=ok
// SIG undefined FUN_14691def4(void)

void FUN_14691def4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ec8900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14691df52 FUN_14691df52 body=93 status=ok
// SIG undefined FUN_14691df52(void)

void FUN_14691df52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ec8900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14691dfb0 FUN_14691dfb0 body=126 status=ok
// SIG undefined FUN_14691dfb0(void)

void FUN_14691dfb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149ec8900;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014691e01f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14691e044 FUN_14691e044 body=34 status=ok
// SIG undefined FUN_14691e044(void)

undefined8 FUN_14691e044(longlong param_1)

{
  if (*(char *)(*(undefined8 **)(param_1 + 0x18) + 0x5e) == '\x01') {
    FUN_14691b424(**(undefined8 **)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 14691e066 FUN_14691e066 body=36 status=ok
// SIG undefined FUN_14691e066(void)

undefined8 FUN_14691e066(undefined8 param_1)

{
  FUN_1415da298(L"LogConsoleHwnd");
  FUN_14691e08a(param_1);
  return 0;
}



// FUNCTION 14691e08a FUN_14691e08a body=2739 status=ok
// SIG undefined FUN_14691e08a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14691e08a(undefined8 *param_1)

{
  WPARAM WVar1;
  ushort uVar2;
  ATOM AVar3;
  ATOM AVar4;
  int iVar5;
  DWORD DVar6;
  BOOL BVar7;
  HMODULE hInstance;
  HFONT pHVar8;
  HDC pHVar9;
  HWND pHVar10;
  LONG_PTR LVar11;
  ulonglong uVar12;
  HANDLE hProcess;
  undefined ***pppuVar13;
  undefined2 *puVar14;
  byte bVar15;
  LPCWSTR lpWindowName;
  double dVar16;
  undefined1 auStackY_3b8 [32];
  ulonglong local_340;
  undefined1 local_328 [8];
  tagRECT local_320;
  tagSIZE local_310;
  tagRECT local_308;
  WNDCLASSEXW local_2f8;
  LARGE_INTEGER local_2a8;
  int local_2a0;
  undefined ***local_298;
  undefined **local_288;
  undefined8 *local_280;
  undefined4 local_268 [102];
  LOGFONTW local_d0;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStackY_3b8;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  FUN_14691eb3e(param_1);
  uVar2 = FUN_14692a58a();
  local_2f8.hIcon = LoadIconW(hInstance,(LPCWSTR)(ulonglong)uVar2);
  param_1[0x18] = local_2f8.hIcon;
  local_2f8.hCursor = (HCURSOR)0x0;
  local_2f8.lpszClassName = (LPCWSTR)0x0;
  local_2f8.hIconSm = (HICON)0x0;
  local_2f8.hbrBackground = (HBRUSH)0x0;
  local_2f8.lpszMenuName = (LPCWSTR)0x0;
  local_2f8.cbClsExtra = 0;
  local_2f8.cbWndExtra = 0;
  local_2f8.hInstance = (HINSTANCE)0x0;
  local_2f8.cbSize = 0x50;
  local_2f8.style = 3;
  local_2f8.lpfnWndProc = FUN_14691f0ec;
  local_2f8.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  local_2f8.hbrBackground = (HBRUSH)0x0;
  local_2f8.lpszClassName = L"FConsoleWindow";
  local_2f8.hInstance = hInstance;
  AVar3 = RegisterClassExW(&local_2f8);
  local_2f8.lpfnWndProc = FUN_14691f18c;
  local_2f8.lpszClassName = L"FScrollBar";
  AVar4 = RegisterClassExW(&local_2f8);
  local_268[0] = 0x1f8;
  SystemParametersInfoW(0x29,0x1f8,local_268,0);
  pHVar8 = CreateFontIndirectW(&local_d0);
  param_1[0x19] = pHVar8;
  pHVar9 = GetDC((HWND)0x0);
  iVar5 = GetDeviceCaps(pHVar9,0x5a);
  iVar5 = MulDiv(8,iVar5,0x48);
  pHVar8 = CreateFontW(-iVar5,0,0,0,400,0,0,0,0,0,0,4,0x31,L"Cascadia Mono");
  param_1[0x1a] = pHVar8;
  if (*(int *)(param_1 + 0x67) == 0) {
    lpWindowName = L"";
  }
  else {
    lpWindowName = (LPCWSTR)param_1[0x66];
  }
  pHVar10 = CreateWindowExW(0,(LPCWSTR)(ulonglong)AVar3,lpWindowName,0x2cf0000,
                            *(int *)((longlong)param_1 + 0x2fc),*(int *)(param_1 + 0x60),
                            *(int *)((longlong)param_1 + 0x2f4),*(int *)(param_1 + 0x5f),(HWND)0x0,
                            (HMENU)0x0,hInstance,param_1);
  param_1[0x1b] = pHVar10;
  SetWindowLongPtrW(pHVar10,-0x15,(LONG_PTR)param_1);
  GetWindowRect((HWND)param_1[0x1b],&local_308);
  *(LONG *)((longlong)param_1 + 0x2fc) = local_308.left;
  *(LONG *)(param_1 + 0x60) = local_308.top;
  *(LONG *)((longlong)param_1 + 0x2f4) = local_308.right - local_308.left;
  *(LONG *)(param_1 + 0x5f) = local_308.bottom - local_308.top;
  pHVar9 = GetDC((HWND)param_1[0x1b]);
  SelectObject(pHVar9,(HGDIOBJ)param_1[0x1a]);
  GetTextExtentPoint32W(pHVar9,L"A",1,&local_310);
  *(LONG *)((longlong)param_1 + 500) = local_310.cx;
  *(LONG *)(param_1 + 0x3f) = local_310.cy;
  ReleaseDC((HWND)param_1[0x1b],pHVar9);
  WVar1 = param_1[0x19];
  pHVar10 = CreateWindowExW(0,L"Edit",(LPCWSTR)0x0,0x50000080,0,0,0,0,(HWND)param_1[0x1b],
                            (HMENU)0x8802,(HINSTANCE)0x0,(LPVOID)0x0);
  if (WVar1 != 0) {
    SendMessageW(pHVar10,0x30,WVar1,0);
  }
  param_1[0x20] = pHVar10;
  WVar1 = param_1[0x19];
  pHVar10 = CreateWindowExW(0,L"Edit",(LPCWSTR)0x0,0x50000080,0,0,0,0,(HWND)param_1[0x1b],
                            (HMENU)0x8803,(HINSTANCE)0x0,(LPVOID)0x0);
  if (WVar1 != 0) {
    SendMessageW(pHVar10,0x30,WVar1,0);
  }
  param_1[0x21] = pHVar10;
  WVar1 = param_1[0x19];
  pHVar10 = CreateWindowExW(0,L"Button",L"Clear Log",0x50000000,0,0,0,0,(HWND)param_1[0x1b],
                            (HMENU)0x8806,(HINSTANCE)0x0,(LPVOID)0x0);
  if (WVar1 != 0) {
    SendMessageW(pHVar10,0x30,WVar1,0);
  }
  param_1[0x22] = pHVar10;
  WVar1 = param_1[0x19];
  pHVar10 = CreateWindowExW(0,L"Button",L"Log CHECKPOINT0",0x50000000,0,0,0,0,(HWND)param_1[0x1b],
                            (HMENU)0x8807,(HINSTANCE)0x0,(LPVOID)0x0);
  if (WVar1 != 0) {
    SendMessageW(pHVar10,0x30,WVar1,0);
  }
  param_1[0x23] = pHVar10;
  WVar1 = param_1[0x1a];
  pHVar10 = CreateWindowExW(0,L"ListBox",(LPCWSTR)0x0,0x50000d51,0,0,1,1,(HWND)param_1[0x1b],
                            (HMENU)0x8801,(HINSTANCE)0x0,(LPVOID)0x0);
  if (WVar1 != 0) {
    SendMessageW(pHVar10,0x30,WVar1,0);
  }
  param_1[0x1c] = pHVar10;
  SetWindowLongPtrW(pHVar10,-0x15,(LONG_PTR)param_1);
  LVar11 = SetWindowLongPtrW((HWND)param_1[0x1c],-4,0x14691f1ec);
  param_1[0x26] = LVar11;
  pHVar10 = CreateWindowExW(0,(LPCWSTR)(ulonglong)AVar4,(LPCWSTR)0x0,0x50000001,0,0,1,1,
                            (HWND)param_1[0x1b],(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0);
  param_1[0x1d] = pHVar10;
  SetWindowLongPtrW(pHVar10,-0x15,(LONG_PTR)param_1);
  WVar1 = param_1[0x19];
  pHVar10 = CreateWindowExW(0,L"Edit",(LPCWSTR)0x0,0x50000080,0,0,1,1,(HWND)param_1[0x1b],
                            (HMENU)0x8804,(HINSTANCE)0x0,(LPVOID)0x0);
  if (WVar1 != 0) {
    SendMessageW(pHVar10,0x30,WVar1,0);
  }
  param_1[0x1e] = pHVar10;
  WVar1 = param_1[0x19];
  pHVar10 = CreateWindowExW(0,L"Button",L"RunCommand",0x50000000,0,0,1,1,(HWND)param_1[0x1b],
                            (HMENU)0x8805,(HINSTANCE)0x0,(LPVOID)0x0);
  if (WVar1 != 0) {
    SendMessageW(pHVar10,0x30,WVar1,0);
  }
  param_1[0x1f] = pHVar10;
  SetFocus((HWND)param_1[0x1e]);
  GetClientRect((HWND)param_1[0x1b],&local_320);
  FUN_14691f22c(param_1,local_320.right,local_320.bottom,0);
  FUN_14691f4d8(param_1,0);
  local_298 = (undefined ***)0x0;
  local_288 = &PTR_LAB_149ec9500;
  local_2a8.QuadPart = (LONGLONG)&LAB_146926b9e;
  local_280 = param_1;
  FUN_14681f45e(&local_2a8);
  if ((undefined1 *)local_2a8.QuadPart != (undefined1 *)0x0) {
    pppuVar13 = local_298;
    if (local_298 == (undefined ***)0x0) {
      pppuVar13 = &local_288;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  local_298 = (undefined ***)0x0;
  local_288 = &PTR_LAB_149ec9530;
  local_2a8.QuadPart = (LONGLONG)&LAB_146926dd6;
  local_280 = param_1;
  FUN_14681f538(&local_2a8);
  if ((undefined1 *)local_2a8.QuadPart != (undefined1 *)0x0) {
    pppuVar13 = &local_288;
    if (local_298 != (undefined ***)0x0) {
      pppuVar13 = local_298;
    }
    (*(code *)(*pppuVar13)[2])(pppuVar13);
  }
  UpdateWindow((HWND)param_1[0x1b]);
  SetForegroundWindow((HWND)param_1[0x1b]);
  local_340 = 0;
  pHVar10 = CreateWindowExW(0x8000088,L"Static",L"",0x9e00000d,1,1,1,1,(HWND)param_1[0x1b],
                            (HMENU)0x0,hInstance,(LPVOID)0x0);
  param_1[0x24] = pHVar10;
  SendMessageW(pHVar10,0x30,param_1[0x19],0);
  FUN_1402160b8(local_328);
  bVar15 = 0;
  do {
    do {
      if ((bVar15 & 1) != *(byte *)(param_1 + 0x5e)) {
        pHVar10 = (HWND)param_1[0x1b];
        iVar5 = 0;
        if (*(byte *)(param_1 + 0x5e) != 0) {
          MoveWindow(pHVar10,*(int *)((longlong)param_1 + 0x2fc),*(int *)(param_1 + 0x60),
                     *(int *)((longlong)param_1 + 0x2f4),*(int *)(param_1 + 0x5f),1);
          pHVar10 = (HWND)param_1[0x1b];
          iVar5 = (*(byte *)(param_1 + 0x5e) & 1) * 5;
        }
        ShowWindow(pHVar10,iVar5);
        bVar15 = *(byte *)(param_1 + 0x5e);
        if (bVar15 == 1) {
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(param_1 + 99) != 0) {
            puVar14 = (undefined2 *)param_1[0x62];
          }
          FUN_14691f70e(param_1,puVar14);
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(param_1 + 0x65) != 0) {
            puVar14 = (undefined2 *)param_1[100];
          }
          FUN_14691f76c(param_1,puVar14);
        }
      }
      QueryPerformanceCounter(&local_2a8);
      dVar16 = ((double)local_2a8.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
      uVar12 = (ulonglong)dVar16;
      uVar12 = (longlong)(dVar16 - 9.223372036854776e+18) & (longlong)uVar12 >> 0x3f | uVar12;
      if (local_340 != uVar12) {
        FUN_14691f4d8(param_1,uVar12);
        local_340 = uVar12;
      }
      DVar6 = MsgWaitForMultipleObjects(1,(HANDLE *)(param_1 + 0x5b),0,200,0x4ff);
    } while (DVar6 == 0x102);
    FUN_14691f7ca(param_1);
    FUN_14691ffcc(param_1);
    while( true ) {
      BVar7 = PeekMessageW((LPMSG)&local_2a8.s,(HWND)0x0,0,0,1);
      if (BVar7 == 0) break;
      BVar7 = IsDialogMessageW((HWND)param_1[0x1b],(LPMSG)&local_2a8.s);
      if (BVar7 == 0) {
        TranslateMessage((MSG *)&local_2a8.s);
        DispatchMessageW((MSG *)&local_2a8.s);
      }
      if (local_2a0 == 0x12) {
        DestroyWindow((HWND)param_1[0x1b]);
        DeleteObject((HGDIOBJ)param_1[0x1a]);
        DeleteObject((HGDIOBJ)param_1[0x19]);
        UnregisterClassW((LPCWSTR)(ulonglong)AVar3,hInstance);
        param_1[0x1b] = 0;
        FUN_1469204cc(param_1);
        if (DAT_14c872bd8 == '\0') {
          FUN_14691b424(*param_1);
          FUN_14682f5ca();
        }
        else {
          Sleep(500);
          hProcess = GetCurrentProcess();
          TerminateProcess(hProcess,0xffffffff);
        }
        if ((local_70 ^ (ulonglong)auStackY_3b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  } while( true );
}



// FUNCTION 14691eb3e FUN_14691eb3e body=1452 status=ok
// SIG undefined FUN_14691eb3e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14691eb3e(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  COLORREF color;
  HBRUSH pHVar3;
  HPEN pHVar4;
  COLORREF color_00;
  undefined1 auStack_3cb8 [32];
  longlong *local_3c98;
  COLORREF local_3c84;
  longlong local_3c80 [2];
  undefined1 local_3c70 [15416];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3cb8;
  switch(*(undefined4 *)(param_1 + 0x304)) {
  case 1:
    DVar2 = GetSysColor(0xf);
    *(DWORD *)(param_1 + 0x13c) = DVar2;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(DWORD *)(param_1 + 0x140) = DVar2;
    DVar2 = GetSysColor(0x16);
    *(DWORD *)(param_1 + 0x144) = DVar2;
    DVar2 = GetSysColor(0x14);
    *(DWORD *)(param_1 + 0x148) = DVar2;
    DVar2 = GetSysColor(0x16);
    *(DWORD *)(param_1 + 0x14c) = DVar2;
    DVar2 = GetSysColor(0x1c);
    *(DWORD *)(param_1 + 0x150) = DVar2;
    DVar2 = GetSysColor(0x1b);
    *(DWORD *)(param_1 + 0x154) = DVar2;
    DVar2 = GetSysColor(0x10);
    *(DWORD *)(param_1 + 0x158) = DVar2;
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x14c);
    color = GetSysColor(6);
    break;
  case 2:
    *(undefined8 *)(param_1 + 0x138) = 0x3232c800e6e6e6;
    *(undefined8 *)(param_1 + 0x140) = 0x2828be003232a0;
    *(undefined4 *)(param_1 + 0x148) = 0x3c3cd2;
    *(undefined4 *)(param_1 + 0x14c) = 0x3232a0;
    *(undefined4 *)(param_1 + 0x150) = 0x3232be;
    *(undefined4 *)(param_1 + 0x154) = 0x3232b4;
    *(undefined8 *)(param_1 + 0x158) = 0x3232a000323278;
    color = 0x282864;
    break;
  case 3:
    *(undefined8 *)(param_1 + 0x138) = 0xf4d37300000000;
    *(undefined8 *)(param_1 + 0x140) = 0xeac96900dcbe64;
    *(undefined4 *)(param_1 + 0x148) = 0xfedd7d;
    *(undefined4 *)(param_1 + 0x14c) = 0xdcbe64;
    *(undefined4 *)(param_1 + 0x150) = 0xf4d373;
    *(undefined4 *)(param_1 + 0x154) = 0xffdd7d;
    *(undefined8 *)(param_1 + 0x158) = 0xdcbe6400b4963c;
    color = 0xdc1e1e;
    color_00 = 0x140f00;
    goto LAB_14691efb2;
  case 4:
    *(undefined8 *)(param_1 + 0x138) = 0x960a0a00dcdcdc;
    *(undefined8 *)(param_1 + 0x140) = 0xbe141400640a0a;
    *(undefined4 *)(param_1 + 0x148) = 0xdc1414;
    *(undefined4 *)(param_1 + 0x14c) = 0x640a0a;
    *(undefined4 *)(param_1 + 0x150) = 0xbe0a0a;
    *(undefined4 *)(param_1 + 0x154) = 0x960a0a;
    *(undefined8 *)(param_1 + 0x158) = 0x780a0a00dc0a0a;
    color = 0xdc1e1e;
    break;
  case 5:
    FUN_140056680(local_3c80,L"DebugConsoleColors.ini");
    FUN_1468047ba(local_3c70,1,0,0);
    FUN_1427777c2(local_3c70,local_3c80,0,0);
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"Background",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x13c) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"Text",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x138) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"LogBackground",&local_3c84);
    color_00 = 0;
    if (cVar1 != '\0') {
      color_00 = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"EditBackground",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x140) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"StatusBackground1",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x144) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"StatusBackground2",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x148) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"EditBackground",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x140) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"Button",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x14c) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"ButtonHighlight",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x150) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"ButtonPressed",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x154) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"Thumb",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x158) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"ScrollBackground",&local_3c84);
    if (cVar1 != '\0') {
      *(COLORREF *)(param_1 + 0x15c) = local_3c84;
    }
    local_3c98 = local_3c80;
    cVar1 = FUN_1468051b6(local_3c70,L"Colors",L"Border",&local_3c84);
    color = 0;
    if (cVar1 != '\0') {
      color = local_3c84;
    }
    FUN_1457585f6(local_3c70);
    if (local_3c80[0] != 0) {
      FUN_1400020a8();
    }
    goto LAB_14691efb2;
  default:
    *(undefined8 *)(param_1 + 0x138) = 0x20202000dcdcdc;
    *(undefined8 *)(param_1 + 0x140) = 0x2a2a2a00404040;
    *(undefined4 *)(param_1 + 0x148) = 0x313131;
    *(undefined4 *)(param_1 + 0x14c) = 0x303030;
    *(undefined4 *)(param_1 + 0x150) = 0x646464;
    *(undefined4 *)(param_1 + 0x154) = 0x648282;
    *(undefined8 *)(param_1 + 0x158) = 0x303030004d4d4d;
    color = 0x5a5a5a;
  }
  color_00 = 0;
LAB_14691efb2:
  pHVar3 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x138));
  *(HBRUSH *)(param_1 + 0x160) = pHVar3;
  pHVar3 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x13c));
  *(HBRUSH *)(param_1 + 0x168) = pHVar3;
  pHVar3 = CreateSolidBrush(color_00);
  *(HBRUSH *)(param_1 + 0x170) = pHVar3;
  pHVar3 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x140));
  *(HBRUSH *)(param_1 + 0x178) = pHVar3;
  pHVar3 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x144));
  *(HBRUSH *)(param_1 + 0x180) = pHVar3;
  pHVar3 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x148));
  *(HBRUSH *)(param_1 + 0x188) = pHVar3;
  pHVar3 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x14c));
  *(HBRUSH *)(param_1 + 400) = pHVar3;
  pHVar3 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x150));
  *(HBRUSH *)(param_1 + 0x198) = pHVar3;
  pHVar3 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x154));
  *(HBRUSH *)(param_1 + 0x1a0) = pHVar3;
  pHVar3 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x158));
  *(HBRUSH *)(param_1 + 0x1a8) = pHVar3;
  pHVar3 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x15c));
  *(HBRUSH *)(param_1 + 0x1b0) = pHVar3;
  pHVar4 = CreatePen(0,0,*(COLORREF *)(param_1 + 0x138));
  *(HPEN *)(param_1 + 0x1e8) = pHVar4;
  pHVar4 = CreatePen(0,1,color);
  *(HPEN *)(param_1 + 0x1d0) = pHVar4;
  pHVar4 = CreatePen(6,1,color);
  *(HPEN *)(param_1 + 0x1d8) = pHVar4;
  pHVar4 = CreatePen(0,1,*(COLORREF *)(param_1 + 0x138));
  *(HPEN *)(param_1 + 0x1e0) = pHVar4;
  if ((local_38 ^ (ulonglong)auStack_3cb8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14691f0ec FUN_14691f0ec body=160 status=ok
// SIG undefined FUN_14691f0ec(void)

void FUN_14691f0ec(HWND param_1,UINT param_2,WPARAM param_3,LONG_PTR param_4)

{
  LONG_PTR LVar1;
  
  LVar1 = GetWindowLongPtrW(param_1,-0x15);
  if (param_2 == 1 && LVar1 == 0) {
    SetWindowTheme(param_1,L"",L"");
    SetWindowLongPtrW(param_1,-0x15,param_4);
    LVar1 = param_4;
  }
  if ((LVar1 != 0) && (*(HWND *)(LVar1 + 0xd8) == param_1)) {
    FUN_14692055c(LVar1,param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014691f164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DefWindowProcW(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14691f18c FUN_14691f18c body=96 status=ok
// SIG undefined FUN_14691f18c(void)

void FUN_14691f18c(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LONG_PTR LVar1;
  
  LVar1 = GetWindowLongPtrW(param_1,-0x15);
  if (LVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014691f1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DefWindowProcW(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_146923ea0(LVar1,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14691f1ec FUN_14691f1ec body=64 status=ok
// SIG undefined FUN_14691f1ec(void)

void FUN_14691f1ec(HWND param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  LONG_PTR LVar1;
  
  LVar1 = GetWindowLongPtrW(param_1,-0x15);
  FUN_1469244c0(LVar1,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14691f22c FUN_14691f22c body=682 status=ok
// SIG undefined FUN_14691f22c(void)

void FUN_14691f22c(longlong param_1,int param_2,int param_3,char param_4)

{
  int Y;
  char cVar1;
  int cy;
  int iVar2;
  ulonglong uVar3;
  UINT uFlags;
  int Y_00;
  uint uFlags_00;
  UINT uFlags_01;
  int iVar4;
  undefined1 auStackY_a8 [32];
  
  uVar3 = DAT_14c707940 ^ (ulonglong)auStackY_a8;
  uFlags_00 = 0x21c;
  if (param_4 != '\0') {
    SendMessageW(*(HWND *)(param_1 + 0xe0),0xb,0,0);
    uFlags_00 = 0x214;
  }
  iVar2 = FUN_146925f1e(param_1,param_2,param_3);
  cVar1 = *(char *)(param_1 + 0x340);
  uFlags_01 = uFlags_00 | 0x40;
  uFlags = 0x80;
  if (cVar1 != '\0') {
    uFlags = uFlags_01;
  }
  Y_00 = 0x24;
  if (cVar1 == '\0') {
    uFlags_01 = uFlags_00 | 0x80;
    Y_00 = 1;
  }
  Y = (param_3 - iVar2) + -0x19;
  iVar4 = Y - Y_00;
  *(int *)(param_1 + 0x2d0) = iVar2;
  cy = iVar4 + -5;
  if (cVar1 == '\0') {
    cy = iVar4 + 0x14;
  }
  SetWindowPos(*(HWND *)(param_1 + 0x110),(HWND)0x0,param_2 + -0xeb,8,0x50,0x16,uFlags_01);
  SetWindowPos(*(HWND *)(param_1 + 0x118),(HWND)0x0,param_2 + -0x8d,8,0x87,0x16,uFlags_01);
  if (param_2 < 0x17c) {
    uFlags_01 = uFlags_00 | 0x80;
  }
  iVar4 = (param_2 - (param_2 + -0x118 >> 0x1f)) + -0x118 >> 1;
  SetWindowPos(*(HWND *)(param_1 + 0x100),(HWND)0x0,8,9,iVar4,0x14,uFlags_01);
  SetWindowPos(*(HWND *)(param_1 + 0x108),(HWND)0x0,iVar4 + 0x1c,9,iVar4,0x14,uFlags_01);
  SetWindowPos(*(HWND *)(param_1 + 0xe0),(HWND)0x0,7,Y_00,param_2 + -0x21,cy,uFlags_00);
  SetWindowPos(*(HWND *)(param_1 + 0xe8),(HWND)0x0,param_2 + -0x1a,Y_00,0x13,cy,uFlags_00);
  SetWindowPos(*(HWND *)(param_1 + 0xf0),(HWND)0x0,8,Y,param_2 + -0x6e,0x14,uFlags);
  SetWindowPos(*(HWND *)(param_1 + 0xf8),(HWND)0x0,param_2 + -0x61,(param_3 - iVar2) + -0x1a,0x5a,
               0x16,uFlags);
  if (param_4 != '\0') {
    SendMessageW(*(HWND *)(param_1 + 0xe0),0xb,1,0);
  }
  if ((uVar3 ^ (ulonglong)auStackY_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691f4d8 FUN_14691f4d8 body=565 status=ok
// SIG undefined FUN_14691f4d8(void)

void FUN_14691f4d8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_68 [32];
  int local_48;
  int local_40;
  undefined1 local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  auVar8._8_4_ = (int)((ulonglong)param_2 >> 0x20);
  auVar8._0_8_ = param_2;
  auVar8._12_4_ = 0x45300000;
  auVar7._0_8_ = (((double)CONCAT44(0x43300000,(int)param_2) - 4503599627370496.0) +
                 (auVar8._8_8_ - 1.9342813113834067e+25)) * 10000000.0 + 0.5;
  auVar7._8_8_ = 0;
  auVar8 = roundpd(auVar7,auVar7,1);
  lVar4 = (longlong)auVar8._0_8_;
  if (lVar4 + 863999999999U < 0x19254d37fff) {
    puVar5 = (undefined2 *)0x0;
    puVar6 = &DAT_149dfb77a;
  }
  else {
    iVar3 = (int)(lVar4 / 864000000000);
    iVar2 = -iVar3;
    if (iVar2 < 0) {
      iVar2 = iVar3;
    }
    FUN_140002266(&local_30,&DAT_149ec94ca,iVar2);
    puVar5 = local_30;
    puVar6 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar6 = local_30;
    }
  }
  auVar8 = SEXT816(lVar4 / 10000000) * ZEXT816(0x8888888888888889);
  iVar2 = (int)(lVar4 / 10000000) + ((int)(auVar8._8_8_ >> 5) - (auVar8._12_4_ >> 0x1f)) * -0x3c;
  local_40 = -iVar2;
  if (local_40 < 0) {
    local_40 = iVar2;
  }
  auVar8 = SEXT816(lVar4 / 600000000) * ZEXT816(0x8888888888888889);
  iVar2 = (int)(lVar4 / 600000000) + ((int)(auVar8._8_8_ >> 5) - (auVar8._12_4_ >> 0x1f)) * -0x3c;
  local_48 = -iVar2;
  if (local_48 < 0) {
    local_48 = iVar2;
  }
  uVar1 = (uint)((ulonglong)((lVar4 / 36000000000) * 0x2aaaaaab) >> 0x20);
  iVar3 = (int)(lVar4 / 36000000000) + ((uVar1 >> 2) - ((int)uVar1 >> 0x1f)) * -0x18;
  iVar2 = -iVar3;
  if (iVar2 < 0) {
    iVar2 = iVar3;
  }
  FUN_140002266(&local_30,L"%s%02i:%02i:%02i",puVar6,iVar2);
  if (puVar5 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  puVar5 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar5 = local_30;
  }
  local_38 = 0;
  local_40 = 1;
  local_48 = 0;
  FUN_146926804(param_1,L"Time",L"Time",puVar5);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691f70e FUN_14691f70e body=94 status=ok
// SIG undefined FUN_14691f70e(void)

void FUN_14691f70e(longlong param_1)

{
  undefined8 *puVar1;
  LPCWSTR lpString;
  
  puVar1 = (undefined8 *)(param_1 + 0x310);
  FUN_14020fad6(puVar1);
  if (*(int *)(param_1 + 0x318) == 0) {
    lpString = L"";
  }
  else {
    lpString = (LPCWSTR)*puVar1;
  }
  SetDlgItemTextW(*(HWND *)(param_1 + 0xd8),0x8802,lpString);
  FUN_1403de9f2(puVar1,param_1 + 0x50,&DAT_149e001d8,1);
  return;
}



// FUNCTION 14691f76c FUN_14691f76c body=94 status=ok
// SIG undefined FUN_14691f76c(void)

void FUN_14691f76c(longlong param_1)

{
  undefined8 *puVar1;
  LPCWSTR lpString;
  
  puVar1 = (undefined8 *)(param_1 + 800);
  FUN_14020fad6(puVar1);
  if (*(int *)(param_1 + 0x328) == 0) {
    lpString = L"";
  }
  else {
    lpString = (LPCWSTR)*puVar1;
  }
  SetDlgItemTextW(*(HWND *)(param_1 + 0xd8),0x8803,lpString);
  FUN_1403de9f2(puVar1,param_1 + 0x60,&DAT_149e001d8,1);
  return;
}



// FUNCTION 14691f7ca FUN_14691f7ca body=2049 status=ok
// SIG undefined FUN_14691f7ca(void)

void FUN_14691f7ca(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  WPARAM WVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  HWND pHVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  bool bVar21;
  longlong lVar22;
  undefined1 auStackY_358 [32];
  longlong *local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  longlong *local_2b8;
  longlong *local_2b0;
  undefined2 local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined1 local_280 [12];
  LONG LStack_274;
  ulonglong *local_270;
  undefined1 local_268;
  WCHAR local_260 [48];
  undefined1 *local_200;
  undefined8 local_1f8;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStackY_358;
  local_200 = (undefined1 *)0x0;
  local_1f8 = 0x2000000000;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x298));
  iVar9 = 0;
  bVar7 = false;
  if ((longlong)*(int *)(param_1 + 0x2c8) != 0) {
    piVar14 = *(int **)(param_1 + 0x2c0);
    piVar15 = piVar14 + (longlong)*(int *)(param_1 + 0x2c8) * 0xe;
    plVar1 = (longlong *)(param_1 + 0x238);
    bVar7 = false;
    do {
      uVar17 = local_1f8;
      iVar13 = *piVar14;
      if (*(char *)((longlong)piVar14 + 0x31) == '\x01') {
        lVar22 = (longlong)(int)local_1f8;
        uVar8 = (int)local_1f8 + 1;
        local_1f8 = CONCAT44(local_1f8._4_4_,uVar8);
        if (local_1f8._4_4_ < uVar8) {
          FUN_1456cba76(local_280,uVar17 & 0xffffffff);
        }
        puVar10 = local_200;
        if (local_200 == (undefined1 *)0x0) {
          puVar10 = local_280;
        }
        *(int *)(puVar10 + lVar22 * 4) = iVar13;
      }
      else if (iVar13 < *(int *)(param_1 + 0x240)) {
        lVar12 = (longlong)iVar13 * 0x40;
        lVar22 = *plVar1 + lVar12;
        if (*(int *)(*plVar1 + 0x30 + lVar12) != piVar14[10]) {
          *(int *)(lVar22 + 0x30) = piVar14[10];
          bVar7 = true;
        }
        iVar13 = *(int *)(lVar22 + 0x28);
        iVar4 = piVar14[8];
        if (iVar13 == iVar4) {
          if (1 < iVar13) {
            lVar12 = *(longlong *)(piVar14 + 6);
            lVar18 = 0;
            while( true ) {
              uVar16 = *(ushort *)(*(longlong *)(lVar22 + 0x20) + lVar18);
              uVar17 = (ulonglong)uVar16;
              uVar19 = *(ushort *)(lVar12 + lVar18);
              if (uVar16 != uVar19) break;
              if (uVar16 == 0) goto LAB_14691f8ad;
LAB_14691f920:
              lVar18 = lVar18 + 2;
            }
            if ((uVar19 | uVar16) < 0x80) {
              uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              uVar20 = (ulonglong)uVar19;
              uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
              if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar20]) goto LAB_14691f920;
            }
            if (uVar16 != uVar19) goto LAB_14691f968;
          }
        }
        else if (iVar13 + iVar4 != 1) {
          lVar12 = *(longlong *)(piVar14 + 6);
LAB_14691f968:
          iVar13 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar13 = iVar9;
          }
          FUN_1402980a2((longlong *)(lVar22 + 0x20),lVar12,iVar13);
          *(undefined1 *)(lVar22 + 0x38) = 1;
        }
      }
      else {
        FUN_146926eb8(plVar1,iVar13 + 1);
        lVar12 = *plVar1;
        lVar18 = (longlong)iVar13 * 0x40;
        lVar22 = lVar12 + lVar18;
        iVar13 = piVar14[4] + -1;
        if (piVar14[4] == 0) {
          iVar13 = iVar9;
        }
        FUN_1402980a2(lVar22 + 0x10,*(undefined8 *)(piVar14 + 2),iVar13);
        *(int *)(lVar22 + 0x30) = piVar14[10];
        *(int *)(lVar22 + 0x34) = piVar14[0xb];
        lVar12 = lVar12 + lVar18;
        iVar13 = piVar14[8] + -1;
        if (piVar14[8] == 0) {
          iVar13 = iVar9;
        }
        FUN_1402980a2(lVar12 + 0x20,*(undefined8 *)(piVar14 + 6),iVar13);
        *(char *)(lVar12 + 0x39) = (char)piVar14[0xc];
      }
LAB_14691f8ad:
      piVar14 = piVar14 + 0xe;
    } while (piVar14 != piVar15);
    if (0 < (longlong)(int)local_1f8) {
      plVar2 = (longlong *)(param_1 + 0x248);
      lVar22 = (longlong)(int)local_1f8;
      do {
        puVar10 = local_200;
        if (local_200 == (undefined1 *)0x0) {
          puVar10 = local_280;
        }
        iVar9 = *(int *)(puVar10 + lVar22 * 4 + -4);
        if (iVar9 < *(int *)(param_1 + 0x240)) {
          FUN_144a7e010((longlong)iVar9 * 0x40 + *plVar1 + 0x10);
        }
        local_2a0 = 0x100000000;
        local_290 = 0xffffffff;
        local_288 = 0;
        local_298 = param_1 + 600;
        if (*(int *)(param_1 + 0x270) != 0) {
          FUN_1449c0562(&local_2a0);
        }
        local_2c8 = local_290;
        uVar6 = local_2c8;
        local_2c0 = local_288;
        local_2bc = local_284;
        local_2d8 = local_2a0;
        local_2d0 = local_298;
        local_2a8 = 0;
        local_2c8._4_4_ = (int)((ulonglong)local_290 >> 0x20);
        bVar21 = local_2c8._4_4_ < *(int *)(local_298 + 0x18);
        iVar13 = local_2c8._4_4_;
        local_2e0 = plVar2;
        local_2c8 = uVar6;
        local_2b8 = plVar2;
        local_2b0 = plVar2;
        if (bVar21) {
          do {
            iVar4 = *(int *)(*local_2e0 + 0x10 + (longlong)iVar13 * 0x20);
            if (iVar4 == iVar9) {
              FUN_1467d62e2(local_2b8);
              local_2a8 = CONCAT11(local_2a8._1_1_,1);
            }
            else if (iVar9 < iVar4) {
              *(int *)(*local_2e0 + (longlong)iVar13 * 0x20 + 0x10) = iVar4 + -1;
            }
            local_2c8 = CONCAT44(local_2c8._4_4_,(uint)local_2c8 & ~local_2d8._4_4_);
            FUN_1449c0562(&local_2d8);
            iVar13 = local_2c8._4_4_;
          } while (local_2c8._4_4_ < *(int *)(local_2d0 + 0x18));
          if (((local_2a8 & 1) != 0) && (local_2a8._1_1_ == '\x01')) {
            FUN_1457c8bde(local_2b0,(int)local_2b0[1] - *(int *)((longlong)local_2b0 + 0x34),1);
          }
        }
        bVar21 = 1 < lVar22;
        lVar22 = lVar22 + -1;
      } while (bVar21);
    }
  }
  iVar9 = *(int *)(param_1 + 0x2cc);
  FUN_14691da56(*(undefined8 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c8));
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if ((iVar9 < 0) && (*(int *)(param_1 + 0x2cc) != 0)) {
    FUN_1469273e2(param_1 + 0x2c0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x298));
  if (local_200 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar9 = *(int *)(param_1 + 0x240);
  if (iVar9 == 0) {
    bVar21 = false;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x238);
    iVar13 = 0;
    bVar21 = false;
    do {
      lVar22 = *plVar1;
      lVar12 = (longlong)iVar13 * 0x40;
      puVar3 = (undefined8 *)(lVar22 + lVar12);
      if (*(int *)(lVar22 + 0x18 + lVar12) < 2) {
        DestroyWindow(*(HWND *)(lVar22 + lVar12));
        DestroyWindow((HWND)puVar3[1]);
        FUN_146927412(plVar1,iVar13);
        FUN_146927346(plVar1);
        iVar9 = iVar9 + -1;
        bVar21 = true;
      }
      else {
        if (*(HWND *)(lVar22 + lVar12) == (HWND)0x0) {
          WVar5 = *(WPARAM *)(param_1 + 200);
          pHVar11 = CreateWindowExW(0,L"Static",(LPCWSTR)puVar3[2],0x5000000d,0,0,1,1,
                                    *(HWND *)(param_1 + 0xd8),(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0)
          ;
          if (WVar5 != 0) {
            SendMessageW(pHVar11,0x30,WVar5,0);
          }
          SetWindowLongW(pHVar11,-0x15,-1);
          *puVar3 = pHVar11;
          local_268 = 0;
          local_280._0_8_ = local_260;
          unique0x10000841 = (WCHAR *)local_280._0_8_;
          local_270 = local_60;
          FUN_146922ef8(local_280,0,puVar3 + 4);
          WVar5 = *(WPARAM *)(param_1 + 200);
          *stack0xfffffffffffffd88 = L'\0';
          pHVar11 = CreateWindowExW(0,L"Static",(LPCWSTR)local_280._0_8_,0x5000010d,0,0,1,1,
                                    *(HWND *)(param_1 + 0xd8),(HMENU)0x8808,(HINSTANCE)0x0,
                                    (LPVOID)0x0);
          if (WVar5 != 0) {
            SendMessageW(pHVar11,0x30,WVar5,0);
          }
          SetWindowLongW(pHVar11,-0x15,-1);
          puVar3[1] = pHVar11;
          FUN_144724f3c(local_280);
          bVar21 = true;
        }
        else if (*(char *)(puVar3 + 7) == '\x01') {
          *(undefined1 *)(puVar3 + 7) = 0;
          local_268 = 0;
          local_280._0_8_ = local_260;
          unique0x10000849 = (WCHAR *)local_280._0_8_;
          local_270 = local_60;
          FUN_146922ef8(local_280,0,puVar3 + 4);
          *stack0xfffffffffffffd88 = L'\0';
          SetWindowTextW((HWND)puVar3[1],(LPCWSTR)local_280._0_8_);
          FUN_144724f3c(local_280);
        }
        iVar13 = iVar13 + 1;
      }
    } while (iVar13 != iVar9);
  }
  if (bVar7) {
    InvalidateRect(*(HWND *)(param_1 + 0xd8),(RECT *)0x0,0);
  }
  if (bVar21) {
    SendMessageW(*(HWND *)(param_1 + 0xe0),0xb,0,0);
    GetClientRect(*(HWND *)(param_1 + 0xd8),(LPRECT)local_280);
    iVar9 = FUN_146926f32(param_1,(ulonglong)stack0xfffffffffffffd88 & 0xffffffff,LStack_274,
                          &local_2e0);
    if (iVar9 == *(int *)(param_1 + 0x2d0)) {
      local_2e0 = &local_2a0;
      local_2a0 = CONCAT44(local_2a0._4_4_,0x21c);
      FUN_146925f1e(param_1,(ulonglong)stack0xfffffffffffffd88 & 0xffffffff,LStack_274);
    }
    else {
      *(int *)(param_1 + 0x2d0) = iVar9;
      FUN_14691f22c(param_1,(ulonglong)stack0xfffffffffffffd88 & 0xffffffff,LStack_274,0);
    }
    RedrawWindow(*(HWND *)(param_1 + 0xd8),(RECT *)0x0,(HRGN)0x0,0x195);
    SendMessageW(*(HWND *)(param_1 + 0xe0),0xb,1,0);
  }
  if ((local_60[0] ^ (ulonglong)auStackY_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14691ffcc FUN_14691ffcc body=1279 status=ok
// SIG undefined FUN_14691ffcc(void)

/* WARNING: Removing unreachable block (ram,0x00014692018a) */
/* WARNING: Removing unreachable block (ram,0x000146920278) */

void FUN_14691ffcc(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  size_t sVar9;
  LRESULT LVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  wchar_t *_Str;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  undefined1 auStackY_c8 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_c8;
  if (*(char *)(param_1 + 0x2e9) == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x48);
    local_78._0_4_ = (undefined4)uVar5;
    local_78._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_70._0_4_ = (undefined4)uVar6;
    uStack_70._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    *(undefined4 *)(param_1 + 0x40) = (undefined4)local_78;
    *(undefined4 *)(param_1 + 0x44) = local_78._4_4_;
    *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_70;
    *(undefined4 *)(param_1 + 0x4c) = uStack_70._4_4_;
    local_78 = uVar5;
    uStack_70 = uVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      lVar1 = param_1 + 0x90;
      iVar13 = *(int *)(param_1 + 0xa0);
      iVar3 = *(int *)(param_1 + 0x9c);
      puVar15 = *(undefined8 **)(param_1 + 0x40);
      puVar17 = puVar15 + (longlong)*(int *)(param_1 + 0x48) * 6;
      do {
        _Str = L"";
        if (*(int *)(puVar15 + 1) != 0) {
          _Str = (wchar_t *)*puVar15;
        }
        pwVar7 = wcschr(_Str,L'\n');
        while (pwVar7 != (wchar_t *)0x0) {
          uVar16 = (ulonglong)((longlong)pwVar7 - (longlong)_Str) >> 1;
          if (_Str < pwVar7) {
            uVar16 = (ulonglong)((int)uVar16 - (uint)(pwVar7[-1] == L'\r'));
          }
          FUN_14006620a(&local_78,_Str,uVar16);
          local_68 = CONCAT31(local_68._1_3_,*(undefined1 *)(puVar15 + 2));
          uStack_64 = *(undefined8 *)((longlong)puVar15 + 0x14);
          local_58 = puVar15[4];
          local_50 = CONCAT22(1,*(undefined2 *)(puVar15 + 5));
          FUN_146927940(lVar1);
          uVar14 = *(uint *)(param_1 + 0xa0);
          *(uint *)(param_1 + 0xa0) = uVar14 + 1;
          lVar4 = *(longlong *)(param_1 + 0x90);
          lVar8 = (ulonglong)(uVar14 & *(uint *)(param_1 + 0x98)) * 0x30;
          *(undefined8 *)(lVar4 + lVar8) = 0;
          *(undefined8 *)(lVar4 + lVar8) = local_78;
          *(undefined4 *)(lVar4 + 8 + lVar8) = (undefined4)uStack_70;
          *(undefined4 *)(lVar4 + 0xc + lVar8) = uStack_70._4_4_;
          puVar2 = (undefined4 *)(lVar4 + 0x1c + lVar8);
          *puVar2 = uStack_5c;
          puVar2[1] = (undefined4)local_58;
          puVar2[2] = local_58._4_4_;
          puVar2[3] = local_50;
          puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar8);
          *puVar2 = local_68;
          puVar2[1] = (undefined4)uStack_64;
          puVar2[2] = uStack_64._4_4_;
          puVar2[3] = uStack_5c;
          uStack_70 = 0;
          local_78 = 0;
          _Str = pwVar7 + 1;
          pwVar7 = wcschr(_Str,L'\n');
        }
        sVar9 = wcslen(_Str);
        if ((int)sVar9 != 0) {
          FUN_140056680(&local_78,_Str);
          local_68 = CONCAT31(local_68._1_3_,*(undefined1 *)(puVar15 + 2));
          uStack_64 = *(undefined8 *)((longlong)puVar15 + 0x14);
          local_58 = puVar15[4];
          local_50 = CONCAT22(1,*(undefined2 *)(puVar15 + 5));
          FUN_146927940(lVar1);
          uVar14 = *(uint *)(param_1 + 0xa0);
          *(uint *)(param_1 + 0xa0) = uVar14 + 1;
          lVar4 = *(longlong *)(param_1 + 0x90);
          lVar8 = (ulonglong)(uVar14 & *(uint *)(param_1 + 0x98)) * 0x30;
          *(undefined8 *)(lVar4 + lVar8) = 0;
          *(undefined8 *)(lVar4 + lVar8) = local_78;
          local_78 = 0;
          *(undefined4 *)(lVar4 + 8 + lVar8) = (undefined4)uStack_70;
          *(undefined4 *)(lVar4 + 0xc + lVar8) = uStack_70._4_4_;
          uStack_70 = 0;
          puVar2 = (undefined4 *)(lVar4 + 0x1c + lVar8);
          *puVar2 = uStack_5c;
          puVar2[1] = (undefined4)local_58;
          puVar2[2] = local_58._4_4_;
          puVar2[3] = local_50;
          puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar8);
          *puVar2 = local_68;
          puVar2[1] = (undefined4)uStack_64;
          puVar2[2] = uStack_64._4_4_;
          puVar2[3] = uStack_5c;
        }
        puVar15 = puVar15 + 6;
      } while (puVar15 != puVar17);
      iVar19 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c);
      SendMessageW(*(HWND *)(param_1 + 0xe0),0xb,0,0);
      if (iVar19 < 0x30d41) {
        iVar13 = iVar13 - iVar3;
        uVar14 = iVar19 - iVar13;
        uVar16 = 0xffffffffffffffff;
        uVar11 = 0xffffffff;
      }
      else {
        uVar14 = iVar19 - 200000;
        FUN_14691dd20(lVar1,*(int *)(param_1 + 0x9c),*(int *)(param_1 + 0x9c) + iVar19 + -200000);
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + uVar14;
        *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + uVar14;
        if (199999 < uVar14) {
          uVar14 = 200000;
        }
        uVar12 = uVar14;
        if (*(char *)(param_1 + 0x2e8) == '\0') {
          LVar10 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x18e,0,0);
          uVar11 = (int)LVar10 - uVar14;
          if ((int)uVar11 < 1) {
            uVar11 = 0;
          }
          LVar10 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x19f,0,0);
          uVar18 = (int)LVar10 - uVar14;
          uVar16 = (ulonglong)uVar18;
          if ((int)uVar18 < 1) {
            uVar16 = 0;
          }
        }
        else {
          uVar11 = 0xffffffff;
          uVar16 = 0xffffffffffffffff;
        }
        do {
          SendMessageW(*(HWND *)(param_1 + 0xe0),0x182,0,0);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        iVar13 = 200000 - uVar14;
      }
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        FUN_146923c52(param_1,(ulonglong)
                              (*(int *)(param_1 + 0x9c) + iVar13 & *(uint *)(param_1 + 0x98)) * 0x30
                              + *(longlong *)(param_1 + 0x90),*(int *)(param_1 + 0x1f0) + iVar13);
        iVar13 = iVar13 + 1;
      }
      iVar13 = *(int *)(param_1 + 0x4c);
      FUN_14691ddbe(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
      *(undefined4 *)(param_1 + 0x48) = 0;
      if ((iVar13 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
        FUN_146927986(param_1 + 0x40);
      }
      if (*(char *)(param_1 + 0x2e8) == '\x01') {
        FUN_146923ba8(param_1);
      }
      else if (uVar11 != 0xffffffff) {
        SendMessageW(*(HWND *)(param_1 + 0xe0),0x19e,uVar16,0);
        SendMessageW(*(HWND *)(param_1 + 0xe0),0x185,1,uVar16);
        SetWindowPos(*(HWND *)(param_1 + 0x120),*(HWND *)(param_1 + 0xd8),1,1,1,1,0x614);
        SendMessageW(*(HWND *)(param_1 + 0xe0),0x197,(ulonglong)uVar11,0);
      }
      RedrawWindow(*(HWND *)(param_1 + 0xe8),(RECT *)0x0,(HRGN)0x0,1);
      SendMessageW(*(HWND *)(param_1 + 0xe0),0xb,1,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStackY_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469204cc FUN_1469204cc body=143 status=ok
// SIG undefined FUN_1469204cc(void)

void FUN_1469204cc(longlong param_1)

{
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x1e8));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x1d0));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x1d8));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x1e0));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x160));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x168));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x170));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x178));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x180));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x188));
  DeleteObject(*(HGDIOBJ *)(param_1 + 400));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x198));
                    /* WARNING: Could not recover jumptable at 0x000146920558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x1a8));
  return;
}



// FUNCTION 14692055c FUN_14692055c body=7434 status=ok
// SIG undefined FUN_14692055c(void)

undefined1 * FUN_14692055c(longlong param_1,tagPOINT param_2,UINT param_3,HDC param_4,HWND param_5)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  tagPOINT tVar5;
  char cVar6;
  SHORT SVar7;
  DWORD DVar8;
  int iVar9;
  BOOL BVar10;
  UINT UVar11;
  uint uVar12;
  undefined4 uVar13;
  HHOOK hhk;
  HGDIOBJ pvVar14;
  HWND pHVar15;
  LRESULT LVar16;
  LRESULT LVar17;
  HRGN hrgnDst;
  HDC pHVar18;
  size_t sVar19;
  COLORREF *pCVar20;
  HBRUSH pHVar21;
  undefined2 *puVar22;
  int iVar23;
  uint nIDDlgItem;
  LPCWSTR lpchText;
  wchar_t *_Str;
  undefined8 *puVar24;
  COLORREF CVar25;
  ushort uVar26;
  ushort uVar27;
  ulonglong uVar28;
  LONG LVar29;
  undefined1 *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  short sVar33;
  int iVar34;
  longlong lVar35;
  float fVar36;
  undefined1 auStackY_9c8 [32];
  undefined1 local_960 [8];
  longlong *local_958;
  HDC local_950;
  tagRECT local_948;
  tagRECT local_938;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8 [2];
  undefined8 local_8a8;
  undefined1 local_878 [12];
  LONG LStack_86c;
  RECT *local_868;
  undefined1 local_860;
  undefined1 local_858 [128];
  RECT local_7d8 [24];
  RECT local_658 [32];
  RECT local_458 [64];
  RECT local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_9c8;
  sVar33 = (short)param_5;
  uVar12 = (uint)param_4;
  if ((int)param_3 < 0x83) {
    if ((int)param_3 < 0x2b) {
      if ((int)param_3 < 0xf) {
        if (param_3 == 3) {
          GetWindowRect(*(HWND *)(param_1 + 0xd8),(LPRECT)local_878);
          *(undefined4 *)(param_1 + 0x2fc) = local_878._0_4_;
          *(undefined4 *)(param_1 + 0x300) = local_878._4_4_;
        }
        else {
          if (param_3 == 5) {
            if (((ulonglong)param_4 & 0xfffffffffffffffd) == 0) {
              FUN_14691f22c(param_1,(ulonglong)param_5 & 0xffff,(ulonglong)param_5 >> 0x10 & 0xffff,
                            1);
              GetWindowRect(*(HWND *)(param_1 + 0xd8),&local_948);
              *(LONG *)(param_1 + 0x2f4) = local_948.right - local_948.left;
              *(LONG *)(param_1 + 0x2f8) = local_948.bottom - local_948.top;
            }
LAB_14692068c:
            puVar30 = (undefined1 *)0x0;
            goto LAB_146920e5b;
          }
          if (param_3 == 7) {
            SetFocus(*(HWND *)(param_1 + 0xf0));
            SendMessageW(*(HWND *)(param_1 + 0xf0),0xb1,0,-1);
          }
        }
      }
      else if (param_3 == 0x10) {
        PostQuitMessage(0);
      }
      else {
        if (param_3 == 0x14) {
          GetClientRect((HWND)param_2,(LPRECT)local_878);
          FillRect(param_4,(LPRECT)local_878,*(HBRUSH *)(param_1 + 0x168));
          SelectObject(param_4,*(HGDIOBJ *)(param_1 + 0x1d0));
          pvVar14 = GetStockObject(5);
          SelectObject(param_4,pvVar14);
          local_58._0_8_ = (HDC *)0x880300008802;
          local_58.right = 0x8804;
          lVar35 = 0;
          do {
            pHVar15 = GetDlgItem((HWND)param_2,*(int *)((longlong)&local_58.left + lVar35));
            BVar10 = IsWindowVisible(pHVar15);
            if (BVar10 != 0) {
              GetClientRect(pHVar15,&local_938);
              MapWindowPoints(pHVar15,(HWND)param_2,(LPPOINT)&local_938,2);
              Rectangle(param_4,local_938.left + -1,local_938.top + -1,local_938.right + 1,
                        local_938.bottom + 1);
            }
            lVar35 = lVar35 + 4;
          } while (lVar35 != 0xc);
LAB_1469210e4:
          puVar30 = &DAT_00000001;
          goto LAB_146920e5b;
        }
        if (param_3 == 0xf) {
          local_950 = BeginPaint((HWND)param_2,(LPPAINTSTRUCT)local_878);
          GetClientRect((HWND)param_2,&local_938);
          local_58._0_8_ = &local_950;
          local_58._8_8_ = param_1;
          FUN_1469228a0(param_1,local_938._8_8_ & 0xffffffff,local_938.bottom);
          EndPaint((HWND)param_2,(LPPAINTSTRUCT)local_878);
          goto LAB_14692068c;
        }
      }
    }
    else if ((int)param_3 < 0x2e) {
      if (param_3 == 0x2b) {
        pHVar18 = *(HDC *)(param_5 + 8);
        if (param_5->unused == 5) {
          iVar23 = GetWindowTextW(*(HWND *)(param_5 + 6),(LPWSTR)local_878,0x200);
          if (*(HWND *)(param_5 + 6) == *(HWND *)(param_1 + 0x120)) {
            if (param_5[0xd].unused != 1) {
              FillRect(pHVar18,(RECT *)(param_5 + 10),*(HBRUSH *)(param_1 + 0x168));
              DVar8 = GetSysColor(0xe);
              SetTextColor(pHVar18,DVar8);
              SelectObject(pHVar18,*(HGDIOBJ *)(param_1 + 0xd0));
              DrawTextW(pHVar18,(LPCWSTR)local_878,iVar23,(RECT *)(param_5 + 10),0x24);
            }
          }
          else {
            pHVar21 = *(HBRUSH *)(param_1 + 0x168);
            uVar12 = GetWindowLongW(*(HWND *)(param_5 + 6),-0x15);
            if (uVar12 != 0xffffffff) {
              pHVar21 = *(HBRUSH *)(param_1 + 0x180 + (ulonglong)(uVar12 & 1) * 8);
              SetBkColor(pHVar18,*(COLORREF *)(param_1 + 0x144 + (ulonglong)(uVar12 & 1) * 4));
            }
            SelectObject(pHVar18,pHVar21);
            local_938._0_8_ = *(undefined8 *)(param_5 + 10);
            local_938._8_8_ = *(undefined8 *)(param_5 + 0xc);
            DrawTextW(pHVar18,(LPCWSTR)local_878,iVar23,&local_938,0x18420);
            local_58._0_8_ = *(undefined8 *)(param_5 + 10);
            local_58.bottom = param_5[0xb].unused + 1;
            local_58.right = local_938.right;
            FillRect(pHVar18,&local_58,pHVar21);
            local_58._8_8_ = *(undefined8 *)(param_5 + 0xc);
            local_58.top = param_5[0xb].unused;
            local_58.left = local_938.right;
            FillRect(pHVar18,&local_58,pHVar21);
            if (local_938.bottom < param_5[0xd].unused) {
              local_58.bottom = param_5[0xd].unused;
              local_58.right = local_938.right;
              local_58.top = local_938.bottom;
              local_58.left = ((RECT *)(param_5 + 10))->left;
              FillRect(pHVar18,&local_58,pHVar21);
            }
            sVar19 = wcslen((wchar_t *)local_878);
            ExtTextOutW(pHVar18,param_5[10].unused,param_5[0xb].unused + 1,0,(RECT *)(param_5 + 10),
                        (LPCWSTR)local_878,(UINT)sVar19,(INT *)0x0);
          }
        }
        else if ((param_5[1].unused == 0x8801) && (param_5[2].unused != -1)) {
          puVar30 = &DAT_00000001;
          if (param_5[3].unused == 4) goto LAB_146920e5b;
          if (param_5[3].unused - 1U < 2) {
            iVar23 = param_5[0xd].unused;
            lVar31 = (ulonglong)
                     ((param_5[0xe].unused - *(int *)(param_1 + 0x1f0)) + *(int *)(param_1 + 0x9c) &
                     *(uint *)(param_1 + 0x98)) * 0x30;
            lVar35 = *(longlong *)(param_1 + 0x90) + lVar31;
            iVar9 = param_5[0xb].unused;
            iVar34 = *(int *)(param_1 + 0x1f8);
            uVar26 = *(ushort *)(*(longlong *)(param_1 + 0x90) + 0x2a + lVar31);
            if ((param_5[4].unused & 1) == 0) {
              FillRect(pHVar18,(RECT *)(param_5 + 10),*(HBRUSH *)(param_1 + 0x170));
              sVar33 = *(short *)(lVar35 + 0x28);
              CVar25 = 0xcccccc;
              if (sVar33 == 0xe) {
                CVar25 = 0xdcdc;
              }
              DVar8 = 0xdc;
              if (sVar33 != 0xc) {
                DVar8 = CVar25;
              }
            }
            else {
              pHVar21 = GetSysColorBrush(0xd);
              FillRect(pHVar18,(RECT *)(param_5 + 10),pHVar21);
              DVar8 = GetSysColor(0xe);
            }
            SetTextColor(pHVar18,DVar8);
            local_878._0_8_ = local_858;
            local_860 = 0;
            local_868 = &local_58;
            unique0x100020e2 = (tagPOINT)local_878._0_8_;
            FUN_1469223c6(param_1,local_878,lVar35,0);
            uVar32 = (longlong)stack0xfffffffffffff790 - local_878._0_8_;
            *(undefined2 *)stack0xfffffffffffff790 = 0;
            TextOutW(pHVar18,0,
                     ((iVar23 + iVar9) / 2 - iVar34 / 2) - (int)((uVar26 - 1) * iVar34) / 2,
                     (LPCWSTR)local_878._0_8_,(int)(uVar32 >> 1));
            FUN_144724f3c(local_878);
            goto LAB_146920e5b;
          }
        }
      }
      else if (param_3 == 0x2c) {
        param_5[4].unused = *(int *)(param_1 + 0x1f8);
        goto LAB_1469210e4;
      }
    }
    else if (param_3 == 0x2e) {
      if (*(HWND *)(param_1 + 0xe0) == param_5) {
        if ((short)param_4 == 0x23) {
LAB_146920ca2:
          SVar7 = GetKeyState(0x10);
          if (-1 < SVar7) {
            FUN_146922bfc(param_1);
            puVar30 = (undefined1 *)0xfffffffffffffffe;
            goto LAB_146920e5b;
          }
        }
        else if (((uVar12 & 0xffff) == 0x43) || ((uVar12 & 0xffff) == 0x2d)) {
          SVar7 = GetKeyState(0x11);
          if (SVar7 < 0) {
            local_938.left = 0;
            local_938.top = 0;
            local_938.right = 0;
            local_938.bottom = 0;
            uVar12 = FUN_146922b9c(param_1);
            if (uVar12 != 0) {
              local_878._0_8_ = local_858;
              local_860 = 0;
              local_868 = local_458;
              uVar32 = 0;
              tVar5 = (tagPOINT)local_878._0_8_;
              do {
                stack0xfffffffffffff790 = tVar5;
                LVar16 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x199,
                                      (longlong)*(int *)(local_938._0_8_ + uVar32 * 4),0);
                lVar35 = (ulonglong)
                         (((int)LVar16 - *(int *)(param_1 + 0x1f0)) + *(int *)(param_1 + 0x9c) &
                         *(uint *)(param_1 + 0x98)) * 0x30;
                iVar23 = *(int *)(*(longlong *)(param_1 + 0x90) + 8 + lVar35);
                iVar9 = iVar23 + -1;
                if (iVar23 == 0) {
                  iVar9 = 0;
                }
                FUN_1449668a2(local_878,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + lVar35),
                              iVar9);
                if (local_868 <= (RECT *)((longlong)stack0xfffffffffffff790 + 4)) {
                  FUN_140213274(local_878,2);
                }
                *(int *)register0x00000000 = 0xa000d;
                uVar32 = uVar32 + 1;
                tVar5 = (tagPOINT)((longlong)register0x00000000 + 4);
              } while (uVar12 != uVar32);
              *(undefined2 *)&((HWND)((longlong)register0x00000000 + 4))->unused = 0;
              unique0x100020ea = (tagPOINT)((longlong)register0x00000000 + 4);
              FUN_142855b70(local_878._0_8_);
              FUN_144724f3c(local_878);
            }
            if (local_938._0_8_ != 0) {
              FUN_1400020a8();
            }
          }
          else if ((short)param_4 == 0x23) goto LAB_146920ca2;
        }
      }
    }
    else if (param_3 == 0x4e) {
      if ((param_5[4].unused == -0xc) && (*(longlong *)(param_5 + 2) - 0x8805U < 3)) {
        uVar12 = param_5[0x10].unused;
        UVar11 = GetDlgItemTextW((HWND)param_2,(int)*(longlong *)(param_5 + 2),(LPWSTR)local_878,
                                 0x20);
        if ((uVar12 & 1) == 0) {
          if ((uVar12 & 0x40) == 0) {
            pCVar20 = (COLORREF *)(param_1 + 0x14c);
            puVar24 = (undefined8 *)(param_1 + 400);
          }
          else {
            puVar24 = (undefined8 *)(param_1 + 0x198);
            pCVar20 = (COLORREF *)(param_1 + 0x150);
          }
        }
        else {
          puVar24 = (undefined8 *)(param_1 + 0x1a0);
          pCVar20 = (COLORREF *)(param_1 + 0x154);
        }
        pHVar21 = (HBRUSH)*puVar24;
        CVar25 = *pCVar20;
        pvVar14 = GetStockObject(5);
        SelectObject(*(HDC *)(param_5 + 8),pvVar14);
        FillRect(*(HDC *)(param_5 + 8),(RECT *)(param_5 + 10),pHVar21);
        SetBkColor(*(HDC *)(param_5 + 8),CVar25);
        SetTextColor(*(HDC *)(param_5 + 8),*(COLORREF *)(param_1 + 0x138));
        DrawTextW(*(HDC *)(param_5 + 8),(LPCWSTR)local_878,UVar11,(RECT *)(param_5 + 10),0x125);
        SelectObject(*(HDC *)(param_5 + 8),*(HGDIOBJ *)(param_1 + 0x1d0));
        Rectangle(*(HDC *)(param_5 + 8),param_5[10].unused,param_5[0xb].unused,param_5[0xc].unused,
                  param_5[0xd].unused);
        puVar30 = &DAT_00000004;
        goto LAB_146920e5b;
      }
    }
    else if (param_3 == 0x53) {
      DVar8 = GetCurrentThreadId();
      hhk = SetWindowsHookExW(5,FUN_146922286,(HINSTANCE)0x0,DVar8);
      MessageBoxW(*(HWND *)(param_1 + 0xd8),
                  L"Welcome to Unreal Console!\r\n\r\nUnreal Console is a replacement of the built-in console. If you still want to use windows console, remove \'-NewConsole\'\r\n\r\nUse double down-arrow in top right corner to expand console to show command line and other features.\r\n\r\nConsole commands:\r\n  showdate\t - Show time in log\r\n  showdatetime\t - Show date/time in log\r\n  hidedatetime\t - Hide date/time from log\r\n  <color>\t - Change color of console\r\n\r\nSupported colors: red,gray,darkgray,lightblue,darkblue\r\n\r\nConsole settings are saved separately for client/server/other in basedir folder\r\n\r\nEnjoy!\r\n"
                  ,L"Unreal Console Help",0x40);
      UnhookWindowsHookEx(hhk);
    }
    goto switchD_14692137f_default;
  }
  if ((int)param_3 < 0x134) {
    iVar23 = (int)param_5 >> 0x10;
    if ((int)param_3 < 0xa1) {
      switch(param_3) {
      case 0x83:
        param_5[1].unused = param_5[1].unused + 0x1b;
        param_5->unused = param_5->unused + 1;
        param_5[3].unused = param_5[3].unused + -1;
        param_5[2].unused = param_5[2].unused + -1;
        goto LAB_14692068c;
      case 0x84:
        iVar23 = FUN_1469232ea(param_1,(int)sVar33,iVar23);
        if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_9c8);
        }
        puVar30 = (undefined1 *)(longlong)iVar23;
        break;
      case 0x85:
        GetWindowRect((HWND)param_2,&local_938);
        if (param_4 == (HDC)&DAT_00000001) {
          hrgnDst = CreateRectRgn(local_938.left,local_938.top,local_938.right,local_938.bottom);
        }
        else {
          hrgnDst = CreateRectRgn(0,0,0,0);
          iVar23 = CombineRgn(hrgnDst,(HRGN)param_4,(HRGN)0x0,5);
          if (iVar23 == 0) {
            DeleteObject(hrgnDst);
            hrgnDst = (HRGN)0x0;
          }
        }
        pHVar18 = GetDCEx((HWND)param_2,hrgnDst,0x483);
        if (hrgnDst != (HRGN)0x0 && pHVar18 == (HDC)0x0) {
          DeleteObject(hrgnDst);
        }
        iVar34 = local_938.right - local_938.left;
        iVar9 = local_938.bottom - local_938.top;
        iVar23 = 0;
        local_58.left = 0;
        local_58.top = 0;
        local_58.bottom = 0x1b;
        local_58.right = iVar34;
        FillRect(pHVar18,&local_58,*(HBRUSH *)(param_1 + 0x168));
        pvVar14 = GetStockObject(5);
        SelectObject(pHVar18,pvVar14);
        SelectObject(pHVar18,*(HGDIOBJ *)(param_1 + 0x1d8));
        Rectangle(pHVar18,0,0,iVar34,iVar9);
        DrawIconEx(pHVar18,3,3,*(HICON *)(param_1 + 0xc0),0x15,0x15,0,(HBRUSH)0x0,3);
        SetBkColor(pHVar18,*(COLORREF *)(param_1 + 0x13c));
        SetTextColor(pHVar18,*(COLORREF *)(param_1 + 0x138));
        SelectObject(pHVar18,*(HGDIOBJ *)(param_1 + 200));
        local_58.left = local_58.left + 0x20;
        local_58.right = local_58.right + -0x6c;
        if (*(int *)(param_1 + 0x338) == 0) {
          lpchText = L"";
        }
        else {
          lpchText = *(LPCWSTR *)(param_1 + 0x330);
          iVar23 = *(int *)(param_1 + 0x338) + -1;
        }
        DrawTextW(pHVar18,lpchText,iVar23,&local_58,0x8024);
        SelectObject(pHVar18,*(HGDIOBJ *)(param_1 + 0x1e0));
        iVar23 = *(int *)(param_1 + 0x200);
        if ((iVar23 != -1) && (iVar9 = *(int *)(param_1 + 0x204), iVar9 == -1 || iVar23 == iVar9)) {
          if (iVar23 == 1000) {
            iVar23 = -0x51;
          }
          else if (iVar23 == 9) {
            iVar23 = -0x1b;
          }
          else if (iVar23 == 8) {
            iVar23 = -0x36;
          }
          else {
            iVar23 = 0;
          }
          local_878._4_4_ = 1;
          local_878._0_4_ = iVar34 + iVar23 + -0x1b;
          LStack_86c = 0x1b;
          local_878._8_4_ = iVar34 + -1 + iVar23;
          FillRect(pHVar18,(RECT *)local_878,
                   *(HBRUSH *)((ulonglong)(iVar9 != -1) * 0x10 + 400 + param_1));
        }
        bVar3 = *(byte *)(param_1 + 0x340);
        iVar23 = 0xe;
        if (bVar3 != 0) {
          iVar23 = 8;
        }
        iVar9 = 0x12;
        if (bVar3 != 0) {
          iVar9 = 0xc;
        }
        MoveToEx(pHVar18,iVar34 + -99,(uint)(bVar3 ^ 1) * 4 + 9,(LPPOINT)0x0);
        LineTo(pHVar18,iVar34 + -0x5f,(uint)bVar3 * 4 + 9);
        LineTo(pHVar18,iVar34 + -0x5a,iVar23);
        MoveToEx(pHVar18,iVar34 + -99,(uint)(bVar3 ^ 1) * 4 + 0xd,(LPPOINT)0x0);
        LineTo(pHVar18,iVar34 + -0x5f,(uint)bVar3 * 4 + 0xd);
        LineTo(pHVar18,iVar34 + -0x5a,iVar9);
        MoveToEx(pHVar18,iVar34 + -0x48,0xd,(LPPOINT)0x0);
        LineTo(pHVar18,iVar34 + -0x3f,0xd);
        local_878._0_4_ = 0x2c;
        GetWindowPlacement((HWND)param_2,(WINDOWPLACEMENT *)local_878);
        if (local_878._8_4_ == 3) {
          Rectangle(pHVar18,iVar34 + -0x29,10,iVar34 + -0x21,0x12);
          SelectObject(pHVar18,*(HGDIOBJ *)(param_1 + 0x168));
          Rectangle(pHVar18,iVar34 + -0x2c,0xd,iVar34 + -0x24,0x15);
        }
        else {
          Rectangle(pHVar18,iVar34 + -0x2e,8,iVar34 + -0x24,0x12);
        }
        puVar30 = (undefined1 *)0x0;
        MoveToEx(pHVar18,iVar34 + -0x12,9,(LPPOINT)0x0);
        LineTo(pHVar18,iVar34 + -9,0x12);
        MoveToEx(pHVar18,iVar34 + -10,9,(LPPOINT)0x0);
        LineTo(pHVar18,iVar34 + -0x13,0x12);
        ReleaseDC((HWND)param_2,pHVar18);
        break;
      case 0x86:
        RedrawWindow((HWND)param_2,(RECT *)0x0,(HRGN)0x0,0x100);
        goto LAB_1469210e4;
      default:
        if (param_3 == 0xa0) {
          iVar9 = FUN_1469232ea(param_1,(int)sVar33,iVar23);
          iVar23 = -1;
          if (0xfffffffd < iVar9 - 10U) {
            iVar23 = iVar9;
          }
          if (iVar9 == 0x14) {
            iVar23 = iVar9;
          }
          if (iVar9 == 1000) {
            iVar23 = iVar9;
          }
          if (iVar23 != *(int *)(param_1 + 0x200)) {
            *(int *)(param_1 + 0x200) = iVar23;
            RedrawWindow(*(HWND *)(param_1 + 0xd8),(RECT *)0x0,(HRGN)0x0,0x401);
            if (iVar23 != -1) {
              local_878._0_4_ = 0x18;
              local_878._4_4_ = 0x12;
              unique0x100020fa = param_2;
              TrackMouseEvent((LPTRACKMOUSEEVENT)local_878);
            }
          }
        }
        goto switchD_14692137f_default;
      }
      goto LAB_146920e5b;
    }
    if (param_3 != 0x111) {
      if (param_3 == 0x133) {
        SetBkColor(param_4,*(COLORREF *)(param_1 + 0x140));
        GetClientRect(param_5,(LPRECT)local_878);
        FillRect(param_4,(LPRECT)local_878,*(HBRUSH *)(param_1 + 0x178));
        SetTextColor(param_4,*(COLORREF *)(param_1 + 0x138));
        iVar23 = GetWindowTextLengthW(param_5);
        if (iVar23 == 0) {
          if (*(HWND *)(param_1 + 0xf0) == param_5) {
            _Str = L"Type command here";
          }
          else {
            _Str = L"Add exclude filter here";
            if (*(HWND *)(param_1 + 0x100) == param_5) {
              _Str = L"Add include filter here";
            }
          }
          sVar19 = wcslen(_Str);
          TextOutW(param_4,0,0,_Str,(int)sVar19);
        }
        goto LAB_146920826;
      }
      if ((param_3 == 0xa1) &&
         (((uVar12 = FUN_1469232ea(param_1,(int)sVar33,iVar23), uVar12 < 0x15 &&
           ((0x100300U >> (uVar12 & 0x1f) & 1) != 0)) || (uVar12 == 1000)))) {
        SetCapture(*(HWND *)(param_1 + 0xd8));
        *(uint *)(param_1 + 0x204) = uVar12;
        puVar30 = (undefined1 *)0x0;
        RedrawWindow(*(HWND *)(param_1 + 0xd8),(RECT *)0x0,(HRGN)0x0,0x401);
        goto LAB_146920e5b;
      }
      goto switchD_14692137f_default;
    }
    nIDDlgItem = uVar12 & 0xffff;
    if ((uVar12 & 0xffff0000) != 0x10000 || nIDDlgItem != 0x8801) {
      if ((uVar12 & 0xffff0000) == 0x3000000 && (uVar12 & 0xfffe) == 0x8802) {
        GetDlgItemTextW(*(HWND *)(param_1 + 0xd8),nIDDlgItem,(LPWSTR)local_878,0x400);
        lVar35 = (ulonglong)(nIDDlgItem != 0x8802) * 0x10;
        lVar31 = lVar35 + param_1 + 0x310;
        lVar35 = lVar35 + param_1;
        puVar24 = (undefined8 *)(lVar35 + 0x50);
        FUN_14020fad6(lVar31,local_878);
        local_938.left = 0;
        local_938.top = 0;
        local_938.right = 0;
        local_938.bottom = 0;
        FUN_1403de9f2(lVar31,&local_938,&DAT_149e001d8,1);
        if ((*(int *)(lVar35 + 0x58) != local_938.right) ||
           (cVar6 = FUN_1405d12b4(*puVar24,local_938._0_8_), cVar6 == '\0')) {
          FUN_140bee9ec(puVar24,&local_938);
          FUN_146922c52(param_1);
        }
        FUN_1447a1747(local_938._0_8_,local_938._8_8_ & 0xffffffff);
        if (local_938._0_8_ != 0) {
          FUN_1400020a8();
        }
      }
      else {
        switch(uVar12 & 0xffff) {
        case 0x8805:
          iVar23 = GetWindowTextW(*(HWND *)(param_1 + 0xf0),(LPWSTR)local_878,0x400);
          if (iVar23 != 0) {
            SetWindowTextW(*(HWND *)(param_1 + 0xf0),L"");
            iVar23 = *(int *)(param_1 + 0x308);
            lVar35 = 0;
            while( true ) {
              uVar26 = *(ushort *)(local_878 + lVar35);
              uVar32 = (ulonglong)uVar26;
              uVar27 = *(ushort *)((longlong)&DAT_149e1f770 + lVar35);
              if (uVar26 != uVar27) {
                if ((uVar27 | uVar26) < 0x80) {
                  uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
                  uVar28 = (ulonglong)uVar27;
                  uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
                  if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar28]) goto LAB_1469213ee;
                }
                if (uVar26 != uVar27) {
                  lVar35 = 0;
                  goto LAB_146921427;
                }
                uVar13 = 2;
                goto LAB_146921d3b;
              }
              if (uVar26 == 0) break;
LAB_1469213ee:
              lVar35 = lVar35 + 2;
            }
            uVar13 = 2;
            goto LAB_146921d3b;
          }
          break;
        case 0x8806:
          FUN_146922e94(param_1);
          *(undefined1 *)(param_1 + 0x2e8) = 1;
          break;
        case 0x8807:
          local_878._0_8_ = local_858;
          local_860 = 0;
          local_868 = local_7d8;
          unique0x100020f2 = (tagPOINT)local_878._0_8_;
          FUN_140212e80(local_878,L"LOGCHECKPOINT%i",*(undefined4 *)(param_1 + 0x2ec));
          FUN_1446f470e(&local_58,L"LogCheckpoint",1);
          local_938.left = local_878._0_4_;
          local_938.top = local_878._4_4_;
          local_938.right =
               (LONG)((ulonglong)((longlong)stack0xfffffffffffff790 - local_878._0_8_) >> 1);
          FUN_14691c4d2(param_1,&local_938,4,&local_58);
          *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + 1;
          local_8c8 = 0;
          uStack_8c0 = 0;
          local_8d8 = 0;
          uStack_8d0 = 0;
          local_8e8 = 0;
          uStack_8e0 = 0;
          local_8f8 = 0;
          uStack_8f0 = 0;
          local_908 = 0;
          uStack_900 = 0;
          local_918 = 0;
          uStack_910 = 0;
          local_928 = 0;
          uStack_920 = 0;
          local_938.left = 0;
          local_938.top = 0;
          local_938.right = 0;
          local_938.bottom = 0;
          FUN_141301ee6(&local_938,L"Log CHECKPOINT%i");
          SetDlgItemTextW(*(HWND *)(param_1 + 0xd8),0x8807,(LPCWSTR)&local_938);
          FUN_144724f3c(local_878);
          break;
        case 0x8808:
          local_878._0_8_ = local_858;
          local_860 = 0;
          local_868 = local_658;
          local_938.left = 0;
          local_938.top = 0;
          local_938.right = 0;
          local_938.bottom = 0;
          LVar29 = 0;
          unique0x10002102 = (tagPOINT)local_878._0_8_;
          if ((longlong)*(int *)(param_1 + 0x240) != 0) {
            lVar35 = (longlong)*(int *)(param_1 + 0x240) << 6;
            lVar31 = *(longlong *)(param_1 + 0x238) + 0x20;
            do {
              if (*(HWND *)(lVar31 + -0x18) == param_5) {
                FUN_146922ef8(local_878,&local_938,lVar31);
              }
              uVar4 = local_938._0_8_;
              lVar31 = lVar31 + 0x40;
              lVar35 = lVar35 + -0x40;
            } while (lVar35 != 0);
            lVar35 = (longlong)local_938.right;
            if (lVar35 != 0) {
              lVar31 = 0;
              do {
                puVar22 = &DAT_149dfb77a;
                if (*(int *)(uVar4 + 8 + lVar31) != 0) {
                  puVar22 = *(undefined2 **)(uVar4 + lVar31);
                }
                FUN_14279a7c2(puVar22,0,0);
                lVar31 = lVar31 + 0x10;
              } while (lVar35 * 0x10 != lVar31);
              LVar29 = local_938.right;
            }
          }
          FUN_1447a1747(local_938._0_8_,LVar29);
          if (local_938._0_8_ != 0) {
            FUN_1400020a8();
          }
          FUN_144724f3c(local_878);
        }
      }
      goto switchD_14692137f_default;
    }
    LVar16 = SendMessageW(*(HWND *)(param_1 + 0xe0),400,0,0);
    if (LVar16 != 0) {
      *(undefined1 *)(param_1 + 0x2e8) = 0;
    }
    pHVar15 = *(HWND *)(param_1 + 0xe8);
    UVar11 = 1;
    goto LAB_146920aa0;
  }
  if (0x201 < (int)param_3) {
    if ((int)param_3 < 0x2a2) {
      if (param_3 == 0x202) {
        if (*(int *)(param_1 + 0x204) != -1) {
          ReleaseCapture();
          iVar23 = *(int *)(param_1 + 0x204);
          *(undefined4 *)(param_1 + 0x204) = 0xffffffff;
          GetCursorPos((LPPOINT)&local_938);
          iVar9 = FUN_1469232ea(param_1,local_938._0_8_ & 0xffffffff,local_938.top);
          RedrawWindow(*(HWND *)(param_1 + 0xd8),(RECT *)0x0,(HRGN)0x0,0x401);
          if (iVar9 == iVar23) {
            if (iVar23 < 0x14) {
              if (iVar23 == 8) {
                iVar23 = 6;
              }
              else {
                if (iVar23 != 9) goto switchD_14692137f_default;
                local_878._0_4_ = 0x2c;
                GetWindowPlacement((HWND)param_2,(WINDOWPLACEMENT *)local_878);
                iVar23 = (uint)(local_878._8_4_ != 3) * 2 + 1;
              }
              ShowWindow((HWND)param_2,iVar23);
            }
            else if (iVar23 == 0x14) {
              PostQuitMessage(0);
            }
            else if (iVar23 == 1000) {
              *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) ^ 1;
              RedrawWindow(*(HWND *)(param_1 + 0xd8),(RECT *)0x0,(HRGN)0x0,0x401);
              GetClientRect(*(HWND *)(param_1 + 0xd8),(LPRECT)local_878);
              FUN_14691f22c(param_1,(ulonglong)stack0xfffffffffffff790 & 0xffffffff,LStack_86c,1);
              RedrawWindow(*(HWND *)(param_1 + 0xd8),(RECT *)0x0,(HRGN)0x0,1);
              if (*(char *)(param_1 + 0x340) == '\x01') {
                SetFocus(*(HWND *)(param_1 + 0xf0));
              }
            }
          }
        }
      }
      else if (param_3 == 0x20a) {
        GetClientRect(*(HWND *)(param_1 + 0xe0),(LPRECT)local_878);
        sVar33 = (short)((uint)(((int)uVar12 >> 0x10) * -0x6667) >> 0x10);
        FUN_14692338e(param_1,(int)(short)((sVar33 >> 4) - (sVar33 >> 0xf)));
        goto LAB_14692068c;
      }
      goto switchD_14692137f_default;
    }
    if (param_3 != 0x2a2) {
      puVar30 = (undefined1 *)0x534b8805;
      if (param_3 == 0x400) goto LAB_146920e5b;
      goto switchD_14692137f_default;
    }
LAB_146920736:
    if ((*(int *)(param_1 + 0x200) == -1) && (*(int *)(param_1 + 0x204) == -1))
    goto switchD_14692137f_default;
    GetCursorPos((LPPOINT)local_878);
    iVar9 = FUN_1469232ea(param_1,local_878._0_8_ & 0xffffffff,local_878._4_4_);
    iVar23 = -1;
    if (0xfffffffd < iVar9 - 10U) {
      iVar23 = iVar9;
    }
    if (iVar9 == 0x14) {
      iVar23 = iVar9;
    }
    if (iVar9 == 1000) {
      iVar23 = iVar9;
    }
    if (iVar23 == *(int *)(param_1 + 0x200)) goto switchD_14692137f_default;
    *(int *)(param_1 + 0x200) = iVar23;
    goto LAB_14692079c;
  }
  if (param_3 == 0x134) {
    if (*(HWND *)(param_1 + 0xe0) == param_5) {
      LVar16 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x18b,0,0);
      GetClientRect(*(HWND *)(param_1 + 0xe0),(LPRECT)local_878);
      fVar36 = (float)LStack_86c / (float)*(int *)(param_1 + 0x1f8);
      LVar17 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x18e,0,0);
      iVar23 = (int)LVar16 - (int)LVar17;
      if (iVar23 < -((int)ROUND(-0.5 - (fVar36 + fVar36)) >> 1)) {
        local_878._4_4_ = iVar23 * *(int *)(param_1 + 0x1f8);
        FillRect(param_4,(RECT *)local_878,*(HBRUSH *)(param_1 + 0x170));
      }
LAB_146920826:
      puVar30 = GetStockObject(5);
      goto LAB_146920e5b;
    }
  }
  else {
    if (param_3 == 0x138) {
      SetTextColor(param_4,*(COLORREF *)(param_1 + 0x138));
      SetBkColor(param_4,*(COLORREF *)(param_1 + 0x13c));
      puVar30 = *(undefined1 **)(param_1 + 0x168);
      goto LAB_146920e5b;
    }
    if (param_3 == 0x200) goto LAB_146920736;
  }
  goto switchD_14692137f_default;
LAB_146921427:
  uVar26 = *(ushort *)(local_878 + lVar35);
  uVar32 = (ulonglong)uVar26;
  uVar27 = *(ushort *)((longlong)L"darkgray" + lVar35);
  if (uVar26 == uVar27) {
    if (uVar26 == 0) goto LAB_146922198;
LAB_146921444:
    lVar35 = lVar35 + 2;
    goto LAB_146921427;
  }
  if ((uVar27 | uVar26) < 0x80) {
    uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
    uVar28 = (ulonglong)uVar27;
    uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
    if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar28]) goto LAB_146921444;
  }
  if (uVar26 != uVar27) {
    lVar35 = 0;
    goto LAB_14692147d;
  }
LAB_146922198:
  uVar13 = 0;
  goto LAB_146921d3b;
LAB_14692147d:
  uVar26 = *(ushort *)(local_878 + lVar35);
  uVar32 = (ulonglong)uVar26;
  uVar27 = *(ushort *)((longlong)&DAT_149ec90c8 + lVar35);
  if (uVar26 == uVar27) {
    if (uVar26 == 0) goto LAB_1469221c5;
LAB_14692149a:
    lVar35 = lVar35 + 2;
    goto LAB_14692147d;
  }
  if ((uVar27 | uVar26) < 0x80) {
    uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
    uVar28 = (ulonglong)uVar27;
    uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
    if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar28]) goto LAB_14692149a;
  }
  if (uVar26 != uVar27) {
    lVar35 = 0;
    goto LAB_1469214d3;
  }
LAB_1469221c5:
  uVar13 = 1;
  goto LAB_146921d3b;
LAB_1469214d3:
  uVar26 = *(ushort *)(local_878 + lVar35);
  uVar32 = (ulonglong)uVar26;
  uVar27 = *(ushort *)((longlong)L"lightblue" + lVar35);
  if (uVar26 == uVar27) {
    if (uVar26 == 0) goto LAB_1469221cc;
LAB_1469214f0:
    lVar35 = lVar35 + 2;
    goto LAB_1469214d3;
  }
  if ((uVar27 | uVar26) < 0x80) {
    uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
    uVar28 = (ulonglong)uVar27;
    uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
    if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar28]) goto LAB_1469214f0;
  }
  if (uVar26 != uVar27) {
    lVar35 = 0;
    goto LAB_146921529;
  }
LAB_1469221cc:
  uVar13 = 3;
  goto LAB_146921d3b;
LAB_146921529:
  uVar26 = *(ushort *)(local_878 + lVar35);
  uVar32 = (ulonglong)uVar26;
  uVar27 = *(ushort *)((longlong)L"darkblue" + lVar35);
  if (uVar26 == uVar27) {
    if (uVar26 == 0) goto LAB_1469221d3;
LAB_146921546:
    lVar35 = lVar35 + 2;
    goto LAB_146921529;
  }
  if ((uVar27 | uVar26) < 0x80) {
    uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
    uVar28 = (ulonglong)uVar27;
    uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
    if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar28]) goto LAB_146921546;
  }
  if (uVar26 != uVar27) {
    lVar35 = 0;
    goto LAB_14692157f;
  }
LAB_1469221d3:
  uVar13 = 4;
  goto LAB_146921d3b;
LAB_1469215d5:
  uVar26 = *(ushort *)(local_878 + lVar35);
  uVar32 = (ulonglong)uVar26;
  uVar27 = *(ushort *)((longlong)L"showtime" + lVar35);
  if (uVar26 == uVar27) {
    if (uVar26 == 0) goto LAB_1469221e1;
LAB_1469215f2:
    lVar35 = lVar35 + 2;
    goto LAB_1469215d5;
  }
  if ((uVar27 | uVar26) < 0x80) {
    uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
    uVar28 = (ulonglong)uVar27;
    uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
    if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar28]) goto LAB_1469215f2;
  }
  if (uVar26 != uVar27) {
    lVar35 = 0;
    goto LAB_14692162b;
  }
LAB_1469221e1:
  iVar9 = 1;
  goto LAB_1469221e6;
LAB_14692162b:
  uVar26 = *(ushort *)(local_878 + lVar35);
  uVar32 = (ulonglong)uVar26;
  uVar27 = *(ushort *)((longlong)L"showdatetime" + lVar35);
  if (uVar26 == uVar27) {
    if (uVar26 == 0) goto LAB_14692227b;
LAB_146921648:
    lVar35 = lVar35 + 2;
    goto LAB_14692162b;
  }
  if ((uVar27 | uVar26) < 0x80) {
    uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
    uVar28 = (ulonglong)uVar27;
    uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
    if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar28]) goto LAB_146921648;
  }
  if (uVar26 != uVar27) {
    lVar35 = 0;
    goto LAB_146921681;
  }
LAB_14692227b:
  iVar9 = 2;
  goto LAB_1469221e6;
LAB_146921681:
  uVar26 = *(ushort *)(local_878 + lVar35);
  uVar32 = (ulonglong)uVar26;
  uVar27 = *(ushort *)((longlong)L"hidedatetime" + lVar35);
  if (uVar26 == uVar27) {
    if (uVar26 == 0) goto LAB_1469216ca;
LAB_14692169a:
    lVar35 = lVar35 + 2;
    goto LAB_146921681;
  }
  if ((uVar27 | uVar26) < 0x80) {
    uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
    uVar28 = (ulonglong)uVar27;
    uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
    if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar28]) goto LAB_14692169a;
  }
  if (uVar26 != uVar27) goto LAB_1469221f0;
LAB_1469216ca:
  iVar9 = 0;
LAB_1469221e6:
  *(int *)(param_1 + 0x308) = iVar9;
  if (iVar9 != iVar23) {
    FUN_146922c52(param_1);
  }
LAB_1469221f0:
  local_8b8[0] = 0;
  local_8a8 = 0;
  FUN_140056680(&local_938,local_878);
  FUN_142850d88(local_960,&local_938,local_8b8);
  if (local_958 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_958 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_958)(local_958);
      LOCK();
      piVar2 = (int *)((longlong)local_958 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_958 + 0x10))(local_958);
      }
    }
  }
  if (local_938._0_8_ != 0) {
    FUN_1400020a8();
  }
  goto switchD_14692137f_default;
LAB_14692157f:
  uVar26 = *(ushort *)(local_878 + lVar35);
  uVar32 = (ulonglong)uVar26;
  uVar27 = *(ushort *)((longlong)&DAT_149ec90e4 + lVar35);
  if (uVar26 == uVar27) {
    if (uVar26 == 0) goto LAB_1469221da;
LAB_14692159c:
    lVar35 = lVar35 + 2;
    goto LAB_14692157f;
  }
  if ((uVar27 | uVar26) < 0x80) {
    uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
    uVar28 = (ulonglong)uVar27;
    uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
    if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar28]) goto LAB_14692159c;
  }
  if (uVar26 != uVar27) {
    lVar35 = 0;
    goto LAB_1469215d5;
  }
LAB_1469221da:
  uVar13 = 5;
LAB_146921d3b:
  *(undefined4 *)(param_1 + 0x304) = uVar13;
  FUN_1469204cc(param_1);
  FUN_14691eb3e(param_1);
  InvalidateRect(*(HWND *)(param_1 + 0xd8),(RECT *)0x0,1);
  EnumChildWindows(*(HWND *)(param_1 + 0xd8),FUN_146923e24,0);
LAB_14692079c:
  pHVar15 = *(HWND *)(param_1 + 0xd8);
  UVar11 = 0x401;
LAB_146920aa0:
  RedrawWindow(pHVar15,(RECT *)0x0,(HRGN)0x0,UVar11);
switchD_14692137f_default:
  puVar30 = (undefined1 *)DefWindowProcW((HWND)param_2,param_3,(WPARAM)param_4,(LPARAM)param_5);
LAB_146920e5b:
  if ((local_48 ^ (ulonglong)auStackY_9c8) == DAT_14c707940) {
    return puVar30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146922286 FUN_146922286 body=319 status=ok
// SIG undefined FUN_146922286(void)

void FUN_146922286(int param_1,HWND param_2,LPARAM param_3)

{
  int iVar1;
  HWND hWnd;
  undefined1 auStackY_188 [32];
  tagRECT local_158;
  tagRECT local_148;
  WCHAR local_138 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStackY_188;
  if (param_1 == 5) {
    GetWindowTextW(param_2,local_138,0x40);
    iVar1 = wcsncmp(local_138,L"Unreal Console Help",0x3f);
    if (iVar1 == 0) {
      hWnd = GetParent(param_2);
      GetWindowRect(hWnd,&local_148);
      GetWindowRect(param_2,&local_158);
      MoveWindow(param_2,(local_148.left - (local_158.right - local_158.left) / 2) +
                         (local_148.right - local_148.left) / 2,
                 (local_148.top - (local_158.bottom - local_158.top) / 2) +
                 (local_148.bottom - local_148.top) / 2,local_158.right - local_158.left,
                 local_158.bottom - local_158.top,1);
    }
  }
  CallNextHookEx((HHOOK)0x0,param_1,(WPARAM)param_2,param_3);
  if ((local_38 ^ (ulonglong)auStackY_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469223c6 FUN_1469223c6 body=1241 status=ok
// SIG undefined FUN_1469223c6(void)

void FUN_1469223c6(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  short sVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  undefined2 *puVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  size_t sVar12;
  short *psVar13;
  wchar_t *_Str;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_1a8 [32];
  longlong local_188 [4];
  undefined4 local_168;
  wchar_t *local_160;
  wchar_t *local_158;
  ulonglong *local_150;
  undefined1 local_148;
  wchar_t local_140 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_160 = local_140;
  local_148 = 0;
  local_150 = &local_40;
  local_158 = local_160;
  FUN_14005eb5c((longlong)param_3 + 0x14,&local_160);
  if (*(int *)(param_1 + 0x308) == 2) {
    auVar18._0_8_ = ((double)param_3[4] - *(double *)(param_1 + 0xb0)) * 10000000.0 + 0.5;
    auVar18._8_8_ = 0;
    auVar18 = roundpd(auVar18,auVar18,1);
    local_188[0] = (longlong)auVar18._0_8_ + *(longlong *)(param_1 + 0xa8);
    FUN_1448fb8e4(local_188,L"[%Y.%m.%d-%H.%M.%S:%s] ",param_2);
  }
  else if (*(int *)(param_1 + 0x308) == 1) {
    auVar17._0_8_ = (double)param_3[4] * 10000000.0 + 0.5;
    auVar17._8_8_ = 0;
    auVar18 = roundpd(auVar17,auVar17,1);
    lVar14 = (longlong)auVar18._0_8_;
    uVar2 = (uint)((ulonglong)((lVar14 / 36000000000) * 0x2aaaaaab) >> 0x20);
    FUN_140212e80(param_2,L"%02i:",
                  (int)(lVar14 / 36000000000) + ((uVar2 >> 2) - ((int)uVar2 >> 0x1f)) * -0x18 +
                  (int)(lVar14 / 864000000000) * 0x18);
    auVar18 = SEXT816(lVar14 / 600000000) * ZEXT816(0x8888888888888889);
    FUN_140212e80(param_2,L"%02i:",
                  (int)(lVar14 / 600000000) +
                  ((int)(auVar18._8_8_ >> 5) - (auVar18._12_4_ >> 0x1f)) * -0x3c);
    auVar18 = SEXT816(lVar14 / 10000000) * ZEXT816(0x8888888888888889);
    iVar16 = (int)(lVar14 / 10000000);
    FUN_140212e80(param_2,L"%02i.",
                  iVar16 + ((int)(auVar18._8_8_ >> 5) - (auVar18._12_4_ >> 0x1f)) * -0x3c);
    FUN_140212e80(param_2,L"%03i  ",((int)lVar14 + iVar16 * -10000000) / 10000);
  }
  if (param_4 != '\0') {
    puVar8 = *(undefined2 **)(param_2 + 8);
    if (*(undefined2 **)(param_2 + 0x10) <= puVar8 + 1) {
      FUN_140213274(param_2,1);
      puVar8 = *(undefined2 **)(param_2 + 8);
    }
    *(undefined2 **)(param_2 + 8) = puVar8 + 1;
    *puVar8 = 0x5b;
    lVar14 = FUN_1449668a2(param_2,local_160,
                           (ulonglong)((longlong)local_158 - (longlong)local_160) >> 1);
    puVar5 = *(undefined4 **)(lVar14 + 8);
    if (*(undefined4 **)(lVar14 + 0x10) <= puVar5 + 1) {
      FUN_140213274(lVar14,2);
      puVar5 = *(undefined4 **)(lVar14 + 8);
    }
    *puVar5 = 0x5b005d;
    *(undefined4 **)(lVar14 + 8) = puVar5 + 1;
    pwVar6 = (wchar_t *)FUN_1427674c7((char)param_3[2]);
    sVar7 = 0;
    if (pwVar6 != (wchar_t *)0x0) {
      sVar7 = wcslen(pwVar6);
    }
    lVar14 = FUN_1449668a2(lVar14,pwVar6,sVar7);
    puVar8 = *(undefined2 **)(lVar14 + 8);
    if (*(undefined2 **)(lVar14 + 0x10) <= puVar8 + 1) {
      FUN_140213274(lVar14,1);
      puVar8 = *(undefined2 **)(lVar14 + 8);
    }
    *(undefined2 **)(lVar14 + 8) = puVar8 + 1;
    *puVar8 = 0x5d;
  }
  pwVar6 = local_160;
  *local_158 = L'\0';
  pwVar9 = wcsstr(local_160,L"Log");
  _Str = pwVar6 + 3;
  if (pwVar9 != pwVar6) {
    _Str = pwVar6;
  }
  local_188[2] = 0x20002000200020;
  local_188[3] = 0x20002000200020;
  local_188[0] = 0x20002000200020;
  local_188[1] = 0x20002000200020;
  local_168 = 0x20;
  sVar7 = wcslen(_Str);
  if ((uint)sVar7 < 0x12) {
    sVar12 = 0;
    sVar7 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar7 = wcslen(_Str);
    }
    uVar11 = FUN_1449668a2(param_2,_Str,sVar7);
    sVar7 = wcslen(_Str);
    pwVar6 = (wchar_t *)((longlong)local_188 + (longlong)(int)sVar7 * 2);
    if (pwVar6 != (wchar_t *)0x0) {
      sVar12 = wcslen(pwVar6);
    }
    FUN_1449668a2(uVar11,pwVar6,sVar12 & 0xffffffff);
  }
  else {
    puVar10 = *(undefined8 **)(param_2 + 8);
    if (*(ulonglong *)(param_2 + 0x10) <= (longlong)puVar10 + 0x22U) {
      FUN_140213274(param_2,0x11);
      puVar10 = *(undefined8 **)(param_2 + 8);
    }
    *(wchar_t *)(puVar10 + 4) = _Str[0x10];
    uVar11 = *(undefined8 *)_Str;
    uVar3 = *(undefined8 *)(_Str + 4);
    uVar4 = *(undefined8 *)(_Str + 0xc);
    puVar10[2] = *(undefined8 *)(_Str + 8);
    puVar10[3] = uVar4;
    *puVar10 = uVar11;
    puVar10[1] = uVar3;
    *(longlong *)(param_2 + 8) = (longlong)puVar10 + 0x22;
  }
  FUN_146923434(param_2,&DAT_149dfd136);
  lVar14 = *param_3;
  iVar16 = (int)param_3[1];
  if (lVar14 + (longlong)iVar16 * 2 + -2 != lVar14 && iVar16 != 0) {
    lVar15 = 0;
    do {
      sVar1 = *(short *)(lVar14 + lVar15);
      psVar13 = *(short **)(param_2 + 8);
      if (sVar1 == 9) {
        if (*(short **)(param_2 + 0x10) <= psVar13 + 2) {
          FUN_140213274(param_2,2);
          psVar13 = *(short **)(param_2 + 8);
        }
        psVar13[0] = 0x20;
        psVar13[1] = 0x20;
        *(short **)(param_2 + 8) = psVar13 + 2;
      }
      else {
        if (*(short **)(param_2 + 0x10) <= psVar13 + 1) {
          FUN_140213274(param_2,1);
          psVar13 = *(short **)(param_2 + 8);
        }
        *(short **)(param_2 + 8) = psVar13 + 1;
        *psVar13 = sVar1;
      }
      lVar15 = lVar15 + 2;
    } while ((longlong)iVar16 * 2 + -2 != lVar15);
  }
  FUN_144724f3c(&local_160);
  if ((local_40 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469228a0 FUN_1469228a0 body=762 status=ok
// SIG undefined FUN_1469228a0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1469228a0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_308 [36];
  int local_2e4;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  int *local_2c8;
  int *local_2c0;
  int *local_2b8;
  int *local_2b0;
  int *local_2a8;
  int *local_2a0;
  int *local_298;
  int *local_290;
  int local_288;
  int local_284 [3];
  int local_278;
  int local_274 [3];
  undefined1 local_268 [256];
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x2000000000;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x2000000000;
  uVar2 = *(uint *)(param_1 + 0x240);
  uVar7 = 0;
  iVar8 = 0;
  local_2e4 = param_3;
  local_2e0 = param_2;
  if ((ulonglong)uVar2 != 0) {
    lVar9 = 0;
    iVar8 = 0;
    local_2d8 = param_4;
    do {
      uVar4 = local_50;
      uVar7 = local_160;
      lVar3 = *(longlong *)(param_1 + 0x238);
      if (1 < *(int *)(lVar3 + 0x18 + lVar9)) {
        if (*(char *)(lVar3 + 0x39 + lVar9) == '\x01') {
          iVar10 = (int)local_50;
          uVar1 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar1);
          puVar5 = local_158;
          if (local_50._4_4_ < uVar1) {
            FUN_14692354a(local_158,uVar4 & 0xffffffff);
          }
        }
        else {
          iVar10 = (int)local_160;
          uVar1 = (int)local_160 + 1;
          local_160 = CONCAT44(local_160._4_4_,uVar1);
          puVar5 = local_268;
          if (local_160._4_4_ < uVar1) {
            FUN_14692354a(local_268,uVar7 & 0xffffffff);
          }
        }
        iVar8 = iVar8 + 1;
        puVar6 = *(undefined1 **)(puVar5 + 0x100);
        if (*(undefined1 **)(puVar5 + 0x100) == (undefined1 *)0x0) {
          puVar6 = puVar5;
        }
        *(longlong *)(puVar6 + (longlong)iVar10 * 8) = lVar3 + lVar9;
      }
      lVar9 = lVar9 + 0x40;
    } while ((ulonglong)uVar2 << 6 != lVar9);
    uVar7 = local_50 & 0xffffffff;
    param_4 = local_2d8;
  }
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_158;
  }
  FUN_14692364f(puVar5,uVar7);
  puVar5 = local_168;
  if (local_168 == (undefined1 *)0x0) {
    puVar5 = local_268;
  }
  FUN_14692364f(puVar5,local_160 & 0xffffffff);
  iVar8 = iVar8 - (int)local_50;
  local_274[2] = (int)local_50;
  if ((int)local_50 < iVar8) {
    local_274[2] = iVar8;
  }
  iVar10 = (int)local_2e0;
  local_288 = -200;
  if (0x3ed < (int)local_2e0 && (int)local_50 < iVar8) {
    local_274[2] = (iVar8 - (iVar8 + 1 >> 0x1f)) + 1 >> 1;
    if (local_274[2] <= (int)local_50) {
      local_274[2] = (int)local_50;
    }
    local_288 = -400;
  }
  local_2a0 = local_274 + 2;
  local_2a8 = local_274 + 1;
  local_274[1] = 0x12;
  local_284[2] = local_2e4 + local_274[2] * -0x12 + -6;
  local_298 = local_274;
  local_2c8 = &local_278;
  local_2c0 = local_284 + 2;
  local_2b8 = local_284;
  local_2b0 = local_284 + 1;
  local_290 = &local_288;
  local_278 = 7;
  local_284[1] = 0;
  local_284[0] = (int)local_2e0 + local_288 + -0xd;
  local_288 = (int)local_2e0 + -0xf + local_288;
  local_2d0 = param_4;
  local_274[0] = local_284[2];
  FUN_1469234a6(&local_2d0,local_158);
  local_278 = iVar10 + -0xc6;
  local_284[2] = local_274[0];
  local_284[1] = 0;
  local_284[0] = 0xc0;
  local_288 = -200;
  FUN_1469234a6(&local_2d0,local_268);
  if (local_168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146922b9c FUN_146922b9c body=95 status=ok
// SIG undefined FUN_146922b9c(void)

ulonglong FUN_146922b9c(longlong param_1,LPARAM *param_2)

{
  ulonglong uVar1;
  
  uVar1 = SendMessageW(*(HWND *)(param_1 + 0xe0),400,0,0);
  FUN_144a1a59e(param_2,uVar1 & 0xffffffff,1);
  SendMessageW(*(HWND *)(param_1 + 0xe0),0x191,(longlong)(int)uVar1,*param_2);
  return uVar1 & 0xffffffff;
}



// FUNCTION 146922bfc FUN_146922bfc body=86 status=ok
// SIG undefined FUN_146922bfc(void)

void FUN_146922bfc(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  FUN_146923b0a();
  FUN_146923ba8(param_1);
  RedrawWindow(*(HWND *)(param_1 + 0xe0),(RECT *)0x0,(HRGN)0x0,5);
                    /* WARNING: Could not recover jumptable at 0x000146922c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RedrawWindow(*(HWND *)(param_1 + 0xe8),(RECT *)0x0,(HRGN)0x0,1);
  return;
}



// FUNCTION 146922c52 FUN_146922c52 body=577 status=ok
// SIG undefined FUN_146922c52(void)

void FUN_146922c52(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LRESULT LVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStackY_88 [32];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStackY_88;
  iVar7 = 0;
  LVar4 = SendMessageW(*(HWND *)(param_1 + 0xe0),400,0,0);
  iVar5 = -1;
  if (LVar4 == 1) {
    local_44 = -1;
    SendMessageW(*(HWND *)(param_1 + 0xe0),0x191,1,(LPARAM)&local_44);
    LVar4 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x199,(longlong)local_44,0);
    iVar7 = local_44;
    iVar5 = (int)LVar4 - *(int *)(param_1 + 0x1f0);
    LVar4 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x18e,0,0);
    iVar7 = (int)LVar4 - iVar7;
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  iVar8 = 0;
  SendMessageW(*(HWND *)(param_1 + 0xe0),0xb,0,0);
  SendMessageW(*(HWND *)(param_1 + 0xe0),0x184,0,0);
  iVar2 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c);
  SendMessageW(*(HWND *)(param_1 + 0xe0),0x1a8,(longlong)iVar2,(longlong)(iVar2 * 0x100));
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar1 = *(int *)(param_1 + 0x9c);
  if (iVar2 != iVar1) {
    iVar6 = -1;
    do {
      iVar3 = FUN_146923c52(param_1,(ulonglong)
                                    (*(int *)(param_1 + 0x9c) + iVar8 & *(uint *)(param_1 + 0x98)) *
                                    0x30 + *(longlong *)(param_1 + 0x90),iVar8);
      if (iVar5 == iVar8) {
        iVar6 = iVar3;
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 - iVar1 != iVar8);
    if (iVar6 != -1) {
      SetWindowPos(*(HWND *)(param_1 + 0x120),*(HWND *)(param_1 + 0xd8),1,1,1,1,0x614);
      SendMessageW(*(HWND *)(param_1 + 0xe0),0x197,(longlong)(iVar7 + iVar6),0);
      SendMessageW(*(HWND *)(param_1 + 0xe0),0x185,1,(longlong)iVar6);
      goto LAB_146922e1a;
    }
  }
  FUN_146923ba8(param_1);
LAB_146922e1a:
  RedrawWindow(*(HWND *)(param_1 + 0xe8),(RECT *)0x0,(HRGN)0x0,1);
  SendMessageW(*(HWND *)(param_1 + 0xe0),0xb,1,0);
  RedrawWindow(*(HWND *)(param_1 + 0xe8),(RECT *)0x0,(HRGN)0x0,1);
  if ((local_40 ^ (ulonglong)auStackY_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146922e94 FUN_146922e94 body=99 status=ok
// SIG undefined FUN_146922e94(void)

void FUN_146922e94(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  FUN_14691dd20(param_1 + 0x90,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0x9c) = 0;
  FUN_146922c52(param_1);
  *(undefined4 *)(param_1 + 0x2ec) = 0;
                    /* WARNING: Could not recover jumptable at 0x000146922ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetDlgItemTextW(*(HWND *)(param_1 + 0xd8),0x8807,L"Log CHECKPOINT0");
  return;
}



// FUNCTION 146922ef8 FUN_146922ef8 body=667 status=ok
// SIG undefined FUN_146922ef8(void)

void FUN_146922ef8(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  wchar_t *local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_3 + 1) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)*param_3;
  }
  local_80 = param_1;
  pwVar6 = wcschr(pwVar9,L'[');
  if (pwVar6 != (wchar_t *)0x0) {
    do {
      pwVar6 = pwVar6 + 1;
      pwVar7 = wcschr(pwVar6,L']');
      if (pwVar7 == (wchar_t *)0x0) break;
      FUN_1449668a2(local_80,pwVar9,
                    (int)((ulonglong)((longlong)pwVar6 - (longlong)pwVar9) >> 1) + -1);
      if (param_2 != (longlong *)0x0) {
        uStack_50 = (uint)((ulonglong)((longlong)pwVar7 - (longlong)pwVar6) >> 1);
        local_58 = pwVar6;
        FUN_144a8b87e(&local_58,&local_68);
        local_58 = local_68;
        uStack_50 = uStack_60;
        uStack_4c = uStack_5c;
        uVar5 = FUN_144aff2e5(&local_58,0x20,0);
        while (uVar5 != 0xffffffff) {
          uStack_50 = uStack_60;
          if ((int)uVar5 < (int)uStack_60) {
            uStack_50 = uVar5;
          }
          if ((int)uStack_50 < 1) {
            uStack_50 = 0;
          }
          local_58 = local_68;
          FUN_144a8b87e(&local_58,&local_78);
          if (local_70 != 0) {
            FUN_14006620a(&local_58,local_78);
            uVar4 = uStack_4c;
            uVar3 = uStack_50;
            pwVar9 = local_58;
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1447a1bd6(param_2,iVar1);
            }
            lVar2 = *param_2;
            lVar10 = (longlong)iVar1 * 0x10;
            *(wchar_t **)(lVar2 + lVar10) = pwVar9;
            *(uint *)(lVar2 + 8 + lVar10) = uVar3;
            *(undefined4 *)(lVar2 + 0xc + lVar10) = uVar4;
          }
          uStack_50 = ~uVar5 + uStack_60;
          if ((int)uStack_60 <= (int)(~uVar5 + uStack_60)) {
            uStack_50 = uStack_60;
          }
          if ((int)uStack_50 < 1) {
            uStack_50 = 0;
          }
          local_68 = (wchar_t *)
                     ((longlong)local_68 +
                     ((longlong)(int)uStack_60 * 2 - (ulonglong)(uStack_50 * 2)));
          uStack_4c = uStack_5c;
          uStack_60 = uStack_50;
          local_58 = local_68;
          uVar5 = FUN_144aff2e5(&local_58,0x20,0);
        }
        FUN_144a8b87e(&local_68,&local_78);
        if (local_70 != 0) {
          FUN_14006620a(&local_58,local_78);
          uVar4 = uStack_4c;
          uVar5 = uStack_50;
          pwVar9 = local_58;
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1447a1bd6(param_2,iVar1);
          }
          lVar2 = *param_2;
          lVar10 = (longlong)iVar1 * 0x10;
          *(wchar_t **)(lVar2 + lVar10) = pwVar9;
          *(uint *)(lVar2 + 8 + lVar10) = uVar5;
          *(undefined4 *)(lVar2 + 0xc + lVar10) = uVar4;
        }
      }
      pwVar9 = pwVar7 + 1;
      pwVar6 = wcschr(pwVar9,L'[');
    } while (pwVar6 != (wchar_t *)0x0);
  }
  if (pwVar9 == (wchar_t *)0x0) {
    sVar8 = 0;
  }
  else {
    sVar8 = wcslen(pwVar9);
  }
  FUN_1449668a2(local_80,pwVar9,sVar8);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146923194 FUN_146923194 body=341 status=ok
// SIG undefined FUN_146923194(void)

undefined8 FUN_146923194(HWND param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_a8 [32];
  tagRECT local_88;
  tagRECT local_78;
  undefined8 local_68 [6];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)local_a8;
  iVar3 = (int)(short)param_2;
  param_2 = param_2 >> 0x10;
  GetWindowRect(param_1,&local_78);
  local_88.left = 0;
  local_88.top = 0;
  local_88.right = 0;
  local_88.bottom = 0;
  AdjustWindowRectEx(&local_88,0xf0000,0,0);
  if (param_2 < local_78.top + 0x1b && local_78.top <= param_2) {
    local_68[1] = 2;
    if (param_2 < local_78.top - local_88.top) {
      local_68[1] = 0xc;
    }
    lVar1 = 0;
  }
  else {
    local_68[1] = 2;
    lVar1 = 2 - (ulonglong)(param_2 < local_78.bottom + -2 || local_78.bottom <= param_2);
  }
  if (iVar3 < local_78.left || local_78.left + 2 <= iVar3) {
    lVar2 = 2 - (ulonglong)(iVar3 < local_78.right + -2 || local_78.right <= iVar3);
  }
  else {
    lVar2 = 0;
  }
  local_68[0] = 0xd;
  local_68[2] = 0xe;
  local_68[3] = 10;
  local_68[4] = 1;
  local_68[5] = 0xb;
  local_38 = 0x10;
  uStack_34 = 0;
  uStack_30 = 0xf;
  uStack_2c = 0;
  local_28 = 0x11;
  if ((local_20 ^ (ulonglong)local_a8) == DAT_14c707940) {
    return local_68[lVar1 * 3 + lVar2];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469232ea FUN_1469232ea body=163 status=ok
// SIG undefined FUN_1469232ea(void)

undefined4 FUN_1469232ea(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  tagRECT local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  GetWindowRect(*(HWND *)(param_1 + 0xd8),&local_30);
  uVar1 = 0;
  if (param_3 <= local_30.top + 0x1b && local_30.top + 2 <= param_3) {
    if (param_2 <= local_30.right + -2) {
      uVar1 = 2;
      if (local_30.right + -0x6c < param_2) {
        uVar1 = *(undefined4 *)(&DAT_149ec92b0 + (longlong)((local_30.right - param_2) / 0x1b) * 4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692338e FUN_14692338e body=166 status=ok
// SIG undefined FUN_14692338e(void)

void FUN_14692338e(longlong param_1,int param_2)

{
  LRESULT LVar1;
  uint uVar2;
  ulonglong wParam;
  
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  LVar1 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x18e,0,0);
  uVar2 = param_2 + (int)LVar1;
  wParam = (ulonglong)uVar2;
  if ((int)uVar2 < 1) {
    wParam = 0;
  }
  SetWindowPos(*(HWND *)(param_1 + 0x120),*(HWND *)(param_1 + 0xd8),1,1,1,1,0x614);
  SendMessageW(*(HWND *)(param_1 + 0xe0),0x197,wParam,0);
                    /* WARNING: Could not recover jumptable at 0x00014692342d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RedrawWindow(*(HWND *)(param_1 + 0xe8),(RECT *)0x0,(HRGN)0x0,1);
  return;
}



// FUNCTION 146923434 FUN_146923434 body=114 status=ok
// SIG undefined FUN_146923434(void)

longlong FUN_146923434(longlong param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    iVar5 = (int)sVar2;
  }
  lVar4 = (longlong)iVar5;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar4);
  }
  if (iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        *(short *)(lVar1 + lVar3 * 2) = (short)param_2[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + lVar4 * 2;
  }
  return param_1;
}



// FUNCTION 1469234a6 FUN_1469234a6 body=163 status=ok
// SIG undefined FUN_1469234a6(void)

void FUN_1469234a6(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x108);
  if ((ulonglong)uVar1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x100);
      if (*(longlong *)(param_2 + 0x100) == 0) {
        lVar2 = param_2;
      }
      lVar2 = *(longlong *)(lVar2 + uVar3 * 8);
      if (1 < *(int *)(lVar2 + 0x18)) {
        FUN_146923aa2(*param_1,lVar2,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2]);
        *(int *)param_1[2] = *(int *)param_1[2] + *(int *)param_1[5];
        *(int *)param_1[4] = *(int *)param_1[4] + 1;
        if (*(int *)param_1[6] <= *(int *)param_1[4]) {
          *(int *)param_1[4] = 0;
          *(undefined4 *)param_1[2] = *(undefined4 *)param_1[7];
          *(int *)param_1[1] = *(int *)param_1[1] + *(int *)param_1[8];
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}



// FUNCTION 14692354a FUN_14692354a body=119 status=ok
// SIG undefined FUN_14692354a(void)

void FUN_14692354a(longlong param_1,int param_2)

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
    FUN_1469235c2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1469235c2 FUN_1469235c2 body=141 status=ok
// SIG undefined FUN_1469235c2(void)

void FUN_1469235c2(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14692364f FUN_14692364f body=682 status=ok
// SIG undefined FUN_14692364f(void)

void FUN_14692364f(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  float fVar19;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar12 = &local_348;
    do {
      puVar5 = (ulonglong *)*plVar12;
      puVar13 = (ulonglong *)plVar12[1];
      iVar15 = (int)plVar12[2];
      iVar7 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar5) >> 3);
      puVar11 = puVar5;
      puVar10 = puVar13;
      if (iVar15 != 0) {
LAB_146923711:
        if (8 < (int)(iVar7 + 1U)) {
          uVar8 = iVar7 + 1U >> 1;
          uVar16 = puVar5[uVar8];
          puVar5[uVar8] = *puVar5;
          *puVar5 = uVar16;
          puVar9 = puVar13 + 1;
          puVar6 = puVar5;
          do {
            puVar4 = puVar6 + 1;
            puVar14 = puVar6 + 1;
            do {
              puVar6 = puVar14;
              puVar17 = puVar4;
              if (puVar13 < puVar6) break;
              iVar1 = *(int *)(*puVar5 + 0x34);
              iVar7 = *(int *)(*puVar6 + 0x34);
              bVar3 = iVar1 < iVar7;
              if (iVar1 == iVar7) {
                bVar3 = *puVar5 < *puVar6;
              }
              puVar4 = puVar17 + 1;
              puVar14 = puVar6 + 1;
            } while (!bVar3);
            puVar4 = puVar9 + -2;
            do {
              puVar14 = puVar9;
              puVar18 = puVar4;
              puVar9 = puVar14 + -1;
              if (puVar9 <= puVar5) break;
              iVar1 = *(int *)(*puVar9 + 0x34);
              iVar7 = *(int *)(*puVar5 + 0x34);
              bVar3 = iVar1 < iVar7;
              if (iVar1 == iVar7) {
                bVar3 = *puVar9 < *puVar5;
              }
              puVar4 = puVar18 + -1;
            } while (!bVar3);
            if (puVar9 < puVar6) goto LAB_1469237d4;
            uVar16 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar16;
          } while( true );
        }
        if (puVar5 < puVar13) {
          do {
            puVar11 = puVar5;
            if (puVar5 + 1 <= puVar13) {
              uVar16 = *puVar5;
              puVar10 = puVar5 + 1;
              puVar9 = puVar5;
              do {
                uVar2 = *puVar10;
                bVar3 = *(int *)(uVar16 + 0x34) < *(int *)(uVar2 + 0x34);
                if (*(int *)(uVar16 + 0x34) == *(int *)(uVar2 + 0x34)) {
                  bVar3 = uVar16 < uVar2;
                }
                puVar11 = puVar10;
                if (!bVar3) {
                  puVar11 = puVar9;
                  uVar2 = uVar16;
                }
                uVar16 = uVar2;
                puVar10 = puVar10 + 1;
                puVar9 = puVar11;
              } while (puVar10 <= puVar13);
            }
            uVar16 = *puVar11;
            *puVar11 = *puVar13;
            *puVar13 = uVar16;
            puVar13 = puVar13 + -1;
          } while (puVar5 < puVar13);
        }
        goto LAB_1469238d3;
      }
LAB_1469238ed:
      FUN_1469238fa(puVar5);
LAB_1469238d3:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1469237d4:
  uVar16 = *puVar5;
  *puVar5 = *puVar9;
  *puVar9 = uVar16;
  iVar15 = iVar15 + -1;
  puVar14 = puVar14 + -2;
  if ((longlong)puVar18 - (longlong)puVar11 < (longlong)puVar10 - (longlong)puVar17) {
    if (puVar6 < puVar13) {
      *plVar12 = (longlong)puVar6;
      plVar12[1] = (longlong)puVar13;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar17 = puVar5;
    if (puVar9 <= puVar5 + 1) goto LAB_1469238d3;
  }
  else {
    if (puVar5 + 1 < puVar9) {
      *plVar12 = (longlong)puVar5;
      plVar12[1] = (longlong)puVar14;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar5 = puVar6;
    puVar14 = puVar13;
    puVar18 = puVar13;
    if (puVar13 <= puVar6) goto LAB_1469238d3;
  }
  iVar7 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar17) >> 3);
  puVar11 = puVar17;
  puVar13 = puVar14;
  puVar10 = puVar18;
  if (iVar15 == 0) goto LAB_1469238ed;
  goto LAB_146923711;
}



// FUNCTION 1469238fa FUN_1469238fa body=423 status=ok
// SIG undefined FUN_1469238fa(void)

void FUN_1469238fa(undefined8 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar11 = iVar6;
joined_r0x00014692391e:
    do {
      iVar9 = iVar6 * 2 + 1;
      if (iVar9 < (int)param_2) {
        iVar10 = iVar6 * 2 + 2;
        if (iVar10 < (int)param_2) {
          iVar2 = *(int *)(param_1[iVar10] + 0x34);
          iVar1 = *(int *)(param_1[iVar9] + 0x34);
          bVar12 = iVar2 < iVar1;
          if (iVar2 == iVar1) {
            bVar12 = (ulonglong)param_1[iVar10] < (ulonglong)param_1[iVar9];
          }
          if (!bVar12) {
            iVar9 = iVar10;
          }
        }
        uVar7 = param_1[iVar9];
        uVar8 = param_1[iVar6];
        bVar12 = *(int *)(uVar8 + 0x34) < *(int *)(uVar7 + 0x34);
        if (*(int *)(uVar8 + 0x34) == *(int *)(uVar7 + 0x34)) {
          bVar12 = uVar8 < uVar7;
        }
        if (bVar12) {
          param_1[iVar6] = uVar7;
          param_1[iVar9] = uVar8;
          iVar6 = iVar9;
          goto joined_r0x00014692391e;
        }
      }
      bVar12 = iVar11 != 0;
      iVar6 = iVar11 + -1;
      iVar11 = iVar6;
    } while (bVar12);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar7 - 1];
      param_1[uVar7 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar8 = uVar7 - 1;
          iVar6 = 0;
          iVar9 = 1;
          iVar11 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar10 = iVar9;
            if ((longlong)iVar6 < (longlong)uVar8) {
              iVar2 = *(int *)(param_1[iVar6] + 0x34);
              iVar1 = *(int *)(param_1[iVar9] + 0x34);
              bVar12 = iVar2 < iVar1;
              if (iVar2 == iVar1) {
                bVar12 = (ulonglong)param_1[iVar6] < (ulonglong)param_1[iVar9];
              }
              if (!bVar12) {
                iVar10 = iVar6;
              }
            }
            uVar4 = param_1[iVar10];
            uVar5 = param_1[iVar11];
            bVar12 = *(int *)(uVar5 + 0x34) < *(int *)(uVar4 + 0x34);
            if (*(int *)(uVar5 + 0x34) == *(int *)(uVar4 + 0x34)) {
              bVar12 = uVar5 < uVar4;
            }
            if (!bVar12) break;
            param_1[iVar11] = uVar4;
            param_1[iVar10] = uVar5;
            iVar6 = iVar10 * 2;
            iVar9 = iVar10 * 2 + 1;
            iVar11 = iVar10;
          } while ((longlong)iVar9 < (longlong)uVar8);
          uVar3 = *param_1;
          *param_1 = param_1[uVar7 - 2];
          param_1[uVar7 - 2] = uVar3;
          uVar7 = uVar8;
        } while (2 < uVar8);
      }
    }
  }
  return;
}



// FUNCTION 146923aa2 FUN_146923aa2 body=104 status=ok
// SIG undefined FUN_146923aa2(void)

void FUN_146923aa2(undefined8 *param_1,longlong param_2,int param_3,int param_4)

{
  if ((longlong)*(int *)(param_2 + 0x30) != 0) {
    SelectObject(*(HDC *)*param_1,
                 *(HGDIOBJ *)(param_1[1] + 0x1b0 + (longlong)*(int *)(param_2 + 0x30) * 8));
    RoundRect(*(HDC *)*param_1,param_3 + 1,param_4 + 3,param_3 + 0xc,param_4 + 0xf,0xb,0xb);
  }
  return;
}



// FUNCTION 146923b0a FUN_146923b0a body=157 status=ok
// SIG undefined FUN_146923b0a(void)

void FUN_146923b0a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_146922b9c(0,&local_48);
  lVar1 = local_48;
  lVar2 = (longlong)(int)uStack_40;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      SendMessageW(*(HWND *)(param_1 + 0xe0),0x185,0,(longlong)*(int *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while (lVar2 * 4 != lVar3);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146923ba8 FUN_146923ba8 body=170 status=ok
// SIG undefined FUN_146923ba8(void)

void FUN_146923ba8(longlong param_1)

{
  LRESULT LVar1;
  WPARAM wParam;
  
  LVar1 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x18b,0,0);
  wParam = (WPARAM)((int)LVar1 + -1);
  SendMessageW(*(HWND *)(param_1 + 0xe0),0x185,1,wParam);
  SendMessageW(*(HWND *)(param_1 + 0xe0),0x185,0,wParam);
  SetWindowPos(*(HWND *)(param_1 + 0x120),*(HWND *)(param_1 + 0xd8),1,1,1,1,0x614);
                    /* WARNING: Could not recover jumptable at 0x000146923c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostMessageW(*(HWND *)(param_1 + 0xe0),0x197,wParam,0);
  return;
}



// FUNCTION 146923c52 FUN_146923c52 body=465 status=ok
// SIG undefined FUN_146923c52(void)

ulonglong FUN_146923c52(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_888 [40];
  undefined2 *local_860;
  undefined2 *local_858;
  ulonglong *local_850;
  undefined1 local_848;
  undefined2 local_840 [1024];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_888;
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar6 = 0;
    do {
      if (*(char *)(param_2 + 0x10) != *(char *)(*(longlong *)(param_1 + 0x70) + lVar6))
      goto LAB_146923ddf;
      lVar6 = lVar6 + 1;
    } while (*(int *)(param_1 + 0x78) != lVar6);
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar6 = 0;
    do {
      if (*(char *)(param_2 + 0x10) == *(char *)(*(longlong *)(param_1 + 0x80) + lVar6))
      goto LAB_146923ddf;
      lVar6 = lVar6 + 1;
    } while (*(int *)(param_1 + 0x88) != lVar6);
  }
  local_860 = local_840;
  local_848 = 0;
  local_850 = &local_40;
  local_858 = local_860;
  FUN_1469223c6(param_1,&local_860,param_2,1);
  *local_858 = 0;
  puVar2 = local_860;
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x50);
    lVar7 = 0;
    do {
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(lVar6 + 8 + lVar7) != 0) {
        puVar5 = *(undefined2 **)(lVar6 + lVar7);
      }
      lVar3 = FUN_1448324a4(puVar2,puVar5);
      if (lVar3 == 0) goto LAB_146923e13;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x60);
    lVar7 = 0;
    do {
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(lVar6 + 8 + lVar7) != 0) {
        puVar5 = *(undefined2 **)(lVar6 + lVar7);
      }
      lVar3 = FUN_1448324a4(puVar2,puVar5);
      if (lVar3 != 0) goto LAB_146923e13;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  *(int *)(param_1 + 0xb8) = param_3;
  uVar4 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x180,0,0x149dfb77a);
  SendMessageW(*(HWND *)(param_1 + 0xe0),0x19a,(longlong)(int)uVar4,(longlong)param_3);
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
LAB_146923e18:
  FUN_144724f3c(&local_860);
LAB_146923de4:
  if ((local_40 ^ (ulonglong)auStack_888) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146923ddf:
  uVar4 = 0xffffffff;
  goto LAB_146923de4;
LAB_146923e13:
  uVar4 = 0xffffffff;
  goto LAB_146923e18;
}



// FUNCTION 146923e24 FUN_146923e24 body=28 status=ok
// SIG undefined FUN_146923e24(void)

undefined8 FUN_146923e24(HWND param_1)

{
  InvalidateRect(param_1,(RECT *)0x0,1);
  return 1;
}



// FUNCTION 146923e50 FUN_146923e50 body=12 status=ok
// SIG undefined FUN_146923e50(void)

void FUN_146923e50(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146923e59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146923e5c FUN_146923e5c body=57 status=ok
// SIG undefined FUN_146923e5c(void)

undefined8 * FUN_146923e5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ec9230;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146923e96 FUN_146923e96 body=3 status=ok
// SIG undefined FUN_146923e96(void)

undefined8 FUN_146923e96(void)

{
  return 0;
}



// FUNCTION 146923e9a FUN_146923e9a body=5 status=ok
// SIG undefined FUN_146923e9a(void)

longlong FUN_146923e9a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 146923ea0 FUN_146923ea0 body=1358 status=ok
// SIG undefined FUN_146923ea0(void)

LRESULT FUN_146923ea0(longlong param_1,HWND param_2,UINT param_3,HDC param_4,LPARAM param_5)

{
  int iVar1;
  short sVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  LRESULT LVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auStackY_138 [32];
  RECT local_f8;
  RECT local_e8;
  RECT local_d8;
  tagRECT local_c8;
  tagPAINTSTRUCT local_b8;
  tagRECT local_68;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_138;
  uVar8 = (uint)((ulonglong)param_5 >> 0x10);
  if ((int)param_3 < 0x201) {
    if (param_3 == 0x14) {
      GetClientRect(param_2,&local_c8);
      iVar9 = local_c8.right + 1;
      local_d8.left = 0;
      local_d8.right = local_c8.right;
      local_d8.bottom = local_c8.bottom - iVar9;
      local_d8.top = iVar9;
      FillRect(param_4,&local_d8,*(HBRUSH *)(param_1 + 0x1b0));
      local_e8.left = 0;
      local_e8.top = 0;
      local_e8.right = local_c8.right;
      local_e8.bottom = iVar9;
      FillRect(param_4,&local_e8,*(HBRUSH *)(param_1 + 400));
      local_f8.left = 0;
      local_f8.top = local_c8.bottom - iVar9;
      local_f8.right = local_c8.right;
      local_f8.bottom = local_c8.bottom;
      FillRect(param_4,&local_f8,*(HBRUSH *)(param_1 + 400));
      SelectObject(param_4,*(HGDIOBJ *)(param_1 + 0x1e8));
      SelectObject(param_4,*(HGDIOBJ *)(param_1 + 0x160));
      uVar8 = local_c8.right / 2;
      local_b8.hdc._4_4_ = uVar8 + 1;
      local_b8.rcPaint.left = uVar8 - 2;
      local_b8.hdc._0_4_ = uVar8 - 3;
      local_b8.fErase = uVar8;
      local_b8.rcPaint.top = uVar8 + 3;
      local_b8.rcPaint.right = local_b8.hdc._4_4_;
      Polygon(param_4,(POINT *)&local_b8,3);
      local_68.top = (local_c8.bottom - uVar8) + -2;
      local_68.bottom = (local_c8.bottom - uVar8) + 1;
      local_68.left = uVar8 - 3;
      local_68.right = uVar8;
      local_58 = uVar8 + 3;
      local_54 = local_68.top;
      Polygon(param_4,(POINT *)&local_68,3);
      LVar6 = 1;
      goto LAB_146924068;
    }
    if (param_3 == 0x200) {
      if (*(int *)(param_1 + 0x1fc) != -1) {
        GetClientRect(param_2,(LPRECT)&local_b8);
        BVar3 = local_b8.fErase;
        iVar9 = local_b8.fErase + 1;
        iVar1 = *(int *)(param_1 + 0x1fc);
        LVar6 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x18b,0,0);
        iVar4 = local_b8.rcPaint.left / *(int *)(param_1 + 0x1f8);
        iVar7 = local_b8.rcPaint.left - (BVar3 * 2 + 2);
        iVar5 = (iVar4 * iVar7) / (int)LVar6;
        if (iVar5 < iVar9) {
          iVar5 = iVar9;
        }
        fVar10 = ((float)((int)LVar6 - iVar4) * (float)(int)(~BVar3 + ((uVar8 & 0xffff) - iVar1))) /
                 (float)(iVar7 - iVar5);
        SetWindowPos(*(HWND *)(param_1 + 0x120),*(HWND *)(param_1 + 0xd8),1,1,1,1,0x614);
        SendMessageW(*(HWND *)(param_1 + 0xe0),0x197,
                     (longlong)((int)ROUND(fVar10 + fVar10 + -0.5) >> 1),0);
        RedrawWindow(param_2,(RECT *)0x0,(HRGN)0x0,1);
      }
    }
    else if (param_3 == 0xf) {
      GetClientRect(param_2,&local_68);
      iVar9 = local_68.right + 1;
      BeginPaint(param_2,&local_b8);
      local_c8.left = 0;
      local_c8.right = local_68.right;
      local_c8.bottom = local_68.bottom - iVar9;
      local_c8.top = iVar9;
      FillRect((HDC)CONCAT44(local_b8.hdc._4_4_,(int)local_b8.hdc),&local_c8,
               *(HBRUSH *)(param_1 + 0x1b0));
      FUN_1469243f0(param_1,&local_e8,&local_f8,&local_68);
      if (0 < local_f8.left) {
        local_d8.left = 1;
        local_d8.top = local_e8.left;
        local_d8.right = local_68.right - 1;
        local_d8.bottom = local_f8.left + local_e8.left;
        FillRect((HDC)CONCAT44(local_b8.hdc._4_4_,(int)local_b8.hdc),&local_d8,
                 *(HBRUSH *)(param_1 + 0x1a8));
      }
      EndPaint(param_2,&local_b8);
    }
  }
  else if (param_3 == 0x202) {
    ReleaseCapture();
    if (*(char *)(param_1 + 0x2e9) == '\x01') {
      *(undefined1 *)(param_1 + 0x2e9) = 0;
      SetEvent(*(HANDLE *)(param_1 + 0x2d8));
    }
    *(undefined4 *)(param_1 + 0x1fc) = 0xffffffff;
  }
  else if (param_3 == 0x201) {
    GetClientRect(param_2,(LPRECT)&local_b8);
    uVar8 = uVar8 & 0xffff;
    if ((int)(local_b8.fErase + 1U) < (int)uVar8) {
      if ((int)(local_b8.rcPaint.left - (local_b8.fErase + 1U)) < (int)uVar8) {
        iVar9 = 1;
      }
      else {
        FUN_1469243f0(param_1,&local_68,&local_c8,&local_b8);
        if ((0 < local_c8.left) &&
           ((int)uVar8 < local_68.left + local_c8.left &&
            (uVar8 - local_68.left != 0 && local_68.left <= (int)uVar8))) {
          *(uint *)(param_1 + 0x1fc) = uVar8 - local_68.left;
          SetCapture(param_2);
          *(undefined1 *)(param_1 + 0x2e9) = 1;
          goto LAB_146924057;
        }
        if (local_68.left < (int)uVar8) {
          if ((int)uVar8 <= local_68.left + local_c8.left) goto LAB_146924057;
          iVar9 = local_b8.rcPaint.left / *(int *)(param_1 + 0x1f8) + -1;
        }
        else {
          iVar9 = 1 - local_b8.rcPaint.left / *(int *)(param_1 + 0x1f8);
        }
      }
    }
    else {
      iVar9 = -1;
    }
    FUN_14692338e(param_1,iVar9);
  }
  else if (param_3 == 0x20a) {
    GetClientRect(*(HWND *)(param_1 + 0xe0),(LPRECT)&local_b8);
    sVar2 = (short)((uint)(((int)param_4 >> 0x10) * -0x6667) >> 0x10);
    FUN_14692338e(param_1,(int)(short)((sVar2 >> 4) - (sVar2 >> 0xf)));
    LVar6 = 0;
    goto LAB_146924068;
  }
LAB_146924057:
  LVar6 = DefWindowProcW(param_2,param_3,(WPARAM)param_4,param_5);
LAB_146924068:
  if ((local_48 ^ (ulonglong)auStackY_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return LVar6;
}



// FUNCTION 1469243f0 FUN_1469243f0 body=207 status=ok
// SIG undefined FUN_1469243f0(void)

void FUN_1469243f0(longlong param_1,int *param_2,int *param_3,longlong param_4)

{
  int extraout_EAX;
  int iVar1;
  int iVar2;
  int iVar4;
  int iVar5;
  float fVar6;
  LRESULT LVar3;
  
  iVar5 = *(int *)(param_4 + 8);
  LVar3 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x18b,0,0);
  extraout_EAX = (int)LVar3;
  iVar4 = *(int *)(param_4 + 0xc);
  iVar1 = iVar4 / *(int *)(param_1 + 0x1f8);
  *param_3 = 0;
  if (extraout_EAX - iVar1 != 0 && iVar1 <= extraout_EAX) {
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + iVar5 * -2;
    LVar3 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x18e,0,0);
    iVar2 = (iVar1 * iVar4) / extraout_EAX;
    if (iVar2 < iVar5) {
      iVar2 = iVar5;
    }
    if (iVar4 - iVar2 != 0 && iVar2 <= iVar4) {
      fVar6 = (float)((iVar4 - iVar2) * (int)LVar3) / (float)(extraout_EAX - iVar1);
      *param_2 = iVar5 - ((int)ROUND(-0.5 - (fVar6 + fVar6)) >> 1);
      *param_3 = iVar2;
    }
  }
  return;
}



// FUNCTION 1469244c0 FUN_1469244c0 body=5919 status=ok
// SIG undefined FUN_1469244c0(void)

undefined8 FUN_1469244c0(longlong param_1,HWND param_2,int param_3,longlong param_4,LPARAM param_5)

{
  longlong *plVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  byte bVar6;
  UINT UVar7;
  POINT pt;
  byte bVar8;
  int iVar9;
  BOOL BVar10;
  ulonglong uVar11;
  LRESULT LVar12;
  size_t sVar13;
  HDC hdc;
  undefined8 uVar14;
  HMENU hmenu;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  HWND pHVar17;
  undefined2 *puVar18;
  HWND pHVar19;
  longlong lVar20;
  int iVar21;
  short sVar22;
  HWND pHVar23;
  HWND pHVar24;
  bool bVar25;
  undefined1 auStackY_9d8 [32];
  MENUITEMINFOW local_980;
  tagPOINT local_930;
  undefined1 local_928 [12];
  LONG LStack_91c;
  undefined1 *local_918;
  undefined1 local_910;
  wchar_t local_908 [64];
  undefined1 local_888 [24];
  undefined1 local_870;
  HWND__ local_868 [64];
  wint_t local_768 [896];
  wint_t local_68 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStackY_9d8;
  if (param_3 < 0x111) {
    if (param_3 == 8) goto switchD_14692452b_caseD_202;
    if (param_3 == 0x100) {
      if (param_4 == 0x10) goto switchD_14692452b_caseD_201;
    }
    else if ((param_3 == 0x101) && (param_4 == 0x10)) goto switchD_14692452b_caseD_202;
    goto switchD_14692452b_caseD_203;
  }
  sVar22 = (short)param_5;
  iVar21 = (int)param_5 >> 0x10;
  switch(param_3) {
  case 0x200:
    if (((int)sVar22 != *(int *)(param_1 + 0x128)) || (iVar21 != *(int *)(param_1 + 300))) {
      SetWindowPos(*(HWND *)(param_1 + 0x120),*(HWND *)(param_1 + 0xd8),1,1,1,1,0x614);
      local_888._0_8_ = &DAT_100000018;
      local_888._16_4_ = 0xffffffff;
      local_888._8_8_ = param_2;
      TrackMouseEvent((LPTRACKMOUSEEVENT)local_888);
    }
    break;
  case 0x201:
switchD_14692452b_caseD_201:
    *(undefined1 *)(param_1 + 0x2e9) = 1;
    break;
  case 0x202:
switchD_14692452b_caseD_202:
    if (*(char *)(param_1 + 0x2e9) == '\x01') {
      *(undefined1 *)(param_1 + 0x2e9) = 0;
      SetEvent(*(HANDLE *)(param_1 + 0x2d8));
    }
    break;
  case 0x203:
  case 0x206:
  case 0x207:
  case 0x208:
  case 0x209:
    break;
  case 0x204:
    *(undefined2 *)(param_1 + 0x2e8) = 0x100;
    LVar12 = SendMessageW(param_2,0x1a9,0,param_5);
    *(int *)(param_1 + 0x208) = (int)LVar12;
    local_888._0_8_ = (HWND)0x0;
    local_888._8_8_ = (HWND)0x0;
    FUN_146922b9c(param_1,local_888);
    if ((longlong)(int)local_888._8_4_ == 0) {
LAB_146925ae6:
      FUN_146923b0a(param_1);
      SendMessageW(*(HWND *)(param_1 + 0xe0),0x185,1,(longlong)*(int *)(param_1 + 0x208));
    }
    else {
      lVar20 = 0;
      bVar8 = 0;
      do {
        bVar6 = bVar8;
        bVar25 = *(int *)(param_1 + 0x208) == *(int *)((longlong)(int *)local_888._0_8_ + lVar20);
        lVar20 = lVar20 + 4;
        bVar8 = bVar6 | bVar25;
      } while ((longlong)(int)local_888._8_4_ * 4 != lVar20);
      if (!(bool)(bVar6 | bVar25)) goto LAB_146925ae6;
    }
    if ((HWND)local_888._0_8_ != (HWND)0x0) {
      FUN_1400020a8();
    }
    break;
  case 0x205:
    if (*(char *)(param_1 + 0x2e9) == '\x01') {
      *(undefined1 *)(param_1 + 0x2e9) = 0;
      SetEvent(*(HANDLE *)(param_1 + 0x2d8));
    }
    local_930.x = (LONG)sVar22;
    local_888._0_8_ = local_868;
    local_870 = 0;
    local_888._16_8_ = local_68;
    local_930.y = iVar21;
    local_888._8_8_ = local_888._0_8_;
    LVar12 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x199,(longlong)*(int *)(param_1 + 0x208),0);
    iVar21 = (int)LVar12 - *(int *)(param_1 + 0x1f0);
    *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
    if (iVar21 < 0) {
      GetClientRect(param_2,(LPRECT)local_928);
      pt.y = local_930.y;
      pt.x = local_930.x;
      BVar10 = PtInRect((LPRECT)local_928,pt);
      if (BVar10 != 0) goto LAB_14692490d;
    }
    else {
      FUN_1469223c6(param_1,local_888,
                    (ulonglong)(*(int *)(param_1 + 0x9c) + iVar21 & *(uint *)(param_1 + 0x98)) *
                    0x30 + *(longlong *)(param_1 + 0x90),0);
LAB_14692490d:
      hmenu = CreatePopupMenu();
      local_980.cbSize = 0x50;
      local_980.fMask = 0x62;
      local_980.fType = 0;
      local_980.dwTypeData = L"Activate auto scroll";
      local_980.wID = 0x65;
      local_980.dwItemData = 1;
      InsertMenuItemW(hmenu,0,1,&local_980);
      local_980.fMask = 0x62;
      local_980.fType = 0;
      local_980.dwTypeData = L"Copy selected line(s)";
      local_980.wID = 0x66;
      UVar7 = (UINT)local_980.dwItemData;
      local_980.dwItemData = local_980.dwItemData + 1;
      InsertMenuItemW(hmenu,UVar7,1,&local_980);
      local_980.fMask = 0;
      local_980.fType = 0x800;
      UVar7 = (UINT)local_980.dwItemData;
      local_980.dwItemData = local_980.dwItemData + 1;
      InsertMenuItemW(hmenu,UVar7,1,&local_980);
      local_980.fMask = 0x62;
      local_980.fType = 0;
      local_980.dwTypeData = L"Clear all";
      local_980.wID = 0x67;
      UVar7 = (UINT)local_980.dwItemData;
      local_980.dwItemData = local_980.dwItemData + 1;
      InsertMenuItemW(hmenu,UVar7,1,&local_980);
      local_980.fMask = 0x62;
      local_980.fType = 0;
      local_980.dwTypeData = L"Clear all entries above line";
      local_980.wID = 0x68;
      UVar7 = (UINT)local_980.dwItemData;
      local_980.dwItemData = local_980.dwItemData + 1;
      InsertMenuItemW(hmenu,UVar7,1,&local_980);
      local_980.fMask = 0x62;
      local_980.fType = 0;
      local_980.dwTypeData = L"Clear filters";
      local_980.wID = 0x79;
      UVar7 = (UINT)local_980.dwItemData;
      local_980.dwItemData = local_980.dwItemData + 1;
      InsertMenuItemW(hmenu,UVar7,1,&local_980);
      if (-1 < iVar21) {
        FUN_1400021e4(*(longlong *)(param_1 + 0x90) +
                      (ulonglong)(*(int *)(param_1 + 0x9c) + iVar21 & *(uint *)(param_1 + 0x98)) *
                      0x30 + 0x14,local_928);
        plVar1 = (longlong *)(param_1 + 0x220);
        if (plVar1 == (longlong *)local_928) {
          if ((wchar_t *)local_928._0_8_ != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x220) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)(param_1 + 0x220) = local_928._0_8_;
          local_928._0_8_ = (wchar_t *)0x0;
          *(undefined4 *)(param_1 + 0x228) = local_928._8_4_;
          *(LONG *)(param_1 + 0x22c) = LStack_91c;
        }
        *(undefined1 *)(param_1 + 0x230) =
             *(undefined1 *)
              (*(longlong *)(param_1 + 0x90) + 0x10 +
              (ulonglong)(iVar21 + *(int *)(param_1 + 0x9c) & *(uint *)(param_1 + 0x98)) * 0x30);
        local_980.fMask = 0;
        local_980.fType = 0x800;
        UVar7 = (UINT)local_980.dwItemData;
        local_980.dwItemData = local_980.dwItemData + 1;
        InsertMenuItemW(hmenu,UVar7,1,&local_980);
        local_910 = 0;
        builtin_wcsncpy(local_908,L"Include category \'",0x12);
        unique0x0000a600 = local_908 + 0x12;
        local_928._0_8_ = local_908;
        local_918 = local_888;
        if (*(int *)(param_1 + 0x228) == 0) {
          pwVar16 = L"";
LAB_146924bb7:
          sVar13 = wcslen(pwVar16);
        }
        else {
          pwVar16 = (wchar_t *)*plVar1;
          if (pwVar16 != (wchar_t *)0x0) goto LAB_146924bb7;
          pwVar16 = (wchar_t *)0x0;
          sVar13 = 0;
        }
        puVar15 = (undefined8 *)FUN_1449668a2(local_928,pwVar16,sVar13);
        pwVar16 = (wchar_t *)puVar15[1];
        if ((wchar_t *)puVar15[2] <= pwVar16 + 0xb) {
          FUN_140213274(puVar15,0xb);
          pwVar16 = (wchar_t *)puVar15[1];
        }
        builtin_wcsncpy(pwVar16,L"\' in filter",0xb);
        puVar15[1] = pwVar16 + 0xb;
        pwVar16[0xb] = L'\0';
        local_980.dwTypeData = (LPWSTR)*puVar15;
        local_980.fMask = 0x62;
        local_980.fType = 0;
        local_980.wID = 0x7c;
        UVar7 = (UINT)local_980.dwItemData;
        local_980.dwItemData = local_980.dwItemData + 1;
        InsertMenuItemW(hmenu,UVar7,1,&local_980);
        FUN_144724f3c(local_928);
        local_910 = 0;
        builtin_wcsncpy(local_908,L"Exclude category \'",0x12);
        unique0x0000a600 = local_908 + 0x12;
        if (*(int *)(param_1 + 0x228) == 0) {
          pwVar16 = L"";
LAB_146924caa:
          local_928._0_8_ = local_908;
          local_918 = local_888;
          sVar13 = wcslen(pwVar16);
        }
        else {
          pwVar16 = (wchar_t *)*plVar1;
          if (pwVar16 != (wchar_t *)0x0) goto LAB_146924caa;
          pwVar16 = (wchar_t *)0x0;
          sVar13 = 0;
          local_928._0_8_ = local_908;
          local_918 = local_888;
        }
        puVar15 = (undefined8 *)FUN_1449668a2(local_928,pwVar16,sVar13);
        pwVar16 = (wchar_t *)puVar15[1];
        if ((wchar_t *)puVar15[2] <= pwVar16 + 0xb) {
          FUN_140213274(puVar15,0xb);
          pwVar16 = (wchar_t *)puVar15[1];
        }
        builtin_wcsncpy(pwVar16,L"\' in filter",0xb);
        puVar15[1] = pwVar16 + 0xb;
        pwVar16[0xb] = L'\0';
        local_980.dwTypeData = (LPWSTR)*puVar15;
        local_980.fMask = 0x62;
        local_980.fType = 0;
        local_980.wID = 0x7d;
        UVar7 = (UINT)local_980.dwItemData;
        local_980.dwItemData = local_980.dwItemData + 1;
        InsertMenuItemW(hmenu,UVar7,1,&local_980);
        FUN_144724f3c(local_928);
        local_910 = 0;
        builtin_wcsncpy(local_908,L"Include verbosity \'",0x13);
        local_928._0_8_ = local_908;
        unique0x100019c8 = local_908 + 0x13;
        local_918 = local_888;
        pwVar16 = (wchar_t *)FUN_1427674c7(*(undefined1 *)(param_1 + 0x230));
        if (pwVar16 == (wchar_t *)0x0) {
          sVar13 = 0;
        }
        else {
          sVar13 = wcslen(pwVar16);
        }
        puVar15 = (undefined8 *)FUN_1449668a2(local_928,pwVar16,sVar13);
        pwVar16 = (wchar_t *)puVar15[1];
        if ((wchar_t *)puVar15[2] <= pwVar16 + 0xb) {
          FUN_140213274(puVar15,0xb);
          pwVar16 = (wchar_t *)puVar15[1];
        }
        builtin_wcsncpy(pwVar16,L"\' in filter",0xb);
        puVar15[1] = pwVar16 + 0xb;
        pwVar16[0xb] = L'\0';
        local_980.dwTypeData = (LPWSTR)*puVar15;
        local_980.fMask = 0x62;
        local_980.fType = 0;
        local_980.wID = 0x7e;
        UVar7 = (UINT)local_980.dwItemData;
        local_980.dwItemData = local_980.dwItemData + 1;
        InsertMenuItemW(hmenu,UVar7,1,&local_980);
        FUN_144724f3c(local_928);
        local_910 = 0;
        local_918 = local_888;
        builtin_wcsncpy(local_908,L"Exclude verbosity \'",0x13);
        local_928._0_8_ = local_908;
        unique0x100019d0 = local_908 + 0x13;
        pwVar16 = (wchar_t *)FUN_1427674c7(*(undefined1 *)(param_1 + 0x230));
        if (pwVar16 == (wchar_t *)0x0) {
          sVar13 = 0;
        }
        else {
          sVar13 = wcslen(pwVar16);
        }
        puVar15 = (undefined8 *)FUN_1449668a2(local_928,pwVar16,sVar13);
        pwVar16 = (wchar_t *)puVar15[1];
        if ((wchar_t *)puVar15[2] <= pwVar16 + 0xb) {
          FUN_140213274(puVar15,0xb);
          pwVar16 = (wchar_t *)puVar15[1];
        }
        builtin_wcsncpy(pwVar16,L"\' in filter",0xb);
        puVar15[1] = pwVar16 + 0xb;
        pwVar16[0xb] = L'\0';
        local_980.dwTypeData = (LPWSTR)*puVar15;
        local_980.fMask = 0x62;
        local_980.fType = 0;
        local_980.wID = 0x7f;
        UVar7 = (UINT)local_980.dwItemData;
        local_980.dwItemData = local_980.dwItemData + 1;
        InsertMenuItemW(hmenu,UVar7,1,&local_980);
        FUN_144724f3c(local_928);
      }
      uVar14 = local_888._0_8_;
      iVar21 = (*(int *)(param_1 + 500) / 2 + local_930.x) / *(int *)(param_1 + 500);
      if (iVar21 < (int)((ulonglong)(local_888._8_8_ - local_888._0_8_) >> 1)) {
        *(undefined2 *)(int *)local_888._8_8_ = 0;
        pHVar19 = (HWND)((longlong)(int *)local_888._0_8_ + (longlong)iVar21 * 2);
        pHVar17 = pHVar19;
        pHVar23 = pHVar19;
        if (iVar21 != 0) {
          do {
            pHVar24 = (HWND)((longlong)&pHVar23[-1].unused + 2);
            wVar2 = *(wint_t *)((longlong)&pHVar23[-1].unused + 2);
            iVar21 = iswalnum(wVar2);
            if (iVar21 == 0) {
              pHVar17 = pHVar24;
              if (wVar2 != 0x2d) {
                pHVar17 = pHVar23;
              }
              if (wVar2 == 0x5f) {
                pHVar17 = pHVar24;
              }
              pHVar24 = pHVar17;
              if ((wVar2 != 0x2d) && (wVar2 != 0x5f)) break;
            }
            pHVar17 = (HWND)uVar14;
            pHVar23 = pHVar24;
          } while (pHVar24 != (HWND)uVar14);
        }
        uVar11 = (longlong)pHVar19 - (longlong)pHVar17;
        while( true ) {
          wVar2 = (wint_t)pHVar19->unused;
          iVar21 = iswalnum(wVar2);
          if (((iVar21 == 0) && (wVar2 != 0x5f)) && (wVar2 != 0x2d)) break;
          pHVar19 = (HWND)((longlong)&pHVar19->unused + 2);
          uVar11 = uVar11 + 2;
        }
        if (pHVar19 != pHVar17) {
          FUN_1402980a2(param_1 + 0x210,pHVar17,uVar11 >> 1 & 0xffffffff);
          local_980.fMask = 0;
          local_980.fType = 0x800;
          UVar7 = (UINT)local_980.dwItemData;
          local_980.dwItemData = local_980.dwItemData + 1;
          InsertMenuItemW(hmenu,UVar7,1,&local_980);
          local_928._0_8_ = local_908;
          local_910 = 0;
          local_918 = local_888;
          unique0x100019d8 = (wchar_t *)local_928._0_8_;
          FUN_146925be0(local_928,"Copy word \'");
          iVar21 = *(int *)(param_1 + 0x218) + -1;
          if (*(int *)(param_1 + 0x218) == 0) {
            iVar21 = 0;
          }
          puVar15 = (undefined8 *)FUN_1449668a2(local_928,*(undefined8 *)(param_1 + 0x210),iVar21);
          puVar18 = (undefined2 *)puVar15[1];
          if ((undefined2 *)puVar15[2] <= puVar18 + 1) {
            FUN_140213274(puVar15,1);
            puVar18 = (undefined2 *)puVar15[1];
          }
          *puVar18 = 0x27;
          puVar15[1] = puVar18 + 1;
          puVar18[1] = 0;
          local_980.dwTypeData = (LPWSTR)*puVar15;
          local_980.fMask = 0x62;
          local_980.fType = 0;
          local_980.wID = 0x78;
          UVar7 = (UINT)local_980.dwItemData;
          local_980.dwItemData = local_980.dwItemData + 1;
          InsertMenuItemW(hmenu,UVar7,1,&local_980);
          FUN_144724f3c(local_928);
          local_980.fMask = 0;
          local_980.fType = 0x800;
          UVar7 = (UINT)local_980.dwItemData;
          local_980.dwItemData = local_980.dwItemData + 1;
          InsertMenuItemW(hmenu,UVar7,1,&local_980);
          local_910 = 0;
          local_928._0_8_ = local_908;
          unique0x100019e0 = (wchar_t *)local_928._0_8_;
          local_918 = local_888;
          FUN_146925c52(local_928,"Include word \'");
          iVar21 = *(int *)(param_1 + 0x218) + -1;
          if (*(int *)(param_1 + 0x218) == 0) {
            iVar21 = 0;
          }
          puVar15 = (undefined8 *)FUN_1449668a2(local_928,*(undefined8 *)(param_1 + 0x210),iVar21);
          FUN_146925be0(puVar15,"\' in filter");
          *(undefined2 *)puVar15[1] = 0;
          local_980.dwTypeData = (LPWSTR)*puVar15;
          local_980.fMask = 0x62;
          local_980.fType = 0;
          local_980.wID = 0x7a;
          UVar7 = (UINT)local_980.dwItemData;
          local_980.dwItemData = local_980.dwItemData + 1;
          InsertMenuItemW(hmenu,UVar7,1,&local_980);
          FUN_144724f3c(local_928);
          local_910 = 0;
          local_928._0_8_ = local_908;
          unique0x100019e8 = (wchar_t *)local_928._0_8_;
          local_918 = local_888;
          FUN_146925c52(local_928,"Exclude word \'");
          iVar21 = *(int *)(param_1 + 0x218) + -1;
          if (*(int *)(param_1 + 0x218) == 0) {
            iVar21 = 0;
          }
          puVar15 = (undefined8 *)FUN_1449668a2(local_928,*(undefined8 *)(param_1 + 0x210),iVar21);
          FUN_146925be0(puVar15,"\' in filter");
          *(undefined2 *)puVar15[1] = 0;
          local_980.dwTypeData = (LPWSTR)*puVar15;
          local_980.fMask = 0x62;
          local_980.fType = 0;
          local_980.wID = 0x7b;
          UVar7 = (UINT)local_980.dwItemData;
          local_980.dwItemData = local_980.dwItemData + 1;
          InsertMenuItemW(hmenu,UVar7,1,&local_980);
          FUN_144724f3c(local_928);
        }
      }
      local_980.fMask = 0;
      local_980.fType = 0x800;
      UVar7 = (UINT)local_980.dwItemData;
      local_980.dwItemData = local_980.dwItemData + 1;
      InsertMenuItemW(hmenu,UVar7,1,&local_980);
      if (*(int *)(param_1 + 0x308) == 1) {
LAB_146925145:
        local_980.fMask = 0x62;
        local_980.fType = 0;
        local_980.dwTypeData = L"Show Date and Time";
        local_980.wID = 0x84;
        UVar7 = (UINT)local_980.dwItemData;
        local_980.dwItemData = local_980.dwItemData + 1;
        InsertMenuItemW(hmenu,UVar7,1,&local_980);
        if (*(int *)(param_1 + 0x308) != 0) goto LAB_146925189;
      }
      else {
        local_980.fMask = 0x62;
        local_980.fType = 0;
        local_980.dwTypeData = L"Show Time";
        local_980.wID = 0x83;
        UVar7 = (UINT)local_980.dwItemData;
        local_980.dwItemData = local_980.dwItemData + 1;
        InsertMenuItemW(hmenu,UVar7,1,&local_980);
        if (*(int *)(param_1 + 0x308) != 2) goto LAB_146925145;
LAB_146925189:
        local_980.fMask = 0x62;
        local_980.fType = 0;
        local_980.dwTypeData = L"Hide Date and Time";
        local_980.wID = 0x85;
        UVar7 = (UINT)local_980.dwItemData;
        local_980.dwItemData = local_980.dwItemData + 1;
        InsertMenuItemW(hmenu,UVar7,1,&local_980);
      }
      MapWindowPoints(param_2,(HWND)0x0,&local_930,1);
      TrackPopupMenu(hmenu,0,local_930.x,local_930.y,0,param_2,(RECT *)0x0);
    }
LAB_14692520d:
    FUN_144724f3c(local_888);
    break;
  case 0x20a:
    GetClientRect(*(HWND *)(param_1 + 0xe0),(LPRECT)local_888);
    sVar22 = (short)((uint)(((int)(uint)param_4 >> 0x10) * -0x6667) >> 0x10);
    FUN_14692338e(param_1,(int)(short)((sVar22 >> 4) - (sVar22 >> 0xf)));
    uVar14 = 0;
    goto LAB_14692481f;
  default:
    if (param_3 != 0x111) {
      if (param_3 == 0x2a1) {
        *(int *)(param_1 + 0x128) = (int)sVar22;
        *(int *)(param_1 + 300) = iVar21;
        uVar11 = SendMessageW(param_2,0x1a9,0,param_5);
        LVar12 = SendMessageW(param_2,0x199,uVar11 & 0xffff,0);
        iVar9 = (int)LVar12 - *(int *)(param_1 + 0x1f0);
        if ((0 < iVar9) && (iVar9 < *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c))) {
          local_888._0_8_ = local_868;
          local_870 = 0;
          local_888._16_8_ = local_68;
          local_888._8_8_ = local_888._0_8_;
          FUN_1469223c6(param_1,local_888,
                        (ulonglong)(*(int *)(param_1 + 0x9c) + iVar9 & *(uint *)(param_1 + 0x98)) *
                        0x30 + *(longlong *)(param_1 + 0x90),0);
          uVar11 = local_888._8_8_ - local_888._0_8_;
          GetClientRect(*(HWND *)(param_1 + 0xe0),(LPRECT)local_928);
          iVar9 = (int)local_928._8_4_ / *(int *)(param_1 + 500);
          if (iVar9 < (int)(uVar11 >> 1)) {
            *(undefined2 *)(int *)local_888._8_8_ = 0;
            pwVar16 = (wchar_t *)((longlong)(int *)local_888._0_8_ + (longlong)iVar9 * 2);
            sVar13 = wcslen(pwVar16);
            iVar3 = *(int *)(param_1 + 500);
            hdc = GetDC(*(HWND *)(param_1 + 0x120));
            SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0xd0));
            ReleaseDC(*(HWND *)(param_1 + 0x120),hdc);
            local_980.cbSize = *(int *)(param_1 + 500) * iVar9;
            local_980.fMask =
                 iVar21 - (int)(CONCAT44((int)param_5 >> 0x1f,iVar21) %
                               (longlong)*(int *)(param_1 + 0x1f8));
            MapWindowPoints(*(HWND *)(param_1 + 0xe0),(HWND)0x0,(LPPOINT)&local_980,1);
            SetWindowPos(*(HWND *)(param_1 + 0x120),*(HWND *)(param_1 + 0xd8),local_980.cbSize,
                         local_980.fMask - 1,(int)sVar13 * iVar3 + 3,*(int *)(param_1 + 0x1f8) + 2,
                         0x614);
            SetWindowTextW(*(HWND *)(param_1 + 0x120),pwVar16);
            RedrawWindow(param_2,(RECT *)0x0,(HRGN)0x0,0x101);
          }
          goto LAB_14692520d;
        }
      }
      break;
    }
    uVar4 = (uint)param_4 & 0xffff;
    switch(uVar4) {
    case 0x65:
      FUN_146922bfc(param_1);
      break;
    case 0x66:
      FUN_146925cc4(param_1);
      break;
    case 0x67:
      FUN_146922e94(param_1);
      *(undefined1 *)(param_1 + 0x2e8) = 1;
      break;
    case 0x68:
      local_888._0_4_ = 0xffffffff;
      LVar12 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x191,1,(LPARAM)local_888);
      if (LVar12 == 1) {
        LVar12 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x199,(longlong)(int)local_888._0_4_,0);
        iVar21 = (int)LVar12 - *(int *)(param_1 + 0x1f0);
        *(int *)(param_1 + 0x1f0) = (int)LVar12;
        FUN_14691dd20(param_1 + 0x90,*(int *)(param_1 + 0x9c),*(int *)(param_1 + 0x9c) + iVar21);
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + iVar21;
        goto LAB_14692553f;
      }
      break;
    case 0x78:
      if (*(int *)(param_1 + 0x218) == 0) {
        puVar18 = &DAT_149dfb77a;
      }
      else {
        puVar18 = *(undefined2 **)(param_1 + 0x210);
      }
      FUN_142855b70(puVar18);
      break;
    case 0x79:
      FUN_14691f70e(param_1,&DAT_149dfb77a);
      FUN_14691f76c(param_1,&DAT_149dfb77a);
      if (*(int *)(param_1 + 0x7c) < 0) {
        *(undefined4 *)(param_1 + 0x78) = 0;
        FUN_146925e18(param_1 + 0x70);
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      if (*(int *)(param_1 + 0x8c) < 0) {
        *(undefined4 *)(param_1 + 0x88) = 0;
        FUN_146925e18(param_1 + 0x80);
      }
      else {
        *(undefined4 *)(param_1 + 0x88) = 0;
      }
      goto LAB_14692553f;
    case 0x7a:
      iVar21 = *(int *)(param_1 + 0x318);
      if (iVar21 < 2) {
        local_888._0_8_ = (HWND)0x0;
        uVar4 = *(uint *)(param_1 + 0x218);
        pvVar5 = *(void **)(param_1 + 0x210);
        local_888._8_4_ = uVar4;
        if ((longlong)(int)uVar4 == 0) {
          local_888._12_4_ = 0;
        }
        else {
          FUN_1446dd670(local_888,uVar4,0);
          memcpy((void *)local_888._0_8_,pvVar5,(longlong)(int)uVar4 * 2);
        }
      }
      else {
        FUN_1400b22c2(&local_980,&DAT_149dfc0cb);
        FUN_1407ec8fc(local_928,param_1 + 0x310,&local_980);
        FUN_144a7dea0(local_888,local_928,param_1 + 0x210);
      }
      pHVar19 = (HWND)local_888._0_8_;
      if (local_888._8_4_ == 0) {
        pHVar19 = (HWND)&DAT_149dfb77a;
      }
      FUN_14691f70e(param_1,pHVar19);
      goto LAB_146925a9c;
    case 0x7b:
      iVar21 = *(int *)(param_1 + 0x328);
      if (iVar21 < 2) {
        local_888._0_8_ = (HWND)0x0;
        uVar4 = *(uint *)(param_1 + 0x218);
        pvVar5 = *(void **)(param_1 + 0x210);
        local_888._8_4_ = uVar4;
        if ((longlong)(int)uVar4 == 0) {
          local_888._12_4_ = 0;
        }
        else {
          FUN_1446dd670(local_888,uVar4,0);
          memcpy((void *)local_888._0_8_,pvVar5,(longlong)(int)uVar4 * 2);
        }
      }
      else {
        FUN_1400b22c2(&local_980,&DAT_149dfc0cb);
        FUN_1407ec8fc(local_928,param_1 + 800,&local_980);
        FUN_144a7dea0(local_888,local_928,param_1 + 0x210);
      }
      pHVar19 = (HWND)local_888._0_8_;
      if (local_888._8_4_ == 0) {
        pHVar19 = (HWND)&DAT_149dfb77a;
      }
      FUN_14691f76c(param_1,pHVar19);
LAB_146925a9c:
      if ((HWND)local_888._0_8_ != (HWND)0x0) {
        FUN_1400020a8();
      }
      if (1 < iVar21) {
        if ((wchar_t *)local_928._0_8_ != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (CONCAT44(local_980.fMask,local_980.cbSize) != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_14692553f;
    case 0x7c:
    case 0x7d:
      local_888._0_8_ = local_868;
      local_870 = 0;
      local_888._16_8_ = local_768;
      local_888._8_8_ = local_888._0_8_;
      if (uVar4 == 0x7c) {
        lVar20 = 0x310;
        if (*(int *)(param_1 + 0x318) == 0) goto LAB_1469253df;
LAB_1469257f6:
        pwVar16 = *(wchar_t **)(param_1 + lVar20);
        if (pwVar16 != (wchar_t *)0x0) goto LAB_1469253e9;
        pwVar16 = (wchar_t *)0x0;
        sVar13 = 0;
      }
      else {
        lVar20 = 800;
        if (*(int *)(param_1 + 0x328) != 0) goto LAB_1469257f6;
LAB_1469253df:
        pwVar16 = L"";
LAB_1469253e9:
        sVar13 = wcslen(pwVar16);
      }
      FUN_1449668a2(local_888,pwVar16,sVar13);
      if ((int)((ulonglong)(local_888._8_8_ - local_888._0_8_) >> 1) != 0) {
        if ((ulonglong)local_888._16_8_ <= (wint_t *)((longlong)(int *)local_888._8_8_ + 2)) {
          FUN_140213274(local_888,1);
        }
        *(undefined2 *)&((HWND)local_888._8_8_)->unused = 0x20;
        local_888._8_8_ = (HWND)((longlong)&((HWND)local_888._8_8_)->unused + 2);
      }
      if ((ulonglong)local_888._16_8_ <= (wint_t *)((longlong)(int *)local_888._8_8_ + 2)) {
        FUN_140213274(local_888,1);
      }
      *(undefined2 *)&((HWND)local_888._8_8_)->unused = 0x5b;
      iVar21 = *(int *)(param_1 + 0x228) + -1;
      if (*(int *)(param_1 + 0x228) == 0) {
        iVar21 = 0;
      }
      local_888._8_8_ = (HWND)((longlong)&((HWND)local_888._8_8_)->unused + 2);
      lVar20 = FUN_1449668a2(local_888,*(undefined8 *)(param_1 + 0x220),iVar21);
      puVar18 = *(undefined2 **)(lVar20 + 8);
      if (*(undefined2 **)(lVar20 + 0x10) <= puVar18 + 1) {
        FUN_140213274(lVar20,1);
        puVar18 = *(undefined2 **)(lVar20 + 8);
      }
      *(undefined2 **)(lVar20 + 8) = puVar18 + 1;
      *puVar18 = 0x5d;
      *(undefined2 *)(int *)local_888._8_8_ = 0;
      if (uVar4 == 0x7c) {
        FUN_14691f70e();
      }
      else {
        FUN_14691f76c(param_1,local_888._0_8_);
      }
      FUN_146922c52(param_1);
      FUN_144724f3c(local_888);
      break;
    case 0x7e:
    case 0x7f:
      FUN_146925e48((ulonglong)(uVar4 != 0x7e) * 0x10 + param_1 + 0x70,param_1 + 0x230);
      goto LAB_14692553f;
    case 0x83:
      *(undefined4 *)(param_1 + 0x308) = 1;
      goto LAB_14692553f;
    case 0x84:
      *(undefined4 *)(param_1 + 0x308) = 2;
      goto LAB_14692553f;
    case 0x85:
      *(undefined4 *)(param_1 + 0x308) = 0;
LAB_14692553f:
      FUN_146922c52(param_1);
    }
  }
switchD_14692452b_caseD_203:
  uVar14 = (**(code **)(param_1 + 0x130))(param_2,param_3,param_4,param_5);
LAB_14692481f:
  if ((local_60 ^ (ulonglong)auStackY_9d8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146925be0 FUN_146925be0 body=114 status=ok
// SIG undefined FUN_146925be0(void)

longlong FUN_146925be0(longlong param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    iVar5 = (int)sVar2;
  }
  lVar4 = (longlong)iVar5;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar4);
  }
  if (iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        *(short *)(lVar1 + lVar3 * 2) = (short)param_2[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + lVar4 * 2;
  }
  return param_1;
}



// FUNCTION 146925c52 FUN_146925c52 body=114 status=ok
// SIG undefined FUN_146925c52(void)

longlong FUN_146925c52(longlong param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    iVar5 = (int)sVar2;
  }
  lVar4 = (longlong)iVar5;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar4);
  }
  if (iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        *(short *)(lVar1 + lVar3 * 2) = (short)param_2[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + lVar4 * 2;
  }
  return param_1;
}



// FUNCTION 146925cc4 FUN_146925cc4 body=338 status=ok
// SIG undefined FUN_146925cc4(void)

void FUN_146925cc4(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LRESULT LVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_488 [32];
  longlong local_468;
  undefined8 uStack_460;
  undefined4 *local_458;
  undefined4 *local_450;
  ulonglong *local_448;
  undefined1 local_440;
  undefined4 local_438 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_468 = 0;
  uStack_460 = 0;
  uVar3 = FUN_146922b9c();
  if (uVar3 != 0) {
    local_458 = local_438;
    local_440 = 0;
    local_448 = &local_38;
    uVar7 = 0;
    puVar2 = local_458;
    do {
      local_450 = puVar2;
      LVar4 = SendMessageW(*(HWND *)(param_1 + 0xe0),0x199,(longlong)*(int *)(local_468 + uVar7 * 4)
                           ,0);
      lVar5 = (ulonglong)
              (((int)LVar4 - *(int *)(param_1 + 0x1f0)) + *(int *)(param_1 + 0x9c) &
              *(uint *)(param_1 + 0x98)) * 0x30;
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x90) + 8 + lVar5);
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      FUN_1449668a2(&local_458,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + lVar5),iVar6);
      if (local_448 <= local_450 + 1) {
        FUN_140213274(&local_458,2);
      }
      *local_450 = 0xa000d;
      uVar7 = uVar7 + 1;
      puVar2 = local_450 + 1;
    } while (uVar3 != uVar7);
    *(undefined2 *)(local_450 + 1) = 0;
    local_450 = local_450 + 1;
    FUN_142855b70(local_458);
    FUN_144724f3c(&local_458);
  }
  if (local_468 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146925e18 FUN_146925e18 body=48 status=ok
// SIG undefined FUN_146925e18(void)

void FUN_146925e18(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 146925e48 FUN_146925e48 body=88 status=ok
// SIG undefined FUN_146925e48(void)

void FUN_146925e48(longlong *param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + lVar3) == *param_2) {
        if ((int)lVar3 != -1) {
          return;
        }
        break;
      }
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146925ea0(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(char *)(lVar2 + lVar4) = *param_2;
  return;
}



// FUNCTION 146925ea0 FUN_146925ea0 body=124 status=ok
// SIG undefined FUN_146925ea0(void)

void FUN_146925ea0(longlong param_1,int param_2)

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



// FUNCTION 146925f1e FUN_146925f1e body=774 status=ok
// SIG undefined FUN_146925f1e(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_146925f1e(longlong param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_308 [32];
  ulonglong local_2e8;
  int local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  int *local_2c8;
  int *local_2c0;
  int *local_2b8;
  int *local_2b0;
  int *local_2a8;
  int *local_2a0;
  int *local_298;
  int *local_290;
  int local_288;
  int local_284 [3];
  int local_278;
  int local_274 [3];
  undefined1 local_268 [256];
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x2000000000;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x2000000000;
  uVar2 = *(uint *)(param_1 + 0x240);
  uVar7 = 0;
  iVar8 = 0;
  local_2dc = param_3;
  local_2d8 = param_2;
  if ((ulonglong)uVar2 != 0) {
    lVar9 = 0;
    iVar8 = 0;
    local_2e8 = param_4;
    do {
      uVar4 = local_50;
      uVar7 = local_160;
      lVar3 = *(longlong *)(param_1 + 0x238);
      if (1 < *(int *)(lVar3 + 0x18 + lVar9)) {
        if (*(char *)(lVar3 + 0x39 + lVar9) == '\x01') {
          iVar10 = (int)local_50;
          uVar1 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar1);
          puVar5 = local_158;
          if (local_50._4_4_ < uVar1) {
            FUN_14692354a(local_158,uVar4 & 0xffffffff);
          }
        }
        else {
          iVar10 = (int)local_160;
          uVar1 = (int)local_160 + 1;
          local_160 = CONCAT44(local_160._4_4_,uVar1);
          puVar5 = local_268;
          if (local_160._4_4_ < uVar1) {
            FUN_14692354a(local_268,uVar7 & 0xffffffff);
          }
        }
        iVar8 = iVar8 + 1;
        puVar6 = *(undefined1 **)(puVar5 + 0x100);
        if (*(undefined1 **)(puVar5 + 0x100) == (undefined1 *)0x0) {
          puVar6 = puVar5;
        }
        *(longlong *)(puVar6 + (longlong)iVar10 * 8) = lVar3 + lVar9;
      }
      lVar9 = lVar9 + 0x40;
    } while ((ulonglong)uVar2 << 6 != lVar9);
    uVar7 = local_50 & 0xffffffff;
    param_4 = local_2e8;
  }
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_158;
  }
  FUN_1469262df(puVar5,uVar7);
  puVar5 = local_168;
  if (local_168 == (undefined1 *)0x0) {
    puVar5 = local_268;
  }
  FUN_1469262df(puVar5,local_160 & 0xffffffff);
  iVar8 = iVar8 - (int)local_50;
  local_274[2] = (int)local_50;
  if ((int)local_50 < iVar8) {
    local_274[2] = iVar8;
  }
  iVar10 = (int)local_2d8;
  local_288 = -200;
  if (0x3ed < (int)local_2d8 && (int)local_50 < iVar8) {
    local_274[2] = (iVar8 - (iVar8 + 1 >> 0x1f)) + 1 >> 1;
    if (local_274[2] <= (int)local_50) {
      local_274[2] = (int)local_50;
    }
    local_288 = -400;
  }
  local_2a0 = local_274 + 2;
  local_2a8 = local_274 + 1;
  local_274[1] = 0x12;
  iVar8 = local_274[2] * 0x12 + 8;
  local_2e8 = CONCAT44(local_2e8._4_4_,iVar8);
  local_284[2] = (local_2dc - iVar8) + 2;
  local_298 = local_274;
  local_2c8 = &local_278;
  local_2c0 = local_284 + 2;
  local_2b8 = local_284;
  local_2b0 = local_284 + 1;
  local_290 = &local_288;
  local_278 = 7;
  local_284[1] = 0;
  local_284[0] = (int)local_2d8 + local_288 + -0xd;
  local_288 = (int)local_2d8 + -0xf + local_288;
  local_2d0 = param_4;
  local_274[0] = local_284[2];
  FUN_146926226(&local_2d0,local_158);
  local_278 = iVar10 + -0xc6;
  local_284[2] = local_274[0];
  local_284[1] = 0;
  local_284[0] = 0xc0;
  local_288 = -200;
  FUN_146926226(&local_2d0,local_268);
  if (local_168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_2e8 & 0xffffffff;
}



// FUNCTION 146926226 FUN_146926226 body=185 status=ok
// SIG undefined FUN_146926226(void)

void FUN_146926226(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x108);
  if ((ulonglong)uVar1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x100);
      if (*(longlong *)(param_2 + 0x100) == 0) {
        lVar2 = param_2;
      }
      lVar2 = *(longlong *)(lVar2 + uVar3 * 8);
      if (1 < *(int *)(lVar2 + 0x18)) {
        FUN_146926732(*param_1,lVar2,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2],
                      *(undefined4 *)param_1[3],*(undefined4 *)param_1[4]);
        *(int *)param_1[2] = *(int *)param_1[2] + *(int *)param_1[5];
        *(int *)param_1[4] = *(int *)param_1[4] + 1;
        if (*(int *)param_1[6] <= *(int *)param_1[4]) {
          *(int *)param_1[4] = 0;
          *(undefined4 *)param_1[2] = *(undefined4 *)param_1[7];
          *(int *)param_1[1] = *(int *)param_1[1] + *(int *)param_1[8];
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}



// FUNCTION 1469262df FUN_1469262df body=682 status=ok
// SIG undefined FUN_1469262df(void)

void FUN_1469262df(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  float fVar19;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar12 = &local_348;
    do {
      puVar5 = (ulonglong *)*plVar12;
      puVar13 = (ulonglong *)plVar12[1];
      iVar15 = (int)plVar12[2];
      iVar7 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar5) >> 3);
      puVar11 = puVar5;
      puVar10 = puVar13;
      if (iVar15 != 0) {
LAB_1469263a1:
        if (8 < (int)(iVar7 + 1U)) {
          uVar8 = iVar7 + 1U >> 1;
          uVar16 = puVar5[uVar8];
          puVar5[uVar8] = *puVar5;
          *puVar5 = uVar16;
          puVar9 = puVar13 + 1;
          puVar6 = puVar5;
          do {
            puVar4 = puVar6 + 1;
            puVar14 = puVar6 + 1;
            do {
              puVar6 = puVar14;
              puVar17 = puVar4;
              if (puVar13 < puVar6) break;
              iVar1 = *(int *)(*puVar5 + 0x34);
              iVar7 = *(int *)(*puVar6 + 0x34);
              bVar3 = iVar1 < iVar7;
              if (iVar1 == iVar7) {
                bVar3 = *puVar5 < *puVar6;
              }
              puVar4 = puVar17 + 1;
              puVar14 = puVar6 + 1;
            } while (!bVar3);
            puVar4 = puVar9 + -2;
            do {
              puVar14 = puVar9;
              puVar18 = puVar4;
              puVar9 = puVar14 + -1;
              if (puVar9 <= puVar5) break;
              iVar1 = *(int *)(*puVar9 + 0x34);
              iVar7 = *(int *)(*puVar5 + 0x34);
              bVar3 = iVar1 < iVar7;
              if (iVar1 == iVar7) {
                bVar3 = *puVar9 < *puVar5;
              }
              puVar4 = puVar18 + -1;
            } while (!bVar3);
            if (puVar9 < puVar6) goto LAB_146926464;
            uVar16 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar16;
          } while( true );
        }
        if (puVar5 < puVar13) {
          do {
            puVar11 = puVar5;
            if (puVar5 + 1 <= puVar13) {
              uVar16 = *puVar5;
              puVar10 = puVar5 + 1;
              puVar9 = puVar5;
              do {
                uVar2 = *puVar10;
                bVar3 = *(int *)(uVar16 + 0x34) < *(int *)(uVar2 + 0x34);
                if (*(int *)(uVar16 + 0x34) == *(int *)(uVar2 + 0x34)) {
                  bVar3 = uVar16 < uVar2;
                }
                puVar11 = puVar10;
                if (!bVar3) {
                  puVar11 = puVar9;
                  uVar2 = uVar16;
                }
                uVar16 = uVar2;
                puVar10 = puVar10 + 1;
                puVar9 = puVar11;
              } while (puVar10 <= puVar13);
            }
            uVar16 = *puVar11;
            *puVar11 = *puVar13;
            *puVar13 = uVar16;
            puVar13 = puVar13 + -1;
          } while (puVar5 < puVar13);
        }
        goto LAB_146926563;
      }
LAB_14692657d:
      FUN_14692658a(puVar5);
LAB_146926563:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146926464:
  uVar16 = *puVar5;
  *puVar5 = *puVar9;
  *puVar9 = uVar16;
  iVar15 = iVar15 + -1;
  puVar14 = puVar14 + -2;
  if ((longlong)puVar18 - (longlong)puVar11 < (longlong)puVar10 - (longlong)puVar17) {
    if (puVar6 < puVar13) {
      *plVar12 = (longlong)puVar6;
      plVar12[1] = (longlong)puVar13;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar17 = puVar5;
    if (puVar9 <= puVar5 + 1) goto LAB_146926563;
  }
  else {
    if (puVar5 + 1 < puVar9) {
      *plVar12 = (longlong)puVar5;
      plVar12[1] = (longlong)puVar14;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar5 = puVar6;
    puVar14 = puVar13;
    puVar18 = puVar13;
    if (puVar13 <= puVar6) goto LAB_146926563;
  }
  iVar7 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar17) >> 3);
  puVar11 = puVar17;
  puVar13 = puVar14;
  puVar10 = puVar18;
  if (iVar15 == 0) goto LAB_14692657d;
  goto LAB_1469263a1;
}



// FUNCTION 14692658a FUN_14692658a body=423 status=ok
// SIG undefined FUN_14692658a(void)

void FUN_14692658a(undefined8 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar11 = iVar6;
joined_r0x0001469265ae:
    do {
      iVar9 = iVar6 * 2 + 1;
      if (iVar9 < (int)param_2) {
        iVar10 = iVar6 * 2 + 2;
        if (iVar10 < (int)param_2) {
          iVar2 = *(int *)(param_1[iVar10] + 0x34);
          iVar1 = *(int *)(param_1[iVar9] + 0x34);
          bVar12 = iVar2 < iVar1;
          if (iVar2 == iVar1) {
            bVar12 = (ulonglong)param_1[iVar10] < (ulonglong)param_1[iVar9];
          }
          if (!bVar12) {
            iVar9 = iVar10;
          }
        }
        uVar7 = param_1[iVar9];
        uVar8 = param_1[iVar6];
        bVar12 = *(int *)(uVar8 + 0x34) < *(int *)(uVar7 + 0x34);
        if (*(int *)(uVar8 + 0x34) == *(int *)(uVar7 + 0x34)) {
          bVar12 = uVar8 < uVar7;
        }
        if (bVar12) {
          param_1[iVar6] = uVar7;
          param_1[iVar9] = uVar8;
          iVar6 = iVar9;
          goto joined_r0x0001469265ae;
        }
      }
      bVar12 = iVar11 != 0;
      iVar6 = iVar11 + -1;
      iVar11 = iVar6;
    } while (bVar12);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar7 - 1];
      param_1[uVar7 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar8 = uVar7 - 1;
          iVar6 = 0;
          iVar9 = 1;
          iVar11 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar10 = iVar9;
            if ((longlong)iVar6 < (longlong)uVar8) {
              iVar2 = *(int *)(param_1[iVar6] + 0x34);
              iVar1 = *(int *)(param_1[iVar9] + 0x34);
              bVar12 = iVar2 < iVar1;
              if (iVar2 == iVar1) {
                bVar12 = (ulonglong)param_1[iVar6] < (ulonglong)param_1[iVar9];
              }
              if (!bVar12) {
                iVar10 = iVar6;
              }
            }
            uVar4 = param_1[iVar10];
            uVar5 = param_1[iVar11];
            bVar12 = *(int *)(uVar5 + 0x34) < *(int *)(uVar4 + 0x34);
            if (*(int *)(uVar5 + 0x34) == *(int *)(uVar4 + 0x34)) {
              bVar12 = uVar5 < uVar4;
            }
            if (!bVar12) break;
            param_1[iVar11] = uVar4;
            param_1[iVar10] = uVar5;
            iVar6 = iVar10 * 2;
            iVar9 = iVar10 * 2 + 1;
            iVar11 = iVar10;
          } while ((longlong)iVar9 < (longlong)uVar8);
          uVar3 = *param_1;
          *param_1 = param_1[uVar7 - 2];
          param_1[uVar7 - 2] = uVar3;
          uVar7 = uVar8;
        } while (2 < uVar8);
      }
    }
  }
  return;
}



// FUNCTION 146926732 FUN_146926732 body=209 status=ok
// SIG undefined FUN_146926732(void)

void FUN_146926732(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
                  LONG param_6)

{
  int cx;
  int cx_00;
  
  param_5 = param_5 + -0x10;
  cx_00 = 0x5a;
  if (param_5 < 0x5a) {
    cx_00 = param_5;
  }
  SetWindowPos((HWND)*param_2,(HWND)0x0,param_3 + 0x10,param_4,cx_00,0x12,*(UINT *)*param_1);
  SetWindowLongW((HWND)*param_2,-0x15,param_6);
  cx = param_5 - cx_00;
  if (param_5 - cx_00 < 1) {
    cx = 0;
  }
  SetWindowPos((HWND)param_2[1],(HWND)0x0,cx_00 + param_3 + 0x10,param_4,cx,0x12,*(UINT *)*param_1);
                    /* WARNING: Could not recover jumptable at 0x000146926800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowLongW((HWND)param_2[1],-0x15,param_6);
  return;
}



// FUNCTION 146926804 FUN_146926804 body=546 status=ok
// SIG undefined FUN_146926804(void)

void FUN_146926804(longlong param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int *piVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78 [2];
  int local_64;
  longlong *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_3 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x298));
    plVar1 = (longlong *)(param_1 + 0x248);
    FUN_140056680(&local_60,param_2);
    plVar7 = local_60;
    if ((int)local_58 == 0) {
      plVar7 = (longlong *)&DAT_149dfb77a;
    }
    uVar9 = 0;
    uVar6 = (ulonglong)((int)local_58 - 1);
    if ((int)local_58 == 0) {
      uVar6 = uVar9;
    }
    local_80 = param_4;
    uVar4 = FUN_144a49b4a(uVar6,plVar7);
    iVar5 = FUN_144a7df4c(plVar1,uVar4);
    if (iVar5 != -1) {
      uVar9 = (longlong)iVar5 * 0x20 + *plVar1;
    }
    piVar8 = (int *)(uVar9 + 0x10);
    if (uVar9 == 0) {
      piVar8 = (int *)0x0;
    }
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (piVar8 == (int *)0x0) {
      local_64 = *(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x27c);
      FUN_140056680(local_78,param_2);
      local_60 = local_78;
      local_58 = &local_64;
      FUN_14171d5f2(plVar1,local_4c,&local_60,0);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_64 = *piVar8;
    }
    uVar2 = *(uint *)(param_1 + 0x2c8);
    lVar12 = *(longlong *)(param_1 + 0x2c0);
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar9 = (ulonglong)uVar2;
      uVar10 = uVar2;
      do {
        uVar9 = uVar9 >> 1;
        uVar11 = (uint)uVar9 + (int)uVar6;
        if (*(int *)(lVar12 + (ulonglong)uVar11 * 0x38) < local_64) {
          uVar6 = (ulonglong)(uVar11 + (uVar10 & 1));
        }
        bVar3 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar3);
    }
    if ((((int)uVar2 <= (int)uVar6) || (local_64 < *(int *)(lVar12 + uVar6 * 0x38))) ||
       (lVar12 = lVar12 + uVar6 * 0x38 + 8, lVar12 == 0)) {
      lVar12 = FUN_146926a28(param_1 + 0x2c0,&local_64);
    }
    if (piVar8 == (int *)0x0) {
      FUN_14020fad6(lVar12,param_3);
      *(undefined4 *)(lVar12 + 0x24) = param_6;
      *(undefined1 *)(lVar12 + 0x28) = param_7;
    }
    FUN_14020fad6(lVar12 + 0x10,local_80);
    *(undefined4 *)(lVar12 + 0x20) = param_5;
    SetEvent(*(HANDLE *)(param_1 + 0x2d8));
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x298));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146926a28 FUN_146926a28 body=230 status=ok
// SIG undefined FUN_146926a28(void)

int * FUN_146926a28(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar4 = uVar2;
    do {
      uVar1 = (uVar4 >> 1) + uVar7;
      if (*(int *)(lVar6 + (ulonglong)uVar1 * 0x38) < *param_2) {
        uVar7 = uVar1 + (uVar4 & 1);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar6 + (ulonglong)uVar7 * 0x38) <= *param_2)) {
      piVar5 = (int *)(lVar6 + (ulonglong)uVar7 * 0x38);
      FUN_14691da56(piVar5,1);
      goto LAB_146926ad0;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_146926b0e(param_1,uVar2);
    lVar6 = *param_1;
  }
  lVar8 = (ulonglong)uVar7 * 0x38;
  memmove((void *)(lVar6 + lVar8 + 0x38),(void *)(lVar6 + lVar8),(ulonglong)(uVar2 - uVar7) * 0x38);
  piVar5 = (int *)(lVar8 + *param_1);
LAB_146926ad0:
  *piVar5 = *param_2;
  piVar5[2] = 0;
  piVar5[3] = 0;
  piVar5[4] = 0;
  piVar5[5] = 0;
  piVar5[6] = 0;
  piVar5[7] = 0;
  piVar5[8] = 0;
  piVar5[9] = 0;
  *(undefined8 *)((longlong)piVar5 + 0x22) = 0;
  *(undefined8 *)((longlong)piVar5 + 0x2a) = 0;
  return piVar5 + 2;
}



// FUNCTION 146926b0e FUN_146926b0e body=143 status=ok
// SIG undefined FUN_146926b0e(void)

void FUN_146926b0e(longlong param_1,int param_2)

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



// FUNCTION 146926bb0 FUN_146926bb0 body=12 status=ok
// SIG undefined FUN_146926bb0(void)

void FUN_146926bb0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146926bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146926bbc FUN_146926bbc body=29 status=ok
// SIG undefined FUN_146926bbc(void)

undefined8 FUN_146926bbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146926bda FUN_146926bda body=165 status=ok
// SIG undefined FUN_146926bda(void)

void FUN_146926bda(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_268 [32];
  uint local_248;
  undefined4 local_240;
  undefined1 local_238;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  uVar1 = *param_1;
  uVar2 = *param_3;
  FUN_141301ee6(local_228,L"%u%s",*(undefined4 *)((longlong)param_3 + 0x1c),uVar2);
  if (param_2 == 2) {
    FUN_146926c80(uVar1,local_228);
  }
  else {
    local_240 = *(undefined4 *)(param_3 + 3);
    local_238 = *(int *)((longlong)param_3 + 0x14) == 0;
    local_248 = (uint)*(byte *)(param_3 + 2);
    FUN_146926804(uVar1,local_228,uVar2,param_3[1]);
  }
  if ((local_28 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146926c80 FUN_146926c80 body=340 status=ok
// SIG undefined FUN_146926c80(void)

void FUN_146926c80(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x298));
  FUN_140056680(&local_40,param_2);
  puVar7 = local_40;
  if (local_38 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  uVar11 = 0;
  uVar6 = (ulonglong)(local_38 - 1);
  if (local_38 == 0) {
    uVar6 = uVar11;
  }
  uVar3 = FUN_144a49b4a(uVar6,puVar7);
  iVar4 = FUN_144a7df4c((longlong *)(param_1 + 0x248),uVar3);
  if (iVar4 != -1) {
    uVar11 = (longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x248);
  }
  piVar8 = (int *)(uVar11 + 0x10);
  if (uVar11 == 0) {
    piVar8 = (int *)0x0;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (piVar8 != (int *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x2c8);
    lVar5 = *(longlong *)(param_1 + 0x2c0);
    uVar6 = 0;
    if (0 < (int)uVar1) {
      uVar11 = (ulonglong)uVar1;
      uVar9 = uVar1;
      do {
        uVar11 = uVar11 >> 1;
        uVar10 = (uint)uVar11 + (int)uVar6;
        if (*(int *)(lVar5 + (ulonglong)uVar10 * 0x38) < *piVar8) {
          uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar2 = 1 < uVar9;
        uVar9 = (uint)uVar11;
      } while (bVar2);
    }
    if ((((int)uVar1 <= (int)uVar6) || (*piVar8 < *(int *)(lVar5 + uVar6 * 0x38))) ||
       (lVar5 = lVar5 + uVar6 * 0x38 + 8, lVar5 == 0)) {
      lVar5 = FUN_146926a28(param_1 + 0x2c0,piVar8);
    }
    *(undefined1 *)(lVar5 + 0x29) = 1;
    SetEvent(*(HANDLE *)(param_1 + 0x2d8));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x298));
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146926dfa FUN_146926dfa body=12 status=ok
// SIG undefined FUN_146926dfa(void)

void FUN_146926dfa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146926e03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146926e06 FUN_146926e06 body=29 status=ok
// SIG undefined FUN_146926e06(void)

undefined8 FUN_146926e06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146926e24 FUN_146926e24 body=146 status=ok
// SIG undefined FUN_146926e24(void)

void FUN_146926e24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_268 [32];
  uint local_248;
  undefined4 local_240;
  undefined1 local_238;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  uVar1 = *param_1;
  uVar2 = *param_2;
  FUN_141301ee6(local_228,L"%u%s",*(undefined4 *)((longlong)param_2 + 0x1c),uVar2);
  local_240 = *(undefined4 *)(param_2 + 3);
  local_238 = *(int *)((longlong)param_2 + 0x14) == 0;
  local_248 = (uint)*(byte *)(param_2 + 2);
  FUN_146926804(uVar1,local_228,uVar2,param_2[1]);
  if ((local_28 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146926eb8 FUN_146926eb8 body=121 status=ok
// SIG undefined FUN_146926eb8(void)

void FUN_146926eb8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146927266(param_1,iVar1);
    }
    FUN_146927239((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1469272ec(param_1,param_2,iVar1 - param_2);
    FUN_146927346(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146926f32 FUN_146926f32 body=774 status=ok
// SIG undefined FUN_146926f32(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_146926f32(longlong param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_308 [32];
  ulonglong local_2e8;
  int local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  int *local_2c8;
  int *local_2c0;
  int *local_2b8;
  int *local_2b0;
  int *local_2a8;
  int *local_2a0;
  int *local_298;
  int *local_290;
  int local_288;
  int local_284 [3];
  int local_278;
  int local_274 [3];
  undefined1 local_268 [256];
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x2000000000;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x2000000000;
  uVar2 = *(uint *)(param_1 + 0x240);
  uVar7 = 0;
  iVar8 = 0;
  local_2dc = param_3;
  local_2d8 = param_2;
  if ((ulonglong)uVar2 != 0) {
    lVar9 = 0;
    iVar8 = 0;
    local_2e8 = param_4;
    do {
      uVar4 = local_50;
      uVar7 = local_160;
      lVar3 = *(longlong *)(param_1 + 0x238);
      if (1 < *(int *)(lVar3 + 0x18 + lVar9)) {
        if (*(char *)(lVar3 + 0x39 + lVar9) == '\x01') {
          iVar10 = (int)local_50;
          uVar1 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar1);
          puVar5 = local_158;
          if (local_50._4_4_ < uVar1) {
            FUN_14692354a(local_158,uVar4 & 0xffffffff);
          }
        }
        else {
          iVar10 = (int)local_160;
          uVar1 = (int)local_160 + 1;
          local_160 = CONCAT44(local_160._4_4_,uVar1);
          puVar5 = local_268;
          if (local_160._4_4_ < uVar1) {
            FUN_14692354a(local_268,uVar7 & 0xffffffff);
          }
        }
        iVar8 = iVar8 + 1;
        puVar6 = *(undefined1 **)(puVar5 + 0x100);
        if (*(undefined1 **)(puVar5 + 0x100) == (undefined1 *)0x0) {
          puVar6 = puVar5;
        }
        *(longlong *)(puVar6 + (longlong)iVar10 * 8) = lVar3 + lVar9;
      }
      lVar9 = lVar9 + 0x40;
    } while ((ulonglong)uVar2 << 6 != lVar9);
    uVar7 = local_50 & 0xffffffff;
    param_4 = local_2e8;
  }
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_158;
  }
  FUN_1469274ee(puVar5,uVar7);
  puVar5 = local_168;
  if (local_168 == (undefined1 *)0x0) {
    puVar5 = local_268;
  }
  FUN_1469274ee(puVar5,local_160 & 0xffffffff);
  iVar8 = iVar8 - (int)local_50;
  local_274[2] = (int)local_50;
  if ((int)local_50 < iVar8) {
    local_274[2] = iVar8;
  }
  iVar10 = (int)local_2d8;
  local_288 = -200;
  if (0x3ed < (int)local_2d8 && (int)local_50 < iVar8) {
    local_274[2] = (iVar8 - (iVar8 + 1 >> 0x1f)) + 1 >> 1;
    if (local_274[2] <= (int)local_50) {
      local_274[2] = (int)local_50;
    }
    local_288 = -400;
  }
  local_2a0 = local_274 + 2;
  local_2a8 = local_274 + 1;
  local_274[1] = 0x12;
  iVar8 = local_274[2] * 0x12 + 8;
  local_2e8 = CONCAT44(local_2e8._4_4_,iVar8);
  local_284[2] = (local_2dc - iVar8) + 2;
  local_298 = local_274;
  local_2c8 = &local_278;
  local_2c0 = local_284 + 2;
  local_2b8 = local_284;
  local_2b0 = local_284 + 1;
  local_290 = &local_288;
  local_278 = 7;
  local_284[1] = 0;
  local_284[0] = (int)local_2d8 + local_288 + -0xd;
  local_288 = (int)local_2d8 + -0xf + local_288;
  local_2d0 = param_4;
  local_274[0] = local_284[2];
  FUN_146927476(&local_2d0,local_158);
  local_278 = iVar10 + -0xc6;
  local_284[2] = local_274[0];
  local_284[1] = 0;
  local_284[0] = 0xc0;
  local_288 = -200;
  FUN_146927476(&local_2d0,local_268);
  if (local_168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_2e8 & 0xffffffff;
}



// FUNCTION 146927239 FUN_146927239 body=45 status=ok
// SIG undefined FUN_146927239(void)

void FUN_146927239(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x39;
    do {
      *(undefined2 *)(param_1 + -1) = 0;
      *(undefined8 *)(param_1 + -0x39) = 0;
      *(undefined8 *)(param_1 + -0x31) = 0;
      *(undefined8 *)(param_1 + -0x29) = 0;
      *(undefined8 *)(param_1 + -0x21) = 0;
      *(undefined8 *)(param_1 + -0x19) = 0;
      *(undefined8 *)(param_1 + -0x11) = 0;
      *(undefined4 *)(param_1 + -9) = 0;
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146927266 FUN_146927266 body=132 status=ok
// SIG undefined FUN_146927266(void)

void FUN_146927266(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1469272ec FUN_1469272ec body=89 status=ok
// SIG undefined FUN_1469272ec(void)

void FUN_1469272ec(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_14691da93(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146927346 FUN_146927346 body=62 status=ok
// SIG undefined FUN_146927346(void)

void FUN_146927346(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146927384(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 146927384 FUN_146927384 body=93 status=ok
// SIG undefined FUN_146927384(void)

ulonglong FUN_146927384(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1469273e2 FUN_1469273e2 body=48 status=ok
// SIG undefined FUN_1469273e2(void)

void FUN_1469273e2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 146927412 FUN_146927412 body=99 status=ok
// SIG undefined FUN_146927412(void)

void FUN_146927412(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x40);
  if (*(longlong *)(*param_1 + 0x20 + (longlong)(int)param_2 * 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 146927476 FUN_146927476 body=120 status=ok
// SIG undefined FUN_146927476(void)

void FUN_146927476(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 0x108);
  if ((ulonglong)uVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + 0x100);
      if (*(longlong *)(param_2 + 0x100) == 0) {
        lVar3 = param_2;
      }
      if (1 < *(int *)(*(longlong *)(lVar3 + uVar2 * 8) + 0x18)) {
        **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + **(int **)(param_1 + 0x28);
        **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + 1;
        if (**(int **)(param_1 + 0x30) <= **(int **)(param_1 + 0x20)) {
          **(int **)(param_1 + 0x20) = 0;
          **(undefined4 **)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x38);
          **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + **(int **)(param_1 + 0x40);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 1469274ee FUN_1469274ee body=682 status=ok
// SIG undefined FUN_1469274ee(void)

void FUN_1469274ee(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  float fVar19;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar12 = &local_348;
    do {
      puVar5 = (ulonglong *)*plVar12;
      puVar13 = (ulonglong *)plVar12[1];
      iVar15 = (int)plVar12[2];
      iVar7 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar5) >> 3);
      puVar11 = puVar5;
      puVar10 = puVar13;
      if (iVar15 != 0) {
LAB_1469275b0:
        if (8 < (int)(iVar7 + 1U)) {
          uVar8 = iVar7 + 1U >> 1;
          uVar16 = puVar5[uVar8];
          puVar5[uVar8] = *puVar5;
          *puVar5 = uVar16;
          puVar9 = puVar13 + 1;
          puVar6 = puVar5;
          do {
            puVar4 = puVar6 + 1;
            puVar14 = puVar6 + 1;
            do {
              puVar6 = puVar14;
              puVar17 = puVar4;
              if (puVar13 < puVar6) break;
              iVar1 = *(int *)(*puVar5 + 0x34);
              iVar7 = *(int *)(*puVar6 + 0x34);
              bVar3 = iVar1 < iVar7;
              if (iVar1 == iVar7) {
                bVar3 = *puVar5 < *puVar6;
              }
              puVar4 = puVar17 + 1;
              puVar14 = puVar6 + 1;
            } while (!bVar3);
            puVar4 = puVar9 + -2;
            do {
              puVar14 = puVar9;
              puVar18 = puVar4;
              puVar9 = puVar14 + -1;
              if (puVar9 <= puVar5) break;
              iVar1 = *(int *)(*puVar9 + 0x34);
              iVar7 = *(int *)(*puVar5 + 0x34);
              bVar3 = iVar1 < iVar7;
              if (iVar1 == iVar7) {
                bVar3 = *puVar9 < *puVar5;
              }
              puVar4 = puVar18 + -1;
            } while (!bVar3);
            if (puVar9 < puVar6) goto LAB_146927673;
            uVar16 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar16;
          } while( true );
        }
        if (puVar5 < puVar13) {
          do {
            puVar11 = puVar5;
            if (puVar5 + 1 <= puVar13) {
              uVar16 = *puVar5;
              puVar10 = puVar5 + 1;
              puVar9 = puVar5;
              do {
                uVar2 = *puVar10;
                bVar3 = *(int *)(uVar16 + 0x34) < *(int *)(uVar2 + 0x34);
                if (*(int *)(uVar16 + 0x34) == *(int *)(uVar2 + 0x34)) {
                  bVar3 = uVar16 < uVar2;
                }
                puVar11 = puVar10;
                if (!bVar3) {
                  puVar11 = puVar9;
                  uVar2 = uVar16;
                }
                uVar16 = uVar2;
                puVar10 = puVar10 + 1;
                puVar9 = puVar11;
              } while (puVar10 <= puVar13);
            }
            uVar16 = *puVar11;
            *puVar11 = *puVar13;
            *puVar13 = uVar16;
            puVar13 = puVar13 + -1;
          } while (puVar5 < puVar13);
        }
        goto LAB_146927772;
      }
LAB_14692778c:
      FUN_146927799(puVar5);
LAB_146927772:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146927673:
  uVar16 = *puVar5;
  *puVar5 = *puVar9;
  *puVar9 = uVar16;
  iVar15 = iVar15 + -1;
  puVar14 = puVar14 + -2;
  if ((longlong)puVar18 - (longlong)puVar11 < (longlong)puVar10 - (longlong)puVar17) {
    if (puVar6 < puVar13) {
      *plVar12 = (longlong)puVar6;
      plVar12[1] = (longlong)puVar13;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar17 = puVar5;
    if (puVar9 <= puVar5 + 1) goto LAB_146927772;
  }
  else {
    if (puVar5 + 1 < puVar9) {
      *plVar12 = (longlong)puVar5;
      plVar12[1] = (longlong)puVar14;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar5 = puVar6;
    puVar14 = puVar13;
    puVar18 = puVar13;
    if (puVar13 <= puVar6) goto LAB_146927772;
  }
  iVar7 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar17) >> 3);
  puVar11 = puVar17;
  puVar13 = puVar14;
  puVar10 = puVar18;
  if (iVar15 == 0) goto LAB_14692778c;
  goto LAB_1469275b0;
}



// FUNCTION 146927799 FUN_146927799 body=423 status=ok
// SIG undefined FUN_146927799(void)

void FUN_146927799(undefined8 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar11 = iVar6;
joined_r0x0001469277bd:
    do {
      iVar9 = iVar6 * 2 + 1;
      if (iVar9 < (int)param_2) {
        iVar10 = iVar6 * 2 + 2;
        if (iVar10 < (int)param_2) {
          iVar2 = *(int *)(param_1[iVar10] + 0x34);
          iVar1 = *(int *)(param_1[iVar9] + 0x34);
          bVar12 = iVar2 < iVar1;
          if (iVar2 == iVar1) {
            bVar12 = (ulonglong)param_1[iVar10] < (ulonglong)param_1[iVar9];
          }
          if (!bVar12) {
            iVar9 = iVar10;
          }
        }
        uVar7 = param_1[iVar9];
        uVar8 = param_1[iVar6];
        bVar12 = *(int *)(uVar8 + 0x34) < *(int *)(uVar7 + 0x34);
        if (*(int *)(uVar8 + 0x34) == *(int *)(uVar7 + 0x34)) {
          bVar12 = uVar8 < uVar7;
        }
        if (bVar12) {
          param_1[iVar6] = uVar7;
          param_1[iVar9] = uVar8;
          iVar6 = iVar9;
          goto joined_r0x0001469277bd;
        }
      }
      bVar12 = iVar11 != 0;
      iVar6 = iVar11 + -1;
      iVar11 = iVar6;
    } while (bVar12);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar7 - 1];
      param_1[uVar7 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar8 = uVar7 - 1;
          iVar6 = 0;
          iVar9 = 1;
          iVar11 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar10 = iVar9;
            if ((longlong)iVar6 < (longlong)uVar8) {
              iVar2 = *(int *)(param_1[iVar6] + 0x34);
              iVar1 = *(int *)(param_1[iVar9] + 0x34);
              bVar12 = iVar2 < iVar1;
              if (iVar2 == iVar1) {
                bVar12 = (ulonglong)param_1[iVar6] < (ulonglong)param_1[iVar9];
              }
              if (!bVar12) {
                iVar10 = iVar6;
              }
            }
            uVar4 = param_1[iVar10];
            uVar5 = param_1[iVar11];
            bVar12 = *(int *)(uVar5 + 0x34) < *(int *)(uVar4 + 0x34);
            if (*(int *)(uVar5 + 0x34) == *(int *)(uVar4 + 0x34)) {
              bVar12 = uVar5 < uVar4;
            }
            if (!bVar12) break;
            param_1[iVar11] = uVar4;
            param_1[iVar10] = uVar5;
            iVar6 = iVar10 * 2;
            iVar9 = iVar10 * 2 + 1;
            iVar11 = iVar10;
          } while ((longlong)iVar9 < (longlong)uVar8);
          uVar3 = *param_1;
          *param_1 = param_1[uVar7 - 2];
          param_1[uVar7 - 2] = uVar3;
          uVar7 = uVar8;
        } while (2 < uVar8);
      }
    }
  }
  return;
}



// FUNCTION 146927940 FUN_146927940 body=69 status=ok
// SIG undefined FUN_146927940(void)

void FUN_146927940(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
  uVar1 = (ulonglong)(iVar4 + (uint)(iVar4 == -1)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = 0;
  if (iVar4 != -1) {
    uVar3 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (uVar3 <= *(int *)(param_1 + 8) + 1U) {
    return;
  }
  FUN_14691dad0(param_1);
  return;
}



// FUNCTION 146927986 FUN_146927986 body=48 status=ok
// SIG undefined FUN_146927986(void)

void FUN_146927986(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 1469279b6 FUN_1469279b6 body=147 status=ok
// SIG undefined FUN_1469279b6(void)

void FUN_1469279b6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146927a4a FUN_146927a4a body=73 status=ok
// SIG undefined FUN_146927a4a(void)

undefined8 * FUN_146927a4a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ec9568;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145aeabde(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146927a94 FUN_146927a94 body=114 status=ok
// SIG undefined FUN_146927a94(void)

void FUN_146927a94(longlong *param_1,int param_2)

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



// FUNCTION 146927b06 FUN_146927b06 body=95 status=ok
// SIG undefined FUN_146927b06(void)

void FUN_146927b06(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 146927b66 FUN_146927b66 body=103 status=ok
// SIG undefined FUN_146927b66(void)

void FUN_146927b66(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 4;
    } while (lVar4 * 4 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146927bce(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + lVar4 * 4) = *param_2;
  return;
}



// FUNCTION 146927bce FUN_146927bce body=132 status=ok
// SIG undefined FUN_146927bce(void)

void FUN_146927bce(longlong param_1,int param_2)

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



// FUNCTION 146927c54 FUN_146927c54 body=411 status=ok
// SIG undefined FUN_146927c54(void)

void FUN_146927c54(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1447a08a2(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447cc1b4(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0xc + -8);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -3;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 146927df0 FUN_146927df0 body=419 status=ok
// SIG undefined FUN_146927df0(void)

void FUN_146927df0(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0xc);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 8 + lVar6 * 0xc) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 4 + lVar6 * 0xc) =
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



// FUNCTION 146927f94 FUN_146927f94 body=274 status=ok
// SIG undefined FUN_146927f94(void)

undefined4 * FUN_146927f94(longlong param_1,undefined4 *param_2,uint *param_3)

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
  FUN_1469280a8(param_1,local_48);
  uVar4 = *param_3;
  *local_40 = uVar4;
  local_40[1] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_14692818e(param_1,uVar4,local_40,&local_4c);
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
      local_40[2] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[1] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146927df0(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469280a8 FUN_1469280a8 body=230 status=ok
// SIG undefined FUN_1469280a8(void)

int * FUN_1469280a8(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 14692818e FUN_14692818e body=118 status=ok
// SIG undefined FUN_14692818e(void)

undefined8 FUN_14692818e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xc) == *param_3) {
          FUN_146928204(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146928204 FUN_146928204 body=114 status=ok
// SIG undefined FUN_146928204(void)

void FUN_146928204(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 146928276 FUN_146928276 body=52 status=ok
// SIG undefined FUN_146928276(void)

void FUN_146928276(longlong *param_1)

{
  FUN_1469282aa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469282aa FUN_1469282aa body=89 status=ok
// SIG undefined FUN_1469282aa(void)

void FUN_1469282aa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
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



// FUNCTION 146928304 FUN_146928304 body=48 status=ok
// SIG undefined FUN_146928304(void)

void FUN_146928304(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 146928334 FUN_146928334 body=101 status=ok
// SIG undefined FUN_146928334(void)

ulonglong FUN_146928334(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 4;
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3 * 4) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_146928377;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145939322(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + uVar4 * 4) = *param_2;
LAB_146928377:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14692839a FUN_14692839a body=114 status=ok
// SIG undefined FUN_14692839a(void)

void FUN_14692839a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 14692840c FUN_14692840c body=199 status=ok
// SIG undefined FUN_14692840c(void)

void FUN_14692840c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c967078;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c967084 = DAT_14c967084 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c967070 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c967070 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c967084 = DAT_14c967084 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1469284b9;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c967084 = DAT_14c967084 + -1;
LAB_1469284b9:
  FUN_14474d06a(&DAT_14c967070,0);
  return;
}



// FUNCTION 1469284d4 FUN_1469284d4 body=199 status=ok
// SIG undefined FUN_1469284d4(void)

void FUN_1469284d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c867288;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c867294 = DAT_14c867294 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c867280 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c867280 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c867294 = DAT_14c867294 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_146928581;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c867294 = DAT_14c867294 + -1;
LAB_146928581:
  FUN_14474d06a(&DAT_14c867280,0);
  return;
}



// FUNCTION 14692859c FUN_14692859c body=205 status=ok
// SIG undefined FUN_14692859c(void)

void FUN_14692859c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c967090;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c96709c = DAT_14c96709c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c967088 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c967088 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c96709c = DAT_14c96709c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_14692863c;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c96709c = DAT_14c96709c + -1;
LAB_14692863c:
  FUN_14474d06a(&DAT_14c967088,0);
  return;
}



// FUNCTION 14692866a FUN_14692866a body=205 status=ok
// SIG undefined FUN_14692866a(void)

void FUN_14692866a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c8672a0;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c8672ac = DAT_14c8672ac + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c867298 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c867298 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c8672ac = DAT_14c8672ac + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_14692870a;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c8672ac = DAT_14c8672ac + -1;
LAB_14692870a:
  FUN_14474d06a(&DAT_14c867298,0);
  return;
}



// FUNCTION 146928738 FUN_146928738 body=31 status=ok
// SIG undefined FUN_146928738(void)

undefined8 FUN_146928738(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146928770 FUN_146928770 body=93 status=ok
// SIG undefined FUN_146928770(void)

void FUN_146928770(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ec9620;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ec95b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1469287ce FUN_1469287ce body=93 status=ok
// SIG undefined FUN_1469287ce(void)

void FUN_1469287ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ec9620;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ec95b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14692882c FUN_14692882c body=126 status=ok
// SIG undefined FUN_14692882c(void)

void FUN_14692882c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ec9620;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149ec95b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014692889b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469288b8 FUN_1469288b8 body=21 status=ok
// SIG undefined FUN_1469288b8(void)

undefined8 FUN_1469288b8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1469288d0 FUN_1469288d0 body=24 status=ok
// SIG undefined FUN_1469288d0(void)

void FUN_1469288d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469288e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1469288e8 FUN_1469288e8 body=29 status=ok
// SIG undefined FUN_1469288e8(void)

undefined8 FUN_1469288e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146928905 FUN_146928905 body=73 status=ok
// SIG undefined FUN_146928905(void)

void FUN_146928905(longlong param_1,int param_2)

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



// FUNCTION 14692894e FUN_14692894e body=230 status=ok
// SIG undefined FUN_14692894e(void)

undefined8 * FUN_14692894e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146928a44 FUN_146928a44 body=132 status=ok
// SIG undefined FUN_146928a44(void)

void FUN_146928a44(longlong param_1,int param_2)

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



// FUNCTION 146928aca FUN_146928aca body=263 status=ok
// SIG undefined FUN_146928aca(void)

void FUN_146928aca(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_146928905(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 146928bd2 FUN_146928bd2 body=24 status=ok
// SIG undefined FUN_146928bd2(void)

void FUN_146928bd2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146928be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146928bea FUN_146928bea body=29 status=ok
// SIG undefined FUN_146928bea(void)

undefined8 FUN_146928bea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146928c08 FUN_146928c08 body=312 status=ok
// SIG undefined FUN_146928c08(void)

undefined4 * FUN_146928c08(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146928d42(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_146928e28(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146928f16(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146928d42 FUN_146928d42 body=229 status=ok
// SIG undefined FUN_146928d42(void)

int * FUN_146928d42(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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



// FUNCTION 146928e28 FUN_146928e28 body=124 status=ok
// SIG undefined FUN_146928e28(void)

undefined8 FUN_146928e28(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_146928ea4(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146928ea4 FUN_146928ea4 body=114 status=ok
// SIG undefined FUN_146928ea4(void)

void FUN_146928ea4(longlong *param_1,int param_2)

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



// FUNCTION 146928f16 FUN_146928f16 body=477 status=ok
// SIG undefined FUN_146928f16(void)

void FUN_146928f16(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 1469290f4 FUN_1469290f4 body=90 status=ok
// SIG undefined FUN_1469290f4(void)

void FUN_1469290f4(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_146928ea4();
  return;
}



// FUNCTION 14692914e FUN_14692914e body=73 status=ok
// SIG undefined FUN_14692914e(void)

void FUN_14692914e(longlong param_1,int param_2)

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



// FUNCTION 146929198 FUN_146929198 body=128 status=ok
// SIG undefined FUN_146929198(void)

void FUN_146929198(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9670f8;
  if (DAT_14c96712c != 0) {
    *(int *)(DAT_14c9670f8 + (longlong)DAT_14c967128 * 0x10) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x10) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c96712c) {
    iVar4 = DAT_14c967128;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x10) = iVar4;
  DAT_14c96712c = DAT_14c96712c + 1;
  puVar3 = &DAT_14c967108;
  if (DAT_14c967118 != (undefined *)0x0) {
    puVar3 = DAT_14c967118;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c967128 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 146929218 FUN_146929218 body=128 status=ok
// SIG undefined FUN_146929218(void)

void FUN_146929218(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c967148;
  if (DAT_14c96717c != 0) {
    *(int *)(DAT_14c967148 + (longlong)DAT_14c967178 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c96717c) {
    iVar4 = DAT_14c967178;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14c96717c = DAT_14c96717c + 1;
  puVar3 = &DAT_14c967158;
  if (DAT_14c967168 != (undefined *)0x0) {
    puVar3 = DAT_14c967168;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c967178 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 146929298 FUN_146929298 body=64 status=ok
// SIG undefined FUN_146929298(void)

undefined8 * FUN_146929298(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149ec9ce0;
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146929304 FUN_146929304 body=93 status=ok
// SIG undefined FUN_146929304(void)

void FUN_146929304(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ec9d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ec9d00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146929362 FUN_146929362 body=126 status=ok
// SIG undefined FUN_146929362(void)

void FUN_146929362(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ec9d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149ec9d00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469293d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469293ee FUN_1469293ee body=21 status=ok
// SIG undefined FUN_1469293ee(void)

undefined8 FUN_1469293ee(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146929406 FUN_146929406 body=228 status=ok
// SIG undefined FUN_146929406(void)

int FUN_146929406(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3 * 0x20;
      lVar5 = *(longlong *)(*param_1 + lVar8);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x18 + lVar8);
    }
  }
  return -1;
}



// FUNCTION 1469294ea FUN_1469294ea body=442 status=ok
// SIG undefined FUN_1469294ea(void)

undefined4 * FUN_1469294ea(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1469296a6(param_1,local_48);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  uVar11 = *puVar3;
  *local_40 = uVar11;
  uVar5 = puVar3[1];
  local_40[1] = uVar5;
  if (uVar5 == 0) {
    local_40[2] = *puVar4;
    *(undefined4 *)(local_40 + 3) = 0xffffffff;
    local_4c = local_48[0];
  }
  else {
    LOCK();
    *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
    UNLOCK();
    uVar11 = *local_40;
    plVar6 = (longlong *)local_40[1];
    local_40[2] = *puVar4;
    *(undefined4 *)(local_40 + 3) = 0xffffffff;
    local_4c = local_48[0];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
  }
  uVar9 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  cVar8 = FUN_14692978c(param_1,uVar9,local_40,&local_4c);
  uVar7 = local_4c;
  if (cVar8 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar10) {
      uVar11 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x1c) = uVar9;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar12;
      FUN_14692991e(param_1);
    }
  }
  *param_2 = uVar7;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469296a6 FUN_1469296a6 body=229 status=ok
// SIG undefined FUN_1469296a6(void)

int * FUN_1469296a6(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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



// FUNCTION 14692978c FUN_14692978c body=287 status=ok
// SIG undefined FUN_14692978c(void)

undefined8 FUN_14692978c(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar9 = FUN_146929406(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar9 = FUN_146929406(param_1);
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
    }
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)iVar9 * 0x20);
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
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar3 + 4) = param_3[2];
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_1469298ac(param_1,*param_4);
      *param_4 = iVar9;
      uVar10 = 1;
      goto LAB_1469297b4;
    }
  }
  uVar10 = 0;
LAB_1469297b4:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469298ac FUN_1469298ac body=114 status=ok
// SIG undefined FUN_1469298ac(void)

void FUN_1469298ac(longlong *param_1,int param_2)

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



// FUNCTION 14692991e FUN_14692991e body=527 status=ok
// SIG undefined FUN_14692991e(void)

void FUN_14692991e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
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
  uVar6 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar6 != uVar10);
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
      iVar11 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar4 = *local_90;
        lVar12 = (longlong)iVar11 * 0x20;
        uVar9 = *(ulonglong *)(lVar4 + lVar12);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar12);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        uVar6 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar6 >> 0x10 ^ uVar6) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar4 + lVar12 + 0x1c) = iVar8;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar12 + 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar11 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146929b2e FUN_146929b2e body=29 status=ok
// SIG undefined FUN_146929b2e(void)

undefined8 FUN_146929b2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146929b68 FUN_146929b68 body=93 status=ok
// SIG undefined FUN_146929b68(void)

void FUN_146929b68(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149ec9de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146929bc6 FUN_146929bc6 body=93 status=ok
// SIG undefined FUN_146929bc6(void)

void FUN_146929bc6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149ec9de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146929c24 FUN_146929c24 body=126 status=ok
// SIG undefined FUN_146929c24(void)

void FUN_146929c24(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149ec9de0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146929c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146929cae FUN_146929cae body=21 status=ok
// SIG undefined FUN_146929cae(void)

undefined8 FUN_146929cae(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146929cc4 FUN_146929cc4 body=388 status=ok
// SIG undefined FUN_146929cc4(void)

void FUN_146929cc4(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x20 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar9;
        plVar4 = (longlong *)puVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (uVar3 == uVar8) {
          FUN_146929e48(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[3];
        puVar10 = puVar9 + 3;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146929d12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146929e48 FUN_146929e48 body=90 status=ok
// SIG undefined FUN_146929e48(void)

void FUN_146929e48(longlong *param_1,int param_2)

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
  FUN_146929ea2();
  return;
}



// FUNCTION 146929ea2 FUN_146929ea2 body=78 status=ok
// SIG undefined FUN_146929ea2(void)

void FUN_146929ea2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 8 + (longlong)param_2 * 0x20);
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
  FUN_1469298ac(param_1,param_2);
  return;
}



// FUNCTION 146929ef0 FUN_146929ef0 body=59 status=ok
// SIG undefined FUN_146929ef0(void)

void FUN_146929ef0(longlong *param_1)

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



// FUNCTION 146929f2c FUN_146929f2c body=31 status=ok
// SIG undefined FUN_146929f2c(void)

undefined8 FUN_146929f2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146929f68 FUN_146929f68 body=101 status=ok
// SIG undefined FUN_146929f68(void)

void FUN_146929f68(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149eca020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146929fce FUN_146929fce body=134 status=ok
// SIG undefined FUN_146929fce(void)

void FUN_146929fce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149eca020;
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
                    /* WARNING: Could not recover jumptable at 0x00014692a045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14692a064 FUN_14692a064 body=25 status=ok
// SIG undefined FUN_14692a064(void)

undefined8 FUN_14692a064(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14692a07e FUN_14692a07e body=182 status=ok
// SIG undefined FUN_14692a07e(void)

void FUN_14692a07e(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  
  uVar4 = (ulonglong)DAT_14c867270;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14c86727c = DAT_14c86727c + 1;
  do {
    lVar7 = uVar4 * 0x10 + -8;
    uVar5 = uVar4;
    while (((*(int *)(DAT_14c867268 + lVar7) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c867268 + -8 + lVar7), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,0,0,0), cVar3 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar2 = uVar5 < 2;
      uVar5 = uVar5 - 1;
      if (bVar2) {
        DAT_14c86727c = DAT_14c86727c + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14692a111;
      }
    }
    uVar4 = uVar5 - 1;
    bVar6 = true;
  } while (1 < uVar5);
  DAT_14c86727c = DAT_14c86727c + -1;
LAB_14692a111:
  FUN_14474d06a(&DAT_14c867268,0);
  return;
}



// FUNCTION 14692a134 FUN_14692a134 body=132 status=ok
// SIG undefined FUN_14692a134(void)

void FUN_14692a134(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14692a1ba FUN_14692a1ba body=88 status=ok
// SIG undefined FUN_14692a1ba(void)

void FUN_14692a1ba(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14692a212 FUN_14692a212 body=78 status=ok
// SIG undefined FUN_14692a212(void)

void FUN_14692a212(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar8 = 0;
  do {
    *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_2 + lVar8);
    lVar2 = *(longlong *)(param_2 + 8 + lVar8);
    *(longlong *)(param_1 + 8 + lVar8) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
      UNLOCK();
    }
    lVar2 = param_1 + lVar8;
    lVar1 = param_2 + lVar8;
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    uVar7 = *(undefined8 *)(lVar1 + 0x34);
    *(undefined8 *)(lVar2 + 0x2c) = *(undefined8 *)(lVar1 + 0x2c);
    *(undefined8 *)(lVar2 + 0x34) = uVar7;
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    *(undefined8 *)(lVar2 + 0x28) = uVar6;
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    *(undefined8 *)(lVar2 + 0x18) = uVar4;
    lVar8 = lVar8 + 0x40;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14692a260 FUN_14692a260 body=48 status=ok
// SIG undefined FUN_14692a260(void)

void FUN_14692a260(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 14692a290 FUN_14692a290 body=106 status=ok
// SIG undefined FUN_14692a290(void)

undefined8 FUN_14692a290(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x48,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x48)) {
    uVar5 = uVar2 / 0x48 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x48,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14692a2fa FUN_14692a2fa body=77 status=ok
// SIG undefined FUN_14692a2fa(void)

void FUN_14692a2fa(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1 = param_1 + 0x10;
  param_2 = param_2 + 0x10;
  do {
    uVar1 = *(undefined4 *)(param_2 + -0xc);
    uVar2 = *(undefined4 *)(param_2 + -8);
    uVar3 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(param_1 + -0xc) = uVar1;
    *(undefined4 *)(param_1 + -8) = uVar2;
    *(undefined4 *)(param_1 + -4) = uVar3;
    FUN_14692a348(param_1,param_2);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14692a348 FUN_14692a348 body=161 status=ok
// SIG undefined FUN_14692a348(void)

undefined8 * FUN_14692a348(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 2,iVar1,0);
    FUN_140b8566a(param_1[2],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 14692a3ea FUN_14692a3ea body=48 status=ok
// SIG undefined FUN_14692a3ea(void)

void FUN_14692a3ea(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 14692a41a FUN_14692a41a body=147 status=ok
// SIG undefined FUN_14692a41a(void)

void FUN_14692a41a(longlong param_1,int param_2)

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



// FUNCTION 14692a4ae FUN_14692a4ae body=132 status=ok
// SIG undefined FUN_14692a4ae(void)

void FUN_14692a4ae(longlong param_1,int param_2)

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



// FUNCTION 14692a534 FUN_14692a534 body=85 status=ok
// SIG undefined FUN_14692a534(void)

void FUN_14692a534(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149ec59e0;
  FUN_140457ffc(&DAT_14c867268,param_1);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14691d7a4(param_1 + 1);
  return;
}



// FUNCTION 14692a58a FUN_14692a58a body=6 status=ok
// SIG undefined FUN_14692a58a(void)

undefined8 FUN_14692a58a(void)

{
  return 0x7b;
}



// FUNCTION 14692a590 FUN_14692a590 body=343 status=ok
// SIG undefined FUN_14692a590(void)

undefined8 * FUN_14692a590(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  longlong *local_180;
  undefined1 local_178 [256];
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_180 = (longlong *)0x0;
  iVar2 = CreateDXGIFactory1(&DAT_149eca928,&local_180);
  if (local_180 == (longlong *)0x0 || iVar2 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_188 = (longlong *)0x0;
    plVar4 = (longlong *)0x0;
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    iVar2 = 0;
    while( true ) {
      plVar1 = local_180;
      if (plVar4 != (longlong *)0x0) {
        local_188 = (longlong *)0x0;
        (**(code **)(*plVar4 + 0x10))();
      }
      iVar3 = (**(code **)(*plVar1 + 0x38))(plVar1,iVar2,&local_188);
      if (iVar3 == -0x7785fffe) break;
      if (local_188 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        (**(code **)(*local_188 + 0x40))(local_188,local_178);
        plVar4 = local_188;
        if (iVar2 == 0 || uVar6 < local_68) {
          uVar6 = local_68;
          uVar7 = local_78;
          uVar5 = local_74;
        }
      }
      iVar2 = iVar2 + 1;
    }
    *(undefined4 *)param_1 = uVar7;
    *(undefined4 *)((longlong)param_1 + 4) = uVar5;
    param_1[1] = uVar6;
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 0x10))();
    }
  }
  if (local_180 != (longlong *)0x0) {
    (**(code **)(*local_180 + 0x10))(local_180);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14692a6fc FUN_14692a6fc body=47 status=ok
// SIG undefined FUN_14692a6fc(void)

int FUN_14692a6fc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[4] + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (param_1 != (longlong *)0x0 && iVar1 == 0) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
  }
  return iVar1;
}



// FUNCTION 14692a72c FUN_14692a72c body=46 status=ok
// SIG undefined FUN_14692a72c(void)

int FUN_14692a72c(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar2;
  plVar1 = (longlong *)(param_1 + -8);
  if (plVar1 != (longlong *)0x0 && iVar2 == 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,1);
  }
  return iVar2;
}



// FUNCTION 14692a75a FUN_14692a75a body=27 status=ok
// SIG undefined FUN_14692a75a(void)

undefined8 FUN_14692a75a(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_1415ebd7a(*(undefined8 *)(param_1 + 0x10),param_4 == 1);
  return 0;
}



// FUNCTION 14692a776 FUN_14692a776 body=576 status=ok
// SIG undefined FUN_14692a776(void)

void FUN_14692a776(longlong param_1,HIMC param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  POINT PVar4;
  uint uVar5;
  int iVar6;
  HWND hWnd;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  tagCOMPOSITIONFORM local_ac;
  tagCANDIDATEFORM local_90;
  tagRECT local_70;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *(ulonglong *)(param_1 + 0x50);
  if (uVar3 != 0) {
    PVar4 = *(POINT *)(param_1 + 0x58);
    local_90._0_8_ = uVar3;
    if (PVar4 == (POINT)0x0) {
      local_90.ptCurrentPos.x = 0;
      local_90.ptCurrentPos.y = 0;
    }
    else {
      LOCK();
      *(int *)((longlong)PVar4 + 0xc) = *(int *)((longlong)PVar4 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)PVar4 + 0xc) = *(int *)((longlong)PVar4 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)PVar4 + 0xc) = *(int *)((longlong)PVar4 + 0xc) + 1;
      UNLOCK();
      local_90.ptCurrentPos = PVar4;
      if (PVar4 != (POINT)0x0) {
        LOCK();
        *(int *)((longlong)PVar4 + 0xc) = *(int *)((longlong)PVar4 + 0xc) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)((longlong)PVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)PVar4 + 0x10))();
        }
      }
    }
    uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    iVar6 = FUN_1414f68dc((longlong *)(param_1 + 0x60),uVar5 >> 0x10 ^ uVar5,&local_90);
    if (iVar6 == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = (longlong)iVar6 * 0x38 + *(longlong *)(param_1 + 0x60);
    }
    if (local_90.ptCurrentPos != (POINT)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_90.ptCurrentPos + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)local_90.ptCurrentPos + 0x10))();
      }
    }
    if (PVar4 != (POINT)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)PVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)PVar4 + 0x10))(PVar4);
      }
      LOCK();
      piVar1 = (int *)((longlong)PVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)PVar4 + 0x10))(PVar4);
      }
    }
    local_b8 = local_50;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))
              (*(longlong **)(param_1 + 0x50),*(undefined4 *)(lVar7 + 0x24),
               *(undefined4 *)(lVar7 + 0x28),&local_40);
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))(*(longlong **)(param_1 + 0x50),&local_60);
    hWnd = (HWND)(**(code **)(*local_60 + 0xc0))();
    GetWindowRect(hWnd,&local_70);
    local_40 = local_40 - (double)local_70.left;
    local_38 = local_38 - (double)local_70.top;
    local_90.dwIndex = 0;
    local_90.dwStyle = 0x80;
    local_90.rcArea.left = (LONG)local_40;
    local_90.rcArea.top = (LONG)local_38;
    local_90.ptCurrentPos.y = local_90.rcArea.top;
    local_90.ptCurrentPos.x = local_90.rcArea.left;
    local_90.rcArea.bottom = (int)local_48 + local_90.rcArea.top;
    local_90.rcArea.right = local_90.rcArea.left;
    ImmSetCandidateWindow(param_2,&local_90);
    local_ac.ptCurrentPos.x = (LONG)local_40;
    local_ac.dwStyle = 2;
    local_ac.ptCurrentPos.y = (LONG)(local_38 + local_48);
    ImmSetCompositionWindow(param_2,&local_ac);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692a9b8 FUN_14692a9b8 body=362 status=ok
// SIG undefined FUN_14692a9b8(void)

void FUN_14692a9b8(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(ulonglong *)(param_1 + 0x50);
  plVar3 = *(longlong **)(param_1 + 0x58);
  local_38 = uVar2;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_1414f68dc((longlong *)(param_1 + 0x60),uVar4 >> 0x10 ^ uVar4,&local_38);
  if (iVar5 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x60);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined2 *)(lVar6 + 0x20) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
  local_38 = local_38 & 0xffffffff00000000;
  local_3c = 0;
  local_40 = 1;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))(*(longlong **)(param_1 + 0x50),&local_38);
  *(undefined4 *)(lVar6 + 0x24) = (undefined4)local_38;
  *(undefined4 *)(lVar6 + 0x28) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x68))
            (*(longlong **)(param_1 + 0x50),local_38 & 0xffffffff,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14692ab24 FUN_14692ab24 body=293 status=ok
// SIG undefined FUN_14692ab24(void)

void FUN_14692ab24(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(ulonglong *)(param_1 + 0x50);
  plVar3 = *(longlong **)(param_1 + 0x58);
  local_38 = uVar2;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_1414f68dc((longlong *)(param_1 + 0x60),uVar4 >> 0x10 ^ uVar4,&local_38);
  if (iVar5 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x60);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined2 *)(lVar6 + 0x20) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014692ac38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x70))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 14692ac4a FUN_14692ac4a body=495 status=ok
// SIG undefined FUN_14692ac4a(void)

void FUN_14692ac4a(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xcU) = *(int *)((longlong)plVar7 + 0xcU) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar11 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x18 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xcU) = *(int *)((longlong)plVar7 + 0xcU) + 1;
          UNLOCK();
        }
        uVar10 = *puVar9;
        plVar3 = (longlong *)puVar9[1];
        if (plVar3 == (longlong *)0x0) {
LAB_14692ad71:
          plVar12 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
          UNLOCK();
          iVar6 = (int)plVar3[1];
          do {
            if (iVar6 == 0) goto LAB_14692ad71;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar13 = iVar6 == iVar4;
            if (bVar13) {
              *(int *)(plVar3 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
            plVar12 = plVar3;
          } while (!bVar13);
        }
        bVar13 = true;
        if (plVar7 != (longlong *)0x0) {
          iVar6 = (int)plVar7[1];
          do {
            if (iVar6 == 0) goto LAB_14692adac;
            LOCK();
            iVar4 = (int)plVar7[1];
            bVar14 = iVar6 == iVar4;
            if (bVar14) {
              *(int *)(plVar7 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
          } while (!bVar14);
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
          bVar13 = false;
        }
LAB_14692adac:
        if (plVar12 == (longlong *)0x0) {
          uVar10 = 0;
        }
        else {
          LOCK();
          plVar2 = plVar12 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        if (bVar13) {
          uVar8 = 0;
        }
        if (uVar10 == uVar8) {
          FUN_14692bf16(param_1,(int)*puVar11);
          break;
        }
        iVar6 = (int)puVar9[2];
        puVar11 = puVar9 + 2;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014692ac93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
  }
  return;
}


