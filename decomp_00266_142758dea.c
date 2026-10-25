// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142758dea FUN_142758dea body=666 status=ok
// SIG undefined FUN_142758dea(void)

undefined8 * FUN_142758dea(undefined8 param_1,wchar_t *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = wcscmp(L"LogFile",param_2);
  if (iVar2 == 0) {
    puVar5 = DAT_14c842618;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c842620) &&
       (FUN_144b3d300(&DAT_14c842620), puVar5 = DAT_14c842618, DAT_14c842620 == -1)) {
      DAT_14c842618 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *DAT_14c842618 = &PTR_FUN_149e15f70;
      DAT_14c842618[1] = 0;
      atexit((_func_5014 *)&LAB_142759085);
      _Init_thread_footer(&DAT_14c842620);
      puVar5 = DAT_14c842618;
    }
  }
  else {
    iVar3 = wcscmp(L"CachedReadFile",param_2);
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110);
    if (iVar3 == 0) {
      puVar5 = DAT_14c842628;
      if ((iVar2 < DAT_14c842630) &&
         (FUN_144b3d300(&DAT_14c842630), puVar5 = DAT_14c842628, DAT_14c842630 == -1)) {
        DAT_14c842628 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *DAT_14c842628 = &PTR_FUN_149e16570;
        DAT_14c842628[1] = 0;
        atexit((_func_5014 *)&LAB_1427590a0);
        _Init_thread_footer(&DAT_14c842630);
        puVar5 = DAT_14c842628;
      }
    }
    else {
      if ((iVar2 < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      cVar1 = FUN_1457f751e(&DAT_14c874628,param_2,0);
      puVar5 = (undefined8 *)0x0;
      if (cVar1 != '\0') {
        FUN_1446f470e(&local_28,param_2,1);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_28,local_1c,0);
        puVar5 = (undefined8 *)0x0;
        if (plVar4 != (longlong *)0x0) {
          puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x40))(plVar4);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 1427590bc FUN_1427590bc body=919 status=ok
// SIG undefined FUN_1427590bc(void)

void FUN_1427590bc(longlong param_1)

{
  ulonglong uVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_59;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 1.0;
  local_50 = 25.0;
  local_58 = 0.0;
  local_59 = 0;
  uVar15 = 0;
  if (DAT_14c872ce0 == 0) {
    uVar8 = 0x3ff0000000000000;
    dVar17 = 25.0;
    dVar16 = 0.0;
  }
  else {
    local_68 = &DAT_14c872ce8;
    FUN_14612afb8(DAT_14c872ce0,L"Core.System",L"StuckDuration",&local_48);
    local_68 = &DAT_14c872ce8;
    FUN_14612afb8(DAT_14c872ce0,L"Core.System",L"HangDuration",&local_50);
    local_68 = &DAT_14c872ce8;
    FUN_14612afb8(DAT_14c872ce0,L"Core.System",L"PresentHangDuration",&local_58);
    local_68 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"Core.System",L"HangsAreFatal",&local_59);
    dVar17 = 1.0;
    if (1.0 <= local_48) {
      dVar17 = local_48;
    }
    uVar8 = ~-(ulonglong)(0.0 < local_48) & (ulonglong)local_48 |
            (ulonglong)dVar17 & -(ulonglong)(0.0 < local_48);
    dVar17 = 5.0;
    if (5.0 <= local_50) {
      dVar17 = local_50;
    }
    dVar17 = (double)(~-(ulonglong)(0.0 < local_50) & (ulonglong)local_50 |
                     (ulonglong)dVar17 & -(ulonglong)(0.0 < local_50));
    dVar16 = 5.0;
    if (5.0 <= local_58) {
      dVar16 = local_58;
    }
    dVar16 = (double)(~-(ulonglong)(0.0 < local_58) & (ulonglong)local_58 |
                     (ulonglong)dVar16 & -(ulonglong)(0.0 < local_58));
  }
  *(ulonglong *)(param_1 + 0x1e0) = uVar8;
  *(ulonglong *)(param_1 + 0x1e8) = uVar8;
  *(double *)(param_1 + 0x1c0) = dVar17;
  *(double *)(param_1 + 0x1d0) = dVar16;
  *(double *)(param_1 + 0x1c8) = dVar17 * *(double *)(param_1 + 0x1f0);
  dVar16 = dVar16 * *(double *)(param_1 + 0x1f0);
  *(double *)(param_1 + 0x1d8) = dVar16;
  *(undefined1 *)(param_1 + 0x204) = local_59;
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 == 0) {
    uVar8 = 1;
    iVar4 = 0;
    iVar11 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x50);
    }
    uVar10 = *puVar7;
    if (uVar10 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar15;
      }
      iVar4 = 0;
      do {
        if (uVar8 == uVar15) goto LAB_14275930a;
        iVar4 = iVar4 + 0x20;
        uVar10 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar15 = 0;
      iVar4 = 0;
    }
    uVar8 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar8 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar11 = (iVar4 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar11) {
      iVar11 = iVar3;
    }
  }
  if (iVar11 != iVar3) {
    uVar10 = 0xffffffff;
    iVar9 = iVar3;
    do {
      dVar17 = *(double *)(param_1 + 0x1c8);
      pdVar2 = (double *)(*(longlong *)(param_1 + 0x40) + 0x20 + (longlong)iVar11 * 0x48);
      if (*pdVar2 <= dVar17 && dVar17 != *pdVar2) {
        *(double *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar11 * 0x48 + 0x20) = dVar17;
        iVar9 = *(int *)(param_1 + 0x68);
      }
      uVar10 = uVar10 & ~(uint)uVar8;
      puVar7 = *(uint **)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x50);
      }
      iVar11 = (int)uVar15;
      lVar5 = (longlong)iVar11;
      uVar12 = puVar7[lVar5] & uVar10;
      if (uVar12 == 0) {
        iVar13 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar13 = iVar9 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar4 = iVar4 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar11) {
          iVar14 = iVar11;
        }
        if (iVar11 < iVar13) {
          lVar6 = 0;
          do {
            uVar12 = puVar7[lVar5 + lVar6 + 1];
            if (uVar12 != 0) {
              uVar15 = (ulonglong)(iVar11 + (int)lVar6 + 1);
              uVar10 = 0xffffffff;
              goto LAB_1427592c0;
            }
            iVar4 = iVar4 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar14 - lVar5 != lVar6);
          uVar10 = 0xffffffff;
          iVar11 = iVar14;
        }
        uVar15 = (ulonglong)(iVar11 + 1);
        iVar11 = iVar9;
      }
      else {
LAB_1427592c0:
        uVar8 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar8 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar11 = (iVar4 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar11) {
          iVar11 = iVar9;
        }
      }
    } while (iVar11 != iVar3);
    dVar16 = *(double *)(param_1 + 0x1d8);
  }
LAB_14275930a:
  if (*(double *)(param_1 + 0xa8) <= dVar16 && dVar16 != *(double *)(param_1 + 0xa8)) {
    *(double *)(param_1 + 0xa8) = dVar16;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142759454 FUN_142759454 body=54 status=ok
// SIG undefined FUN_142759454(void)

void FUN_142759454(void)

{
  DAT_14c8426d8 = 0;
  if (DAT_14c8426e0 != (longlong *)0x0) {
    (**(code **)(*DAT_14c8426e0 + 0x28))(DAT_14c8426e0,1);
  }
  DAT_14c8426e0 = (longlong *)0x0;
  return;
}



// FUNCTION 14275948a FUN_14275948a body=1832 status=ok
// SIG undefined FUN_14275948a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14275948a(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  void *_Src;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_1428 [32];
  undefined2 *local_1408;
  undefined1 *local_1400;
  ulonglong local_13f0;
  undefined1 local_13e8 [4];
  undefined1 local_13e4 [4];
  longlong *local_13e0 [2];
  undefined1 local_13d0 [4];
  undefined1 local_13cc [4];
  longlong *local_13c8 [2];
  undefined2 *local_13b8;
  int local_13b0;
  undefined2 *local_13a8;
  undefined8 uStack_13a0;
  longlong local_1398;
  undefined8 uStack_1390;
  undefined2 *local_1388;
  int local_1380;
  undefined4 local_137c;
  undefined8 local_f88 [101];
  wchar_t *local_c60;
  undefined8 local_c58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1428;
  uVar5 = FUN_146830cd4(param_2,local_f88,100,0);
  uVar10 = (ulonglong)uVar5;
  iVar6 = (*(code *)PTR_FUN_14c75b148)(local_f88,uVar5 * 8,0);
  if ((iVar6 == *(int *)(param_1 + 0x1f8)) && (*(int *)(param_1 + 0x1fc) == param_2))
  goto LAB_1427594fa;
  *(int *)(param_1 + 0x1f8) = iVar6;
  *(int *)(param_1 + 0x1fc) = param_2;
  local_1398 = 0;
  uStack_1390 = 0;
  local_13f0 = uVar10;
  if (0 < (int)uVar5) {
    uVar11 = 0;
    do {
      local_1388 = (undefined2 *)((ulonglong)local_1388 & 0xffffffffffffff00);
      uVar2 = local_f88[uVar11];
      memset(&local_c60,0,0xc18);
      FUN_146830fc4(uVar2,&local_c60);
      FUN_1467b7f14(&local_c60,&local_1388,0x400);
      FUN_1400b22c2(&local_c60);
      lVar13 = (longlong)(int)uStack_1390;
      uVar5 = (int)uStack_1390 + 1;
      uStack_1390 = CONCAT44(uStack_1390._4_4_,uVar5);
      if (uStack_1390._4_4_ < uVar5) {
        FUN_1447a1bd6(&local_1398);
      }
      lVar13 = lVar13 * 0x10;
      *(undefined8 *)(local_1398 + lVar13) = 0;
      *(wchar_t **)(local_1398 + lVar13) = local_c60;
      local_c60 = (wchar_t *)0x0;
      *(undefined4 *)(local_1398 + 8 + lVar13) = (undefined4)local_c58;
      *(undefined4 *)(local_1398 + 0xc + lVar13) = local_c58._4_4_;
      local_c58 = 0;
      FUN_14275d8c2(&local_c60);
      uVar11 = uVar11 + 1;
    } while (uVar10 != uVar11);
  }
  puVar7 = (undefined8 *)FUN_140270d20(param_2);
  local_1388 = (undefined2 *)0x0;
  local_1380 = *(int *)(puVar7 + 1);
  lVar13 = (longlong)local_1380;
  _Src = (void *)*puVar7;
  if (lVar13 == 0) {
    local_137c = 0;
LAB_142759694:
    FUN_140002266(&local_c60,L"unknown thread (%u)",param_2);
    FUN_14275d91a(&local_1388,&local_c60);
    FUN_14275d8c2(&local_c60);
  }
  else {
    FUN_1446dd670(&local_1388,local_1380,0);
    memcpy(local_1388,_Src,lVar13 * 2);
    if (local_1380 < 2) goto LAB_142759694;
  }
  local_13a8 = (undefined2 *)0x0;
  uStack_13a0 = 0;
  local_1408 = &DAT_149dfb77a;
  if (0 < (int)uStack_1390) {
    lVar13 = 8;
    lVar14 = 0;
    do {
      if (0x800001ff < (int)uStack_13a0 + 0x7fffffffU) goto LAB_14275977c;
      FUN_1400020e8(&local_13a8,&DAT_149e16f6c,2);
      iVar6 = *(int *)(local_1398 + lVar13) + -1;
      if (*(int *)(local_1398 + lVar13) == 0) {
        iVar6 = 0;
      }
      FUN_1400020e8(&local_13a8,*(undefined8 *)(local_1398 + -8 + lVar13),iVar6);
      FUN_1400020e8(&local_13a8,&DAT_149e02010,2);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x10;
    } while (lVar14 < (int)uStack_1390);
LAB_14275977c:
    local_1408 = local_13a8;
    if ((int)uStack_13a0 == 0) {
      local_1408 = &DAT_149dfb77a;
    }
  }
  puVar12 = &DAT_149dfb77a;
  if (local_1380 != 0) {
    puVar12 = local_1388;
  }
  local_1400 = &DAT_149e02010;
  FUN_140002266(&local_13b8,L"Hang detected on %s:%s%s%sCheck log for full callstack.",puVar12);
  cVar1 = *(char *)(param_1 + 0x204);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  if (cVar1 == '\0') {
    FUN_1400e4168(&DAT_14c872ee0,1);
  }
  else {
    FUN_146816410();
  }
  if (local_13b0 == 0) {
    local_13b8 = &DAT_149dfb77a;
  }
  FUN_14682eb49(local_13b8,local_f88,local_13f0,param_2);
  if (*(char *)(param_1 + 0x204) == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar4 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 == '\x01') {
        bVar4 = DAT_14c8442b8 & 1;
        goto joined_r0x00014275988f;
      }
    }
    else {
joined_r0x00014275988f:
      if (bVar4 == 0) {
        local_c60 = L"ReportHangError_Title";
        local_c58._0_4_ = 0x15;
        FUN_1446e940c(local_13cc,&local_c60);
        local_c60 = L"MessageDialog";
        local_c58._0_4_ = 0xd;
        FUN_1446e940c(local_13d0,&local_c60);
        local_c60 = L"Application Hang Detected";
        local_c58 = CONCAT44(local_c58._4_4_,0x19);
        FUN_140208c1e(local_13c8,local_13d0,local_13cc,&local_c60);
        plVar8 = local_13c8[0];
        if (*(code **)(*local_13c8[0] + 0x50) != FUN_144828418) {
          plVar8 = (longlong *)(**(code **)(*local_13c8[0] + 0x50))();
        }
        FUN_1447a1fc0(plVar8);
        pcVar3 = *(code **)(*local_13c8[0] + 0x28);
        if (pcVar3 == FUN_14482841c) {
          plVar8 = local_13c8[0] + 3;
          if (local_13c8[0][5] != 0) {
            plVar8 = (longlong *)(local_13c8[0][5] + 8);
          }
        }
        else if (pcVar3 == (code *)&LAB_14010c34c) {
          plVar8 = local_13c8[0] + 2;
        }
        else {
          plVar8 = (longlong *)(*pcVar3)(local_13c8[0]);
        }
        if ((int)plVar8[1] == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        else {
          puVar12 = (undefined2 *)*plVar8;
        }
        local_c60 = L"ReportHangError_Body";
        local_c58._0_4_ = 0x14;
        FUN_1446e940c(local_13e4,&local_c60);
        local_c60 = L"MessageDialog";
        local_c58._0_4_ = 0xd;
        FUN_1446e940c(local_13e8,&local_c60);
        local_c60 = 
        L"The application has hung and will now close. We apologize for the inconvenience.";
        local_c58 = CONCAT44(local_c58._4_4_,0x50);
        FUN_140208c1e(local_13e0,local_13e8,local_13e4,&local_c60);
        plVar8 = local_13e0[0];
        if (*(code **)(*local_13e0[0] + 0x50) != FUN_144828418) {
          plVar8 = (longlong *)(**(code **)(*local_13e0[0] + 0x50))();
        }
        FUN_1447a1fc0(plVar8);
        pcVar3 = *(code **)(*local_13e0[0] + 0x28);
        if (pcVar3 == FUN_14482841c) {
          plVar8 = local_13e0[0] + 3;
          if (local_13e0[0][5] != 0) {
            plVar8 = (longlong *)(local_13e0[0][5] + 8);
          }
        }
        else if (pcVar3 == (code *)&LAB_14010c34c) {
          plVar8 = local_13e0[0] + 2;
        }
        else {
          plVar8 = (longlong *)(*pcVar3)(local_13e0[0]);
        }
        if ((int)plVar8[1] == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        else {
          puVar9 = (undefined2 *)*plVar8;
        }
        FUN_14682f732(0,puVar9,puVar12);
        if (local_13e0[0] != (longlong *)0x0) {
          (**(code **)(*local_13e0[0] + 0x10))();
        }
        if (local_13c8[0] != (longlong *)0x0) {
          (**(code **)(*local_13c8[0] + 0x10))();
        }
      }
    }
    FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
  }
  FUN_14275d8c2(&local_13b8);
  FUN_14275d8c2(&local_13a8);
  FUN_14275d8c2(&local_1388);
  FUN_14153d890(&local_1398);
LAB_1427594fa:
  if ((local_48 ^ (ulonglong)auStack_1428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142759bb4 FUN_142759bb4 body=2920 status=ok
// SIG undefined FUN_142759bb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142759bb4(longlong param_1)

{
  ulonglong uVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  DWORD DVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auStack_128 [44];
  uint local_fc;
  LPCRITICAL_SECTION local_f8;
  LPCRITICAL_SECTION local_f0;
  LPCRITICAL_SECTION local_e8;
  uint *local_e0;
  uint *local_d8;
  longlong local_d0;
  LARGE_INTEGER local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0x10) != 0) {
LAB_142759c1e:
    if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_f8 = (LPCRITICAL_SECTION)(param_1 + 0x18);
  local_d0 = param_1 + 0x78;
  local_e8 = (LPCRITICAL_SECTION)(param_1 + 200);
  local_d8 = (uint *)(param_1 + 0x100);
  local_f0 = (LPCRITICAL_SECTION)(param_1 + 0x140);
  local_e0 = (uint *)(param_1 + 0x178);
  bVar5 = false;
LAB_142759cfc:
  if (DAT_14c872bd8 == '\0') {
    cVar7 = FUN_14275a998(param_1);
    bVar6 = bVar5;
    if (cVar7 == '\0') {
LAB_14275a0c5:
      cVar7 = FUN_14275a998(param_1);
      if (cVar7 != '\0') {
        QueryPerformanceCounter(&local_c8);
        dVar31 = DAT_14c83f418;
        uVar10 = local_c8.QuadPart - *(longlong *)(param_1 + 0x218);
        if (*(ulonglong *)(param_1 + 0x220) <= uVar10) {
          uVar10 = *(ulonglong *)(param_1 + 0x220);
        }
        uVar15 = (ulonglong)(1.0 / DAT_14c83f418);
        uVar15 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar15 >> 0x3f
                 | uVar15;
        uVar10 = uVar10 + *(longlong *)(param_1 + 0x210);
        uVar11 = uVar10 / uVar15;
        uVar10 = uVar10 % uVar15;
        EnterCriticalSection(local_e8);
        if (0.0 < *(double *)(param_1 + 0x1c0)) {
          iVar3 = *(int *)(param_1 + 0x118);
          if (iVar3 == 0) {
            uVar22 = 1;
            uVar15 = 0;
            iVar18 = 0;
            iVar8 = 0;
          }
          else {
            puVar12 = *(uint **)(param_1 + 0x110);
            if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
              puVar12 = local_d8;
            }
            uVar23 = *puVar12;
            if (uVar23 == 0) {
              iVar8 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar8 = iVar3 + -1;
              }
              uVar15 = 0;
              uVar22 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar22 = uVar15;
              }
              iVar18 = 0;
              do {
                if (uVar22 == uVar15) goto LAB_14275a2fb;
                iVar18 = iVar18 + 0x20;
                uVar23 = puVar12[uVar15 + 1];
                uVar15 = uVar15 + 1;
              } while (uVar23 == 0);
            }
            else {
              uVar15 = 0;
              iVar18 = 0;
            }
            uVar22 = (ulonglong)(-uVar23 & uVar23);
            uVar1 = uVar22 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar8 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar8) {
              iVar8 = iVar3;
            }
          }
          if (iVar8 != iVar3) {
            auVar29._8_4_ = (int)(uVar11 >> 0x20);
            auVar29._0_8_ = uVar11;
            auVar29._12_4_ = 0x45300000;
            auVar26._8_4_ = (int)(uVar10 >> 0x20);
            auVar26._0_8_ = uVar10;
            auVar26._12_4_ = 0x45300000;
            dVar31 = (((double)CONCAT44(0x43300000,(int)uVar10) - 4503599627370496.0) +
                     (auVar26._8_8_ - 1.9342813113834067e+25)) * dVar31 +
                     ((double)CONCAT44(0x43300000,(int)uVar11) - 4503599627370496.0) +
                     (auVar29._8_8_ - 1.9342813113834067e+25);
            iVar20 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar20 = iVar3 + -1;
            }
            iVar20 = iVar20 >> 5;
            uVar23 = 0xffffffff;
            do {
              if (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x18 + (longlong)iVar8 * 0x48) == 0) {
                puVar12 = (uint *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar8 * 0x48);
                dVar25 = dVar31 - *(double *)(puVar12 + 2);
                if ((*(double *)(puVar12 + 8) <= dVar25 && dVar25 != *(double *)(puVar12 + 8)) &&
                   (*(double *)(puVar12 + 4) <= *(double *)(puVar12 + 2))) {
                  *(double *)(puVar12 + 4) = dVar31;
                  uVar23 = *puVar12;
                  LeaveCriticalSection(local_e8);
                  if (uVar23 != 0xffffffff) goto LAB_14275a64e;
                  goto LAB_14275a30b;
                }
              }
              uVar23 = uVar23 & ~(uint)uVar22;
              puVar12 = *(uint **)(param_1 + 0x110);
              if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
                puVar12 = local_d8;
              }
              iVar8 = (int)uVar15;
              lVar21 = (longlong)iVar8;
              uVar17 = puVar12[lVar21] & uVar23;
              if (uVar17 == 0) {
                iVar13 = iVar20;
                if (iVar20 < iVar8) {
                  iVar13 = iVar8;
                }
                if (iVar20 <= iVar8) break;
                lVar19 = 0;
                while( true ) {
                  iVar18 = iVar18 + 0x20;
                  uVar17 = puVar12[lVar21 + lVar19 + 1];
                  if (uVar17 != 0) break;
                  lVar19 = lVar19 + 1;
                  if (iVar13 - lVar21 == lVar19) goto LAB_14275a2fb;
                }
                uVar15 = (ulonglong)(iVar8 + (int)lVar19 + 1);
                uVar23 = 0xffffffff;
              }
              uVar22 = (ulonglong)(-uVar17 & uVar17);
              uVar10 = uVar22 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar10 != 0) {
                for (; uVar10 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar8 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            } while (iVar8 < iVar3);
          }
        }
LAB_14275a2fb:
        LeaveCriticalSection(local_e8);
      }
LAB_14275a30b:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c842700) && (FUN_144b3d300(&DAT_14c842700), DAT_14c842700 == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14c8426fc = FUN_14054d46e(&DAT_14c846b20,L"nocheckpointhangdetector");
        _Init_thread_footer(&DAT_14c842700);
      }
      cVar7 = FUN_14275a998(param_1);
      bVar6 = false;
      if ((cVar7 != '\0') && ((DAT_14c8426fc & 1) == 0)) {
        QueryPerformanceCounter(&local_c8);
        dVar31 = DAT_14c83f418;
        uVar10 = local_c8.QuadPart - *(longlong *)(param_1 + 0x218);
        if (*(ulonglong *)(param_1 + 0x220) <= uVar10) {
          uVar10 = *(ulonglong *)(param_1 + 0x220);
        }
        uVar15 = (ulonglong)(1.0 / DAT_14c83f418);
        uVar15 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar15 >> 0x3f
                 | uVar15;
        uVar10 = uVar10 + *(longlong *)(param_1 + 0x210);
        uVar11 = uVar10 / uVar15;
        uVar10 = uVar10 % uVar15;
        EnterCriticalSection(local_f0);
        if (0.0 < *(double *)(param_1 + 0x1c0)) {
          iVar3 = *(int *)(param_1 + 400);
          if (iVar3 == 0) {
            uVar22 = 1;
            uVar15 = 0;
            iVar18 = 0;
            iVar8 = 0;
          }
          else {
            puVar12 = *(uint **)(param_1 + 0x188);
            if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
              puVar12 = local_e0;
            }
            uVar23 = *puVar12;
            if (uVar23 == 0) {
              iVar8 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar8 = iVar3 + -1;
              }
              uVar15 = 0;
              uVar22 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar22 = uVar15;
              }
              iVar18 = 0;
              do {
                if (uVar22 == uVar15) goto LAB_14275a580;
                iVar18 = iVar18 + 0x20;
                uVar23 = puVar12[uVar15 + 1];
                uVar15 = uVar15 + 1;
              } while (uVar23 == 0);
            }
            else {
              uVar15 = 0;
              iVar18 = 0;
            }
            uVar22 = (ulonglong)(-uVar23 & uVar23);
            uVar1 = uVar22 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar8 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar8) {
              iVar8 = iVar3;
            }
          }
          if (iVar8 != iVar3) {
            auVar30._8_4_ = (int)(uVar11 >> 0x20);
            auVar30._0_8_ = uVar11;
            auVar30._12_4_ = 0x45300000;
            auVar27._8_4_ = (int)(uVar10 >> 0x20);
            auVar27._0_8_ = uVar10;
            auVar27._12_4_ = 0x45300000;
            dVar31 = (((double)CONCAT44(0x43300000,(int)uVar10) - 4503599627370496.0) +
                     (auVar27._8_8_ - 1.9342813113834067e+25)) * dVar31 +
                     ((double)CONCAT44(0x43300000,(int)uVar11) - 4503599627370496.0) +
                     (auVar30._8_8_ - 1.9342813113834067e+25);
            iVar20 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar20 = iVar3 + -1;
            }
            iVar20 = iVar20 >> 5;
            uVar23 = 0xffffffff;
            do {
              if (*(int *)(*(longlong *)(param_1 + 0x168) + 0x18 + (longlong)iVar8 * 0x48) == 0) {
                lVar21 = *(longlong *)(param_1 + 0x168) + (longlong)iVar8 * 0x48;
                if (((*(double *)(lVar21 + 0x20) < dVar31 - *(double *)(lVar21 + 8)) &&
                    (0.0 < *(double *)(lVar21 + 0x20))) &&
                   (*(double *)(lVar21 + 0x10) <= *(double *)(lVar21 + 8))) {
                  *(double *)(lVar21 + 0x10) = dVar31;
                  DVar9 = GetCurrentThreadId();
                  *(DWORD *)(param_1 + 0x1fc) = DVar9;
                  _DAT_00000003 = 0xe0000001;
                  LeaveCriticalSection(local_f0);
                  bVar6 = bVar5;
                  if (bVar5) goto LAB_14275a592;
                  uVar23 = 0;
                  goto LAB_14275a6a1;
                }
              }
              uVar23 = uVar23 & ~(uint)uVar22;
              puVar12 = *(uint **)(param_1 + 0x188);
              if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
                puVar12 = local_e0;
              }
              iVar8 = (int)uVar15;
              lVar21 = (longlong)iVar8;
              uVar17 = puVar12[lVar21] & uVar23;
              if (uVar17 == 0) {
                iVar13 = iVar20;
                if (iVar20 < iVar8) {
                  iVar13 = iVar8;
                }
                if (iVar20 <= iVar8) break;
                lVar19 = 0;
                while( true ) {
                  iVar18 = iVar18 + 0x20;
                  uVar17 = puVar12[lVar21 + lVar19 + 1];
                  if (uVar17 != 0) break;
                  lVar19 = lVar19 + 1;
                  if (iVar13 - lVar21 == lVar19) goto LAB_14275a580;
                }
                uVar15 = (ulonglong)(iVar8 + (int)lVar19 + 1);
                uVar23 = 0xffffffff;
              }
              uVar22 = (ulonglong)(-uVar17 & uVar17);
              uVar10 = uVar22 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar10 != 0) {
                for (; uVar10 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar8 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            } while (iVar8 < iVar3);
          }
        }
LAB_14275a580:
        LeaveCriticalSection(local_f0);
        bVar6 = false;
      }
    }
    else {
      QueryPerformanceCounter(&local_c8);
      uVar10 = local_c8.QuadPart - *(longlong *)(param_1 + 0x218);
      if (*(ulonglong *)(param_1 + 0x220) <= uVar10) {
        uVar10 = *(ulonglong *)(param_1 + 0x220);
      }
      uVar15 = (ulonglong)(1.0 / DAT_14c83f418);
      uVar15 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar15 >> 0x3f |
               uVar15;
      uVar10 = uVar10 + *(longlong *)(param_1 + 0x210);
      uVar11 = uVar10 / uVar15;
      uVar10 = uVar10 % uVar15;
      auVar28._8_4_ = (int)(uVar11 >> 0x20);
      auVar28._0_8_ = uVar11;
      auVar28._12_4_ = 0x45300000;
      auVar32._8_4_ = (int)(uVar10 >> 0x20);
      auVar32._0_8_ = uVar10;
      auVar32._12_4_ = 0x45300000;
      dVar31 = (((double)CONCAT44(0x43300000,(int)uVar10) - 4503599627370496.0) +
               (auVar32._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 +
               ((double)CONCAT44(0x43300000,(int)uVar11) - 4503599627370496.0) +
               (auVar28._8_8_ - 1.9342813113834067e+25);
      EnterCriticalSection(local_f8);
      if (0.0 < *(double *)(param_1 + 0x1c0)) {
        iVar3 = *(int *)(param_1 + 0x68);
        if (iVar3 == 0) {
          uVar11 = 1;
          uVar10 = 0;
          iVar18 = 0;
          iVar8 = 0;
        }
        else {
          puVar12 = *(uint **)(param_1 + 0x60);
          if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
            puVar12 = (uint *)(param_1 + 0x50);
          }
          uVar23 = *puVar12;
          if (uVar23 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            uVar10 = 0;
            uVar11 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar11 = uVar10;
            }
            iVar18 = 0;
            do {
              if (uVar11 == uVar10) goto LAB_14275a062;
              iVar18 = iVar18 + 0x20;
              uVar23 = puVar12[uVar10 + 1];
              uVar10 = uVar10 + 1;
            } while (uVar23 == 0);
          }
          else {
            uVar10 = 0;
            iVar18 = 0;
          }
          uVar11 = (ulonglong)(-uVar23 & uVar23);
          uVar15 = uVar11 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar8 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
        if (iVar8 != iVar3) {
          dVar25 = 0.0;
          local_fc = 0xffffffff;
          uVar23 = 0xffffffff;
          do {
            puVar12 = (uint *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar8 * 0x48);
            if (puVar12[6] == 0) {
              dVar2 = *(double *)(puVar12 + 2);
              dVar24 = dVar31 - dVar2;
              if ((*(double *)(puVar12 + 8) <= dVar24 && dVar24 != *(double *)(puVar12 + 8)) &&
                 (*(double *)(puVar12 + 4) <= dVar2)) {
                *(double *)(puVar12 + 4) = dVar31;
                uVar23 = *puVar12;
                LeaveCriticalSection(local_f8);
                if (uVar23 == 0xffffffff) goto LAB_14275a0c5;
                goto LAB_14275a64e;
              }
              if (*(double *)(puVar12 + 10) <= dVar2) {
                if (dVar24 < *(double *)(puVar12 + 0xc) || dVar24 == *(double *)(puVar12 + 0xc))
                goto LAB_142759e78;
                if ((*(int *)(param_1 + 0x200) == -1) || (dVar25 < dVar24)) {
                  local_fc = *puVar12;
                  dVar25 = dVar24;
                }
              }
            }
            else {
LAB_142759e78:
              if (*puVar12 == *(uint *)(param_1 + 0x200)) {
                if ((*(int *)(param_1 + 0x240) != 0) &&
                   (*(longlong **)(param_1 + 0x238) != (longlong *)0x0)) {
                  (**(code **)(**(longlong **)(param_1 + 0x238) + 0x60))();
                }
                *(undefined4 *)(param_1 + 0x200) = 0xffffffff;
              }
            }
            uVar17 = local_fc;
            uVar23 = uVar23 & ~(uint)uVar11;
            puVar12 = *(uint **)(param_1 + 0x60);
            if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
              puVar12 = (uint *)(param_1 + 0x50);
            }
            iVar20 = *(int *)(param_1 + 0x68);
            iVar8 = (int)uVar10;
            lVar21 = (longlong)iVar8;
            uVar16 = puVar12[lVar21] & uVar23;
            if (uVar16 == 0) {
              iVar13 = iVar20 + 0x1e;
              if (-1 < iVar20 + -1) {
                iVar13 = iVar20 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar18 = iVar18 + 0x20;
              iVar14 = iVar13;
              if (iVar13 < iVar8) {
                iVar14 = iVar8;
              }
              if (iVar8 < iVar13) {
                lVar19 = 0;
                do {
                  uVar16 = puVar12[lVar21 + lVar19 + 1];
                  if (uVar16 != 0) {
                    uVar10 = (ulonglong)(iVar8 + (int)lVar19 + 1);
                    uVar23 = 0xffffffff;
                    goto LAB_142759f4d;
                  }
                  iVar18 = iVar18 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar14 - lVar21 != lVar19);
                uVar23 = 0xffffffff;
                lVar21 = (longlong)iVar14;
              }
              uVar10 = lVar21 + 1U & 0xffffffff;
              iVar8 = iVar20;
            }
            else {
LAB_142759f4d:
              uVar11 = (ulonglong)(-uVar16 & uVar16);
              uVar15 = uVar11 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar8 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
              if (iVar20 <= iVar8) {
                iVar8 = iVar20;
              }
            }
          } while (iVar8 != iVar3);
          if (local_fc != 0xffffffff) {
            if (((*(uint *)(param_1 + 0x200) != local_fc) && (*(int *)(param_1 + 0x240) != 0)) &&
               (*(longlong **)(param_1 + 0x238) != (longlong *)0x0)) {
              (**(code **)(**(longlong **)(param_1 + 0x238) + 0x60))();
            }
            *(uint *)(param_1 + 0x200) = uVar17;
            if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
              lVar21 = *(longlong *)(param_1 + 0x80);
              if (*(longlong *)(param_1 + 0x80) == 0) {
                lVar21 = local_d0;
              }
              uVar23 = *(uint *)(lVar21 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar17) * 4);
              if (uVar23 != 0xffffffff) {
                do {
                  puVar12 = (uint *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)uVar23 * 0x48);
                  if (*puVar12 == uVar17) goto LAB_14275a03b;
                  uVar23 = puVar12[0x10];
                } while (uVar23 != 0xffffffff);
              }
            }
            puVar12 = (uint *)0x0;
LAB_14275a03b:
            *(double *)(puVar12 + 10) = dVar31;
            if ((*(int *)(param_1 + 0x230) != 0) &&
               (plVar4 = *(longlong **)(param_1 + 0x228), plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 0x60))(plVar4,*(undefined4 *)(param_1 + 0x200));
            }
          }
        }
      }
LAB_14275a062:
      if (((*(double *)(param_1 + 0x1d0) <= 0.0) || (*(int *)(param_1 + 0xa0) != 0)) ||
         (dVar25 = dVar31 - *(double *)(param_1 + 0x90),
         dVar25 < *(double *)(param_1 + 0xa8) || dVar25 == *(double *)(param_1 + 0xa8))) {
        LeaveCriticalSection(local_f8);
        goto LAB_14275a0c5;
      }
      *(double *)(param_1 + 0x90) = dVar31;
      LeaveCriticalSection(local_f8);
      if (!bVar5) {
        bVar6 = true;
      }
    }
    goto LAB_14275a592;
  }
  goto LAB_142759c1e;
LAB_14275a64e:
  if ((!bVar5) && (bVar6 = true, uVar23 != 0xfffffffe)) {
LAB_14275a6a1:
    FUN_14275948a(param_1,uVar23);
    bVar6 = true;
  }
LAB_14275a592:
  bVar5 = bVar6;
  if ((*(int *)(param_1 + 0x10) == 0) && (DAT_14c872bd8 == '\0')) {
    Sleep(500);
  }
  QueryPerformanceCounter(&local_c8);
  uVar10 = local_c8.QuadPart - *(longlong *)(param_1 + 0x218);
  if (*(ulonglong *)(param_1 + 0x220) <= uVar10) {
    uVar10 = *(ulonglong *)(param_1 + 0x220);
  }
  *(longlong *)(param_1 + 0x210) = *(longlong *)(param_1 + 0x210) + uVar10;
  ((LARGE_INTEGER *)(param_1 + 0x218))->QuadPart = (LONGLONG)local_c8;
  if (*(int *)(param_1 + 0x10) != 0) goto LAB_142759c1e;
  goto LAB_142759cfc;
}



// FUNCTION 14275a71e FUN_14275a71e body=349 status=ok
// SIG undefined FUN_14275a71e(void)

void FUN_14275a71e(longlong param_1,char param_2)

{
  char cVar1;
  DWORD DVar2;
  double *pdVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_68 [44];
  DWORD local_3c;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_146268e78();
  if (cVar1 != '\0') {
    DVar2 = GetCurrentThreadId();
    local_3c = DVar2;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (((param_2 != '\0') && (DVar2 == DAT_14c86a9f4)) && (DAT_14c872ce0 != 0)) {
      FUN_1427590bc(param_1);
    }
    pdVar3 = (double *)FUN_14275dd34(param_1 + 0x40,DVar2,&local_3c);
    QueryPerformanceCounter(&local_38);
    uVar4 = local_38.QuadPart - *(longlong *)(param_1 + 0x218);
    if (*(ulonglong *)(param_1 + 0x220) <= uVar4) {
      uVar4 = *(ulonglong *)(param_1 + 0x220);
    }
    uVar6 = (ulonglong)(1.0 / DAT_14c83f418);
    uVar6 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar6 >> 0x3f |
            uVar6;
    uVar4 = uVar4 + *(longlong *)(param_1 + 0x210);
    uVar5 = uVar4 / uVar6;
    uVar4 = uVar4 % uVar6;
    auVar7._8_4_ = (int)(uVar5 >> 0x20);
    auVar7._0_8_ = uVar5;
    auVar7._12_4_ = 0x45300000;
    auVar8._8_4_ = (int)(uVar4 >> 0x20);
    auVar8._0_8_ = uVar4;
    auVar8._12_4_ = 0x45300000;
    *pdVar3 = (((double)CONCAT44(0x43300000,(int)uVar4) - 4503599627370496.0) +
              (auVar8._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 +
              ((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
              (auVar7._8_8_ - 1.9342813113834067e+25);
    pdVar3[3] = *(double *)(param_1 + 0x1c8);
    pdVar3[5] = *(double *)(param_1 + 0x1e8);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275a87c FUN_14275a87c body=282 status=ok
// SIG undefined FUN_14275a87c(void)

void FUN_14275a87c(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  QueryPerformanceCounter(&local_28);
  uVar1 = local_28.QuadPart - *(longlong *)(param_1 + 0x218);
  if (*(ulonglong *)(param_1 + 0x220) <= uVar1) {
    uVar1 = *(ulonglong *)(param_1 + 0x220);
  }
  uVar3 = (ulonglong)(1.0 / DAT_14c83f418);
  uVar3 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar3 >> 0x3f | uVar3;
  uVar1 = uVar1 + *(longlong *)(param_1 + 0x210);
  uVar2 = uVar1 / uVar3;
  uVar1 = uVar1 % uVar3;
  auVar4._8_4_ = (int)(uVar2 >> 0x20);
  auVar4._0_8_ = uVar2;
  auVar4._12_4_ = 0x45300000;
  auVar5._8_4_ = (int)(uVar1 >> 0x20);
  auVar5._0_8_ = uVar1;
  auVar5._12_4_ = 0x45300000;
  *(double *)(param_1 + 0x90) =
       (((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
       (auVar5._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 +
       ((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
       (auVar4._8_8_ - 1.9342813113834067e+25);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x1d8);
  if (DAT_14c8426ec == '\0') {
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
    DAT_14c8426ec = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275a998 FUN_14275a998 body=383 status=ok
// SIG undefined FUN_14275a998(void)

undefined4 FUN_14275a998(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8426f0) {
    FUN_144b3d300(&DAT_14c8426f0);
    if (DAT_14c8426f0 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8426ed = FUN_14054d46e(&DAT_14c846b20,L"debughangdetection");
      _Init_thread_footer(&DAT_14c8426f0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8426f8) {
    FUN_144b3d300(&DAT_14c8426f8);
    if (DAT_14c8426f8 == -1) {
      if (DAT_14c8426ed == '\0') {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14c8426f4 = FUN_14054d46e(&DAT_14c846b20,L"nothreadtimeout");
      }
      else {
        DAT_14c8426f4 = '\0';
      }
      _Init_thread_footer(&DAT_14c8426f8);
    }
  }
  if ((((*(double *)(param_1 + 0x1c0) <= 0.0) && (*(double *)(param_1 + 0x1d0) <= 0.0)) ||
      (*(int *)(param_1 + 0x1b8) == 0)) || ((DAT_14c872bd8 != '\0' || (DAT_14c8426f4 != '\0')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x208) >> 8),*(int *)(param_1 + 0x208) == 0);
  }
  return uVar1;
}



// FUNCTION 14275ab18 FUN_14275ab18 body=605 status=ok
// SIG undefined FUN_14275ab18(void)

void FUN_14275ab18(longlong param_1,char param_2)

{
  DWORD *pDVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (param_2 == '\0') {
    DVar6 = GetCurrentThreadId();
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      lVar17 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar17 = *(longlong *)(param_1 + 0x80);
      }
      DVar7 = *(DWORD *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & DVar6) * 4);
      if (DVar7 != 0xffffffff) {
        do {
          pDVar1 = (DWORD *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)DVar7 * 0x48);
          if (*pDVar1 == DVar6) {
            if (((ulonglong)(pDVar1 + 2) & 0xfffffffffffffff7) != 0) {
              pDVar1[6] = pDVar1[6] + 1;
            }
            break;
          }
          DVar7 = pDVar1[0x10];
        } while (DVar7 != 0xffffffff);
      }
    }
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
    UNLOCK();
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (param_2 != '\0') {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
  *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
  iVar4 = *(int *)(param_1 + 400);
  if (iVar4 == 0) {
    uVar14 = 1;
    uVar12 = 0;
    iVar8 = 0;
    iVar15 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0x188);
    if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 0x178);
    }
    uVar16 = *puVar13;
    if (uVar16 == 0) {
      iVar15 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar15 = iVar4 + -1;
      }
      uVar12 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar12;
      }
      iVar8 = 0;
      do {
        if (uVar14 == uVar12) goto LAB_14275ac73;
        iVar8 = iVar8 + 0x20;
        uVar16 = puVar13[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar12 = 0;
      iVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar16 & uVar16);
    uVar2 = uVar14 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar15 = (iVar8 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar15) {
      iVar15 = iVar4;
    }
  }
  if (iVar15 != iVar4) {
    uVar16 = 0xffffffff;
    do {
      piVar3 = (int *)(*(longlong *)(param_1 + 0x168) + 0x18 + (longlong)iVar15 * 0x48);
      *piVar3 = *piVar3 + 1;
      uVar16 = ~(uint)uVar14 & uVar16;
      puVar13 = *(uint **)(param_1 + 0x188);
      if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0x178);
      }
      iVar5 = *(int *)(param_1 + 400);
      iVar15 = (int)uVar12;
      lVar17 = (longlong)iVar15;
      uVar11 = puVar13[lVar17] & uVar16;
      if (uVar11 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar15) {
          iVar10 = iVar15;
        }
        if (iVar15 < iVar9) {
          lVar18 = 0;
          do {
            uVar11 = puVar13[lVar17 + lVar18 + 1];
            if (uVar11 != 0) {
              uVar12 = (ulonglong)(iVar15 + (int)lVar18 + 1);
              uVar16 = 0xffffffff;
              goto LAB_14275ad23;
            }
            iVar8 = iVar8 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar10 - lVar17 != lVar18);
          uVar16 = 0xffffffff;
          iVar15 = iVar10;
        }
        uVar12 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar5;
      }
      else {
LAB_14275ad23:
        uVar14 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar14 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar15 = (iVar8 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar15) {
          iVar15 = iVar5;
        }
      }
    } while (iVar15 != iVar4);
  }
LAB_14275ac73:
                    /* WARNING: Could not recover jumptable at 0x00014275ac82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
  return;
}



// FUNCTION 14275ad76 FUN_14275ad76 body=2037 status=ok
// SIG undefined FUN_14275ad76(void)

void FUN_14275ad76(longlong param_1,char param_2)

{
  DWORD *pDVar1;
  int *piVar2;
  DWORD *pDVar3;
  int iVar4;
  bool bVar5;
  DWORD DVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  DWORD DVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  QueryPerformanceCounter(&local_98);
  uVar7 = local_98.QuadPart - *(longlong *)(param_1 + 0x218);
  if (*(ulonglong *)(param_1 + 0x220) <= uVar7) {
    uVar7 = *(ulonglong *)(param_1 + 0x220);
  }
  uVar9 = (ulonglong)(1.0 / DAT_14c83f418);
  uVar9 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar9 >> 0x3f | uVar9;
  uVar7 = uVar7 + *(longlong *)(param_1 + 0x210);
  uVar8 = uVar7 / uVar9;
  uVar7 = uVar7 % uVar9;
  auVar22._8_4_ = (int)(uVar8 >> 0x20);
  auVar22._0_8_ = uVar8;
  auVar22._12_4_ = 0x45300000;
  auVar28._8_4_ = (int)(uVar7 >> 0x20);
  auVar28._0_8_ = uVar7;
  auVar28._12_4_ = 0x45300000;
  dVar27 = (((double)CONCAT44(0x43300000,(int)uVar7) - 4503599627370496.0) +
           (auVar28._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 +
           ((double)CONCAT44(0x43300000,(int)uVar8) - 4503599627370496.0) +
           (auVar22._8_8_ - 1.9342813113834067e+25);
  if (param_2 == '\0') {
    DVar6 = GetCurrentThreadId();
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      lVar18 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar18 = *(longlong *)(param_1 + 0x80);
      }
      DVar12 = *(DWORD *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & DVar6) * 4);
      if (DVar12 != 0xffffffff) {
        do {
          pDVar3 = (DWORD *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)DVar12 * 0x48);
          if (*pDVar3 == DVar6) {
            if ((double *)(pDVar3 + 2) != (double *)0x0 && pDVar3 != (DWORD *)0x0) {
              pDVar1 = pDVar3 + 6;
              *pDVar1 = *pDVar1 - 1;
              if (*pDVar1 == 0) {
                *(double *)(pDVar3 + 2) = dVar27;
              }
            }
            break;
          }
          DVar12 = pDVar3[0x10];
        } while (DVar12 != 0xffffffff);
      }
    }
    bVar5 = false;
  }
  else {
    if (*(int *)(param_1 + 0x208) == 0) goto LAB_14275b320;
    piVar2 = (int *)(param_1 + 0x208);
    iVar11 = 0;
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    bVar5 = false;
    if (*piVar2 == 0) {
      iVar15 = *(int *)(param_1 + 0x68);
      if (iVar15 == 0) {
        uVar8 = 1;
        uVar7 = 0;
        iVar14 = 0;
      }
      else {
        puVar13 = *(uint **)(param_1 + 0x60);
        if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 0x50);
        }
        uVar17 = *puVar13;
        if (uVar17 == 0) {
          iVar11 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar11 = iVar15 + -1;
          }
          uVar7 = 0;
          uVar8 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar8 = uVar7;
          }
          iVar11 = 0;
          do {
            if (uVar8 == uVar7) {
              bVar5 = true;
              goto LAB_14275af90;
            }
            iVar11 = iVar11 + 0x20;
            uVar17 = puVar13[uVar7 + 1];
            uVar7 = uVar7 + 1;
          } while (uVar17 == 0);
        }
        else {
          iVar11 = 0;
          uVar7 = 0;
        }
        uVar8 = (ulonglong)(-uVar17 & uVar17);
        uVar9 = uVar8 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar14 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar14) {
          iVar14 = iVar15;
        }
      }
      bVar5 = true;
      if (iVar14 != iVar15) {
        uVar17 = 0xffffffff;
        do {
          *(double *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar14 * 0x48) = dVar27;
          uVar17 = ~(uint)uVar8 & uVar17;
          puVar13 = *(uint **)(param_1 + 0x60);
          if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
            puVar13 = (uint *)(param_1 + 0x50);
          }
          iVar4 = *(int *)(param_1 + 0x68);
          iVar14 = (int)uVar7;
          lVar18 = (longlong)iVar14;
          uVar21 = puVar13[lVar18] & uVar17;
          if (uVar21 == 0) {
            iVar20 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar20 = iVar4 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar16 = iVar20;
            if (iVar20 < iVar14) {
              iVar16 = iVar14;
            }
            if (iVar14 < iVar20) {
              lVar19 = 0;
              do {
                uVar21 = puVar13[lVar18 + lVar19 + 1];
                if (uVar21 != 0) {
                  uVar7 = (ulonglong)(iVar14 + (int)lVar19 + 1);
                  uVar17 = 0xffffffff;
                  goto LAB_14275b4fa;
                }
                iVar11 = iVar11 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar16 - lVar18 != lVar19);
              uVar17 = 0xffffffff;
              lVar18 = (longlong)iVar16;
            }
            uVar7 = lVar18 + 1U & 0xffffffff;
            iVar14 = iVar4;
          }
          else {
LAB_14275b4fa:
            uVar8 = (ulonglong)(-uVar21 & uVar21);
            uVar9 = uVar8 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar9 != 0) {
              for (; uVar9 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar14 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar14) {
              iVar14 = iVar4;
            }
          }
        } while (iVar14 != iVar15);
      }
    }
  }
LAB_14275af90:
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
  QueryPerformanceCounter(&local_98);
  uVar7 = local_98.QuadPart - *(longlong *)(param_1 + 0x218);
  if (*(ulonglong *)(param_1 + 0x220) <= uVar7) {
    uVar7 = *(ulonglong *)(param_1 + 0x220);
  }
  uVar9 = (ulonglong)(1.0 / DAT_14c83f418);
  uVar9 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar9 >> 0x3f | uVar9;
  uVar7 = uVar7 + *(longlong *)(param_1 + 0x210);
  uVar8 = uVar7 / uVar9;
  uVar7 = uVar7 % uVar9;
  auVar23._8_4_ = (int)(uVar8 >> 0x20);
  auVar23._0_8_ = uVar8;
  auVar23._12_4_ = 0x45300000;
  auVar25._8_4_ = (int)(uVar7 >> 0x20);
  auVar25._0_8_ = uVar7;
  auVar25._12_4_ = 0x45300000;
  uVar9 = 0;
  *(double *)(param_1 + 0x90) =
       (((double)CONCAT44(0x43300000,(int)uVar7) - 4503599627370496.0) +
       (auVar25._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 +
       ((double)CONCAT44(0x43300000,(int)uVar8) - 4503599627370496.0) +
       (auVar23._8_8_ - 1.9342813113834067e+25);
  LeaveCriticalSection(lpCriticalSection);
  QueryPerformanceCounter(&local_98);
  uVar7 = local_98.QuadPart - *(longlong *)(param_1 + 0x218);
  if (*(ulonglong *)(param_1 + 0x220) <= uVar7) {
    uVar7 = *(ulonglong *)(param_1 + 0x220);
  }
  uVar10 = (ulonglong)(1.0 / DAT_14c83f418);
  uVar10 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar10 >> 0x3f |
           uVar10;
  uVar7 = uVar7 + *(longlong *)(param_1 + 0x210);
  uVar8 = uVar7 / uVar10;
  uVar7 = uVar7 % uVar10;
  auVar24._8_4_ = (int)(uVar8 >> 0x20);
  auVar24._0_8_ = uVar8;
  auVar24._12_4_ = 0x45300000;
  auVar26._8_4_ = (int)(uVar7 >> 0x20);
  auVar26._0_8_ = uVar7;
  auVar26._12_4_ = 0x45300000;
  dVar27 = (((double)CONCAT44(0x43300000,(int)uVar7) - 4503599627370496.0) +
           (auVar26._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 +
           ((double)CONCAT44(0x43300000,(int)uVar8) - 4503599627370496.0) +
           (auVar24._8_8_ - 1.9342813113834067e+25);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x140);
  EnterCriticalSection(lpCriticalSection);
  if (param_2 == '\0') {
    *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + -1;
    iVar11 = *(int *)(param_1 + 400);
    if (iVar11 == 0) {
      uVar7 = 1;
      iVar14 = 0;
      iVar15 = 0;
    }
    else {
      puVar13 = *(uint **)(param_1 + 0x188);
      if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0x178);
      }
      uVar17 = *puVar13;
      if (uVar17 == 0) {
        iVar15 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar15 = iVar11 + -1;
        }
        uVar9 = 0;
        uVar7 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar7 = uVar9;
        }
        iVar14 = 0;
        do {
          if (uVar7 == uVar9) goto LAB_14275b320;
          iVar14 = iVar14 + 0x20;
          uVar17 = puVar13[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar9 = 0;
        iVar14 = 0;
      }
      uVar7 = (ulonglong)(-uVar17 & uVar17);
      uVar8 = uVar7 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar15 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar15) {
        iVar15 = iVar11;
      }
    }
    if (iVar15 != iVar11) {
      uVar17 = 0xffffffff;
      do {
        lVar18 = *(longlong *)(param_1 + 0x168);
        piVar2 = (int *)(lVar18 + 0x18 + (longlong)iVar15 * 0x48);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          *(double *)(lVar18 + (longlong)iVar15 * 0x48 + 8) = dVar27;
        }
        uVar17 = uVar17 & ~(uint)uVar7;
        puVar13 = *(uint **)(param_1 + 0x188);
        if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 0x178);
        }
        iVar4 = *(int *)(param_1 + 400);
        iVar15 = (int)uVar9;
        lVar18 = (longlong)iVar15;
        uVar21 = puVar13[lVar18] & uVar17;
        if (uVar21 == 0) {
          iVar20 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar20 = iVar4 + -1;
          }
          iVar20 = iVar20 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar16 = iVar20;
          if (iVar20 < iVar15) {
            iVar16 = iVar15;
          }
          if (iVar15 < iVar20) {
            lVar19 = 0;
            do {
              uVar21 = puVar13[lVar18 + lVar19 + 1];
              if (uVar21 != 0) {
                uVar9 = (ulonglong)(iVar15 + (int)lVar19 + 1);
                uVar17 = 0xffffffff;
                goto LAB_14275b2cc;
              }
              iVar14 = iVar14 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar16 - lVar18 != lVar19);
            uVar17 = 0xffffffff;
            iVar15 = iVar16;
          }
          uVar9 = (ulonglong)(iVar15 + 1);
          iVar15 = iVar4;
        }
        else {
LAB_14275b2cc:
          uVar7 = (ulonglong)(-uVar21 & uVar21);
          uVar8 = uVar7 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar15 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar15) {
            iVar15 = iVar4;
          }
        }
      } while (iVar15 != iVar11);
    }
  }
  else if (bVar5) {
    iVar11 = *(int *)(param_1 + 400);
    if (iVar11 == 0) {
      uVar8 = 1;
      uVar7 = 0;
      iVar14 = 0;
      iVar15 = 0;
    }
    else {
      puVar13 = *(uint **)(param_1 + 0x188);
      if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0x178);
      }
      uVar17 = *puVar13;
      if (uVar17 == 0) {
        iVar15 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar15 = iVar11 + -1;
        }
        uVar7 = 0;
        uVar8 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar8 = uVar7;
        }
        iVar14 = 0;
        do {
          if (uVar8 == uVar7) goto LAB_14275b320;
          iVar14 = iVar14 + 0x20;
          uVar17 = puVar13[uVar7 + 1];
          uVar7 = uVar7 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar7 = 0;
        iVar14 = 0;
      }
      uVar8 = (ulonglong)(-uVar17 & uVar17);
      uVar9 = uVar8 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar15 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar15) {
        iVar15 = iVar11;
      }
    }
    if (iVar15 != iVar11) {
      uVar17 = 0xffffffff;
      do {
        *(double *)(*(longlong *)(param_1 + 0x168) + 8 + (longlong)iVar15 * 0x48) = dVar27;
        uVar17 = ~(uint)uVar8 & uVar17;
        puVar13 = *(uint **)(param_1 + 0x188);
        if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 0x178);
        }
        iVar4 = *(int *)(param_1 + 400);
        iVar15 = (int)uVar7;
        lVar18 = (longlong)iVar15;
        uVar21 = puVar13[lVar18] & uVar17;
        if (uVar21 == 0) {
          iVar20 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar20 = iVar4 + -1;
          }
          iVar20 = iVar20 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar16 = iVar20;
          if (iVar20 < iVar15) {
            iVar16 = iVar15;
          }
          if (iVar15 < iVar20) {
            lVar19 = 0;
            do {
              uVar21 = puVar13[lVar18 + lVar19 + 1];
              if (uVar21 != 0) {
                uVar7 = (ulonglong)(iVar15 + (int)lVar19 + 1);
                uVar17 = 0xffffffff;
                goto LAB_14275b403;
              }
              iVar14 = iVar14 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar16 - lVar18 != lVar19);
            uVar17 = 0xffffffff;
            iVar15 = iVar16;
          }
          uVar7 = (ulonglong)(iVar15 + 1);
          iVar15 = iVar4;
        }
        else {
LAB_14275b403:
          uVar8 = (ulonglong)(-uVar21 & uVar21);
          uVar9 = uVar8 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar15 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar15) {
            iVar15 = iVar4;
          }
        }
      } while (iVar15 != iVar11);
    }
  }
LAB_14275b320:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_90 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14275b56c FUN_14275b56c body=43 status=ok
// SIG undefined FUN_14275b56c(void)

void FUN_14275b56c(void)

{
  if (DAT_14c842710 != (longlong *)0x0) {
    (**(code **)(*DAT_14c842710 + 0x28))(DAT_14c842710,1);
  }
  DAT_14c842710 = (longlong *)0x0;
  return;
}



// FUNCTION 14275b597 FUN_14275b597 body=69 status=ok
// SIG undefined FUN_14275b597(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275b597(void)

{
  _DAT_14c842720 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275b5d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c842728,1);
  return;
}



// FUNCTION 14275b5dc FUN_14275b5dc body=3 status=ok
// SIG undefined FUN_14275b5dc(void)

undefined8 FUN_14275b5dc(void)

{
  return 0;
}



// FUNCTION 14275b5e0 FUN_14275b5e0 body=194 status=ok
// SIG undefined FUN_14275b5e0(void)

void FUN_14275b5e0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_48 = &PTR_LAB_149e16e60;
  local_68 = FUN_14275e378;
  FUN_14275b85e();
  lVar1 = local_78;
  lVar3 = (longlong)(int)uStack_70;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar2) + 0x48))();
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  lVar1 = local_78;
  if (local_78 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14275b6a4 FUN_14275b6a4 body=186 status=ok
// SIG undefined FUN_14275b6a4(void)

void FUN_14275b6a4(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x1a50) = 0;
  lVar1 = *(longlong *)(param_1 + 0x1a48);
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
  }
  FUN_146269fba(param_1,0);
  lVar1 = *(longlong *)(param_1 + 0x1830);
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x1800);
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x00014275b737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14275b75e FUN_14275b75e body=255 status=ok
// SIG undefined FUN_14275b75e(void)

void FUN_14275b75e(undefined8 param_1)

{
  byte bVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar1 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
        DAT_14c83f0f8 = bVar1 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    if (DAT_14c83f0f8 == 0) {
      local_48 = 0;
      local_38 = &PTR_LAB_149e16e40;
      local_30 = FUN_14275e34c;
      local_58 = &LAB_1467c4b8e;
      FUN_14275b85e(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275b85e FUN_14275b85e body=700 status=ok
// SIG undefined FUN_14275b85e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14275b85e(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_1ad8 [32];
  LPCRITICAL_SECTION local_1ab8;
  undefined4 local_1aac;
  undefined8 local_1aa8;
  undefined1 local_1aa0 [6144];
  undefined1 *local_2a0;
  undefined8 local_298;
  uint local_290 [8];
  uint *local_270;
  int local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1ad8;
  EnterCriticalSection(param_1);
  uVar12 = 0;
  local_2a0 = (undefined1 *)0x0;
  local_298 = 0x10000000000;
  local_270 = (uint *)0x0;
  local_268 = 0;
  uStack_264 = 0x100;
  uStack_260 = 0xffffffff;
  uStack_25c = 0;
  local_58 = 0;
  local_50 = 0;
  local_1ab8 = param_1;
  FUN_1467c3722(local_1aa0,param_1 + 1);
  iVar3 = local_268;
  if (local_268 == 0) {
    uVar17 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = local_270;
    if (local_270 == (uint *)0x0) {
      puVar5 = local_290;
    }
    uVar7 = *puVar5;
    uVar12 = 0;
    iVar13 = 0;
    if (uVar7 == 0) {
      iVar4 = local_268 + 0x1e;
      if (-1 < local_268 + -1) {
        iVar4 = local_268 + -1;
      }
      uVar12 = 0;
      uVar17 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar17 = uVar12;
      }
      do {
        if (uVar17 == uVar12) goto LAB_14275b950;
        iVar13 = iVar13 + 0x20;
        uVar7 = puVar5[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar7 == 0);
    }
    uVar17 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar17 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar4 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (local_268 <= iVar4) {
      iVar4 = local_268;
    }
  }
  if (iVar4 != local_268) {
    uVar7 = 0xffffffff;
    do {
      puVar8 = local_2a0;
      if (local_2a0 == (undefined1 *)0x0) {
        puVar8 = local_1aa0;
      }
      local_1aa8 = *(undefined8 *)(puVar8 + (longlong)iVar4 * 0x18 + 8);
      local_1aac = *(undefined4 *)(puVar8 + (longlong)iVar4 * 0x18);
      pcVar2 = (code *)*param_2;
      plVar9 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar9 = param_2 + 4;
      }
      uVar6 = (**(code **)(*plVar9 + 8))();
      (*pcVar2)(uVar6,&local_1aac,&local_1aa8);
      uVar7 = ~(uint)uVar17 & uVar7;
      puVar5 = local_270;
      if (local_270 == (uint *)0x0) {
        puVar5 = local_290;
      }
      iVar4 = (int)uVar12;
      lVar15 = (longlong)iVar4;
      uVar14 = puVar5[lVar15] & uVar7;
      if (uVar14 == 0) {
        iVar10 = local_268 + 0x1e;
        if (-1 < local_268 + -1) {
          iVar10 = local_268 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar4) {
          iVar11 = iVar4;
        }
        if (iVar4 < iVar10) {
          lVar16 = 0;
          do {
            uVar14 = puVar5[lVar15 + lVar16 + 1];
            if (uVar14 != 0) {
              uVar12 = (ulonglong)(iVar4 + (int)lVar16 + 1);
              uVar7 = 0xffffffff;
              goto LAB_14275ba41;
            }
            iVar13 = iVar13 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar11 - lVar15 != lVar16);
          uVar7 = 0xffffffff;
          iVar4 = iVar11;
        }
        uVar12 = (ulonglong)(iVar4 + 1);
        iVar4 = local_268;
      }
      else {
LAB_14275ba41:
        uVar17 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar4 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (local_268 <= iVar4) {
          iVar4 = local_268;
        }
      }
    } while (iVar4 != iVar3);
  }
LAB_14275b950:
  FUN_14275b6a4(local_1aa0);
  if (local_1ab8 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_1ab8);
  }
  if (*param_2 != 0) {
    plVar9 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_1ad8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14275bb28 FUN_14275bb28 body=902 status=ok
// SIG undefined FUN_14275bb28(void)

void FUN_14275bb28(LPCRITICAL_SECTION param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  LPCRITICAL_SECTION p_Var8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_3e8 [44];
  DWORD local_3bc;
  LPCRITICAL_SECTION local_3b8;
  ulonglong local_3b0;
  undefined8 *local_3a8;
  LPCRITICAL_SECTION local_3a0;
  LPCRITICAL_SECTION local_398;
  undefined1 *local_390;
  int local_388;
  DWORD local_37c;
  wchar_t *local_378;
  undefined1 local_370 [800];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_3a8 = param_2;
  DVar4 = GetCurrentThreadId();
  local_50 = 0x6400000000;
  FUN_1467c2a2e(local_370);
  EnterCriticalSection(param_1);
  *(undefined1 *)&param_1[0xa9].LockSemaphore = 0;
  iVar10 = (int)local_50;
  local_3bc = DVar4;
  if (DVar4 == DAT_14c86a9f4) {
    iVar5 = FUN_146830e68(local_370,local_50 & 0xffffffff,0);
  }
  else {
    iVar5 = FUN_146830cd4(DAT_14c86a9f4,local_370,local_50 & 0xffffffff,0);
  }
  if (iVar5 < iVar10) {
    iVar10 = iVar5;
  }
  local_388 = 0;
  if (0 < iVar10) {
    local_388 = iVar10;
  }
  local_378 = L"GameThread";
  local_37c = DAT_14c86a9f4;
  local_390 = local_370;
  cVar3 = (*(code *)*local_3a8)(local_3a8[1]);
  if ((cVar3 != '\0') && (*(char *)&param_1[0xa9].LockSemaphore == '\0')) {
    uVar2 = *(uint *)&param_1[0x9c].DebugInfo;
    if (uVar2 == 0) {
      uVar15 = 1;
      uVar11 = 0;
      iVar10 = 0;
      uVar6 = 0;
    }
    else {
      p_Var8 = (LPCRITICAL_SECTION)param_1[0x9b].SpinCount;
      if ((LPCRITICAL_SECTION)param_1[0x9b].SpinCount == (LPCRITICAL_SECTION)0x0) {
        p_Var8 = param_1 + 0x9b;
      }
      uVar6 = *(uint *)&p_Var8->DebugInfo;
      uVar11 = 0;
      iVar10 = 0;
      if (uVar6 == 0) {
        iVar5 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar5 = uVar2 - 1;
        }
        uVar11 = 0;
        uVar15 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar15 = uVar11;
        }
        do {
          if (uVar15 == uVar11) goto LAB_14275bc68;
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)&p_Var8->DebugInfo + uVar11 * 4 + 4);
          uVar11 = uVar11 + 1;
        } while (uVar6 == 0);
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar6) {
        uVar6 = uVar2;
      }
    }
    if (uVar6 != uVar2) {
      local_3a0 = param_1 + 1;
      uVar14 = 0xffffffff;
      local_3b8 = param_1;
      local_3b0 = (ulonglong)uVar2;
      local_398 = param_1 + 0x9b;
      do {
        p_Var8 = local_3b8[0x9a].LockSemaphore;
        if (local_3b8[0x9a].LockSemaphore == (LPCRITICAL_SECTION)0x0) {
          p_Var8 = local_3a0;
        }
        DVar4 = *(DWORD *)(&p_Var8->DebugInfo + (longlong)(int)uVar6 * 3);
        lVar12 = *(longlong *)(&p_Var8->LockCount + (longlong)(int)uVar6 * 6);
        iVar5 = (int)local_50;
        if (local_3bc == DVar4) {
          iVar7 = FUN_146830e68(local_370,local_50 & 0xffffffff,0);
        }
        else {
          iVar7 = FUN_146830cd4(DVar4,local_370,local_50 & 0xffffffff,0);
        }
        local_390 = local_370;
        if (iVar7 < iVar5) {
          iVar5 = iVar7;
        }
        local_388 = iVar5;
        if (iVar5 < 1) {
          local_388 = 0;
        }
        local_378 = L"";
        if (*(int *)(lVar12 + 0x10) != 0) {
          local_378 = *(wchar_t **)(lVar12 + 8);
        }
        local_37c = DVar4;
        cVar3 = (*(code *)*local_3a8)(local_3a8[1],&local_37c,&local_378,&local_390);
        param_1 = local_3b8;
        if ((cVar3 == '\0') || (*(char *)&local_3b8[0xa9].LockSemaphore != '\0')) break;
        uVar14 = uVar14 & ~(uint)uVar15;
        p_Var8 = (LPCRITICAL_SECTION)local_3b8[0x9b].SpinCount;
        if ((LPCRITICAL_SECTION)local_3b8[0x9b].SpinCount == (LPCRITICAL_SECTION)0x0) {
          p_Var8 = local_398;
        }
        uVar2 = *(uint *)&local_3b8[0x9c].DebugInfo;
        iVar5 = (int)uVar11;
        lVar12 = (longlong)iVar5;
        uVar6 = *(uint *)((longlong)&p_Var8->DebugInfo + lVar12 * 4) & uVar14;
        if (uVar6 == 0) {
          iVar7 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar7 = uVar2 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar9 = iVar7;
          if (iVar7 < iVar5) {
            iVar9 = iVar5;
          }
          if (iVar5 < iVar7) {
            lVar13 = 0;
            do {
              uVar6 = *(uint *)((longlong)&p_Var8->DebugInfo + lVar13 * 4 + lVar12 * 4 + 4);
              if (uVar6 != 0) {
                uVar11 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                uVar14 = 0xffffffff;
                goto LAB_14275bda9;
              }
              iVar10 = iVar10 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar9 - lVar12 != lVar13);
            uVar14 = 0xffffffff;
            iVar5 = iVar9;
          }
          uVar11 = (ulonglong)(iVar5 + 1);
          uVar6 = uVar2;
        }
        else {
LAB_14275bda9:
          uVar15 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar15 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar6) {
            uVar6 = uVar2;
          }
        }
      } while (uVar6 != (uint)local_3b0);
    }
  }
LAB_14275bc68:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14275beaf FUN_14275beaf body=54 status=ok
// SIG undefined FUN_14275beaf(void)

void FUN_14275beaf(void)

{
  FUN_140457ffc(&DAT_14c86aa00,&DAT_14c842770);
  FUN_14275b6a4(&DAT_14c842798);
                    /* WARNING: Could not recover jumptable at 0x00014275bede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c842770);
  return;
}



// FUNCTION 14275bee6 FUN_14275bee6 body=90 status=ok
// SIG undefined FUN_14275bee6(void)

undefined8 FUN_14275bee6(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  while ((bVar1 & 1) == 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),0xffffffff,0);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    while (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      puVar2 = (undefined8 *)FUN_14018c6e0(*(undefined8 *)(param_1 + 0x20),param_1);
    }
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 14275bf40 FUN_14275bf40 body=105 status=ok
// SIG undefined FUN_14275bf40(void)

void FUN_14275bf40(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  FUN_14275e63b(*(undefined8 *)(lVar1 + 0xc68),*(undefined4 *)(lVar1 + 0xc70));
  lVar1 = *(longlong *)(lVar1 + 0xc68);
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x00014275bf91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14275bfaa FUN_14275bfaa body=511 status=ok
// SIG undefined FUN_14275bfaa(void)

longlong *
FUN_14275bfaa(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,char param_7)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar2 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar2 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 0) {
      cVar1 = FUN_146811c5e();
      if (cVar1 == '\0') {
        lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
        if (lVar4 == 0) {
          return (longlong *)0x0;
        }
        plVar3 = (longlong *)FUN_14001cc68(0x48,0x10);
        FUN_1467c2aaa(plVar3);
      }
      else if (param_7 == '\0') {
        lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
        if (lVar4 == 0) {
          return (longlong *)0x0;
        }
        plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
        FUN_1467c2aaa(plVar3);
        *plVar3 = (longlong)&PTR_LAB_149e16930;
        plVar3[9] = 0;
        plVar3[10] = 0;
        *(undefined1 *)(plVar3 + 0xb) = 0;
      }
      else {
        plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
        FUN_1467c2aaa(plVar3);
        *plVar3 = (longlong)&PTR_LAB_149e16930;
        plVar3[9] = 0;
        plVar3[10] = 0;
        *(undefined1 *)(plVar3 + 0xb) = 1;
      }
      goto LAB_14275c02f;
    }
  }
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = -1;
  plVar3[6] = 0;
  plVar3[7] = 0;
  *plVar3 = (longlong)&PTR_FUN_149e416b0;
LAB_14275c02f:
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,param_1,param_2,param_3,param_4,param_5,param_6);
    if (cVar1 != '\0') {
      return plVar3;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
  }
  return (longlong *)0x0;
}



// FUNCTION 14275c1aa FUN_14275c1aa body=163 status=ok
// SIG undefined FUN_14275c1aa(void)

void FUN_14275c1aa(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  if (DAT_14c8441fc == '\0') {
    DAT_14c8441fc = '\x01';
    do {
      puVar1 = DAT_14c872d28;
      puVar3 = malloc(0x140);
      *puVar3 = &PTR_FUN_149e16990;
      puVar3[1] = puVar1;
      *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      lVar4 = 0x40;
      do {
        *(undefined8 *)((longlong)puVar3 + lVar4) = 0;
        lVar4 = lVar4 + 0x40;
      } while (lVar4 != 0x140);
      LOCK();
      bVar6 = puVar1 != DAT_14c872d28;
      puVar5 = puVar1;
      puVar2 = puVar3;
      if (bVar6) {
        puVar5 = DAT_14c872d28;
        puVar2 = DAT_14c872d28;
      }
      DAT_14c872d28 = puVar2;
      UNLOCK();
      if (puVar3 != (undefined8 *)0x0 && (puVar1 != puVar5 && bVar6)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    } while (puVar1 != puVar5 && bVar6);
  }
  return;
}



// FUNCTION 14275c24e FUN_14275c24e body=275 status=ok
// SIG undefined FUN_14275c24e(void)

void FUN_14275c24e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar3 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar3 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 != 1) {
      return;
    }
  }
  if (DAT_14c8441fd == '\0') {
    DAT_14c8441fd = '\x01';
    do {
      puVar1 = DAT_14c872d28;
      puVar4 = malloc(0x10);
      *puVar4 = &PTR_FUN_149e16b70;
      puVar4[1] = puVar1;
      LOCK();
      bVar6 = puVar1 != DAT_14c872d28;
      puVar5 = puVar1;
      puVar2 = puVar4;
      if (bVar6) {
        puVar5 = DAT_14c872d28;
        puVar2 = DAT_14c872d28;
      }
      DAT_14c872d28 = puVar2;
      UNLOCK();
      if (puVar4 != (undefined8 *)0x0 && (puVar1 != puVar5 && bVar6)) {
        (**(code **)*puVar4)(puVar4,1);
      }
    } while (puVar1 != puVar5 && bVar6);
  }
  return;
}



// FUNCTION 14275c362 FUN_14275c362 body=324 status=ok
// SIG undefined FUN_14275c362(void)

void FUN_14275c362(undefined4 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
  }
  plVar5 = (longlong *)FUN_141582352();
  iVar4 = *(int *)((longlong)plVar5 + 0x14);
  *(int *)((longlong)plVar5 + 0x14) = iVar4 + 1;
  uVar6 = (ulonglong)(int)plVar5[1];
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)plVar5 + 0x14) = iVar4;
  }
  else {
    bVar8 = false;
    do {
      lVar10 = uVar6 * 0x10 + -8;
      uVar11 = uVar6;
      while (((*(int *)(*plVar5 + lVar10) != 0 &&
              (plVar1 = *(longlong **)(*plVar5 + -8 + lVar10), plVar1 != (longlong *)0x0)) &&
             (cVar3 = (**(code **)(*plVar1 + 0x60))(), cVar3 != '\0'))) {
        lVar10 = lVar10 + -0x10;
        bVar2 = uVar11 < 2;
        uVar11 = uVar11 - 1;
        if (bVar2) {
          iVar4 = *(int *)((longlong)plVar5 + 0x14) + -1;
          *(int *)((longlong)plVar5 + 0x14) = iVar4;
          if (bVar8) goto LAB_14275c3f2;
          goto LAB_14275c454;
        }
      }
      uVar6 = uVar11 - 1;
      bVar8 = true;
    } while (1 < uVar11);
    iVar4 = *(int *)((longlong)plVar5 + 0x14) + -1;
    *(int *)((longlong)plVar5 + 0x14) = iVar4;
LAB_14275c3f2:
    if (iVar4 < 1) {
      iVar4 = (int)plVar5[1];
      iVar7 = iVar4;
      if (0 < iVar4) {
        iVar9 = 0;
        do {
          if (((*(int *)(*plVar5 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(*plVar5 + (longlong)iVar9 * 0x10), plVar1 == (longlong *)0x0)
              ) || (cVar3 = (**(code **)(*plVar1 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(plVar5,iVar9);
            FUN_14005b248(plVar5);
          }
          else {
            iVar9 = iVar9 + 1;
          }
          iVar7 = (int)plVar5[1];
        } while (iVar9 < iVar7);
      }
      iVar9 = 2;
      if (2 < iVar7 * 2) {
        iVar9 = iVar7 * 2;
      }
      *(int *)(plVar5 + 2) = iVar9;
      if ((iVar9 < iVar4) && (*(int *)((longlong)plVar5 + 0xc) != iVar7)) {
        FUN_14045812c(plVar5);
      }
    }
  }
LAB_14275c454:
                    /* WARNING: Could not recover jumptable at 0x00014275c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c872d28 + 0x70))(DAT_14c872d28,param_1);
  return;
}



// FUNCTION 14275c4a6 FUN_14275c4a6 body=547 status=ok
// SIG undefined FUN_14275c4a6(void)

undefined8 * FUN_14275c4a6(undefined8 param_1,undefined8 *param_2,ulonglong param_3,uint param_4)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  LPVOID pvVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  
  if ((((0x10 < param_4 || 0x7ff0 < param_3) || (DAT_14c758740 == 0xffffffff)) ||
      (pvVar5 = TlsGetValue(DAT_14c758740), pvVar5 == (LPVOID)0x0)) ||
     (*(char *)((longlong)pvVar5 + 0x670) != '\x01')) goto LAB_14275c631;
  if (param_2 == (undefined8 *)0x0) {
    uVar13 = 0;
    if (param_3 == 0) {
      return (undefined8 *)0x0;
    }
    uVar11 = 0;
  }
  else {
    if ((short)param_2 == 0) goto LAB_14275c631;
    puVar6 = (ushort *)((ulonglong)param_2 & 0xffffffffffff0000);
    uVar3 = *puVar6;
    uVar11 = (ulonglong)uVar3;
    uVar12 = (uint)uVar3;
    bVar2 = (byte)puVar6[1];
    uVar13 = (uint)bVar2;
    if (uVar11 < param_3 || (param_3 == 0 || *(char *)((longlong)puVar6 + 3) != -0x1d)) {
      if (*(char *)((longlong)puVar6 + 3) != -0x1d) goto LAB_14275c631;
    }
    else {
      if (bVar2 == 0) {
        return param_2;
      }
      if ((ushort)(&DAT_14c8407e0)[0x33 - uVar13] < param_3) {
        return param_2;
      }
    }
    uVar4 = *(uint *)((longlong)pvVar5 + (ulonglong)bVar2 * 0x20 + 0x18);
    if ((*(longlong *)((longlong)pvVar5 + (ulonglong)bVar2 * 0x20 + 0x20) != 0) &&
       (0x3f < uVar4 || 0xffff < uVar4 * uVar3)) goto LAB_14275c631;
    if (param_3 == 0) {
      puVar7 = (undefined8 *)0x0;
      goto LAB_14275c663;
    }
  }
  uVar12 = (uint)uVar11;
  lVar9 = (ulonglong)(byte)(&DAT_14c840860)[param_3 + 0xf >> 4] * 0x20;
  puVar8 = (undefined8 *)((longlong)pvVar5 + lVar9 + 0x10);
  puVar7 = *(undefined8 **)((longlong)pvVar5 + lVar9 + 0x10);
  if ((puVar7 == (undefined8 *)0x0) && (*(longlong *)((longlong)pvVar5 + lVar9 + 0x20) != 0)) {
    *(undefined4 *)puVar8 = *(undefined4 *)((longlong)pvVar5 + lVar9 + 0x20);
    *(undefined4 *)((longlong)pvVar5 + lVar9 + 0x14) =
         *(undefined4 *)((longlong)pvVar5 + lVar9 + 0x24);
    *(undefined4 *)((longlong)pvVar5 + lVar9 + 0x18) =
         *(undefined4 *)((longlong)pvVar5 + lVar9 + 0x28);
    *(undefined4 *)((longlong)pvVar5 + lVar9 + 0x1c) =
         *(undefined4 *)((longlong)pvVar5 + lVar9 + 0x2c);
    *(undefined8 *)((longlong)pvVar5 + lVar9 + 0x20) = 0;
    *(undefined4 *)((longlong)pvVar5 + lVar9 + 0x28) = 0;
    puVar7 = (undefined8 *)*puVar8;
  }
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)((longlong)pvVar5 + lVar9 + 0x18);
    *piVar1 = *piVar1 + -1;
    *puVar8 = *puVar7;
    if (param_2 == (undefined8 *)0x0) {
      return puVar7;
    }
    if (param_3 < uVar11) {
      uVar11 = param_3;
    }
    memcpy(puVar7,param_2,uVar11);
LAB_14275c663:
    uVar11 = (ulonglong)(uVar13 << 5);
    puVar8 = (undefined8 *)((longlong)pvVar5 + uVar11 + 0x10);
    uVar13 = *(uint *)((longlong)pvVar5 + uVar11 + 0x18);
    if ((uVar13 < 0x40) && (uVar13 * uVar12 < 0x10000)) {
      uVar10 = *puVar8;
    }
    else {
      if (*(longlong *)((longlong)pvVar5 + uVar11 + 0x20) != 0) {
        return puVar7;
      }
      *(undefined8 *)((longlong)pvVar5 + uVar11 + 0x20) = *puVar8;
      *(undefined8 *)((longlong)pvVar5 + uVar11 + 0x28) =
           *(undefined8 *)((longlong)pvVar5 + uVar11 + 0x18);
      *(undefined4 *)((longlong)pvVar5 + uVar11 + 0x18) = 0;
      uVar10 = 0;
    }
    *param_2 = uVar10;
    param_2[1] = 0;
    *puVar8 = param_2;
    piVar1 = (int *)((longlong)pvVar5 + uVar11 + 0x18);
    *piVar1 = *piVar1 + 1;
    return puVar7;
  }
LAB_14275c631:
  puVar7 = (undefined8 *)FUN_1467c1f0c(param_1,param_2,param_3,param_4);
  return puVar7;
}



// FUNCTION 14275c6ca FUN_14275c6ca body=1 status=ok
// SIG undefined FUN_14275c6ca(void)

void FUN_14275c6ca(void)

{
  return;
}



// FUNCTION 14275c6cc FUN_14275c6cc body=164 status=ok
// SIG undefined FUN_14275c6cc(void)

undefined4 FUN_14275c6cc(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"FileExists %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275c772 FUN_14275c772 body=163 status=ok
// SIG undefined FUN_14275c772(void)

undefined8 FUN_14275c772(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(local_38,L"FileSize %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_28);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_28);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275c816 FUN_14275c816 body=167 status=ok
// SIG undefined FUN_14275c816(void)

undefined4 FUN_14275c816(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"DeleteFile %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275c8be FUN_14275c8be body=167 status=ok
// SIG undefined FUN_14275c8be(void)

undefined4 FUN_14275c8be(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"IsReadOnly %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275c966 FUN_14275c966 body=176 status=ok
// SIG undefined FUN_14275c966(void)

undefined4 FUN_14275c966(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"MoveFile %s %s",param_2,param_3);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275ca18 FUN_14275ca18 body=177 status=ok
// SIG undefined FUN_14275ca18(void)

undefined4 FUN_14275ca18(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"SetReadOnly %s %d",param_2,param_3 & 0xff);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275caca FUN_14275caca body=169 status=ok
// SIG undefined FUN_14275caca(void)

undefined8 FUN_14275caca(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"GetTimeStamp %s");
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275cb74 FUN_14275cb74 body=169 status=ok
// SIG undefined FUN_14275cb74(void)

void FUN_14275cb74(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"SetTimeStamp %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275cc1e FUN_14275cc1e body=169 status=ok
// SIG undefined FUN_14275cc1e(void)

undefined8 FUN_14275cc1e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"GetAccessTimeStamp %s");
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275ccc8 FUN_14275ccc8 body=169 status=ok
// SIG undefined FUN_14275ccc8(void)

undefined8 FUN_14275ccc8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"GetFilenameOnDisk %s");
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275cd72 FUN_14275cd72 body=228 status=ok
// SIG undefined FUN_14275cd72(void)

undefined8 * FUN_14275cd72(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"OpenRead %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar2 = &PTR_FUN_149e11ee0;
    puVar2[1] = lVar1;
    FUN_140056680(puVar2 + 2,param_2);
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275ce58 FUN_14275ce58 body=250 status=ok
// SIG undefined FUN_14275ce58(void)

undefined8 * FUN_14275ce58(longlong param_1,undefined8 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined1 local_48 [16];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_4 & 0xff;
  FUN_140002266(local_48,L"OpenWrite %s %d %d",param_2,param_3 & 0xff);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_38);
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  QueryPerformanceCounter(&local_38);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar2 = &PTR_FUN_149e11ee0;
    puVar2[1] = lVar1;
    FUN_140056680(puVar2 + 2,param_2);
  }
  FUN_14275d8c2(local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275cf54 FUN_14275cf54 body=167 status=ok
// SIG undefined FUN_14275cf54(void)

undefined4 FUN_14275cf54(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"DirectoryExists %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275cffc FUN_14275cffc body=167 status=ok
// SIG undefined FUN_14275cffc(void)

undefined4 FUN_14275cffc(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"CreateDirectory %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d0a4 FUN_14275d0a4 body=167 status=ok
// SIG undefined FUN_14275d0a4(void)

undefined4 FUN_14275d0a4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"DeleteDirectory %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d14c FUN_14275d14c body=169 status=ok
// SIG undefined FUN_14275d14c(void)

undefined8 FUN_14275d14c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"GetStatData %s");
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x120))(*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d1f6 FUN_14275d1f6 body=201 status=ok
// SIG undefined FUN_14275d1f6(void)

undefined4 FUN_14275d1f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [40];
  LARGE_INTEGER local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140002266(local_48,L"IterateDirectory %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_60);
  local_58 = 0;
  local_60.QuadPart = (LONGLONG)&PTR_FUN_149e163e0;
  local_50 = param_3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))
                    (*(longlong **)(param_1 + 8),param_2,&local_60);
  QueryPerformanceCounter(&local_38);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d2c0 FUN_14275d2c0 body=196 status=ok
// SIG undefined FUN_14275d2c0(void)

undefined4 FUN_14275d2c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140002266(local_48,L"IterateDirectoryStat %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_58);
  local_58.QuadPart = (LONGLONG)&PTR_FUN_149e16430;
  local_50 = param_3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                    (*(longlong **)(param_1 + 8),param_2,&local_58);
  QueryPerformanceCounter(&local_38);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d386 FUN_14275d386 body=163 status=ok
// SIG undefined FUN_14275d386(void)

undefined8 FUN_14275d386(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(local_38,L"OpenAsyncRead %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_28);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_28);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d42a FUN_14275d42a body=201 status=ok
// SIG undefined FUN_14275d42a(void)

undefined4 FUN_14275d42a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [40];
  LARGE_INTEGER local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140002266(local_48,L"IterateDirectoryRecursively %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_60);
  local_58 = 0;
  local_60.QuadPart = (LONGLONG)&PTR_FUN_149e163e0;
  local_50 = param_3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1a8))
                    (*(longlong **)(param_1 + 8),param_2,&local_60);
  QueryPerformanceCounter(&local_38);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d4f4 FUN_14275d4f4 body=196 status=ok
// SIG undefined FUN_14275d4f4(void)

undefined4 FUN_14275d4f4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140002266(local_48,L"IterateDirectoryStatRecursively %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_58);
  local_58.QuadPart = (LONGLONG)&PTR_FUN_149e16430;
  local_50 = param_3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1b8))
                    (*(longlong **)(param_1 + 8),param_2,&local_58);
  QueryPerformanceCounter(&local_38);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d5ba FUN_14275d5ba body=167 status=ok
// SIG undefined FUN_14275d5ba(void)

undefined4 FUN_14275d5ba(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"DeleteDirectoryRecursively %s",param_2);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d0))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d662 FUN_14275d662 body=201 status=ok
// SIG undefined FUN_14275d662(void)

undefined4
FUN_14275d662(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50 [16];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140002266(local_50,L"CopyFile %s %s",param_2,param_3);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_40);
  local_58 = param_5;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1e0))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  QueryPerformanceCounter(&local_40);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  FUN_14275d8c2(local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d72c FUN_14275d72c body=139 status=ok
// SIG undefined FUN_14275d72c(void)

undefined4 FUN_14275d72c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = FUN_140115ae4(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d7b8 FUN_14275d7b8 body=139 status=ok
// SIG undefined FUN_14275d7b8(void)

undefined4 FUN_14275d7b8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  QueryPerformanceCounter(&local_30);
  uVar1 = FUN_1467b706a(*(undefined8 *)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_30);
  if (DAT_14c8407a0 == '\0') {
    DAT_14c8407a0 = '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275d844 FUN_14275d844 body=55 status=ok
// SIG undefined FUN_14275d844(void)

undefined8 FUN_14275d844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14054d46e(param_3,L"NoCachedReadFile");
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = FUN_14054d46e(param_3,L"CachedReadFile");
  return uVar2;
}



// FUNCTION 14275d87c FUN_14275d87c body=3 status=ok
// SIG undefined FUN_14275d87c(void)

undefined1 FUN_14275d87c(void)

{
  return 1;
}



// FUNCTION 14275d880 FUN_14275d880 body=1 status=ok
// SIG undefined FUN_14275d880(void)

void FUN_14275d880(void)

{
  return;
}



// FUNCTION 14275d882 FUN_14275d882 body=64 status=ok
// SIG undefined FUN_14275d882(void)

void FUN_14275d882(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x00014275d8aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14275d8c2 FUN_14275d8c2 body=64 status=ok
// SIG undefined FUN_14275d8c2(void)

void FUN_14275d8c2(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x00014275d8ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14275d91a FUN_14275d91a body=99 status=ok
// SIG undefined FUN_14275d91a(void)

longlong * FUN_14275d91a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (DAT_14c872d28 == (longlong *)0x0) {
        FUN_1460d69fa();
      }
      (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14275d97e FUN_14275d97e body=179 status=ok
// SIG undefined FUN_14275d97e(void)

void FUN_14275d97e(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  
  lVar2 = 8;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0xa8);
    EnterCriticalSection(lpCriticalSection);
    iVar1 = *(int *)(param_1 + 0x90);
    if ((longlong)iVar1 == 0) {
      FUN_141239b4c(param_1 + 8,param_2,param_3);
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + -8 + (longlong)iVar1 * 8);
      *(int *)(param_1 + 0x90) = iVar1 + -1;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    if (iVar1 == 0) {
      return;
    }
    *(longlong **)(lVar2 + 0x18) = param_2;
    param_2 = *(longlong **)(lVar2 + 8);
    lVar2 = 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x00014275da1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + lVar2))(param_2);
  return;
}



// FUNCTION 14275da3a FUN_14275da3a body=152 status=ok
// SIG undefined FUN_14275da3a(void)

undefined8
FUN_14275da3a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1417035de(param_1,&local_38,param_2,param_5);
  if (local_30 == 0) {
    local_38 = &DAT_149dfb77a;
  }
  local_40 = 0;
  local_48 = 0xffffffffffffffff;
  uVar1 = FUN_1411b1052(param_1,local_38,param_3,param_4);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  FUN_14275d8c2(&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14275dad4 FUN_14275dad4 body=163 status=ok
// SIG undefined FUN_14275dad4(void)

ulonglong FUN_14275dad4(longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1417035de(param_1,&local_38,param_2,param_5);
  if (local_30 == 0) {
    local_38 = &DAT_149dfb77a;
  }
  local_48 = 0;
  local_50 = 0;
  local_58 = 0xffffffffffffffff;
  lVar1 = FUN_14275bfaa(param_1,local_38,param_3 & 0xffffffff,param_4);
  *(longlong *)(param_1 + 0x28) = lVar1;
  FUN_14275d8c2(&local_38);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(param_3 >> 8),lVar1 != 0) & 0xffffffff;
}



// FUNCTION 14275db78 FUN_14275db78 body=64 status=ok
// SIG undefined FUN_14275db78(void)

void FUN_14275db78(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x00014275dba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14275dbd6 FUN_14275dbd6 body=164 status=ok
// SIG undefined FUN_14275dbd6(void)

void FUN_14275dbd6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_2 + 0x28);
    puVar5 = &DAT_14c840844;
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(puVar4 + -6);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(puVar4 + -2);
        if (lVar2 != 0) {
          *(undefined8 *)(puVar4 + -2) = 0;
          *puVar4 = 0;
          goto LAB_14275dc48;
        }
      }
      else {
        *(undefined8 *)(puVar4 + -6) = 0;
        puVar4[-4] = 0;
        *(undefined8 *)(lVar2 + 8) = 0;
        lVar1 = *(longlong *)(puVar4 + -2);
        if (lVar1 == 0) {
LAB_14275dc48:
          lVar1 = 0;
        }
        else {
          *(undefined8 *)(puVar4 + -2) = 0;
          *puVar4 = 0;
          *(undefined8 *)(lVar1 + 8) = 0;
        }
        *(longlong *)(lVar2 + 8) = lVar1;
        FUN_14275888c(param_1,lVar2,*puVar5,uVar3 & 0xffffffff);
      }
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      puVar4 = puVar4 + 8;
    } while (uVar3 != 0x33);
  }
  return;
}



// FUNCTION 14275dc7a FUN_14275dc7a body=31 status=ok
// SIG undefined FUN_14275dc7a(void)

undefined8 FUN_14275dc7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14275dc9e FUN_14275dc9e body=20 status=ok
// SIG undefined FUN_14275dc9e(void)

undefined8 FUN_14275dc9e(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 14275dcb4 FUN_14275dcb4 body=5 status=ok
// SIG undefined FUN_14275dcb4(void)

longlong FUN_14275dcb4(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14275dcba FUN_14275dcba body=43 status=ok
// SIG undefined FUN_14275dcba(void)

undefined8 FUN_14275dcba(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 0;
}



// FUNCTION 14275dce6 FUN_14275dce6 body=78 status=ok
// SIG undefined FUN_14275dce6(void)

void FUN_14275dce6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  do {
  } while ((*(byte *)(param_1 + 0x20) & 1) == 0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014275dd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14275dd34 FUN_14275dd34 body=190 status=ok
// SIG undefined FUN_14275dd34(void)

int * FUN_14275dd34(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x48);
        if (*piVar1 == *param_3) {
          if (piVar1 != (int *)0x0) goto LAB_14275ddd5;
          break;
        }
        iVar2 = piVar1[0x10];
      } while (iVar2 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_14275ddf4(param_1,&local_1c,param_2);
  piVar1 = (int *)(*param_1 + (longlong)local_1c * 0x48);
LAB_14275ddd5:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1 + 2;
}



// FUNCTION 14275ddf4 FUN_14275ddf4 body=1367 status=ok
// SIG undefined FUN_14275ddf4(void)

int * FUN_14275ddf4(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  undefined4 uVar26;
  int iVar27;
  ulonglong uVar28;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar24 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar24 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar24) {
      FUN_14021b4e8(param_1,iVar24);
    }
    iVar27 = (int)param_1[5];
    if (iVar27 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar13 = iVar27 + -1;
      }
      iVar13 = iVar13 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar14 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar14 = iVar27;
    }
    if (iVar14 >> 5 == iVar13) {
      *(int *)(param_1 + 5) = iVar27 + 1;
    }
    else {
      FUN_1456bd906(plVar11);
      uVar18 = (int)param_1[5] + 1;
      uVar19 = (int)param_1[5] + 0x20;
      if (-1 < (int)uVar18) {
        uVar19 = uVar18;
      }
      *(uint *)(param_1 + 5) = uVar18;
      iVar13 = uVar18 - (uVar19 & 0xffffffe0);
      if (iVar13 != 0) {
        plVar22 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar22 = plVar11;
        }
        bVar12 = -(char)iVar13;
        *(uint *)((longlong)plVar22 + (longlong)((int)uVar19 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)((int)uVar19 >> 5) * 4) <<
                   (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar24;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar27 & 0x1f;
    puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar24 = (int)param_1[6];
    lVar10 = (longlong)iVar24;
    iVar27 = *(int *)(*param_1 + 4 + lVar10 * 0x48);
    *(int *)(param_1 + 6) = iVar27;
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar27 * 0x48) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar18 = 1 << ((byte)iVar24 & 0x1f);
  puVar15 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar15 = puVar1;
  }
  iVar27 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar27 = iVar24;
  }
  puVar15[iVar27 >> 5] = puVar15[iVar27 >> 5] | uVar18;
  piVar2 = (int *)(*param_1 + lVar10 * 0x48);
  iVar13 = *(int *)*param_4;
  *piVar2 = iVar13;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[8] = 0;
  piVar2[9] = 0;
  piVar2[10] = 0;
  piVar2[0xb] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  piVar2[0xe] = 0;
  piVar2[0xf] = 0;
  piVar2[0x10] = -1;
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar14 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar14 * 0x48);
        if (*piVar3 == iVar13) {
          iVar13 = *piVar2;
          iVar14 = piVar2[1];
          iVar20 = piVar2[2];
          iVar21 = piVar2[3];
          uVar5 = *(undefined8 *)(piVar2 + 4);
          uVar6 = *(undefined8 *)(piVar2 + 6);
          uVar7 = *(undefined8 *)(piVar2 + 8);
          uVar8 = *(undefined8 *)(piVar2 + 10);
          uVar9 = *(undefined8 *)(piVar2 + 0xe);
          *(undefined8 *)(piVar3 + 0xc) = *(undefined8 *)(piVar2 + 0xc);
          *(undefined8 *)(piVar3 + 0xe) = uVar9;
          *(undefined8 *)(piVar3 + 8) = uVar7;
          *(undefined8 *)(piVar3 + 10) = uVar8;
          *(undefined8 *)(piVar3 + 4) = uVar5;
          *(undefined8 *)(piVar3 + 6) = uVar6;
          *piVar3 = iVar13;
          piVar3[1] = iVar14;
          piVar3[2] = iVar20;
          piVar3[3] = iVar21;
          lVar10 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar10 + (longlong)(int)param_1[6] * 0x48) = iVar24;
          }
          puVar4 = (undefined4 *)(lVar10 + (longlong)iVar24 * 0x48);
          *puVar4 = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar26 = 0xffffffff;
          }
          else {
            uVar26 = (undefined4)param_1[6];
          }
          puVar4[1] = uVar26;
          *(int *)(param_1 + 6) = iVar24;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          puVar15 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar15 = puVar1;
          }
          puVar15[iVar27 >> 5] = puVar15[iVar27 >> 5] & ~uVar18;
          cVar17 = '\x01';
          goto LAB_14275df83;
        }
        iVar14 = piVar3[0x10];
      } while (iVar14 != -1);
    }
  }
  cVar17 = '\0';
LAB_14275df83:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar17;
  }
  if (cVar17 != '\0') goto LAB_14275e104;
  uVar19 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar18 = 1;
  if (3 < uVar19) {
    uVar16 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar10 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar10 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar18 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    piVar2[0x11] = param_3;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    piVar2[0x10] = *(int *)((longlong)plVar11 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar24;
    goto LAB_14275e104;
  }
  *(uint *)(param_1 + 9) = uVar18;
  plVar11 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar11,0,0,4);
    uVar18 = *(uint *)(param_1 + 9);
  }
  if (uVar18 == 0) goto LAB_14275e104;
  plVar22 = param_1 + 7;
  if (uVar18 == 1) {
    if (*plVar11 != 0) {
      FUN_1446efa72(plVar11,0,0,4);
    }
LAB_14275e00e:
    uVar19 = 0;
    do {
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar22;
      }
      *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar19) * 4) =
           0xffffffff;
      uVar19 = uVar19 + 1;
    } while (uVar18 != uVar19);
  }
  else {
    FUN_1446efa72(plVar11,0,uVar18,4);
    if (0 < (int)uVar18) goto LAB_14275e00e;
  }
  iVar27 = (int)param_1[5];
  if (iVar27 == 0) {
    uVar16 = 0;
    uVar23 = 1;
    iVar14 = 0;
    iVar13 = 0;
  }
  else {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar18 = *puVar15;
    if (uVar18 == 0) {
      iVar13 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar13 = iVar27 + -1;
      }
      uVar16 = 0;
      uVar23 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar23 = uVar16;
      }
      iVar14 = 0;
      do {
        if (uVar23 == uVar16) goto LAB_14275e104;
        iVar14 = iVar14 + 0x20;
        uVar18 = puVar15[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar16 = 0;
      iVar14 = 0;
    }
    uVar23 = (ulonglong)(-uVar18 & uVar18);
    uVar28 = uVar23 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar13 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar27 <= iVar13) {
      iVar13 = iVar27;
    }
  }
  if (iVar13 < iVar27) {
    uVar18 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar25 = (longlong)iVar13;
      uVar28 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar10 + lVar25 * 0x48);
      iVar27 = (int)uVar28;
      *(int *)(lVar10 + 0x44 + lVar25 * 0x48) = iVar27;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar22;
      }
      *(undefined4 *)(lVar10 + 0x40 + lVar25 * 0x48) =
           *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar28) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar22;
      }
      *(int *)((longlong)plVar11 + ((longlong)iVar27 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13
      ;
      uVar18 = ~(uint)uVar23 & uVar18;
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      iVar27 = (int)param_1[5];
      iVar13 = (int)uVar16;
      lVar10 = (longlong)iVar13;
      uVar19 = puVar15[lVar10] & uVar18;
      if (uVar19 == 0) {
        iVar20 = iVar27 + 0x1e;
        if (-1 < iVar27 + -1) {
          iVar20 = iVar27 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar21 = iVar20;
        if (iVar20 < iVar13) {
          iVar21 = iVar13;
        }
        if (iVar20 <= iVar13) break;
        lVar25 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar19 = puVar15[lVar10 + lVar25 + 1];
          if (uVar19 != 0) break;
          lVar25 = lVar25 + 1;
          if (iVar21 - lVar10 == lVar25) goto LAB_14275e104;
        }
        uVar16 = (ulonglong)(iVar13 + (int)lVar25 + 1);
        uVar18 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar19 & uVar19);
      uVar28 = uVar23 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar13 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar27);
  }
LAB_14275e104:
  *param_2 = iVar24;
  return param_2;
}



// FUNCTION 14275e34c FUN_14275e34c body=43 status=ok
// SIG undefined FUN_14275e34c(void)

void FUN_14275e34c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014275e36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x40))(param_2);
    return;
  }
  return;
}



// FUNCTION 14275e378 FUN_14275e378 body=72 status=ok
// SIG undefined FUN_14275e378(void)

void FUN_14275e378(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_3;
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar2 == 2) {
    param_1 = (longlong *)*param_1;
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1467c4be4(param_1,iVar2);
    }
    *(longlong **)(*param_1 + (longlong)iVar2 * 8) = plVar1;
  }
  return;
}



// FUNCTION 14275e3ea FUN_14275e3ea body=29 status=ok
// SIG undefined FUN_14275e3ea(void)

undefined8 FUN_14275e3ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14275e407 FUN_14275e407 body=52 status=ok
// SIG undefined FUN_14275e407(void)

void FUN_14275e407(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c83f240;
  if (DAT_14c83f240 != 0) {
    FUN_1417021f2(DAT_14c83f240);
    FUN_146269864(lVar1);
    DAT_14c83f240 = 0;
  }
  return;
}



// FUNCTION 14275e43b FUN_14275e43b body=52 status=ok
// SIG undefined FUN_14275e43b(void)

void FUN_14275e43b(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c83f300;
  if (DAT_14c83f300 != 0) {
    FUN_1417020bc(DAT_14c83f300);
    FUN_146269864(lVar1);
    DAT_14c83f300 = 0;
  }
  return;
}



// FUNCTION 14275e470 FUN_14275e470 body=429 status=ok
// SIG undefined FUN_14275e470(void)

ulonglong FUN_14275e470(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c83f280) && (FUN_144b3d300(&DAT_14c83f280), DAT_14c83f280 == -1)) {
    DAT_14c83f200 = 0;
    DAT_14c83f240 = &DAT_14c83f200;
    atexit(FUN_14275e407);
    _Init_thread_footer(&DAT_14c83f280);
  }
  puVar3 = DAT_14c83f240;
  (**(code **)(*plVar1 + 0x18))();
  uVar4 = FUN_14493c560();
  if (uVar4 == 0) {
    uVar5 = 0;
    uVar9 = 0;
    lVar8 = 0;
  }
  else {
    uVar9 = (ulonglong)(uVar4 >> 0xe);
    uVar5 = uVar4 & 0x3fff;
    lVar8 = (ulonglong)(uVar5 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
  }
  *(longlong **)(lVar8 + 8) = plVar1;
  do {
    uVar2 = *puVar3;
    uVar6 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar6 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    if (uVar4 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar5 * 0x18);
    }
    *(uint *)(lVar8 + 0x10) = (uint)uVar2 & 0x3ffffff;
    LOCK();
    uVar7 = *puVar3;
    bVar10 = uVar2 == uVar7;
    if (bVar10) {
      *puVar3 = uVar6 | uVar4;
      uVar7 = uVar2;
    }
    UNLOCK();
  } while (!bVar10);
  return uVar7;
}



// FUNCTION 14275e61e FUN_14275e61e body=29 status=ok
// SIG undefined FUN_14275e61e(void)

undefined8 FUN_14275e61e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14275e63b FUN_14275e63b body=52 status=ok
// SIG undefined FUN_14275e63b(void)

void FUN_14275e63b(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14275e67d FUN_14275e67d body=68 status=ok
// SIG undefined FUN_14275e67d(void)

void FUN_14275e67d(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c844240;
  if (DAT_14c844240 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x00014275e6a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14275e6c1 FUN_14275e6c1 body=716 status=ok
// SIG undefined FUN_14275e6c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275e6c1(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (undefined8 **)((ulonglong)local_58 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c8407b8,L"MallocBinned2.EnableLegacyCachedOSPageAllocatorFreeMemReporting",
                &DAT_14c8407b0,
                L"Temporary. Whether or not report full amount of cached memory in CachedOSPageAllocator (legacy) or report only the amount of memory immediately available to return to the OS"
               );
  atexit(FUN_1427586c9);
  local_58 = (undefined8 **)((ulonglong)local_58 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c8407c8,L"MallocBinned2.TrimCachedPages",&DAT_14c758734,
                L"If true, unused cahed OS pages are decommitted.");
  atexit(FUN_14275870e);
  memset(&DAT_14c841080,0,0xcc0);
  local_58._0_4_ = 4;
  FUN_1415c789c(&DAT_14c841d48,L"MallocBinned.FlushThreadCacheMaxWaitTime",&DAT_14c758738,
                L"The threshold of time before warning about FlushCurrentThreadCache taking too long (seconds)."
               );
  atexit(FUN_142758bc4);
  local_58._0_4_ = 0;
  FUN_141471170(&DAT_14c841d58,L"MallocBinned.FlushRegisteredThreadCachesOnOneThread",&DAT_14c75873c
                ,
                L"Wether or not to attempt to flush registered thread caches on one thread (enabled by default)."
               );
  atexit(FUN_142758c09);
  local_58._0_4_ = 0;
  FUN_141471170(&DAT_14c841d68,L"MallocLongLived.MaxFreeCachedBlocks",&DAT_14c758744,
                L"Max free blocks to keep allocated as pages are allocated/freed from the owning allocator."
               );
  atexit(FUN_142758c4e);
  local_58 = (undefined8 **)((ulonglong)local_58._4_4_ << 0x20);
  FUN_141471170(&DAT_14c841d78,L"MallocLongLived.BlocksPerPool",&DAT_14c758748,
                L"Number of blocks per pooled virtual address range allocated. Initial allocation is hard-coded to the default value MALLOC_LONGLIVED_InitialBlocksPerPool."
               );
  atexit(FUN_142758c93);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *local_40 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_149e17030;
  local_40[3] = &LAB_1467c26bb;
  local_50 = 0;
  local_58 = &local_40;
  FUN_141703554(&DAT_14c842608,L"mi.MemoryResetDelay",&DAT_14c75874c,
                L"The time in milliseconds to keep recently freed memory pages inside the process for reuse. This can dramatically reduce OS overhead of memory zeroing and page faults during alloc intense workloads."
               );
  FUN_1449db362(&local_40);
  atexit(FUN_142758da4);
  puVar1 = (undefined8 *)FUN_14016c8d4();
  puVar4 = &DAT_14c842650;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  uRam000000014c8426c8 = 0;
  uRam000000014c8426c9 = 0;
  _DAT_14c8426b8 = 0;
  uRam000000014c8426c0 = 0;
  _DAT_14c8426c1 = 0;
  _DAT_14c8426a8 = 0;
  uRam000000014c8426b0 = 0;
  _DAT_14c842698 = 0;
  uRam000000014c8426a0 = 0;
  local_58 = (undefined8 **)((ulonglong)local_58 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c842720,L"DoPooledThreadWaitTimeouts",&DAT_14c842730,
                L"If enabled, uses the old behaviour for waking up pool threads every 10ms. Otherwise, lets pooled threads sleep until data arrives."
               );
  atexit(FUN_14275b597);
  _DAT_14c844298 = 0;
  _DAT_14c8442a0 = 0;
  _DAT_14c8442a8 = 0;
  _DAT_14c8442b0 = L"AudioPipe";
  DAT_14c844254 = TlsAlloc();
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275e990 FUN_14275e990 body=49 status=ok
// SIG undefined FUN_14275e990(void)

void FUN_14275e990(void)

{
  FUN_142761681(DAT_14c8442c8,DAT_14c8442d0);
  if (DAT_14c8442c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14275e9d2 FUN_14275e9d2 body=69 status=ok
// SIG undefined FUN_14275e9d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275e9d2(void)

{
  _DAT_14c8442f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275ea14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c844300,1);
  return;
}



// FUNCTION 14275ea23 FUN_14275ea23 body=69 status=ok
// SIG undefined FUN_14275ea23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275ea23(void)

{
  _DAT_14c8443c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275ea65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8443c8,1);
  return;
}



// FUNCTION 14275ea68 FUN_14275ea68 body=69 status=ok
// SIG undefined FUN_14275ea68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275ea68(void)

{
  _DAT_14c8443d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275eaaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8443e0,1);
  return;
}



// FUNCTION 14275eaad FUN_14275eaad body=69 status=ok
// SIG undefined FUN_14275eaad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275eaad(void)

{
  _DAT_14c8443f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275eaef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8443f8,1);
  return;
}



// FUNCTION 14275eb3a FUN_14275eb3a body=222 status=ok
// SIG undefined FUN_14275eb3a(void)

void FUN_14275eb3a(void)

{
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0 [224];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844af0) {
    FUN_144b3d300(&DAT_14c844af0);
    if (DAT_14c844af0 == -1) {
      local_f8 = 0;
      FUN_1412ae150(&DAT_14c844a10,"en-US-POSIX",0,0);
      if (DAT_14c844ae8 != '\0') {
        FUN_1424a3c00(local_f0);
        FUN_1424a3e60(&DAT_14c844a10,local_f0);
        FUN_1414b3f60(local_f0);
      }
      atexit((_func_5014 *)&LAB_142761450);
      _Init_thread_footer(&DAT_14c844af0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275ec1a FUN_14275ec1a body=90 status=ok
// SIG undefined FUN_14275ec1a(void)

void FUN_14275ec1a(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (int)param_1[1] - 1;
  if ((int)param_1[1] == 0) {
    uVar2 = 0;
  }
  if (2 < (int)uVar2) {
    lVar1 = *param_1;
    uVar3 = (ulonglong)uVar2;
    if ((((ushort)((*(ushort *)(lVar1 + -2 + uVar3 * 2) & 0xffdf) - 0x41) < 0x1a) &&
        ((ushort)((*(ushort *)(lVar1 + -4 + uVar3 * 2) & 0xffdf) - 0x41) < 0x1a)) &&
       ((ushort)((*(ushort *)(lVar1 + -6 + uVar3 * 2) & 0xffdf) - 0x41) < 0x1a)) {
      FUN_140002184(param_1,CONCAT62((uint6)(ushort)(uVar2 >> 0x10),0xa0));
      return;
    }
  }
  return;
}



// FUNCTION 14275ec74 FUN_14275ec74 body=76 status=ok
// SIG undefined FUN_14275ec74(void)

void FUN_14275ec74(undefined8 *param_1)

{
  ushort *puVar1;
  
  if ((((*(int *)(param_1 + 1) - 4U < 0x7ffffffd) &&
       (puVar1 = (ushort *)*param_1, (ushort)((*puVar1 & 0xffdf) - 0x41) < 0x1a)) &&
      ((ushort)((puVar1[1] & 0xffdf) - 0x41) < 0x1a)) &&
     ((ushort)((puVar1[2] & 0xffdf) - 0x41) < 0x1a)) {
    FUN_1467aca2a(param_1,0,0xa0);
    return;
  }
  return;
}



// FUNCTION 14275ece0 FUN_14275ece0 body=730 status=ok
// SIG undefined FUN_14275ece0(void)

void FUN_14275ece0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x248));
  plVar1 = (longlong *)(param_1 + 0x1f8);
  iVar5 = (int)param_2[1];
  uVar9 = 0;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar5 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    lVar11 = 0;
    uVar9 = 0;
    do {
      uVar10 = ((uint)(0x19 < (ushort)puVar7[lVar11] - 0x61) * 0x20 + (uint)(ushort)puVar7[lVar11])
               - 0x20;
      uVar12 = (uint)(uVar9 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar10) & 0xff) * 4);
      uVar9 = (ulonglong)
              (uVar12 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
      lVar11 = lVar11 + 1;
    } while (iVar6 != (int)lVar11);
  }
  iVar5 = FUN_1427617de(plVar1,uVar9,param_2);
  if (iVar5 == -1) {
    lVar11 = 0;
  }
  else {
    lVar11 = (longlong)iVar5 * 0x28 + *plVar1;
  }
  piVar8 = (int *)(lVar11 + 0x10);
  if (lVar11 == 0) {
    piVar8 = (int *)0x0;
  }
  *piVar8 = *piVar8 + -1;
  if ((*piVar8 == 0) && (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x22c))) {
    iVar5 = (int)param_2[1];
    uVar10 = 0;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      if (iVar5 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)*param_2;
      }
      lVar11 = 0;
      do {
        uVar12 = ((uint)(ushort)puVar7[lVar11] + (uint)(0x19 < (ushort)puVar7[lVar11] - 0x61) * 0x20
                 ) - 0x20;
        uVar10 = uVar10 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar10 ^ uVar12) & 0xff) * 4)
        ;
        uVar10 = uVar10 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar12 >> 8 & 0xff) * 4);
        lVar11 = lVar11 + 1;
      } while (iVar6 != (int)lVar11);
    }
    lVar11 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x238);
    }
    iVar6 = *(int *)(lVar11 + ((longlong)(int)uVar10 & (longlong)*(int *)(param_1 + 0x240) - 1U) * 4
                    );
    if (iVar6 != -1) {
LAB_14275eead:
      plVar2 = (longlong *)(*plVar1 + (longlong)iVar6 * 0x28);
      if ((int)plVar2[1] != iVar5) {
        if ((int)plVar2[1] + iVar5 == 1) goto LAB_14275ef29;
        goto LAB_14275ef14;
      }
      if (1 < iVar5) {
        lVar13 = 0;
        do {
          uVar3 = *(ushort *)(*plVar2 + lVar13);
          uVar4 = *(ushort *)(*param_2 + lVar13);
          if (uVar3 == uVar4) {
            if (uVar3 == 0) break;
          }
          else {
            if (0x7f < (uVar4 | uVar3)) {
              iVar14 = (uint)uVar3 - (uint)uVar4;
              goto LAB_14275ef06;
            }
            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) goto code_r0x00014275ef03;
          }
          lVar13 = lVar13 + 2;
        } while( true );
      }
      goto LAB_14275ef29;
    }
  }
  goto LAB_14275ef70;
code_r0x00014275ef03:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_14275ef06:
  if (iVar14 != 0) {
LAB_14275ef14:
    iVar6 = (int)plVar2[4];
    if (iVar6 == -1) goto LAB_14275ef70;
    goto LAB_14275eead;
  }
LAB_14275ef29:
  iVar5 = *(int *)(lVar11 + (longlong)*(int *)((longlong)plVar2 + 0x24) * 4);
  if (iVar5 == iVar6) {
    piVar8 = (int *)(lVar11 + (longlong)*(int *)((longlong)plVar2 + 0x24) * 4);
  }
  else {
    do {
      piVar8 = (int *)(*plVar1 + (longlong)iVar5 * 0x28 + 0x20);
      iVar5 = *piVar8;
    } while (iVar5 != iVar6);
  }
  *piVar8 = (int)plVar2[4];
  plVar2 = (longlong *)(*plVar1 + (longlong)iVar6 * 0x28);
  if (plVar2[3] != 0) {
    FUN_1400020a8();
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
  FUN_1427618a6(plVar1,iVar6);
LAB_14275ef70:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014275ef98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x248));
  return;
}



// FUNCTION 14275efba FUN_14275efba body=2305 status=ok
// SIG undefined FUN_14275efba(void)

ulonglong FUN_14275efba(longlong param_1,undefined8 *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  size_t sVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  undefined2 *puVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  ushort uVar31;
  ushort uVar32;
  uint uVar33;
  int iVar34;
  int *piVar35;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  undefined8 local_188;
  LPCRITICAL_SECTION local_180;
  undefined8 *local_178;
  undefined2 *local_170;
  int local_168;
  undefined1 local_160 [256];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_60 = (undefined1 *)0x0;
  if (param_4 == (char *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
  }
  else {
    sVar12 = strlen(param_4);
    iVar18 = (int)sVar12;
    uVar26 = iVar18 + 1;
    local_50 = iVar18;
    if (uVar26 < 0x81) {
      puVar23 = (undefined1 *)0x0;
    }
    else {
      FUN_1446efa72(&local_60,0,uVar26,2);
      puVar23 = local_60;
    }
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = local_160;
    }
    local_58 = puVar23;
    if (-1 < iVar18) {
      uVar20 = 0;
      do {
        *(short *)(puVar23 + uVar20 * 2) = (short)param_4[uVar20];
        uVar20 = uVar20 + 1;
      } while (uVar26 != uVar20);
    }
  }
  FUN_140056680(&local_170,local_58);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1448097c4(&local_170,&DAT_149e01f64,&DAT_149e065c6,0);
  iVar18 = *(int *)(param_1 + 0x20);
  uVar26 = iVar18 - 1;
  if (iVar18 == 0) {
    uVar26 = 0;
  }
  if ((int)uVar26 < 1) {
LAB_14275f114:
    uVar20 = 0;
    *param_2 = 0;
    *param_3 = 0;
    goto LAB_14275f582;
  }
  puVar21 = &DAT_149dfb77a;
  if (iVar18 != 0) {
    puVar21 = *(undefined2 **)(param_1 + 0x18);
  }
  uVar20 = (ulonglong)uVar26;
  puVar13 = &DAT_149dfb77a;
  if (local_168 != 0) {
    puVar13 = local_170;
  }
  lVar29 = 0;
  while( true ) {
    uVar31 = *(ushort *)((longlong)puVar13 + lVar29);
    uVar22 = (ulonglong)uVar31;
    uVar32 = *(ushort *)((longlong)puVar21 + lVar29);
    if (uVar31 != uVar32) break;
    if (uVar31 == 0) goto LAB_14275f122;
LAB_14275f0e4:
    uVar20 = uVar20 - 1;
    if (uVar20 == 0) goto LAB_14275f122;
    lVar29 = lVar29 + 2;
  }
  if ((uVar32 | uVar31) < 0x80) {
    uVar31 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
    uVar25 = (ulonglong)uVar32;
    uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
    if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar25]) goto LAB_14275f0e4;
  }
  if (uVar31 != uVar32) goto LAB_14275f114;
LAB_14275f122:
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x248);
  EnterCriticalSection(lpCriticalSection);
  plVar27 = (longlong *)(param_1 + 0x1f8);
  uVar20 = 0;
  iVar18 = local_168 + -1;
  if (local_168 == 0) {
    iVar18 = 0;
  }
  if (0 < iVar18) {
    puVar21 = local_170;
    if (local_168 == 0) {
      puVar21 = &DAT_149dfb77a;
    }
    lVar29 = 0;
    uVar20 = 0;
    do {
      uVar26 = ((uint)(0x19 < (ushort)puVar21[lVar29] - 0x61) * 0x20 + (uint)(ushort)puVar21[lVar29]
               ) - 0x20;
      uVar33 = (uint)(uVar20 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar20 ^ uVar26) & 0xff) * 4);
      uVar20 = (ulonglong)
               (uVar33 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar33 & 0xff ^ uVar26 >> 8 & 0xff) * 4));
      lVar29 = lVar29 + 1;
    } while (iVar18 != (int)lVar29);
  }
  iVar18 = FUN_1427617de(plVar27,uVar20,&local_170);
  if (iVar18 == -1) {
LAB_14275f1eb:
    plVar14 = (longlong *)FUN_14054d1d4();
    puVar21 = local_170;
    if (local_168 == 0) {
      puVar21 = &DAT_149dfb77a;
    }
    plVar14 = (longlong *)(**(code **)(*plVar14 + 0x18))(plVar14,puVar21,0);
    if (plVar14 != (longlong *)0x0) {
      local_180 = lpCriticalSection;
      local_188 = (**(code **)(*plVar14 + 0x30))(plVar14);
      uVar15 = FUN_14001cc68(local_188,0);
      local_198 = plVar27;
      local_190 = plVar14;
      local_178 = param_3;
      if (*(int *)(param_1 + 0x22c) == 0) {
        iVar18 = *(int *)(param_1 + 0x200);
        *(int *)(param_1 + 0x200) = iVar18 + 1;
        if (*(int *)(param_1 + 0x204) == iVar18) {
          FUN_140549c28(plVar27,iVar18);
        }
        iVar34 = *(int *)(param_1 + 0x220);
        if (iVar34 == 0) {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar34 + 0x1e;
          if (-1 < iVar34 + -1) {
            iVar9 = iVar34 + -1;
          }
          iVar9 = iVar9 >> 5;
        }
        lVar24 = param_1 + 0x208;
        iVar19 = iVar34 + 1;
        iVar28 = iVar34 + 0x1f;
        if (-1 < iVar34) {
          iVar28 = iVar34;
        }
        if (iVar28 >> 5 == iVar9) {
          *(int *)(param_1 + 0x220) = iVar19;
        }
        else {
          if (*(int *)(param_1 + 0x224) <= iVar34) {
            iVar9 = iVar34;
            if (iVar34 + 0x20U < 0xa0) {
              iVar19 = 0x80;
            }
            else {
              uVar26 = iVar34 + 0x20U >> 5;
              if (*(int *)(param_1 + 0x224) + 0x1fU < 0xa0) {
                uVar33 = 4;
                if (4 < uVar26) {
                  uVar33 = uVar26;
                }
              }
              else {
                uVar33 = uVar26 + (uVar26 * 3 >> 3) + 0x10;
              }
              uVar20 = (ulonglong)(uVar33 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar10 = (uint)(uVar20 + 0xf);
                  if (uVar33 < 0x1ffd) {
                    uVar20 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar20 + 0xf >> 4]];
                  }
                  else {
                    uVar22 = (ulonglong)(uVar10 & 0xfffffff0);
                    if (uVar22 < 0x7ff1) {
                      bVar17 = (&DAT_14c841e00)[uVar10 >> 4];
                      uVar25 = 0x32;
                      if (0x32 < bVar17) {
                        uVar25 = (ulonglong)bVar17;
                      }
                      uVar30 = 0x32 - (ulonglong)bVar17;
                      do {
                        uVar20 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar30 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar30 & 0xffffffff] & 0xf) == 0) goto LAB_14275f6d7;
                        lVar29 = uVar25 + 1 + uVar30;
                        uVar30 = uVar30 - 1;
                      } while (lVar29 != 0x33);
                    }
                    uVar20 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar20 = (ulonglong)DAT_14c841df8;
                    }
                    uVar20 = -uVar20 & (uVar22 + uVar20) - 1;
                  }
                }
                else {
                  uVar20 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar20,0);
                  iVar9 = *(int *)(param_1 + 0x220);
                }
              }
LAB_14275f6d7:
              iVar11 = (int)(uVar20 >> 2);
              iVar19 = -0x20;
              if ((int)uVar26 <= iVar11) {
                iVar19 = iVar11 << 5;
              }
            }
            *(int *)(param_1 + 0x224) = iVar19;
            FUN_1446efbd8(lVar24,iVar9);
            iVar19 = *(int *)(param_1 + 0x220) + 1;
          }
          iVar9 = iVar19 + 0x1f;
          if (-1 < iVar19) {
            iVar9 = iVar19;
          }
          *(int *)(param_1 + 0x220) = iVar19;
          if (iVar19 % 0x20 != 0) {
            lVar29 = *(longlong *)(param_1 + 0x218);
            if (*(longlong *)(param_1 + 0x218) == 0) {
              lVar29 = lVar24;
            }
            bVar17 = -(char)(iVar19 % 0x20);
            *(uint *)(lVar29 + (longlong)(iVar9 >> 5) * 4) =
                 (uint)(*(int *)(lVar29 + (longlong)(iVar9 >> 5) * 4) << (bVar17 & 0x1f)) >>
                 (bVar17 & 0x1f);
          }
        }
        lVar29 = (longlong)iVar18;
        if (*(longlong *)(param_1 + 0x218) != 0) {
          lVar24 = *(longlong *)(param_1 + 0x218);
        }
        bVar17 = (byte)iVar34 & 0x1f;
        puVar1 = (uint *)(lVar24 + (longlong)(iVar28 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
      }
      else {
        iVar18 = *(int *)(param_1 + 0x228);
        lVar29 = (longlong)iVar18;
        iVar34 = *(int *)(*(longlong *)(param_1 + 0x1f8) + 4 + lVar29 * 0x28);
        *(int *)(param_1 + 0x228) = iVar34;
        iVar9 = *(int *)(param_1 + 0x22c) + -1;
        *(int *)(param_1 + 0x22c) = iVar9;
        if (iVar9 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar34 * 0x28) = 0xffffffff;
        }
      }
      puVar21 = local_170;
      lVar24 = param_1 + 0x208;
      if (*(longlong *)(param_1 + 0x218) != 0) {
        lVar24 = *(longlong *)(param_1 + 0x218);
      }
      iVar34 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar34 = iVar18;
      }
      puVar1 = (uint *)(lVar24 + (longlong)(iVar34 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
      puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x1f8) + lVar29 * 0x28);
      *puVar16 = 0;
      lVar29 = (longlong)local_168;
      *(int *)(puVar16 + 1) = local_168;
      if (lVar29 == 0) {
        *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
        iVar34 = 0;
      }
      else {
        FUN_1446dd670(puVar16,local_168,0);
        memcpy((void *)*puVar16,puVar21,lVar29 * 2);
        iVar34 = *(int *)(puVar16 + 1);
      }
      uVar26 = 0;
      *(undefined4 *)(puVar16 + 2) = 0;
      puVar16[3] = uVar15;
      *(undefined4 *)(puVar16 + 4) = 0xffffffff;
      iVar9 = iVar34 + -1;
      if (iVar34 == 0) {
        iVar9 = 0;
      }
      if (0 < iVar9) {
        if (iVar34 == 0) {
          puVar21 = &DAT_149dfb77a;
        }
        else {
          puVar21 = (undefined2 *)*puVar16;
        }
        lVar29 = 0;
        uVar26 = 0;
        do {
          uVar33 = ((uint)(0x19 < (ushort)puVar21[lVar29] - 0x61) * 0x20 +
                   (uint)(ushort)puVar21[lVar29]) - 0x20;
          uVar26 = uVar26 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar26 ^ uVar33) & 0xff) * 4);
          uVar26 = uVar26 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar26 & 0xff ^ uVar33 >> 8 & 0xff) * 4);
          lVar29 = lVar29 + 1;
        } while (iVar9 != (int)lVar29);
      }
      uVar33 = *(int *)(param_1 + 0x200) - *(int *)(param_1 + 0x22c);
      iVar34 = 1;
      if (uVar33 == 1) {
LAB_14275f450:
        plVar14 = local_190;
        plVar27 = local_198;
        iVar9 = iVar18;
        if (((int)uVar33 < 1) || (iVar34 <= *(int *)(param_1 + 0x240))) {
          uVar26 = *(int *)(param_1 + 0x240) - 1U & uVar26;
          *(uint *)((longlong)puVar16 + 0x24) = uVar26;
          lVar29 = *(longlong *)(param_1 + 0x238);
          if (*(longlong *)(param_1 + 0x238) == 0) {
            lVar29 = param_1 + 0x230;
          }
          *(undefined4 *)(puVar16 + 4) =
               *(undefined4 *)
                (lVar29 + ((longlong)*(int *)(param_1 + 0x240) - 1U & (longlong)(int)uVar26) * 4);
          lVar29 = *(longlong *)(param_1 + 0x238);
          if (*(longlong *)(param_1 + 0x238) == 0) {
            lVar29 = param_1 + 0x230;
          }
          *(int *)(lVar29 + ((longlong)*(int *)(param_1 + 0x240) - 1U & (longlong)(int)uVar26) * 4)
               = iVar18;
        }
        else {
          *(int *)(param_1 + 0x240) = iVar34;
          FUN_14164bdec(local_198);
        }
      }
      else {
        iVar9 = FUN_1427617de(local_198,uVar26,puVar16);
        if (iVar9 == -1) {
          if (3 < uVar33) {
            uVar20 = (ulonglong)(uVar33 & 0xfffffffe) + 0xf;
            lVar29 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            iVar34 = 1 << ((byte)lVar29 & 0x1f);
          }
          goto LAB_14275f450;
        }
        plVar14 = (longlong *)(*local_198 + (longlong)iVar9 * 0x28);
        if (plVar14[3] != 0) {
          FUN_1400020a8();
        }
        if (*plVar14 != 0) {
          FUN_1400020a8();
        }
        plVar27 = local_198;
        uVar2 = *(undefined4 *)puVar16;
        uVar3 = *(undefined4 *)((longlong)puVar16 + 4);
        uVar4 = *(undefined4 *)(puVar16 + 1);
        uVar5 = *(undefined4 *)((longlong)puVar16 + 0xc);
        uVar6 = *(undefined4 *)((longlong)puVar16 + 0x14);
        uVar7 = *(undefined4 *)(puVar16 + 3);
        uVar8 = *(undefined4 *)((longlong)puVar16 + 0x1c);
        *(undefined4 *)(plVar14 + 2) = *(undefined4 *)(puVar16 + 2);
        *(undefined4 *)((longlong)plVar14 + 0x14) = uVar6;
        *(undefined4 *)(plVar14 + 3) = uVar7;
        *(undefined4 *)((longlong)plVar14 + 0x1c) = uVar8;
        *(undefined4 *)plVar14 = uVar2;
        *(undefined4 *)((longlong)plVar14 + 4) = uVar3;
        *(undefined4 *)(plVar14 + 1) = uVar4;
        *(undefined4 *)((longlong)plVar14 + 0xc) = uVar5;
        FUN_1427618a6(local_198,iVar18);
        plVar14 = local_190;
      }
      lVar29 = *plVar27 + (longlong)iVar9 * 0x28;
      (**(code **)(*plVar14 + 0x170))(plVar14,*(undefined8 *)(lVar29 + 0x18),local_188);
      (**(code **)*plVar14)(plVar14,1);
      piVar35 = (int *)(lVar29 + 0x10);
      lpCriticalSection = local_180;
      param_3 = local_178;
      if (piVar35 != (int *)0x0) goto LAB_14275f509;
    }
    *param_2 = 0;
    uVar15 = 0;
    uVar20 = 0;
  }
  else {
    if (*plVar27 + (longlong)iVar18 * 0x28 == 0) goto LAB_14275f1eb;
    piVar35 = (int *)(*plVar27 + (longlong)iVar18 * 0x28 + 0x10);
LAB_14275f509:
    *piVar35 = *piVar35 + 1;
    puVar16 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    puVar21 = local_170;
    *puVar16 = 0;
    *(int *)(puVar16 + 1) = local_168;
    if ((longlong)local_168 == 0) {
      *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar16,local_168,0);
      memcpy((void *)*puVar16,puVar21,(longlong)local_168 * 2);
    }
    *param_2 = puVar16;
    uVar15 = *(undefined8 *)(piVar35 + 2);
    uVar20 = CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
  }
  *param_3 = uVar15;
  LeaveCriticalSection(lpCriticalSection);
LAB_14275f582:
  if (local_170 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 14275f8bc FUN_14275f8bc body=69 status=ok
// SIG undefined FUN_14275f8bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275f8bc(void)

{
  _DAT_14c8445b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014275f8fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8445c0,1);
  return;
}



// FUNCTION 14275f901 FUN_14275f901 body=169 status=ok
// SIG undefined FUN_14275f901(void)

undefined1 FUN_14275f901(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  uVar1 = *(ushort *)(param_2 + 8);
  if ((short)uVar1 < 0) {
    uVar3 = *(uint *)(param_2 + 0xc);
  }
  else {
    uVar3 = (uint)(uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      param_2 = *(longlong *)(param_2 + 0x18);
    }
    else {
      param_2 = param_2 + 10;
    }
  }
  else {
    param_2 = 0;
  }
  local_30 = &local_24;
  local_38 = 0;
  uVar4 = 0;
  FUN_1424db570(param_1,param_2,uVar3,0);
  if (local_24 < 1) {
    iVar2 = FUN_1424de330(param_1);
    uVar4 = iVar2 == 1;
    if (iVar2 == 2) {
      uVar4 = 2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14275f9ab FUN_14275f9ab body=889 status=ok
// SIG undefined FUN_14275f9ab(void)

void FUN_14275f9ab(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined **ppuVar9;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(*param_1 + 8);
  bVar3 = *(byte *)(plVar8 + 5);
  local_30 = 0;
  if ((bVar3 & 1) == 0) {
    local_30 = (**(code **)(*(longlong *)*param_2 + 0x38))();
    plVar8 = *(longlong **)(*param_1 + 8);
  }
  puVar4 = (ulonglong *)plVar8[1];
  puVar1 = (undefined4 *)*puVar4 + 1;
  if ((undefined4 *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)plVar8 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar8 + 0x170))(plVar8,&local_30,4);
    }
    else {
      FUN_14572512c(plVar8,&local_30);
    }
  }
  else {
    local_30 = *(undefined4 *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  switch(local_30) {
  case 1:
    if ((bVar3 & 1) == 0) {
      plVar8 = *(longlong **)(*param_1 + 8);
      puVar4 = (ulonglong *)plVar8[1];
      if (puVar4[1] < *puVar4 + 4) {
        local_2c = (uint)*(byte *)(*param_2 + 8);
        (**(code **)(*plVar8 + 0x170))(plVar8,&local_2c,4);
        if (1 < local_2c) {
          FUN_14572541c(plVar8);
        }
      }
      else {
        *puVar4 = *puVar4 + 4;
      }
      goto switchD_14275fa25_default;
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar7 = &PTR_FUN_149e17d10;
    plVar8 = *(longlong **)(*param_1 + 8);
    puVar4 = (ulonglong *)plVar8[1];
    piVar2 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar2) {
      local_2c = 0;
      (**(code **)(*plVar8 + 0x170))(plVar8,&local_2c,4);
      if (1 < local_2c) {
        FUN_14572541c(plVar8);
      }
      *(bool *)(puVar7 + 1) = local_2c != 0;
    }
    else {
      *(bool *)(puVar7 + 1) = *(int *)*puVar4 != 0;
      *puVar4 = (ulonglong)piVar2;
    }
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    ppuVar9 = &PTR_LAB_149e19010;
    break;
  case 2:
    if ((bVar3 & 1) == 0) {
      FUN_1467cb890(*param_2,param_1);
      goto switchD_14275fa25_default;
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar7 = &PTR_FUN_149e17cb0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    FUN_14021219d(*(undefined8 *)(*param_1 + 8),puVar7 + 1);
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    ppuVar9 = &PTR_LAB_149e18ff0;
    break;
  case 3:
    if ((bVar3 & 1) == 0) {
      FUN_1467cc102(*param_2,param_1);
      goto switchD_14275fa25_default;
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    FUN_1467cbfe6(puVar7,param_1);
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    ppuVar9 = &PTR_LAB_149e19030;
    break;
  case 4:
    if ((bVar3 & 1) == 0) {
      FUN_1467cb4a8(param_1,*(undefined8 *)(*param_2 + 8));
      goto switchD_14275fa25_default;
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    FUN_1467cc2fa(puVar7,param_1);
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    ppuVar9 = &PTR_FUN_149e19050;
    break;
  default:
    goto switchD_14275fa25_default;
  }
  *plVar8 = (longlong)ppuVar9;
  plVar8[2] = (longlong)puVar7;
  *param_2 = (longlong)puVar7;
  plVar5 = (longlong *)param_2[1];
  if (plVar8 == plVar5) {
    if (plVar8 == (longlong *)0x0) goto switchD_14275fa25_default;
    LOCK();
    plVar5 = plVar8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto switchD_14275fa25_default;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto switchD_14275fa25_default;
    lVar6 = *plVar8;
  }
  else {
    param_2[1] = (longlong)plVar8;
    if (plVar5 == (longlong *)0x0) goto switchD_14275fa25_default;
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto switchD_14275fa25_default;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto switchD_14275fa25_default;
    lVar6 = *plVar5;
    plVar8 = plVar5;
  }
  (**(code **)(lVar6 + 0x10))(plVar8);
switchD_14275fa25_default:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14275fd25 FUN_14275fd25 body=49 status=ok
// SIG undefined FUN_14275fd25(void)

void FUN_14275fd25(void)

{
  FUN_14276146f(DAT_14c8445e0,DAT_14c8445e8);
  if (DAT_14c8445e0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14275fd56 FUN_14275fd56 body=49 status=ok
// SIG undefined FUN_14275fd56(void)

void FUN_14275fd56(void)

{
  FUN_14276146f(DAT_14c8445f8,DAT_14c844600);
  if (DAT_14c8445f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14275fdaa FUN_14275fdaa body=1244 status=ok
// SIG undefined FUN_14275fdaa(void)

void FUN_14275fdaa(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  uint uVar1;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  int iVar12;
  ushort uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  int local_7c;
  undefined2 *local_78;
  int local_70;
  int local_6c;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar8 = (longlong *)FUN_1461fd5f0();
  if (0 < (int)plVar8[1]) {
    FUN_140c50e9c(&local_58,param_4,1);
    if ((longlong)(int)plVar8[1] != 0) {
      plVar11 = (longlong *)*plVar8;
      plVar8 = plVar11 + (longlong)(int)plVar8[1] * 2;
LAB_1427601d6:
      if ((int)plVar11[1] == local_50) {
        bVar3 = true;
        if (1 < local_50) {
          lVar17 = 0;
          do {
            uVar13 = *(ushort *)(*plVar11 + lVar17);
            uVar14 = (ulonglong)uVar13;
            uVar15 = *(ushort *)((longlong)local_58 + lVar17);
            if (uVar13 == uVar15) {
              if (uVar13 == 0) break;
            }
            else {
              if (0x7f < (uVar15 | uVar13)) goto LAB_142760249;
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              uVar16 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              if ((&DAT_149e05da0)[uVar14] != (&DAT_149e05da0)[uVar16]) goto LAB_142760249;
            }
            lVar17 = lVar17 + 2;
          } while( true );
        }
      }
      else {
        if ((int)plVar11[1] + local_50 != 1) goto LAB_1427601e8;
        bVar3 = true;
      }
      goto LAB_14275fe09;
    }
    bVar3 = false;
LAB_14275fe09:
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar3) goto LAB_142760198;
  }
  iVar12 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar12 = 0;
  }
  iVar7 = *(int *)(param_2 + 1);
  iVar5 = iVar12 + 1 + (uint)((longlong)iVar7 == 0);
  local_68 = (undefined2 *)0x0;
  pvVar2 = (void *)*param_2;
  local_60 = iVar7;
  if (iVar5 == 0 && iVar7 == 0) {
    local_5c = 0;
  }
  else {
    iVar9 = iVar5 + iVar7;
    if (iVar5 < 0) goto LAB_14276025e;
    FUN_1446dd670(&local_68,iVar9,0);
    if (iVar7 != 0) {
      memcpy(local_68,pvVar2,(longlong)iVar7 * 2);
    }
  }
  FUN_1401aebe8(&local_68,*param_3,iVar12);
  iVar7 = local_5c;
  iVar12 = local_60;
  iVar5 = *(int *)(param_4 + 1) + -1;
  if (*(int *)(param_4 + 1) == 0) {
    iVar5 = 0;
  }
  iVar6 = iVar5 + 1 + (uint)(local_60 == 0);
  local_58 = local_68;
  local_68 = (undefined2 *)0x0;
  local_50 = local_60;
  local_4c = local_5c;
  local_60 = 0;
  local_5c = 0;
  iVar9 = iVar6 + iVar12;
  if (iVar9 < iVar12) {
LAB_142760265:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)iVar6);
  }
  if (-1 < iVar9) {
    if (iVar7 < iVar9) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,*param_4,iVar5);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_142764d50(param_1,&local_58,param_5);
    iVar12 = DAT_14c844618 + -1;
    if (DAT_14c844618 == 0) {
      iVar12 = 0;
    }
    uVar1 = *(uint *)(param_2 + 1);
    iVar7 = iVar12 + 1 + (uint)((longlong)(int)uVar1 == 0);
    local_98 = (undefined2 *)0x0;
    pvVar2 = (void *)*param_2;
    local_90 = CONCAT44(local_90._4_4_,uVar1);
    if (iVar7 == 0 && uVar1 == 0) {
      local_90 = (ulonglong)uVar1;
    }
    else {
      iVar9 = iVar7 + uVar1;
      if (iVar7 < 0) goto LAB_14276025e;
      FUN_1446dd670(&local_98,iVar9,0);
      if (uVar1 != 0) {
        memcpy(local_98,pvVar2,(longlong)(int)uVar1 * 2);
      }
    }
    FUN_1401aebe8(&local_98,DAT_14c844610,iVar12);
    iVar12 = DAT_14c844630 + -1;
    if (DAT_14c844630 == 0) {
      iVar12 = 0;
    }
    iVar7 = (int)local_90;
    iVar6 = iVar12 + 1 + (uint)((int)local_90 == 0);
    local_88 = local_98;
    local_98 = (undefined2 *)0x0;
    local_80 = (int)local_90;
    iVar5 = local_90._4_4_;
    local_7c = local_90._4_4_;
    local_90 = 0;
    iVar9 = iVar6 + iVar7;
    if (iVar9 < iVar7) goto LAB_142760265;
    if (-1 < iVar9) {
      if (iVar5 < iVar9) {
        FUN_1446f8c06(&local_88);
      }
      FUN_1401aebe8(&local_88,DAT_14c844628,iVar12);
      iVar7 = local_7c;
      iVar12 = local_80;
      iVar5 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar5 = 0;
      }
      iVar6 = iVar5 + 1 + (uint)(local_80 == 0);
      local_78 = local_88;
      local_88 = (undefined2 *)0x0;
      local_70 = local_80;
      local_6c = local_7c;
      local_80 = 0;
      local_7c = 0;
      iVar9 = iVar6 + iVar12;
      if (iVar9 < iVar12) goto LAB_142760265;
      if (-1 < iVar9) {
        if (iVar7 < iVar9) {
          FUN_1446f8c06(&local_78);
        }
        FUN_1401aebe8(&local_78,*param_3,iVar5);
        iVar7 = local_6c;
        iVar12 = local_70;
        iVar5 = *(int *)(param_4 + 1) + -1;
        if (*(int *)(param_4 + 1) == 0) {
          iVar5 = 0;
        }
        iVar6 = iVar5 + 1 + (uint)(local_70 == 0);
        local_68 = local_78;
        local_78 = (undefined2 *)0x0;
        local_60 = local_70;
        local_5c = local_6c;
        local_70 = 0;
        local_6c = 0;
        iVar9 = iVar6 + iVar12;
        if (iVar9 < iVar12) goto LAB_142760265;
        if (-1 < iVar9) {
          if (iVar7 < iVar9) {
            FUN_1446f8c06(&local_68);
          }
          FUN_1401aebe8(&local_68,*param_4,iVar5);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_98 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          plVar8 = (longlong *)FUN_14054d1d4();
          puVar10 = local_68;
          if (local_60 == 0) {
            puVar10 = &DAT_149dfb77a;
          }
          cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar10);
          if (cVar4 != '\0') {
            FUN_142764d50(param_1,&local_68,param_5);
          }
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
LAB_142760198:
          if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
      }
    }
  }
LAB_14276025e:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
LAB_142760249:
  if (uVar13 == uVar15) goto LAB_14275fe09;
LAB_1427601e8:
  plVar11 = plVar11 + 2;
  bVar3 = false;
  if (plVar11 == plVar8) goto LAB_14275fe09;
  goto LAB_1427601d6;
}



// FUNCTION 142760288 FUN_142760288 body=211 status=ok
// SIG undefined FUN_142760288(void)

ulonglong FUN_142760288(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      cVar2 = FUN_1467cc72c(*param_1,*param_2 + lVar5,param_3);
      if (cVar2 != '\0') {
        uVar3 = CONCAT71(uVar4,1);
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = (int)lVar6;
        }
        goto LAB_14276033e;
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x98) == '\0') {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
      lVar5 = *param_1;
    }
    uVar3 = CONCAT71(uVar4,1);
    if ((undefined8 *)(lVar5 + 0x38) != param_3) {
      iVar1 = *(int *)(lVar5 + 0x40);
      _Src = *(void **)(lVar5 + 0x38);
      *(int *)(param_3 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_3,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*param_3,_Src,(longlong)iVar1 * 2);
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
LAB_14276033e:
  return uVar3 & 0xffffffff;
}



// FUNCTION 14276035c FUN_14276035c body=128 status=ok
// SIG undefined FUN_14276035c(void)

void FUN_14276035c(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (1 < (int)param_2[1]) {
    lVar6 = 0;
    uVar3 = 0;
    do {
      uVar1 = *(ushort *)(*param_2 + lVar6 * 2);
      uVar4 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
      uVar5 = (uint)(uVar3 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar3 ^ uVar4) & 0xff) * 4);
      uVar3 = (ulonglong)
              (uVar5 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar4 >> 8 & 0xff) * 4));
      lVar6 = lVar6 + 1;
    } while ((int)param_2[1] + -1 != (int)lVar6);
    piVar2 = (int *)FUN_1467d5fec(param_1,uVar3,param_2);
    *piVar2 = *piVar2 + 1;
  }
  return;
}



// FUNCTION 1427603dc FUN_1427603dc body=164 status=ok
// SIG undefined FUN_1427603dc(void)

void FUN_1427603dc(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if (1 < (int)param_2[1]) {
    lVar5 = 0;
    uVar3 = 0;
    do {
      uVar1 = *(ushort *)(*param_2 + lVar5 * 2);
      uVar4 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
      uVar6 = (uint)(uVar3 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar3 ^ uVar4) & 0xff) * 4);
      uVar3 = (ulonglong)
              (uVar6 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar6 & 0xff ^ uVar4 >> 8 & 0xff) * 4));
      lVar5 = lVar5 + 1;
    } while ((int)param_2[1] + -1 != (int)lVar5);
    piVar2 = (int *)FUN_1467d5fec(param_1,uVar3,param_2);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1467d61de(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142760480 FUN_142760480 body=47 status=ok
// SIG undefined FUN_142760480(void)

void FUN_142760480(void)

{
  DAT_14c844688 = 0;
  if (DAT_14c844680 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&DAT_14c844640);
  return;
}



// FUNCTION 1427604af FUN_1427604af body=41 status=ok
// SIG undefined FUN_1427604af(void)

void FUN_1427604af(void)

{
  DAT_14c8446d8 = 0;
  if (DAT_14c8446d0 != 0) {
    FUN_1400020a8();
  }
  FUN_14619bb2c();
  return;
}



// FUNCTION 1427604ea FUN_1427604ea body=1184 status=ok
// SIG undefined FUN_1427604ea(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1427604ea(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined1 local_74 [4];
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar14 = 0;
  plVar6 = (longlong *)FUN_140d6a126(DAT_14c872ce0,L"Core.StringTable",0,&DAT_14c872ce8);
  if (plVar6 != (longlong *)0x0) {
    iVar5 = (int)plVar6[5];
    if (iVar5 == 0) {
      uVar21 = 1;
      iVar15 = 0;
      iVar19 = 0;
    }
    else {
      puVar10 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar10 = (uint *)(plVar6 + 2);
      }
      uVar18 = *puVar10;
      if (uVar18 == 0) {
        iVar19 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar19 = iVar5 + -1;
        }
        uVar14 = 0;
        uVar21 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar21 = uVar14;
        }
        iVar15 = 0;
        do {
          if (uVar21 == uVar14) goto LAB_14276094c;
          iVar15 = iVar15 + 0x20;
          uVar18 = puVar10[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar14 = 0;
        iVar15 = 0;
      }
      uVar21 = (ulonglong)(-uVar18 & uVar18);
      uVar3 = uVar21 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar19 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar19) {
        iVar19 = iVar5;
      }
    }
    if (iVar19 < iVar5) {
      uVar18 = 0xffffffff;
      do {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844700) &&
           (FUN_144b3d300(&DAT_14c844700), DAT_14c844700 == -1)) {
          FUN_1446f470e(&DAT_14c8446f8,L"StringTableRedirects",1);
          _Init_thread_footer(&DAT_14c844700);
        }
        lVar17 = *plVar6;
        lVar11 = (longlong)iVar19 * 0x40;
        if (*(longlong *)(lVar17 + lVar11) == DAT_14c8446f8) {
          lVar2 = lVar17 + lVar11;
          lVar20 = lVar2 + 8;
          lVar13 = (ulonglong)(*(int *)(lVar2 + 0x28) - 2U < 0x7fffffff) * 0x10;
          lVar1 = lVar13 + 8;
          local_88[1] = 0;
          local_88[0] = 0;
          local_98 = (longlong *)0x0;
          uStack_90 = 0;
          local_a8 = (longlong *)0x0;
          uStack_a0 = 0;
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(lVar13 + 0x18 + lVar17 + lVar11) != 0) {
            puVar12 = *(undefined2 **)(lVar20 + lVar1);
          }
          cVar4 = FUN_140e134ac(puVar12,L"OldStringTable=",local_88 + 1);
          iVar5 = *(int *)(lVar2 + 0x10 + lVar1);
          puVar12 = &DAT_149dfb77a;
          if (cVar4 == '\0') {
            if (iVar5 != 0) {
              puVar12 = *(undefined2 **)(lVar20 + lVar1);
            }
            cVar4 = FUN_140e134ac(puVar12,L"StringTable=",local_88 + 1);
            if (cVar4 != '\0') {
              puVar12 = &DAT_149dfb77a;
              if (*(int *)(lVar2 + 0x10 + lVar1) != 0) {
                puVar12 = *(undefined2 **)(lVar20 + lVar1);
              }
              local_c8 = 0;
              FUN_14063337c(puVar12,L"OldKey=",&local_98,1);
              puVar12 = &DAT_149dfb77a;
              if (*(int *)(lVar2 + 0x10 + lVar1) != 0) {
                puVar12 = *(undefined2 **)(lVar20 + lVar1);
              }
              local_c8 = 0;
              FUN_14063337c(puVar12,L"NewKey=",&local_a8,1);
              if ((1 < (int)uStack_90) && (1 < (int)uStack_a0)) {
                uVar7 = (uint)((ulonglong)local_88[1] >> 0x10);
                uVar16 = (uint)local_88[1] & 0xffff;
                local_b8 = FUN_1467dc6d0(((uint)local_88[1] << 0x10 | uVar16) +
                                         (int)((ulonglong)local_88[1] >> 0x20) +
                                         (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar16 >> 4),
                                         local_88 + 1);
                local_70 = local_a8;
                iVar5 = (int)uStack_a0 + -1;
                if ((int)uStack_a0 == 0) {
                  iVar5 = 0;
                }
                local_68._0_4_ = iVar5;
                FUN_1446e940c(local_b0 + 4,&local_70);
                local_70 = local_98;
                iVar5 = (int)uStack_90 + -1;
                if ((int)uStack_90 == 0) {
                  iVar5 = 0;
                }
                local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar5);
                FUN_1446e940c(local_b0,&local_70);
                local_68 = (longlong *)(local_b0 + 4);
                local_70 = (longlong *)local_b0;
                FUN_1467dce96(local_b8,local_74,&local_70);
              }
            }
          }
          else {
            if (iVar5 != 0) {
              puVar12 = *(undefined2 **)(lVar20 + lVar1);
            }
            FUN_140e134ac(puVar12,L"NewStringTable=",local_88);
            if (local_88[0] != 0) {
              local_70 = local_88 + 1;
              local_68 = local_88;
              FUN_140906722(&DAT_14c844640,local_74,&local_70,0);
            }
          }
          if (local_a8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_98 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        uVar18 = uVar18 & ~(uint)uVar21;
        puVar10 = (uint *)plVar6[4];
        if ((uint *)plVar6[4] == (uint *)0x0) {
          puVar10 = (uint *)(plVar6 + 2);
        }
        iVar5 = (int)plVar6[5];
        iVar19 = (int)uVar14;
        lVar17 = (longlong)iVar19;
        uVar7 = puVar10[lVar17] & uVar18;
        if (uVar7 == 0) {
          iVar8 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar8 = iVar5 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar19) {
            iVar9 = iVar19;
          }
          if (iVar8 <= iVar19) break;
          lVar11 = 0;
          while( true ) {
            iVar15 = iVar15 + 0x20;
            uVar7 = puVar10[lVar17 + lVar11 + 1];
            if (uVar7 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar9 - lVar17 == lVar11) goto LAB_14276094c;
          }
          uVar14 = (ulonglong)(iVar19 + (int)lVar11 + 1);
          uVar18 = 0xffffffff;
        }
        uVar21 = (ulonglong)(-uVar7 & uVar7);
        uVar3 = uVar21 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar19 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      } while (iVar19 < iVar5);
    }
  }
LAB_14276094c:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142760990 FUN_142760990 body=606 status=ok
// SIG undefined FUN_142760990(void)

void FUN_142760990(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  PSRWLOCK SRWLock;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  uVar5 = (uint)((ulonglong)param_2 >> 0x10);
  uVar6 = (uint)param_2 & 0xffff;
  uVar5 = ((uint)param_2 << 0x10 | uVar6) + (int)((ulonglong)param_2 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar6 >> 4);
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & uVar5) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x78);
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x60;
        if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x60) == param_2) {
          if ((lVar1 != 0) && ((longlong *)(lVar1 + 8) != (longlong *)0x0)) {
            if (*param_3 == -1) {
              uVar6 = 0;
            }
            else {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c845168) &&
                 (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
                FUN_1456aef72(&DAT_14c8450d0);
                DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
                atexit(FUN_142767c9e);
                _Init_thread_footer(&DAT_14c845168);
              }
              SRWLock = DAT_14c845160;
              iVar4 = *param_3;
              AcquireSRWLockShared(DAT_14c845160);
              uVar6 = *(uint *)(*(longlong *)
                                 ((longlong)SRWLock[3].Ptr + (longlong)(iVar4 / 0x555) * 8) + 0xc +
                               (longlong)(iVar4 % 0x555) * 0x18);
              ReleaseSRWLockShared(SRWLock);
            }
            if (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c)) {
              lVar2 = lVar1 + 0x40;
              if (*(longlong *)(lVar1 + 0x48) != 0) {
                lVar2 = *(longlong *)(lVar1 + 0x48);
              }
              iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0x50) - 1U & uVar6) * 4);
              if (iVar4 != -1) {
                lVar2 = *(longlong *)(lVar1 + 8);
                goto LAB_142760b33;
              }
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x58);
      } while (iVar4 != -1);
    }
  }
  goto LAB_142760b4b;
  while (iVar4 = *(int *)(lVar2 + (longlong)iVar4 * 0xc + 4), iVar4 != -1) {
LAB_142760b33:
    if (*(int *)(lVar2 + (longlong)iVar4 * 0xc) == *param_3) goto LAB_142760b6a;
  }
LAB_142760b4b:
  uVar3 = FUN_1467dd9d4((longlong *)(param_1 + 0x78),uVar5,&local_50);
  FUN_1467de14e(uVar3,local_54,param_3);
LAB_142760b6a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142760bef FUN_142760bef body=20 status=ok
// SIG undefined FUN_142760bef(void)

void FUN_142760bef(void)

{
  if (DAT_14c844840 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142760bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c844840 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142760c04 FUN_142760c04 body=8 status=ok
// SIG undefined FUN_142760c04(void)

byte FUN_142760c04(longlong param_1)

{
  return (*(byte *)(param_1 + 8) & 2) >> 1;
}



// FUNCTION 142760c0c FUN_142760c0c body=6 status=ok
// SIG undefined FUN_142760c0c(void)

byte FUN_142760c0c(longlong param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



// FUNCTION 142760c24 FUN_142760c24 body=212 status=ok
// SIG undefined FUN_142760c24(void)

undefined8 FUN_142760c24(longlong *param_1,uint *param_2,uint param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  if (3 < *param_2) {
    return 0;
  }
  lVar1 = *param_1;
  switch(*param_2) {
  case 0:
    puVar3 = (undefined8 *)param_1[1];
    uVar2 = *(undefined1 *)(lVar1 + 8);
    dVar6 = (double)(longlong)((ulonglong)param_3 * *(longlong *)(param_2 + 2));
    if (-1 < (longlong)((ulonglong)param_3 * *(longlong *)(param_2 + 2))) goto LAB_142760cde;
    break;
  case 1:
    lVar4 = (ulonglong)param_3 * *(longlong *)(param_2 + 2);
    auVar7._8_4_ = (int)((ulonglong)lVar4 >> 0x20);
    auVar7._0_8_ = lVar4;
    auVar7._12_4_ = 0x45300000;
    puVar3 = (undefined8 *)param_1[1];
    uVar2 = *(undefined1 *)(lVar1 + 8);
    dVar6 = ((double)CONCAT44(0x43300000,(int)lVar4) - 4503599627370496.0) +
            (auVar7._8_8_ - 1.9342813113834067e+25);
    goto LAB_142760cde;
  case 2:
    puVar3 = (undefined8 *)param_1[1];
    uVar2 = *(undefined1 *)(lVar1 + 8);
    dVar6 = (double)((float)(int)param_3 * (float)param_2[2]);
    if (0.0 <= (float)(int)param_3 * (float)param_2[2]) goto LAB_142760cde;
    break;
  case 3:
    puVar3 = (undefined8 *)param_1[1];
    uVar2 = *(undefined1 *)(lVar1 + 8);
    dVar5 = (double)(int)param_3 * *(double *)(param_2 + 2);
    dVar6 = -dVar5;
    if (-dVar5 <= dVar5) {
      dVar6 = dVar5;
    }
    goto LAB_142760cde;
  }
  dVar6 = -dVar6;
LAB_142760cde:
  uVar2 = (**(code **)(*(longlong *)*puVar3 + 0x98))((longlong *)*puVar3,dVar6,uVar2);
  *param_4 = uVar2;
  return 1;
}



// FUNCTION 142760d5e FUN_142760d5e body=59 status=ok
// SIG undefined FUN_142760d5e(void)

void FUN_142760d5e(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c844968;
  if (DAT_14c844968 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c844968 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142760d8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142760d99 FUN_142760d99 body=59 status=ok
// SIG undefined FUN_142760d99(void)

void FUN_142760d99(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c844980;
  if (DAT_14c844980 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c844980 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142760dc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142760dd4 FUN_142760dd4 body=49 status=ok
// SIG undefined FUN_142760dd4(void)

void FUN_142760dd4(void)

{
  FUN_145804245(DAT_14c844990,DAT_14c844998);
  if (DAT_14c844990 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142760e17 FUN_142760e17 body=843 status=ok
// SIG undefined FUN_142760e17(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142760e17(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  ulonglong auStack_90 [6];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  auStack_90[3] = 0x27d4eb2f165667c5;
  auStack_90[4] = 0x9e3779b1;
  auStack_90[1] = 0x85ebca77c2b2ae63;
  auStack_90[2] = 0x85ebca77;
  local_98 = &DAT_c2b2ae3d27d4eb4f;
  auStack_90[0] = 0x165667b19e3779f9;
  local_a8 = _DAT_149e18900;
  uVar7 = param_4 - 0x40U >> 3;
  uVar9 = uVar7 * 0x40;
  uVar6 = param_2 - 1;
  if (uVar9 <= uVar6) {
    uVar13 = 0;
    auVar15 = pmovzxdq(_DAT_149e18900,0x9e3779b19e3779b1);
    lVar14 = param_1;
    do {
      if (7 < param_4 - 0x40U) {
        lVar11 = 0;
        lVar8 = param_3;
        lVar12 = lVar14;
        do {
          lVar10 = 0;
          do {
            auVar19 = *(undefined1 (*) [16])(lVar12 + lVar10);
            auVar21 = *(undefined1 (*) [16])(lVar8 + lVar10) ^ auVar19;
            uVar20 = auVar21._4_4_;
            auVar24._4_4_ = uVar20;
            auVar24._0_4_ = uVar20;
            auVar24._8_4_ = auVar21._12_4_;
            auVar24._12_4_ = auVar21._12_4_;
            auVar18._0_8_ = auVar19._8_8_;
            auVar18._8_4_ = auVar19._0_4_;
            auVar18._12_4_ = auVar19._4_4_;
            *(ulonglong *)(local_a8 + lVar10) =
                 auVar18._0_8_ + *(longlong *)(local_a8 + lVar10) +
                 (ulonglong)uVar20 * (ulonglong)auVar21._0_4_;
            *(ulonglong *)(local_a8 + lVar10 + 8) =
                 auVar18._8_8_ + *(longlong *)(local_a8 + lVar10 + 8) +
                 (auVar24._8_8_ & 0xffffffff) * (ulonglong)auVar21._8_4_;
            lVar10 = lVar10 + 0x10;
          } while (lVar10 != 0x40);
          lVar11 = lVar11 + 1;
          lVar8 = lVar8 + 8;
          lVar12 = lVar12 + 0x40;
        } while (lVar11 != uVar7 + (uVar7 == 0));
      }
      lVar8 = 0;
      do {
        auVar19 = *(undefined1 (*) [16])(local_a8 + lVar8);
        auVar21._0_8_ = auVar19._0_8_ >> 0x2f;
        auVar21._8_8_ = auVar19._8_8_ >> 0x2f;
        auVar21 = auVar21 ^ *(undefined1 (*) [16])(param_3 + param_4 + -0x40 + lVar8) ^ auVar19;
        uVar20 = auVar21._4_4_;
        auVar19._4_4_ = uVar20;
        auVar19._0_4_ = uVar20;
        auVar19._8_4_ = auVar21._12_4_;
        auVar19._12_4_ = auVar21._12_4_;
        *(ulonglong *)(local_a8 + lVar8) =
             ((ulonglong)uVar20 * (ulonglong)auVar15._0_4_ << 0x20) +
             (ulonglong)auVar21._0_4_ * (ulonglong)auVar15._0_4_;
        *(ulonglong *)(local_a8 + lVar8 + 8) =
             ((auVar19._8_8_ & 0xffffffff) * (ulonglong)auVar15._8_4_ << 0x20) +
             (auVar21._8_8_ & 0xffffffff) * (ulonglong)auVar15._8_4_;
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != 0x40);
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + uVar9;
    } while (uVar13 < uVar6 / uVar9);
  }
  if (0x3f < uVar6 % uVar9) {
    uVar7 = 0;
    lVar14 = param_3;
    do {
      lVar12 = 0;
      lVar8 = 0;
      do {
        auVar15 = *(undefined1 (*) [16])
                   ((uVar6 / uVar9) * uVar9 + param_1 + uVar7 * 0x40 + lVar8 * 0x10);
        auVar19 = *(undefined1 (*) [16])(lVar14 + lVar12) ^ auVar15;
        uVar20 = auVar19._4_4_;
        auVar22._4_4_ = uVar20;
        auVar22._0_4_ = uVar20;
        auVar22._8_4_ = auVar19._12_4_;
        auVar22._12_4_ = auVar19._12_4_;
        auVar16._0_8_ = auVar15._8_8_;
        auVar16._8_4_ = auVar15._0_4_;
        auVar16._12_4_ = auVar15._4_4_;
        *(ulonglong *)(local_a8 + lVar12) =
             auVar16._0_8_ + *(longlong *)(local_a8 + lVar12) +
             (ulonglong)uVar20 * (ulonglong)auVar19._0_4_;
        *(ulonglong *)(local_a8 + lVar12 + 8) =
             auVar16._8_8_ + *(longlong *)(local_a8 + lVar12 + 8) +
             (auVar22._8_8_ & 0xffffffff) * (ulonglong)auVar19._8_4_;
        lVar8 = lVar8 + 1;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x40);
      uVar7 = uVar7 + 1;
      lVar14 = lVar14 + 8;
    } while (uVar7 < uVar6 % uVar9 >> 6);
  }
  lVar14 = 0;
  do {
    auVar15 = *(undefined1 (*) [16])(param_1 + param_2 + -0x40 + lVar14);
    auVar19 = *(undefined1 (*) [16])(param_4 + param_3 + -0x47 + lVar14) ^ auVar15;
    uVar20 = auVar19._4_4_;
    auVar23._4_4_ = uVar20;
    auVar23._0_4_ = uVar20;
    auVar23._8_4_ = auVar19._12_4_;
    auVar23._12_4_ = auVar19._12_4_;
    auVar17._0_8_ = auVar15._8_8_;
    auVar17._8_4_ = auVar15._0_4_;
    auVar17._12_4_ = auVar15._4_4_;
    *(ulonglong *)(local_a8 + lVar14) =
         auVar17._0_8_ + *(longlong *)(local_a8 + lVar14) +
         (ulonglong)uVar20 * (ulonglong)auVar19._0_4_;
    *(ulonglong *)(local_a8 + lVar14 + 8) =
         auVar17._8_8_ + *(longlong *)(local_a8 + lVar14 + 8) +
         (auVar23._8_8_ & 0xffffffff) * (ulonglong)auVar19._8_4_;
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x40);
  lVar14 = param_2 * -0x61c8864e7a143579;
  lVar12 = 0;
  lVar8 = 0;
  do {
    puVar1 = (ulonglong *)(param_3 + 0xb + lVar8);
    puVar2 = (ulonglong *)(param_3 + 0x1b + lVar8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *(ulonglong *)((longlong)&local_98 + lVar8) ^ *puVar2;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)((longlong)auStack_90 + lVar8) ^ puVar2[1];
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(local_a8 + lVar8) ^ *puVar1;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(local_a8 + lVar8 + 8) ^ puVar1[1];
    lVar14 = lVar14 + (SUB168(auVar3 * auVar5,8) ^ SUB168(auVar3 * auVar5,0));
    lVar12 = lVar12 + (SUB168(auVar15 * auVar4,8) ^ SUB168(auVar15 * auVar4,0));
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x40);
  uVar6 = ((ulonglong)(lVar12 + lVar14) >> 0x25 ^ lVar12 + lVar14) * 0x165667919e3779f9;
  if ((DAT_14c707940 ^ (ulonglong)auStack_d8 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6 >> 0x20 ^ uVar6;
  }
  local_b8 = param_4;
  local_b0 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142761163 FUN_142761163 body=459 status=ok
// SIG undefined FUN_142761163(void)

void FUN_142761163(longlong param_1,ulonglong *param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar3 = *param_2;
  uVar4 = param_3 - uVar3;
  uVar1 = param_5 - uVar4;
  if (param_5 < uVar4) {
    if (param_5 != 0) {
      param_6 = param_6 + uVar3 * 8;
      uVar3 = 0;
      do {
        lVar5 = 0;
        do {
          auVar8 = *(undefined1 (*) [16])(param_4 + lVar5);
          auVar10 = *(undefined1 (*) [16])(param_6 + lVar5) ^ auVar8;
          uVar12 = auVar10._4_4_;
          auVar13._4_4_ = uVar12;
          auVar13._0_4_ = uVar12;
          auVar13._8_4_ = auVar10._12_4_;
          auVar13._12_4_ = auVar10._12_4_;
          auVar7._0_8_ = auVar8._8_8_;
          auVar7._8_4_ = auVar8._0_4_;
          auVar7._12_4_ = auVar8._4_4_;
          lVar2 = ((longlong *)(param_1 + lVar5))[1];
          *(longlong *)(param_1 + lVar5) =
               auVar7._0_8_ + *(longlong *)(param_1 + lVar5) +
               (ulonglong)uVar12 * (ulonglong)auVar10._0_4_;
          ((longlong *)(param_1 + lVar5))[1] =
               auVar7._8_8_ + lVar2 + (auVar13._8_8_ & 0xffffffff) * (ulonglong)auVar10._8_4_;
          lVar5 = lVar5 + 0x10;
        } while (lVar5 != 0x40);
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 8;
        param_4 = param_4 + 0x40;
      } while (uVar3 != param_5);
      uVar3 = *param_2;
    }
    uVar1 = uVar3 + param_5;
  }
  else {
    if (param_3 != uVar3) {
      lVar5 = param_6 + uVar3 * 8;
      uVar3 = 0;
      lVar2 = param_4;
      do {
        lVar6 = 0;
        do {
          auVar8 = *(undefined1 (*) [16])(lVar2 + lVar6);
          auVar11 = *(undefined1 (*) [16])(lVar5 + lVar6) ^ auVar8;
          uVar12 = auVar11._4_4_;
          auVar14._4_4_ = uVar12;
          auVar14._0_4_ = uVar12;
          auVar14._8_4_ = auVar11._12_4_;
          auVar14._12_4_ = auVar11._12_4_;
          auVar10._0_8_ = auVar8._8_8_;
          auVar10._8_4_ = auVar8._0_4_;
          auVar10._12_4_ = auVar8._4_4_;
          in_XMM0._0_8_ =
               auVar10._0_8_ + *(longlong *)(param_1 + lVar6) +
               (ulonglong)uVar12 * (ulonglong)auVar11._0_4_;
          in_XMM0._8_8_ =
               auVar10._8_8_ + ((longlong *)(param_1 + lVar6))[1] +
               (auVar14._8_8_ & 0xffffffff) * (ulonglong)auVar11._8_4_;
          *(undefined1 (*) [16])(param_1 + lVar6) = in_XMM0;
          lVar6 = lVar6 + 0x10;
        } while (lVar6 != 0x40);
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 8;
        lVar2 = lVar2 + 0x40;
      } while (uVar3 != uVar4);
    }
    lVar5 = 0;
    auVar8 = pmovzxdq(in_XMM0,0x9e3779b19e3779b1);
    do {
      auVar10 = *(undefined1 (*) [16])(param_1 + lVar5);
      auVar11._0_8_ = auVar10._0_8_ >> 0x2f;
      auVar11._8_8_ = auVar10._8_8_ >> 0x2f;
      auVar11 = auVar11 ^ *(undefined1 (*) [16])(param_7 + param_6 + lVar5) ^ auVar10;
      uVar12 = auVar11._4_4_;
      auVar15._4_4_ = uVar12;
      auVar15._0_4_ = uVar12;
      auVar15._8_4_ = auVar11._12_4_;
      auVar15._12_4_ = auVar11._12_4_;
      *(longlong *)(param_1 + lVar5) =
           ((ulonglong)uVar12 * (ulonglong)auVar8._0_4_ << 0x20) +
           (ulonglong)auVar11._0_4_ * (ulonglong)auVar8._0_4_;
      ((longlong *)(param_1 + lVar5))[1] =
           ((auVar15._8_8_ & 0xffffffff) * (ulonglong)auVar8._8_4_ << 0x20) +
           (auVar11._8_8_ & 0xffffffff) * (ulonglong)auVar8._8_4_;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x40);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      param_4 = param_4 + uVar4 * 0x40;
      uVar3 = 0;
      do {
        lVar5 = 0;
        do {
          auVar8 = *(undefined1 (*) [16])(param_4 + lVar5);
          auVar10 = *(undefined1 (*) [16])(param_6 + lVar5) ^ auVar8;
          uVar12 = auVar10._4_4_;
          auVar16._4_4_ = uVar12;
          auVar16._0_4_ = uVar12;
          auVar16._8_4_ = auVar10._12_4_;
          auVar16._12_4_ = auVar10._12_4_;
          auVar9._0_8_ = auVar8._8_8_;
          auVar9._8_4_ = auVar8._0_4_;
          auVar9._12_4_ = auVar8._4_4_;
          lVar2 = ((longlong *)(param_1 + lVar5))[1];
          *(longlong *)(param_1 + lVar5) =
               auVar9._0_8_ + *(longlong *)(param_1 + lVar5) +
               (ulonglong)uVar12 * (ulonglong)auVar10._0_4_;
          ((longlong *)(param_1 + lVar5))[1] =
               auVar9._8_8_ + lVar2 + (auVar16._8_8_ & 0xffffffff) * (ulonglong)auVar10._8_4_;
          lVar5 = lVar5 + 0x10;
        } while (lVar5 != 0x40);
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 8;
        param_4 = param_4 + 0x40;
      } while (uVar3 < uVar1);
    }
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 14276132e FUN_14276132e body=178 status=ok
// SIG undefined FUN_14276132e(void)

void FUN_14276132e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  longlong local_e8 [25];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_108);
  }
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(&UNK_149e18848 + lVar2);
    *(longlong *)((longlong)local_e8 + lVar2) = *(longlong *)(&DAT_149e18840 + lVar2) + param_3;
    *(longlong *)((longlong)local_e8 + lVar2 + 8) = lVar1 - param_3;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xc0);
  FUN_142760e17(param_1,param_2,local_e8,0xc0);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276145c FUN_14276145c body=19 status=ok
// SIG undefined FUN_14276145c(void)

void FUN_14276145c(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14276146f FUN_14276146f body=43 status=ok
// SIG undefined FUN_14276146f(void)

void FUN_14276146f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 14276149a FUN_14276149a body=363 status=ok
// SIG undefined FUN_14276149a(void)

void FUN_14276149a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_142761530;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_142761530:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 142761605 FUN_142761605 body=46 status=ok
// SIG undefined FUN_142761605(void)

void FUN_142761605(void)

{
  longlong lVar1;
  
  lVar1 = 0x40;
  do {
    if (*(longlong *)((longlong)&DAT_14c844af0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 142761634 FUN_142761634 body=76 status=ok
// SIG undefined FUN_142761634(void)

void FUN_142761634(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142761680 FUN_142761680 body=1 status=ok
// SIG undefined FUN_142761680(void)

void FUN_142761680(void)

{
  return;
}



// FUNCTION 142761681 FUN_142761681 body=75 status=ok
// SIG undefined FUN_142761681(void)

void FUN_142761681(longlong param_1,int param_2)

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
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1427616cc FUN_1427616cc body=273 status=ok
// SIG undefined FUN_1427616cc(void)

void FUN_1427616cc(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c8442d0;
  if (param_1 <= (int)DAT_14c8442d0) {
    if (DAT_14c8442d4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14c8442d0) {
        uVar2 = DAT_14c8442d0;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c8442d0 * 3) >> 3) + (longlong)(int)DAT_14c8442d0 +
              0x10;
    }
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    DAT_14c8442d4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c8442c8,param_1,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1427617de FUN_1427617de body=199 status=ok
// SIG undefined FUN_1427617de(void)

int FUN_1427617de(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_142761824:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_142761891;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_142761891;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14276183e;
    }
  }
  return -1;
LAB_142761891:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14276183e:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_142761824;
}



// FUNCTION 1427618a6 FUN_1427618a6 body=114 status=ok
// SIG undefined FUN_1427618a6(void)

void FUN_1427618a6(longlong *param_1,int param_2)

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



// FUNCTION 142761918 FUN_142761918 body=39 status=ok
// SIG undefined FUN_142761918(void)

void FUN_142761918(void)

{
  if (DAT_14c844be0 != 0) {
    FUN_145ae8f4a();
    DAT_14c844be0 = 0;
  }
  return;
}



// FUNCTION 14276193f FUN_14276193f body=43 status=ok
// SIG undefined FUN_14276193f(void)

void FUN_14276193f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14276196a FUN_14276196a body=493 status=ok
// SIG undefined FUN_14276196a(void)

void FUN_14276196a(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x68);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 4;
LAB_14276198d:
    if (*(void **)((longlong)param_1 + 0x60) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0x60),(longlong)param_2 * 0x18);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (4 < *(uint *)((longlong)param_1 + 0x6c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar7 = lVar4 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_142761a38;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_142761a38:
    uVar7 = uVar7 / 0x18;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7fffffff;
      uVar7 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0x6c) = uVar6;
      if (uVar6 < 5) goto LAB_14276198d;
    }
    if (*(longlong *)((longlong)param_1 + 0x60) == 0) {
      FUN_1446efa72((longlong)param_1 + 0x60,0,uVar7,0x18);
      memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 0x18);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,uVar7,0x18);
  return;
}



// FUNCTION 142761b58 FUN_142761b58 body=103 status=ok
// SIG undefined FUN_142761b58(void)

undefined4 FUN_142761b58(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_1467e1cc6(param_2,local_30);
  uVar2 = (*(code *)*puVar1)(puVar1[1],local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142761bc0 FUN_142761bc0 body=39 status=ok
// SIG undefined FUN_142761bc0(void)

void FUN_142761bc0(void)

{
  if (DAT_14c844c68 != 0) {
    FUN_1459c616e();
    DAT_14c844c68 = 0;
  }
  return;
}



// FUNCTION 142761bfa FUN_142761bfa body=52 status=ok
// SIG undefined FUN_142761bfa(void)

char FUN_142761bfa(undefined8 param_1,wint_t *param_2)

{
  wint_t _C;
  char cVar1;
  int iVar2;
  
  _C = *param_2;
  cVar1 = '\x02';
  if (_C != 0x28) {
    iVar2 = iswalnum(_C);
    cVar1 = (iVar2 == 0) * '\x03';
    if (_C == 0x5f) {
      cVar1 = '\0';
    }
  }
  return cVar1;
}



// FUNCTION 142761cac FUN_142761cac body=491 status=ok
// SIG undefined FUN_142761cac(void)

longlong FUN_142761cac(longlong param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  short *psVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  int iStack_a0;
  int iStack_9c;
  undefined **local_98;
  longlong local_90;
  uint local_88;
  int local_84;
  longlong local_68;
  longlong local_60;
  char local_50;
  short *local_48;
  short *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  psVar2 = *(short **)(param_3 + 0x20);
  if (((*(short **)(param_3 + 0x10) <= psVar2) &&
      (psVar2 <= (short *)(*(longlong *)(param_3 + 0x18) + -2))) &&
     (lVar3 = *param_2, *psVar2 == *(short *)(lVar3 + 0x12))) {
    local_40 = psVar2 + 1;
    local_38 = 0;
    local_34 = (undefined4)
               ((ulonglong)((longlong)psVar2 - (longlong)*(short **)(param_3 + 0x10)) >> 1);
    local_30 = 1;
    local_b0 = &local_a8;
    local_b8 = &LAB_142761be8;
    local_a8 = lVar3;
    local_48 = psVar2;
    FUN_144a2afa0(param_3 + 0x10);
    if (((local_50 == '\x01') && (*(short **)(param_3 + 0x10) <= local_40)) &&
       ((local_40 <= (short *)(*(longlong *)(param_3 + 0x18) + -2) &&
        (*local_40 == *(short *)(lVar3 + 0x14))))) {
      local_40 = local_40 + 1;
      local_88 = (uint)((ulonglong)(local_60 - local_68) >> 1);
      if ((int)local_88 < 1) {
LAB_142761dea:
        local_84 = -1;
      }
      else {
        uVar5 = 0;
        local_84 = 0;
        do {
          uVar1 = *(ushort *)(local_68 + uVar5 * 2);
          if (9 < (ushort)(uVar1 - 0x30)) goto LAB_142761dea;
          local_84 = (uint)uVar1 + local_84 * 10 + -0x30;
          uVar5 = uVar5 + 1;
        } while ((local_88 & 0x7fffffff) != uVar5);
      }
      local_a8 = -0x62b7b29aa02610e6;
      iStack_a0 = -0x6df9aa9a;
      iStack_9c = -0x2cabdab9;
      local_98 = &PTR_FUN_149e19110;
      local_90 = local_68;
      FUN_140079082(param_3,&local_48,&local_a8);
      if (((((local_a8._4_4_ != 0 || (int)local_a8 != 0) || iStack_a0 != 0) || iStack_9c != 0) &&
          (pcVar4 = (code *)*local_98, pcVar4 != FUN_1400791ec)) &&
         ((pcVar4 != FUN_14477b052 && (pcVar4 != FUN_1400791cc)))) {
        (*pcVar4)(&local_98,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142761eb6 FUN_142761eb6 body=12 status=ok
// SIG undefined FUN_142761eb6(void)

void FUN_142761eb6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142761ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142761ec2 FUN_142761ec2 body=29 status=ok
// SIG undefined FUN_142761ec2(void)

undefined8 FUN_142761ec2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142761ee0 FUN_142761ee0 body=985 status=ok
// SIG undefined FUN_142761ee0(void)

longlong FUN_142761ee0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  ulonglong *puVar6;
  code *pcVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_178 [32];
  ulonglong *local_158;
  undefined4 *local_150;
  longlong local_148;
  longlong *local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  longlong *local_120;
  undefined1 *local_118;
  ulonglong **local_110;
  code *local_108;
  longlong *local_100;
  undefined8 local_f8;
  int local_f0;
  int iStack_ec;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  longlong local_b8 [2];
  longlong *local_a8;
  longlong local_98 [5];
  longlong local_70;
  longlong local_68;
  char local_58;
  short *local_50;
  short *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  psVar5 = *(short **)(param_3 + 0x20);
  if (((*(short **)(param_3 + 0x10) <= psVar5) &&
      (psVar5 <= (short *)(*(longlong *)(param_3 + 0x18) + -2))) &&
     (puVar6 = (ulonglong *)*param_2, *psVar5 == *(short *)((longlong)puVar6 + 0x16))) {
    local_48 = psVar5 + 1;
    local_40 = 0;
    local_3c = (undefined4)
               ((ulonglong)((longlong)psVar5 - (longlong)*(short **)(param_3 + 0x10)) >> 1);
    local_38 = 1;
    local_100 = local_b8;
    local_108 = FUN_142761bfa;
    local_50 = psVar5;
    FUN_144a2afa0(param_3 + 0x10,&local_70);
    if (((local_58 == '\x01') && (*(short **)(param_3 + 0x10) <= local_48)) &&
       ((local_48 <= (short *)(*(longlong *)(param_3 + 0x18) + -2) && (*local_48 == 0x28)))) {
      local_48 = local_48 + 1;
      FUN_145cf67fe();
      local_f8 = local_70;
      local_f0 = (int)((ulonglong)(local_68 - local_70) >> 1);
      local_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      FUN_1413f7120(local_b8);
      if (local_b8[0] != 0) {
        local_158 = &local_138;
        local_138 = local_138 & 0xffffffffffff0000;
        local_150 = &local_128;
        local_128 = 0;
        local_110 = &local_158;
        local_118 = &LAB_142761c2e;
        FUN_144a2afa0(param_3 + 0x10,&local_f8,&local_118,&local_50);
        if ((((char)uStack_e0 == '\0') || (local_48 < *(short **)(param_3 + 0x10))) ||
           (((short *)(*(longlong *)(param_3 + 0x18) + -2) < local_48 || (*local_48 != 0x29)))) {
          *(undefined1 *)(param_1 + 0x10) = 0;
        }
        else {
          local_48 = local_48 + 1;
          local_130 = puVar6[1];
          if (local_130 == 0) {
LAB_14276226c:
            local_130 = 0;
          }
          else {
            iVar9 = *(int *)(local_130 + 8);
            do {
              if (iVar9 == 0) goto LAB_14276226c;
              LOCK();
              iVar4 = *(int *)(local_130 + 8);
              bVar10 = iVar9 == iVar4;
              if (bVar10) {
                *(int *)(local_130 + 8) = iVar9 + 1;
                iVar4 = iVar9;
              }
              iVar9 = iVar4;
              UNLOCK();
            } while (!bVar10);
          }
          local_138 = 0;
          if (local_130 != 0) {
            local_138 = *puVar6;
          }
          local_f0 = (int)((ulonglong)(CONCAT44(iStack_ec,local_f0) - local_f8) >> 1);
          local_e8 = (undefined8 *)0x0;
          uStack_e0 = 0;
          FUN_145810874(local_b8,&local_128,&local_f8);
          if (local_e8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          plVar2 = local_120;
          lVar8 = CONCAT44(uStack_124,local_128);
          if (lVar8 != 0) {
            if (local_120 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_120 + 1) = (int)local_120[1] + 1;
              UNLOCK();
            }
            local_158 = (ulonglong *)(local_50 + 1);
            local_150 = (undefined4 *)
                        CONCAT44(local_150._4_4_,
                                 (int)((ulonglong)((longlong)local_48 - (longlong)local_50) >> 1) +
                                 -1);
            local_140 = local_120;
            local_148 = lVar8;
            if (local_120 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_120 + 1) = (int)local_120[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = local_120 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_120)(local_120);
                LOCK();
                piVar3 = (int *)((longlong)plVar2 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            FUN_14626a308(&local_f8,&local_158);
            FUN_140079082(param_3,&local_50,&local_f8);
            if ((((((local_f8._4_4_ != 0 || (int)local_f8 != 0) || local_f0 != 0) || iStack_ec != 0)
                 && (pcVar7 = (code *)*local_e8, pcVar7 != FUN_1400791ec)) &&
                (pcVar7 != FUN_14477b052)) && (pcVar7 != FUN_1400791cc)) {
              (*pcVar7)(&local_e8,0);
            }
          }
          *(undefined1 *)(param_1 + 0x10) = 0;
          if (local_120 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_120 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_120)(local_120);
              LOCK();
              piVar3 = (int *)((longlong)local_120 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*local_120 + 0x10))(local_120);
              }
            }
          }
        }
        if (local_b8[0] != 0) {
          if (local_a8 == (longlong *)0x0) {
            local_a8 = local_98;
          }
          (**(code **)(*local_a8 + 0x10))();
        }
        goto LAB_142761fc4;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
LAB_142761fc4:
  if ((local_30 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1427622d8 FUN_1427622d8 body=12 status=ok
// SIG undefined FUN_1427622d8(void)

void FUN_1427622d8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427622e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427622e4 FUN_1427622e4 body=29 status=ok
// SIG undefined FUN_1427622e4(void)

undefined8 FUN_1427622e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142762302 FUN_142762302 body=357 status=ok
// SIG undefined FUN_142762302(void)

longlong FUN_142762302(longlong param_1,longlong *param_2,longlong param_3)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auStack_c8 [32];
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined **local_98;
  short local_90;
  short *local_68 [3];
  char local_50;
  short *local_48;
  short *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  psVar2 = *(short **)(param_3 + 0x20);
  if (((*(short **)(param_3 + 0x10) <= psVar2) &&
      (psVar2 <= (short *)(*(longlong *)(param_3 + 0x18) + -2))) &&
     (lVar3 = *param_2, *psVar2 == *(short *)(lVar3 + 0x10))) {
    local_40 = psVar2 + 1;
    local_38 = 0;
    local_34 = (undefined4)
               ((ulonglong)((longlong)psVar2 - (longlong)*(short **)(param_3 + 0x10)) >> 1);
    local_30 = 1;
    local_48 = psVar2;
    FUN_1456e5a02(param_3 + 0x10,local_68);
    if ((local_50 == '\x01') &&
       (((sVar1 = *local_68[0], *(short *)(lVar3 + 0x10) == sVar1 ||
         (*(short *)(lVar3 + 0x12) == sVar1)) ||
        ((*(short *)(lVar3 + 0x14) == sVar1 || (*(short *)(lVar3 + 0x16) == sVar1)))))) {
      local_a8 = 0x460b9845;
      iStack_a4 = -0x5556bdf4;
      iStack_a0 = -0x7eda0a3b;
      iStack_9c = -0x1ec66a21;
      local_98 = &PTR_FUN_149e19170;
      local_90 = sVar1;
      FUN_140079082(param_3,&local_48,&local_a8);
      if ((((((iStack_a4 != 0 || local_a8 != 0) || iStack_a0 != 0) || iStack_9c != 0) &&
           (pcVar4 = (code *)*local_98, pcVar4 != FUN_1400791ec)) && (pcVar4 != FUN_14477b052)) &&
         (pcVar4 != FUN_1400791cc)) {
        (*pcVar4)(&local_98,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142762486 FUN_142762486 body=12 status=ok
// SIG undefined FUN_142762486(void)

void FUN_142762486(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276248f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142762492 FUN_142762492 body=29 status=ok
// SIG undefined FUN_142762492(void)

undefined8 FUN_142762492(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427624b0 FUN_1427624b0 body=308 status=ok
// SIG undefined FUN_1427624b0(void)

longlong FUN_1427624b0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 **local_98;
  undefined1 local_89;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined **local_78;
  char local_70;
  undefined4 local_68;
  undefined1 local_48 [16];
  undefined **local_38;
  undefined1 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = *param_2;
  local_30 = 0;
  local_b0 = &local_89;
  local_89 = 1;
  local_98 = &local_b0;
  local_a0 = &LAB_142761c80;
  FUN_144a2afa0(param_3 + 0x10,&local_88,&local_a0,0);
  if (local_70 != '\0') {
    local_38 = local_78;
    lVar2 = CONCAT44(iStack_84,local_88);
    lVar3 = CONCAT44(iStack_7c,iStack_80);
    local_30 = 1;
    local_88 = 0x595a123b;
    iStack_84 = -0x6be7b6e1;
    iStack_80 = -0x4be91625;
    iStack_7c = -0x2ded87d8;
    local_78 = &PTR_FUN_149e191a0;
    local_68 = (undefined4)((ulonglong)(lVar3 - lVar2) >> 1);
    FUN_140079082(param_3,local_48,&local_88);
    if ((((((iStack_84 != 0 || local_88 != 0) || iStack_80 != 0) || iStack_7c != 0) &&
         (pcVar1 = (code *)*local_78, pcVar1 != FUN_1400791ec)) && (pcVar1 != FUN_14477b052)) &&
       (pcVar1 != FUN_1400791cc)) {
      (*pcVar1)(&local_78,0);
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142762604 FUN_142762604 body=12 status=ok
// SIG undefined FUN_142762604(void)

void FUN_142762604(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276260d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142762610 FUN_142762610 body=29 status=ok
// SIG undefined FUN_142762610(void)

undefined8 FUN_142762610(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276262e FUN_14276262e body=30 status=ok
// SIG undefined FUN_14276262e(void)

undefined8 FUN_14276262e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1467d2dce(param_1,0,param_2,param_3);
  return param_1;
}



// FUNCTION 14276264c FUN_14276264c body=30 status=ok
// SIG undefined FUN_14276264c(void)

undefined8 FUN_14276264c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1467d2dce(param_1,1,param_2,param_3);
  return param_1;
}



// FUNCTION 14276266a FUN_14276266a body=22 status=ok
// SIG undefined FUN_14276266a(void)

undefined8 FUN_14276266a(undefined8 param_1)

{
  FUN_1467d4306();
  return param_1;
}



// FUNCTION 142762680 FUN_142762680 body=22 status=ok
// SIG undefined FUN_142762680(void)

undefined8 FUN_142762680(undefined8 param_1)

{
  FUN_1467d4a96();
  return param_1;
}



// FUNCTION 142762696 FUN_142762696 body=137 status=ok
// SIG undefined FUN_142762696(void)

longlong FUN_142762696(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  wchar_t *_Str1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  wchar_t *_Str2;
  longlong lVar5;
  
  lVar3 = (longlong)(int)((longlong *)*param_1)[1];
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_2 + 1);
    _Str1 = (wchar_t *)*param_2;
    lVar5 = *(longlong *)*param_1 + 0x10;
    lVar3 = lVar3 * 0x30;
    do {
      iVar2 = *(int *)(lVar5 + -8);
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      if (iVar1 == iVar4) {
        _Str2 = L"";
        if (iVar2 != 0) {
          _Str2 = *(wchar_t **)(lVar5 + -0x10);
        }
        iVar2 = wcsncmp(_Str1,_Str2,(longlong)iVar1);
        if (iVar2 == 0) {
          return lVar5;
        }
      }
      lVar5 = lVar5 + 0x30;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 142762744 FUN_142762744 body=239 status=ok
// SIG undefined FUN_142762744(void)

undefined8 FUN_142762744(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  wchar_t *_Str1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  wchar_t *_Str2;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (longlong)*(int *)((undefined8 *)*param_1 + 1);
  uVar7 = 0;
  if (lVar4 != 0) {
    puVar6 = *(undefined8 **)*param_1;
    iVar1 = *(int *)(param_2 + 1);
    _Str1 = (wchar_t *)*param_2;
    lVar4 = lVar4 * 0x48;
    do {
      iVar3 = *(int *)(puVar6 + 1);
      iVar5 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      if (iVar1 == iVar5) {
        _Str2 = L"";
        if (iVar3 != 0) {
          _Str2 = (wchar_t *)*puVar6;
        }
        iVar3 = wcsncmp(_Str1,_Str2,(longlong)iVar1);
        if (iVar3 == 0) {
          FUN_1467d1f30(puVar6,&local_68);
          puVar2 = *(undefined4 **)param_1[1];
          *puVar2 = local_68;
          puVar2[1] = uStack_64;
          puVar2[2] = uStack_60;
          puVar2[3] = uStack_5c;
          FUN_1467df774(puVar2 + 4,local_58);
          if (local_58[0] != (longlong *)0x0) {
            (**(code **)(*local_58[0] + 0x10))();
          }
          uVar7 = *(undefined8 *)param_1[1];
          break;
        }
      }
      puVar6 = puVar6 + 9;
      lVar4 = lVar4 + -0x48;
    } while (lVar4 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142762834 FUN_142762834 body=448 status=ok
// SIG undefined FUN_142762834(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142762834(void)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_141471170(&DAT_14c8442f8,L"Core.bFastDecimalFormatLargeFloatSupport",&DAT_14c758768,
                L"True implies we perform additional processing for floating point types over 9223372036854775807 to prevent clipping to this value."
               );
  atexit(FUN_14275e9d2);
  local_37 = 1;
  local_48 = 0;
  FUN_140bd5914(&DAT_14c8443c0,L"Localization.UseLocaleSpecificDigitCharacters",&local_37,
                L"False: Locales will always use Arabic digit characters (eg, 1234), True: Locales will use the digit characters specified in their CLDR data (default)."
               );
  atexit(FUN_14275ea23);
  local_36 = 1;
  local_48 = 0;
  FUN_140bd5914(&DAT_14c8443d8,L"Localization.SpanishUsesRAENumberFormat",&local_36,
                L"False: Disabled (CLDR format), True: Enabled (RAE format, default).");
  atexit(FUN_14275ea68);
  local_35 = 1;
  local_48 = 0;
  FUN_140bd5914(&DAT_14c8443f0,L"Localization.SpanishUsesMinTwoGrouping",&local_35,
                L"False: 1234 will use a group separator, True: 1234 will not use a group separator (default)."
               );
  atexit(FUN_14275eaad);
  local_34 = 1;
  local_48 = 0;
  FUN_14078dbce(&DAT_14c8445b8,L"Localization.HangulTextWrappingMethod",&local_34,
                L"0: PerSyllable, 1: PerWord (default).");
  atexit(FUN_14275f8bc);
  _DAT_14c844660 = 0;
  _DAT_14c844668 = 0;
  DAT_14c844640 = 0;
  _DAT_14c844648 = 0;
  _DAT_14c84466c = 0xffffffff00000080;
  DAT_14c844674 = 0;
  DAT_14c844680 = 0;
  DAT_14c844688 = 0;
  atexit(FUN_142760480);
  DAT_14c8446b0 = 0;
  DAT_14c8446b8 = 0;
  DAT_14c844690 = 0;
  _DAT_14c844698 = 0;
  _DAT_14c8446bc = 0xffffffff00000080;
  DAT_14c8446c4 = 0;
  DAT_14c8446d0 = 0;
  DAT_14c8446d8 = 0;
  atexit(FUN_1427604af);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142762a74 FUN_142762a74 body=128 status=ok
// SIG undefined FUN_142762a74(void)

void FUN_142762a74(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8450c8) {
    FUN_144b3d300(&DAT_14c8450c8);
    if (DAT_14c8450c8 == -1) {
      FUN_140056680(&DAT_14c8450b8,L"EDateTimeStyle::");
      atexit((_func_5014 *)&LAB_142767c84);
      _Init_thread_footer(&DAT_14c8450c8);
    }
  }
  FUN_1467ee50b(param_1,param_2);
  return;
}



// FUNCTION 142762b49 FUN_142762b49 body=69 status=ok
// SIG undefined FUN_142762b49(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142762b49(void)

{
  _DAT_14c844e38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142762b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c844e40,1);
  return;
}



// FUNCTION 142762b8e FUN_142762b8e body=69 status=ok
// SIG undefined FUN_142762b8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142762b8e(void)

{
  _DAT_14c844e50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142762bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c844e58,1);
  return;
}



// FUNCTION 142762bd3 FUN_142762bd3 body=69 status=ok
// SIG undefined FUN_142762bd3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142762bd3(void)

{
  _DAT_14c844e60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142762c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c844e68,1);
  return;
}



// FUNCTION 142762c18 FUN_142762c18 body=69 status=ok
// SIG undefined FUN_142762c18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142762c18(void)

{
  _DAT_14c844e78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142762c5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c844e80,1);
  return;
}



// FUNCTION 142762c5d FUN_142762c5d body=1180 status=ok
// SIG undefined FUN_142762c5d(void)

void FUN_142762c5d(byte param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  bool bVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  int local_e0;
  longlong local_d8 [2];
  undefined1 local_c8;
  undefined7 uStack_c7;
  int local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  int local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  byte local_58 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = FUN_140d5712e();
  local_58[0] = param_1;
  local_50 = local_f0;
  FUN_140056680(&local_68,&DAT_149e19e7a);
  if ((param_1 & 4) != 0) {
    lVar5 = FUN_14588dcbc();
    local_78 = 0;
    uStack_70 = 0;
    iVar1 = *(int *)(lVar5 + 0x140);
    if ((longlong)iVar1 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x138);
      lVar7 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar7);
        cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0,&local_78);
        if (cVar4 != '\0') break;
        bVar13 = (longlong)iVar1 * 0x10 + -0x10 != lVar7;
        lVar7 = lVar7 + 0x10;
      } while (bVar13);
      if ((int)uStack_70 < 2) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        local_68 = local_78;
        local_5c = uStack_70._4_4_;
        local_60 = (int)uStack_70;
      }
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 5;
  FUN_146014afa(&local_a8);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_78 = CONCAT44(uStack_a4,local_a8);
  local_c8 = 5;
  FUN_14626a4ab();
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  local_88 = CONCAT44(uStack_a4,local_a8);
  FUN_145d45456(&local_a8,local_b8);
  FUN_14626a556(&local_98,&local_a8);
  FUN_140958ed1(CONCAT44(uStack_a4,local_a8),iStack_a0);
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  local_f8 = 1;
  FUN_1427630fa(local_58,&local_a8,&local_78,&local_68);
  local_f8 = 0;
  FUN_1427630fa(local_58,&local_b8,&local_88,&local_a8);
  uVar3 = local_f0;
  if (iStack_a0 == local_b0) {
    if (1 < iStack_a0) {
      lVar5 = 0;
      while( true ) {
        uVar10 = *(ushort *)(CONCAT44(uStack_a4,local_a8) + lVar5);
        uVar6 = (ulonglong)uVar10;
        uVar12 = *(ushort *)(CONCAT71(uStack_b7,local_b8) + lVar5);
        if (uVar10 != uVar12) break;
        if (uVar10 == 0) goto LAB_142762f08;
LAB_142762eb4:
        lVar5 = lVar5 + 2;
      }
      if ((uVar12 | uVar10) < 0x80) {
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar11 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar11]) goto LAB_142762eb4;
      }
      if (uVar10 != uVar12) goto LAB_142762ee0;
    }
  }
  else if (local_b0 + iStack_a0 != 1) {
LAB_142762ee0:
    FUN_1467ca0f8(local_f0,&local_a8);
    FUN_1467ca202(uVar3,&local_b8);
    goto LAB_142762f17;
  }
LAB_142762f08:
  FUN_14611b2e6(local_f0,&local_a8);
LAB_142762f17:
  if ((longlong)(int)uStack_90 != 0) {
    lVar5 = local_98 + (longlong)(int)uStack_90 * 0x18;
    lVar7 = local_98;
    do {
      FUN_1400021e4(lVar7,&local_e8);
      puVar8 = &DAT_149dfb77a;
      if (local_e0 != 0) {
        puVar8 = local_e8;
      }
      FUN_140002266(local_d8,L"\'%s\' asset group",puVar8);
      local_f8 = 0;
      FUN_1427630fa(local_58,&local_c8,lVar7 + 8,&local_a8);
      if (local_d8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_c0 == iStack_a0) {
        if (1 < local_c0) {
          lVar9 = 0;
          while( true ) {
            uVar10 = *(ushort *)(CONCAT71(uStack_c7,local_c8) + lVar9);
            uVar6 = (ulonglong)uVar10;
            uVar12 = *(ushort *)(CONCAT44(uStack_a4,local_a8) + lVar9);
            if (uVar10 != uVar12) break;
            if (uVar10 == 0) goto LAB_142763036;
LAB_142762feb:
            lVar9 = lVar9 + 2;
          }
          if ((uVar12 | uVar10) < 0x80) {
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar11 = (ulonglong)uVar12;
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar11]) goto LAB_142762feb;
          }
          if (uVar10 != uVar12) goto LAB_142763026;
        }
      }
      else if (iStack_a0 + local_c0 != 1) {
LAB_142763026:
        FUN_1461bef36(local_f0,lVar7,&local_c8);
      }
LAB_142763036:
      if (CONCAT71(uStack_c7,local_c8) != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar5);
  }
  if (CONCAT71(uStack_b7,local_b8) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140958ed1(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427630fa FUN_1427630fa body=1392 status=ok
// SIG undefined FUN_1427630fa(void)

void ** FUN_1427630fa(undefined1 *param_1,void **param_2,longlong *param_3,void **param_4,
                     char param_5)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  ulonglong uVar7;
  void *pvVar8;
  int iVar9;
  void **ppvVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  void **local_a0;
  void **local_98;
  longlong local_90;
  void *local_88;
  ulonglong uStack_80;
  void *local_78;
  ulonglong uStack_70;
  void **local_68;
  int local_60;
  longlong *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = (void *)0x0;
  iVar6 = (int)param_3[1];
  pvVar8 = (void *)*param_3;
  *(int *)(param_2 + 1) = iVar6;
  if ((longlong)iVar6 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar6,0);
    memcpy(*param_2,pvVar8,(longlong)iVar6 * 2);
  }
  uVar4 = FUN_14588dcbc();
  FUN_140e825f0(uVar4,&local_68,*param_1);
  local_b0 = *(longlong *)(param_1 + 8);
  FUN_1406dbdc2(*(undefined8 *)(local_b0 + 0x20),&local_58,param_3);
  uVar7 = (ulonglong)(int)local_50;
  if (uVar7 != 0) {
    plVar14 = local_58;
    do {
      if (local_60 != 0) {
        iVar6 = (int)plVar14[1];
        lVar12 = (longlong)iVar6;
        ppvVar10 = local_68;
LAB_1427631f0:
        if (*(int *)(ppvVar10 + 1) == iVar6) {
          pvVar8 = (void *)*plVar14;
          local_a8 = param_3;
          local_a0 = param_4;
          local_98 = param_2;
          local_90 = lVar12;
          if (1 < iVar6) {
            lVar11 = 0;
            do {
              uVar1 = *(ushort *)((longlong)*ppvVar10 + lVar11);
              uVar2 = *(ushort *)((longlong)pvVar8 + lVar11);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) break;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar9 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_142763271;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                goto code_r0x00014276326e;
              }
              lVar11 = lVar11 + 2;
            } while( true );
          }
          goto LAB_1427632b8;
        }
        if (*(int *)(ppvVar10 + 1) + iVar6 == 1) {
          pvVar8 = (void *)*plVar14;
          goto LAB_1427632b8;
        }
        goto LAB_142763203;
      }
LAB_1427631d7:
      plVar14 = plVar14 + 2;
    } while (plVar14 != local_58 + uVar7 * 2);
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
LAB_142763306:
  lVar12 = local_b0;
  FUN_1447a1747(local_58,uVar7);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1406dbdc2(*(undefined8 *)(lVar12 + 0x20),&local_58);
  uVar7 = (ulonglong)(int)local_50;
  if (uVar7 != 0) {
    plVar14 = local_58;
    do {
      if (local_60 != 0) {
        iVar6 = (int)plVar14[1];
        lVar12 = (longlong)iVar6;
        ppvVar10 = local_68;
LAB_142763388:
        if (*(int *)(ppvVar10 + 1) == iVar6) {
          pvVar8 = (void *)*plVar14;
          local_b0 = lVar12;
          local_a8 = param_3;
          local_a0 = param_4;
          local_98 = param_2;
          if (1 < iVar6) {
            lVar11 = 0;
            do {
              uVar1 = *(ushort *)((longlong)*ppvVar10 + lVar11);
              uVar2 = *(ushort *)((longlong)pvVar8 + lVar11);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) break;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar9 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_142763409;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                goto code_r0x000142763406;
              }
              lVar11 = lVar11 + 2;
            } while( true );
          }
          goto LAB_142763450;
        }
        if (*(int *)(ppvVar10 + 1) + iVar6 == 1) {
          pvVar8 = (void *)*plVar14;
          goto LAB_142763450;
        }
        goto LAB_14276339a;
      }
LAB_14276336f:
      plVar14 = plVar14 + 2;
    } while (plVar14 != local_58 + uVar7 * 2);
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
LAB_14276349e:
  FUN_1447a1747(local_58,uVar7);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  pvVar8 = local_78;
  pvVar3 = local_88;
  uVar7 = uStack_70 & 0xffffffff;
  if ((int)uStack_70 < 2) {
    uVar7 = uStack_80 & 0xffffffff;
    if ((int)uStack_80 < 2) {
      if (0 < local_60) {
        param_4 = local_68;
      }
      if (param_4 == param_2) goto LAB_1427635ff;
      iVar6 = *(int *)(param_4 + 1);
      uVar7 = (ulonglong)iVar6;
      pvVar8 = *param_4;
      *(int *)(param_2 + 1) = iVar6;
      if (iVar6 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        goto LAB_1427635ff;
      }
      FUN_1446dd670(param_2,iVar6);
      if (iVar6 == 0) goto LAB_1427635ff;
      _Dst = *param_2;
    }
    else {
      if (&local_88 == param_2) goto LAB_1427635ff;
      *(int *)(param_2 + 1) = (int)uStack_80;
      FUN_1446dd670(param_2,uVar7,*(undefined4 *)((longlong)param_2 + 0xc));
      _Dst = *param_2;
      pvVar8 = pvVar3;
    }
  }
  else {
    if (param_5 == '\0') goto LAB_1427635ff;
    if ((int)param_3[1] == (int)uStack_70) {
      lVar12 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*param_3 + lVar12);
        uVar5 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)local_78 + lVar12);
        uVar13 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14276355c;
          }
          iVar6 = uVar5 - uVar13;
          goto LAB_1427635ba;
        }
        if (uVar1 == 0) break;
LAB_14276355c:
        lVar12 = lVar12 + 2;
      }
      iVar6 = 0;
LAB_1427635ba:
      bVar15 = iVar6 == 0;
    }
    else {
      bVar15 = (int)param_3[1] + (int)uStack_70 == 1;
    }
    if ((&local_78 == param_2) || (bVar15)) goto LAB_1427635ff;
    *(int *)(param_2 + 1) = (int)uStack_70;
    FUN_1446dd670(param_2,uStack_70 & 0xffffffff,*(undefined4 *)((longlong)param_2 + 0xc));
    _Dst = *param_2;
  }
  memcpy(_Dst,pvVar8,uVar7 * 2);
LAB_1427635ff:
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_68,local_60);
  if (local_68 != (void **)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
code_r0x00014276326e:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_142763271:
  if (iVar9 == 0) {
LAB_1427632b8:
    local_78 = (void *)0x0;
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar6);
    if (iVar6 == 0) {
      uStack_70 = 0;
    }
    else {
      FUN_1446dd670(&local_78,iVar6,0);
      memcpy(local_78,pvVar8,lVar12 * 2);
      uVar7 = (ulonglong)local_50;
    }
    goto LAB_142763306;
  }
LAB_142763203:
  ppvVar10 = ppvVar10 + 2;
  if (ppvVar10 == local_68 + (longlong)local_60 * 2) goto LAB_1427631d7;
  goto LAB_1427631f0;
code_r0x000142763406:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_142763409:
  if (iVar9 == 0) {
LAB_142763450:
    local_88 = (void *)0x0;
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar6);
    if (iVar6 == 0) {
      uStack_80 = 0;
    }
    else {
      FUN_1446dd670(&local_88,iVar6,0);
      memcpy(local_88,pvVar8,lVar12 * 2);
      uVar7 = (ulonglong)local_50;
    }
    goto LAB_14276349e;
  }
LAB_14276339a:
  ppvVar10 = ppvVar10 + 2;
  if (ppvVar10 == local_68 + (longlong)local_60 * 2) goto LAB_14276336f;
  goto LAB_142763388;
}



// FUNCTION 14276366b FUN_14276366b body=110 status=ok
// SIG undefined FUN_14276366b(void)

void FUN_14276366b(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1411d204e();
  uVar2 = FUN_14588dcbc();
  FUN_14626a7ee(local_50,uVar2,FUN_1410e2932);
  FUN_145c15ada(uVar1,local_58,local_50);
  FUN_1401cb1ee(local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427636da FUN_1427636da body=90 status=ok
// SIG undefined FUN_1427636da(void)

void FUN_1427636da(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140d5712e();
  lVar1 = FUN_140d5712e();
  uVar2 = FUN_14588dcbc();
  FUN_14626a5a6(lVar1 + 8,local_18,uVar2,FUN_1414efc06);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142763735 FUN_142763735 body=588 status=ok
// SIG undefined FUN_142763735(void)

void FUN_142763735(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  char cVar13;
  undefined1 auStack_b8 [32];
  char local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined1 local_79;
  code *local_78;
  undefined4 local_70;
  undefined ***local_68;
  undefined **local_58;
  char local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14089e62a(&local_79,L"Initializing Localization");
  uVar6 = FUN_14588dcbc();
  FUN_14142fe94(uVar6);
  FUN_146067e0c();
  FUN_1427604ea();
  lVar7 = FUN_140d5712e();
  lVar8 = FUN_140d5712e();
  lVar11 = *(longlong *)(lVar8 + 0x28);
  plVar5 = *(longlong **)(lVar8 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FUN_1412abbc6(&local_78,lVar11 + 0x78,lVar11 + 0xb8,lVar11 + 0x98);
  FUN_1460d2574(*(undefined8 *)(lVar7 + 0x20),&local_78);
  FUN_1447a1747(local_78,local_70);
  if (local_78 != (code *)0x0) {
    FUN_1400020a8();
  }
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
  cVar13 = DAT_14c844e88 + '\x18';
  puVar9 = (undefined1 *)FUN_14588dcbc();
  LOCK();
  uVar3 = *puVar9;
  *puVar9 = 0;
  UNLOCK();
  FUN_142762c5d();
  puVar9 = (undefined1 *)FUN_14588dcbc();
  LOCK();
  *puVar9 = uVar3;
  UNLOCK();
  if (DAT_14c844eb8 != -1) {
    if (DAT_14c844ea8 != 0) {
      FUN_1400020a8();
    }
    DAT_14c844ea8 = 0;
    DAT_14c844eb0 = 0;
    DAT_14c844eb8 = -1;
  }
  uVar10 = FUN_14588dcbc();
  local_98 = cVar13;
  lVar11 = FUN_14588dcbc();
  local_90 = 0;
  iVar4 = *(int *)(lVar11 + 0x140);
  uVar6 = *(undefined8 *)(lVar11 + 0x138);
  if (iVar4 == 0) {
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    local_50 = cVar13;
  }
  else {
    uStack_88._0_4_ = iVar4;
    FUN_1458c879e(&local_90,iVar4);
    FUN_1412f3031(local_90,uVar6,iVar4);
    local_48 = local_90;
    local_40 = (int)uStack_88;
    local_3c = uStack_88._4_4_;
    local_50 = local_98;
  }
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149e1c230;
  local_90 = 0;
  uStack_88 = 0;
  local_78 = FUN_142769f94;
  FUN_1458c87f6(uVar10,&local_78);
  if (local_78 != (code *)0x0) {
    pppuVar12 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar12 = &local_58;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  FUN_14142fefb(local_90,uStack_88 & 0xffffffff);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  lVar11 = FUN_1407bb686();
  uVar6 = FUN_1407bb416();
  FUN_1407bb482(uVar6,*(undefined8 *)(lVar11 + 0x10));
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142763982 FUN_142763982 body=818 status=ok
// SIG undefined FUN_142763982(void)

void FUN_142763982(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  byte bVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [40];
  byte local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  byte local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = FUN_14588dcbc();
  FUN_14142fe94(uVar7);
  lVar8 = FUN_140d5712e();
  FUN_145a09b02(*(undefined8 *)(lVar8 + 0x20));
  lVar9 = FUN_140d5712e();
  lVar8 = *(longlong *)(lVar9 + 0x28);
  plVar5 = *(longlong **)(lVar9 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_88 = (longlong *)0x0;
  local_80 = *(int *)(lVar8 + 0x30);
  lVar9 = (longlong)local_80;
  pvVar6 = *(void **)(lVar8 + 0x28);
  if (lVar9 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar6,lVar9 * 2);
  }
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
  puVar10 = (undefined1 *)FUN_14588dcbc();
  LOCK();
  uVar3 = *puVar10;
  *puVar10 = 0;
  UNLOCK();
  FUN_142762c5d(4);
  puVar10 = (undefined1 *)FUN_14588dcbc();
  LOCK();
  *puVar10 = uVar3;
  UNLOCK();
  lVar9 = FUN_140d5712e();
  lVar8 = *(longlong *)(lVar9 + 0x28);
  plVar5 = *(longlong **)(lVar9 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_98 = (void *)0x0;
  local_90 = *(int *)(lVar8 + 0x30);
  lVar9 = (longlong)local_90;
  pvVar6 = *(void **)(lVar8 + 0x28);
  if (lVar9 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar6,lVar9 * 2);
  }
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
  if (DAT_14c844ea0 != -1) {
    if (DAT_14c844e90 != 0) {
      FUN_1400020a8();
    }
    DAT_14c844e90 = 0;
    DAT_14c844e98 = 0;
    DAT_14c844ea0 = -1;
  }
  if (local_80 == local_90) {
    if (1 < local_80) {
      lVar8 = 0;
      while( true ) {
        uVar14 = *(ushort *)((longlong)local_88 + lVar8);
        uVar15 = (ulonglong)uVar14;
        uVar16 = *(ushort *)((longlong)local_98 + lVar8);
        if (uVar14 != uVar16) break;
        if (uVar14 == 0) goto LAB_142763b86;
LAB_142763b4c:
        lVar8 = lVar8 + 2;
      }
      if ((uVar16 | uVar14) < 0x80) {
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        uVar17 = (ulonglong)uVar16;
        uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_142763b4c;
      }
      bVar13 = 0x1c;
      if (uVar14 != uVar16) goto LAB_142763b89;
    }
  }
  else {
    bVar13 = 0x1c;
    if (local_90 + local_80 != 1) goto LAB_142763b89;
  }
LAB_142763b86:
  bVar13 = 4;
LAB_142763b89:
  bVar13 = bVar13 | DAT_14c844e88;
  uVar11 = FUN_14588dcbc();
  local_b0 = bVar13;
  lVar8 = FUN_14588dcbc();
  local_a8 = 0;
  iVar4 = *(int *)(lVar8 + 0x140);
  uVar7 = *(undefined8 *)(lVar8 + 0x138);
  if (iVar4 == 0) {
    local_48 = 0;
    local_50 = bVar13;
    local_40 = 0;
    local_3c = 0;
  }
  else {
    uStack_a0._0_4_ = iVar4;
    FUN_1458c879e(&local_a8,iVar4);
    FUN_1412f3031(local_a8,uVar7,iVar4);
    local_48 = local_a8;
    local_50 = local_b0;
    local_40 = (int)uStack_a0;
    local_3c = uStack_a0._4_4_;
  }
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149e1c250;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78[0] = FUN_14276a0be;
  FUN_1458c87f6(uVar11,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar12 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar12 = &local_58;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  FUN_14142fefb(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142763cb6 FUN_142763cb6 body=3441 status=ok
// SIG undefined FUN_142763cb6(void)

void FUN_142763cb6(longlong param_1,longlong *param_2,char *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  PSRWLOCK pRVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  uint uVar21;
  ulonglong uVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  uint *puVar29;
  ulonglong uVar30;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  int local_ac;
  longlong local_a8;
  int *local_a0;
  ulonglong local_98;
  longlong local_90;
  uint local_84;
  char *local_80;
  uint *local_78;
  longlong *local_70;
  ulonglong local_68;
  PSRWLOCK local_60;
  ulonglong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = param_3;
  if ((DAT_14c844e48 != 2) && ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34))) {
    local_60 = (PSRWLOCK)(param_1 + 8);
    AcquireSRWLockExclusive(local_60);
    local_b8 = (longlong *)(param_1 + 0x10);
    uVar22 = (longlong)(int)param_2[1] - (longlong)*(int *)((longlong)param_2 + 0x34);
    uVar21 = (uint)uVar22;
    if ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44)) < uVar21) {
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar22);
      }
      FUN_141704238(local_b8,uVar22 & 0xffffffff);
      iVar7 = 1;
      if (3 < uVar21) {
        uVar21 = (uVar21 | 1) + 0xe;
        iVar7 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 1 << ((byte)iVar7 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x58) == 0) || (*(int *)(param_1 + 0x58) < iVar7)) {
        *(int *)(param_1 + 0x58) = iVar7;
        FUN_141703db8(local_b8);
      }
    }
    puVar29 = (uint *)(param_2 + 2);
    uVar21 = *(uint *)(param_2 + 5);
    if (uVar21 == 0) {
      uVar22 = 1;
      uVar30 = 0;
      iVar7 = 0;
      uVar8 = 0;
    }
    else {
      puVar10 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar10 = puVar29;
      }
      uVar8 = *puVar10;
      if (uVar8 == 0) {
        iVar7 = uVar21 + 0x1e;
        if (-1 < (int)(uVar21 - 1)) {
          iVar7 = uVar21 - 1;
        }
        uVar30 = 0;
        uVar22 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar22 = uVar30;
        }
        iVar7 = 0;
        do {
          if (uVar22 == uVar30) goto LAB_142763e00;
          iVar7 = iVar7 + 0x20;
          uVar8 = puVar10[uVar30 + 1];
          uVar30 = uVar30 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar30 = 0;
        iVar7 = 0;
      }
      uVar22 = (ulonglong)(-uVar8 & uVar8);
      uVar19 = uVar22 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar8 = (iVar7 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)uVar21 <= (int)uVar8) {
        uVar8 = uVar21;
      }
    }
    if (uVar8 != uVar21) {
      local_90 = param_1 + 0x48;
      local_a8 = param_1 + 0x20;
      uVar14 = 0xffffffff;
      local_98 = (ulonglong)uVar21;
      local_78 = puVar29;
      local_70 = param_2;
      do {
        piVar1 = (int *)(*param_2 + (longlong)(int)uVar8 * 0x28);
        uVar21 = 0;
        local_ac = iVar7;
        local_84 = uVar14;
        local_68 = uVar22;
        if (piVar1[1] != -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
            FUN_1456aef72(&DAT_14c8450d0);
            DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
            atexit(FUN_142767c9e);
            _Init_thread_footer(&DAT_14c845168);
          }
          pRVar6 = DAT_14c845160;
          iVar7 = piVar1[1];
          AcquireSRWLockShared(DAT_14c845160);
          uVar21 = *(uint *)(*(longlong *)((longlong)pRVar6[3].Ptr + (longlong)(iVar7 / 0x555) * 8)
                             + 0xc + (longlong)(iVar7 % 0x555) * 0x18);
          ReleaseSRWLockShared(pRVar6);
        }
        local_58 = uVar30;
        if (*piVar1 == -1) {
          iVar7 = 0;
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
            FUN_1456aef72(&DAT_14c8450d0);
            DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
            atexit(FUN_142767c9e);
            _Init_thread_footer(&DAT_14c845168);
          }
          pRVar6 = DAT_14c845160;
          iVar7 = *piVar1;
          AcquireSRWLockShared(DAT_14c845160);
          iVar7 = *(int *)(*(longlong *)((longlong)pRVar6[3].Ptr + (longlong)(iVar7 / 0x555) * 8) +
                           0xc + (longlong)(iVar7 % 0x555) * 0x18);
          ReleaseSRWLockShared(pRVar6);
        }
        if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
          uVar8 = uVar21 >> 0xd ^ iVar7 - uVar21;
          uVar14 = uVar8 << 8 ^ (-0x61c88647 - uVar21) - uVar8;
          uVar17 = uVar14 >> 0xd ^ (uVar21 - uVar8) - uVar14;
          uVar24 = uVar17 >> 0xc ^ (uVar8 - uVar14) - uVar17;
          uVar21 = uVar24 << 0x10 ^ (uVar14 - uVar17) - uVar24;
          uVar8 = uVar21 >> 5 ^ (uVar17 - uVar24) - uVar21;
          uVar14 = uVar8 >> 3 ^ (uVar24 - uVar21) - uVar8;
          uVar21 = uVar14 << 10 ^ (uVar21 - uVar8) - uVar14;
          lVar16 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar16 = local_90;
          }
          iVar7 = *(int *)(lVar16 + (ulonglong)
                                    (*(int *)(param_1 + 0x58) - 1U &
                                    (uVar21 >> 0xf ^ uVar8 - (uVar14 + uVar21))) * 4);
          if (iVar7 != -1) {
            lVar16 = *local_b8;
            do {
              lVar26 = (longlong)iVar7 * 0x20;
              lVar12 = lVar16 + lVar26;
              if ((*(int *)(lVar16 + lVar26) == *piVar1) &&
                 (*(int *)(lVar16 + 4 + lVar26) == piVar1[1])) {
                puVar11 = (undefined8 *)(lVar12 + 8);
                if (puVar11 != (undefined8 *)0x0 && lVar12 != 0) {
                  uVar21 = (uint)local_98;
                  if (local_80[1] == '\x01') {
                    *(int *)(lVar12 + 0x14) = piVar1[6];
                    piVar4 = *(int **)(piVar1 + 2);
                    if (piVar4 != (int *)0x0) {
                      LOCK();
                      *piVar4 = *piVar4 + 1;
                      UNLOCK();
                    }
                    piVar2 = (int *)*puVar11;
                    *puVar11 = piVar4;
                    if (piVar2 != (int *)0x0) {
                      LOCK();
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        if (*(longlong *)(piVar2 + 2) != 0) {
                          FUN_1400020a8();
                        }
                        FUN_1400020a8(piVar2);
                      }
                    }
                    uVar8 = piVar1[5];
                    uVar14 = *(uint *)(lVar12 + 0x10);
                    if (uVar14 != uVar8) {
                      if ((((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(param_1 + 0x68))) &&
                          (lVar16 = (ulonglong)uVar14 * 0x68 + *(longlong *)(param_1 + 0x60),
                          lVar16 != 0)) && (*(char *)(lVar16 + 0x60) == '\x01')) {
                        FUN_1467e7b08(lVar16 + 0x10,piVar1);
                      }
                      if (((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x68))) &&
                         ((lVar16 = (ulonglong)uVar8 * 0x68 + *(longlong *)(param_1 + 0x60),
                          lVar16 != 0 && (*(char *)(lVar16 + 0x60) == '\x01')))) {
                        FUN_1467f12a8(lVar16 + 0x10,local_4c,piVar1);
                      }
                    }
                    *(int *)(lVar12 + 0x10) = piVar1[5];
                  }
                  goto LAB_1427644b7;
                }
                break;
              }
              iVar7 = *(int *)(lVar12 + 0x18);
            } while (iVar7 != -1);
          }
        }
        piVar4 = *(int **)(piVar1 + 2);
        if (piVar4 == (int *)0x0) {
          local_a0 = piVar1 + 5;
          uVar20 = *(undefined8 *)(piVar1 + 5);
        }
        else {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          uVar20 = *(undefined8 *)(piVar1 + 5);
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          local_a0 = piVar1 + 5;
          LOCK();
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            if (*(longlong *)(piVar4 + 2) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(piVar4);
          }
        }
        if (*(int *)(param_1 + 0x44) == 0) {
          iVar7 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x18) = iVar7 + 1;
          if (*(int *)(param_1 + 0x1c) == iVar7) {
            FUN_1447711aa(local_b8,iVar7);
          }
          iVar25 = *(int *)(param_1 + 0x38);
          if (iVar25 == 0) {
            iVar18 = -1;
          }
          else {
            iVar18 = iVar25 + 0x1e;
            if (-1 < iVar25 + -1) {
              iVar18 = iVar25 + -1;
            }
            iVar18 = iVar18 >> 5;
          }
          iVar15 = iVar25 + 1;
          iVar28 = iVar25 + 0x1f;
          if (-1 < iVar25) {
            iVar28 = iVar25;
          }
          if (iVar28 >> 5 == iVar18) {
            *(int *)(param_1 + 0x38) = iVar15;
          }
          else {
            if (*(int *)(param_1 + 0x3c) <= iVar25) {
              iVar18 = iVar25;
              if (iVar25 + 0x20U < 0xa0) {
                iVar15 = 0x80;
              }
              else {
                uVar21 = iVar25 + 0x20U >> 5;
                if (*(int *)(param_1 + 0x3c) + 0x1fU < 0xa0) {
                  uVar8 = 4;
                  if (4 < uVar21) {
                    uVar8 = uVar21;
                  }
                }
                else {
                  uVar8 = uVar21 + (uVar21 * 3 >> 3) + 0x10;
                }
                uVar22 = (ulonglong)(uVar8 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar14 = (uint)(uVar22 + 0xf);
                    if (uVar8 < 0x1ffd) {
                      uVar22 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar22 + 0xf >> 4]];
                    }
                    else {
                      uVar30 = (ulonglong)(uVar14 & 0xfffffff0);
                      if (uVar30 < 0x7ff1) {
                        bVar13 = (&DAT_14c841e00)[uVar14 >> 4];
                        uVar19 = 0x32;
                        if (0x32 < bVar13) {
                          uVar19 = (ulonglong)bVar13;
                        }
                        uVar27 = 0x32 - (ulonglong)bVar13;
                        do {
                          uVar22 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar27 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar27 & 0xffffffff] & 0xf) == 0)
                          goto LAB_14276474d;
                          lVar16 = uVar19 + 1 + uVar27;
                          uVar27 = uVar27 - 1;
                        } while (lVar16 != 0x33);
                      }
                      uVar22 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar22 = 0x10;
                      }
                      uVar22 = -uVar22 & (uVar30 + uVar22) - 1;
                    }
                  }
                  else {
                    uVar22 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar22,0);
                    iVar18 = *(int *)(param_1 + 0x38);
                  }
                }
LAB_14276474d:
                iVar9 = (int)(uVar22 >> 2);
                iVar15 = iVar9 << 5;
                if (iVar9 < (int)uVar21) {
                  iVar15 = -0x20;
                }
              }
              *(int *)(param_1 + 0x3c) = iVar15;
              FUN_1446efbd8(local_a8,iVar18);
              iVar15 = *(int *)(param_1 + 0x38) + 1;
            }
            iVar18 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar18 = iVar15;
            }
            *(int *)(param_1 + 0x38) = iVar15;
            if (iVar15 % 0x20 != 0) {
              lVar16 = *(longlong *)(param_1 + 0x30);
              if (*(longlong *)(param_1 + 0x30) == 0) {
                lVar16 = local_a8;
              }
              bVar13 = -(char)(iVar15 % 0x20);
              *(uint *)(lVar16 + (longlong)(iVar18 >> 5) * 4) =
                   (uint)(*(int *)(lVar16 + (longlong)(iVar18 >> 5) * 4) << (bVar13 & 0x1f)) >>
                   (bVar13 & 0x1f);
            }
          }
          lVar12 = (longlong)iVar7;
          lVar16 = *(longlong *)(param_1 + 0x30);
          if (*(longlong *)(param_1 + 0x30) == 0) {
            lVar16 = local_a8;
          }
          bVar13 = (byte)iVar25 & 0x1f;
          puVar29 = (uint *)(lVar16 + (longlong)(iVar28 >> 5) * 4);
          *puVar29 = *puVar29 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
        }
        else {
          iVar7 = *(int *)(param_1 + 0x40);
          lVar12 = (longlong)iVar7;
          iVar25 = *(int *)(*(longlong *)(param_1 + 0x10) + 4 + lVar12 * 0x20);
          *(int *)(param_1 + 0x40) = iVar25;
          iVar18 = *(int *)(param_1 + 0x44) + -1;
          *(int *)(param_1 + 0x44) = iVar18;
          if (iVar18 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar25 * 0x20) = 0xffffffff;
          }
        }
        lVar16 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar16 = local_a8;
        }
        iVar25 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar25 = iVar7;
        }
        puVar29 = (uint *)(lVar16 + (longlong)(iVar25 >> 5) * 4);
        *puVar29 = *puVar29 | 1 << ((byte)iVar7 & 0x1f);
        lVar16 = *(longlong *)(param_1 + 0x10);
        lVar12 = lVar12 * 0x20;
        piVar2 = (int *)(lVar16 + lVar12);
        uVar5 = *(undefined8 *)piVar1;
        *(undefined8 *)(lVar16 + lVar12) = uVar5;
        *(int **)(lVar16 + 8 + lVar12) = piVar4;
        if (piVar4 == (int *)0x0) {
          iVar25 = (int)((ulonglong)uVar5 >> 0x20);
        }
        else {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          iVar25 = piVar2[1];
        }
        *(undefined8 *)(piVar2 + 4) = uVar20;
        piVar2[6] = -1;
        iVar18 = 0;
        uVar21 = 0;
        if (iVar25 != -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
            FUN_1456aef72(&DAT_14c8450d0);
            DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
            atexit(FUN_142767c9e);
            _Init_thread_footer(&DAT_14c845168);
          }
          pRVar6 = DAT_14c845160;
          iVar25 = piVar2[1];
          AcquireSRWLockShared(DAT_14c845160);
          uVar21 = *(uint *)(*(longlong *)((longlong)pRVar6[3].Ptr + (longlong)(iVar25 / 0x555) * 8)
                             + 0xc + (longlong)(iVar25 % 0x555) * 0x18);
          ReleaseSRWLockShared(pRVar6);
        }
        if (*piVar2 != -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
            FUN_1456aef72(&DAT_14c8450d0);
            DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
            atexit(FUN_142767c9e);
            _Init_thread_footer(&DAT_14c845168);
          }
          pRVar6 = DAT_14c845160;
          iVar25 = *piVar2;
          AcquireSRWLockShared(DAT_14c845160);
          iVar18 = *(int *)(*(longlong *)((longlong)pRVar6[3].Ptr + (longlong)(iVar25 / 0x555) * 8)
                            + 0xc + (longlong)(iVar25 % 0x555) * 0x18);
          ReleaseSRWLockShared(pRVar6);
        }
        piVar23 = local_a0;
        uVar8 = uVar21 >> 0xd ^ iVar18 - uVar21;
        uVar14 = uVar8 << 8 ^ (-0x61c88647 - uVar21) - uVar8;
        uVar21 = uVar14 >> 0xd ^ (uVar21 - uVar8) - uVar14;
        uVar17 = uVar21 >> 0xc ^ (uVar8 - uVar14) - uVar21;
        uVar24 = uVar17 << 0x10 ^ (uVar14 - uVar21) - uVar17;
        uVar8 = uVar24 >> 5 ^ (uVar21 - uVar17) - uVar24;
        uVar14 = uVar8 >> 3 ^ (uVar17 - uVar24) - uVar8;
        uVar21 = uVar14 << 10 ^ (uVar24 - uVar8) - uVar14;
        uVar21 = uVar21 >> 0xf ^ uVar8 - (uVar14 + uVar21);
        uVar8 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44);
        if ((uVar8 != 0) && (uVar8 != 1)) {
          lVar16 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar16 = local_90;
          }
          iVar25 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & uVar21) * 4);
          if (iVar25 != -1) {
            lVar16 = *local_b8;
            do {
              lVar12 = (longlong)iVar25 * 0x20;
              piVar3 = (int *)(lVar16 + lVar12);
              if ((*(int *)(lVar16 + lVar12) == *piVar2) &&
                 (*(int *)(lVar16 + 4 + lVar12) == piVar2[1])) {
                piVar23 = *(int **)(piVar3 + 2);
                if (piVar23 != (int *)0x0) {
                  LOCK();
                  *piVar23 = *piVar23 + -1;
                  UNLOCK();
                  if (*piVar23 == 0) {
                    if (*(longlong *)(piVar23 + 2) != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1400020a8(piVar23);
                  }
                }
                iVar25 = *piVar2;
                iVar18 = piVar2[1];
                iVar15 = piVar2[2];
                iVar28 = piVar2[3];
                *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(piVar2 + 4);
                *piVar3 = iVar25;
                piVar3[1] = iVar18;
                piVar3[2] = iVar15;
                piVar3[3] = iVar28;
                FUN_1467f1b88(local_b8,iVar7);
                piVar23 = local_a0;
                goto LAB_142764477;
              }
              iVar25 = piVar3[6];
            } while (iVar25 != -1);
          }
        }
        if (uVar8 < 4) {
          iVar25 = 1;
        }
        else {
          uVar22 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
          lVar16 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar25 = 1 << ((byte)lVar16 & 0x1f);
        }
        if (((int)uVar8 < 1) || (iVar25 <= *(int *)(param_1 + 0x58))) {
          uVar21 = *(int *)(param_1 + 0x58) - 1U & uVar21;
          piVar2[7] = uVar21;
          lVar16 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar16 = local_90;
          }
          piVar2[6] = *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 0x58) - 1U &
                                        (longlong)(int)uVar21) * 4);
          lVar16 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar16 = local_90;
          }
          *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)uVar21) * 4) =
               iVar7;
        }
        else {
          *(int *)(param_1 + 0x58) = iVar25;
          FUN_141703db8(local_b8);
        }
LAB_142764477:
        param_2 = local_70;
        puVar29 = local_78;
        iVar7 = *piVar23;
        uVar21 = (uint)local_98;
        if ((((-1 < (longlong)iVar7) && (iVar7 < *(int *)(param_1 + 0x68))) &&
            (lVar16 = (longlong)iVar7 * 0x68 + *(longlong *)(param_1 + 0x60), lVar16 != 0)) &&
           (*(char *)(lVar16 + 0x60) == '\x01')) {
          FUN_1467f12a8(lVar16 + 0x10,local_4c,piVar1);
        }
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            if (*(longlong *)(piVar4 + 2) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(piVar4);
          }
        }
LAB_1427644b7:
        uVar14 = local_84 & ~(uint)local_68;
        puVar10 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar10 = puVar29;
        }
        uVar17 = *(uint *)(param_2 + 5);
        iVar25 = (int)local_58;
        lVar16 = (longlong)iVar25;
        uVar8 = puVar10[lVar16] & uVar14;
        uVar30 = local_58;
        iVar7 = local_ac;
        if (uVar8 == 0) {
          iVar18 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar18 = uVar17 - 1;
          }
          iVar18 = iVar18 >> 5;
          iVar7 = local_ac + 0x20;
          iVar15 = iVar18;
          if (iVar18 < iVar25) {
            iVar15 = iVar25;
          }
          if (iVar25 < iVar18) {
            lVar12 = 0;
            do {
              uVar8 = puVar10[lVar16 + lVar12 + 1];
              if (uVar8 != 0) {
                uVar14 = 0xffffffff;
                uVar30 = (ulonglong)(iVar25 + (int)lVar12 + 1);
                goto LAB_142764551;
              }
              iVar7 = iVar7 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar15 - lVar16 != lVar12);
            uVar14 = 0xffffffff;
            iVar25 = iVar15;
          }
          uVar30 = (ulonglong)(iVar25 + 1);
          uVar21 = (uint)local_98;
          uVar22 = local_68;
          puVar29 = local_78;
          param_2 = local_70;
          uVar8 = uVar17;
        }
        else {
LAB_142764551:
          uVar22 = (ulonglong)(-uVar8 & uVar8);
          uVar19 = uVar22 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar8 = (iVar7 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar17 <= (int)uVar8) {
            uVar8 = uVar17;
          }
        }
      } while (uVar8 != uVar21);
    }
LAB_142763e00:
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      FUN_14276b64c(param_2);
      FUN_1417043e8(param_2);
    }
    ReleaseSRWLockExclusive(local_60);
    if (*local_80 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142764a44 FUN_142764a44 body=779 status=ok
// SIG undefined FUN_142764a44(void)

undefined8 * FUN_142764a44(char *param_1,undefined8 *param_2,int *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  PSRWLOCK pRVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  
  if (*param_1 == '\0') {
    *param_2 = 0;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 8));
    iVar11 = 0;
    uVar6 = 0;
    if (param_3[1] != -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1))
      {
        FUN_1456aef72(&DAT_14c8450d0);
        DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
        atexit(FUN_142767c9e);
        _Init_thread_footer(&DAT_14c845168);
      }
      pRVar4 = DAT_14c845160;
      iVar7 = param_3[1];
      AcquireSRWLockShared(DAT_14c845160);
      uVar6 = *(uint *)(*(longlong *)((longlong)pRVar4[3].Ptr + (longlong)(iVar7 / 0x555) * 8) + 0xc
                       + (longlong)(iVar7 % 0x555) * 0x18);
      ReleaseSRWLockShared(pRVar4);
    }
    if (*param_3 != -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1))
      {
        FUN_1456aef72(&DAT_14c8450d0);
        DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
        atexit(FUN_142767c9e);
        _Init_thread_footer(&DAT_14c845168);
      }
      pRVar4 = DAT_14c845160;
      iVar11 = *param_3;
      AcquireSRWLockShared(DAT_14c845160);
      iVar11 = *(int *)(*(longlong *)((longlong)pRVar4[3].Ptr + (longlong)(iVar11 / 0x555) * 8) +
                        0xc + (longlong)(iVar11 % 0x555) * 0x18);
      ReleaseSRWLockShared(pRVar4);
    }
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
      uVar5 = uVar6 >> 0xd ^ iVar11 - uVar6;
      uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar6) - uVar5;
      uVar10 = uVar9 >> 0xd ^ (uVar6 - uVar5) - uVar9;
      uVar12 = uVar10 >> 0xc ^ (uVar5 - uVar9) - uVar10;
      uVar6 = uVar12 << 0x10 ^ (uVar9 - uVar10) - uVar12;
      uVar5 = uVar6 >> 5 ^ (uVar10 - uVar12) - uVar6;
      uVar9 = uVar5 >> 3 ^ (uVar12 - uVar6) - uVar5;
      uVar6 = uVar9 << 10 ^ (uVar6 - uVar5) - uVar9;
      pcVar8 = param_1 + 0x48;
      if (*(char **)(param_1 + 0x50) != (char *)0x0) {
        pcVar8 = *(char **)(param_1 + 0x50);
      }
      iVar11 = *(int *)(pcVar8 + (ulonglong)
                                 (*(int *)(param_1 + 0x58) - 1U &
                                 (uVar6 >> 0xf ^ uVar5 - (uVar9 + uVar6))) * 4);
      if (iVar11 != -1) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        do {
          lVar13 = (longlong)iVar11 * 0x20;
          lVar1 = lVar2 + lVar13;
          if ((*(int *)(lVar2 + lVar13) == *param_3) && (*(int *)(lVar2 + 4 + lVar13) == param_3[1])
             ) {
            if (((undefined8 *)(lVar1 + 8) != (undefined8 *)0x0 && lVar1 != 0) &&
               ((*(int *)(param_4 + 1) < 2 ||
                (iVar11 = *(int *)(lVar1 + 0x14), iVar7 = FUN_144a1ccda(*param_4,0), iVar11 == iVar7
                )))) {
              piVar3 = *(int **)(lVar1 + 8);
              *param_2 = piVar3;
              if (piVar3 != (int *)0x0) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                UNLOCK();
              }
              goto LAB_142764c73;
            }
            break;
          }
          iVar11 = *(int *)(lVar1 + 0x18);
        } while (iVar11 != -1);
      }
    }
    *param_2 = 0;
LAB_142764c73:
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 8));
  }
  return param_2;
}



// FUNCTION 142764d50 FUN_142764d50 body=184 status=ok
// SIG undefined FUN_142764d50(void)

byte FUN_142764d50(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  bVar2 = 0;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,puVar4,0);
  if (plVar3 != (longlong *)0x0) {
    FUN_140c98848(local_3c,param_2);
    bVar1 = FUN_142765602(param_1,plVar3,local_3c,param_3);
    bVar2 = (**(code **)(*plVar3 + 0x1f8))(plVar3);
    bVar2 = bVar2 & bVar1;
    (**(code **)*plVar3)(plVar3,1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142764e0a FUN_142764e0a body=349 status=ok
// SIG undefined FUN_142764e0a(void)

void FUN_142764e0a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  short sVar6;
  undefined ***pppuVar7;
  undefined1 auStack_98 [32];
  code **local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  iVar2 = *(int *)(param_1 + 0x118) + 1;
  do {
    sVar6 = (short)iVar2;
    iVar2 = 1;
  } while (sVar6 == 0);
  *(short *)(param_1 + 0x118) = sVar6;
  FUN_145c38126(param_1 + 200);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 != 2) {
      if (iVar2 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        if (DVar3 == DVar4) goto LAB_142764f51;
      }
      uVar5 = FUN_1401cb356();
      local_78 = local_58;
      local_48 = (undefined ***)0x0;
      local_38[0] = &PTR_LAB_149e1c390;
      local_58[0] = FUN_14276b792;
      FUN_1401cbba4(uVar5,local_68,L"OnTextRevisionChangedEventBroadcastGT",0);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if (local_58[0] != (code *)0x0) {
        pppuVar7 = local_48;
        if (local_48 == (undefined ***)0x0) {
          pppuVar7 = local_38;
        }
        (*(code *)(*pppuVar7)[2])();
      }
      if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_142764f51:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 142764f7a FUN_142764f7a body=260 status=ok
// SIG undefined FUN_142764f7a(void)

void FUN_142764f7a(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (1 < *(int *)(param_3 + 8)) {
    lVar3 = FUN_140d5712e();
    FUN_14588f6d2(*(undefined8 *)(lVar3 + 0x20),&local_40,param_3,0);
    if (local_40 != 0) {
      lVar3 = FUN_140d5712e();
      FUN_1406dbdc2(*(undefined8 *)(lVar3 + 0x20),&local_60,param_3);
      local_50 = local_60;
      local_48 = local_58;
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      FUN_142765080(param_1,&local_78,&local_50,param_4);
      FUN_1447a1747(local_60,local_58);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142765080 FUN_142765080 body=298 status=ok
// SIG undefined FUN_142765080(void)

void FUN_142765080(undefined8 param_1,longlong *param_2,undefined4 *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((DAT_14c844e48 != 2) && (param_3[2] != 0)) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    lVar2 = param_2[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_2;
      lVar3 = 0;
      do {
        local_a8 = *param_3;
        uStack_a4 = param_3[1];
        uStack_a0 = param_3[2];
        uStack_9c = param_3[3];
        local_b8 = &local_98;
        (**(code **)(**(longlong **)(lVar1 + lVar3) + 0x20))
                  (*(longlong **)(lVar1 + lVar3),param_4,&local_a8,&local_98);
        lVar3 = lVar3 + 0x10;
      } while ((longlong)(int)lVar2 * 0x10 != lVar3);
    }
    local_aa = 1;
    local_a9 = (param_4 & 0x40) == 0;
    FUN_142763cb6(param_1,&local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_145eb74f4(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427651ac FUN_1427651ac body=58 status=ok
// SIG undefined FUN_1427651ac(void)

void FUN_1427651ac(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14142fefb(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427651e6 FUN_1427651e6 body=663 status=ok
// SIG undefined FUN_1427651e6(void)

void FUN_1427651e6(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  byte param_5)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  longlong *local_150;
  longlong local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((DAT_14c844e48 != 2) && (*(int *)(param_4 + 1) != 0)) && (*(int *)(param_3 + 1) != 0)) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
    bVar1 = false;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_c8 = *param_4;
    uStack_c0 = param_4[1];
    local_170 = &local_c8;
    local_d8 = 0;
    local_d0 = 0;
    local_e8 = *param_3;
    uStack_e0 = param_3[1];
    local_f8 = *(undefined4 *)param_3;
    uStack_f4 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_f0 = *(undefined4 *)(param_3 + 1);
    uStack_ec = *(undefined4 *)((longlong)param_3 + 0xc);
    local_178 = (undefined8 *)CONCAT71(local_178._1_7_,param_5);
    local_168 = &local_b8;
    local_160 = &local_b8;
    FUN_14169c35e(*(undefined8 *)(param_1 + 0x148),&local_f8,&local_e8);
    local_108 = 0;
    uStack_100 = 0;
    FUN_1467e8628(&local_b8);
    if ((longlong)(int)param_2[1] != 0) {
      puVar10 = (undefined8 *)*param_2;
      local_140 = puVar10 + (longlong)(int)param_2[1] * 2;
      puVar8 = local_140;
      local_150 = param_2;
      local_148 = param_1;
      do {
        while( true ) {
          iVar4 = (**(code **)(*(longlong *)*puVar10 + 8))();
          iVar5 = (**(code **)(**(longlong **)(param_1 + 0x148) + 8))();
          lVar2 = local_108;
          if (iVar4 <= iVar5) break;
          lVar9 = (longlong)(int)uStack_100;
          if (lVar9 != 0) {
            lVar7 = 0;
            do {
              local_118 = *(undefined4 *)param_4;
              uStack_114 = *(undefined4 *)((longlong)param_4 + 4);
              uStack_110 = *(undefined4 *)(param_4 + 1);
              uStack_10c = *(undefined4 *)((longlong)param_4 + 0xc);
              local_178 = &local_b8;
              local_170 = &local_b8;
              cVar3 = (**(code **)(*(longlong *)*puVar10 + 0x28))
                                ((longlong *)*puVar10,uVar6 & 0xffffffff,&local_118,
                                 *(undefined8 *)(lVar2 + lVar7));
              if (cVar3 == '\x02') {
                bVar1 = true;
                param_1 = local_148;
                param_2 = local_150;
                goto LAB_1427653ef;
              }
              lVar7 = lVar7 + 8;
            } while (lVar9 * 8 != lVar7);
          }
          puVar10 = puVar10 + 2;
          param_1 = local_148;
          puVar8 = local_140;
          if (puVar10 == local_140) goto LAB_1427653dd;
        }
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar8);
LAB_1427653dd:
      bVar1 = false;
      param_2 = local_150;
    }
LAB_1427653ef:
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (bVar1) {
      local_128 = *param_4;
      uStack_120 = param_4[1];
      local_138 = (undefined4)*param_2;
      uStack_134 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_130 = (undefined4)param_2[1];
      uStack_12c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_142765080(param_1,&local_138,&local_128,uVar6 & 0xffffffff);
    }
    else {
      local_108._0_2_ = CONCAT11((param_5 & 0x40) == 0,1);
      FUN_142763cb6(param_1,&local_b8);
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_145eb74f4(&local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14276547e FUN_14276547e body=96 status=ok
// SIG undefined FUN_14276547e(void)

void FUN_14276547e(longlong *param_1)

{
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14142fefb(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427654de FUN_1427654de body=290 status=ok
// SIG undefined FUN_1427654de(void)

ulonglong FUN_1427654de(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_29 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1402ac1b3(param_2,&local_48);
  if (((((int)local_48 == -0x5eb311b1) && (local_48._4_4_ == -0x7caab798)) &&
      ((int)uStack_40 == -0x42b9b394)) && (uStack_40._4_4_ == 0x7c50da70)) {
    puVar3 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar3 + 1;
    if ((byte *)puVar3[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_29,1);
    }
    else {
      local_29 = *(byte *)*puVar3;
      *puVar3 = (ulonglong)pbVar1;
    }
    if (local_29 < 2) {
      FUN_14021219d(param_2,param_1);
      FUN_14021219d(param_2,param_1 + 0x10);
      uVar5 = (undefined7)((ulonglong)param_2 >> 8);
      if (local_29 == 0) {
        iVar2 = *(int *)(param_1 + 0x2c);
        FUN_1447a1747(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar4 = CONCAT71(uVar5,1);
        if ((iVar2 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
          FUN_1408be2c4(param_1 + 0x20,0);
        }
      }
      else {
        FUN_1405d0c38(param_2,param_1 + 0x20);
        uVar4 = CONCAT71(uVar5,1);
      }
      goto LAB_14276557b;
    }
  }
  uVar4 = 0;
LAB_14276557b:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142765602 FUN_142765602 body=2936 status=ok
// SIG undefined FUN_142765602(void)

bool FUN_142765602(longlong *param_1,longlong *param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ulonglong *puVar4;
  PSRWLOCK pRVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  int **ppiVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  bool bVar28;
  undefined1 auStack_128 [39];
  byte local_101;
  undefined8 local_100;
  uint local_f8;
  int local_f4;
  undefined4 *local_f0;
  longlong *local_e8;
  int local_e0;
  int local_dc;
  int *local_d8;
  undefined8 uStack_d0;
  int iStack_c8;
  int iStack_c4;
  int local_b8;
  uint local_b4;
  int local_b0;
  uint local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  byte local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  int *local_78;
  undefined8 uStack_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_88 = 0;
  uStack_80 = 0;
  local_f4 = param_4;
  local_f0 = param_3;
  uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
  iVar24 = 0;
  iVar7 = 0;
  iVar18 = 0;
  iVar26 = 0;
  if (0xf < uVar10) {
    FUN_1402ac1b3(param_2,&local_88);
    iVar24 = (int)uStack_80;
    iVar7 = (int)local_88;
    iVar18 = local_88._4_4_;
    iVar26 = uStack_80._4_4_;
  }
  local_89 = 0;
  if ((((iVar26 == 0x1b7f37c3) && (iVar24 == -0x626feab6)) && (iVar18 == -0x3fcb599)) &&
     (iVar7 == 0x7574140e)) {
    puVar4 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar4 + 1;
    if ((byte *)puVar4[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_89,1);
    }
    else {
      local_89 = *(byte *)*puVar4;
      *puVar4 = (ulonglong)pbVar1;
    }
  }
  else {
    (**(code **)(*param_2 + 0x1a0))(param_2,0);
  }
  bVar17 = local_89;
  if (local_89 < 4) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_101 = local_89;
    if (local_89 != 0) {
      local_78 = (int *)0xffffffffffffffff;
      FUN_1408383eb(param_2,&local_78);
      if (local_78 != (int *)0xffffffffffffffff) {
        uVar11 = (**(code **)(*param_2 + 0x28))(param_2);
        (**(code **)(*param_2 + 0x1a0))(param_2,local_78);
        (**(code **)(*param_2 + 0x1d8))(param_2,local_78,0);
        if (local_89 < 2) {
          local_d8 = (int *)0x0;
          uStack_d0 = 0;
          FUN_1405d0c38(param_2,&local_d8);
          if ((int)uStack_d0 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uStack_d0 & 0xffffffff);
          }
          if ((int)uStack_a0._4_4_ < (int)uStack_d0) {
            FUN_1456e5396(&local_a8);
          }
          uVar8 = 0;
          if ((int)uStack_d0 != 0) {
            piVar13 = local_d8 + (longlong)(int)uStack_d0 * 4;
            piVar27 = local_d8;
            local_100 = uVar11;
            do {
              uVar10 = uStack_a0;
              lVar23 = (longlong)(int)uStack_a0;
              uVar6 = (int)uStack_a0 + 1;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
              if (uStack_a0._4_4_ < uVar6) {
                FUN_1467ee674(&local_a8,uVar10 & 0xffffffff);
              }
              puVar21 = (undefined8 *)(lVar23 * 0x10 + local_a8);
              piVar12 = (int *)FUN_14001cc68(0x18,0x10);
              *piVar12 = 0;
              *(undefined8 *)(piVar12 + 2) = *(undefined8 *)piVar27;
              piVar27[0] = 0;
              piVar27[1] = 0;
              piVar12[4] = piVar27[2];
              piVar12[5] = piVar27[3];
              piVar27[2] = 0;
              piVar27[3] = 0;
              if (piVar12 == (int *)0x0) {
                *puVar21 = 0;
              }
              else {
                LOCK();
                *piVar12 = *piVar12 + 1;
                UNLOCK();
                *puVar21 = piVar12;
                LOCK();
                *piVar12 = *piVar12 + 1;
                UNLOCK();
                LOCK();
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (*piVar12 == 0) {
                  if (*(longlong *)(piVar12 + 2) != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(piVar12);
                }
              }
              *(undefined4 *)(puVar21 + 1) = 0xffffffff;
              piVar27 = piVar27 + 4;
            } while (piVar27 != piVar13);
            uVar11 = local_100;
            uVar8 = (int)uStack_d0;
          }
          FUN_1447a1747(local_d8,uVar8);
          if (local_d8 != (int *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          FUN_1402006cc(param_2,&local_a8);
        }
        (**(code **)(*param_2 + 0x1a0))(param_2,uVar11);
        (**(code **)(*param_2 + 0x1d8))(param_2,uVar11,0);
      }
      if (1 < local_89) {
        puVar4 = (ulonglong *)param_2[1];
        puVar2 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar2) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_d8,4);
          }
          else {
            FUN_14572512c(param_2,&local_d8);
          }
        }
        else {
          local_d8 = (int *)CONCAT44(local_d8._4_4_,*(undefined4 *)*puVar4);
          *puVar4 = (ulonglong)puVar2;
        }
        uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
        iVar7 = 0;
        if (0 < (int)local_d8) {
          iVar7 = (int)local_d8;
        }
        uVar20 = iVar7 + uVar6;
        if (uVar6 < uVar20) {
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar20);
          }
          FUN_141704f9e(param_1,uVar20);
          iVar7 = 1;
          if (3 < uVar20) {
            uVar6 = (uVar20 | 1) + 0xe;
            iVar7 = 0x1f;
            if (uVar6 != 0) {
              for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
              }
            }
            iVar7 = 1 << ((byte)iVar7 & 0x1f);
          }
          if (((int)param_1[9] == 0) || ((int)param_1[9] < iVar7)) {
            *(int *)(param_1 + 9) = iVar7;
            FUN_141704b0c(param_1);
          }
        }
      }
    }
    puVar4 = (ulonglong *)param_2[1];
    puVar3 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_ac,4);
      }
      else {
        FUN_14572512c(param_2,&local_ac);
      }
    }
    else {
      local_ac = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar3;
    }
    uVar8 = FUN_14588dbba(local_f0);
    local_100 = CONCAT44(local_100._4_4_,uVar8);
    if (local_ac != 0) {
      local_e8 = param_1 + 7;
      uVar6 = 0;
      do {
        local_b0 = -1;
        if (local_89 < 3) {
          if (local_89 == 2) {
            FUN_1467e78b2(&local_b0,param_2);
          }
          else {
            FUN_14003e2d8();
          }
        }
        else {
          FUN_14499e9e6();
        }
        puVar4 = (ulonglong *)param_2[1];
        puVar3 = (uint *)*puVar4 + 1;
        local_f8 = uVar6;
        if ((uint *)puVar4[1] < puVar3) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_b4,4);
          }
          else {
            FUN_14572512c(param_2,&local_b4);
          }
        }
        else {
          local_b4 = *(uint *)*puVar4;
          *puVar4 = (ulonglong)puVar3;
        }
        if (local_b4 != 0) {
          uVar6 = 0;
          do {
            local_b8 = -1;
            if (local_89 < 3) {
              if (local_89 == 2) {
                FUN_1467e78b2(&local_b8,param_2);
              }
              else {
                FUN_14003e2d8();
              }
            }
            else {
              FUN_14499e9e6();
            }
            local_d8 = (int *)0x0;
            iStack_c8 = 0;
            uStack_d0 = CONCAT44((undefined4)local_100,*local_f0);
            iStack_c4 = local_f4;
            plVar14 = (longlong *)param_2[1];
            if ((int *)plVar14[1] < (int *)*plVar14 + 1) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&iStack_c8,4);
              }
              else {
                FUN_14572512c(param_2,&iStack_c8);
              }
            }
            else {
              iStack_c8 = *(int *)*plVar14;
              *plVar14 = *plVar14 + 4;
            }
            if (local_89 == 0) {
              local_78 = (int *)0x0;
              uStack_70 = (int **)0x0;
              FUN_14021219d(param_2,&local_78);
              piVar13 = (int *)FUN_14001cc68(0x18,0x10);
              piVar27 = local_d8;
              *piVar13 = 0;
              *(int **)(piVar13 + 2) = local_78;
              local_78 = (int *)0x0;
              piVar13[4] = (int)uStack_70;
              piVar13[5] = uStack_70._4_4_;
              uStack_70 = (int **)0x0;
              if (piVar13 == (int *)0x0) {
                if (local_d8 != (int *)0x0) {
                  local_d8 = (int *)0x0;
LAB_142765c6a:
                  LOCK();
                  *piVar27 = *piVar27 + -1;
                  UNLOCK();
                  if (*piVar27 == 0) {
                    if (*(longlong *)(piVar27 + 2) != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1400020a8(piVar27);
                  }
                  if (piVar13 != (int *)0x0) goto LAB_142765c7a;
                }
              }
              else {
                LOCK();
                *piVar13 = *piVar13 + 1;
                UNLOCK();
                LOCK();
                *piVar13 = *piVar13 + 1;
                UNLOCK();
                LOCK();
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                if (*piVar13 == 0) {
                  if (*(longlong *)(piVar13 + 2) != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(piVar13);
                }
                if (local_d8 != piVar13) {
                  LOCK();
                  *piVar13 = *piVar13 + 1;
                  UNLOCK();
                  bVar28 = local_d8 != (int *)0x0;
                  piVar27 = local_d8;
                  local_d8 = piVar13;
                  if (bVar28) goto LAB_142765c6a;
                }
LAB_142765c7a:
                LOCK();
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                if (*piVar13 == 0) {
                  if (*(longlong *)(piVar13 + 2) != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(piVar13);
                }
              }
              if (local_78 != (int *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              local_78 = (int *)CONCAT44(local_78._4_4_,0xffffffff);
              puVar4 = (ulonglong *)param_2[1];
              puVar2 = (undefined4 *)*puVar4 + 1;
              if ((undefined4 *)puVar4[1] < puVar2) {
                if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                  (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
                }
                else {
                  FUN_14572512c(param_2,&local_78);
                }
              }
              else {
                local_78 = (int *)CONCAT44(local_78._4_4_,*(undefined4 *)*puVar4);
                *puVar4 = (ulonglong)puVar2;
              }
              lVar23 = local_a8;
              piVar27 = local_d8;
              if ((-1 < (longlong)(int)local_78) && ((int)local_78 < (int)uStack_a0)) {
                lVar22 = (longlong)(int)local_78 * 0x10;
                piVar13 = *(int **)(local_a8 + lVar22);
                piVar12 = local_d8;
                if (local_d8 != piVar13) {
                  if (piVar13 != (int *)0x0) {
                    LOCK();
                    *piVar13 = *piVar13 + 1;
                    UNLOCK();
                  }
                  piVar12 = piVar13;
                  if (local_d8 != (int *)0x0) {
                    LOCK();
                    *local_d8 = *local_d8 + -1;
                    UNLOCK();
                    if (*local_d8 == 0) {
                      plVar14 = (longlong *)(local_d8 + 2);
                      local_d8 = piVar13;
                      if (*plVar14 != 0) {
                        FUN_1400020a8();
                      }
                      FUN_1400020a8(piVar27);
                      piVar12 = local_d8;
                    }
                  }
                }
                local_d8 = piVar12;
                lVar23 = lVar23 + lVar22;
                iVar7 = *(int *)(lVar23 + 8);
                if (iVar7 != -1) {
                  *(int *)(lVar23 + 8) = iVar7 + -1;
                }
              }
            }
            iVar26 = local_b0;
            iVar18 = local_b8;
            iVar7 = 0;
            uVar20 = 0;
            if (local_b8 != -1) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c845168) &&
                 (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
                FUN_1456aef72(&DAT_14c8450d0);
                DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
                atexit(FUN_142767c9e);
                _Init_thread_footer(&DAT_14c845168);
              }
              pRVar5 = DAT_14c845160;
              AcquireSRWLockShared(DAT_14c845160);
              uVar20 = *(uint *)(*(longlong *)
                                  ((longlong)pRVar5[3].Ptr + (longlong)(iVar18 / 0x555) * 8) + 0xc +
                                (longlong)(iVar18 % 0x555) * 0x18);
              ReleaseSRWLockShared(pRVar5);
            }
            if (iVar26 != -1) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c845168) &&
                 (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
                FUN_1456aef72(&DAT_14c8450d0);
                DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
                atexit(FUN_142767c9e);
                _Init_thread_footer(&DAT_14c845168);
              }
              pRVar5 = DAT_14c845160;
              AcquireSRWLockShared(DAT_14c845160);
              iVar7 = *(int *)(*(longlong *)
                                ((longlong)pRVar5[3].Ptr + (longlong)(iVar26 / 0x555) * 8) + 0xc +
                              (longlong)(iVar26 % 0x555) * 0x18);
              ReleaseSRWLockShared(pRVar5);
            }
            if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
              uVar9 = uVar20 >> 0xd ^ iVar7 - uVar20;
              uVar16 = uVar9 << 8 ^ (-0x61c88647 - uVar20) - uVar9;
              uVar19 = uVar16 >> 0xd ^ (uVar20 - uVar9) - uVar16;
              uVar25 = uVar19 >> 0xc ^ (uVar9 - uVar16) - uVar19;
              uVar20 = uVar25 << 0x10 ^ (uVar16 - uVar19) - uVar25;
              uVar9 = uVar20 >> 5 ^ (uVar19 - uVar25) - uVar20;
              uVar16 = uVar9 >> 3 ^ (uVar25 - uVar20) - uVar9;
              uVar20 = uVar16 << 10 ^ (uVar20 - uVar9) - uVar16;
              plVar14 = (longlong *)param_1[8];
              if ((longlong *)param_1[8] == (longlong *)0x0) {
                plVar14 = local_e8;
              }
              iVar7 = *(int *)((longlong)plVar14 +
                              (ulonglong)
                              ((int)param_1[9] - 1U & (uVar20 >> 0xf ^ uVar9 - (uVar16 + uVar20))) *
                              4);
              if (iVar7 != -1) {
                do {
                  piVar27 = (int *)(*param_1 + (longlong)iVar7 * 0x28);
                  if ((*piVar27 == iVar26) &&
                     (*(int *)(*param_1 + 4 + (longlong)iVar7 * 0x28) == iVar18)) {
                    ppiVar15 = (int **)(piVar27 + 2);
                    if (ppiVar15 != (int **)0x0 && piVar27 != (int *)0x0) {
                      if (iStack_c4 < piVar27[7]) {
                        if (ppiVar15 != &local_d8) {
                          piVar13 = *ppiVar15;
                          *ppiVar15 = local_d8;
                          local_d8 = (int *)0x0;
                          if (piVar13 != (int *)0x0) {
                            LOCK();
                            *piVar13 = *piVar13 + -1;
                            UNLOCK();
                            if (*piVar13 == 0) {
                              if (*(longlong *)(piVar13 + 2) != 0) {
                                FUN_1400020a8();
                              }
                              FUN_1400020a8(piVar13);
                            }
                          }
                        }
                        piVar27[4] = (int)uStack_d0;
                        piVar27[5] = uStack_d0._4_4_;
                        piVar27[6] = iStack_c8;
                        piVar27[7] = iStack_c4;
                      }
                      goto LAB_142765f23;
                    }
                    break;
                  }
                  iVar7 = piVar27[8];
                } while (iVar7 != -1);
              }
            }
            local_e0 = local_b0;
            local_dc = local_b8;
            local_78 = &local_e0;
            uStack_70 = &local_d8;
            FUN_14170459e(param_1,local_64,&local_78);
LAB_142765f23:
            piVar27 = local_d8;
            if (local_d8 != (int *)0x0) {
              LOCK();
              *local_d8 = *local_d8 + -1;
              UNLOCK();
              if (*local_d8 == 0) {
                if (*(longlong *)(local_d8 + 2) != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(piVar27);
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_b4);
        }
        uVar6 = local_f8 + 1;
      } while (uVar6 < local_ac);
    }
    FUN_14020094d(local_a8,uStack_a0 & 0xffffffff);
    bVar17 = local_101;
    if (local_a8 != 0) {
      FUN_1400020a8();
      bVar17 = local_101;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar17 < 4;
}



// FUNCTION 14276617c FUN_14276617c body=66 status=ok
// SIG undefined FUN_14276617c(void)

void FUN_14276617c(void)

{
  if (DAT_14c844ea0 != -1) {
    if (DAT_14c844e90 != 0) {
      FUN_1400020a8();
    }
    DAT_14c844e90 = 0;
    DAT_14c844e98 = 0;
    DAT_14c844ea0 = -1;
  }
  return;
}



// FUNCTION 1427661be FUN_1427661be body=66 status=ok
// SIG undefined FUN_1427661be(void)

void FUN_1427661be(void)

{
  if (DAT_14c844eb8 != -1) {
    if (DAT_14c844ea8 != 0) {
      FUN_1400020a8();
    }
    DAT_14c844ea8 = 0;
    DAT_14c844eb0 = 0;
    DAT_14c844eb8 = -1;
  }
  return;
}



// FUNCTION 142766200 FUN_142766200 body=49 status=ok
// SIG undefined FUN_142766200(void)

void FUN_142766200(void)

{
  FUN_1447a1747(DAT_14c844ec0,DAT_14c844ec8);
  if (DAT_14c844ec0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142766232 FUN_142766232 body=125 status=ok
// SIG undefined FUN_142766232(void)

undefined4 * FUN_142766232(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  if ((*(byte *)((longlong)param_1 + 0x19) & 1) == 0) {
    memcpy(param_2 + 1,L"Cannot call release on a FIoBuffer unless it owns it\'s memory",0x7a);
    *(undefined2 *)((longlong)param_2 + 0x7e) = 0;
    uVar2 = 0xb;
  }
  else {
    uVar1 = *param_1;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    uVar2 = DAT_14c845dc8;
    memcpy(param_2 + 1,&DAT_14c845dcc,0x100);
    *(undefined8 *)(param_2 + 0x42) = uVar1;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1427662af FUN_1427662af body=56 status=ok
// SIG undefined FUN_1427662af(void)

void FUN_1427662af(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = DAT_14c844ed8;
  if (DAT_14c844ed8 != (longlong *)0x0) {
    plVar1 = (longlong *)*DAT_14c844ed8;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    FUN_1400020a8(plVar2);
    return;
  }
  return;
}



// FUNCTION 1427662e8 FUN_1427662e8 body=291 status=ok
// SIG undefined FUN_1427662e8(void)

void * FUN_1427662e8(void *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
  uVar5 = FUN_14001cc68(0xf8,0x10);
  if (DAT_14c846b14 == '\x01') {
    bVar3 = DAT_14c83f0f8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) &&
       (FUN_144b3d300(&DAT_14c83f0fc), bVar3 = DAT_14c83f0f8, DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar3 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar3 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
      bVar3 = DAT_14c83f0f8;
    }
  }
  else {
    bVar3 = 1;
  }
  FUN_145ec2b8a(uVar5,bVar3);
  *puVar4 = uVar5;
  plVar2 = DAT_14c844ed8;
  if (DAT_14c844ed8 != (longlong *)0x0) {
    plVar1 = (longlong *)*DAT_14c844ed8;
    DAT_14c844ed8 = puVar4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    FUN_1400020a8(plVar2);
    puVar4 = DAT_14c844ed8;
  }
  DAT_14c844ed8 = puVar4;
  memcpy(param_1,&DAT_14c845dc8,0x104);
  return param_1;
}



// FUNCTION 14276640c FUN_14276640c body=193 status=ok
// SIG undefined FUN_14276640c(void)

void FUN_14276640c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x60);
  local_30 = param_2;
  if (lVar3 == 0) {
    FUN_1400eec8e(plVar1,&local_30);
  }
  else {
    if ((*(char *)(param_1 + 0x68) == '\x01') && (lVar4 = *plVar1, lVar4 != 0)) {
      LOCK();
      piVar2 = (int *)(lVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        FUN_144716208(lVar4);
        FUN_1400020a8(lVar4);
      }
    }
    uVar5 = local_30;
    plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = lVar3;
    *(int *)(plVar6 + 1) = (int)uVar5;
    *(char *)(plVar6 + 3) = (char)((ulonglong)uVar5 >> 0x20);
    *(undefined1 *)((longlong)plVar6 + 0x19) = 0;
    *plVar1 = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427664ce FUN_1427664ce body=3759 status=ok
// SIG undefined FUN_1427664ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1427664ce(int *param_1,wchar_t *param_2,ulonglong param_3,undefined1 (*param_4) [16])

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Src;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  int iVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  size_t sVar17;
  ulonglong uVar18;
  char *pcVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  int *piVar24;
  char *pcVar25;
  undefined1 auStack_128 [32];
  int *local_108;
  undefined1 (*local_100) [16];
  void *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  int *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  int *local_c8;
  int local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int iStack_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined1 local_78 [16];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar8 = (longlong *)FUN_1400dbadc();
  plVar9 = (longlong *)*plVar8;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)FUN_140e92164();
    *plVar8 = (longlong)plVar9;
  }
  sVar17 = 0;
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0xe8))(plVar9,param_2,0);
  if (plVar9 == (longlong *)0x0) {
    local_98._0_4_ = 4;
    iStack_90 = 0;
    uStack_8c = 0;
    iStack_88 = 0;
    uStack_84 = 0;
    FUN_1400020e8(&iStack_90,L"Failed to open IoStore TOC file \'",0x21);
    if (param_2 != (wchar_t *)0x0) {
      sVar17 = wcslen(param_2);
    }
    FUN_1400020e8(&iStack_90,param_2,sVar17 & 0xffffffff);
    FUN_1400020e8(&iStack_90,&DAT_149e0208a,1);
    pvVar11 = (void *)CONCAT44(uStack_8c,iStack_90);
    iVar13 = iStack_88 + -1;
    if (iStack_88 == 0) {
      iVar13 = 0;
    }
    iVar7 = 0x7f;
    if (iVar13 < 0x7f) {
      iVar7 = iVar13;
    }
    *param_1 = (int)local_98;
    memcpy(param_1 + 1,pvVar11,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)param_1 + (longlong)iVar7 * 2 + 4) = 0;
    if (pvVar11 != (void *)0x0) {
      FUN_1400020a8(pvVar11);
    }
    goto LAB_14276670d;
  }
  cVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,param_4,0x90);
  if (cVar5 == '\0') {
    pwVar14 = L"Failed to read IoStore TOC file \'";
    uVar16 = 0x21;
LAB_142766671:
    uStack_84 = 0;
    iStack_88 = 0;
    uStack_8c = 0;
    iStack_90 = 0;
    local_98._0_4_ = 9;
    FUN_1400020e8(&iStack_90,pwVar14,uVar16);
    sVar17 = 0;
    if (param_2 != (wchar_t *)0x0) {
      sVar17 = wcslen(param_2);
    }
    FUN_1400020e8(&iStack_90,param_2,sVar17);
    FUN_1400020e8(&iStack_90,&DAT_149e0208a,1);
    pvVar11 = (void *)CONCAT44(uStack_8c,iStack_90);
    iVar13 = iStack_88 + -1;
    if (iStack_88 == 0) {
      iVar13 = 0;
    }
    iVar7 = 0x7f;
    if (iVar13 < 0x7f) {
      iVar7 = iVar13;
    }
    *param_1 = (int)local_98;
    memcpy(param_1 + 1,pvVar11,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)param_1 + (longlong)iVar7 * 2 + 4) = 0;
  }
  else {
    if (*param_4 != _DAT_149e1a190) {
      pwVar14 = L"TOC header magic mismatch while reading \'";
      uVar16 = 0x29;
      goto LAB_142766671;
    }
    if (*(int *)(param_4[1] + 4) != 0x90) {
      pwVar14 = L"TOC header size mismatch while reading \'";
      uVar16 = 0x28;
      goto LAB_142766671;
    }
    if (*(int *)param_4[2] != 0xc) {
      pwVar14 = L"TOC compressed block entry size mismatch while reading \'";
      uVar16 = 0x38;
      goto LAB_142766671;
    }
    if ((byte)param_4[1][0] < 2) {
      pwVar14 = L"Outdated TOC header version while reading \'";
      uVar16 = 0x2b;
      goto LAB_142766671;
    }
    if (8 < (byte)param_4[1][0]) {
      pwVar14 = L"Too new TOC header version while reading \'";
      uVar16 = 0x2a;
      goto LAB_142766671;
    }
    lVar10 = (**(code **)(*plVar9 + 0x50))(plVar9);
    uVar6 = *(uint *)(param_4[1] + 8);
    uVar20 = 0;
    if ((param_3 & 1) != 0) {
      uVar20 = (ulonglong)*(uint *)param_4[3];
    }
    sVar17 = ((lVar10 - 0x90U) - (ulonglong)*(uint *)param_4[3]) + (ulonglong)uVar6 * -0x18 + uVar20
    ;
    if ((param_3 & 2) != 0) {
      sVar17 = lVar10 - 0x90U;
    }
    pvVar11 = (void *)FUN_14001cc68(sVar17 + (sVar17 == 0));
    memset(pvVar11,0,sVar17);
    local_f8 = pvVar11;
    if (sVar17 == 0) {
LAB_14276696f:
      iVar13 = *(int *)(param_4[9] + 0xc);
      *(uint *)(param_4[9] + 8) = uVar6;
      if (iVar13 == 0 && uVar6 == 0) {
        *(undefined4 *)(param_4[9] + 0xc) = 0;
      }
      else {
        FUN_141705144(param_4 + 9,uVar6);
        if (uVar6 != 0) {
          memcpy(*(void **)param_4[9],local_f8,(longlong)(int)uVar6 * 0xc);
        }
      }
      uVar6 = *(uint *)(param_4[1] + 8);
      iVar13 = *(int *)(param_4[10] + 0xc);
      pvVar11 = (void *)((longlong)local_f8 + (ulonglong)uVar6 * 0xc);
      *(uint *)(param_4[10] + 8) = uVar6;
      if (iVar13 == 0 && uVar6 == 0) {
        *(undefined4 *)(param_4[10] + 0xc) = 0;
      }
      else {
        FUN_141705292(param_4 + 10,(ulonglong)uVar6);
        if (uVar6 != 0) {
          memcpy(*(void **)param_4[10],pvVar11,(longlong)(int)uVar6 * 10);
        }
      }
      local_108 = (int *)((longlong)pvVar11 + (ulonglong)*(uint *)(param_4[1] + 8) * 10);
      if ((byte)param_4[1][0] < 5) {
        uVar6 = 0;
        if (param_4[1][0] == 4) goto LAB_142766a48;
      }
      else {
        uVar6 = *(uint *)param_4[6];
LAB_142766a48:
        uVar23 = *(uint *)(param_4[5] + 4);
        if ((longlong)(int)uVar23 != 0) {
          uVar3 = *(undefined4 *)(param_4[0xb] + 0xc);
          *(uint *)(param_4[0xb] + 8) = uVar23;
          FUN_144a06ca8(param_4 + 0xb,uVar23,uVar3);
          piVar24 = local_108;
          memcpy(*(void **)param_4[0xb],local_108,(longlong)(int)uVar23 << 2);
          local_108 = (int *)((longlong)piVar24 + (ulonglong)uVar23 * 4);
        }
        if (uVar6 != 0) {
          uVar3 = *(undefined4 *)(param_4[0xc] + 0xc);
          *(uint *)(param_4[0xc] + 8) = uVar6;
          FUN_144a06ca8(param_4 + 0xc,uVar6,uVar3);
          piVar24 = local_108;
          memcpy(*(void **)param_4[0xc],local_108,(longlong)(int)uVar6 << 2);
          local_108 = (int *)((longlong)piVar24 + (ulonglong)uVar6 * 4);
        }
      }
      iVar13 = *(int *)(param_4[1] + 0xc);
      iVar7 = *(int *)(param_4[0xd] + 0xc);
      *(int *)(param_4[0xd] + 8) = iVar13;
      if (iVar7 == 0 && iVar13 == 0) {
        *(undefined4 *)(param_4[0xd] + 0xc) = 0;
      }
      else {
        FUN_1417053e0(param_4 + 0xd,iVar13);
        if (iVar13 != 0) {
          memcpy(*(void **)param_4[0xd],local_108,(longlong)iVar13 * 0xc);
        }
      }
      iVar13 = *(int *)(param_4[2] + 4) + 1;
      if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar13);
      }
      uVar6 = *(uint *)(param_4[1] + 0xc);
      local_100 = param_4 + 0xe;
      uVar23 = *(uint *)(param_4[0xe] + 0xc);
      if ((int)uVar23 < iVar13) {
        FUN_1402191ca(local_100);
        uVar23 = *(uint *)(param_4[0xe] + 0xc);
      }
      iVar13 = *(int *)(param_4[0xe] + 8);
      uVar12 = iVar13 + 1;
      *(uint *)(param_4[0xe] + 8) = uVar12;
      if (uVar23 < uVar12) {
        FUN_1446f84a2(local_100);
      }
      local_108 = (int *)((longlong)local_108 + (ulonglong)uVar6 * 0xc);
      *(undefined8 *)(*(longlong *)param_4[0xe] + (longlong)iVar13 * 8) = 0;
      uVar6 = 0;
      if (*(int *)(param_4[2] + 4) != 0) {
        uVar23 = 0;
        do {
          uVar20 = (ulonglong)(*(int *)(param_4[2] + 8) * uVar23);
          pcVar25 = (char *)((longlong)local_108 + uVar20);
          if (pcVar25 == (char *)0x0) {
LAB_142766cc0:
            uVar15 = 0;
            uVar20 = 0;
          }
          else {
            sVar17 = strlen(pcVar25);
            iVar13 = (int)sVar17;
            if (iVar13 == 0) goto LAB_142766cc0;
            lVar10 = (longlong)iVar13;
            pcVar19 = pcVar25 + lVar10 + -1;
            if (pcVar19 < pcVar25) {
              lVar22 = 0;
            }
            else {
              uVar15 = 0;
              do {
                if (9 < (byte)(*pcVar19 - 0x30U)) break;
                uVar15 = (ulonglong)((int)uVar15 + 1);
                pcVar19 = pcVar19 + -1;
              } while (pcVar25 <= pcVar19);
              uVar6 = (uint)uVar15;
              if (((((uVar6 == 0) || (iVar13 <= (int)uVar6)) || (10 < uVar6)) ||
                  (pcVar25[-uVar15 + lVar10 + -1] != '_')) ||
                 ((uVar6 != 1 && (pcVar25[-uVar15 + lVar10] == '0')))) {
LAB_142766c40:
                lVar22 = 0;
              }
              else {
                uVar18 = 0;
                lVar21 = 0;
                do {
                  lVar22 = (longlong)
                           *(char *)((longlong)local_108 + uVar18 + ((lVar10 + uVar20) - uVar15)) +
                           lVar21 * 10;
                  lVar21 = lVar22 + -0x30;
                  uVar18 = uVar18 + 1;
                } while (uVar15 != uVar18);
                if (0x7ffffffe < lVar21) goto LAB_142766c40;
                iVar13 = ~uVar6 + iVar13;
                lVar22 = lVar22 + -0x2f;
              }
              if (iVar13 == 0) goto LAB_142766cc0;
            }
            uStack_8c = uStack_8c & 0xffffff00;
            iStack_90 = iVar13;
            local_98 = pcVar25;
            uVar6 = FUN_14001a6c0(&local_98);
            uVar20 = lVar22 << 0x20;
            uVar15 = (ulonglong)uVar6;
          }
          iVar13 = *(int *)(param_4[0xe] + 8);
          uVar6 = iVar13 + 1;
          *(uint *)(param_4[0xe] + 8) = uVar6;
          if (*(uint *)(param_4[0xe] + 0xc) < uVar6) {
            FUN_1446f84a2(local_100);
          }
          *(ulonglong *)(*(longlong *)param_4[0xe] + (longlong)iVar13 * 8) = uVar20 | uVar15;
          uVar23 = uVar23 + 1;
          uVar6 = *(uint *)(param_4[2] + 4);
        } while (uVar23 < uVar6);
      }
      iVar13 = *(int *)(param_4[2] + 8);
      bVar2 = param_4[5][0];
      plVar8 = (longlong *)FUN_14626b6bc();
      if ((longlong *)*plVar8 == (longlong *)0x0 || (int)plVar8[1] == 0) {
        cVar5 = '\0';
      }
      else {
        cVar5 = (**(code **)(*(longlong *)*plVar8 + 0x30))();
      }
      piVar24 = (int *)((longlong)local_108 + (ulonglong)(uVar6 * iVar13));
      local_108 = piVar24;
      if (((bVar2 & 4) != 0) || (cVar5 != '\0')) {
        if ((bVar2 & 4) == 0) {
          *param_1 = 0xc;
          builtin_wcsncpy((wchar_t *)(param_1 + 1),L"Miss",4);
          builtin_wcsncpy((wchar_t *)(param_1 + 3),L"ing ",4);
          builtin_wcsncpy((wchar_t *)(param_1 + 5),L"sign",4);
          builtin_wcsncpy((wchar_t *)(param_1 + 7),L"atur",4);
          param_1[9] = 0x65;
          pvVar11 = local_f8;
          goto joined_r0x0001427666f6;
        }
        local_100 = (undefined1 (*) [16])(longlong)*piVar24;
        local_e0 = piVar24 + 1;
        lVar10 = (longlong)piVar24 + (longlong)local_100 + 4;
        FUN_140f0be04(local_e0,(longlong)local_100 * 2,param_4 + 0xf);
        iVar13 = *(int *)(param_4[1] + 0xc);
        iVar7 = *piVar24;
        iVar4 = *(int *)(param_4[0x11] + 4);
        *(int *)param_4[0x11] = iVar13;
        local_e8 = lVar10;
        if (iVar4 == 0 && iVar13 == 0) {
          *(undefined4 *)(param_4[0x11] + 4) = 0;
        }
        else {
          FUN_1467f2208(param_4[0x10] + 8,iVar13);
          if (iVar13 != 0) {
            memcpy(*(void **)(param_4[0x10] + 8),(void *)(iVar7 + lVar10),(longlong)iVar13 * 0x14);
          }
        }
        local_108 = (int *)(iVar7 + lVar10 + (longlong)iVar13 * 0x14);
        plVar8 = (longlong *)FUN_14626b6bc();
        if ((longlong *)*plVar8 != (longlong *)0x0 && (int)plVar8[1] != 0) {
          cVar5 = (**(code **)(*(longlong *)*plVar8 + 0x30))();
          if (cVar5 != '\0') {
            local_f0 = *(undefined8 *)(param_4[0x10] + 8);
            iVar13 = *(int *)param_4[0x11];
            if (DAT_14c8451c8 == '\0') {
              plVar8 = (longlong *)FUN_14626b6bc();
              pcVar25 = local_98;
              if ((longlong *)*plVar8 != (longlong *)0x0 && (int)plVar8[1] != 0) {
                cVar5 = (**(code **)(*(longlong *)*plVar8 + 0x30))();
                pcVar25 = local_98;
                if (cVar5 != '\0') {
                  local_98._0_4_ = 0;
                  local_98._4_4_ = 0;
                  iStack_90 = 0;
                  uStack_8c = 0;
                  local_78 = (undefined1  [16])0x0;
                  if ((int)plVar8[1] == 0) {
                    plVar8 = (longlong *)0x0;
                  }
                  else {
                    plVar8 = (longlong *)*plVar8;
                  }
                  (**(code **)(*plVar8 + 0x58))(0,&local_98,local_78);
                  plVar8 = (longlong *)FUN_142768407();
                  local_a8._0_12_ = local_78._0_12_;
                  local_b8._0_12_ = ZEXT812(0);
                  local_c8 = (int *)CONCAT44(local_98._4_4_,(int)local_98);
                  local_c0 = iStack_90;
                  DAT_14c8451c0 = (**(code **)(*plVar8 + 8))(plVar8);
                  if (local_78._0_8_ != 0) {
                    FUN_1400020a8();
                  }
                  pcVar25 = (char *)0x0;
                  if (CONCAT44(local_98._4_4_,(int)local_98) != 0) {
                    FUN_1400020a8();
                    pcVar25 = (char *)CONCAT44(local_98._4_4_,(int)local_98);
                  }
                }
              }
              local_98 = pcVar25;
              DAT_14c8451c8 = '\x01';
            }
            lVar10 = DAT_14c8451c0;
            if (DAT_14c8451c0 == 0) {
              *param_1 = 0xc;
              builtin_wcsncpy((wchar_t *)(param_1 + 1),L"Inva",4);
              builtin_wcsncpy((wchar_t *)(param_1 + 3),L"lid ",4);
              builtin_wcsncpy((wchar_t *)(param_1 + 5),L"sign",4);
              builtin_wcsncpy((wchar_t *)(param_1 + 7),L"ing ",4);
              *(undefined8 *)((longlong)param_1 + 0x22) = 0x790065006b0020;
              *(undefined2 *)((longlong)param_1 + 0x2a) = 0;
              pvVar11 = local_f8;
            }
            else {
              local_a8 = (undefined1  [16])0x0;
              local_b8 = (undefined1  [16])0x0;
              plVar8 = (longlong *)FUN_142768407();
              local_c8 = local_e0;
              local_c0 = (int)local_100;
              iVar7 = (**(code **)(*plVar8 + 0x38))(plVar8,&local_c8,local_a8,lVar10);
              if (iVar7 == 0x14) {
                plVar8 = (longlong *)FUN_142768407();
                local_d8 = local_e8;
                local_d0 = SUB84(local_100,0);
                iVar7 = (**(code **)(*plVar8 + 0x38))(plVar8,&local_d8,local_b8,lVar10);
                if (iVar7 == 0x14) {
                  iStack_88 = 0;
                  local_98._0_4_ = 0;
                  local_98._4_4_ = 0;
                  iStack_90 = 0;
                  uStack_8c = 0;
                  local_68 = 0;
                  local_78 = (undefined1  [16])0x0;
                  FUN_140f0be04(param_4,0x90,&local_98);
                  FUN_140f0be04(local_f0,(longlong)iVar13 * 0x14,local_78);
                  iVar13 = memcmp((void *)local_a8._0_8_,&local_98,(longlong)(int)local_a8._8_4_);
                  if (iVar13 == 0) {
                    iVar13 = memcmp((void *)local_b8._0_8_,local_78,(longlong)(int)local_b8._8_4_);
                    if (iVar13 == 0) {
                      memcpy(param_1,&DAT_14c845dc8,0x104);
                    }
                    else {
                      *param_1 = 0xc;
                      builtin_wcsncpy((wchar_t *)(param_1 + 1),L"Inva",4);
                      builtin_wcsncpy((wchar_t *)(param_1 + 3),L"lid ",4);
                      builtin_wcsncpy((wchar_t *)(param_1 + 5),L"bloc",4);
                      builtin_wcsncpy((wchar_t *)(param_1 + 7),L"k si",4);
                      builtin_wcsncpy((wchar_t *)((longlong)param_1 + 0x22),L"igna",4);
                      builtin_wcsncpy((wchar_t *)((longlong)param_1 + 0x2a),L"ture",4);
                      *(undefined2 *)((longlong)param_1 + 0x32) = 0;
                    }
                  }
                  else {
                    *param_1 = 0xc;
                    builtin_wcsncpy((wchar_t *)(param_1 + 1),L"Inva",4);
                    builtin_wcsncpy((wchar_t *)(param_1 + 3),L"lid ",4);
                    builtin_wcsncpy((wchar_t *)(param_1 + 5),L"TOC ",4);
                    builtin_wcsncpy((wchar_t *)(param_1 + 7),L"sign",4);
                    builtin_wcsncpy((wchar_t *)((longlong)param_1 + 0x1e),L"igna",4);
                    builtin_wcsncpy((wchar_t *)((longlong)param_1 + 0x26),L"ture",4);
                    *(undefined2 *)((longlong)param_1 + 0x2e) = 0;
                  }
                }
                else {
                  *param_1 = 0xc;
                  memcpy(param_1 + 1,L"Failed to decrypt block signature",0x42);
                  *(undefined2 *)((longlong)param_1 + 0x46) = 0;
                }
              }
              else {
                *param_1 = 0xc;
                builtin_wcsncpy((wchar_t *)(param_1 + 1),L"Fail",4);
                builtin_wcsncpy((wchar_t *)(param_1 + 3),L"ed t",4);
                builtin_wcsncpy((wchar_t *)(param_1 + 5),L"o de",4);
                builtin_wcsncpy((wchar_t *)(param_1 + 7),L"cryp",4);
                builtin_wcsncpy((wchar_t *)(param_1 + 9),L"t TO",4);
                builtin_wcsncpy((wchar_t *)(param_1 + 0xb),L"C si",4);
                builtin_wcsncpy((wchar_t *)((longlong)param_1 + 0x32),L"igna",4);
                builtin_wcsncpy((wchar_t *)((longlong)param_1 + 0x3a),L"ture",4);
                *(undefined2 *)((longlong)param_1 + 0x42) = 0;
              }
              if (local_b8._0_8_ != 0) {
                FUN_1400020a8();
              }
              if (local_a8._0_8_ != 0) {
                FUN_1400020a8();
              }
              pvVar11 = local_f8;
              if (*param_1 == 0) goto LAB_142766d5f;
            }
            goto joined_r0x0001427666f6;
          }
        }
      }
LAB_142766d5f:
      if (((param_3 & 1) != 0) &&
         (iVar13 = *(int *)param_4[3], iVar13 != 0 && (param_4[5][0] & 8) != 0)) {
        uVar3 = *(undefined4 *)(param_4[0x12] + 4);
        *(int *)param_4[0x12] = iVar13;
        FUN_1447a127e(param_4[0x11] + 8,iVar13,uVar3);
        memcpy(*(void **)(param_4[0x11] + 8),local_108,(longlong)iVar13);
      }
      if ((param_3 & 2) != 0) {
        local_108 = (int *)((longlong)local_108 + (ulonglong)*(uint *)param_4[3]);
        plVar8 = (longlong *)(param_4[0x12] + 8);
        uVar6 = *(uint *)(param_4[1] + 8);
        uVar20 = (ulonglong)uVar6;
        if ((byte)param_4[1][0] < 8) {
          if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar20);
          }
          if (*(int *)(param_4[0x13] + 4) < (int)uVar6) {
            FUN_1467f22f0(plVar8,uVar20);
          }
          if (uVar6 != 0) {
            piVar24 = (int *)(uVar20 * 0x21 + (longlong)local_108);
            do {
              iVar13 = *(int *)param_4[0x13];
              lVar10 = (longlong)iVar13;
              *(uint *)param_4[0x13] = iVar13 + 1U;
              if (*(uint *)(param_4[0x13] + 4) < iVar13 + 1U) {
                FUN_1467f2360(plVar8,iVar13);
              }
              lVar22 = *plVar8;
              puVar1 = (undefined8 *)(lVar22 + lVar10 * 0x18);
              *puVar1 = 0;
              puVar1[1] = 0;
              *(undefined8 *)(lVar22 + 0x10 + lVar10 * 0x18) = 0;
              uVar16 = *(undefined8 *)(local_108 + 2);
              puVar1 = (undefined8 *)(lVar22 + lVar10 * 0x18);
              *puVar1 = *(undefined8 *)local_108;
              puVar1[1] = uVar16;
              *(int *)(lVar22 + 0x10 + lVar10 * 0x18) = local_108[4];
              *(char *)(lVar22 + 0x14 + lVar10 * 0x18) = (char)local_108[8];
              local_108 = (int *)((longlong)local_108 + 0x21);
            } while (local_108 != piVar24);
          }
        }
        else {
          iVar13 = *(int *)(param_4[0x13] + 4);
          *(uint *)param_4[0x13] = uVar6;
          if (iVar13 == 0 && uVar6 == 0) {
            *(undefined4 *)(param_4[0x13] + 4) = 0;
          }
          else {
            FUN_1467f227c(plVar8,uVar6);
            if (uVar6 != 0) {
              memcpy((void *)*plVar8,local_108,(longlong)(int)uVar6 * 0x18);
            }
          }
        }
      }
      if ((byte)param_4[1][0] < 3) {
        *(undefined4 *)(param_4[3] + 4) = 1;
        *(undefined8 *)(param_4[5] + 8) = 0xffffffffffffffff;
      }
      memcpy(param_1,&DAT_14c845dc8,0x104);
      pvVar11 = local_f8;
    }
    else {
      cVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,pvVar11,sVar17);
      if (cVar5 != '\0') {
        uVar6 = *(uint *)(param_4[1] + 8);
        goto LAB_14276696f;
      }
      local_98._0_4_ = 9;
      iStack_90 = 0;
      uStack_8c = 0;
      iStack_88 = 0;
      uStack_84 = 0;
      FUN_1400020e8(&iStack_90,L"Failed to read IoStore TOC file \'",0x21);
      sVar17 = 0;
      if (param_2 != (wchar_t *)0x0) {
        sVar17 = wcslen(param_2);
      }
      FUN_1400020e8(&iStack_90,param_2,sVar17);
      FUN_1400020e8(&iStack_90,&DAT_149e0208a,1);
      _Src = (void *)CONCAT44(uStack_8c,iStack_90);
      iVar13 = iStack_88 + -1;
      if (iStack_88 == 0) {
        iVar13 = 0;
      }
      iVar7 = 0x7f;
      if (iVar13 < 0x7f) {
        iVar7 = iVar13;
      }
      *param_1 = (int)local_98;
      memcpy(param_1 + 1,_Src,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)param_1 + (longlong)iVar7 * 2 + 4) = 0;
      pvVar11 = local_f8;
      if (_Src != (void *)0x0) {
        FUN_1400020a8(_Src);
        pvVar11 = local_f8;
      }
    }
  }
joined_r0x0001427666f6:
  if (pvVar11 != (void *)0x0) {
    FUN_1400020a8(pvVar11);
  }
  (**(code **)*plVar9)(plVar9,1);
LAB_14276670d:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142767380 FUN_142767380 body=118 status=ok
// SIG undefined FUN_142767380(void)

longlong * FUN_142767380(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = param_2;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc84);
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_2 + 0x18);
    if ((longlong)iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x10);
      lVar4 = 0;
      do {
        (**(code **)(**(longlong **)(lVar2 + 8 + lVar4) + 0x10))();
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar3 * 0x18 != lVar4);
      iVar3 = *piVar1;
    }
  }
  *piVar1 = iVar3 + 1;
  return param_1;
}



// FUNCTION 1427673f6 FUN_1427673f6 body=88 status=ok
// SIG undefined FUN_1427673f6(void)

void FUN_1427673f6(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc84);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    lVar3 = (longlong)*(int *)(*param_1 + 0x18);
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(*param_1 + 0x10);
      lVar4 = 0;
      do {
        (**(code **)(**(longlong **)(lVar2 + 8 + lVar4) + 0x18))();
        lVar4 = lVar4 + 0x18;
      } while (lVar3 * 0x18 != lVar4);
    }
  }
  return;
}



// FUNCTION 142767454 FUN_142767454 body=115 status=ok
// SIG undefined FUN_142767454(void)

byte * FUN_142767454(byte *param_1,undefined8 *param_2,ulonglong param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  param_1[2] = (byte)param_3;
  param_1[3] = param_4;
  *(undefined8 *)(param_1 + 4) = *param_2;
  bVar1 = *param_1;
  bVar2 = (byte)(param_3 & 0xffffffff) & 0xf;
  if (param_4 < bVar2) {
    bVar2 = param_4;
  }
  *param_1 = bVar2;
  param_1[1] = (byte)((param_3 & 0xffffffff) >> 7) & 1;
  if (bVar1 != bVar2) {
    FUN_140bbd2e0(&DAT_14c86aa30,param_1 + 4,bVar1,bVar2);
    param_4 = param_1[3];
  }
  if (param_4 != 0) {
    puVar3 = (undefined8 *)FUN_141563408();
    (**(code **)*puVar3)(puVar3,param_1);
  }
  return param_1;
}



// FUNCTION 1427674c7 FUN_1427674c7 body=31 status=ok
// SIG undefined FUN_1427674c7(void)

wchar_t * FUN_1427674c7(byte param_1)

{
  if ((param_1 & 0xf) < 8) {
    return (wchar_t *)(&PTR_DAT_149e1e918)[param_1 & 0xf];
  }
  return L"UnknownVerbosity";
}



// FUNCTION 1427674e6 FUN_1427674e6 body=91 status=ok
// SIG undefined FUN_1427674e6(void)

void FUN_1427674e6(void)

{
  if (DAT_14c845018 != 0) {
    if (DAT_14c845010 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c845010)(DAT_14c845010,0);
    FUN_1446efa72(&DAT_14c845010,0,0,0x10);
    DAT_14c845018 = 0;
  }
  if (DAT_14c845010 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142767541 FUN_142767541 body=91 status=ok
// SIG undefined FUN_142767541(void)

void FUN_142767541(void)

{
  if (DAT_14c845028 != 0) {
    if (DAT_14c845020 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c845020)(DAT_14c845020,0);
    FUN_1446efa72(&DAT_14c845020,0,0,0x10);
    DAT_14c845028 = 0;
  }
  if (DAT_14c845020 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14276759c FUN_14276759c body=91 status=ok
// SIG undefined FUN_14276759c(void)

void FUN_14276759c(void)

{
  if (DAT_14c845038 != 0) {
    if (DAT_14c845030 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c845030)(DAT_14c845030,0);
    FUN_1446efa72(&DAT_14c845030,0,0,0x10);
    DAT_14c845038 = 0;
  }
  if (DAT_14c845030 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427675f7 FUN_1427675f7 body=69 status=ok
// SIG undefined FUN_1427675f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427675f7(void)

{
  _DAT_14c845048 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142767639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c845050,1);
  return;
}



// FUNCTION 14276763c FUN_14276763c body=49 status=ok
// SIG undefined FUN_14276763c(void)

void FUN_14276763c(void)

{
  FUN_1467eeb71(DAT_14c845058,DAT_14c845060);
  if (DAT_14c845058 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14276766e FUN_14276766e body=593 status=ok
// SIG undefined FUN_14276766e(void)

undefined8 * FUN_14276766e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = *param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  if ((DAT_14c845010 == (longlong *)0x0 || DAT_14c845018 == 0) ||
     (cVar4 = (**(code **)(*DAT_14c845010 + 0x30))(), cVar4 == '\0')) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_149e1bc60;
    puVar5[3] = *param_2;
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e1d2f0;
    plVar6[2] = (longlong)puVar5;
    if (puVar5 == (undefined8 *)0x0) {
LAB_142767789:
      param_1[2] = puVar5;
      plVar8 = (longlong *)param_1[3];
      if (plVar6 == plVar8) goto LAB_142767877;
      param_1[3] = plVar6;
      if (plVar8 == (longlong *)0x0) goto LAB_142767899;
    }
    else {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        puVar5[1] = puVar5;
        if ((longlong *)puVar5[2] != plVar6) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
          plVar8 = (longlong *)puVar5[2];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          puVar5[2] = plVar6;
        }
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        goto LAB_142767789;
      }
      puVar5[1] = puVar5;
      param_1[2] = puVar5;
      plVar8 = (longlong *)param_1[3];
      if (plVar8 == (longlong *)0x0) goto LAB_142767899;
      param_1[3] = 0;
    }
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_142767899;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_142767899;
    lVar7 = *plVar8;
  }
  else {
    plVar6 = DAT_14c845010;
    if (DAT_14c845018 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0x58))(plVar6,&local_40,param_2);
    plVar6 = local_38;
    if (local_38 == (longlong *)0x0) {
      param_1[2] = local_40;
      plVar8 = (longlong *)param_1[3];
      if (plVar8 != (longlong *)0x0) {
        param_1[3] = 0;
LAB_14276783c:
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x000142767867:
          plVar6 = local_38;
          if (iVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            plVar6 = local_38;
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      param_1[2] = local_40;
      plVar8 = (longlong *)param_1[3];
      if (local_38 == plVar8) {
        LOCK();
        plVar8 = local_38 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar8 = plVar6;
          goto joined_r0x000142767867;
        }
      }
      else {
        param_1[3] = local_38;
        if (plVar8 != (longlong *)0x0) goto LAB_14276783c;
      }
    }
LAB_142767877:
    plVar8 = plVar6;
    if (plVar8 == (longlong *)0x0) goto LAB_142767899;
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_142767899;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_142767899;
    lVar7 = *plVar8;
  }
  (**(code **)(lVar7 + 0x10))(plVar8);
LAB_142767899:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427678c0 FUN_1427678c0 body=90 status=ok
// SIG undefined FUN_1427678c0(void)

void FUN_1427678c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1467e9432();
  plVar3 = (longlong *)param_1[3];
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
  FUN_145ec7255(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14276791a FUN_14276791a body=83 status=ok
// SIG undefined FUN_14276791a(void)

undefined8 * FUN_14276791a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1467f3144(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14276796e thunk_FUN_1467e9698 body=5 status=ok
// SIG undefined thunk_FUN_1467e9698(void)

void thunk_FUN_1467e9698(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1467f3144(param_1,iVar2);
  }
  FUN_1467f31c9((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 142767974 FUN_142767974 body=96 status=ok
// SIG undefined FUN_142767974(void)

undefined8 * FUN_142767974(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1467e96f6(param_2,1);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1467f3144(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1427679d4 FUN_1427679d4 body=96 status=ok
// SIG undefined FUN_1427679d4(void)

undefined8 * FUN_1427679d4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1467e96f6(param_2,3);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1467f3144(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142767a34 FUN_142767a34 body=96 status=ok
// SIG undefined FUN_142767a34(void)

undefined8 * FUN_142767a34(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1467e96f6(param_2,4);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1467f3144(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142767a94 FUN_142767a94 body=67 status=ok
// SIG undefined FUN_142767a94(void)

void FUN_142767a94(longlong param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1467e9432();
  lVar2 = **(longlong **)(param_1 + 0x10);
  if (param_3 == '\0') {
    iVar1 = (**(code **)(lVar2 + 0x40))(*(longlong **)(param_1 + 0x10),param_2);
    if (iVar1 < 1) {
      return;
    }
    lVar2 = **(longlong **)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000142767aca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))();
  return;
}



// FUNCTION 142767ad7 FUN_142767ad7 body=91 status=ok
// SIG undefined FUN_142767ad7(void)

void FUN_142767ad7(void)

{
  if (DAT_14c845078 != 0) {
    if (DAT_14c845070 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c845070)(DAT_14c845070,0);
    FUN_1446efa72(&DAT_14c845070,0,0,0x10);
    DAT_14c845078 = 0;
  }
  if (DAT_14c845070 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142767b32 FUN_142767b32 body=91 status=ok
// SIG undefined FUN_142767b32(void)

void FUN_142767b32(void)

{
  if (DAT_14c845088 != 0) {
    if (DAT_14c845080 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c845080)(DAT_14c845080,0);
    FUN_1446efa72(&DAT_14c845080,0,0,0x10);
    DAT_14c845088 = 0;
  }
  if (DAT_14c845080 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142767b8e FUN_142767b8e body=51 status=ok
// SIG undefined FUN_142767b8e(void)

float * FUN_142767b8e(float *param_1,double *param_2)

{
  *param_1 = (float)*param_2;
  param_1[1] = (float)param_2[1];
  param_1[2] = (float)param_2[2];
  param_1[3] = (float)param_2[3];
  return param_1;
}



// FUNCTION 142767bc2 FUN_142767bc2 body=194 status=ok
// SIG undefined FUN_142767bc2(void)

undefined1 * FUN_142767bc2(float *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = param_1[2];
  fVar10 = *param_1;
  fVar9 = param_1[1];
  fVar5 = fVar10;
  if (fVar10 <= fVar9) {
    fVar5 = fVar9;
  }
  if (fVar5 <= fVar8) {
    fVar5 = fVar8;
  }
  if (fVar5 < 1e-32) {
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
    cVar4 = '\0';
  }
  else {
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar5 = (float)logbf();
    dVar7 = ldexp(1.0,7 - (int)fVar5);
    fVar6 = (float)dVar7;
    uVar1 = (undefined1)(int)(fVar10 * fVar6);
    uVar2 = (undefined1)(int)(fVar9 * fVar6);
    uVar3 = (undefined1)(int)(fVar8 * fVar6);
    cVar4 = (char)(int)fVar5 + -0x7f;
  }
  *param_2 = uVar3;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  param_2[3] = cVar4;
  return param_2;
}



// FUNCTION 142767c96 FUN_142767c96 body=8 status=ok
// SIG undefined FUN_142767c96(void)

void FUN_142767c96(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  return;
}



// FUNCTION 142767c9e FUN_142767c9e body=39 status=ok
// SIG undefined FUN_142767c9e(void)

void FUN_142767c9e(void)

{
  if (DAT_14c845160 != 0) {
    FUN_1459c61d8();
    DAT_14c845160 = 0;
  }
  return;
}



// FUNCTION 142767ce8 FUN_142767ce8 body=125 status=ok
// SIG undefined FUN_142767ce8(void)

undefined8 FUN_142767ce8(longlong param_1)

{
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
  }
  (**(code **)(*DAT_14c872d28 + 0x78))();
  while ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))
              (*(longlong **)(param_1 + 0x88),0xffffffff,0);
    FUN_142767d66(param_1);
    FUN_144809d06(param_1);
  }
  FUN_142767d66(param_1);
  while (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_144809d06(param_1);
  }
  return 0;
}



// FUNCTION 142767d66 FUN_142767d66 body=1628 status=ok
// SIG undefined FUN_142767d66(void)

void FUN_142767d66(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  char *pcVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  char *pcVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  PSRWLOCK local_c0;
  longlong local_b8;
  char *local_b0;
  undefined8 *local_a8;
  char *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pcVar13 = (char *)(param_1 + 0xf2);
  puVar10 = (undefined8 *)(param_1 + 0x90);
  pcVar17 = (char *)(param_1 + 0xf3);
  local_90 = (undefined8 *)(param_1 + 0xa0);
  local_98 = (undefined8 *)(param_1 + 0xb0);
  local_c0 = (PSRWLOCK)(param_1 + 0x20);
  local_b0 = pcVar17;
  local_a8 = puVar10;
  local_a0 = pcVar13;
  do {
    LOCK();
    cVar3 = *pcVar13;
    if (cVar3 == '\0') {
      *pcVar13 = '\x01';
    }
    UNLOCK();
    if (cVar3 != '\0') {
      FUN_1447d2058(pcVar13);
    }
    puVar8 = (undefined8 *)*puVar10;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar10 = 0;
      puVar10[1] = 0;
    }
    LOCK();
    cVar3 = *pcVar13;
    if (cVar3 == '\x01') {
      *pcVar13 = '\0';
    }
    UNLOCK();
    if (cVar3 != '\x01') {
      FUN_14008cdb0(pcVar13);
    }
    LOCK();
    cVar3 = *pcVar17;
    if (cVar3 == '\0') {
      *pcVar17 = '\x01';
    }
    UNLOCK();
    if (cVar3 != '\0') {
      FUN_1447d2058(pcVar17);
    }
    local_c8 = *(longlong *)(param_1 + 0xa0);
    iVar15 = *(int *)(param_1 + 0xa8);
    *local_90 = 0;
    local_90[1] = 0;
    local_b8 = *(longlong *)(param_1 + 0xb0);
    iVar11 = *(int *)(param_1 + 0xb8);
    *local_98 = 0;
    local_98[1] = 0;
    LOCK();
    bVar19 = *(char *)(param_1 + 0xf3) == '\x01';
    if (bVar19) {
      *(char *)(param_1 + 0xf3) = '\0';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_14008cdb0(pcVar17);
    }
    if (iVar15 != 0) {
      lVar12 = 0;
      do {
        lVar16 = *(longlong *)(local_c8 + lVar12);
        if (*(char *)(lVar16 + 0xb8) == '\0') {
          *(undefined1 *)(lVar16 + 0xb8) = 1;
          plVar9 = *(longlong **)(lVar16 + 0x50);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x20))(plVar9,lVar16);
          }
        }
        LOCK();
        piVar2 = (int *)(lVar16 + 0xb0);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          piVar2 = *(int **)(lVar16 + 0x48);
          if (*(longlong *)(lVar16 + 0x70) != 0) {
            plVar9 = (longlong *)(lVar16 + 0x90);
            if (*(longlong **)(lVar16 + 0x80) != (longlong *)0x0) {
              plVar9 = *(longlong **)(lVar16 + 0x80);
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          if (*(char *)(lVar16 + 0x68) == '\x01') {
            lVar4 = *(longlong *)(lVar16 + 0x60);
            if (lVar4 != 0) {
              LOCK();
              piVar1 = (int *)(lVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                FUN_144716208(lVar4);
                FUN_1400020a8(lVar4);
              }
            }
            *(undefined1 *)(lVar16 + 0x68) = 0;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar2 + 8));
          *(undefined8 *)(lVar16 + 0xc0) = *(undefined8 *)(piVar2 + 4);
          *(longlong *)(piVar2 + 4) = lVar16;
          piVar2[6] = piVar2[6] + -1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 8));
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (piVar2 != (int *)0x0 && *piVar2 == 0) {
            FUN_1456cc566(piVar2 + 2);
            FUN_1400020a8(piVar2);
          }
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar15 * 8 != lVar12);
    }
    lVar12 = local_b8;
    if (iVar11 != 0) {
      lVar16 = 0;
      do {
        lVar4 = *(longlong *)(lVar12 + lVar16);
        plVar9 = *(longlong **)(lVar4 + 0x50);
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9,lVar4);
        }
        LOCK();
        piVar2 = (int *)(lVar4 + 0xb0);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          piVar2 = *(int **)(lVar4 + 0x48);
          if (*(longlong *)(lVar4 + 0x70) != 0) {
            plVar9 = (longlong *)(lVar4 + 0x90);
            if (*(longlong **)(lVar4 + 0x80) != (longlong *)0x0) {
              plVar9 = *(longlong **)(lVar4 + 0x80);
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          if (*(char *)(lVar4 + 0x68) == '\x01') {
            lVar5 = *(longlong *)(lVar4 + 0x60);
            if (lVar5 != 0) {
              LOCK();
              piVar1 = (int *)(lVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                FUN_144716208(lVar5);
                FUN_1400020a8(lVar5);
              }
            }
            *(undefined1 *)(lVar4 + 0x68) = 0;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar2 + 8));
          *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(piVar2 + 4);
          *(longlong *)(piVar2 + 4) = lVar4;
          piVar2[6] = piVar2[6] + -1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 8));
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (piVar2 != (int *)0x0 && *piVar2 == 0) {
            FUN_1456cc566(piVar2 + 2);
            FUN_1400020a8(piVar2);
          }
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)iVar11 * 8 != lVar16);
    }
    if (puVar8 == (undefined8 *)0x0) {
      if (lVar12 != 0) {
        FUN_1400020a8(lVar12);
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    iVar15 = 0;
    puVar10 = (undefined8 *)0x0;
    puVar18 = (undefined8 *)0x0;
    do {
      puVar6 = (undefined8 *)*puVar8;
      *puVar8 = 0;
      puVar7 = puVar18;
      if (*(char *)(puVar8 + 0x17) == '\x01') {
        uVar14 = 3;
LAB_1427680c3:
        FUN_1400f2382(param_1,puVar8,uVar14);
        LOCK();
        piVar2 = (int *)(puVar8 + 0x16);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          piVar2 = (int *)puVar8[9];
          if (puVar8[0xe] != 0) {
            plVar9 = puVar8 + 0x12;
            if ((longlong *)puVar8[0x10] != (longlong *)0x0) {
              plVar9 = (longlong *)puVar8[0x10];
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          if (*(char *)(puVar8 + 0xd) == '\x01') {
            lVar12 = puVar8[0xc];
            if (lVar12 != 0) {
              LOCK();
              piVar1 = (int *)(lVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                FUN_144716208(lVar12);
                FUN_1400020a8(lVar12);
              }
            }
            *(undefined1 *)(puVar8 + 0xd) = 0;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar2 + 8));
          puVar8[0x18] = *(undefined8 *)(piVar2 + 4);
          *(undefined8 **)(piVar2 + 4) = puVar8;
          piVar2[6] = piVar2[6] + -1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 8));
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (piVar2 != (int *)0x0 && *piVar2 == 0) {
            FUN_1456cc566(piVar2 + 2);
            FUN_1400020a8(piVar2);
          }
        }
      }
      else {
        if (*(int *)(puVar8 + 3) == DAT_14c845dc4 && puVar8[2] == DAT_14c845dbc) {
          uVar14 = 8;
          goto LAB_1427680c3;
        }
        puVar7 = puVar8;
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = puVar8;
          puVar7 = puVar18;
        }
        iVar15 = iVar15 + 1;
        puVar10 = puVar8;
      }
      puVar8 = puVar6;
      puVar18 = puVar7;
    } while (puVar6 != (undefined8 *)0x0);
    if (0 < iVar15) {
      AcquireSRWLockShared(local_c0);
      if ((longlong)*(int *)(param_1 + 0x30) == 0) {
        local_78 = puVar7;
        puStack_70 = puVar10;
        if (puVar7 != (undefined8 *)0x0) goto LAB_14276822d;
LAB_14276831e:
        iVar11 = 0;
      }
      else {
        lVar16 = *(longlong *)(param_1 + 0x28);
        lVar12 = lVar16 + (longlong)*(int *)(param_1 + 0x30) * 0x18;
        do {
          puStack_70 = (undefined8 *)0x0;
          local_78 = (undefined8 *)0x0;
          if (puVar7 != (undefined8 *)0x0) {
            uVar14 = *(undefined8 *)(lVar16 + 8);
            puVar8 = puVar7;
            do {
              puVar8[10] = uVar14;
              puVar8 = (undefined8 *)*puVar8;
            } while (puVar8 != (undefined8 *)0x0);
          }
          local_88 = puVar7;
          local_80 = puVar10;
          (**(code **)(**(longlong **)(lVar16 + 8) + 0x10))
                    (*(longlong **)(lVar16 + 8),&local_88,&local_78);
          puVar10 = puStack_70;
          puVar7 = local_78;
          local_78 = (undefined8 *)0x0;
          puStack_70 = (undefined8 *)0x0;
          if (puVar7 == (undefined8 *)0x0) goto LAB_14276831e;
          lVar16 = lVar16 + 0x18;
          puStack_70 = puVar10;
        } while (lVar16 != lVar12);
LAB_14276822d:
        iVar11 = 0;
        do {
          local_78 = (undefined8 *)*puVar7;
          if (local_78 == (undefined8 *)0x0) {
            puStack_70 = (undefined8 *)0x0;
          }
          *puVar7 = 0;
          puVar7[10] = 0;
          FUN_1400f2382(param_1,puVar7,8);
          LOCK();
          piVar2 = (int *)(puVar7 + 0x16);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            piVar2 = (int *)puVar7[9];
            if (puVar7[0xe] != 0) {
              plVar9 = puVar7 + 0x12;
              if ((longlong *)puVar7[0x10] != (longlong *)0x0) {
                plVar9 = (longlong *)puVar7[0x10];
              }
              (**(code **)(*plVar9 + 0x10))();
            }
            if (*(char *)(puVar7 + 0xd) == '\x01') {
              lVar12 = puVar7[0xc];
              if (lVar12 != 0) {
                LOCK();
                piVar1 = (int *)(lVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  FUN_144716208(lVar12);
                  FUN_1400020a8(lVar12);
                }
              }
              *(undefined1 *)(puVar7 + 0xd) = 0;
            }
            EnterCriticalSection((LPCRITICAL_SECTION)(piVar2 + 8));
            puVar7[0x18] = *(undefined8 *)(piVar2 + 4);
            *(undefined8 **)(piVar2 + 4) = puVar7;
            piVar2[6] = piVar2[6] + -1;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 8));
            LOCK();
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (piVar2 != (int *)0x0 && *piVar2 == 0) {
              FUN_1456cc566(piVar2 + 2);
              FUN_1400020a8(piVar2);
            }
          }
          iVar11 = iVar11 + 1;
          puVar7 = local_78;
        } while (local_78 != (undefined8 *)0x0);
      }
      *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + (longlong)(iVar15 - iVar11);
      ReleaseSRWLockShared(local_c0);
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    pcVar13 = local_a0;
    puVar10 = local_a8;
    pcVar17 = local_b0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  } while( true );
}



// FUNCTION 1427683c4 FUN_1427683c4 body=67 status=ok
// SIG undefined FUN_1427683c4(void)

void FUN_1427683c4(int *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *param_1;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 1) = 0;
  if ((iVar2 == 0) && (lVar3 = *(longlong *)(param_1 + 0x42), lVar3 != 0)) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar3);
      FUN_1400020a8(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 142768407 FUN_142768407 body=687 status=ok
// SIG undefined FUN_142768407(void)

undefined8 FUN_142768407(void)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8451b0) {
    FUN_144b3d300(&DAT_14c8451b0);
    if (DAT_14c8451b0 == -1) {
      DAT_14c8451a0 = (undefined8 *)0x0;
      uRam000000014c8451a8 = 0;
      atexit((_func_5014 *)&LAB_1427686b7);
      _Init_thread_footer(&DAT_14c8451b0);
    }
  }
  if (DAT_14c84519c == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
    if (DAT_14c84519c == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c8338a0) {
        FUN_144b3d300(&DAT_14c8338a0);
        if (DAT_14c8338a0 == -1) {
          FUN_1456d85e6(&DAT_14c8337f0);
          atexit((_func_5014 *)&LAB_142748837);
          _Init_thread_footer(&DAT_14c8338a0);
        }
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c8451bc) {
        FUN_144b3d300(&DAT_14c8451bc);
        if (DAT_14c8451bc == -1) {
          FUN_1446f470e(&DAT_14c8451b4,L"EngineCryptoFeature",1);
          _Init_thread_footer(&DAT_14c8451bc);
        }
      }
      FUN_1467eea62(&DAT_14c8337f0,&local_18,DAT_14c8451b4);
      if (DAT_14c8451a0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      DAT_14c8451a0 = (undefined8 *)CONCAT44(uStack_14,local_18);
      uRam000000014c8451a8 = CONCAT44(uStack_c,uStack_10);
      DAT_14c84519c = '\x01';
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *DAT_14c8451a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427686c8 FUN_1427686c8 body=450 status=ok
// SIG undefined FUN_1427686c8(void)

void FUN_1427686c8(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [16];
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_40;
  undefined4 local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = (wchar_t *)CONCAT44(local_40._4_4_,4);
  local_30 = (longlong *)*param_2;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_28 = (undefined4)param_2[1];
  FUN_140056680(local_68,L"PageTitle");
  FUN_140233eec(&local_58,local_68,&local_40);
  if (local_68[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  FUN_1413a400a(local_7c,L"BasicMessageLog_NewPage");
  FUN_1413a400a(local_80,L"MessageLog");
  local_40 = L"New Page: {PageTitle}";
  local_38 = 0x15;
  FUN_140208c1e(local_68,local_80,local_7c);
  FUN_14023409e(local_78,local_68,1);
  FUN_140233c04(&local_40,local_78,&local_58);
  pwVar2 = local_40;
  pwVar3 = local_40;
  if (*(code **)(*(longlong *)local_40 + 0x50) != FUN_144828418) {
    pwVar3 = (wchar_t *)(**(code **)(*(longlong *)local_40 + 0x50))(local_40);
  }
  FUN_1447a1fc0(pwVar3);
  pcVar1 = *(code **)(*(longlong *)pwVar2 + 0x28);
  if (pcVar1 != (code *)&LAB_14010c34c && pcVar1 != FUN_14482841c) {
    (*pcVar1)(pwVar2);
  }
  if (pwVar2 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar2 + 0x10))(pwVar2);
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276888c FUN_14276888c body=442 status=ok
// SIG undefined FUN_14276888c(void)

void FUN_14276888c(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [16];
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_40;
  ulonglong local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = (wchar_t *)CONCAT44(local_40._4_4_,1);
  local_30 = (longlong *)0x0;
  local_28 = 0;
  local_38 = param_2 & 0xffffffff;
  FUN_140056680(local_68,L"PageIndex");
  FUN_140233eec(&local_58,local_68,&local_40);
  if (local_68[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  FUN_1413a400a(local_7c,L"BasicMessageLog_SetCurrentPageIndex");
  FUN_1413a400a(local_80,L"MessageLog");
  local_40 = L"Set Current Page: {PageIndex}";
  local_38 = CONCAT44(local_38._4_4_,0x1d);
  FUN_140208c1e(local_68,local_80,local_7c);
  FUN_14023409e(local_78,local_68,1);
  FUN_140233c04(&local_40,local_78,&local_58);
  pwVar2 = local_40;
  pwVar3 = local_40;
  if (*(code **)(*(longlong *)local_40 + 0x50) != FUN_144828418) {
    pwVar3 = (wchar_t *)(**(code **)(*(longlong *)local_40 + 0x50))(local_40);
  }
  FUN_1447a1fc0(pwVar3);
  pcVar1 = *(code **)(*(longlong *)pwVar2 + 0x28);
  if (pcVar1 != (code *)&LAB_14010c34c && pcVar1 != FUN_14482841c) {
    (*pcVar1)(pwVar2);
  }
  if (pwVar2 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar2 + 0x10))(pwVar2);
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142768a48 FUN_142768a48 body=450 status=ok
// SIG undefined FUN_142768a48(void)

void FUN_142768a48(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [16];
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_40;
  undefined4 local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = (wchar_t *)CONCAT44(local_40._4_4_,4);
  local_30 = (longlong *)*param_2;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_28 = (undefined4)param_2[1];
  FUN_140056680(local_68,L"PageTitle");
  FUN_140233eec(&local_58,local_68,&local_40);
  if (local_68[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  FUN_1413a400a(local_7c,L"BasicMessageLog_SetCurrentPageTitle");
  FUN_1413a400a(local_80,L"MessageLog");
  local_40 = L"Set Current Page: {PageTitle}";
  local_38 = 0x1d;
  FUN_140208c1e(local_68,local_80,local_7c);
  FUN_14023409e(local_78,local_68,1);
  FUN_140233c04(&local_40,local_78,&local_58);
  pwVar2 = local_40;
  pwVar3 = local_40;
  if (*(code **)(*(longlong *)local_40 + 0x50) != FUN_144828418) {
    pwVar3 = (wchar_t *)(**(code **)(*(longlong *)local_40 + 0x50))(local_40);
  }
  FUN_1447a1fc0(pwVar3);
  pcVar1 = *(code **)(*(longlong *)pwVar2 + 0x28);
  if (pcVar1 != (code *)&LAB_14010c34c && pcVar1 != FUN_14482841c) {
    (*pcVar1)(pwVar2);
  }
  if (pwVar2 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar2 + 0x10))(pwVar2);
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142768c0c FUN_142768c0c body=450 status=ok
// SIG undefined FUN_142768c0c(void)

void FUN_142768c0c(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [16];
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_40;
  undefined4 local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = (wchar_t *)CONCAT44(local_40._4_4_,4);
  local_30 = (longlong *)*param_2;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_28 = (undefined4)param_2[1];
  FUN_140056680(local_68,L"Message");
  FUN_140233eec(&local_58,local_68,&local_40);
  if (local_68[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  FUN_1413a400a(local_7c,L"BasicMessageLog_Notify");
  FUN_1413a400a(local_80,L"MessageLog");
  local_40 = L"Notify: {Message}";
  local_38 = 0x11;
  FUN_140208c1e(local_68,local_80,local_7c);
  FUN_14023409e(local_78,local_68,1);
  FUN_140233c04(&local_40,local_78,&local_58);
  pwVar2 = local_40;
  pwVar3 = local_40;
  if (*(code **)(*(longlong *)local_40 + 0x50) != FUN_144828418) {
    pwVar3 = (wchar_t *)(**(code **)(*(longlong *)local_40 + 0x50))(local_40);
  }
  FUN_1447a1fc0(pwVar3);
  pcVar1 = *(code **)(*(longlong *)pwVar2 + 0x28);
  if (pcVar1 != (code *)&LAB_14010c34c && pcVar1 != FUN_14482841c) {
    (*pcVar1)(pwVar2);
  }
  if (pwVar2 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar2 + 0x10))(pwVar2);
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142768dd0 FUN_142768dd0 body=232 status=ok
// SIG undefined FUN_142768dd0(void)

void FUN_142768dd0(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  longlong *local_40 [2];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1413a400a(local_44,L"BasicMessageLog_Open");
  FUN_1413a400a(local_48,L"MessageLog");
  local_30 = L"Open Log";
  local_28 = 8;
  FUN_140208c1e(local_40,local_48,local_44);
  plVar2 = local_40[0];
  if (*(code **)(*local_40[0] + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*local_40[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  pcVar1 = *(code **)(*local_40[0] + 0x28);
  if (pcVar1 != (code *)&LAB_14010c34c && pcVar1 != FUN_14482841c) {
    (*pcVar1)();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142768eba FUN_142768eba body=251 status=ok
// SIG undefined FUN_142768eba(void)

void FUN_142768eba(longlong param_1,undefined8 *param_2,char param_3)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 != '\0') {
    if (((DAT_14c845038 != 0) && (DAT_14c845030 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*DAT_14c845030 + 0x30))(), cVar2 != '\0')) {
      plVar3 = DAT_14c845030;
      if (DAT_14c845038 == 0) {
        plVar3 = (longlong *)0x0;
      }
      cVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1 + 0x18,param_2);
      if (cVar2 == '\0') goto LAB_142768f21;
    }
    FUN_1467eb3c8(*param_2,local_28);
    plVar3 = local_28[0];
    if (*(code **)(*local_28[0] + 0x50) != FUN_144828418) {
      plVar3 = (longlong *)(**(code **)(*local_28[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar3);
    pcVar1 = *(code **)(*local_28[0] + 0x28);
    if (pcVar1 != (code *)&LAB_14010c34c && pcVar1 != FUN_14482841c) {
      (*pcVar1)();
    }
    if (local_28[0] != (longlong *)0x0) {
      (**(code **)(*local_28[0] + 0x10))();
    }
  }
LAB_142768f21:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142768fb6 FUN_142768fb6 body=1845 status=ok
// SIG undefined FUN_142768fb6(void)

void FUN_142768fb6(longlong param_1,byte *param_2)

{
  void *_Dst;
  bool bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong ****ppppuVar15;
  ulonglong *puVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined4 local_90;
  ulonglong ***local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong ***local_58;
  ulonglong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar3 = *param_2;
  uVar10 = bVar3 & 0x1f;
  if (0x1e < uVar10 - 1) goto switchD_142769007_caseD_15;
  puVar16 = *(ulonglong **)(param_2 + 8);
  switch(uVar10) {
  case 1:
    puVar5 = *(undefined8 **)(param_1 + 8);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar5 + 1) {
      FUN_140213274(param_1,4);
      puVar5 = *(undefined8 **)(param_1 + 8);
    }
    uVar9 = 0x6c006c0075006e;
    goto LAB_1427692fc;
  case 2:
  case 3:
    local_58._0_2_ = (ushort)(byte)uVar10;
    local_58 = (ulonglong ***)((ulonglong)local_58 & 0xffffffff);
    local_98 = "$text";
    local_90 = 5;
    local_50 = puVar16;
    FUN_14682240a(&local_58,&local_78);
    if (((ulonglong)local_78 & 0x1f) == 0) {
      bVar3 = *param_2;
      puVar16 = *(ulonglong **)(param_2 + 8);
      goto switchD_142769007_caseD_4;
    }
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_146821fac(&local_78,&local_58);
    ppppuVar15 = (ulonglong ****)local_58;
    uVar10 = (uint)local_50;
    local_7c = (uint)local_50;
    local_88 = local_58;
    iVar8 = 0;
    if (0 < (int)(uint)local_50) {
      uVar19 = 0x7fffffff;
      uVar7 = (uint)local_50;
      do {
        if (uVar19 == 0) goto LAB_14276968a;
        iVar2 = iVar8;
        if (((((ulonglong)local_88 & 7) == 0) && (local_7c = uVar7, 7 < uVar7)) &&
           (uVar4 = uVar19, 7 < (int)uVar19)) {
          while (iVar2 = iVar8, uVar7 = local_7c, uVar19 = uVar4,
                ((ulonglong)*local_88 & 0x8080808080808080) == 0) {
            local_88 = local_88 + 1;
            iVar8 = iVar8 + 8;
            uVar7 = local_7c - 8;
            uVar19 = uVar4 - 8;
            bVar1 = (int)local_7c < 0x10;
            iVar2 = iVar8;
            local_7c = uVar7;
            if ((bVar1) || (bVar1 = uVar4 < 0x10, uVar4 = uVar19, bVar1)) break;
          }
        }
LAB_1427695cc:
        do {
          iVar8 = iVar2;
          if (((int)uVar7 < 1) || ((int)uVar19 < 1)) break;
          uVar4 = FUN_14003e942(&local_88,&local_7c);
          uVar7 = local_7c;
          if (uVar4 < 0x10000) {
            uVar19 = uVar19 - 1;
            iVar2 = iVar8 + 1;
            if (0x7f < uVar4) goto LAB_1427695cc;
          }
          else {
            if (1 < uVar19) {
              uVar19 = uVar19 - 2;
              iVar2 = iVar8 + 2;
              goto LAB_1427695cc;
            }
            uVar19 = 0;
          }
          iVar8 = iVar8 + 1;
          iVar2 = iVar8;
        } while (((ulonglong)local_88 & 7) != 0);
      } while (0 < (int)uVar7);
    }
    goto LAB_14276968f;
  case 4:
  case 5:
  case 6:
  case 10:
  case 0xb:
  case 0x1e:
  case 0x1f:
switchD_142769007_caseD_4:
    local_78 = (ulonglong ****)(CONCAT71((int7)((ulonglong)local_78 >> 8),bVar3) & 0xffff003f);
    uStack_70 = puVar16;
    FUN_146824962(&local_78,param_1);
    break;
  case 7:
    uVar18 = (ulonglong)(byte)~(byte)*puVar16 * 2 + 1;
    uVar12 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> uVar12 == 0; uVar12 = uVar12 - 1) {
      }
    }
    uVar7 = 9 - (uint)uVar12;
    uVar10 = 0xffU >> ((byte)uVar7 & 0x1f) & (uint)(byte)*puVar16;
    if ((uint)uVar12 < 8) {
      pbVar6 = (byte *)((longlong)puVar16 + 1);
      uVar12 = uVar12 & 0xffffffff;
      puVar13 = puVar16;
      switch(uVar12) {
      case 0:
        uVar12 = 2;
      case 1:
        puVar13 = (ulonglong *)(uVar12 + (longlong)puVar16);
      case 2:
        pbVar6 = (byte *)((longlong)puVar13 + 2);
      case 3:
        pbVar6 = pbVar6 + 1;
      case 4:
        uVar10 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      case 5:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar10 = uVar10 << 8 | (uint)bVar3;
      case 6:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar10 = uVar10 << 8 | (uint)bVar3;
      case 7:
        uVar10 = uVar10 << 8 | (uint)*pbVar6;
      }
    }
    ppppuVar15 = (ulonglong ****)((longlong)puVar16 + (ulonglong)uVar7);
    local_58 = (ulonglong ***)CONCAT44(local_58._4_4_,uVar10);
    iVar8 = 0;
    local_78 = ppppuVar15;
    if (0 < (int)uVar10) {
      uVar7 = 0x7fffffff;
      uVar19 = uVar10;
      do {
        if (uVar7 == 0) goto LAB_14276968a;
        iVar2 = iVar8;
        if (((ulonglong)local_78 & 7) == 0) {
          if ((7 < uVar19) && (uVar4 = uVar7, 7 < (int)uVar7)) {
            while (uVar7 = uVar4, ((ulonglong)*local_78 & 0x8080808080808080) == 0) {
              local_78 = local_78 + 1;
              iVar8 = iVar8 + 8;
              uVar11 = uVar19 - 8;
              uVar7 = uVar4 - 8;
              bVar1 = (int)uVar19 < 0x10;
              uVar19 = uVar11;
              if ((bVar1) || (bVar1 = uVar4 < 0x10, uVar4 = uVar7, bVar1)) break;
            }
          }
          local_58 = (ulonglong ***)CONCAT44(local_58._4_4_,uVar19);
          iVar2 = iVar8;
        }
LAB_142769273:
        do {
          iVar8 = iVar2;
          if (((int)uVar19 < 1) || ((int)uVar7 < 1)) break;
          uVar4 = FUN_14003e942(&local_78,&local_58);
          uVar19 = (uint)local_58;
          if (uVar4 < 0x10000) {
            uVar7 = uVar7 - 1;
            iVar2 = iVar8 + 1;
            if (0x7f < uVar4) goto LAB_142769273;
          }
          else {
            if (1 < uVar7) {
              uVar7 = uVar7 - 2;
              iVar2 = iVar8 + 2;
              goto LAB_142769273;
            }
            uVar7 = 0;
          }
          iVar8 = iVar8 + 1;
          iVar2 = iVar8;
        } while (((ulonglong)local_78 & 7) != 0);
      } while (0 < (int)uVar19);
    }
LAB_14276968f:
    if (*(ulonglong *)(param_1 + 0x10) <=
        (ulonglong)((longlong)iVar8 * 2 + *(longlong *)(param_1 + 8))) {
      FUN_140213274(param_1);
    }
    if (uVar10 == 0) break;
    pwVar17 = (wchar_t *)FUN_1446e71a3(*(undefined8 *)(param_1 + 8),iVar8,ppppuVar15,uVar10);
    goto LAB_1427696b5;
  case 8:
    uVar18 = (ulonglong)(byte)~(byte)*puVar16 * 2 + 1;
    uVar12 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> uVar12 == 0; uVar12 = uVar12 - 1) {
      }
    }
    uVar10 = 0xffU >> (9U - (char)uVar12 & 0x1f) & (uint)(byte)*puVar16;
    uVar18 = (ulonglong)uVar10;
    if ((uint)uVar12 < 8) {
      pbVar6 = (byte *)((longlong)puVar16 + 1);
      switch(uVar12 & 0xffffffff) {
      case 0:
        uVar10 = (uint)*(byte *)((longlong)puVar16 + 1);
        pbVar6 = (byte *)((longlong)puVar16 + 2);
      case 1:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar10 = uVar10 << 8 | (uint)bVar3;
      case 2:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar18 = (ulonglong)(uVar10 << 8) | (ulonglong)bVar3;
      case 3:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar18 = uVar18 << 8 | (ulonglong)bVar3;
      case 4:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar18 = uVar18 << 8 | (ulonglong)bVar3;
      case 5:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar18 = uVar18 << 8 | (ulonglong)bVar3;
      case 6:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar18 = uVar18 << 8 | (ulonglong)bVar3;
      case 7:
        uVar18 = uVar18 << 8 | (ulonglong)*pbVar6;
      }
    }
    pwVar17 = L"%llu";
    goto LAB_1427693c1;
  case 9:
    uVar18 = (ulonglong)(byte)~(byte)*puVar16 * 2 + 1;
    uVar12 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> uVar12 == 0; uVar12 = uVar12 - 1) {
      }
    }
    uVar10 = 0xffU >> (9U - (char)uVar12 & 0x1f) & (uint)(byte)*puVar16;
    uVar18 = (ulonglong)uVar10;
    if ((uint)uVar12 < 8) {
      pbVar6 = (byte *)((longlong)puVar16 + 1);
      switch(uVar12 & 0xffffffff) {
      case 0:
        uVar10 = (uint)*(byte *)((longlong)puVar16 + 1);
        pbVar6 = (byte *)((longlong)puVar16 + 2);
      case 1:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar10 = uVar10 << 8 | (uint)bVar3;
      case 2:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar18 = (ulonglong)(uVar10 << 8) | (ulonglong)bVar3;
      case 3:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar18 = uVar18 << 8 | (ulonglong)bVar3;
      case 4:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar18 = uVar18 << 8 | (ulonglong)bVar3;
      case 5:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar18 = uVar18 << 8 | (ulonglong)bVar3;
      case 6:
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar18 = uVar18 << 8 | (ulonglong)bVar3;
      case 7:
        uVar18 = uVar18 << 8 | (ulonglong)*pbVar6;
      }
    }
    uVar18 = ~uVar18;
    pwVar17 = L"%lld";
LAB_1427693c1:
    FUN_140212e80(param_1,pwVar17,uVar18);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  case 0xc:
    pwVar17 = *(wchar_t **)(param_1 + 8);
    if (*(wchar_t **)(param_1 + 0x10) <= pwVar17 + 5) {
      FUN_140213274(param_1,5);
      pwVar17 = *(wchar_t **)(param_1 + 8);
    }
    builtin_wcsncpy(pwVar17,L"false",5);
    pwVar17 = pwVar17 + 5;
    goto LAB_1427696b5;
  case 0xd:
    puVar5 = *(undefined8 **)(param_1 + 8);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar5 + 1) {
      FUN_140213274(param_1,4);
      puVar5 = *(undefined8 **)(param_1 + 8);
    }
    uVar9 = 0x65007500720074;
LAB_1427692fc:
    *puVar5 = uVar9;
    pwVar17 = (wchar_t *)(puVar5 + 1);
LAB_1427696b5:
    *(wchar_t **)(param_1 + 8) = pwVar17;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    local_68 = (undefined4)puVar16[2];
    local_58 = (ulonglong ***)&local_78;
    local_78 = (ulonglong ****)*puVar16;
    uStack_70 = (ulonglong *)puVar16[1];
    ppppuVar15 = &local_58;
    local_50 = (ulonglong *)CONCAT44(local_50._4_4_,0x14);
    goto LAB_142769648;
  case 0x11:
    uVar10 = (uint)*puVar16;
    uVar7 = *(uint *)((longlong)puVar16 + 4);
    uVar19 = (uint)puVar16[1];
    uVar4 = *(uint *)((longlong)puVar16 + 0xc);
    local_78 = (ulonglong ****)
               CONCAT44(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                        uVar7 << 0x18,
                        uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                        uVar10 << 0x18);
    uStack_70 = (ulonglong *)
                CONCAT44(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18,
                         uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                         uVar19 << 0x18);
    FUN_1411a4a98(&local_78,param_1,3);
    break;
  case 0x12:
    uVar18 = *puVar16;
    local_58 = (ulonglong ***)
               (uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
                (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
                (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 | (uVar18 & 0xff00) << 0x28
               | uVar18 << 0x38);
    FUN_14047ad2e(&local_58,&local_78,L"%Y-%m-%dT%H:%M:%S.%sZ");
    goto LAB_142769457;
  case 0x13:
    uVar18 = *puVar16;
    local_58 = (ulonglong ***)
               (uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
                (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
                (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 | (uVar18 & 0xff00) << 0x28
               | uVar18 << 0x38);
    if ((byte *)((longlong)local_58 + 863999999999) < (byte *)0x19254d37fff) {
      pwVar17 = L"%h:%m:%s.%n";
    }
    else {
      pwVar17 = L"%d.%h:%m:%s.%n";
    }
    FUN_14681ea84(&local_58,&local_78,pwVar17);
LAB_142769457:
    ppppuVar15 = local_78;
    uVar10 = (uint)uStack_70;
    iVar8 = (uint)uStack_70 - 1;
    if ((uint)uStack_70 == 0) {
      iVar8 = 0;
    }
    lVar14 = (longlong)iVar8;
    if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(*(longlong *)(param_1 + 8) + lVar14 * 2)) {
      FUN_140213274(param_1,lVar14);
    }
    if (1 < uVar10) {
      _Dst = *(void **)(param_1 + 8);
      memcpy(_Dst,ppppuVar15,lVar14 * 2);
      *(void **)(param_1 + 8) = (void *)((longlong)_Dst + lVar14 * 2);
    }
    if (local_78 != (ulonglong ****)0x0) {
      FUN_1400020a8();
    }
    break;
  case 0x14:
    local_78 = &local_58;
    local_50 = (ulonglong *)CONCAT44(local_50._4_4_,(int)puVar16[1]);
    local_58 = (ulonglong ***)*puVar16;
    ppppuVar15 = (ulonglong ****)&local_78;
    uStack_70 = (ulonglong *)CONCAT44(uStack_70._4_4_,0xc);
LAB_142769648:
    FUN_14682b32b(ppppuVar15,param_1);
  }
switchD_142769007_caseD_15:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14276968a:
  iVar8 = -1;
  goto LAB_14276968f;
}



// FUNCTION 1427696f2 FUN_1427696f2 body=126 status=ok
// SIG undefined FUN_1427696f2(void)

void FUN_1427696f2(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pwVar2 = L"false";
  if (*param_3 != '\0') {
    pwVar2 = L"true";
  }
  FUN_140056680(&local_28,pwVar2);
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_28,iVar1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276977e FUN_14276977e body=114 status=ok
// SIG undefined FUN_14276977e(void)

void FUN_14276977e(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,&DAT_149e063bc,*param_3);
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_28,iVar1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427697f2 FUN_1427697f2 body=505 status=ok
// SIG undefined FUN_1427697f2(void)

longlong FUN_1427697f2(undefined8 param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  
  lVar1 = *param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8451e0) && (FUN_144b3d300(&DAT_14c8451e0), DAT_14c8451e0 == -1)) {
    FUN_140056680(&DAT_14c8451d0,&DAT_149e06346);
    atexit((_func_5014 *)&LAB_1427699eb);
    _Init_thread_footer(&DAT_14c8451e0);
  }
  piVar6 = (int *)&DAT_14c8451d8;
  uVar2 = 1;
  if (1 < DAT_14c8451d8) {
    lVar7 = (longlong)(int)(DAT_14c8451d8 - 1);
    lVar8 = 0;
    while( true ) {
      uVar9 = *(ushort *)(lVar1 + lVar8);
      uVar5 = (ulonglong)uVar9;
      uVar11 = *(ushort *)(DAT_14c8451d0 + lVar8);
      if (uVar9 != uVar11) break;
      if (uVar9 == 0) goto LAB_142769932;
LAB_14276986f:
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) goto LAB_142769932;
      lVar8 = lVar8 + 2;
    }
    if ((uVar11 | uVar9) < 0x80) {
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar12 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar12]) goto LAB_14276986f;
    }
    if (uVar9 != uVar11) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8451f8) && (FUN_144b3d300(&DAT_14c8451f8), DAT_14c8451f8 == -1))
      {
        FUN_140056680(&DAT_14c8451e8,L"false");
        atexit((_func_5014 *)&LAB_1427699fc);
        _Init_thread_footer(&DAT_14c8451f8);
      }
      piVar6 = (int *)&DAT_14c8451f0;
      if (DAT_14c8451f0 < 2) goto LAB_142769930;
      lVar7 = (longlong)(int)(DAT_14c8451f0 - 1);
      lVar8 = 0;
      goto LAB_1427698ed;
    }
  }
LAB_142769932:
  *param_3 = uVar2;
  iVar4 = *piVar6 + -1;
  if (*piVar6 == 0) {
    iVar4 = 0;
  }
  return lVar1 + (longlong)iVar4 * 2;
LAB_1427698ed:
  uVar9 = *(ushort *)(lVar1 + lVar8);
  uVar10 = (uint)uVar9;
  uVar11 = *(ushort *)(DAT_14c8451e8 + lVar8);
  uVar3 = (uint)uVar11;
  if (uVar9 == uVar11) {
    uVar2 = 0;
    if ((uVar9 == 0) || (lVar7 == 1)) goto LAB_142769932;
LAB_142769909:
    lVar7 = lVar7 + -1;
    lVar8 = lVar8 + 2;
    goto LAB_1427698ed;
  }
  if ((uVar11 | uVar9) < 0x80) {
    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar9];
    uVar5 = (ulonglong)uVar3;
    uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar5]) {
      if (lVar7 != 1) goto LAB_142769909;
LAB_142769930:
      uVar2 = 0;
      goto LAB_142769932;
    }
  }
  uVar2 = 0;
  if (uVar10 != uVar3) {
    return 0;
  }
  goto LAB_142769932;
}



// FUNCTION 142769a0e FUN_142769a0e body=128 status=ok
// SIG undefined FUN_142769a0e(void)

void FUN_142769a0e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845210) {
    FUN_144b3d300(&DAT_14c845210);
    if (DAT_14c845210 == -1) {
      FUN_140056680(&DAT_14c845200,L"ERoundingMode::");
      atexit((_func_5014 *)&LAB_142769a8e);
      _Init_thread_footer(&DAT_14c845210);
    }
  }
  FUN_1467ef8e3(uVar1,param_3);
  return;
}



// FUNCTION 142769aa0 FUN_142769aa0 body=355 status=ok
// SIG undefined FUN_142769aa0(void)

longlong FUN_142769aa0(undefined8 param_1,undefined8 *param_2,float *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  float local_30;
  undefined4 uStack_2c;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  local_38 = 4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_28 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  local_20 = DAT_14c844848;
  lVar2 = FUN_1467dfa8b(uVar1);
  if (lVar2 == 0) {
switchD_142769b35_default:
    lVar2 = 0;
  }
  else {
    switch(local_38) {
    case 0:
    case 1:
      break;
    case 2:
      local_30 = (float)(int)local_30;
      break;
    case 3:
      local_30 = (float)(int)(double)CONCAT44(uStack_2c,local_30);
      break;
    default:
      goto switchD_142769b35_default;
    }
    *param_3 = local_30;
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 142769c04 FUN_142769c04 body=131 status=ok
// SIG undefined FUN_142769c04(void)

void FUN_142769c04(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1400020e8(*param_1,&DAT_149e1a408,3);
    iVar2 = *(int *)(puVar1 + 1) + -1;
    if (*(int *)(puVar1 + 1) == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(*param_1,*puVar1,iVar2);
    FUN_1400020e8(*param_1,&DAT_149e01f5a,1);
  }
  FUN_1400020e8(*param_1,&DAT_149e19f34,2);
  FUN_1467d18b0(param_3,*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



// FUNCTION 142769c88 FUN_142769c88 body=125 status=ok
// SIG undefined FUN_142769c88(void)

void FUN_142769c88(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (longlong)*(int *)(*param_1 + 0x38);
  if (lVar3 != 0) {
    pcVar1 = (code *)*param_2;
    uVar2 = param_2[1];
    lVar4 = *(longlong *)(*param_1 + 0x30);
    lVar3 = lVar3 * 0x30 + lVar4;
    do {
      local_38 = lVar4;
      (*pcVar1)(uVar2,&local_38,lVar4 + 0x10);
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142769d06 FUN_142769d06 body=123 status=ok
// SIG undefined FUN_142769d06(void)

void FUN_142769d06(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = (longlong)*(int *)(*param_1 + 0x38);
  if (lVar4 != 0) {
    pcVar1 = (code *)*param_2;
    uVar2 = param_2[1];
    lVar3 = *(longlong *)(*param_1 + 0x30);
    lVar4 = lVar4 << 5;
    do {
      local_38 = 0;
      (*pcVar1)(uVar2,&local_38,lVar3);
      lVar3 = lVar3 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142769d82 FUN_142769d82 body=159 status=ok
// SIG undefined FUN_142769d82(void)

void FUN_142769d82(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58 [16];
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (longlong)*(int *)(*param_1 + 0x38);
  if (lVar3 != 0) {
    pcVar1 = (code *)*param_2;
    uVar2 = param_2[1];
    lVar4 = *(longlong *)(*param_1 + 0x30);
    lVar3 = lVar3 * 0x48;
    do {
      FUN_1467d1f30(lVar4,local_58);
      local_60 = lVar4;
      (*pcVar1)(uVar2,&local_60,local_58);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
      }
      lVar4 = lVar4 + 0x48;
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142769e22 FUN_142769e22 body=225 status=ok
// SIG undefined FUN_142769e22(void)

void FUN_142769e22(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  int *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = *param_3;
    iVar6 = *(int *)(puVar3 + 1);
    do {
      if (iVar6 == 0) goto LAB_142769e96;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar7 = iVar6 == iVar2;
      if (bVar7) {
        *(int *)(puVar3 + 1) = iVar6 + 1;
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
      UNLOCK();
    } while (!bVar7);
    lVar5 = *param_1;
    if (lVar5 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x38));
      if (lVar4 != 0) {
        *(longlong *)(lVar5 + 0x10) = lVar4;
      }
      *(undefined1 *)(lVar5 + 0x1c) = 2;
      FUN_1467e63ca(lVar5,&local_30,0);
      if (local_30 != (int *)0x0) {
        LOCK();
        *local_30 = *local_30 + -1;
        UNLOCK();
        if (*local_30 == 0) {
          if (*(longlong *)(local_30 + 2) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_30);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x38));
    }
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
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_142769e96:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142769f54 FUN_142769f54 body=64 status=ok
// SIG undefined FUN_142769f54(void)

undefined8 * FUN_142769f54(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149e1c0c0;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 142769f94 FUN_142769f94 body=205 status=ok
// SIG undefined FUN_142769f94(void)

void FUN_142769f94(undefined1 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_14588dcbc();
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_1);
  lVar7 = FUN_140d5712e();
  lVar4 = *(longlong *)(lVar7 + 0x28);
  plVar5 = *(longlong **)(lVar7 + 0x30);
  if (plVar5 == (longlong *)0x0) {
    local_38 = *(undefined8 *)(param_1 + 8);
    local_30 = *(undefined4 *)(param_1 + 0x10);
    FUN_142764f7a(uVar6,&local_38,lVar4 + 0x28,uVar9 & 0xffffffff);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_38 = *(undefined8 *)(param_1 + 8);
    local_30 = *(undefined4 *)(param_1 + 0x10);
    FUN_142764f7a(uVar6,&local_38,lVar4 + 0x28,uVar9 & 0xffffffff);
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
  pbVar8 = (byte *)FUN_14588dcbc();
  bVar3 = *pbVar8;
  pbVar8 = (byte *)FUN_14588dcbc();
  LOCK();
  *pbVar8 = bVar3 | 1;
  UNLOCK();
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276a06c FUN_14276a06c body=12 status=ok
// SIG undefined FUN_14276a06c(void)

void FUN_14276a06c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276a075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276a078 FUN_14276a078 body=69 status=ok
// SIG undefined FUN_14276a078(void)

undefined8 * FUN_14276a078(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e1c230;
  FUN_14142fefb(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276a0be FUN_14276a0be body=205 status=ok
// SIG undefined FUN_14276a0be(void)

void FUN_14276a0be(undefined1 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_14588dcbc();
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_1);
  lVar7 = FUN_140d5712e();
  lVar4 = *(longlong *)(lVar7 + 0x28);
  plVar5 = *(longlong **)(lVar7 + 0x30);
  if (plVar5 == (longlong *)0x0) {
    local_38 = *(undefined8 *)(param_1 + 8);
    local_30 = *(undefined4 *)(param_1 + 0x10);
    FUN_142764f7a(uVar6,&local_38,lVar4 + 0x28,uVar9 & 0xffffffff);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_38 = *(undefined8 *)(param_1 + 8);
    local_30 = *(undefined4 *)(param_1 + 0x10);
    FUN_142764f7a(uVar6,&local_38,lVar4 + 0x28,uVar9 & 0xffffffff);
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
  pbVar8 = (byte *)FUN_14588dcbc();
  bVar3 = *pbVar8;
  pbVar8 = (byte *)FUN_14588dcbc();
  LOCK();
  *pbVar8 = bVar3 | 2;
  UNLOCK();
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276a196 FUN_14276a196 body=12 status=ok
// SIG undefined FUN_14276a196(void)

void FUN_14276a196(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276a19f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276a1a2 FUN_14276a1a2 body=69 status=ok
// SIG undefined FUN_14276a1a2(void)

undefined8 * FUN_14276a1a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e1c250;
  FUN_14142fefb(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276a1e7 FUN_14276a1e7 body=39 status=ok
// SIG undefined FUN_14276a1e7(void)

void FUN_14276a1e7(void)

{
  if (DAT_14c845388 != 0) {
    FUN_1459c6362();
    DAT_14c845388 = 0;
  }
  return;
}



// FUNCTION 14276a20e FUN_14276a20e body=673 status=ok
// SIG undefined FUN_14276a20e(void)

void FUN_14276a20e(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [32];
  PSRWLOCK local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  uint *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14588dcbc();
  local_70 = FUN_1467d1582();
  local_88 = (PSRWLOCK)(lVar3 + 8);
  AcquireSRWLockExclusive(local_88);
  if ((longlong)(int)param_1[1] != 0) {
    puVar11 = (undefined8 *)*param_1;
    puVar10 = puVar11 + (longlong)(int)param_1[1] * 2;
    lVar14 = lVar3 + 0x60;
    local_68 = lVar3 + 0x10;
    local_80 = lVar14;
    local_78 = lVar3;
    do {
      local_58 = *puVar11;
      local_50 = *(int *)(puVar11 + 1) + -1;
      if (*(int *)(puVar11 + 1) == 0) {
        local_50 = 0;
      }
      lVar4 = FUN_1412a5dde(lVar14,&local_58,0);
      if (*(char *)(lVar4 + 0x60) == '\x01') {
        local_60 = (uint *)(lVar4 + 0x20);
        iVar1 = *(int *)(lVar4 + 0x38);
        if (iVar1 == 0) {
          uVar16 = 1;
          uVar17 = 0;
          iVar15 = 0;
          iVar13 = 0;
        }
        else {
          puVar5 = *(uint **)(lVar4 + 0x30);
          if (*(uint **)(lVar4 + 0x30) == (uint *)0x0) {
            puVar5 = local_60;
          }
          uVar6 = *puVar5;
          if (uVar6 == 0) {
            iVar15 = iVar1 + 0x1e;
            if (-1 < iVar1 + -1) {
              iVar15 = iVar1 + -1;
            }
            uVar17 = 0;
            uVar7 = (ulonglong)(uint)(iVar15 >> 5);
            if (iVar15 >> 5 < 1) {
              uVar7 = uVar17;
            }
            iVar15 = 0;
            do {
              if (uVar7 == uVar17) goto LAB_14276a352;
              iVar15 = iVar15 + 0x20;
              uVar6 = puVar5[uVar17 + 1];
              uVar17 = uVar17 + 1;
            } while (uVar6 == 0);
          }
          else {
            uVar17 = 0;
            iVar15 = 0;
          }
          uVar16 = (ulonglong)(-uVar6 & uVar6);
          uVar7 = uVar16 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar13 = (iVar15 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
          if (iVar1 <= iVar13) {
            iVar13 = iVar1;
          }
        }
        if (iVar13 != iVar1) {
          uVar6 = 0xffffffff;
          do {
            FUN_1467f1a36(local_68,(longlong)iVar13 * 0x10 + *(longlong *)(lVar4 + 0x10));
            uVar6 = ~(uint)uVar16 & uVar6;
            puVar5 = *(uint **)(lVar4 + 0x30);
            if (*(uint **)(lVar4 + 0x30) == (uint *)0x0) {
              puVar5 = local_60;
            }
            iVar2 = *(int *)(lVar4 + 0x38);
            iVar13 = (int)uVar17;
            lVar3 = (longlong)iVar13;
            uVar12 = puVar5[lVar3] & uVar6;
            if (uVar12 == 0) {
              iVar8 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar8 = iVar2 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar15 = iVar15 + 0x20;
              iVar9 = iVar8;
              if (iVar8 < iVar13) {
                iVar9 = iVar13;
              }
              if (iVar13 < iVar8) {
                lVar14 = 0;
                do {
                  uVar12 = puVar5[lVar3 + lVar14 + 1];
                  if (uVar12 != 0) {
                    uVar17 = (ulonglong)(iVar13 + (int)lVar14 + 1);
                    uVar6 = 0xffffffff;
                    goto LAB_14276a422;
                  }
                  iVar15 = iVar15 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar9 - lVar3 != lVar14);
                uVar6 = 0xffffffff;
                iVar13 = iVar9;
              }
              uVar17 = (ulonglong)(iVar13 + 1);
              iVar13 = iVar2;
            }
            else {
LAB_14276a422:
              uVar16 = (ulonglong)(-uVar12 & uVar12);
              uVar7 = uVar16 * 2 + 1;
              lVar3 = 0x3f;
              if (uVar7 != 0) {
                for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              iVar13 = (iVar15 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar13) {
                iVar13 = iVar2;
              }
            }
          } while (iVar13 != iVar1);
        }
LAB_14276a352:
        FUN_1467d2aaa(local_70,lVar4 + 0x10);
        FUN_1467f19f2(lVar4 + 0x10);
        *(undefined1 *)(lVar4 + 0x60) = 0;
        lVar3 = local_78;
        lVar14 = local_80;
      }
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar10);
  }
  FUN_142764e0a(lVar3);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014276a4a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(local_88);
  return;
}



// FUNCTION 14276a4ba FUN_14276a4ba body=12 status=ok
// SIG undefined FUN_14276a4ba(void)

void FUN_14276a4ba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276a4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276a4c6 FUN_14276a4c6 body=69 status=ok
// SIG undefined FUN_14276a4c6(void)

undefined8 * FUN_14276a4c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e1c310;
  FUN_1447a1747(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276a50c FUN_14276a50c body=195 status=ok
// SIG undefined FUN_14276a50c(void)

void FUN_14276a50c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845390) {
    FUN_144b3d300(&DAT_14c845390);
    if (DAT_14c845390 == -1) {
      FUN_1456aefde(&DAT_14c845218);
      DAT_14c845388 = &DAT_14c845218;
      atexit(FUN_14276a1e7);
      _Init_thread_footer(&DAT_14c845390);
    }
  }
  local_28 = *param_1;
  local_20 = *(undefined4 *)(param_1 + 1);
  FUN_142764f7a(DAT_14c845388,&local_28,param_1 + 2,*(undefined1 *)(param_1 + 4));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276a5da FUN_14276a5da body=29 status=ok
// SIG undefined FUN_14276a5da(void)

void FUN_14276a5da(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14276a5f8 FUN_14276a5f8 body=83 status=ok
// SIG undefined FUN_14276a5f8(void)

undefined8 * FUN_14276a5f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e1c330;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14142fefb(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276a64c FUN_14276a64c body=128 status=ok
// SIG undefined FUN_14276a64c(void)

void FUN_14276a64c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14588dcbc();
  local_48 = *(undefined1 *)(param_1 + 6);
  local_20 = param_1[4];
  local_18 = *(undefined4 *)(param_1 + 5);
  local_30 = param_1[2];
  local_28 = *(undefined4 *)(param_1 + 3);
  local_40 = *param_1;
  local_38 = *(undefined4 *)(param_1 + 1);
  FUN_1427651e6(uVar1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276a6d8 FUN_14276a6d8 body=29 status=ok
// SIG undefined FUN_14276a6d8(void)

void FUN_14276a6d8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14276a6f6 FUN_14276a6f6 body=121 status=ok
// SIG undefined FUN_14276a6f6(void)

undefined8 * FUN_14276a6f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e1c350;
  FUN_1447a1747(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14142fefb(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276a770 FUN_14276a770 body=3678 status=ok
// SIG undefined FUN_14276a770(void)

void FUN_14276a770(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined2 *puVar12;
  ushort uVar13;
  int iVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  byte bVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  int iVar22;
  ushort uVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong unaff_R13;
  undefined7 uVar26;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined8 *local_158;
  ulonglong local_150;
  longlong local_148;
  int local_140;
  int local_13c;
  byte *local_138;
  undefined4 local_130;
  uint local_12c;
  longlong local_128;
  undefined2 *local_120;
  undefined2 *local_118;
  undefined8 local_110;
  longlong local_108;
  int local_100;
  undefined2 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  longlong *local_98;
  ulonglong uStack_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  pbVar8 = (byte *)FUN_14588dcbc();
  iVar14 = *(int *)(param_1 + 2);
  lVar18 = *(longlong *)(pbVar8 + 0x148);
  if ((longlong)*(int *)(lVar18 + 0x10) != 0) {
    lVar21 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar18 + 8) + lVar21) == iVar14) goto LAB_14276a817;
      lVar21 = lVar21 + 4;
    } while ((longlong)*(int *)(lVar18 + 0x10) * 4 != lVar21);
  }
  if (DAT_14c844e48 != 2) {
    if (*pbVar8 != 0) {
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      local_130 = *(undefined4 *)(param_1 + 1);
      local_120 = (undefined2 *)*param_1;
      FUN_140e82e76();
      FUN_140b7fa3a(&local_98);
      FUN_1461fd488(&local_a8);
      local_148 = (longlong)local_a0;
      local_140 = iVar14;
      local_138 = pbVar8;
      if (local_148 == 0) {
        local_78 = (undefined2 *)0x0;
        uStack_70 = 0;
      }
      else {
        local_158 = local_a8;
        FUN_1410f2562(&local_88);
        lVar18 = local_148;
        iVar14 = (int)local_80;
        iVar5 = ((int)local_80 == 0) + 0xd;
        local_78 = local_88;
        local_88 = (undefined2 *)0x0;
        iVar22 = local_80._4_4_;
        uStack_70 = local_80;
        local_80 = 0;
        iVar11 = iVar5 + iVar14;
        if (iVar11 < iVar14) {
LAB_14276b5c0:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        if (iVar11 < 0) {
LAB_14276b5b9:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar11);
        }
        if (iVar22 < iVar11) {
          FUN_1446f8c06(&local_78);
        }
        FUN_1401aebe8(&local_78,L"Localization",0xc);
        iVar14 = *(int *)(local_158 + 1) + -1;
        if (*(int *)(local_158 + 1) == 0) {
          iVar14 = 0;
        }
        iVar22 = (int)uStack_70;
        iVar6 = iVar14 + 1 + (uint)((int)uStack_70 == 0);
        local_f8 = local_78;
        local_78 = (undefined2 *)0x0;
        iVar5 = uStack_70._4_4_;
        uStack_f0 = uStack_70;
        uStack_70 = 0;
        iVar11 = iVar6 + iVar22;
        if (iVar11 < iVar22) {
LAB_14276b5c7:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar6);
        }
        if (iVar11 < 0) goto LAB_14276b5b9;
        if (iVar5 < iVar11) {
          FUN_1446f8c06(&local_f8);
        }
        FUN_1401aebe8(&local_f8,*local_158,iVar14);
        if ((longlong)(int)uStack_90 != 0) {
          plVar9 = local_98;
LAB_14276b40e:
          uVar26 = (undefined7)(unaff_R13 >> 8);
          if ((int)plVar9[1] == (int)uStack_f0) {
            unaff_R13 = CONCAT71(uVar26,1);
            if (1 < (int)uStack_f0) {
              lVar21 = 0;
              do {
                uVar23 = *(ushort *)(*plVar9 + lVar21);
                uVar24 = (ulonglong)uVar23;
                uVar13 = *(ushort *)((longlong)local_f8 + lVar21);
                if (uVar23 == uVar13) {
                  if (uVar23 == 0) break;
                }
                else {
                  if (0x7f < (uVar13 | uVar23)) goto LAB_14276b481;
                  uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
                  uVar16 = (ulonglong)uVar13;
                  uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
                  if ((&DAT_149e05da0)[uVar24] != (&DAT_149e05da0)[uVar16]) goto LAB_14276b481;
                }
                lVar21 = lVar21 + 2;
              } while( true );
            }
          }
          else {
            if ((int)plVar9[1] + (int)uStack_f0 != 1) goto LAB_14276b424;
            unaff_R13 = CONCAT71(uVar26,1);
          }
          goto LAB_14276a9de;
        }
        unaff_R13 = 0;
LAB_14276a9de:
        if (local_f8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar22 = 0;
        iVar14 = 0;
        do {
          local_150 = CONCAT71(local_150._1_7_,(char)unaff_R13);
          local_12c = (uint)unaff_R13 ^ 1;
          lVar21 = (longlong)iVar14;
          local_13c = iVar22;
          local_128 = lVar21;
          iVar25 = iVar14 + 1;
          if (iVar14 + 1 < (int)lVar18) {
            iVar25 = (int)lVar18;
          }
          do {
            lVar21 = lVar21 + 1;
            if (lVar18 <= lVar21) goto LAB_14276acab;
            FUN_1410f2562(&local_88);
            iVar22 = (int)local_80;
            iVar5 = ((int)local_80 == 0) + 0xd;
            local_78 = local_88;
            local_88 = (undefined2 *)0x0;
            iVar6 = local_80._4_4_;
            uStack_70 = local_80;
            local_80 = 0;
            iVar11 = iVar5 + iVar22;
            if (iVar11 < iVar22) goto LAB_14276b5c0;
            if (iVar11 < 0) goto LAB_14276b5b9;
            if (iVar6 < iVar11) {
              FUN_1446f8c06(&local_78);
            }
            puVar15 = local_158 + lVar21 * 2;
            FUN_1401aebe8(&local_78,L"Localization",0xc);
            iVar22 = *(int *)(puVar15 + 1);
            iVar5 = iVar22 + -1;
            if (iVar22 == 0) {
              iVar5 = 0;
            }
            iVar22 = (int)uStack_70;
            iVar6 = iVar5 + 1 + (uint)((int)uStack_70 == 0);
            local_f8 = local_78;
            local_78 = (undefined2 *)0x0;
            iVar3 = uStack_70._4_4_;
            uStack_f0 = uStack_70;
            uStack_70 = 0;
            iVar11 = iVar6 + iVar22;
            if (iVar11 < iVar22) goto LAB_14276b5c7;
            if (iVar11 < 0) goto LAB_14276b5b9;
            if (iVar3 < iVar11) {
              FUN_1446f8c06(&local_f8);
            }
            FUN_1401aebe8(&local_f8,*puVar15,iVar5);
            if ((longlong)(int)uStack_90 != 0) {
              plVar9 = local_98;
LAB_14276ac04:
              if ((int)plVar9[1] == (int)uStack_f0) {
                bVar17 = 1;
                lVar18 = local_148;
                if (1 < (int)uStack_f0) {
                  lVar10 = 0;
                  do {
                    uVar23 = *(ushort *)(*plVar9 + lVar10);
                    uVar13 = *(ushort *)((longlong)local_f8 + lVar10);
                    if (uVar23 == uVar13) {
                      if (uVar23 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar13 | uVar23)) {
                        iVar22 = (uint)uVar23 - (uint)uVar13;
                        goto LAB_14276ac7c;
                      }
                      if ((&DAT_149e05da0)[uVar23] != (&DAT_149e05da0)[(uint)uVar13])
                      goto code_r0x00014276ac79;
                    }
                    lVar10 = lVar10 + 2;
                  } while( true );
                }
              }
              else {
                if ((int)plVar9[1] + (int)uStack_f0 != 1) goto LAB_14276ac1a;
                bVar17 = 1;
              }
              goto LAB_14276ab9d;
            }
            bVar17 = 0;
LAB_14276ab9d:
            if (local_f8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_78 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_88 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          } while (((byte)local_150 & 1) == bVar17);
          iVar25 = (int)lVar21;
LAB_14276acab:
          iVar22 = local_13c;
          iVar5 = iVar25 - iVar14;
          if ((local_150 & 1) == 0) {
            FUN_1447a1747(local_158 + local_128 * 2,iVar5);
            iVar22 = local_13c;
          }
          else {
            if (local_13c != iVar14) {
              memmove(local_158 + (longlong)local_13c * 2,local_158 + local_128 * 2,
                      (longlong)iVar5 << 4);
            }
            iVar22 = iVar22 + iVar5;
          }
          unaff_R13 = (ulonglong)local_12c;
          iVar14 = iVar25;
        } while (lVar21 < lVar18);
        local_78 = (undefined2 *)0x0;
        uStack_70 = 0;
        local_a0 = iVar22;
        if (iVar22 != 0) {
          puVar20 = local_a8 + (longlong)iVar22 * 2;
          iVar14 = 0;
          puVar15 = local_a8;
          do {
            FUN_1467e8771(&local_88,puVar15,local_140);
            FUN_1410f2562(&local_c8);
            iVar22 = (int)local_c0;
            iVar5 = ((int)local_c0 == 0) + 0xd;
            local_f8 = local_c8;
            local_c8 = (undefined2 *)0x0;
            iVar6 = local_c0._4_4_;
            uStack_f0 = local_c0;
            local_c0 = 0;
            iVar11 = iVar5 + iVar22;
            if (iVar11 < iVar22) goto LAB_14276b5c0;
            if (iVar11 < 0) goto LAB_14276b5b9;
            if (iVar6 < iVar11) {
              FUN_1446f8c06(&local_f8);
            }
            FUN_1401aebe8(&local_f8,L"Localization",0xc);
            iVar22 = (int)local_80 + -1;
            if ((int)local_80 == 0) {
              iVar22 = iVar14;
            }
            iVar5 = (int)uStack_f0;
            iVar6 = iVar22 + 1 + (uint)((int)uStack_f0 == 0);
            local_b8 = local_f8;
            local_f8 = (undefined2 *)0x0;
            iVar25 = uStack_f0._4_4_;
            local_b0 = uStack_f0;
            uStack_f0 = 0;
            iVar11 = iVar6 + iVar5;
            if (iVar11 < iVar5) goto LAB_14276b5c7;
            if (iVar11 < 0) goto LAB_14276b5b9;
            if (iVar25 < iVar11) {
              FUN_1446f8c06(&local_b8);
            }
            FUN_1401aebe8(&local_b8,local_88,iVar22);
            if (local_f8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_c8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            plVar9 = (longlong *)FUN_14054d1d4();
            puVar12 = &DAT_149dfb77a;
            if ((int)local_b0 != 0) {
              puVar12 = local_b8;
            }
            cVar4 = (**(code **)(*plVar9 + 0x50))(plVar9,puVar12);
            local_150 = 1;
            if (cVar4 != '\0') {
              local_d8 = 0;
              uStack_d0 = 0;
              local_e8 = 0;
              uStack_e0 = 0;
              local_f8 = (undefined2 *)0x0;
              uStack_f0 = 0;
              puVar12 = &DAT_149dfb77a;
              if ((int)local_80 != 0) {
                puVar12 = local_88;
              }
              FUN_140002266(&local_108,L"%s.locmeta",puVar12);
              puVar12 = local_b8;
              iVar22 = local_100 + -1;
              if (local_100 == 0) {
                iVar22 = iVar14;
              }
              iVar5 = (int)local_b0;
              lVar18 = (longlong)(int)local_b0;
              iVar6 = iVar22 + 1 + (uint)(lVar18 == 0);
              local_c8 = (undefined2 *)0x0;
              local_c0 = CONCAT44(local_c0._4_4_,(int)local_b0);
              if (iVar6 == 0 && (int)local_b0 == 0) {
                local_c0 = local_b0 & 0xffffffff;
              }
              else {
                iVar11 = iVar6 + (int)local_b0;
                if (iVar6 < 0) goto LAB_14276b5b9;
                FUN_1446dd670(&local_c8,iVar11,0);
                if (iVar5 != 0) {
                  memcpy(local_c8,puVar12,lVar18 * 2);
                }
              }
              FUN_1401aebe8(&local_c8,local_108,iVar22);
              if (local_108 != 0) {
                FUN_1400020a8();
              }
              plVar9 = (longlong *)FUN_14054d1d4();
              puVar12 = &DAT_149dfb77a;
              if ((int)local_c0 != 0) {
                puVar12 = local_c8;
              }
              cVar4 = (**(code **)(*plVar9 + 0x48))(plVar9,puVar12);
              if (cVar4 == '\0') {
                if (local_c8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                local_150 = 1;
              }
              else {
                cVar4 = FUN_141561b40(&local_f8);
                if (local_c8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                lVar18 = local_d8;
                local_150 = 1;
                if (cVar4 != '\0') {
                  lVar21 = (longlong)(int)uStack_d0;
                  local_158 = puVar20;
                  if (lVar21 != 0) {
                    lVar10 = 0;
                    do {
                      puVar12 = &DAT_149dfb77a;
                      if ((int)local_80 != 0) {
                        puVar12 = local_88;
                      }
                      FUN_140002266(&local_108,L"%s.locres",puVar12);
                      puVar12 = local_b8;
                      iVar22 = *(int *)(lVar18 + 8 + lVar10);
                      iVar5 = iVar22 + -1;
                      if (iVar22 == 0) {
                        iVar5 = iVar14;
                      }
                      iVar22 = (int)local_b0;
                      lVar19 = (longlong)(int)local_b0;
                      iVar6 = iVar5 + 1 + (uint)(lVar19 == 0);
                      local_118 = (undefined2 *)0x0;
                      local_110 = CONCAT44(local_110._4_4_,(int)local_b0);
                      if (iVar6 == 0 && (int)local_b0 == 0) {
                        local_110 = local_b0 & 0xffffffff;
                      }
                      else {
                        iVar11 = iVar6 + (int)local_b0;
                        if (iVar6 < 0) goto LAB_14276b5b9;
                        FUN_1446dd670(&local_118,iVar11,0);
                        if (iVar22 != 0) {
                          memcpy(local_118,puVar12,lVar19 * 2);
                        }
                      }
                      FUN_1401aebe8(&local_118,*(undefined8 *)(lVar18 + lVar10),iVar5);
                      iVar22 = local_100 + -1;
                      if (local_100 == 0) {
                        iVar22 = iVar14;
                      }
                      iVar5 = (int)local_110;
                      iVar6 = iVar22 + 1 + (uint)((int)local_110 == 0);
                      local_c8 = local_118;
                      local_118 = (undefined2 *)0x0;
                      iVar25 = local_110._4_4_;
                      local_c0 = local_110;
                      local_110 = 0;
                      iVar11 = iVar6 + iVar5;
                      if (iVar11 < iVar5) goto LAB_14276b5c7;
                      if (iVar11 < 0) goto LAB_14276b5b9;
                      if (iVar25 < iVar11) {
                        FUN_1446f8c06(&local_c8);
                      }
                      FUN_1401aebe8(&local_c8,local_108,iVar22);
                      if (local_118 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_108 != 0) {
                        FUN_1400020a8();
                      }
                      plVar9 = (longlong *)FUN_14054d1d4();
                      cVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
                      if (local_c8 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      puVar20 = local_158;
                      if (cVar4 == '\0') goto LAB_14276b339;
                      lVar10 = lVar10 + 0x10;
                    } while (lVar21 * 0x10 != lVar10);
                  }
                  lVar18 = (longlong)(int)uStack_70;
                  uVar7 = (int)uStack_70 + 1;
                  uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
                  if (uStack_70._4_4_ < uVar7) {
                    FUN_1447a1bd6(&local_78);
                  }
                  *(undefined8 *)(local_78 + lVar18 * 8) = 0;
                  *(undefined2 **)(local_78 + lVar18 * 8) = local_b8;
                  local_b8 = (undefined2 *)0x0;
                  *(int *)(local_78 + lVar18 * 8 + 4) = (int)local_b0;
                  *(undefined4 *)(local_78 + lVar18 * 8 + 6) = local_b0._4_4_;
                  local_150 = 0;
                  local_b0 = 0;
                  puVar20 = local_158;
                }
              }
LAB_14276b339:
              FUN_145df9f88(&local_f8);
            }
            if (local_b8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_88 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if ((int)local_150 != 0) goto LAB_14276b536;
            puVar15 = puVar15 + 2;
          } while (puVar15 != puVar20);
        }
      }
      pbVar8 = local_138;
      local_f8 = (undefined2 *)CONCAT44(local_f8._4_4_,local_140);
      FUN_1449e3bb0(*(longlong *)(local_138 + 0x148) + 8);
      if ((*pbVar8 & 2) != 0) {
        lVar21 = FUN_140d5712e();
        lVar10 = FUN_140d5712e();
        lVar18 = *(longlong *)(lVar10 + 0x28);
        plVar9 = *(longlong **)(lVar10 + 0x30);
        if (plVar9 == (longlong *)0x0) {
          FUN_1406dbdc2(*(undefined8 *)(lVar21 + 0x20),&local_f8,lVar18 + 0x28);
          pbVar8 = local_138;
        }
        else {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          FUN_1406dbdc2(*(undefined8 *)(lVar21 + 0x20),&local_f8,lVar18 + 0x28);
          pbVar8 = local_138;
          LOCK();
          plVar1 = plVar9 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        local_88 = local_f8;
        local_80 = CONCAT44(local_80._4_4_,(int)uStack_f0);
        local_b8 = local_78;
        local_b0 = CONCAT44(local_b0._4_4_,(int)uStack_70);
        local_c8 = local_120;
        local_c0 = CONCAT44(local_c0._4_4_,local_130);
        local_168 = 5;
        FUN_1427651e6(pbVar8);
        FUN_1447a1747(local_f8,uStack_f0 & 0xffffffff);
        if (local_f8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_14276b536:
      FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_a8,local_a0);
      if (local_a8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14276a817;
    }
    lVar18 = *(longlong *)(pbVar8 + 0x148);
  }
  local_f8 = (undefined2 *)CONCAT44(local_f8._4_4_,iVar14);
  FUN_1449e3bb0(lVar18 + 8);
LAB_14276a817:
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14276b481:
  unaff_R13 = CONCAT71(uVar26,1);
  lVar18 = local_148;
  if (uVar23 == uVar13) goto LAB_14276a9de;
LAB_14276b424:
  plVar9 = plVar9 + 2;
  unaff_R13 = 0;
  if (plVar9 == local_98 + (longlong)(int)uStack_90 * 2) goto LAB_14276a9de;
  goto LAB_14276b40e;
code_r0x00014276ac79:
  iVar22 = (uint)(byte)(&DAT_149e05da0)[uVar23] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar13];
LAB_14276ac7c:
  if (iVar22 == 0) goto LAB_14276ab9d;
LAB_14276ac1a:
  plVar9 = plVar9 + 2;
  bVar17 = 0;
  if (plVar9 == local_98 + (longlong)(int)uStack_90 * 2) goto LAB_14276ab9d;
  goto LAB_14276ac04;
}



// FUNCTION 14276b5da FUN_14276b5da body=29 status=ok
// SIG undefined FUN_14276b5da(void)

void FUN_14276b5da(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14276b5f8 FUN_14276b5f8 body=83 status=ok
// SIG undefined FUN_14276b5f8(void)

undefined8 * FUN_14276b5f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e1c370;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14142fefb(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276b64c FUN_14276b64c body=325 status=ok
// SIG undefined FUN_14276b64c(void)

void FUN_14276b64c(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
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



// FUNCTION 14276b792 FUN_14276b792 body=132 status=ok
// SIG undefined FUN_14276b792(void)

undefined8 FUN_14276b792(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845390) {
    FUN_144b3d300(&DAT_14c845390);
    if (DAT_14c845390 == -1) {
      FUN_1456aefde(&DAT_14c845218);
      DAT_14c845388 = &DAT_14c845218;
      atexit(FUN_14276a1e7);
      _Init_thread_footer(&DAT_14c845390);
    }
  }
  FUN_1447f69b6(DAT_14c845388 + 0x120);
  return 0;
}



// FUNCTION 14276b820 FUN_14276b820 body=12 status=ok
// SIG undefined FUN_14276b820(void)

void FUN_14276b820(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276b829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276b82c FUN_14276b82c body=29 status=ok
// SIG undefined FUN_14276b82c(void)

undefined8 FUN_14276b82c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276b84a FUN_14276b84a body=498 status=ok
// SIG undefined FUN_14276b84a(void)

undefined8 FUN_14276b84a(undefined8 *param_1,longlong *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  int local_44;
  undefined2 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_3 == '\x01') {
    if (*(int *)((undefined8 *)param_1[1] + 1) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = *(undefined2 **)param_1[1];
    }
    lVar2 = *param_2;
    lVar9 = 0;
    while( true ) {
      uVar11 = *(ushort *)(lVar2 + lVar9);
      uVar12 = (ulonglong)uVar11;
      uVar13 = *(ushort *)((longlong)puVar7 + lVar9);
      if (uVar11 != uVar13) break;
      if (uVar11 == 0) goto LAB_14276ba0a;
LAB_14276b8ab:
      lVar9 = lVar9 + 2;
    }
    if ((uVar13 | uVar11) < 0x80) {
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar14 = (ulonglong)uVar13;
      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_14276b8ab;
    }
    if (uVar11 != uVar13) {
      puVar3 = (undefined8 *)param_1[2];
      iVar1 = *(int *)(puVar3 + 1);
      FUN_140056680(&local_40);
      iVar4 = (int)local_38;
      iVar6 = (uint)((int)local_38 == 0) + iVar1 + (uint)(iVar1 == 0);
      local_50 = local_40;
      local_40 = (undefined2 *)0x0;
      local_48 = (int)local_38;
      iVar1 = local_38._4_4_;
      local_44 = local_38._4_4_;
      local_38 = 0;
      iVar10 = iVar6 + iVar4;
      if (iVar10 < iVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar6);
      }
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      if ((iVar1 < iVar10) && (FUN_1446f8c06(&local_50), local_40 != (undefined2 *)0x0)) {
        FUN_1400020a8();
      }
      iVar1 = *(int *)(puVar3 + 1) + -1;
      if (*(int *)(puVar3 + 1) == 0) {
        iVar1 = 0;
      }
      FUN_1401aebe8(&local_50,*puVar3,iVar1);
      plVar8 = (longlong *)FUN_14054d1d4();
      puVar7 = local_50;
      if (local_48 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      cVar5 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar7);
      if (cVar5 != '\0') {
        FUN_140056680(local_60,lVar2);
        FUN_14093d9c4(&local_40,local_60);
        if (local_60[0] != 0) {
          FUN_1400020a8();
        }
        FUN_140cd3926(local_60,&local_40);
        FUN_1412fabe8(*param_1,local_60);
        if (local_60[0] != 0) {
          FUN_1400020a8();
        }
        if (local_40 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14276ba0a:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14276ba3e FUN_14276ba3e body=44 status=ok
// SIG undefined FUN_14276ba3e(void)

void FUN_14276ba3e(void)

{
  if (DAT_14c845cb0 != 0) {
    (*(code *)**(undefined8 **)(DAT_14c845cb0 + 8))(DAT_14c845cb0 + 8,0);
    DAT_14c845cb0 = 0;
  }
  return;
}



// FUNCTION 14276ba6a FUN_14276ba6a body=1613 status=ok
// SIG undefined FUN_14276ba6a(void)

void FUN_14276ba6a(void *param_1)

{
  ulonglong uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_d8 [40];
  int local_b0;
  uint local_ac;
  ulonglong local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  int local_88;
  int local_84;
  void *local_80;
  int local_78;
  int local_74;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar10 = *(uint *)((longlong)param_1 + 0x818);
  if ((uint)(*(int *)((longlong)param_1 + 0x828) - *(int *)((longlong)param_1 + 0x854)) < uVar10) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar10);
    }
    FUN_141706b48((longlong)param_1 + 0x820,uVar10);
    iVar2 = 1;
    if (3 < uVar10) {
      uVar10 = (uVar10 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)((longlong)param_1 + 0x868) == 0) || (*(int *)((longlong)param_1 + 0x868) < iVar2))
    {
      *(int *)((longlong)param_1 + 0x868) = iVar2;
      FUN_141706964((longlong)param_1 + 0x820);
    }
  }
  lVar13 = *(longlong *)((longlong)param_1 + 0x810);
  if (*(longlong *)((longlong)param_1 + 0x810) == 0) {
    lVar13 = (longlong)param_1 + 0x10;
  }
  iVar2 = *(int *)((longlong)param_1 + 0x818);
  if ((longlong)iVar2 != 0) {
    lVar15 = 0;
    do {
      FUN_140bbc7de(param_1,*(undefined8 *)(lVar13 + lVar15));
      lVar15 = lVar15 + 8;
    } while ((longlong)iVar2 * 8 != lVar15);
  }
  *(undefined4 *)((longlong)param_1 + 0x818) = 0;
  if (*(int *)((longlong)param_1 + 0x81c) != 0) {
    FUN_14626a97c((longlong)param_1 + 0x10);
  }
  uVar12 = 0;
  plVar4 = (longlong *)FUN_140d6a126(DAT_14c872ce0,L"Core.Log",0,&DAT_14c872ce8);
  if (plVar4 != (longlong *)0x0) {
    iVar2 = (int)plVar4[5];
    if (iVar2 == 0) {
      uVar14 = 1;
      iVar11 = 0;
      iVar6 = 0;
    }
    else {
      puVar8 = (uint *)plVar4[4];
      if ((uint *)plVar4[4] == (uint *)0x0) {
        puVar8 = (uint *)(plVar4 + 2);
      }
      uVar10 = *puVar8;
      if (uVar10 == 0) {
        iVar11 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar11 = iVar2 + -1;
        }
        uVar12 = 0;
        uVar14 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar14 = uVar12;
        }
        iVar11 = 0;
        do {
          if (uVar14 == uVar12) goto LAB_14276be9d;
          iVar11 = iVar11 + 0x20;
          uVar10 = puVar8[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar12 = 0;
        iVar11 = 0;
      }
      uVar14 = (ulonglong)(-uVar10 & uVar10);
      uVar1 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 < iVar2) {
      uVar10 = 0xffffffff;
      do {
        local_ac = uVar10;
        lVar13 = *plVar4;
        lVar15 = (longlong)iVar6 * 0x40;
        iVar2 = *(int *)(lVar13 + 0x28 + lVar15);
        local_b0 = iVar11;
        local_a8 = uVar12;
        FUN_1400021e4(lVar13 + lVar15);
        iVar11 = (int)local_98;
        iVar3 = ((int)local_98 == 0) + 1;
        local_90 = local_a0;
        local_a0 = (void *)0x0;
        local_88 = (int)local_98;
        iVar6 = local_98._4_4_;
        local_84 = local_98._4_4_;
        local_98 = 0;
        iVar9 = iVar3 + iVar11;
        if (iVar9 < iVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar3);
        }
        if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9);
        }
        if (iVar6 < iVar9) {
          FUN_1446f8c06(&local_90);
        }
        lVar15 = lVar15 + lVar13;
        uVar12 = (ulonglong)(iVar2 - 2U < 0x7fffffff) << 4 | 8;
        FUN_1400020e8(&local_90,&DAT_149e001d8,1);
        iVar11 = local_84;
        iVar2 = local_88;
        if (local_88 < 2) {
          local_80 = (void *)0x0;
          local_78 = *(int *)(lVar15 + 0x10 + uVar12);
          lVar13 = (longlong)local_78;
          _Src = *(void **)(lVar15 + 8 + uVar12);
          if (lVar13 == 0) {
            local_74 = 0;
          }
          else {
            FUN_1446dd670(&local_80,local_78,0);
            memcpy(local_80,_Src,lVar13 * 2);
          }
        }
        else {
          iVar6 = *(int *)(lVar15 + 0x10 + uVar12);
          iVar3 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar3 = 0;
          }
          local_80 = local_90;
          local_90 = (void *)0x0;
          local_78 = local_88;
          local_74 = local_84;
          local_88 = 0;
          local_84 = 0;
          iVar6 = iVar2 + iVar3;
          if (iVar6 < iVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar3);
          }
          if (iVar11 < iVar6) {
            FUN_1446f8c06(&local_80);
          }
          FUN_1400020e8(&local_80,*(undefined8 *)(lVar15 + 8 + uVar12),iVar3);
        }
        FUN_14276c0ba(param_1,&local_80,1);
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_a0 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar10 = local_ac & ~(uint)uVar14;
        puVar8 = (uint *)plVar4[4];
        if ((uint *)plVar4[4] == (uint *)0x0) {
          puVar8 = (uint *)(plVar4 + 2);
        }
        iVar2 = (int)plVar4[5];
        iVar6 = (int)local_a8;
        lVar13 = (longlong)iVar6;
        uVar7 = puVar8[lVar13] & uVar10;
        uVar12 = local_a8;
        iVar11 = local_b0;
        if (uVar7 == 0) {
          iVar3 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar3 = iVar2 + -1;
          }
          iVar3 = iVar3 >> 5;
          iVar9 = iVar3;
          if (iVar3 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar3 <= iVar6) break;
          lVar15 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar7 = puVar8[lVar13 + lVar15 + 1];
            if (uVar7 != 0) break;
            lVar15 = lVar15 + 1;
            if (iVar9 - lVar13 == lVar15) goto LAB_14276be9d;
          }
          uVar10 = 0xffffffff;
          uVar12 = (ulonglong)(iVar6 + (int)lVar15 + 1);
        }
        uVar14 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar14 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar2);
    }
  }
LAB_14276be9d:
  iVar2 = *(int *)((longlong)param_1 + 0x848);
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar12 = 0;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = *(uint **)((longlong)param_1 + 0x840);
    if (*(uint **)((longlong)param_1 + 0x840) == (uint *)0x0) {
      puVar8 = (uint *)((longlong)param_1 + 0x830);
    }
    uVar10 = *puVar8;
    if (uVar10 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar14 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar14 = uVar12;
      }
      iVar6 = 0;
      do {
        if (uVar14 == uVar12) goto LAB_14276bfff;
        iVar6 = iVar6 + 0x20;
        uVar10 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar12 = 0;
      iVar6 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = (iVar6 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar11) {
      iVar11 = iVar2;
    }
  }
  if (iVar11 < iVar2) {
    uVar10 = 0xffffffff;
    do {
      FUN_140bbcc10(param_1,*(undefined8 *)
                             (*(longlong *)((longlong)param_1 + 0x820) + 8 + (longlong)iVar11 * 0x18
                             ),
                    *(undefined8 *)
                     (*(longlong *)((longlong)param_1 + 0x820) + (longlong)iVar11 * 0x18));
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar8 = *(uint **)((longlong)param_1 + 0x840);
      if (*(uint **)((longlong)param_1 + 0x840) == (uint *)0x0) {
        puVar8 = (uint *)((longlong)param_1 + 0x830);
      }
      iVar2 = *(int *)((longlong)param_1 + 0x848);
      iVar11 = (int)uVar12;
      lVar13 = (longlong)iVar11;
      uVar7 = puVar8[lVar13] & uVar10;
      if (uVar7 == 0) {
        iVar3 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar3 = iVar2 + -1;
        }
        iVar3 = iVar3 >> 5;
        iVar9 = iVar3;
        if (iVar3 < iVar11) {
          iVar9 = iVar11;
        }
        if (iVar3 <= iVar11) break;
        lVar15 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar7 = puVar8[lVar13 + lVar15 + 1];
          if (uVar7 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar9 - lVar13 == lVar15) goto LAB_14276bfff;
        }
        uVar12 = (ulonglong)(iVar11 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar6 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar2);
  }
LAB_14276bfff:
  if (*(char *)((longlong)param_1 + 0x910) == '\0') {
    uVar5 = FUN_145857cde();
    local_90 = param_1;
    FUN_14626a9d6(&local_80);
    FUN_145aa4344(uVar5,&local_a0,&local_80);
    FUN_1401cb1ee(&local_80);
  }
  *(undefined1 *)((longlong)param_1 + 0x910) = 1;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276c0ba FUN_14276c0ba body=4449 status=ok
// SIG undefined FUN_14276c0ba(void)

void FUN_14276c0ba(longlong param_1,undefined8 *param_2,byte param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  void *_Src;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  byte bVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ushort uVar21;
  ushort uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  byte local_119;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  uint *local_f8;
  longlong local_f0;
  longlong local_e8;
  byte local_da;
  byte local_d9;
  longlong *local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  int local_a0;
  ulonglong *local_98;
  undefined8 uStack_90;
  ulonglong *local_88;
  int local_80;
  undefined4 local_7c;
  ulonglong *local_78;
  undefined8 uStack_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c845cd8) && (FUN_144b3d300(&DAT_14c845cd8), DAT_14c845cd8 == -1)) {
    FUN_1446f470e(&DAT_14c845cd0,L"BootGlobal",1);
    _Init_thread_footer(&DAT_14c845cd8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c845ce8) && (FUN_144b3d300(&DAT_14c845ce8), DAT_14c845ce8 == -1)) {
    FUN_1446f470e(&DAT_14c845ce0,L"Reset",1);
    _Init_thread_footer(&DAT_14c845ce8);
  }
  local_88 = (ulonglong *)0x0;
  local_80 = *(int *)(param_2 + 1);
  lVar25 = (longlong)local_80;
  _Src = (void *)*param_2;
  if (lVar25 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar25 * 2);
  }
  FUN_140b7cf16(&local_88,&local_98);
  FUN_140db34f4(&local_98,0x22,0);
  local_78 = local_98;
  uStack_70 = (byte *)uStack_90;
  local_98 = (ulonglong *)0x0;
  uStack_90 = 0;
  FUN_140ded312(&local_78);
  puVar1 = local_78;
  local_78 = (ulonglong *)0x0;
  uVar5 = (undefined4)uStack_70;
  uVar6 = uStack_70._4_4_;
  uStack_70 = (byte *)0x0;
  if (local_88 == (ulonglong *)0x0) {
    local_88 = puVar1;
    local_80 = uVar5;
    local_7c = uVar6;
  }
  else {
    FUN_1400020a8();
    local_88 = puVar1;
    local_80 = uVar5;
    local_7c = uVar6;
    if (local_78 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_98 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  local_98 = (ulonglong *)0x0;
  uStack_90 = 0;
  FUN_1403de9f2(&local_88,&local_98,&DAT_149e06196);
  if (0 < (int)uStack_90) {
    local_e8 = param_1 + 0x858;
    local_118 = (longlong *)(param_1 + 0x870);
    local_f0 = param_1 + 0x8a8;
    local_110 = (longlong *)(param_1 + 0x8c0);
    local_100 = param_1 + 0x8f8;
    local_f8 = (uint *)(param_1 + 0x830);
    lVar25 = 0;
    local_119 = param_3;
    do {
      FUN_140b7cf16(local_98 + lVar25 * 2,&local_a8);
      puVar15 = local_a8;
      if (local_a0 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      lVar19 = 4;
      lVar20 = 0;
      while( true ) {
        uVar21 = *(ushort *)((longlong)puVar15 + lVar20);
        uVar16 = (ulonglong)uVar21;
        uVar22 = *(ushort *)((longlong)&DAT_149e1c5f8 + lVar20);
        if (uVar21 != uVar22) break;
        if (uVar21 == 0) goto LAB_14276c367;
LAB_14276c330:
        lVar19 = lVar19 + -1;
        if (lVar19 == 0) goto LAB_14276c367;
        lVar20 = lVar20 + 2;
      }
      if ((uVar22 | uVar21) < 0x80) {
        uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
        uVar23 = (ulonglong)uVar22;
        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
        if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar23]) goto LAB_14276c330;
      }
      if (uVar21 != uVar22) goto LAB_14276c3c3;
LAB_14276c367:
      uVar13 = local_a0 - 1;
      if (local_a0 == 0) {
        uVar13 = 0;
      }
      uVar14 = uVar13 - 4;
      if ((int)uVar13 <= (int)(uVar13 - 4)) {
        uVar14 = uVar13;
      }
      if ((int)uVar14 < 1) {
        uVar14 = 0;
      }
      uVar10 = uVar13 - uVar14;
      if ((int)uVar13 <= (int)(uVar13 - uVar14)) {
        uVar10 = uVar13;
      }
      if (0 < (int)uVar10) {
        if (local_a0 - uVar10 != 0) {
          memmove(local_a8,local_a8 + uVar10,(longlong)(int)(local_a0 - uVar10) * 2);
        }
        local_a0 = local_a0 - uVar10;
      }
LAB_14276c3c3:
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      local_128 = 1;
      FUN_144a38a52(&local_a8,&local_b8,&PTR_DAT_149e00c20);
      if (0 < (int)uStack_b0) {
        puVar15 = &DAT_149dfb77a;
        if (*(int *)(local_b8 + 1) != 0) {
          puVar15 = (undefined2 *)*local_b8;
        }
        FUN_1446f470e(&local_c0,puVar15,1);
        uVar16 = local_c0;
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        if ((uVar16 == DAT_14c892e8c & param_3) != 0) {
          local_c0 = DAT_14c845cd0;
        }
        uVar16 = local_c0;
        local_d8 = (longlong *)0x0;
        uStack_d0 = 0;
        local_d9 = 0;
        uVar14 = (uint)local_c0;
        iVar18 = (int)(local_c0 >> 0x20);
        uVar13 = (uint)(local_c0 >> 0x10);
        if (param_3 == 0) {
          if (*(int *)(param_1 + 0x868) != 0) {
            lVar19 = *(longlong *)(param_1 + 0x860);
            if (*(longlong *)(param_1 + 0x860) == 0) {
              lVar19 = local_e8;
            }
            iVar18 = *(int *)(lVar19 + (longlong)
                                       (int)(*(int *)(param_1 + 0x868) - 1U &
                                            (uVar14 << 0x10 | uVar14 & 0xffff) + iVar18 +
                                            (uVar13 << 0x13 | uVar13 & 0xffff) +
                                            ((uVar14 & 0xffff) >> 4)) * 4);
            while (iVar7 = iVar18, iVar7 != -1) {
              lVar19 = *(longlong *)(param_1 + 0x820);
              iVar18 = *(int *)(lVar19 + 0x10 + (longlong)iVar7 * 0x18);
              if (*(ulonglong *)(lVar19 + (longlong)iVar7 * 0x18) == local_c0) {
                uVar13 = 0;
                iVar24 = 0;
                do {
                  pbVar4 = *(byte **)(lVar19 + 8 + (longlong)iVar7 * 0x18);
                  local_d9 = pbVar4[1] << 7 | *pbVar4;
                  uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar24 + 1U);
                  if (uVar13 < iVar24 + 1U) {
                    FUN_1467f2730(&local_d8,iVar24);
                  }
                  local_d8[iVar24] = *(longlong *)(lVar19 + (longlong)iVar7 * 0x18 + 8);
                  do {
                    iVar7 = iVar18;
                    param_3 = local_119;
                    if (iVar7 == -1) goto LAB_14276c6cd;
                    lVar19 = *(longlong *)(param_1 + 0x820);
                    iVar18 = *(int *)(lVar19 + 0x10 + (longlong)iVar7 * 0x18);
                  } while (*(ulonglong *)(lVar19 + (longlong)iVar7 * 0x18) != uVar16);
                  uVar13 = uStack_d0._4_4_;
                  iVar24 = (int)uStack_d0;
                } while( true );
              }
            }
            goto LAB_14276c6cd;
          }
          if ((int)uStack_b0 != 1) goto LAB_14276c6fc;
LAB_14276cc98:
          if (local_c0 == DAT_14c845ce0) {
            iVar18 = *(int *)(param_1 + 0x848);
            if (iVar18 == 0) {
              uVar23 = 1;
              uVar16 = 0;
              iVar24 = 0;
              iVar7 = 0;
            }
            else {
              puVar8 = *(uint **)(param_1 + 0x840);
              if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
                puVar8 = local_f8;
              }
              uVar13 = *puVar8;
              if (uVar13 == 0) {
                iVar7 = iVar18 + 0x1e;
                if (-1 < iVar18 + -1) {
                  iVar7 = iVar18 + -1;
                }
                uVar16 = 0;
                uVar23 = (ulonglong)(uint)(iVar7 >> 5);
                if (iVar7 >> 5 < 1) {
                  uVar23 = uVar16;
                }
                iVar24 = 0;
                do {
                  local_108 = lVar25;
                  if (uVar23 == uVar16) goto LAB_14276cf64;
                  iVar24 = iVar24 + 0x20;
                  uVar13 = puVar8[uVar16 + 1];
                  uVar16 = uVar16 + 1;
                } while (uVar13 == 0);
              }
              else {
                uVar16 = 0;
                iVar24 = 0;
              }
              uVar23 = (ulonglong)(-uVar13 & uVar13);
              uVar2 = uVar23 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              iVar7 = (iVar24 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
              if (iVar18 <= iVar7) {
                iVar7 = iVar18;
              }
            }
            local_108 = lVar25;
            if (iVar7 != iVar18) {
              uVar13 = 0xffffffff;
              do {
                pbVar4 = *(byte **)(*(longlong *)(param_1 + 0x820) + 8 + (longlong)iVar7 * 0x18);
                bVar17 = *pbVar4;
                bVar9 = pbVar4[2] & 0xf;
                if (pbVar4[3] < bVar9) {
                  bVar9 = pbVar4[3];
                }
                *pbVar4 = bVar9;
                pbVar4[1] = pbVar4[2] >> 7;
                if (bVar17 != bVar9) {
                  FUN_140bbd2e0(&DAT_14c86aa30,pbVar4 + 4);
                  bVar17 = *pbVar4;
                }
                if (bVar17 != 0) {
                  local_78 = &local_c0;
                  uStack_70 = &local_da;
                  local_da = bVar17;
                  FUN_140bbce72(local_110,local_64,&local_78,0);
                }
                uVar13 = uVar13 & ~(uint)uVar23;
                puVar8 = *(uint **)(param_1 + 0x840);
                if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
                  puVar8 = local_f8;
                }
                iVar3 = *(int *)(param_1 + 0x848);
                iVar7 = (int)uVar16;
                lVar25 = (longlong)iVar7;
                uVar14 = puVar8[lVar25] & uVar13;
                if (uVar14 == 0) {
                  iVar11 = iVar3 + 0x1e;
                  if (-1 < iVar3 + -1) {
                    iVar11 = iVar3 + -1;
                  }
                  iVar11 = iVar11 >> 5;
                  iVar24 = iVar24 + 0x20;
                  iVar12 = iVar11;
                  if (iVar11 < iVar7) {
                    iVar12 = iVar7;
                  }
                  if (iVar7 < iVar11) {
                    lVar19 = 0;
                    do {
                      uVar14 = puVar8[lVar25 + lVar19 + 1];
                      if (uVar14 != 0) {
                        uVar16 = (ulonglong)(iVar7 + (int)lVar19 + 1);
                        uVar13 = 0xffffffff;
                        goto LAB_14276ce6e;
                      }
                      iVar24 = iVar24 + 0x20;
                      lVar19 = lVar19 + 1;
                    } while (iVar12 - lVar25 != lVar19);
                    uVar13 = 0xffffffff;
                    iVar7 = iVar12;
                  }
                  uVar16 = (ulonglong)(iVar7 + 1);
                  iVar7 = iVar3;
                }
                else {
LAB_14276ce6e:
                  uVar23 = (ulonglong)(-uVar14 & uVar14);
                  uVar2 = uVar23 * 2 + 1;
                  lVar25 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                    }
                  }
                  iVar7 = (iVar24 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
                  if (iVar3 <= iVar7) {
                    iVar7 = iVar3;
                  }
                }
              } while (iVar7 != iVar18);
            }
LAB_14276cf64:
            lVar25 = local_108;
            param_3 = local_119;
            if (local_c0 == DAT_14c845ce0) goto LAB_14276d0af;
            if (local_119 != 0) goto LAB_14276cf90;
          }
          else {
            if ((local_d9 & 0xf) == 0) {
              if (*(int *)(param_1 + 0x8c8) != *(int *)(param_1 + 0x8f4)) {
                uVar13 = (uint)(local_c0 >> 0x10);
                uVar14 = (uint)local_c0 & 0xffff;
                lVar19 = *(longlong *)(param_1 + 0x900);
                if (*(longlong *)(param_1 + 0x900) == 0) {
                  lVar19 = local_100;
                }
                iVar18 = *(int *)(lVar19 + (ulonglong)
                                           (*(int *)(param_1 + 0x908) - 1U &
                                           (int)(local_c0 >> 0x20) +
                                           ((uint)local_c0 << 0x10 | uVar14) +
                                           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar14 >> 4)) * 4);
                if (iVar18 != -1) {
                  do {
                    puVar1 = (ulonglong *)(*local_110 + (longlong)iVar18 * 0x14);
                    if (*puVar1 == local_c0) {
                      if ((puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) &&
                         (bVar17 = (byte)puVar1[1], bVar17 != 0)) {
                        local_d9 = local_d9 | bVar17;
                        local_108 = lVar25;
                        goto LAB_14276cf64;
                      }
                      break;
                    }
                    iVar18 = *(int *)((longlong)puVar1 + 0xc);
                  } while (iVar18 != -1);
                }
              }
              local_d9 = local_d9 | 7;
              local_108 = lVar25;
              goto LAB_14276cf64;
            }
            local_d9 = local_d9 & 0xf0;
          }
          if (0 < (int)uStack_d0) {
            lVar19 = 0;
            do {
              pbVar4 = (byte *)local_d8[lVar19];
              bVar17 = pbVar4[3];
              if ((local_d9 & 0xf) <= pbVar4[3]) {
                bVar17 = local_d9 & 0xf;
              }
              bVar9 = *pbVar4;
              *pbVar4 = bVar17;
              pbVar4[1] = local_d9 >> 7;
              if (bVar9 != bVar17) {
                FUN_140bbd2e0(&DAT_14c86aa30,pbVar4 + 4);
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < (int)uStack_d0);
          }
          uVar16 = local_c0;
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          if (uVar16 == DAT_14c892e8c) {
            FUN_1467f24a8(param_1);
          }
LAB_14276d069:
          local_da = local_d9 & 0xf;
          if (local_da != 0) {
            local_78 = &local_c0;
            uStack_70 = &local_da;
            FUN_141468f82(local_110,local_64,&local_78);
          }
        }
        else {
          if (*(int *)(param_1 + 0x878) == *(int *)(param_1 + 0x8a4)) {
            if ((int)uStack_b0 != 1) {
LAB_14276c6fc:
              local_108 = lVar25;
              if (1 < (int)uStack_b0) {
                lVar19 = 1;
                do {
                  puVar15 = &DAT_149dfb77a;
                  if (*(int *)(local_b8 + lVar19 * 2 + 1) != 0) {
                    puVar15 = (undefined2 *)local_b8[lVar19 * 2];
                  }
                  FUN_1446f470e(&local_78,puVar15,1);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c845cf8) &&
                     (FUN_144b3d300(&DAT_14c845cf8), DAT_14c845cf8 == -1)) {
                    FUN_1446f470e(&DAT_14c845cf0,L"Verbose",1);
                    _Init_thread_footer(&DAT_14c845cf8);
                  }
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c845d08) &&
                     (FUN_144b3d300(&DAT_14c845d08), DAT_14c845d08 == -1)) {
                    FUN_1446f470e(&DAT_14c845d00,L"VeryVerbose",1);
                    _Init_thread_footer(&DAT_14c845d08);
                  }
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c845d18) &&
                     (FUN_144b3d300(&DAT_14c845d18), DAT_14c845d18 == -1)) {
                    FUN_1446f470e(&DAT_14c845d10,&DAT_149e060ac,1);
                    _Init_thread_footer(&DAT_14c845d18);
                  }
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c845d28) &&
                     (FUN_144b3d300(&DAT_14c845d28), DAT_14c845d28 == -1)) {
                    FUN_1446f470e(&DAT_14c845d20,&DAT_149e1d734,1);
                    _Init_thread_footer(&DAT_14c845d28);
                  }
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c845d38) &&
                     (FUN_144b3d300(&DAT_14c845d38), DAT_14c845d38 == -1)) {
                    FUN_1446f470e(&DAT_14c845d30,L"Break",1);
                    _Init_thread_footer(&DAT_14c845d38);
                  }
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c845d48) &&
                     (FUN_144b3d300(&DAT_14c845d48), DAT_14c845d48 == -1)) {
                    FUN_1446f470e(&DAT_14c845d40,L"Fatal",1);
                    _Init_thread_footer(&DAT_14c845d48);
                  }
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c845d58) &&
                     (FUN_144b3d300(&DAT_14c845d58), DAT_14c845d58 == -1)) {
                    FUN_1446f470e(&DAT_14c845d50,&DAT_149e1b1d8,1);
                    _Init_thread_footer(&DAT_14c845d58);
                  }
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c845d68) &&
                     (FUN_144b3d300(&DAT_14c845d68), DAT_14c845d68 == -1)) {
                    FUN_1446f470e(&DAT_14c845d60,L"Display",1);
                    _Init_thread_footer(&DAT_14c845d68);
                  }
                  puVar1 = local_78;
                  if ((local_78 == (ulonglong *)0x0) || (local_78 == DAT_14c845d40)) {
LAB_14276c887:
                    local_d9 = (local_d9 & 0xf0) + 1;
                  }
                  else {
                    if (DAT_14c87ead8 == '\0') {
                      FUN_140024d3a(&DAT_14c87eb00);
                      DAT_14c87ead8 = '\x01';
                    }
                    if (puVar1 == (ulonglong *)(ulonglong)DAT_14c8930d0) {
                      local_d9 = local_d9 & 0xf0 | 2;
                    }
                    else if (local_78 == (ulonglong *)(ulonglong)DAT_14c8930cc) {
                      local_d9 = local_d9 & 0xf0 | 3;
                    }
                    else if (local_78 == DAT_14c845d50) {
                      local_d9 = local_d9 & 0xf0 | 5;
                    }
                    else if (local_78 == DAT_14c845d60) {
                      local_d9 = local_d9 & 0xf0 | 4;
                    }
                    else if (local_78 == DAT_14c845cf0) {
                      local_d9 = local_d9 & 0xf0 | 6;
                    }
                    else if ((local_78 == DAT_14c845d00) ||
                            (local_78 == (ulonglong *)(ulonglong)DAT_14c892ed8)) {
LAB_14276c980:
                      local_d9 = local_d9 & 0xf0 | 7;
                    }
                    else if (local_78 == (ulonglong *)(ulonglong)DAT_14c892e70) {
                      if ((int)uStack_d0 != 0 && local_119 == 0) {
                        local_d9 = *(byte *)(*local_d8 + 2);
                      }
                    }
                    else {
                      if (local_78 == DAT_14c845d20) goto LAB_14276c887;
                      if (local_78 == DAT_14c845d10) {
                        if (*(int *)(param_1 + 0x8c8) != *(int *)(param_1 + 0x8f4)) {
                          uVar13 = (uint)(local_c0 >> 0x10);
                          uVar14 = (uint)local_c0 & 0xffff;
                          lVar25 = *(longlong *)(param_1 + 0x900);
                          if (*(longlong *)(param_1 + 0x900) == 0) {
                            lVar25 = local_100;
                          }
                          iVar18 = *(int *)(lVar25 + (ulonglong)
                                                     (*(int *)(param_1 + 0x908) - 1U &
                                                     (int)(local_c0 >> 0x20) +
                                                     ((uint)local_c0 << 0x10 | uVar14) +
                                                     (uVar13 << 0x13 | uVar13 & 0xffff) +
                                                     (uVar14 >> 4)) * 4);
                          if (iVar18 != -1) {
                            do {
                              puVar1 = (ulonglong *)(*local_110 + (longlong)iVar18 * 0x14);
                              if (*puVar1 == local_c0) {
                                if ((puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0)
                                   && (bVar17 = (byte)puVar1[1], bVar17 != 0)) {
                                  local_d9 = local_d9 & 0xf0 | bVar17;
                                  goto LAB_14276c893;
                                }
                                break;
                              }
                              iVar18 = *(int *)((longlong)puVar1 + 0xc);
                            } while (iVar18 != -1);
                          }
                        }
                        goto LAB_14276c980;
                      }
                      if (local_78 == DAT_14c845d30) {
                        local_d9 = local_d9 ^ 0x80;
                      }
                    }
                  }
LAB_14276c893:
                  lVar19 = lVar19 + 1;
                } while (lVar19 < (int)uStack_b0);
              }
              goto LAB_14276cf64;
            }
          }
          else {
            lVar19 = *(longlong *)(param_1 + 0x8b0);
            if (*(longlong *)(param_1 + 0x8b0) == 0) {
              lVar19 = local_f0;
            }
            uVar10 = *(int *)(param_1 + 0x8b8) - 1;
            iVar18 = *(int *)(lVar19 + (ulonglong)
                                       (iVar18 + (uVar14 << 0x10 | uVar14 & 0xffff) +
                                        (uVar13 << 0x13 | uVar13 & 0xffff) +
                                        ((uVar14 & 0xffff) >> 4) & uVar10) * 4);
            if (iVar18 != -1) {
              do {
                puVar1 = (ulonglong *)(*local_118 + (longlong)iVar18 * 0x14);
                if (*puVar1 == local_c0) {
                  if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                    local_d9 = (byte)puVar1[1];
                    goto LAB_14276c6cd;
                  }
                  break;
                }
                iVar18 = *(int *)((longlong)puVar1 + 0xc);
              } while (iVar18 != -1);
            }
            uVar13 = (uint)(DAT_14c845cd0 >> 0x10);
            uVar14 = (uint)DAT_14c845cd0 & 0xffff;
            iVar18 = *(int *)(lVar19 + (ulonglong)
                                       ((int)(DAT_14c845cd0 >> 0x20) +
                                        ((uint)DAT_14c845cd0 << 0x10 | uVar14) +
                                        (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar14 >> 4) & uVar10)
                                       * 4);
            if (iVar18 != -1) {
              do {
                puVar1 = (ulonglong *)(*local_118 + (longlong)iVar18 * 0x14);
                if (*puVar1 == DAT_14c845cd0) {
                  if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                    local_d9 = (byte)puVar1[1];
                  }
                  break;
                }
                iVar18 = *(int *)((longlong)puVar1 + 0xc);
              } while (iVar18 != -1);
            }
LAB_14276c6cd:
            if ((int)uStack_b0 != 1) goto LAB_14276c6fc;
            if (param_3 == 0) goto LAB_14276cc98;
          }
          if (local_c0 != DAT_14c845ce0) {
LAB_14276cf90:
            if (local_c0 == DAT_14c845cd0) {
              FUN_1467f27b6(local_118);
            }
            local_78 = &local_c0;
            uStack_70 = &local_d9;
            FUN_141468f82(local_118,local_64,&local_78);
            goto LAB_14276d069;
          }
        }
LAB_14276d0af:
        if (local_d8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1447a1747(local_b8,(int)uStack_b0);
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < (int)uStack_90);
  }
  FUN_1447a1747(local_98);
  if (local_98 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


