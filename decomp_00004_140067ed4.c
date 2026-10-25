// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140067ed4 FUN_140067ed4 body=610 status=ok
// SIG undefined FUN_140067ed4(void)

undefined8 FUN_140067ed4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_8d8 [32];
  undefined1 local_8b8;
  longlong local_8a8;
  undefined8 uStack_8a0;
  undefined1 *local_890;
  undefined4 local_888;
  longlong local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  undefined1 *local_868;
  char local_860;
  undefined1 local_858 [2070];
  undefined1 local_42 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_8d8;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    lVar8 = *param_2;
    local_880 = lVar8;
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1b10);
    if (DAT_14c9a1b28 != DAT_14c9a1b54) {
      uVar2 = (uint)((ulonglong)lVar8 >> 0x10);
      uVar6 = (uint)lVar8 & 0xffff;
      puVar7 = &DAT_14c9a1b58;
      if (DAT_14c9a1b60 != (undefined *)0x0) {
        puVar7 = DAT_14c9a1b60;
      }
      for (iVar1 = *(int *)(puVar7 + (ulonglong)
                                     (DAT_14c9a1b68 - 1U &
                                     (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6)
                                     + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
          iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + DAT_14c9a1b20 + 8)) {
        if (*(longlong *)(DAT_14c9a1b20 + (longlong)iVar1 * 0x10) == lVar8) {
          ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1b10);
          goto LAB_140067fc6;
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1b10);
      goto LAB_140067fb4;
    }
    local_878 = local_858;
    local_860 = '\0';
    local_868 = local_42;
    local_870 = local_878;
    FUN_14005eb5c(&local_880,&local_878);
    local_890 = local_878;
    local_888 = (undefined4)((ulonglong)((longlong)local_870 - (longlong)local_878) >> 1);
    bVar4 = FUN_14475c62c();
    uVar9 = 0;
    bVar11 = false;
    if (bVar4 == 0) {
      local_8a8 = 0;
      uStack_8a0 = 0;
      local_8b8 = 1;
      (**(code **)(*DAT_14c9485b8 + 0x18))(DAT_14c9485b8,lVar8,&local_8a8,1);
      if ((longlong)(int)uStack_8a0 == 0) {
        bVar11 = false;
      }
      else {
        lVar10 = (longlong)(int)uStack_8a0 * 0x70;
        lVar8 = local_8a8;
        do {
          cVar3 = FUN_1470a3fea(lVar8,0);
          if (cVar3 != '\0') goto LAB_1400680ef;
          lVar8 = lVar8 + 0x70;
          lVar10 = lVar10 + -0x70;
        } while (lVar10 != 0);
        lVar8 = 0;
LAB_1400680ef:
        bVar11 = lVar8 != 0;
        uVar9 = (int)uStack_8a0;
      }
      FUN_140195631(local_8a8,uVar9);
      if (local_8a8 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_860 == '\x01') {
      FUN_1400020a8(local_878);
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1b10);
    if ((bVar11 & (bVar4 ^ 1)) == 0) goto LAB_140067fb4;
  }
  else {
LAB_140067fb4:
    cVar3 = FUN_14475c344(param_1,param_2,param_3);
    if (cVar3 != '\0') {
      FUN_1400b3c24(param_1,param_2);
      uVar5 = 1;
      goto LAB_140067fc8;
    }
  }
LAB_140067fc6:
  uVar5 = 0;
LAB_140067fc8:
  if ((local_40 ^ (ulonglong)auStack_8d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140068137 FUN_140068137 body=331 status=ok
// SIG undefined FUN_140068137(void)

undefined8
FUN_140068137(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  
  piVar2 = DAT_14c950c20;
  if ((DAT_14c949800 & 1) != 0) {
    return 0;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1400681cd;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar2 + 4);
    while( true ) {
      if (0 < piVar2[1]) {
        (**(code **)(**(longlong **)(piVar2 + 0xe) + 0x20))
                  (*(longlong **)(piVar2 + 0xe),0xffffffff,0);
      }
      EnterCriticalSection(lpCriticalSection);
      if (piVar2[1] == 0) break;
      LeaveCriticalSection(lpCriticalSection);
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_1400681cd:
  uVar5 = FUN_140277b32(param_1,param_2,param_3,param_4);
  piVar2 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) {
        return uVar5;
      }
    }
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 140068282 FUN_140068282 body=598 status=ok
// SIG undefined FUN_140068282(void)

void FUN_140068282(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x30;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x2c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x28 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_14006848f;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_14006848f:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400684da FUN_1400684da body=2622 status=ok
// SIG undefined FUN_1400684da(void)

PSRWLOCK FUN_1400684da(PSRWLOCK param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  PSRWLOCK pRVar4;
  PSRWLOCK pRVar5;
  PSRWLOCK pRVar6;
  RTL_SRWLOCK RVar7;
  char cVar8;
  int iVar9;
  PSRWLOCK pRVar10;
  int iVar11;
  PSRWLOCK pRVar12;
  longlong lVar13;
  PSRWLOCK pRVar14;
  undefined1 auStack_108 [40];
  PSRWLOCK local_e0;
  PSRWLOCK local_d8;
  PSRWLOCK local_d0;
  PSRWLOCK local_c8;
  PSRWLOCK local_c0;
  PSRWLOCK local_b8;
  PSRWLOCK local_b0;
  PSRWLOCK local_a8;
  PSRWLOCK local_a0;
  PSRWLOCK local_98;
  PSRWLOCK local_90;
  PSRWLOCK local_88;
  PSRWLOCK local_80;
  PSRWLOCK local_78;
  PSRWLOCK local_70;
  RTL_SRWLOCK local_68;
  undefined8 local_60;
  RTL_SRWLOCK local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  InitializeSRWLock(param_1);
  pRVar1 = param_1 + 1;
  local_b8 = param_1 + 0xf;
  local_b0 = param_1 + 0x11;
  memset(pRVar1,0,0x130);
  param_1[0x28].Ptr = (PVOID)0x0;
  param_1[0x29].Ptr = (PVOID)0x0;
  *(undefined8 *)((longlong)&param_1[0x29].Ptr + 4) = 0;
  *(undefined8 *)((longlong)&param_1[0x2a].Ptr + 4) = 0;
  *(undefined4 *)((longlong)&param_1[0x2b].Ptr + 4) = 0x2f;
  param_1[0x2d].Ptr = (PVOID)0x0;
  param_1[0x2e].Ptr = (PVOID)0x0;
  *(undefined8 *)((longlong)&param_1[0x2e].Ptr + 4) = 0;
  *(undefined8 *)((longlong)&param_1[0x2f].Ptr + 4) = 0;
  *(undefined2 *)((longlong)&param_1[0x30].Ptr + 4) = 0x2f;
  *(undefined8 *)((longlong)&param_1[0x30].Ptr + 6) = 0;
  *(undefined8 *)((longlong)&param_1[0x31].Ptr + 6) = 0;
  *(undefined2 *)((longlong)&param_1[0x32].Ptr + 6) = 0;
  local_70 = pRVar1;
  FUN_14020fad6(pRVar1,L"/Config/");
  local_88 = param_1 + 3;
  FUN_14020fad6(param_1 + 3,L"/Engine/");
  local_80 = param_1 + 5;
  FUN_14020fad6(param_1 + 5,L"/Game/");
  local_e0 = param_1 + 7;
  FUN_14020fad6(param_1 + 7,L"/Script/");
  FUN_14020fad6(param_1 + 9,L"/Memory/");
  local_78 = param_1 + 0xb;
  FUN_14020fad6(param_1 + 0xb,&DAT_149e3fcfc);
  FUN_14020fad6(param_1 + 0xd,L"/_Verse/");
  FUN_1414927bc(&local_58);
  if (local_b8 == &local_58) {
    if (local_58.Ptr != (PVOID)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_b8->Ptr != (PVOID)0x0) {
      FUN_1400020a8();
    }
    param_1[0xf].Ptr = local_58.Ptr;
    local_58.Ptr = (PVOID)0x0;
    *(int *)&param_1[0x10].Ptr = (int)local_50;
    *(undefined4 *)((longlong)&param_1[0x10].Ptr + 4) = local_50._4_4_;
  }
  FUN_14020fad6(local_b0,L"../../Content/");
  FUN_140d6ac5a();
  FUN_140056680(&local_68);
  iVar2 = (int)local_60;
  iVar9 = ((int)local_60 == 0) + 9;
  local_58.Ptr = local_68.Ptr;
  local_68.Ptr = (PVOID)0x0;
  iVar3 = local_60._4_4_;
  local_50 = local_60;
  local_60 = 0;
  iVar11 = iVar9 + iVar2;
  if (iVar2 <= iVar11) {
    if (-1 < iVar11) {
      pRVar1 = param_1 + 0x13;
      if (iVar3 < iVar11) {
        FUN_1446f8c06(&local_58);
      }
      FUN_1401aebe8(&local_58,L"Shaders/",8);
      if (pRVar1 == &local_58) {
        if (local_58.Ptr != (PVOID)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (pRVar1->Ptr != (PVOID)0x0) {
          FUN_1400020a8();
        }
        param_1[0x13].Ptr = local_58.Ptr;
        local_58.Ptr = (PVOID)0x0;
        *(int *)&param_1[0x14].Ptr = (int)local_50;
        *(undefined4 *)((longlong)&param_1[0x14].Ptr + 4) = local_50._4_4_;
        local_50 = 0;
      }
      local_c0 = param_1 + 0x15;
      pRVar10 = param_1 + 0x17;
      if (local_68.Ptr != (PVOID)0x0) {
        FUN_1400020a8();
      }
      local_c8 = param_1 + 0x19;
      FUN_14020fad6(local_c0,L"../../Shaders/");
      FUN_1410f2562(&local_58);
      if (pRVar10 == &local_58) {
        if (local_58.Ptr != (PVOID)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (pRVar10->Ptr != (PVOID)0x0) {
          FUN_1400020a8();
        }
        param_1[0x17].Ptr = local_58.Ptr;
        local_58.Ptr = (PVOID)0x0;
        *(int *)&param_1[0x18].Ptr = (int)local_50;
        *(undefined4 *)((longlong)&param_1[0x18].Ptr + 4) = local_50._4_4_;
      }
      FUN_14626c0de(&local_58);
      local_d8 = pRVar10;
      if (local_c8 == &local_58) {
        if (local_58.Ptr != (PVOID)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (local_c8->Ptr != (PVOID)0x0) {
          FUN_1400020a8();
        }
        param_1[0x19].Ptr = local_58.Ptr;
        local_58.Ptr = (PVOID)0x0;
        *(int *)&param_1[0x1a].Ptr = (int)local_50;
        *(undefined4 *)((longlong)&param_1[0x1a].Ptr + 4) = local_50._4_4_;
      }
      FUN_140d6afb0();
      FUN_140056680(&local_68);
      iVar2 = (int)local_60;
      iVar9 = ((int)local_60 == 0) + 8;
      local_58.Ptr = local_68.Ptr;
      local_68.Ptr = (PVOID)0x0;
      iVar3 = local_60._4_4_;
      local_50 = local_60;
      local_60 = 0;
      iVar11 = iVar9 + iVar2;
      if (iVar11 < iVar2) goto LAB_140068f0b;
      if (-1 < iVar11) {
        pRVar10 = param_1 + 0x1b;
        if (iVar3 < iVar11) {
          FUN_1446f8c06(&local_58);
        }
        FUN_1401aebe8(&local_58,L"Script/",7);
        if (pRVar10 == &local_58) {
          if (local_58.Ptr != (PVOID)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (pRVar10->Ptr != (PVOID)0x0) {
            FUN_1400020a8();
          }
          param_1[0x1b].Ptr = local_58.Ptr;
          local_58.Ptr = (PVOID)0x0;
          *(int *)&param_1[0x1c].Ptr = (int)local_50;
          *(undefined4 *)((longlong)&param_1[0x1c].Ptr + 4) = local_50._4_4_;
          local_50 = 0;
        }
        pRVar12 = param_1 + 0x1d;
        local_90 = pRVar10;
        if (local_68.Ptr != (PVOID)0x0) {
          FUN_1400020a8();
        }
        pRVar10 = (PSRWLOCK)FUN_14047ac8c();
        if (pRVar12 != pRVar10) {
          iVar2 = *(int *)((longlong)&param_1[0x1e].Ptr + 4);
          iVar3 = *(int *)&pRVar10[1].Ptr;
          _Src = pRVar10->Ptr;
          *(int *)&param_1[0x1e].Ptr = iVar3;
          if (iVar3 == 0 && iVar2 == 0) {
            *(undefined4 *)((longlong)&param_1[0x1e].Ptr + 4) = 0;
          }
          else {
            FUN_1446dd670(pRVar12,iVar3);
            if (iVar3 != 0) {
              memcpy(pRVar12->Ptr,_Src,(longlong)iVar3 * 2);
            }
          }
        }
        pRVar10 = param_1 + 0x1f;
        local_98 = pRVar12;
        FUN_140002266(&local_58,L"../../../%s/",&DAT_14c764000);
        RVar7.Ptr = local_58.Ptr;
        lVar13 = (longlong)(int)local_50;
        local_68.Ptr = (void *)0x0;
        local_60 = CONCAT44(local_60._4_4_,(int)local_50);
        FUN_1446dd670(&local_68,(uint)(lVar13 == 0) + (int)local_50 + 9,0);
        if (lVar13 != 0) {
          memcpy(local_68.Ptr,RVar7.Ptr,lVar13 * 2);
        }
        pRVar14 = local_88;
        FUN_1401aebe8(&local_68,L"Content/",8);
        pRVar12 = local_e0;
        local_a0 = pRVar10;
        if (pRVar10 == &local_68) {
          if (local_68.Ptr != (PVOID)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (pRVar10->Ptr != (PVOID)0x0) {
            FUN_1400020a8();
          }
          param_1[0x1f].Ptr = local_68.Ptr;
          *(int *)&param_1[0x20].Ptr = (int)local_60;
          *(int *)((longlong)&param_1[0x20].Ptr + 4) = local_60._4_4_;
          pRVar12 = local_e0;
        }
        RVar7.Ptr = local_58.Ptr;
        pRVar10 = param_1 + 0x21;
        lVar13 = (longlong)(int)local_50;
        local_68.Ptr = (void *)0x0;
        local_60 = CONCAT44(local_60._4_4_,(int)local_50);
        FUN_1446dd670(&local_68,(int)local_50 + (uint)(lVar13 == 0) + 8,0);
        if (lVar13 != 0) {
          memcpy(local_68.Ptr,RVar7.Ptr,lVar13 * 2);
        }
        FUN_1401aebe8(&local_68,L"Config/",7);
        if (pRVar10 == &local_68) {
          if (local_68.Ptr != (PVOID)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (pRVar10->Ptr != (PVOID)0x0) {
            FUN_1400020a8();
          }
          param_1[0x21].Ptr = local_68.Ptr;
          *(int *)&param_1[0x22].Ptr = (int)local_60;
          *(int *)((longlong)&param_1[0x22].Ptr + 4) = local_60._4_4_;
        }
        RVar7.Ptr = local_58.Ptr;
        local_e0 = param_1 + 0x23;
        lVar13 = (longlong)(int)local_50;
        local_68.Ptr = (void *)0x0;
        local_60 = CONCAT44(local_60._4_4_,(int)local_50);
        FUN_1446dd670(&local_68,(int)local_50 + (uint)(lVar13 == 0) + 8,0);
        if (lVar13 != 0) {
          memcpy(local_68.Ptr,RVar7.Ptr,lVar13 * 2);
        }
        FUN_1401aebe8(&local_68,L"Script/",7);
        pRVar4 = local_d8;
        local_a8 = pRVar10;
        if (local_e0 == &local_68) {
          if (local_68.Ptr != (PVOID)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (local_e0->Ptr != (PVOID)0x0) {
            FUN_1400020a8();
          }
          param_1[0x23].Ptr = local_68.Ptr;
          *(int *)&param_1[0x24].Ptr = (int)local_60;
          *(int *)((longlong)&param_1[0x24].Ptr + 4) = local_60._4_4_;
        }
        RVar7.Ptr = local_58.Ptr;
        local_d0 = param_1 + 0x25;
        lVar13 = (longlong)(int)local_50;
        local_68.Ptr = (void *)0x0;
        local_60 = CONCAT44(local_60._4_4_,(int)local_50);
        FUN_1446dd670(&local_68,(uint)(lVar13 == 0) + (int)local_50 + 7,0);
        if (lVar13 != 0) {
          memcpy(local_68.Ptr,RVar7.Ptr,lVar13 * 2);
        }
        FUN_1401aebe8(&local_68,L"Saved/",6);
        if (local_d0 == &local_68) {
          if (local_68.Ptr != (PVOID)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (local_d0->Ptr != (PVOID)0x0) {
            FUN_1400020a8();
          }
          param_1[0x25].Ptr = local_68.Ptr;
          *(int *)&param_1[0x26].Ptr = (int)local_60;
          *(int *)((longlong)&param_1[0x26].Ptr + 4) = local_60._4_4_;
        }
        local_68.Ptr = param_1;
        FUN_146271d80(&local_68,pRVar14,local_b8,0);
        FUN_146271d80(&local_68,pRVar14,pRVar1,4);
        pRVar10 = local_80;
        FUN_146271d80(&local_68,local_80,pRVar4,0);
        FUN_146271d80(&local_68,pRVar12,local_90,2);
        pRVar5 = local_78;
        FUN_146271d80(&local_68,local_78,local_98,2);
        pRVar6 = local_70;
        FUN_146271d80(&local_68,local_70,local_c8,2);
        FUN_146271d80(&local_68,pRVar14,local_c0,4);
        pRVar1 = local_b0;
        cVar8 = FUN_14626c1be(pRVar4,local_b0);
        if (cVar8 != '\0') {
          pRVar14 = pRVar10;
        }
        FUN_146271d80(&local_68,pRVar14,pRVar1,4);
        FUN_146271d80(&local_68,pRVar10,local_a0,4);
        FUN_146271d80(&local_68,pRVar12,local_e0,6);
        FUN_146271d80(&local_68,pRVar5,local_d0,6);
        FUN_146271d80(&local_68,pRVar6,local_a8,6);
        if (local_58.Ptr != (void *)0x0) {
          FUN_1400020a8();
        }
        if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
    local_60 = 0;
    local_68.Ptr = (PVOID)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
LAB_140068f0b:
  local_60 = 0;
  local_68.Ptr = (PVOID)0x0;
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 140068f1a FUN_140068f1a body=485 status=ok
// SIG undefined FUN_140068f1a(void)

undefined8 *
FUN_140068f1a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ushort param_4,
             undefined1 param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  undefined1 in_XMM0 [16];
  undefined1 auVar10 [16];
  
  *param_1 = &PTR_FUN_14a1fb960;
  param_1[2] = *param_3;
  lVar4 = param_3[1];
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = param_3[2];
  *(ushort *)(param_1 + 5) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x2a) = param_5;
  cVar8 = '\x02' - ((param_4 & 4) == 0);
  *(char *)((longlong)param_1 + 0x2b) = cVar8;
  auVar10 = pmovsxbd(in_XMM0,0x1ff);
  *(undefined1 (*) [16])((longlong)param_1 + 0x2c) = auVar10;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x100000000;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x14) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x16) = (undefined1  [16])0x0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x100000000;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0x400000000;
  param_1[0x25] = param_1;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 (*) [16])(param_1 + 0x27) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x154) = 1;
  *(undefined1 (*) [16])(param_1 + 0x2d) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x2b) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x2f) = 1;
  *(char *)((longlong)param_1 + 0x17c) = cVar8;
  *(undefined1 *)((longlong)param_1 + 0x17d) = 1;
  *(undefined1 (*) [16])((longlong)param_1 + 0x19c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x18e) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x17e) = (undefined1  [16])0x0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 1;
  param_1[0x36] = 0;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar9) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar9) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 140069100 FUN_140069100 body=629 status=ok
// SIG undefined FUN_140069100(void)

longlong FUN_140069100(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_3a;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = *(ushort *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x2c);
  iVar7 = *(int *)(param_2 + 0xd0);
  *(uint *)(param_2 + 0xd0) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0xd4) < iVar7 + 1U) {
    FUN_14742e1f0(param_2 + 0xc0,iVar7);
  }
  lVar11 = param_2 + 0xc0;
  if (*(longlong *)(param_2 + 200) != 0) {
    lVar11 = *(longlong *)(param_2 + 200);
  }
  *(longlong *)(lVar11 + (longlong)iVar7 * 8) = param_2;
  iVar7 = *(int *)(param_2 + 0xe8);
  *(uint *)(param_2 + 0xe8) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0xec) < iVar7 + 1U) {
    FUN_14742e1f0(param_2 + 0xd8,iVar7);
  }
  lVar11 = param_2 + 0xd8;
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    lVar11 = *(longlong *)(param_2 + 0xe0);
  }
  *(longlong *)(lVar11 + (longlong)iVar7 * 8) = param_2;
  *(uint *)(param_1 + 0x2a) = *(int *)(param_1 + 0x2a) + (uint)((uVar6 >> 2 & 1) != 0);
  *(int *)((longlong)param_1 + 0x154) = *(int *)((longlong)param_1 + 0x154) + (uVar6 & 1);
  *(undefined4 *)(param_2 + 0x1ac) = *(undefined4 *)(param_1[3] + 0x17c);
  *(undefined8 *)(param_2 + 0x1b0) = *param_1;
  if (*(char *)(param_1 + 0xa4) == '\x01') {
    local_58 = *(undefined8 *)(param_2 + 0x10);
    local_50 = *(longlong *)(param_2 + 0x18);
    if (local_50 == 0) {
      lVar11 = 0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
      lVar11 = local_50;
    }
    local_48 = *(undefined8 *)(param_2 + 0x20);
    local_68 = &local_39;
    local_60 = &local_3a;
    FUN_14320c68e();
    if (lVar11 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar11 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar11;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
    pcVar2 = (char *)(param_1 + 0x95);
    LOCK();
    bVar12 = *(char *)(param_1 + 0x95) == '\0';
    if (bVar12) {
      *(char *)(param_1 + 0x95) = '\x01';
    }
    UNLOCK();
    if (!bVar12) {
      FUN_1447d2058();
    }
    iVar7 = *(int *)(param_1 + 0x97);
    *(uint *)(param_1 + 0x97) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0x4bc) < iVar7 + 1U) {
      FUN_1447f2dbc(param_1 + 0x96,iVar7);
    }
    lVar11 = param_1[0x96];
    *(undefined8 *)(lVar11 + (longlong)iVar7 * 0x10) = 0;
    *(longlong *)(lVar11 + 8 + (longlong)iVar7 * 0x10) = param_2;
    LOCK();
    cVar3 = *pcVar2;
    if (cVar3 == '\x01') {
      *pcVar2 = '\0';
    }
    UNLOCK();
    if (cVar3 != '\x01') {
      FUN_14008cdb0(pcVar2);
    }
  }
  else {
    FUN_14470d350(param_1,param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140069376 FUN_140069376 body=2231 status=ok
// SIG undefined FUN_140069376(void)

void FUN_140069376(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  byte bVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  bool bVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  char *local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined8 **local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  ulonglong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_8c [4];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  longlong local_70;
  undefined *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(int *)(param_1 + 0x5a0) == 0) || (*(char *)(param_1 + 0x65b) != '\0')) goto LAB_140069a5b;
  *(char *)(param_1 + 0x65a) = *(char *)(param_1 + 0x65a) + '\x01';
  *(undefined1 *)(param_1 + 0x65b) = 1;
  puVar19 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar16 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(puVar19,0x40);
    puVar16 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar16 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar16 = &PTR_FUN_14a38b790;
  puVar16[2] = 0;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  iVar10 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar10 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar10 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar10);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar10 * 8) = puVar16;
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar17 + 6;
  local_b8 = puVar16 + 2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(puVar19,0x40);
    puVar17 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar17 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar17 = &PTR_FUN_14a38b790;
  puVar6 = puVar17 + 2;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar17[4] = 0;
  puVar17[5] = 0;
  iVar10 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar10 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar10 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar10);
  }
  plVar12 = (longlong *)(param_1 + 0x598);
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar10 * 8) = puVar17;
  local_88 = 0;
  uStack_80 = 0;
  iVar10 = *(int *)(param_1 + 0x5a0);
  local_a8 = puVar6;
  if (*(char *)(param_1 + 0x520) == '\x01') {
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (iVar10 != 0) {
      FUN_14008dca4(&local_88);
      iVar10 = *(int *)(param_1 + 0x5a0);
      goto LAB_140069527;
    }
  }
  else {
LAB_140069527:
    if (iVar10 != 0) {
      plVar8 = (longlong *)*plVar12;
      local_a0 = plVar8 + iVar10;
      local_b0 = param_1 + 0x5a8;
      uVar18 = 0;
      local_d8 = puVar19;
      local_d0 = param_1;
      local_c8 = plVar12;
      do {
        uVar2 = uStack_80;
        puVar6 = (undefined8 *)*plVar8;
        bVar14 = *(byte *)(puVar6 + 4);
        bVar11 = bVar14 & 0xef;
        *(byte *)(puVar6 + 4) = bVar11;
        bVar14 = bVar14 >> 2 & 1;
        local_98 = plVar8;
        local_78 = puVar6;
        if (*(char *)(local_d0 + 0x520) == '\x01') {
          lVar13 = (longlong)(int)uStack_80;
          uVar7 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
          if (uStack_80._4_4_ < uVar7) {
            FUN_14742e184(&local_88,uVar2 & 0xffffffff);
          }
          *(undefined8 **)(local_88 + lVar13 * 0x10) = local_78;
          *(byte *)(local_88 + 8 + lVar13 * 0x10) = bVar14;
          bVar11 = *(byte *)(puVar6 + 4);
        }
        else {
          *(byte *)((longlong)puVar6 + 0x21) = bVar14;
        }
        if ((bVar11 & 4) == 0) {
          FUN_1407519fc(local_b0,local_78);
        }
        else {
          FUN_14489ba88(local_b0,local_8c,&local_78,0);
        }
        local_c0 = CONCAT71((int7)(uVar18 >> 8),(byte)uVar18 | bVar11);
        lVar13 = 0;
        ppuVar4 = &local_b8;
        bVar3 = true;
        do {
          bVar15 = bVar3;
          puVar16 = local_78;
          if ((*(uint *)(puVar6 + 4) >> (int)lVar13 & 1) != 0) {
            uVar7 = *(uint *)((longlong)puVar6 + 0x1c);
            uVar1 = (&DAT_14a389294)[lVar13];
            if (*(char *)(local_78 + 3) == '\x01') {
              puVar17 = *ppuVar4;
              iVar10 = *(int *)(puVar17 + 3);
              *(uint *)(puVar17 + 3) = iVar10 + 1U;
              if (*(uint *)((longlong)puVar17 + 0x1c) < iVar10 + 1U) {
                FUN_1400bbd9a(puVar17 + 2,iVar10);
              }
              puVar17 = (undefined8 *)(puVar17[2] + (longlong)iVar10 * 0x10);
              puVar5 = (uint *)(puVar17 + 1);
              *puVar17 = puVar16;
            }
            else {
              if (*(char *)(local_78 + 3) != '\0') goto LAB_1400696e5;
              plVar12 = *ppuVar4;
              iVar10 = (int)plVar12[1];
              *(uint *)(plVar12 + 1) = iVar10 + 1U;
              if (*(uint *)((longlong)plVar12 + 0xc) < iVar10 + 1U) {
                FUN_144ab7ccc(plVar12,iVar10);
              }
              puVar17 = (undefined8 *)((longlong)iVar10 * 0x18 + *plVar12);
              if (puVar16 == (undefined8 *)0x0) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(undefined8 *)((longlong)puVar16 + 0xac);
              }
              *puVar17 = puVar16;
              puVar17[1] = uVar9;
              puVar5 = (uint *)(puVar17 + 2);
            }
            *puVar5 = uVar7 & uVar1;
          }
LAB_1400696e5:
          puVar16 = local_b8;
          uVar18 = local_c0;
          plVar12 = local_c8;
          param_1 = local_d0;
          lVar13 = 1;
          ppuVar4 = &local_a8;
          bVar3 = false;
        } while (bVar15);
        plVar8 = local_98 + 1;
      } while (plVar8 != local_a0);
      if ((local_c0 & 1) != 0) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14ca95ec8) {
          FUN_144b3d300(&DAT_14ca95ec8);
          if (DAT_14ca95ec8 == -1) {
            FUN_145df5c90(&local_78);
            local_e0 = 0;
            local_f0 = 0;
            local_110 = "Unknown";
            local_120 = 0;
            uStack_118 = 0;
            local_128 = L"FAccessModePassParameters";
            local_e8 = 0;
            local_100 = 0x20;
            local_108 = 0x35f;
            local_f8 = &local_78;
            FUN_140b49562(&DAT_14ca95e48,0,1);
            if (local_78 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            atexit((_func_5014 *)&LAB_143214466);
            _Init_thread_footer(&DAT_14ca95ec8);
            plVar12 = local_c8;
            uVar18 = local_c0;
            param_1 = local_d0;
          }
        }
        puVar19 = local_d8;
        puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar17 + 0x38;
        if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
          FUN_140023dd8(local_d8,0x1c8);
          puVar17 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
          puVar6 = puVar17 + 0x38;
          uVar18 = local_c0;
        }
        *local_d8 = (ulonglong)puVar6;
        local_78 = puVar16;
        local_70 = DAT_14ca95e90;
        if (DAT_14ca95e90 != 0) {
          LOCK();
          *(int *)(DAT_14ca95e90 + 8) = *(int *)(DAT_14ca95e90 + 8) + 1;
          UNLOCK();
        }
        local_68 = &DAT_14ca95e48;
        local_128 = (wchar_t *)CONCAT71(local_128._1_7_,2);
        FUN_140068f1a(puVar17);
        *puVar17 = &PTR_FUN_14a38b7a0;
        iVar10 = *(int *)(param_1 + 0x170);
        *(uint *)(param_1 + 0x170) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x174) < iVar10 + 1U) {
          FUN_14470e57a(param_1 + 0x168,iVar10);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar10 * 8) = puVar17;
        *(int *)((longlong)puVar17 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
        if (puVar17 + 0x16 != &local_88) {
          puVar17[0x16] = local_88;
          local_88 = 0;
          *(int *)(puVar17 + 0x17) = (int)uStack_80;
          *(uint *)((longlong)puVar17 + 0xbc) = uStack_80._4_4_;
          uStack_80 = 0;
        }
        *(byte *)(puVar17 + 7) = *(byte *)(puVar17 + 7) | 0x40;
        FUN_140069100(param_1,puVar17);
      }
      puVar6 = local_a8;
      puVar19 = local_d8;
      if ((uVar18 & 2) != 0) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14ca95ec8) {
          FUN_144b3d300(&DAT_14ca95ec8);
          if (DAT_14ca95ec8 == -1) {
            FUN_145df5c90(&local_78);
            local_e0 = 0;
            local_f0 = 0;
            local_110 = "Unknown";
            local_120 = 0;
            uStack_118 = 0;
            local_128 = L"FAccessModePassParameters";
            local_e8 = 0;
            local_100 = 0x20;
            local_108 = 0x35f;
            local_f8 = &local_78;
            FUN_140b49562(&DAT_14ca95e48,0,1);
            if (local_78 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            atexit((_func_5014 *)&LAB_143214466);
            _Init_thread_footer(&DAT_14ca95ec8);
            plVar12 = local_c8;
            puVar19 = local_d8;
            param_1 = local_d0;
          }
        }
        puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar16 = puVar17 + 0x38;
        if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
          FUN_140023dd8(puVar19,0x1c8);
          puVar17 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar17 + 0x38;
        }
        *puVar19 = (ulonglong)puVar16;
        local_78 = puVar6;
        local_70 = DAT_14ca95e90;
        if (DAT_14ca95e90 != 0) {
          LOCK();
          *(int *)(DAT_14ca95e90 + 8) = *(int *)(DAT_14ca95e90 + 8) + 1;
          UNLOCK();
        }
        local_68 = &DAT_14ca95e48;
        local_128 = (wchar_t *)CONCAT71(local_128._1_7_,2);
        FUN_140068f1a(puVar17);
        *puVar17 = &PTR_FUN_14a38b7c0;
        iVar10 = *(int *)(param_1 + 0x170);
        *(uint *)(param_1 + 0x170) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x174) < iVar10 + 1U) {
          FUN_14470e57a(param_1 + 0x168,iVar10);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar10 * 8) = puVar17;
        *(int *)((longlong)puVar17 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
        if (puVar17 + 0x16 != &local_88) {
          puVar17[0x16] = local_88;
          local_88 = 0;
          *(int *)(puVar17 + 0x17) = (int)uStack_80;
          *(uint *)((longlong)puVar17 + 0xbc) = uStack_80._4_4_;
          uStack_80 = 0;
        }
        *(byte *)(puVar17 + 7) = *(byte *)(puVar17 + 7) | 0x40;
        FUN_140069100(param_1,puVar17);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x5a0) = 0;
  if (*(int *)(param_1 + 0x5a4) < 0) {
    FUN_14742e1dc(plVar12,0);
  }
  *(char *)(param_1 + 0x65b) = *(char *)(param_1 + 0x65b) + -1;
  *(char *)(param_1 + 0x65a) = *(char *)(param_1 + 0x65a) + -1;
LAB_140069a5b:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140069c2e FUN_140069c2e body=258 status=ok
// SIG undefined FUN_140069c2e(void)

void FUN_140069c2e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca17ce0) {
    FUN_144b3d300(&DAT_14ca17ce0);
    if (DAT_14ca17ce0 == -1) {
      FUN_1456bf630(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x404;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17c60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2766f);
      _Init_thread_footer(&DAT_14ca17ce0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140069d32 FUN_140069d32 body=66 status=ok
// SIG undefined FUN_140069d32(void)

void FUN_140069d32(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000140069d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1,param_4);
  return;
}



// FUNCTION 140069d86 FUN_140069d86 body=12 status=ok
// SIG undefined FUN_140069d86(void)

void FUN_140069d86(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140069d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140069d92 FUN_140069d92 body=31 status=ok
// SIG undefined FUN_140069d92(void)

undefined8 FUN_140069d92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140069db1 FUN_140069db1 body=100 status=ok
// SIG undefined FUN_140069db1(void)

ulonglong FUN_140069db1(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      if (*(int *)(param_1 + lVar3) != *(int *)(param_2 + lVar3)) {
LAB_140069dea:
        uVar2 = 0;
        break;
      }
      if ((*(int *)(param_1 + lVar3 + 8) != *(int *)(param_2 + lVar3 + 8)) ||
         (cVar1 = FUN_140251310(param_1 + lVar3 + 0x10,param_2 + lVar3 + 0x10), cVar1 == '\0'))
      goto LAB_140069dea;
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 140069e16 FUN_140069e16 body=57 status=ok
// SIG undefined FUN_140069e16(void)

void FUN_140069e16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c5c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c5c0 = FUN_140002ddd(FUN_14185e870,uVar1,L"MissionLatentPhaseDef");
  }
  return;
}



// FUNCTION 140069e50 FUN_140069e50 body=81 status=ok
// SIG undefined FUN_140069e50(void)

void FUN_140069e50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    lVar1 = *param_1;
    if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
      FUN_144b3ec00(param_1);
    }
    FUN_140069ea2(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140069ea2 FUN_140069ea2 body=107 status=ok
// SIG undefined FUN_140069ea2(void)

void FUN_140069ea2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(*param_2 + 4) != -2) {
    lVar1 = param_2[1];
    *(int *)(param_1 + 1) = (int)lVar1;
    uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)lVar1 * 8 + 8);
    *param_1 = uVar2;
    FUN_144b3d470(uVar2,*param_2,(longlong)(int)param_2[1] * 8 + 8);
    return;
  }
  uVar2 = FUN_144b3d480();
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 140069f0e FUN_140069f0e body=167 status=ok
// SIG undefined FUN_140069f0e(void)

void FUN_140069f0e(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(lVar1 + lVar4);
      *(undefined8 *)(lVar3 + 4 + lVar4) = *(undefined8 *)(lVar1 + lVar4 + 4);
      *(undefined4 *)(lVar3 + 0xc + lVar4) = *(undefined4 *)(lVar1 + lVar4 + 0xc);
      lVar4 = lVar4 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = lVar3;
  return;
}



// FUNCTION 140069fb6 FUN_140069fb6 body=114 status=ok
// SIG undefined FUN_140069fb6(void)

undefined4 * FUN_140069fb6(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  cVar1 = FUN_14475e408(&local_38,0);
  if (cVar1 == '\0') {
    uStack_1c = param_2[3];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
  }
  else {
    uVar2 = (undefined4)local_28;
    uVar3 = local_28._4_4_;
    uVar4 = uStack_20;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14006a02a FUN_14006a02a body=69 status=ok
// SIG undefined FUN_14006a02a(void)

void FUN_14006a02a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  param_2 = (undefined8 *)*param_2;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014006a06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_4);
  return;
}



// FUNCTION 14006a09c FUN_14006a09c body=7632 status=ok
// SIG undefined FUN_14006a09c(void)

ulonglong FUN_14006a09c(longlong param_1,longlong *param_2,double *param_3,char param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  double *pdVar21;
  undefined8 unaff_R12;
  undefined7 uVar22;
  uint *puVar23;
  bool bVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar35 [16];
  double dVar34;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined4 uVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined1 auStack_208 [36];
  uint local_1e4;
  longlong local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  double *local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  double *local_190;
  undefined8 local_188;
  uint *puStack_180;
  longlong *local_178;
  longlong lStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  longlong local_d8;
  uint *local_d0;
  uint local_c4;
  longlong local_c0;
  uint *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined1 *)(param_1 + 0x188) = 1;
  if (param_4 == '\0') {
LAB_14006a167:
    bVar24 = false;
  }
  else {
    dVar25 = param_3[3];
    uVar61 = SUB84(dVar25,0);
    uVar62 = (undefined4)((ulonglong)dVar25 >> 0x20);
    if ((dVar25 < *param_3) || (iVar5 = _finite(*param_3), iVar5 == 0)) goto LAB_14006a167;
    uVar16 = 0;
    bVar24 = false;
    do {
      iVar5 = _finite((double)CONCAT44(uVar62,uVar61));
      if ((iVar5 == 0) || (bVar24 = 1 < uVar16, uVar16 == 2)) break;
      dVar25 = param_3[uVar16 + 4];
      uVar61 = SUB84(dVar25,0);
      uVar62 = (undefined4)((ulonglong)dVar25 >> 0x20);
      if (dVar25 < param_3[uVar16 + 1]) break;
      iVar5 = _finite(param_3[uVar16 + 1]);
      uVar16 = uVar16 + 1;
    } while (iVar5 != 0);
  }
  plVar13 = (longlong *)(param_1 + 0x120);
  uVar8 = *(uint *)(param_2 + 2);
  iVar5 = *(int *)(param_1 + 0x128);
  if ((int)uVar8 < iVar5 && -1 < (int)uVar8) {
    puVar23 = (uint *)(*plVar13 + (ulonglong)uVar8 * 0x18);
    if ((puVar23 == (uint *)0x0) || (*(char *)(*plVar13 + 0x14 + (ulonglong)uVar8 * 0x18) == '\0'))
    goto LAB_14006a28a;
    lVar6 = (longlong)(int)puVar23[2];
    uVar22 = (undefined7)((ulonglong)unaff_R12 >> 8);
    uVar16 = CONCAT71(uVar22,1);
    if (lVar6 != -1) {
      if (bVar24) {
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          lVar11 = lVar6 * 0x48 + *(longlong *)(param_1 + 0x20);
          lVar18 = 0;
          do {
            dVar25 = param_3[lVar18];
            if ((dVar25 < *(double *)(lVar11 + lVar18 * 8)) ||
               (pdVar21 = (double *)(lVar11 + 0x18 + lVar18 * 8),
               *pdVar21 <= dVar25 && dVar25 != *pdVar21)) goto LAB_14006b017;
            lVar18 = lVar18 + 1;
          } while (lVar18 != 3);
          lVar18 = 3;
          do {
            dVar25 = param_3[lVar18];
            if ((dVar25 < *(double *)(lVar11 + -0x18 + lVar18 * 8)) ||
               (pdVar21 = (double *)(lVar11 + lVar18 * 8), *pdVar21 <= dVar25 && dVar25 != *pdVar21)
               ) goto LAB_14006b017;
            lVar18 = lVar18 + 1;
          } while (lVar18 != 6);
          if (0 < (longlong)*(int *)(lVar11 + 0x38)) {
            lVar6 = *(longlong *)(lVar11 + 0x30);
            lVar18 = 0;
            do {
              if (*(uint *)(lVar6 + 0x10 + lVar18) == uVar8) {
                *(double *)(lVar6 + 0x48 + lVar18) = param_3[2];
                dVar25 = param_3[1];
                pdVar21 = (double *)(lVar6 + 0x38 + lVar18);
                *pdVar21 = *param_3;
                pdVar21[1] = dVar25;
                *(double *)(lVar6 + 0x60 + lVar18) = param_3[5];
                dVar25 = param_3[4];
                pdVar21 = (double *)(lVar6 + 0x50 + lVar18);
                *pdVar21 = param_3[3];
                pdVar21[1] = dVar25;
                if (DAT_14c75efec != 0) {
                  lVar6 = *(longlong *)(lVar11 + 0x30);
                  *(undefined4 *)(lVar6 + 0x14 + lVar18) = *(undefined4 *)((longlong)param_2 + 0x14)
                  ;
                  *(int *)(lVar6 + 0x18 + lVar18) = (int)param_2[3];
                  *(undefined4 *)(lVar6 + 0x1c + lVar18) = *(undefined4 *)((longlong)param_2 + 0x1c)
                  ;
                  *(int *)(lVar6 + 0x20 + lVar18) = (int)param_2[4];
                  *(undefined4 *)(lVar6 + 0x24 + lVar18) = *(undefined4 *)((longlong)param_2 + 0x24)
                  ;
                  *(int *)(lVar6 + 0x28 + lVar18) = (int)param_2[5];
                  *(undefined4 *)(lVar6 + 0x2c + lVar18) = *(undefined4 *)((longlong)param_2 + 0x2c)
                  ;
                  *(int *)(lVar6 + 0x30 + lVar18) = (int)param_2[6];
                }
                break;
              }
              lVar18 = lVar18 + 0x68;
            } while ((longlong)*(int *)(lVar11 + 0x38) * 0x68 - lVar18 != 0);
          }
          *(undefined1 *)(lVar11 + 0x40) = 1;
          uVar16 = CONCAT71(uVar22,1);
        }
        else {
          lVar18 = (longlong)(int)puVar23[4] * 0x70 + *(longlong *)(param_1 + 0x10);
          lVar11 = 0;
          do {
            dVar25 = param_3[lVar11];
            if ((dVar25 < *(double *)(lVar18 + lVar11 * 8)) ||
               (pdVar21 = (double *)(lVar18 + 0x18 + lVar11 * 8),
               *pdVar21 <= dVar25 && dVar25 != *pdVar21)) goto LAB_14006a78a;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 3);
          lVar11 = 3;
          do {
            dVar25 = param_3[lVar11];
            if ((dVar25 < *(double *)(lVar18 + -0x18 + lVar11 * 8)) ||
               (pdVar21 = (double *)(lVar18 + lVar11 * 8), *pdVar21 <= dVar25 && dVar25 != *pdVar21)
               ) goto LAB_14006a78a;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 6);
          lVar6 = *(longlong *)(param_1 + 0x20) + lVar6 * 0x48;
          if (0 < (longlong)*(int *)(lVar6 + 0x38)) {
            lVar11 = *(longlong *)(lVar6 + 0x30);
            lVar18 = 0;
            do {
              if (*(uint *)(lVar11 + 0x10 + lVar18) == uVar8) {
                *(double *)(lVar11 + 0x48 + lVar18) = param_3[2];
                dVar25 = param_3[1];
                pdVar21 = (double *)(lVar11 + 0x38 + lVar18);
                *pdVar21 = *param_3;
                pdVar21[1] = dVar25;
                *(double *)(lVar11 + 0x60 + lVar18) = param_3[5];
                dVar25 = param_3[4];
                pdVar21 = (double *)(lVar11 + 0x50 + lVar18);
                *pdVar21 = param_3[3];
                pdVar21[1] = dVar25;
                if (DAT_14c75efec != 0) {
                  lVar11 = *(longlong *)(lVar6 + 0x30);
                  *(undefined4 *)(lVar11 + 0x14 + lVar18) =
                       *(undefined4 *)((longlong)param_2 + 0x14);
                  *(int *)(lVar11 + 0x18 + lVar18) = (int)param_2[3];
                  *(undefined4 *)(lVar11 + 0x1c + lVar18) =
                       *(undefined4 *)((longlong)param_2 + 0x1c);
                  *(int *)(lVar11 + 0x20 + lVar18) = (int)param_2[4];
                  *(undefined4 *)(lVar11 + 0x24 + lVar18) =
                       *(undefined4 *)((longlong)param_2 + 0x24);
                  *(int *)(lVar11 + 0x28 + lVar18) = (int)param_2[5];
                  *(undefined4 *)(lVar11 + 0x2c + lVar18) =
                       *(undefined4 *)((longlong)param_2 + 0x2c);
                  *(int *)(lVar11 + 0x30 + lVar18) = (int)param_2[6];
                }
                break;
              }
              lVar18 = lVar18 + 0x68;
            } while ((longlong)*(int *)(lVar6 + 0x38) * 0x68 - lVar18 != 0);
          }
          *(undefined1 *)(lVar6 + 0x40) = 1;
          lVar11 = (longlong)(int)puVar23[2];
          lVar6 = *(longlong *)(param_1 + 0x20);
          *(undefined8 *)(lVar6 + lVar11 * 0x48) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar6 + 8 + lVar11 * 0x48) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar6 + 0x10 + lVar11 * 0x48) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar6 + 0x18 + lVar11 * 0x48) = 0xffefffffffffffff;
          *(undefined8 *)(lVar6 + 0x20 + lVar11 * 0x48) = 0xffefffffffffffff;
          *(undefined8 *)(lVar6 + 0x28 + lVar11 * 0x48) = 0xffefffffffffffff;
          lVar18 = (longlong)*(int *)(lVar6 + 0x38 + lVar11 * 0x48);
          uVar16 = CONCAT71(uVar22,1);
          if (lVar18 != 0) {
            pdVar21 = (double *)(lVar6 + lVar11 * 0x48);
            dVar25 = pdVar21[6];
            dVar26 = 1.79769313486232e+308;
            dVar34 = -1.79769313486232e+308;
            lVar6 = 0;
            uVar61 = 0xffffffff;
            uVar62 = 0xffefffff;
            dVar63 = -1.79769313486232e+308;
            dVar64 = 1.79769313486232e+308;
            dVar69 = 1.79769313486232e+308;
            do {
              dVar33 = *(double *)((longlong)dVar25 + 0x48 + lVar6);
              if (dVar33 <= dVar69) {
                dVar69 = dVar33;
              }
              dVar33 = *(double *)((longlong)dVar25 + 0x40 + lVar6);
              if (dVar33 <= dVar64) {
                dVar64 = dVar33;
              }
              dVar33 = *(double *)((longlong)dVar25 + 0x38 + lVar6);
              if (dVar33 <= dVar26) {
                dVar26 = dVar33;
              }
              *pdVar21 = dVar26;
              pdVar21[1] = dVar64;
              pdVar21[2] = dVar69;
              dVar33 = *(double *)((longlong)dVar25 + 0x60 + lVar6);
              if (dVar63 <= dVar33) {
                dVar63 = dVar33;
              }
              dVar33 = *(double *)((longlong)dVar25 + 0x58 + lVar6);
              if ((double)CONCAT44(uVar62,uVar61) <= dVar33) {
                uVar61 = SUB84(dVar33,0);
                uVar62 = (undefined4)((ulonglong)dVar33 >> 0x20);
              }
              dVar33 = *(double *)((longlong)dVar25 + 0x50 + lVar6);
              if (dVar34 <= dVar33) {
                dVar34 = dVar33;
              }
              pdVar21[3] = dVar34;
              pdVar21[4] = (double)CONCAT44(uVar62,uVar61);
              pdVar21[5] = dVar63;
              lVar6 = lVar6 + 0x68;
            } while (lVar18 * 0x68 - lVar6 != 0);
          }
        }
        goto LAB_14006bc08;
      }
      if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
LAB_14006b017:
        local_e8 = param_2[6];
        local_118 = *param_2;
        lStack_110 = param_2[1];
        local_108 = param_2[2];
        lStack_100 = param_2[3];
        local_f8 = (undefined4)param_2[4];
        uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x24);
        uStack_f0 = (undefined4)param_2[5];
        uStack_ec = *(undefined4 *)((longlong)param_2 + 0x2c);
        FUN_1429cc24c(lVar6 * 0x48 + *(longlong *)(param_1 + 0x20));
        puVar23[2] = 0xffffffff;
      }
      else {
LAB_14006a78a:
        FUN_1429cbfa8(param_1,puVar23[4],param_2);
        puVar23[2] = 0xffffffff;
        puVar23[4] = 0xffffffff;
      }
    }
  }
  else {
LAB_14006a28a:
    if (iVar5 <= (int)uVar8) {
      FUN_14008b974(plVar13,(uVar8 - iVar5) + 1);
    }
    *(undefined1 *)(*plVar13 + 0x14 + (longlong)(int)uVar8 * 0x18) = 1;
    puVar23 = (uint *)((longlong)(int)uVar8 * 0x18 + *plVar13);
    uVar16 = 0;
  }
  *(undefined1 *)(param_1 + 0x189) = 1;
  uVar8 = (uint)uVar16;
  if (bVar24) {
    dVar25 = param_3[5];
    uVar70 = SUB84(dVar25,0);
    uVar71 = (undefined4)((ulonglong)dVar25 >> 0x20);
    dVar64 = param_3[2];
    uVar72 = SUB84(dVar64,0);
    uVar73 = (undefined4)((ulonglong)dVar64 >> 0x20);
    dVar25 = dVar25 - dVar64;
    dVar64 = param_3[4];
    dVar69 = *param_3;
    dVar63 = param_3[1];
    dVar33 = dVar64 - dVar63;
    dVar26 = param_3[3];
    dVar34 = dVar26 - dVar69;
    if ((dVar34 <= dVar33 || dVar34 <= dVar25) && (dVar34 = dVar33, dVar33 <= dVar25)) {
      dVar34 = dVar25;
    }
    uVar61 = SUB84(dVar64,0);
    uVar62 = (int)((ulonglong)dVar64 >> 0x20);
    uVar74 = SUB84(dVar26,0);
    uVar75 = (int)((ulonglong)dVar26 >> 0x20);
    uVar76 = SUB84(dVar63,0);
    uVar77 = (int)((ulonglong)dVar63 >> 0x20);
    uVar78 = SUB84(dVar69,0);
    uVar79 = (int)((ulonglong)dVar69 >> 0x20);
    if (dVar34 < *(double *)(param_1 + 0x138) || dVar34 == *(double *)(param_1 + 0x138)) {
      pdVar21 = param_3 + 3;
      uVar9 = puVar23[1];
      lVar6 = (longlong)(int)uVar9;
      if (lVar6 == -1) {
        if (*(char *)(param_1 + 0x48) == '\x01') {
          FUN_1429cc8c6(param_1,&local_188,param_2,param_3);
          puVar23[4] = (uint)local_188;
          puVar23[2] = local_188._4_4_;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 200);
          if (lVar6 != 0) goto LAB_14006af64;
          local_158 = param_2[6];
          local_188 = *param_2;
          puStack_180 = (uint *)param_2[1];
          local_178 = (longlong *)param_2[2];
          lStack_170 = param_2[3];
          local_168 = (undefined4)param_2[4];
          uStack_164 = *(undefined4 *)((longlong)param_2 + 0x24);
          uStack_160 = (undefined4)param_2[5];
          uStack_15c = *(undefined4 *)((longlong)param_2 + 0x2c);
          local_140 = param_3[2];
          local_150 = *param_3;
          dStack_148 = param_3[1];
          local_138 = *pdVar21;
          dStack_130 = param_3[4];
          local_128 = param_3[5];
          uVar9 = *(uint *)(param_1 + 0x40);
          *(uint *)(param_1 + 0x40) = uVar9 + 1;
          if (*(uint *)(param_1 + 0x44) < uVar9 + 1) {
            FUN_14479f6b8(param_1 + 0x38,uVar9);
          }
          lVar6 = *(longlong *)(param_1 + 0x38);
          lVar11 = (longlong)(int)uVar9 * 0x68;
          *(longlong *)(lVar6 + 0x30 + lVar11) = local_158;
          puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar11);
          *puVar2 = CONCAT44(uStack_164,local_168);
          puVar2[1] = CONCAT44(uStack_15c,uStack_160);
          plVar13 = (longlong *)(lVar6 + 0x10 + lVar11);
          *plVar13 = (longlong)local_178;
          plVar13[1] = lStack_170;
          *(longlong *)(lVar6 + lVar11) = local_188;
          ((longlong *)(lVar6 + lVar11))[1] = (longlong)puStack_180;
          *(double *)(lVar6 + 0x48 + lVar11) = local_140;
          pdVar21 = (double *)(lVar6 + 0x38 + lVar11);
          *pdVar21 = local_150;
          pdVar21[1] = dStack_148;
          pdVar21 = (double *)(lVar6 + 0x50 + lVar11);
          *pdVar21 = local_138;
          pdVar21[1] = dStack_130;
          *(double *)(lVar6 + 0x60 + lVar11) = local_128;
          puVar23[1] = uVar9;
          if ((((*(longlong *)(param_1 + 200) != 0) || (*(double *)(param_1 + 0xd0) <= 0.0)) ||
              (*(int *)(param_1 + 0xe0) < 1)) ||
             ((uVar7 = (ulonglong)*(int *)(param_1 + 0xe4), (longlong)uVar7 < 1 ||
              (*(int *)(param_1 + 0xe8) < 1)))) goto LAB_14006bb3e;
          local_d8 = CONCAT44(local_d8._4_4_,uVar9);
          dVar25 = *(double *)(param_1 + 0xd8);
          auVar36._8_8_ = 0;
          auVar36._0_8_ = ABS(*param_3 * dVar25) * 2.220446049250313e-16 + *param_3 * dVar25;
          auVar36 = roundpd(auVar36,auVar36,1);
          lVar6 = (longlong)auVar36._0_8_;
          auVar52._8_8_ = 0;
          auVar52._0_8_ = ABS(param_3[3] * dVar25) * 2.220446049250313e-16 + param_3[3] * dVar25;
          auVar36 = roundpd(auVar52,auVar52,1);
          local_1e0 = (longlong)auVar36._0_8_;
          if (local_1e0 < lVar6) {
LAB_14006bc74:
            local_c4 = (uint)local_c4._1_3_ << 8;
LAB_14006bc7c:
            *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
            local_1e4 = uVar8;
          }
          else {
            auVar55._8_8_ = 0;
            auVar55._0_8_ = ABS(param_3[1] * dVar25) * 2.220446049250313e-16 + param_3[1] * dVar25;
            auVar36 = roundpd(auVar55,auVar55,1);
            local_1d8 = (longlong *)(longlong)auVar36._0_8_;
            auVar54._8_8_ = 0;
            auVar54._0_8_ = ABS(dVar25 * param_3[4]) * 2.220446049250313e-16 + dVar25 * param_3[4];
            auVar36 = roundpd(auVar54,auVar54,1);
            lVar11 = (longlong)auVar36._0_8_;
            if (lVar11 < (longlong)local_1d8) goto LAB_14006bc74;
            uVar16 = (local_1e0 - lVar6) + 1;
            uVar14 = (lVar11 - (longlong)local_1d8) + 1;
            uVar15 = uVar14 * uVar16;
            bVar24 = uVar15 - uVar7 == 0;
            local_c4 = CONCAT31(local_c4._1_3_,
                                ((uVar15 < uVar7 || bVar24) && uVar14 <= uVar7) && uVar16 <= uVar7);
            if ((uVar15 >= uVar7 && !bVar24 || uVar14 > uVar7) || uVar16 > uVar7)
            goto LAB_14006bc7c;
            puStack_180 = &local_c4;
            local_1e4 = uVar8;
            local_188 = param_1;
            do {
              uVar8 = ((uint)lVar6 & 0xff00) << 8 | (uint)lVar6 & 0xff;
              uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
              uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
              plVar13 = local_1d8;
              do {
                uVar10 = ((uint)plVar13 & 0xff00) << 8 | (uint)plVar13 & 0xff;
                uVar10 = (uVar10 << 4 | uVar10) & 0xf0f0f0f;
                uVar10 = (uVar10 * 4 | uVar10) & 0x33333333;
                cVar4 = FUN_146e07c10(&local_188,
                                      (uVar10 * 2 | uVar10 * 4) & 0xaaaaaaaa |
                                      (uVar8 * 2 | uVar8) & 0x55555555);
                if (cVar4 == '\0') goto LAB_14006bc82;
                plVar13 = (longlong *)((longlong)plVar13 + 1);
              } while ((longlong *)(lVar11 + 1) != plVar13);
              bVar24 = lVar6 != local_1e0;
              lVar6 = lVar6 + 1;
            } while (bVar24);
          }
LAB_14006bc82:
          if ((char)local_c4 == '\x01') {
            local_b8 = (uint *)&local_d8;
            dVar25 = *(double *)(param_1 + 0xd8);
            auVar58._8_8_ = 0;
            auVar58._0_8_ = ABS(*param_3 * dVar25) * 2.220446049250313e-16 + *param_3 * dVar25;
            auVar36 = roundpd(auVar58,auVar58,1);
            auVar59._8_8_ = 0;
            auVar59._0_8_ = ABS(param_3[3] * dVar25) * 2.220446049250313e-16 + param_3[3] * dVar25;
            auVar52 = roundpd(auVar59,auVar59,1);
            local_1e0 = (longlong)auVar52._0_8_;
            uVar8 = 0xffffffff;
            if (local_1e0 < (longlong)auVar36._0_8_) {
              uVar16 = (ulonglong)local_1e4;
              local_c0 = param_1;
            }
            else {
              auVar60._8_8_ = 0;
              auVar60._0_8_ = ABS(param_3[1] * dVar25) * 2.220446049250313e-16 + param_3[1] * dVar25
              ;
              auVar54 = roundpd(auVar60,auVar60,1);
              auVar32._8_8_ = 0;
              auVar32._0_8_ = ABS(dVar25 * param_3[4]) * 2.220446049250313e-16 + dVar25 * param_3[4]
              ;
              auVar52 = roundpd(auVar32,auVar32,1);
              lVar6 = (longlong)auVar36._0_8_;
              local_c0 = param_1;
              do {
                if ((longlong)auVar54._0_8_ <= (longlong)auVar52._0_8_) {
                  uVar8 = ((uint)lVar6 & 0xff00) << 8 | (uint)lVar6 & 0xff;
                  uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                  uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                  lVar11 = (longlong)auVar54._0_8_;
                  do {
                    uVar9 = ((uint)lVar11 & 0xff00) << 8 | (uint)lVar11 & 0xff;
                    uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
                    uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
                    cVar4 = FUN_146e07c94(&local_c0,
                                          (uVar9 * 2 | uVar9 * 4) & 0xaaaaaaaa |
                                          (uVar8 * 2 | uVar8) & 0x55555555);
                    if (cVar4 == '\0') goto LAB_14006be59;
                    lVar11 = lVar11 + 1;
                  } while ((longlong)auVar52._0_8_ + 1 != lVar11);
                }
                bVar24 = lVar6 != local_1e0;
                lVar6 = lVar6 + 1;
              } while (bVar24);
LAB_14006be59:
              uVar16 = (ulonglong)local_1e4;
              uVar8 = 0xffffffff;
            }
          }
          else {
            uVar8 = *(uint *)(param_1 + 0xc0);
            *(uint *)(param_1 + 0xc0) = uVar8 + 1;
            uVar16 = (ulonglong)local_1e4;
            if (*(uint *)(param_1 + 0xc4) < uVar8 + 1) {
              FUN_1446f48e2((longlong *)(param_1 + 0xb8),uVar8);
            }
            *(uint *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar8 * 4) = uVar9;
          }
          puVar23[3] = uVar8;
        }
      }
      else {
        lVar11 = *(longlong *)(param_1 + 200);
        if (lVar11 == 0) {
          if (((0.0 < *(double *)(param_1 + 0xd0)) && (0 < *(int *)(param_1 + 0xe0))) &&
             ((0 < *(int *)(param_1 + 0xe4) && (0 < *(int *)(param_1 + 0xe8))))) {
            uVar10 = puVar23[3];
            local_c4 = uVar9;
            if (uVar10 == 0xffffffff) {
              lVar11 = lVar6 * 0x68 + *(longlong *)(param_1 + 0x38);
              local_190 = (double *)(lVar11 + 0x38);
              puStack_180 = &local_c4;
              dVar25 = *(double *)(param_1 + 0xd8);
              auVar35._8_8_ = 0;
              auVar35._0_8_ = ABS(*local_190 * dVar25) * 2.220446049250313e-16 + *local_190 * dVar25
              ;
              auVar36 = roundpd(auVar35,auVar35,1);
              plVar13 = (longlong *)(longlong)auVar36._0_8_;
              dVar34 = *(double *)(lVar11 + 0x40) * dVar25;
              auVar37._8_8_ = 0;
              auVar37._0_8_ = ABS(dVar34) * 2.220446049250313e-16 + dVar34;
              auVar36 = roundpd(auVar37,auVar37,1);
              local_1e0 = (longlong)auVar36._0_8_;
              dVar34 = *(double *)(lVar11 + 0x50) * dVar25;
              auVar38._8_8_ = 0;
              auVar38._0_8_ = ABS(dVar34) * 2.220446049250313e-16 + dVar34;
              auVar36 = roundpd(auVar38,auVar38,1);
              local_1c8 = (longlong *)(longlong)auVar36._0_8_;
              dVar34 = *(double *)(lVar11 + 0x58) * dVar25;
              auVar39._8_8_ = 0;
              auVar39._0_8_ = ABS(dVar34) * 2.220446049250313e-16 + dVar34;
              auVar36 = roundpd(auVar39,auVar39,1);
              local_1b0 = (longlong *)(longlong)auVar36._0_8_;
              auVar40._0_8_ = ABS(dVar69 * dVar25) * 2.220446049250313e-16 + dVar69 * dVar25;
              auVar40._8_8_ = 0;
              auVar36 = roundpd(auVar40,auVar40,1);
              local_1a0 = (longlong)auVar36._0_8_;
              auVar41._0_8_ = ABS(dVar63 * dVar25) * 2.220446049250313e-16 + dVar63 * dVar25;
              auVar41._8_8_ = 0;
              auVar36 = roundpd(auVar41,auVar41,1);
              lVar11 = (longlong)auVar36._0_8_;
              auVar42._0_8_ = ABS(dVar26 * dVar25) * 2.220446049250313e-16 + dVar26 * dVar25;
              auVar42._8_8_ = 0;
              auVar36 = roundpd(auVar42,auVar42,1);
              local_1a8 = (longlong)auVar36._0_8_;
              auVar27._0_8_ = ABS(dVar64 * dVar25) * 2.220446049250313e-16 + dVar64 * dVar25;
              auVar27._8_8_ = 0;
              auVar36 = roundpd(auVar27,auVar27,1);
              local_1e4 = uVar8;
              local_1c0 = lVar6;
              local_1b8 = pdVar21;
              local_188 = param_1;
              if (((local_1a8 < (longlong)local_1c8 ||
                   (local_1e0 < lVar11 || (longlong)plVar13 < local_1a0)) ||
                   (longlong)auVar36._0_8_ < (longlong)local_1b0) &&
                 ((longlong)plVar13 <= (longlong)local_1c8)) {
                lVar6 = (longlong)local_1b0 + 1;
                local_198 = lVar11;
                do {
                  if (local_1e0 <= (longlong)local_1b0) {
                    bVar24 = (longlong)plVar13 < local_1a0;
                    bVar3 = local_1a8 < (longlong)plVar13;
                    uVar8 = ((uint)plVar13 & 0xff00) << 8 | (uint)plVar13 & 0xff;
                    uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                    uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                    local_1d0 = CONCAT44(local_1d0._4_4_,uVar8 * 2 | uVar8) & 0xffffffff55555555;
                    lVar18 = local_1e0;
                    local_1d8 = plVar13;
                    do {
                      if (((longlong)auVar36._0_8_ < lVar18) ||
                         (lVar18 < lVar11 || (bVar3 || bVar24))) {
                        uVar8 = ((uint)lVar18 & 0xff00) << 8 | (uint)lVar18 & 0xff;
                        uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                        uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                        cVar4 = FUN_146e07ec6(&local_188,
                                              (uVar8 * 2 | uVar8 * 4) & 0xaaaaaaaa | (uint)local_1d0
                                             );
                        plVar13 = local_1d8;
                        lVar11 = local_198;
                        if (cVar4 == '\0') goto LAB_14006aacc;
                      }
                      lVar18 = lVar18 + 1;
                    } while (lVar6 != lVar18);
                  }
                  bVar24 = plVar13 != local_1c8;
                  plVar13 = (longlong *)((longlong)plVar13 + 1);
                } while (bVar24);
              }
LAB_14006aacc:
              local_b8 = &local_c4;
              dVar25 = *(double *)(param_1 + 0xd8);
              auVar43._8_8_ = 0;
              auVar43._0_8_ = ABS(*param_3 * dVar25) * 2.220446049250313e-16 + *param_3 * dVar25;
              auVar36 = roundpd(auVar43,auVar43,1);
              plVar13 = (longlong *)(longlong)auVar36._0_8_;
              auVar44._8_8_ = 0;
              auVar44._0_8_ = ABS(param_3[1] * dVar25) * 2.220446049250313e-16 + param_3[1] * dVar25
              ;
              auVar36 = roundpd(auVar44,auVar44,1);
              local_1e0 = (longlong)auVar36._0_8_;
              auVar45._8_8_ = 0;
              auVar45._0_8_ = ABS(param_3[3] * dVar25) * 2.220446049250313e-16 + param_3[3] * dVar25
              ;
              auVar36 = roundpd(auVar45,auVar45,1);
              plVar19 = (longlong *)(longlong)auVar36._0_8_;
              auVar46._8_8_ = 0;
              auVar46._0_8_ = ABS(param_3[4] * dVar25) * 2.220446049250313e-16 + param_3[4] * dVar25
              ;
              auVar36 = roundpd(auVar46,auVar46,1);
              local_1c8 = (longlong *)(longlong)auVar36._0_8_;
              auVar47._8_8_ = 0;
              auVar47._0_8_ = ABS(*local_190 * dVar25) * 2.220446049250313e-16 + *local_190 * dVar25
              ;
              auVar36 = roundpd(auVar47,auVar47,1);
              local_1a0 = (longlong)auVar36._0_8_;
              auVar48._8_8_ = 0;
              auVar48._0_8_ =
                   ABS(local_190[1] * dVar25) * 2.220446049250313e-16 + local_190[1] * dVar25;
              auVar36 = roundpd(auVar48,auVar48,1);
              lVar6 = (longlong)auVar36._0_8_;
              auVar49._8_8_ = 0;
              auVar49._0_8_ =
                   ABS(local_190[3] * dVar25) * 2.220446049250313e-16 + local_190[3] * dVar25;
              auVar36 = roundpd(auVar49,auVar49,1);
              local_1a8 = (longlong)auVar36._0_8_;
              auVar28._8_8_ = 0;
              auVar28._0_8_ =
                   ABS(dVar25 * local_190[4]) * 2.220446049250313e-16 + dVar25 * local_190[4];
              auVar36 = roundpd(auVar28,auVar28,1);
              uVar10 = 0xffffffff;
              local_c0 = param_1;
              if ((((longlong)plVar19 <= local_1a8 &&
                   (lVar6 <= local_1e0 && local_1a0 <= (longlong)plVar13)) &&
                   (longlong)local_1c8 <= (longlong)auVar36._0_8_) ||
                 ((longlong)plVar19 < (longlong)plVar13)) goto LAB_14006af40;
              lVar11 = (longlong)local_1c8 + 1;
              local_1b0 = plVar19;
              local_198 = lVar6;
              do {
                if (local_1e0 <= (longlong)local_1c8) {
                  bVar24 = (longlong)plVar13 < local_1a0;
                  bVar3 = local_1a8 < (longlong)plVar13;
                  uVar8 = ((uint)plVar13 & 0xff00) << 8 | (uint)plVar13 & 0xff;
                  uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                  uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                  local_1d0 = CONCAT44(local_1d0._4_4_,uVar8 * 2 | uVar8) & 0xffffffff55555555;
                  lVar18 = local_1e0;
                  local_1d8 = plVar13;
                  do {
                    if (((longlong)auVar36._0_8_ < lVar18) || (lVar18 < lVar6 || (bVar3 || bVar24)))
                    {
                      uVar8 = ((uint)lVar18 & 0xff00) << 8 | (uint)lVar18 & 0xff;
                      uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                      uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                      cVar4 = FUN_146e08006(&local_c0,
                                            (uVar8 * 2 | uVar8 * 4) & 0xaaaaaaaa | (uint)local_1d0);
                      plVar13 = local_1d8;
                      plVar19 = local_1b0;
                      lVar6 = local_198;
                      if (cVar4 == '\0') {
                        local_d0 = &local_c4;
                        dVar25 = *(double *)(param_1 + 0xd8);
                        auVar50._8_8_ = 0;
                        auVar50._0_8_ =
                             ABS(*param_3 * dVar25) * 2.220446049250313e-16 + *param_3 * dVar25;
                        auVar36 = roundpd(auVar50,auVar50,1);
                        auVar51._8_8_ = 0;
                        auVar51._0_8_ =
                             ABS(param_3[3] * dVar25) * 2.220446049250313e-16 + param_3[3] * dVar25;
                        auVar52 = roundpd(auVar51,auVar51,1);
                        local_1d8 = (longlong *)(longlong)auVar52._0_8_;
                        local_d8 = param_1;
                        if ((longlong)local_1d8 < (longlong)auVar36._0_8_) goto LAB_14006af08;
                        auVar53._8_8_ = 0;
                        auVar53._0_8_ =
                             ABS(param_3[1] * dVar25) * 2.220446049250313e-16 + param_3[1] * dVar25;
                        auVar54 = roundpd(auVar53,auVar53,1);
                        auVar29._8_8_ = 0;
                        auVar29._0_8_ =
                             ABS(dVar25 * param_3[4]) * 2.220446049250313e-16 + dVar25 * param_3[4];
                        auVar52 = roundpd(auVar29,auVar29,1);
                        local_1d0 = (ulonglong)auVar52._0_8_;
                        local_1e0 = local_1d0 + 1;
                        plVar13 = (longlong *)(longlong)auVar36._0_8_;
                        goto LAB_14006ae51;
                      }
                    }
                    lVar18 = lVar18 + 1;
                  } while (lVar11 != lVar18);
                }
                bVar24 = plVar13 != plVar19;
                plVar13 = (longlong *)((longlong)plVar13 + 1);
              } while (bVar24);
              uVar16 = (ulonglong)local_1e4;
              uVar10 = 0xffffffff;
              lVar6 = local_1c0;
              pdVar21 = local_1b8;
            }
            goto LAB_14006bac0;
          }
          goto LAB_14006bac4;
        }
        lVar18 = *(longlong *)(lVar11 + 0x10) + lVar6 * 0x70;
        lVar20 = 0;
        do {
          dVar25 = param_3[lVar20];
          if ((dVar25 < *(double *)(lVar18 + lVar20 * 8)) ||
             (pdVar1 = (double *)(lVar18 + 0x18 + lVar20 * 8),
             *pdVar1 <= dVar25 && dVar25 != *pdVar1)) goto LAB_14006a76c;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 3);
        lVar20 = 3;
        do {
          dVar25 = param_3[lVar20];
          if ((dVar25 < *(double *)(lVar18 + -0x18 + lVar20 * 8)) ||
             (pdVar1 = (double *)(lVar18 + lVar20 * 8), *pdVar1 <= dVar25 && dVar25 != *pdVar1))
          goto LAB_14006a76c;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 6);
        lVar18 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x10) + 0x60 + lVar6 * 0x70);
        lVar6 = *(longlong *)(lVar11 + 0x20) + lVar18 * 0x48;
        if (0 < (longlong)*(int *)(lVar6 + 0x38)) {
          lVar11 = *(longlong *)(lVar6 + 0x30);
          lVar20 = 0;
          do {
            if (*(int *)(lVar11 + 0x10 + lVar20) == (int)param_2[2]) {
              *(double *)(lVar11 + 0x48 + lVar20) = param_3[2];
              dVar25 = param_3[1];
              pdVar1 = (double *)(lVar11 + 0x38 + lVar20);
              *pdVar1 = *param_3;
              pdVar1[1] = dVar25;
              *(double *)(lVar11 + 0x60 + lVar20) = param_3[5];
              dVar25 = param_3[4];
              pdVar1 = (double *)(lVar11 + 0x50 + lVar20);
              *pdVar1 = *pdVar21;
              pdVar1[1] = dVar25;
              if (DAT_14c75efec != 0) {
                lVar11 = *(longlong *)(lVar6 + 0x30);
                *(undefined4 *)(lVar11 + 0x14 + lVar20) = *(undefined4 *)((longlong)param_2 + 0x14);
                *(int *)(lVar11 + 0x18 + lVar20) = (int)param_2[3];
                *(undefined4 *)(lVar11 + 0x1c + lVar20) = *(undefined4 *)((longlong)param_2 + 0x1c);
                *(int *)(lVar11 + 0x20 + lVar20) = (int)param_2[4];
                *(undefined4 *)(lVar11 + 0x24 + lVar20) = *(undefined4 *)((longlong)param_2 + 0x24);
                *(int *)(lVar11 + 0x28 + lVar20) = (int)param_2[5];
                *(undefined4 *)(lVar11 + 0x2c + lVar20) = *(undefined4 *)((longlong)param_2 + 0x2c);
                *(int *)(lVar11 + 0x30 + lVar20) = (int)param_2[6];
              }
              break;
            }
            lVar20 = lVar20 + 0x68;
          } while ((longlong)*(int *)(lVar6 + 0x38) * 0x68 - lVar20 != 0);
        }
        *(undefined1 *)(lVar6 + 0x40) = 1;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x20);
        *(undefined8 *)(lVar6 + lVar18 * 0x48) = 0x7fefffffffffffff;
        *(undefined8 *)(lVar6 + 8 + lVar18 * 0x48) = 0x7fefffffffffffff;
        *(undefined8 *)(lVar6 + 0x10 + lVar18 * 0x48) = 0x7fefffffffffffff;
        *(undefined8 *)(lVar6 + 0x18 + lVar18 * 0x48) = 0xffefffffffffffff;
        *(undefined8 *)(lVar6 + 0x20 + lVar18 * 0x48) = 0xffefffffffffffff;
        *(undefined8 *)(lVar6 + 0x28 + lVar18 * 0x48) = 0xffefffffffffffff;
        lVar11 = (longlong)*(int *)(lVar6 + 0x38 + lVar18 * 0x48);
        if (lVar11 != 0) {
          pdVar21 = (double *)(lVar6 + lVar18 * 0x48);
          dVar25 = pdVar21[6];
          dVar26 = 1.79769313486232e+308;
          dVar34 = -1.79769313486232e+308;
          lVar6 = 0;
          uVar61 = 0xffffffff;
          uVar62 = 0xffefffff;
          dVar63 = -1.79769313486232e+308;
          dVar64 = 1.79769313486232e+308;
          dVar69 = 1.79769313486232e+308;
          do {
            dVar33 = *(double *)((longlong)dVar25 + 0x48 + lVar6);
            if (dVar33 <= dVar69) {
              dVar69 = dVar33;
            }
            dVar33 = *(double *)((longlong)dVar25 + 0x40 + lVar6);
            if (dVar33 <= dVar64) {
              dVar64 = dVar33;
            }
            dVar33 = *(double *)((longlong)dVar25 + 0x38 + lVar6);
            if (dVar33 <= dVar26) {
              dVar26 = dVar33;
            }
            *pdVar21 = dVar26;
            pdVar21[1] = dVar64;
            pdVar21[2] = dVar69;
            dVar33 = *(double *)((longlong)dVar25 + 0x60 + lVar6);
            if (dVar63 <= dVar33) {
              dVar63 = dVar33;
            }
            dVar33 = *(double *)((longlong)dVar25 + 0x58 + lVar6);
            if ((double)CONCAT44(uVar62,uVar61) <= dVar33) {
              uVar61 = SUB84(dVar33,0);
              uVar62 = (undefined4)((ulonglong)dVar33 >> 0x20);
            }
            dVar33 = *(double *)((longlong)dVar25 + 0x50 + lVar6);
            if (dVar34 <= dVar33) {
              dVar34 = dVar33;
            }
            pdVar21[3] = dVar34;
            pdVar21[4] = (double)CONCAT44(uVar62,uVar61);
            pdVar21[5] = dVar63;
            lVar6 = lVar6 + 0x68;
          } while (lVar11 * 0x68 - lVar6 != 0);
        }
      }
      goto LAB_14006bb3e;
    }
  }
  else {
    uVar70 = 0xffffffff;
    uVar71 = 0x7fefffff;
    uVar72 = 0xffffffff;
    uVar73 = 0xffefffff;
    uVar61 = uVar70;
    uVar62 = uVar71;
    uVar74 = uVar70;
    uVar75 = uVar71;
    uVar76 = uVar72;
    uVar77 = uVar73;
    uVar78 = uVar72;
    uVar79 = uVar73;
  }
  plVar19 = (longlong *)(param_1 + 0x110);
  if ((longlong)(int)*puVar23 == -1) {
    local_158 = param_2[6];
    local_188 = *param_2;
    puStack_180 = (uint *)param_2[1];
    local_178 = (longlong *)param_2[2];
    lStack_170 = param_2[3];
    local_168 = (undefined4)param_2[4];
    uStack_164 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_160 = (undefined4)param_2[5];
    uStack_15c = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar9 = *(uint *)(param_1 + 0x118);
    *(uint *)(param_1 + 0x118) = uVar9 + 1;
    if (*(uint *)(param_1 + 0x11c) < uVar9 + 1) {
      FUN_14479f6b8(plVar19,uVar9);
    }
    lVar6 = *plVar19;
    lVar11 = (longlong)(int)uVar9 * 0x68;
    *(longlong *)(lVar6 + 0x30 + lVar11) = local_158;
    puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar11);
    *puVar2 = CONCAT44(uStack_164,local_168);
    puVar2[1] = CONCAT44(uStack_15c,uStack_160);
    plVar19 = (longlong *)(lVar6 + 0x10 + lVar11);
    *plVar19 = (longlong)local_178;
    plVar19[1] = lStack_170;
    *(longlong *)(lVar6 + lVar11) = local_188;
    ((longlong *)(lVar6 + lVar11))[1] = (longlong)puStack_180;
    *(ulonglong *)(lVar6 + 0x38 + lVar11) = CONCAT44(uVar79,uVar78);
    *(ulonglong *)(lVar6 + 0x40 + lVar11) = CONCAT44(uVar77,uVar76);
    *(ulonglong *)(lVar6 + 0x48 + lVar11) = CONCAT44(uVar73,uVar72);
    *(ulonglong *)(lVar6 + 0x50 + lVar11) = CONCAT44(uVar75,uVar74);
    *(ulonglong *)(lVar6 + 0x58 + lVar11) = CONCAT44(uVar62,uVar61);
    *(ulonglong *)(lVar6 + 0x60 + lVar11) = CONCAT44(uVar71,uVar70);
    *puVar23 = uVar9;
  }
  else {
    lVar6 = *plVar19;
    lVar11 = (longlong)(int)*puVar23 * 0x68;
    *(ulonglong *)(lVar6 + 0x38 + lVar11) = CONCAT44(uVar79,uVar78);
    *(ulonglong *)(lVar6 + 0x40 + lVar11) = CONCAT44(uVar77,uVar76);
    *(ulonglong *)(lVar6 + 0x48 + lVar11) = CONCAT44(uVar73,uVar72);
    *(ulonglong *)(lVar6 + 0x50 + lVar11) = CONCAT44(uVar75,uVar74);
    *(ulonglong *)(lVar6 + 0x58 + lVar11) = CONCAT44(uVar62,uVar61);
    *(ulonglong *)(lVar6 + 0x60 + lVar11) = CONCAT44(uVar71,uVar70);
    if (DAT_14c75efec != 0) {
      lVar6 = *plVar19;
      lVar11 = (longlong)(int)*puVar23 * 0x68;
      *(undefined4 *)(lVar6 + 0x14 + lVar11) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(int *)(lVar6 + 0x18 + lVar11) = (int)param_2[3];
      *(undefined4 *)(lVar6 + 0x1c + lVar11) = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(lVar6 + 0x20 + lVar11) = (int)param_2[4];
      *(undefined4 *)(lVar6 + 0x24 + lVar11) = *(undefined4 *)((longlong)param_2 + 0x24);
      *(int *)(lVar6 + 0x28 + lVar11) = (int)param_2[5];
      *(undefined4 *)(lVar6 + 0x2c + lVar11) = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(int *)(lVar6 + 0x30 + lVar11) = (int)param_2[6];
    }
  }
  uVar9 = puVar23[1];
  lVar6 = (longlong)(int)uVar9;
  if (lVar6 != -1) {
    if (*(longlong *)(param_1 + 200) == 0) {
      if ((((*(double *)(param_1 + 0xd0) <= 0.0) || (*(int *)(param_1 + 0xe0) < 1)) ||
          (*(int *)(param_1 + 0xe4) < 1)) || (*(int *)(param_1 + 0xe8) < 1)) {
        iVar5 = *(int *)(param_1 + 0x40);
        if ((int)(uVar9 + 1) < iVar5) {
          *(uint *)(*(longlong *)(param_1 + 0x120) + 4 +
                   (longlong)
                   *(int *)((longlong)iVar5 * 0x68 + -0x58 + *(longlong *)(param_1 + 0x38)) * 0x18)
               = uVar9;
          uVar9 = puVar23[1];
          iVar5 = *(int *)(param_1 + 0x40);
        }
        plVar19 = (longlong *)(param_1 + 0x38);
        iVar12 = ~uVar9 + iVar5;
        if (iVar12 != 0) {
          iVar17 = 1;
          if (iVar12 < 1) {
            iVar17 = iVar12;
          }
          memmove((void *)((longlong)(int)uVar9 * 0x68 + *(longlong *)(param_1 + 0x38)),
                  (void *)((longlong)(iVar5 - iVar17) * 0x68 + *(longlong *)(param_1 + 0x38)),
                  (longlong)iVar17 * 0x68);
          iVar5 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x40) = iVar5 + -1;
      }
      else {
        uVar10 = puVar23[3];
        local_d8 = CONCAT44(local_d8._4_4_,uVar9);
        if ((longlong)(int)uVar10 == -1) {
          local_b8 = (uint *)&local_d8;
          dVar25 = *(double *)(param_1 + 0xd8);
          lVar11 = *(longlong *)(param_1 + 0x38);
          lVar6 = lVar6 * 0x68;
          dVar64 = *(double *)(lVar11 + 0x38 + lVar6) * dVar25;
          auVar65._8_8_ = 0;
          auVar65._0_8_ = ABS(dVar64) * 2.220446049250313e-16 + dVar64;
          auVar36 = roundpd(auVar65,auVar65,1);
          dVar64 = *(double *)(lVar11 + 0x50 + lVar6) * dVar25;
          auVar66._8_8_ = 0;
          auVar66._0_8_ = ABS(dVar64) * 2.220446049250313e-16 + dVar64;
          auVar52 = roundpd(auVar66,auVar66,1);
          local_1e0 = (longlong)auVar52._0_8_;
          local_1e4 = uVar8;
          local_c0 = param_1;
          if ((longlong)auVar36._0_8_ <= local_1e0) {
            dVar64 = *(double *)(lVar11 + lVar6 + 0x40) * dVar25;
            auVar56._0_8_ = ABS(dVar64) * 2.220446049250313e-16 + dVar64;
            auVar56._8_8_ = 0;
            auVar54 = roundpd(auVar56,auVar56,1);
            dVar25 = dVar25 * *(double *)(lVar11 + lVar6 + 0x58);
            auVar30._8_8_ = 0;
            auVar30._0_8_ = ABS(dVar25) * 2.220446049250313e-16 + dVar25;
            auVar52 = roundpd(auVar30,auVar30,1);
            local_1d8 = (longlong *)(longlong)auVar52._0_8_;
            lVar6 = (longlong)local_1d8 + 1;
            lVar11 = (longlong)auVar36._0_8_;
            do {
              if ((longlong)auVar54._0_8_ <= (longlong)local_1d8) {
                uVar8 = ((uint)lVar11 & 0xff00) << 8 | (uint)lVar11 & 0xff;
                uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                lVar18 = (longlong)auVar54._0_8_;
                do {
                  uVar9 = ((uint)lVar18 & 0xff00) << 8 | (uint)lVar18 & 0xff;
                  uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
                  uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
                  cVar4 = FUN_146e076fc(&local_c0,
                                        (uVar9 * 2 | uVar9 * 4) & 0xaaaaaaaa |
                                        (uVar8 * 2 | uVar8) & 0x55555555);
                  if (cVar4 == '\0') goto LAB_14006b654;
                  lVar18 = lVar18 + 1;
                } while (lVar6 != lVar18);
              }
              bVar24 = lVar11 != local_1e0;
              lVar11 = lVar11 + 1;
            } while (bVar24);
          }
        }
        else {
          iVar5 = *(int *)(param_1 + 0xc0);
          if ((int)(uVar10 + 1) < iVar5) {
            *(uint *)(*(longlong *)(param_1 + 0x120) + 0xc +
                     (longlong)
                     *(int *)(*(longlong *)(param_1 + 0x38) + 0x10 +
                             (longlong)
                             *(int *)(*(longlong *)(param_1 + 0xb8) + -4 + (longlong)iVar5 * 4) *
                             0x68) * 0x18) = uVar10;
            iVar5 = *(int *)(param_1 + 0xc0);
          }
          iVar12 = ~uVar10 + iVar5;
          local_1e4 = uVar8;
          if (iVar12 != 0) {
            iVar17 = 1;
            if (iVar12 < 1) {
              iVar17 = iVar12;
            }
            memmove((void *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar10 * 4),
                    (void *)(*(longlong *)(param_1 + 0xb8) + (longlong)(iVar5 - iVar17) * 4),
                    (longlong)iVar17 << 2);
            iVar5 = *(int *)(param_1 + 0xc0);
          }
          *(int *)(param_1 + 0xc0) = iVar5 + -1;
          FUN_14479f406(param_1 + 0xb8);
        }
LAB_14006b654:
        plVar19 = (longlong *)(param_1 + 0x38);
        iVar5 = *(int *)(param_1 + 0x40);
        if ((int)((uint)local_d8 + 1) < iVar5) {
          lVar6 = (longlong)iVar5 + -1;
          local_c4 = (uint)lVar6;
          lVar11 = *plVar19;
          lVar18 = (longlong)*(int *)((longlong)iVar5 * 0x68 + -0x58 + lVar11);
          local_1d0 = lVar18 * 3;
          lVar18 = (longlong)*(int *)(*plVar13 + 0xc + lVar18 * 0x18);
          local_1d8 = plVar19;
          if (lVar18 == -1) {
            puStack_180 = &local_c4;
            local_178 = &local_d8;
            dVar25 = *(double *)(param_1 + 0xd8);
            lVar6 = lVar6 * 0x68;
            dVar64 = *(double *)(lVar11 + 0x38 + lVar6) * dVar25;
            auVar67._8_8_ = 0;
            auVar67._0_8_ = ABS(dVar64) * 2.220446049250313e-16 + dVar64;
            auVar36 = roundpd(auVar67,auVar67,1);
            dVar64 = *(double *)(lVar11 + 0x50 + lVar6) * dVar25;
            auVar68._8_8_ = 0;
            auVar68._0_8_ = ABS(dVar64) * 2.220446049250313e-16 + dVar64;
            auVar52 = roundpd(auVar68,auVar68,1);
            local_1e0 = (longlong)auVar52._0_8_;
            local_188 = param_1;
            if ((longlong)auVar36._0_8_ <= local_1e0) {
              dVar64 = *(double *)(lVar11 + lVar6 + 0x40) * dVar25;
              auVar57._0_8_ = ABS(dVar64) * 2.220446049250313e-16 + dVar64;
              auVar57._8_8_ = 0;
              auVar54 = roundpd(auVar57,auVar57,1);
              dVar25 = dVar25 * *(double *)(lVar11 + lVar6 + 0x58);
              auVar31._8_8_ = 0;
              auVar31._0_8_ = ABS(dVar25) * 2.220446049250313e-16 + dVar25;
              auVar52 = roundpd(auVar31,auVar31,1);
              lVar6 = (longlong)auVar36._0_8_;
              do {
                if ((longlong)auVar54._0_8_ <= (longlong)auVar52._0_8_) {
                  uVar8 = ((uint)lVar6 & 0xff00) << 8 | (uint)lVar6 & 0xff;
                  uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                  uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                  lVar11 = (longlong)auVar54._0_8_;
                  do {
                    uVar9 = ((uint)lVar11 & 0xff00) << 8 | (uint)lVar11 & 0xff;
                    uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
                    uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
                    cVar4 = FUN_146e0783c(&local_188,
                                          (uVar9 * 2 | uVar9 * 4) & 0xaaaaaaaa |
                                          (uVar8 * 2 | uVar8) & 0x55555555);
                    if (cVar4 == '\0') goto LAB_14006ba3e;
                    lVar11 = lVar11 + 1;
                  } while ((longlong)auVar52._0_8_ + 1 != lVar11);
                }
                bVar24 = lVar6 != local_1e0;
                lVar6 = lVar6 + 1;
              } while (bVar24);
            }
          }
          else {
            *(uint *)(*(longlong *)(param_1 + 0xb8) + lVar18 * 4) = (uint)local_d8;
          }
LAB_14006ba3e:
          *(uint *)(*(longlong *)(param_1 + 0x120) + 4 + local_1d0 * 8) = (uint)local_d8;
          iVar5 = *(int *)(param_1 + 0x40);
          plVar19 = local_1d8;
        }
        iVar12 = ~(uint)local_d8 + iVar5;
        uVar16 = (ulonglong)local_1e4;
        if (iVar12 != 0) {
          iVar17 = 1;
          if (iVar12 < 1) {
            iVar17 = iVar12;
          }
          memmove((void *)((longlong)(int)(uint)local_d8 * 0x68 + *(longlong *)(param_1 + 0x38)),
                  (void *)((longlong)(iVar5 - iVar17) * 0x68 + *(longlong *)(param_1 + 0x38)),
                  (longlong)iVar17 * 0x68);
          iVar5 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x40) = iVar5 + -1;
      }
      FUN_144aa423e(plVar19);
    }
    else {
      FUN_1429cbfa8(*(longlong *)(param_1 + 200),lVar6,param_2);
    }
    puVar23[1] = 0xffffffff;
    puVar23 = puVar23 + 3;
    goto LAB_14006bbdd;
  }
  goto LAB_14006bbe5;
LAB_14006a76c:
  FUN_1429cbfa8(lVar11,lVar6,param_2);
  lVar6 = *(longlong *)(param_1 + 200);
LAB_14006af64:
  FUN_1429cc8c6(lVar6,&local_188,param_2,param_3);
  puVar23[1] = (uint)local_188;
  goto LAB_14006bb3e;
LAB_14006ae51:
  do {
    if ((longlong)auVar54._0_8_ <= (longlong)local_1d0) {
      uVar8 = ((uint)plVar13 & 0xff00) << 8 | (uint)plVar13 & 0xff;
      uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
      uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
      lVar6 = (longlong)auVar54._0_8_;
      do {
        uVar9 = ((uint)lVar6 & 0xff00) << 8 | (uint)lVar6 & 0xff;
        uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
        uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
        cVar4 = FUN_146e08246(&local_d8,
                              (uVar9 * 2 | uVar9 * 4) & 0xaaaaaaaa |
                              (uVar8 * 2 | uVar8) & 0x55555555);
        if (cVar4 == '\0') goto LAB_14006af08;
        lVar6 = lVar6 + 1;
      } while (local_1e0 != lVar6);
    }
    bVar24 = plVar13 != local_1d8;
    plVar13 = (longlong *)((longlong)plVar13 + 1);
  } while (bVar24);
LAB_14006af08:
  uVar10 = *(uint *)(param_1 + 0xc0);
  *(uint *)(param_1 + 0xc0) = uVar10 + 1;
  if (*(uint *)(param_1 + 0xc4) < uVar10 + 1) {
    FUN_1446f48e2((longlong *)(param_1 + 0xb8),uVar10);
  }
  *(uint *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar10 * 4) = local_c4;
LAB_14006af40:
  uVar16 = (ulonglong)local_1e4;
  lVar6 = local_1c0;
  pdVar21 = local_1b8;
LAB_14006bac0:
  puVar23[3] = uVar10;
LAB_14006bac4:
  lVar11 = *(longlong *)(param_1 + 0x38);
  lVar6 = lVar6 * 0x68;
  *(double *)(lVar11 + 0x48 + lVar6) = param_3[2];
  dVar25 = param_3[1];
  pdVar1 = (double *)(lVar11 + 0x38 + lVar6);
  *pdVar1 = *param_3;
  pdVar1[1] = dVar25;
  *(double *)(lVar11 + 0x60 + lVar6) = pdVar21[2];
  dVar25 = pdVar21[1];
  pdVar1 = (double *)(lVar11 + 0x50 + lVar6);
  *pdVar1 = *pdVar21;
  pdVar1[1] = dVar25;
  if (DAT_14c75efec != 0) {
    lVar11 = *(longlong *)(param_1 + 0x38);
    *(undefined4 *)(lVar11 + 0x14 + lVar6) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(int *)(lVar11 + 0x18 + lVar6) = (int)param_2[3];
    *(undefined4 *)(lVar11 + 0x1c + lVar6) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(lVar11 + 0x20 + lVar6) = (int)param_2[4];
    *(undefined4 *)(lVar11 + 0x24 + lVar6) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(int *)(lVar11 + 0x28 + lVar6) = (int)param_2[5];
    *(undefined4 *)(lVar11 + 0x2c + lVar6) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(int *)(lVar11 + 0x30 + lVar6) = (int)param_2[6];
  }
LAB_14006bb3e:
  uVar8 = *puVar23;
  if (uVar8 != 0xffffffff) {
    iVar5 = *(int *)(param_1 + 0x118);
    if ((int)(uVar8 + 1) < iVar5) {
      *(uint *)(*(longlong *)(param_1 + 0x120) +
               (longlong)*(int *)((longlong)iVar5 * 0x68 + -0x58 + *(longlong *)(param_1 + 0x110)) *
               0x18) = uVar8;
      uVar8 = *puVar23;
      iVar5 = *(int *)(param_1 + 0x118);
    }
    iVar12 = ~uVar8 + iVar5;
    if (iVar12 != 0) {
      iVar17 = 1;
      if (iVar12 < 1) {
        iVar17 = iVar12;
      }
      memmove((void *)((longlong)(int)uVar8 * 0x68 + *(longlong *)(param_1 + 0x110)),
              (void *)((longlong)(iVar5 - iVar17) * 0x68 + *(longlong *)(param_1 + 0x110)),
              (longlong)iVar17 * 0x68);
      iVar5 = *(int *)(param_1 + 0x118);
    }
    *(int *)(param_1 + 0x118) = iVar5 + -1;
    FUN_144aa423e(param_1 + 0x110);
LAB_14006bbdd:
    *puVar23 = 0xffffffff;
  }
LAB_14006bbe5:
  if (((*(longlong *)(param_1 + 200) == 0) && (*(char *)(param_1 + 0x48) == '\0')) &&
     (DAT_14c75efe4 < *(int *)(param_1 + 0x40))) {
    FUN_1429ccdc6(param_1);
  }
LAB_14006bc08:
  *(undefined1 *)(param_1 + 0x188) = 0;
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 14006be6e FUN_14006be6e body=36 status=ok
// SIG undefined FUN_14006be6e(void)

undefined8 FUN_14006be6e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14006be92();
  if ((&DAT_00001100)[param_1] == '\v') {
    uVar1 = 0x3f800000;
  }
  return uVar1;
}



// FUNCTION 14006be92 FUN_14006be92 body=123 status=ok
// SIG undefined FUN_14006be92(void)

undefined8 FUN_14006be92(longlong *param_1)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x710))();
  uVar2 = 0;
  if ((1e-08 < fVar1) &&
     (dVar3 = (double)param_1[0x73] * (double)param_1[0x73] +
              (double)param_1[0x71] * (double)param_1[0x71] +
              (double)param_1[0x72] * (double)param_1[0x72], 0.0 < dVar3)) {
    dVar3 = SQRT(dVar3) / (double)fVar1;
    if (1.0 <= dVar3) {
      dVar3 = 1.0;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    uVar2 = CONCAT44((int)((ulonglong)dVar3 >> 0x20),(float)dVar3);
  }
  return uVar2;
}



// FUNCTION 14006bf18 FUN_14006bf18 body=360 status=ok
// SIG undefined FUN_14006bf18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006bf18(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  
  if ((int)param_1[1] != -1) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0xd) == '\0') {
    puVar4 = (uint *)FUN_14003f496();
  }
  else {
    puVar4 = &DAT_14ca99ff8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca9a020) && (FUN_144b3d300(&DAT_14ca9a020), DAT_14ca9a020 == -1)) {
      _DAT_14ca9a008 = 0;
      DAT_14ca9a010 = 0;
      _DAT_14ca99ff8 = 0;
      DAT_14ca9a000 = 0;
      _DAT_14ca9a018 = 0;
      atexit(FUN_14322f458);
      _Init_thread_footer(&DAT_14ca9a020);
    }
  }
  DVar2 = GetCurrentThreadId();
  uVar3 = *puVar4;
  if ((uVar3 & 1) == 0) {
    LOCK();
    uVar5 = *puVar4;
    bVar6 = uVar3 == uVar5;
    if (bVar6) {
      *puVar4 = uVar3 | 1;
      uVar5 = uVar3;
    }
    uVar3 = uVar5;
    UNLOCK();
    if (!bVar6) goto LAB_14006bfd2;
    puVar4[1] = DVar2;
  }
  else {
LAB_14006bfd2:
    if (puVar4[1] == DVar2) {
      LOCK();
      *puVar4 = *puVar4 + 4;
      UNLOCK();
    }
    else {
      FUN_1402441ea(puVar4,uVar3);
    }
  }
  uVar3 = puVar4[4];
  if ((longlong)(int)uVar3 == 0) {
    uVar5 = puVar4[8];
    puVar4[8] = uVar5 + 1;
    if (puVar4[9] < uVar5 + 1) {
      FUN_14178fd3c(puVar4 + 6,uVar5);
    }
  }
  else {
    uVar5 = *(uint *)(*(longlong *)(puVar4 + 2) + -4 + (longlong)(int)uVar3 * 4);
    puVar4[4] = uVar3 - 1;
  }
  *(longlong **)(*(longlong *)(puVar4 + 6) + (longlong)(int)uVar5 * 8) = param_1;
  uVar3 = *puVar4;
  if (uVar3 < 4) {
    puVar4[1] = 0;
    if (uVar3 < 2) {
      LOCK();
      uVar1 = *puVar4;
      if (uVar3 == uVar1) {
        *puVar4 = 0;
      }
      UNLOCK();
      if (uVar3 == uVar1) goto LAB_14006c02d;
    }
    FUN_140d366d2(puVar4);
  }
  else {
    LOCK();
    *puVar4 = *puVar4 - 4;
    UNLOCK();
  }
LAB_14006c02d:
  if (DAT_14ca84d88 == '\x01') {
    (**(code **)(*param_1 + 8))(param_1,param_2);
  }
  *(uint *)(param_1 + 1) = uVar5;
  return;
}



// FUNCTION 14006c080 FUN_14006c080 body=68 status=ok
// SIG undefined FUN_14006c080(void)

void FUN_14006c080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adfe8b0;
  FUN_14006c0c4(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_14006c124(param_1);
  return;
}



// FUNCTION 14006c0c4 FUN_14006c0c4 body=96 status=ok
// SIG undefined FUN_14006c0c4(void)

void FUN_14006c0c4(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_14006c0e0:
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_1,0,0,0x10);
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_14006c0e0;
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 14006c124 FUN_14006c124 body=144 status=ok
// SIG undefined FUN_14006c124(void)

void FUN_14006c124(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ae15620;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_14006c1b4(param_1 + 0x44);
  FUN_14006c1e8(param_1 + 0x1a);
  FUN_14006c2ae(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14006c1b4 FUN_14006c1b4 body=52 status=ok
// SIG undefined FUN_14006c1b4(void)

void FUN_14006c1b4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
  }
  FUN_14006c25a(lVar1,*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14006c1e8 FUN_14006c1e8 body=61 status=ok
// SIG undefined FUN_14006c1e8(void)

void FUN_14006c1e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar1 = param_1;
  }
  FUN_14006c225(lVar1,*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14006c225 FUN_14006c225 body=53 status=ok
// SIG undefined FUN_14006c225(void)

void FUN_14006c225(longlong param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14006c25a FUN_14006c25a body=83 status=ok
// SIG undefined FUN_14006c25a(void)

void FUN_14006c25a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined1 *)(param_1 + 0x14);
    do {
      *(undefined8 *)(puVar3 + -0x14) = 0;
      lVar2 = *(longlong *)(puVar3 + -0xc);
      if (lVar2 == 0) {
        *(undefined4 *)(puVar3 + -4) = 0xffffffff;
        *puVar3 = 0;
      }
      else {
        *(undefined8 *)(puVar3 + -0xc) = 0;
        LOCK();
        piVar1 = (int *)(lVar2 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        *(undefined4 *)(puVar3 + -4) = 0xffffffff;
        *puVar3 = 0;
        if (*(longlong *)(puVar3 + -0xc) != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)(puVar3 + -0xc) + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
      }
      puVar3 = puVar3 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14006c2ae FUN_14006c2ae body=157 status=ok
// SIG undefined FUN_14006c2ae(void)

void FUN_14006c2ae(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ae02690;
  FUN_1447b41aa();
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1447b4304(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1449394d8(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14006c34c FUN_14006c34c body=320 status=ok
// SIG undefined FUN_14006c34c(void)

void FUN_14006c34c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14006c3b5;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14006c3b5:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14006c49c FUN_14006c49c body=12 status=ok
// SIG undefined FUN_14006c49c(void)

void FUN_14006c49c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014006c4a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14006c4a8 FUN_14006c4a8 body=31 status=ok
// SIG undefined FUN_14006c4a8(void)

undefined8 FUN_14006c4a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14006c4c7 FUN_14006c4c7 body=548 status=ok
// SIG undefined FUN_14006c4c7(void)

undefined8
FUN_14006c4c7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  bVar5 = true;
  local_158 = &local_c9;
  local_c9 = '\x01';
  local_a4 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_b8 = 0;
  local_ac = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  local_d8 = param_5[2];
  local_e8 = *param_5;
  uStack_e0 = param_5[1];
  local_f8 = *(undefined8 *)(param_4 + 4);
  local_108 = *param_4;
  uStack_104 = param_4[1];
  uStack_100 = param_4[2];
  uStack_fc = param_4[3];
  local_160 = param_9;
  local_168 = param_8;
  local_170 = param_7;
  local_178 = param_6;
  local_150 = &local_c8;
  uVar2 = FUN_1434444c1(param_1,param_2);
  if (local_c9 == '\x01') {
    uVar2 = 10;
    do {
      local_118 = param_5[2];
      local_128 = *param_5;
      uStack_120 = param_5[1];
      local_148 = *param_4;
      uStack_144 = param_4[1];
      uStack_140 = param_4[2];
      uStack_13c = param_4[3];
      local_138 = *(undefined8 *)(param_4 + 4);
      local_158 = &local_c9;
      local_160 = param_9;
      local_168 = param_8;
      local_178 = param_6;
      local_170 = &local_c8;
      local_150 = &local_c8;
      uVar3 = FUN_1434444c1(param_1,param_2,&local_148,&local_128);
      uVar4 = (ulonglong)uVar3;
      bVar5 = 1 < uVar2;
      if (local_c9 != '\x01') break;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  else {
    uVar4 = (ulonglong)uVar2;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar5);
}



// FUNCTION 14006c6ec FUN_14006c6ec body=151 status=ok
// SIG undefined FUN_14006c6ec(void)

void FUN_14006c6ec(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x498) = 0;
  if ((*(longlong *)(param_1 + 0x490) != 0) && (-1 < (int)*(uint *)(param_1 + 0x49c))) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x490),
               (ulonglong)*(uint *)(param_1 + 0x49c) << 6);
  }
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((*(longlong *)(param_1 + 0x40) != 0) && (-1 < (int)*(uint *)(param_1 + 0x4c))) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x40),
               (ulonglong)*(uint *)(param_1 + 0x4c) << 6);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  return;
}



// FUNCTION 14006c794 FUN_14006c794 body=113 status=ok
// SIG undefined FUN_14006c794(void)

void FUN_14006c794(longlong *param_1,int param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)param_2 * 0x18);
  FUN_14006c805(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 14006c805 FUN_14006c805 body=38 status=ok
// SIG undefined FUN_14006c805(void)

void FUN_14006c805(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14006c82c(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 14006c82c FUN_14006c82c body=52 status=ok
// SIG undefined FUN_14006c82c(void)

void FUN_14006c82c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = param_1;
  }
  FUN_144760452(lVar1,*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14006c860 FUN_14006c860 body=176 status=ok
// SIG undefined FUN_14006c860(void)

undefined8 * FUN_14006c860(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f5e0a0;
  if (((*(byte *)(param_1 + 1) & 4) == 0) &&
     (plVar3 = (longlong *)param_1[0xf], plVar3 != (longlong *)0x0)) {
    if (plVar3[6] != 0) {
      FUN_1400020a8();
    }
    if (plVar3[4] != 0) {
      FUN_1400020a8();
    }
    if (plVar3[2] != 0) {
      FUN_1400020a8();
    }
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar3);
  }
  *param_1 = &PTR_FUN_149f5e060;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14006c918 FUN_14006c918 body=401 status=ok
// SIG undefined FUN_14006c918(void)

void FUN_14006c918(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  FUN_14006caee(param_1 + 0x140,param_1 + 0xf0);
  FUN_14006caaa(param_1 + 0xf0);
  FUN_14006cbe2(param_1 + 8,param_2,0,0x400,0);
  FUN_14006cd1c(param_1 + 0x40,param_2,0,0x10,0);
  FUN_14006d018(param_1 + 0x90,param_2,0,0x400,0);
  FUN_14006d018(param_1 + 0xc0,param_2,0,0x400,0);
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar5 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar5) + 0x20) = 0;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar5 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar5) + 0x20) = 0;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_14006ce56(param_1 + 0x78,param_2,1);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 3;
  iVar1 = *(int *)(param_1 + 0x1e8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1e0);
    lVar5 = 0;
    do {
      cVar3 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 8))();
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x10))();
        *(undefined4 *)(param_1 + 0x1f0) = uVar4;
        return;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 14006caaa FUN_14006caaa body=68 status=ok
// SIG undefined FUN_14006caaa(void)

void FUN_14006caaa(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14810b122();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1448fc38a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14006caee FUN_14006caee body=93 status=ok
// SIG undefined FUN_14006caee(void)

longlong FUN_14006caee(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14006cb4c(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14006cb4c FUN_14006cb4c body=150 status=ok
// SIG undefined FUN_14006cb4c(void)

longlong * FUN_14006cb4c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 14006cbe2 FUN_14006cbe2 body=313 status=ok
// SIG undefined FUN_14006cbe2(void)

void FUN_14006cbe2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_1402a9a22(&local_58);
    iVar1 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar7 = 0;
      do {
        uVar5 = uStack_50;
        lVar3 = *(longlong *)(lVar2 + lVar7);
        lVar8 = (longlong)(int)uStack_50;
        uVar6 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
        if (uStack_50._4_4_ < uVar6) {
          FUN_14742f52c(&local_58,uVar5 & 0xffffffff);
        }
        lVar8 = lVar8 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + 8);
        *(undefined8 *)(local_58 + lVar8) = 0xffffffffffffffff;
        *(undefined4 *)(local_58 + 8 + lVar8) = 0xffffffff;
        *(undefined8 *)(local_58 + 0x10 + lVar8) = uVar4;
        *(undefined1 *)(local_58 + 0x18 + lVar8) = 3;
        *(undefined4 *)(local_58 + 0x1c + lVar8) = param_3;
        *(undefined4 *)(local_58 + 0x20 + lVar8) = param_4;
        *(undefined4 *)(local_58 + 0x24 + lVar8) = param_5;
        *(undefined1 *)(local_58 + 0x30 + lVar8) = 0;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  local_68 = local_58;
  local_60 = (int)uStack_50;
  FUN_144760590(param_2,&local_68,0);
  FUN_144705e08(local_58,uStack_50 & 0xffffffff);
  FUN_14006d152(&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14006cd1c FUN_14006cd1c body=313 status=ok
// SIG undefined FUN_14006cd1c(void)

void FUN_14006cd1c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_1402a9a22(&local_58);
    iVar1 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar7 = 0;
      do {
        uVar5 = uStack_50;
        lVar3 = *(longlong *)(lVar2 + lVar7);
        lVar8 = (longlong)(int)uStack_50;
        uVar6 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
        if (uStack_50._4_4_ < uVar6) {
          FUN_14742f52c(&local_58,uVar5 & 0xffffffff);
        }
        lVar8 = lVar8 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + 8);
        *(undefined8 *)(local_58 + lVar8) = 0xffffffffffffffff;
        *(undefined4 *)(local_58 + 8 + lVar8) = 0xffffffff;
        *(undefined8 *)(local_58 + 0x10 + lVar8) = uVar4;
        *(undefined1 *)(local_58 + 0x18 + lVar8) = 3;
        *(undefined4 *)(local_58 + 0x1c + lVar8) = param_3;
        *(undefined4 *)(local_58 + 0x20 + lVar8) = param_4;
        *(undefined4 *)(local_58 + 0x24 + lVar8) = param_5;
        *(undefined1 *)(local_58 + 0x30 + lVar8) = 0;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  local_68 = local_58;
  local_60 = (int)uStack_50;
  FUN_144760590(param_2,&local_68,0);
  FUN_144705e08(local_58,uStack_50 & 0xffffffff);
  FUN_14006d152(&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14006ce56 FUN_14006ce56 body=449 status=ok
// SIG undefined FUN_14006ce56(void)

void FUN_14006ce56(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar3) + 0x30) = 0;
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar3 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar3) + 0x30) = 0;
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (param_3 == '\0') {
    if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_58 = 0;
  FUN_14006d018(param_1 + 0x18,param_2,0,0x400);
  local_58 = 0;
  FUN_14006d018(param_1 + 0x48,param_2,0,0x400);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    local_50 = param_2;
    do {
      FUN_1480dc278(&local_50,*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  local_50 = param_2;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar3 = 0;
    do {
      FUN_1480dc2f4(&local_50,*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  local_58 = 0;
  FUN_14006d018(param_1 + 0x18,param_2,0x400,0x400);
  local_58 = 0;
  FUN_14006d018(param_1 + 0x48,param_2,0x400,0x400);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 14006d018 FUN_14006d018 body=313 status=ok
// SIG undefined FUN_14006d018(void)

void FUN_14006d018(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_1402a9a22(&local_58);
    iVar1 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar7 = 0;
      do {
        uVar5 = uStack_50;
        lVar3 = *(longlong *)(lVar2 + lVar7);
        lVar8 = (longlong)(int)uStack_50;
        uVar6 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
        if (uStack_50._4_4_ < uVar6) {
          FUN_14742f52c(&local_58,uVar5 & 0xffffffff);
        }
        lVar8 = lVar8 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + 8);
        *(undefined8 *)(local_58 + lVar8) = 0xffffffffffffffff;
        *(undefined4 *)(local_58 + 8 + lVar8) = 0xffffffff;
        *(undefined8 *)(local_58 + 0x10 + lVar8) = uVar4;
        *(undefined1 *)(local_58 + 0x18 + lVar8) = 3;
        *(undefined4 *)(local_58 + 0x1c + lVar8) = param_3;
        *(undefined4 *)(local_58 + 0x20 + lVar8) = param_4;
        *(undefined4 *)(local_58 + 0x24 + lVar8) = param_5;
        *(undefined1 *)(local_58 + 0x30 + lVar8) = 0;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  local_68 = local_58;
  local_60 = (int)uStack_50;
  FUN_144760590(param_2,&local_68,0);
  FUN_144705e08(local_58,uStack_50 & 0xffffffff);
  FUN_14006d152(&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14006d152 FUN_14006d152 body=99 status=ok
// SIG undefined FUN_14006d152(void)

void FUN_14006d152(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006d1b6 FUN_14006d1b6 body=939 status=ok
// SIG undefined FUN_14006d1b6(void)

void FUN_14006d1b6(undefined8 param_1,longlong param_2,byte *param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *_Src;
  byte bVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  byte *pbVar17;
  bool bVar18;
  
  pbVar17 = (byte *)(-DAT_14ca84ab8 & param_2 + DAT_14ca84ab8);
  pbVar17[4] = 0;
  pbVar17[5] = 0;
  pbVar17[6] = 0;
  pbVar17[7] = 0;
  pbVar9 = (byte *)0x0;
  pbVar17[0xe8] = 0;
  pbVar17[0xe9] = 0;
  pbVar17[0xea] = 0;
  pbVar17[0xeb] = 0;
  pbVar17[0xec] = 0;
  pbVar17[0xed] = 0;
  pbVar17[0xee] = 0;
  pbVar17[0xef] = 0;
  pbVar17[0xf0] = 0;
  pbVar17[0xf1] = 0;
  pbVar17[0xf2] = 0;
  pbVar17[0xf3] = 0;
  pbVar17[0xf4] = 4;
  pbVar17[0xf5] = 0;
  pbVar17[0xf6] = 0;
  pbVar17[0xf7] = 0;
  pbVar17[0x178] = 0;
  pbVar17[0x179] = 0;
  pbVar17[0x17a] = 0;
  pbVar17[0x17b] = 0;
  pbVar17[0x17c] = 0;
  pbVar17[0x17d] = 0;
  pbVar17[0x17e] = 0;
  pbVar17[0x17f] = 0;
  pbVar17[0x180] = 0;
  pbVar17[0x181] = 0;
  pbVar17[0x182] = 0;
  pbVar17[0x183] = 0;
  pbVar17[0x184] = 4;
  pbVar17[0x185] = 0;
  pbVar17[0x186] = 0;
  pbVar17[0x187] = 0;
  pbVar17[0x1c8] = 0;
  pbVar17[0x1c9] = 0;
  pbVar17[0x1ca] = 0;
  pbVar17[0x1cb] = 0;
  pbVar17[0x1cc] = 0;
  pbVar17[0x1cd] = 0;
  pbVar17[0x1ce] = 0;
  pbVar17[0x1cf] = 0;
  pbVar17[0x1d0] = 0;
  pbVar17[0x1d1] = 0;
  pbVar17[0x1d2] = 0;
  pbVar17[0x1d3] = 0;
  pbVar17[0x1d4] = 4;
  pbVar17[0x1d5] = 0;
  pbVar17[0x1d6] = 0;
  pbVar17[0x1d7] = 0;
  pbVar17[600] = 0;
  pbVar17[0x259] = 0;
  pbVar17[0x25a] = 0;
  pbVar17[0x25b] = 0;
  pbVar17[0x25c] = 0;
  pbVar17[0x25d] = 0;
  pbVar17[0x25e] = 0;
  pbVar17[0x25f] = 0;
  pbVar17[0x260] = 0;
  pbVar17[0x261] = 0;
  pbVar17[0x262] = 0;
  pbVar17[0x263] = 0;
  pbVar17[0x264] = 8;
  pbVar17[0x265] = 0;
  pbVar17[0x266] = 0;
  pbVar17[0x267] = 0;
  pbVar17[0x268] = 0;
  *pbVar17 = *param_3;
  pbVar17[1] = param_3[1];
  uVar15 = *(uint *)(param_3 + 4);
  *(uint *)(pbVar17 + 4) = uVar15;
  bVar2 = *param_3;
  bVar3 = param_3[1];
  bVar18 = (uVar15 & 1) == 0;
  if (bVar18 && bVar2 != bVar3) {
    if (DAT_14c760da4 == 0) {
      pbVar9 = (byte *)0x0;
    }
    else {
      uVar15 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      iVar13 = 0;
      if (uVar15 != 0) {
        for (; (uVar15 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
        }
      }
      do {
        iVar11 = *(int *)(pbVar17 + 0x260);
        *(uint *)(pbVar17 + 0x260) = iVar11 + 1U;
        if (*(uint *)(pbVar17 + 0x264) < iVar11 + 1U) {
          FUN_1473701f2(pbVar17 + 0x1d8,iVar11);
        }
        pbVar9 = *(byte **)(pbVar17 + 600);
        if (*(byte **)(pbVar17 + 600) == (byte *)0x0) {
          pbVar9 = pbVar17 + 0x1d8;
        }
        lVar16 = (longlong)iVar11 * 0x10;
        pbVar8 = pbVar9 + lVar16;
        pbVar8[0] = 0;
        pbVar8[1] = 0;
        pbVar8[2] = 0;
        pbVar8[3] = 0;
        pbVar8[4] = 0;
        pbVar8[5] = 0;
        pbVar8[6] = 0;
        pbVar8[7] = 0;
        pbVar8[8] = 0;
        pbVar8[9] = 0;
        pbVar8[10] = 0;
        pbVar8[0xb] = 0;
        pbVar8[0xc] = 0;
        pbVar8[0xd] = 0;
        pbVar8[0xe] = 0;
        pbVar8[0xf] = 0;
        for (bVar6 = *param_3; bVar6 != 0; bVar6 = bVar6 - 1 & bVar6) {
          puVar7 = (undefined8 *)FUN_144ad3d06(0x30);
          *puVar7 = &PTR_FUN_149e002e8;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR_FUN_14a3492f8;
          *(undefined1 *)(puVar7 + 4) = 0;
          puVar7[5] = 0;
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
            UNLOCK();
          }
          uVar12 = (ulonglong)((-bVar6 & bVar6) == 2);
          puVar4 = *(undefined8 **)(pbVar9 + uVar12 * 8 + lVar16);
          *(undefined8 **)(pbVar9 + uVar12 * 8 + lVar16) = puVar7;
          if (puVar4 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar4 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
        }
        bVar6 = (byte)iVar13 & 0x1f;
        uVar15 = uVar15 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        if (uVar15 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = 0;
          if (uVar15 != 0) {
            for (; (uVar15 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
            }
          }
        }
      } while (uVar15 != 0);
      pbVar9 = *(byte **)(pbVar17 + 0xe8);
    }
  }
  pbVar17[0x268] = bVar18 && bVar2 != bVar3;
  pbVar8 = pbVar17 + 8;
  if (pbVar9 == (byte *)0x0) {
    pbVar9 = pbVar8;
  }
  FUN_144705e08(pbVar9);
  iVar13 = *(int *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 8);
  *(int *)(pbVar17 + 0xf0) = iVar13;
  if (iVar13 == 0 && *(int *)(pbVar17 + 0xf4) == 0) {
    pbVar17[0xf4] = 4;
    pbVar17[0xf5] = 0;
    pbVar17[0xf6] = 0;
    pbVar17[0xf7] = 0;
  }
  else {
    FUN_1447160fa(pbVar8,iVar13);
    pbVar9 = *(byte **)(pbVar17 + 0xe8);
    if (*(byte **)(pbVar17 + 0xe8) == (byte *)0x0) {
      pbVar9 = pbVar8;
    }
    FUN_144b1a7d1(pbVar9,uVar5,iVar13);
  }
  pbVar9 = pbVar17 + 0xf8;
  iVar13 = *(int *)(param_3 + 0x20);
  _Src = *(void **)(param_3 + 0x18);
  *(int *)(pbVar17 + 0x180) = iVar13;
  if (iVar13 == 0 && *(int *)(pbVar17 + 0x184) == 0) {
    pbVar17[0x184] = 4;
    pbVar17[0x185] = 0;
    pbVar17[0x186] = 0;
    pbVar17[0x187] = 0;
  }
  else {
    FUN_14476985c(pbVar9);
    if (iVar13 != 0) {
      pbVar8 = *(byte **)(pbVar17 + 0x178);
      if (*(byte **)(pbVar17 + 0x178) == (byte *)0x0) {
        pbVar8 = pbVar9;
      }
      memcpy(pbVar8,_Src,(longlong)iVar13 << 5);
    }
    iVar13 = *(int *)(pbVar17 + 0x180);
  }
  pbVar8 = *(byte **)(pbVar17 + 0x178);
  pbVar10 = pbVar8;
  if (pbVar8 == (byte *)0x0) {
    pbVar10 = pbVar9;
  }
  lVar16 = (longlong)iVar13;
  if (iVar13 == 0) {
    iVar11 = 0;
  }
  else {
    lVar14 = 0;
    iVar11 = 0;
    do {
      iVar11 = iVar11 + *(int *)(pbVar10 + lVar14 + 0x10);
      lVar14 = lVar14 + 0x20;
    } while (lVar16 << 5 != lVar14);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
  }
  pbVar10 = pbVar17 + 0x188;
  if (*(int *)(pbVar17 + 0x1d4) < iVar11) {
    FUN_1473702f8(pbVar10);
    pbVar8 = *(byte **)(pbVar17 + 0x178);
    iVar13 = *(int *)(pbVar17 + 0x180);
    lVar16 = (longlong)iVar13;
  }
  if (pbVar8 != (byte *)0x0) {
    pbVar9 = pbVar8;
  }
  if (iVar13 != 0) {
    lVar14 = 0;
    do {
      iVar13 = *(int *)(pbVar9 + lVar14 + 0x10);
      if (0 < iVar13) {
        iVar11 = *(int *)(pbVar17 + 0x1d0);
        FUN_14736c2da(pbVar10,*(undefined8 *)(pbVar9 + lVar14 + 8),iVar13);
        pbVar8 = *(byte **)(pbVar17 + 0x1c8);
        if (*(byte **)(pbVar17 + 0x1c8) == (byte *)0x0) {
          pbVar8 = pbVar10;
        }
        *(byte **)(pbVar9 + lVar14 + 8) = pbVar8 + (longlong)iVar11 * 0x10;
        *(int *)(pbVar9 + lVar14 + 0x10) = iVar13;
      }
      lVar14 = lVar14 + 0x20;
    } while (lVar16 * 0x20 != lVar14);
  }
  return;
}



// FUNCTION 14006d562 FUN_14006d562 body=527 status=ok
// SIG undefined FUN_14006d562(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14006d562(longlong param_1,int param_2)

{
  size_t _Size;
  uint uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  FUN_1447609e4(param_1 + 0xcf8);
  if (*(longlong *)(param_1 + 0xd10) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd00) != 0) {
    FUN_1400020a8();
  }
  lVar6 = *(longlong *)(param_1 + 0xce0);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(param_1 + 0xcf0);
    if ((longlong)(int)uVar1 != 0) {
      _Src = *(void **)(param_1 + 0xce8);
      _Size = (longlong)(int)uVar1 * 8;
      lVar5 = 0;
      do {
        FUN_140152f5c(*(undefined8 *)((longlong)_Src + lVar5),lVar6);
        lVar5 = lVar5 + 8;
      } while (_Size - lVar5 != 0);
      LOCK();
      bVar7 = DAT_14ca8c140 == '\0';
      if (bVar7) {
        DAT_14ca8c140 = '\x01';
      }
      UNLOCK();
      if (!bVar7) {
        FUN_1447d2058(&DAT_14ca8c140);
      }
      iVar2 = DAT_14ca8c180;
      lVar6 = (longlong)DAT_14ca8c180;
      iVar3 = DAT_14ca8c180 + uVar1;
      uVar4 = DAT_14ca8c184 - DAT_14ca8c180;
      DAT_14ca8c180 = iVar3;
      if (uVar4 < uVar1) {
        FUN_1400f7990(&DAT_14ca8c178,iVar2);
      }
      memcpy((void *)(lVar6 * 8 + _DAT_14ca8c178),_Src,_Size);
      LOCK();
      bVar7 = DAT_14ca8c140 == '\x01';
      if (bVar7) {
        DAT_14ca8c140 = '\0';
      }
      UNLOCK();
      if (!bVar7) {
        FUN_14008cdb0(&DAT_14ca8c140);
      }
    }
    *(undefined4 *)(param_1 + 0xcf0) = 0;
    if (*(int *)(param_1 + 0xcf4) < 0) {
      FUN_145ccb7b2(param_1 + 0xce8,0);
    }
  }
  if (*(longlong *)(param_1 + 0xce8) != 0) {
    FUN_1400020a8();
  }
  FUN_14476085a(param_1 + 0xb90);
  FUN_14006d772(param_1 + 0xb80);
  lVar6 = param_1 + 0x60;
  if (*(longlong *)(param_1 + 0xb60) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xb60);
  }
  FUN_144760828(lVar6,*(undefined4 *)(param_1 + 0xb70));
  if (*(longlong *)(param_1 + 0xb60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14006d772 FUN_14006d772 body=99 status=ok
// SIG undefined FUN_14006d772(void)

void FUN_14006d772(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006d7d6 FUN_14006d7d6 body=26 status=ok
// SIG undefined FUN_14006d7d6(void)

void FUN_14006d7d6(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14006dbd8(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
    return;
  }
  return;
}



// FUNCTION 14006d7f0 FUN_14006d7f0 body=99 status=ok
// SIG undefined FUN_14006d7f0(void)

void FUN_14006d7f0(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006d854 FUN_14006d854 body=99 status=ok
// SIG undefined FUN_14006d854(void)

void FUN_14006d854(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006d8b8 FUN_14006d8b8 body=99 status=ok
// SIG undefined FUN_14006d8b8(void)

void FUN_14006d8b8(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006d91c FUN_14006d91c body=99 status=ok
// SIG undefined FUN_14006d91c(void)

void FUN_14006d91c(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006d980 FUN_14006d980 body=99 status=ok
// SIG undefined FUN_14006d980(void)

void FUN_14006d980(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006d9e4 FUN_14006d9e4 body=99 status=ok
// SIG undefined FUN_14006d9e4(void)

void FUN_14006d9e4(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006da48 FUN_14006da48 body=99 status=ok
// SIG undefined FUN_14006da48(void)

void FUN_14006da48(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006daac FUN_14006daac body=99 status=ok
// SIG undefined FUN_14006daac(void)

void FUN_14006daac(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006db10 FUN_14006db10 body=99 status=ok
// SIG undefined FUN_14006db10(void)

void FUN_14006db10(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006db74 FUN_14006db74 body=99 status=ok
// SIG undefined FUN_14006db74(void)

void FUN_14006db74(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14006dbd8 FUN_14006dbd8 body=469 status=ok
// SIG undefined FUN_14006dbd8(void)

void FUN_14006dbd8(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14006dd08:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14006dd45:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14006dc42;
LAB_14006dc37:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14006dc42:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x00014006dc6f;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14006dcc5:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14006dd45;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14006dd08;
code_r0x00014006dc6f:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14006dcc5;
    }
  }
  goto LAB_14006dc37;
}



// FUNCTION 14006ddae FUN_14006ddae body=112 status=ok
// SIG undefined FUN_14006ddae(void)

void FUN_14006ddae(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar1);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 14006de1e FUN_14006de1e body=74 status=ok
// SIG undefined FUN_14006de1e(void)

void FUN_14006de1e(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014006de65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1,param_4);
  return;
}



// FUNCTION 14006de7a FUN_14006de7a body=44 status=ok
// SIG undefined FUN_14006de7a(void)

longlong FUN_14006de7a(longlong param_1,int param_2)

{
  FUN_14006dea6(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14006dea6 FUN_14006dea6 body=97 status=ok
// SIG undefined FUN_14006dea6(void)

void FUN_14006dea6(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2efea8;
  plVar1 = (longlong *)param_1[0x69];
  if ((plVar1 != (longlong *)0x0) && ((undefined8 *)*plVar1 == param_1)) {
    *(undefined4 *)(plVar1 + 0x53) = 0;
    if (plVar1[0x52] != 0) {
      FUN_1400020a8();
    }
    FUN_144b0e552(plVar1 + 0x4a);
    FUN_1400020a8(plVar1);
  }
  FUN_14475059c(param_1);
  return;
}



// FUNCTION 14006df08 FUN_14006df08 body=40 status=ok
// SIG undefined FUN_14006df08(void)

undefined8 FUN_14006df08(undefined8 param_1,int param_2)

{
  FUN_14006df30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14006df30 FUN_14006df30 body=792 status=ok
// SIG undefined FUN_14006df30(void)

void FUN_14006df30(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a9260f0;
  param_1[5] = &PTR_FUN_14a926ce0;
  param_1[6] = &PTR_FUN_14a926d20;
  param_1[0x55] = &PTR_FUN_14a926d70;
  param_1[0x56] = &PTR_FUN_14a926df0;
  param_1[0x57] = &PTR_FUN_14a926e00;
  param_1[0xe3] = &PTR_FUN_14a926e30;
  if (param_1[0x148] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x131];
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
  lVar4 = param_1[0x12f];
  if (lVar4 != 0) {
    (**(code **)(lVar4 + -0x10))(lVar4 + -0x10);
  }
  plVar3 = (longlong *)param_1[0x12d];
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
  if (param_1[0x129] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x121] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x118] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x116) = 0;
  if (param_1[0x115] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10e) = 0;
  if (*(int *)((longlong)param_1 + 0x874) != 0) {
    FUN_14472eb64(param_1 + 0x10d,0);
  }
  param_1[0x113] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x112) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x894)) {
    *(undefined4 *)((longlong)param_1 + 0x894) = 0x80;
    FUN_1446efbd8(param_1 + 0x10f,0);
  }
  if (param_1[0x111] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x107] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x105] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xfb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e248(param_1);
  return;
}



// FUNCTION 14006e248 FUN_14006e248 body=228 status=ok
// SIG undefined FUN_14006e248(void)

void FUN_14006e248(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a88f240;
  param_1[5] = &PTR_FUN_14a88fd40;
  param_1[6] = &PTR_FUN_14a88fd80;
  param_1[0x55] = &PTR_FUN_14a88fdd0;
  param_1[0x56] = &PTR_FUN_14a88fe50;
  param_1[0x57] = &PTR_FUN_14a88fe60;
  plVar1 = param_1 + 0xdd;
  if (*(int *)(param_1 + 0xde) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14006e2b3;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0xde) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14006e2b3:
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760d2a(param_1[0xd5],*(undefined4 *)(param_1 + 0xd6));
  if (param_1[0xd5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 14006e32c FUN_14006e32c body=149 status=ok
// SIG undefined FUN_14006e32c(void)

void FUN_14006e32c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a853bb0;
  param_1[5] = &PTR_FUN_14a854630;
  param_1[6] = &PTR_LAB_14a854670;
  param_1[0x55] = &PTR_FUN_14a8546c0;
  param_1[0x56] = &PTR_FUN_14a854740;
  param_1[0x57] = &PTR_FUN_14a854750;
  FUN_14006e3c1(param_1[200],*(undefined4 *)(param_1 + 0xc9));
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 14006e3c1 FUN_14006e3c1 body=67 status=ok
// SIG undefined FUN_14006e3c1(void)

void FUN_14006e3c1(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14006e404 FUN_14006e404 body=180 status=ok
// SIG undefined FUN_14006e404(void)

void FUN_14006e404(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a9273c0;
  plVar3 = *(longlong **)(param_1 + 0x1c8);
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
  puVar4 = *(undefined8 **)(param_1 + 0x1a0);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a924ab0;
  FUN_14006e4b8(param_1 + 0x18);
  return;
}



// FUNCTION 14006e4b8 FUN_14006e4b8 body=280 status=ok
// SIG undefined FUN_14006e4b8(void)

void FUN_14006e4b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x128);
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
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14006e5d0 FUN_14006e5d0 body=458 status=ok
// SIG undefined FUN_14006e5d0(void)

void FUN_14006e5d0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a85ebb0;
  param_1[5] = &PTR_FUN_14a85f5b0;
  param_1[6] = &PTR_LAB_14a85f5f0;
  param_1[0x55] = &PTR_FUN_14a85f640;
  param_1[0x56] = &PTR_FUN_14a85f6c0;
  param_1[0x57] = &PTR_FUN_14a85f6d0;
  FUN_144760e21(param_1[0xc1],*(undefined4 *)(param_1 + 0xc2));
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xbe],*(undefined4 *)(param_1 + 0xbf));
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xba] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0xb6];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760d56(param_1 + 0x82);
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x6f) == '\x01') {
    *(undefined1 *)(param_1 + 0x6f) = 0;
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5e));
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 14006e79a FUN_14006e79a body=183 status=ok
// SIG undefined FUN_14006e79a(void)

void FUN_14006e79a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a73f970;
  param_1[5] = &PTR_FUN_14a73ff50;
  param_1[6] = &PTR_LAB_14a73ff90;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 14006e852 FUN_14006e852 body=211 status=ok
// SIG undefined FUN_14006e852(void)

void FUN_14006e852(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a81f160;
  param_1[5] = &PTR_FUN_14a81f5e0;
  param_1[6] = &PTR_LAB_14a81f620;
  FUN_144760e21(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760f98(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14006e926 FUN_14006e926 body=236 status=ok
// SIG undefined FUN_14006e926(void)

void FUN_14006e926(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a927410;
  lVar3 = *(longlong *)(param_1 + 0x1e8);
  if (lVar3 != 0) {
    FUN_14006ea12(lVar3);
    FUN_1400020a8(lVar3);
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a9273c0;
  plVar4 = *(longlong **)(param_1 + 0x1c8);
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
  puVar5 = *(undefined8 **)(param_1 + 0x1a0);
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a924ab0;
  FUN_14006e4b8(param_1 + 0x18);
  return;
}



// FUNCTION 14006ea12 FUN_14006ea12 body=99 status=ok
// SIG undefined FUN_14006ea12(void)

void FUN_14006ea12(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014006ea6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14006ea76 FUN_14006ea76 body=90 status=ok
// SIG undefined FUN_14006ea76(void)

void FUN_14006ea76(longlong param_1)

{
  longlong lVar1;
  
  FUN_14006eb32();
  FUN_140296a12(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  FUN_147ba50d2(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14006ead0 FUN_14006ead0 body=98 status=ok
// SIG undefined FUN_14006ead0(void)

void FUN_14006ead0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_14006ea12(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14006eb32 FUN_14006eb32 body=1242 status=ok
// SIG undefined FUN_14006eb32(void)

void FUN_14006eb32(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = *(longlong **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_147a3afd8(param_1 + 0x30,0);
  }
  if (plVar4 == (longlong *)0x0) goto LAB_14006ec87;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14006eb94;
    if (iVar7 != 1) goto LAB_14006eb8f;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14006eb94;
  }
  else {
LAB_14006eb8f:
    if (iVar7 == 0x10) goto LAB_14006eb94;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_14006eb94:
      (**(code **)(*plVar4 + 0x20))(plVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14006eb94;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14006ed49;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_1434a3d89);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_14006ed49:
      puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar17 + 0x16);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_14006edc9;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14006edc9:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar17,0);
    *puVar17 = &PTR_FUN_14a899e78;
    puVar17[0x15] = plVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar16 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar16 = 5;
    }
    if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
    }
    puVar17[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar17[9] = puVar17;
    puVar17[10] = puVar17;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar16 != '\x06') {
        uVar6 = uVar16;
      }
      uVar16 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar17[0xf] = uVar12;
    puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar17 + 0x1c) = iVar7;
    if (puVar17 == (undefined8 *)0x0) {
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14a899e10;
    local_68[0] = FUN_1434a5d7a;
    local_40 = plVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FStaticMeshComponentLODInfoCleanUp",&DAT_14cad3b90);
    if (local_68[0] != (code *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_14006ec87:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14006f026 FUN_14006f026 body=89 status=ok
// SIG undefined FUN_14006f026(void)

longlong FUN_14006f026(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  *(uint *)(param_1 + 0xf8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xfc) < iVar1 + 1U) {
    FUN_14798a77e(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x78 + lVar2;
  FUN_14006f07f(lVar2,1);
  return lVar2;
}



// FUNCTION 14006f07f FUN_14006f07f body=59 status=ok
// SIG undefined FUN_14006f07f(void)

void FUN_14006f07f(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    do {
      *puVar1 = 0;
      puVar1[1] = 0x600000000;
      puVar1[3] = 0;
      *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xfe;
      *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14006f0ba FUN_14006f0ba body=462 status=ok
// SIG undefined FUN_14006f0ba(void)

bool FUN_14006f0ba(wchar_t *param_1,int param_2,wchar_t *param_3,uint param_4,undefined1 param_5,
                  int param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (param_3 == (wchar_t *)0x0 || param_1 == (wchar_t *)0x0) {
    return false;
  }
  if (param_6 == 0) {
    switch(param_5) {
    case 0:
      iVar4 = wcscmp(param_1,param_3);
      goto LAB_14006f268;
    case 1:
      pwVar6 = wcsstr(param_1,param_3);
      goto LAB_14006f278;
    case 2:
      if ((int)param_4 < 0) {
        sVar5 = wcslen(param_3);
        param_4 = (uint)sVar5;
      }
      if ((int)param_4 < 1) {
        return false;
      }
      sVar5 = (size_t)param_4;
      break;
    case 3:
      if (param_2 < 0) {
        sVar5 = wcslen(param_1);
        param_2 = (int)sVar5;
      }
      if ((int)param_4 < 0) {
        sVar5 = wcslen(param_3);
        param_4 = (uint)sVar5;
      }
      if (param_2 < (int)param_4 || param_2 < 1) {
        return false;
      }
      sVar5 = (size_t)(int)param_4;
      param_1 = param_1 + (int)(param_2 - param_4);
      break;
    default:
      goto LAB_14006f27e;
    }
    iVar4 = wcsncmp(param_1,param_3,sVar5);
  }
  else {
    switch(param_5) {
    case 0:
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)param_1 + lVar7);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)param_3 + lVar7);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14006f128;
          }
          iVar4 = uVar3 - uVar8;
          goto LAB_14006f268;
        }
        if (uVar1 == 0) break;
LAB_14006f128:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
      goto LAB_14006f268;
    case 1:
      pwVar6 = (wchar_t *)FUN_1448324a4(param_1,param_3);
LAB_14006f278:
      return pwVar6 != (wchar_t *)0x0;
    case 2:
      if ((int)param_4 < 0) {
        sVar5 = wcslen(param_3);
        param_4 = (uint)sVar5;
      }
      if ((int)param_4 < 1) {
        return false;
      }
      uVar9 = (ulonglong)param_4;
      break;
    case 3:
      if (param_2 < 0) {
        sVar5 = wcslen(param_1);
        param_2 = (int)sVar5;
      }
      if ((int)param_4 < 0) {
        sVar5 = wcslen(param_3);
        param_4 = (uint)sVar5;
      }
      if (param_2 < (int)param_4 || param_2 < 1) {
        return false;
      }
      uVar9 = (ulonglong)(int)param_4;
      param_1 = param_1 + (int)(param_2 - param_4);
      break;
    default:
LAB_14006f27e:
      return false;
    }
    iVar4 = FUN_144a54874(param_1,param_3,uVar9);
  }
LAB_14006f268:
  return iVar4 == 0;
}



// FUNCTION 14006f288 FUN_14006f288 body=38 status=ok
// SIG undefined FUN_14006f288(void)

undefined8 FUN_14006f288(undefined8 param_1,int param_2)

{
  FUN_14006f2ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14006f2ae FUN_14006f2ae body=129 status=ok
// SIG undefined FUN_14006f2ae(void)

void FUN_14006f2ae(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a1ca300;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 14006f358 FUN_14006f358 body=101 status=ok
// SIG undefined FUN_14006f358(void)

void FUN_14006f358(longlong *param_1,int param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)param_2 * 8);
  FUN_14006f3bd(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 14006f3bd FUN_14006f3bd body=49 status=ok
// SIG undefined FUN_14006f3bd(void)

void FUN_14006f3bd(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14006f3ee FUN_14006f3ee body=284 status=ok
// SIG undefined FUN_14006f3ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14006f3ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4f450) {
    FUN_144b3d300(&DAT_14ca4f450);
    if (DAT_14ca4f450 == -1) {
      FUN_1456c0fa6();
      FUN_140db5666(&DAT_14ca4f3a8,2,&DAT_14ca4f340,
                    L"TShadowDepthPSPixelShadowDepth_NonPerspectiveCorrect",
                    L"/Engine/Private/ShadowDepthPixelShader.usf",L"Main",3,1,FUN_1472ed6a0,
                    FUN_1472ed678,&LAB_143043096,&LAB_1472ed674,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14ca4f3a8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430430db);
      _Init_thread_footer(&DAT_14ca4f450);
    }
  }
  return &DAT_14ca4f3a8;
}



// FUNCTION 14006f50a FUN_14006f50a body=284 status=ok
// SIG undefined FUN_14006f50a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14006f50a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4f328) {
    FUN_144b3d300(&DAT_14ca4f328);
    if (DAT_14ca4f328 == -1) {
      FUN_1456c0e52();
      FUN_140db5666(&DAT_14ca4f280,2,&DAT_14ca4f218,
                    L"TShadowDepthVSVertexShadowDepth_VirtualShadowMapPositionOnly",
                    L"/Engine/Private/ShadowDepthVertexShader.usf",L"PositionOnlyMain",0,1,
                    FUN_1472ed574,FUN_1472ed54c,FUN_14178141c,&LAB_1472ed548,&LAB_14712ac0c,
                    &LAB_14712ac08,0x118,0);
      _DAT_14ca4f280 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143043089);
      _Init_thread_footer(&DAT_14ca4f328);
    }
  }
  return &DAT_14ca4f280;
}



// FUNCTION 14006f626 FUN_14006f626 body=247 status=ok
// SIG undefined FUN_14006f626(void)

ulonglong FUN_14006f626(uint param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97030) {
    FUN_144b3d300(&DAT_14ca97030);
    if (DAT_14ca97030 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.Shadow.DetectVertexShaderLayerAtRuntime",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97028 = 0;
      }
      else {
        DAT_14ca97028 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca97030);
    }
  }
  lVar1 = DAT_14ca97028;
  uVar3 = CONCAT71((int7)(((ulonglong)param_1 & 0xffff) >> 8),1);
  if ((*(byte *)((longlong)&DAT_14ca814d0 + ((ulonglong)param_1 & 0xffff) * 0x3c + 7) & 4) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    uVar3 = (ulonglong)(*(int *)(lVar1 + uVar3 * 4) != 0 & DAT_14ca84f58);
  }
  return uVar3;
}



// FUNCTION 14006f71e FUN_14006f71e body=284 status=ok
// SIG undefined FUN_14006f71e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14006f71e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4f578) {
    FUN_144b3d300(&DAT_14ca4f578);
    if (DAT_14ca4f578 == -1) {
      FUN_1456c1248();
      FUN_140db5666(&DAT_14ca4f4d0,2,&DAT_14ca4f468,
                    L"TShadowDepthPSPixelShadowDepth_PerspectiveCorrect",
                    L"/Engine/Private/ShadowDepthPixelShader.usf",L"Main",3,1,FUN_1472ed7c4,
                    FUN_1472ed79c,FUN_1430430e8,&LAB_1472ed798,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca4f4d0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143043143);
      _Init_thread_footer(&DAT_14ca4f578);
    }
  }
  return &DAT_14ca4f4d0;
}



// FUNCTION 14006f83a FUN_14006f83a body=284 status=ok
// SIG undefined FUN_14006f83a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14006f83a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4ed60) {
    FUN_144b3d300(&DAT_14ca4ed60);
    if (DAT_14ca4ed60 == -1) {
      FUN_1456c07ae();
      FUN_140db5666(&DAT_14ca4ecb8,2,&DAT_14ca4ec50,
                    L"TShadowDepthVSVertexShadowDepth_OnePassPointLight",
                    L"/Engine/Private/ShadowDepthVertexShader.usf",L"Main",0,1,FUN_1472ece7c,
                    FUN_1472ece54,FUN_141780b78,&LAB_1472ece50,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca4ecb8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_14304304d);
      _Init_thread_footer(&DAT_14ca4ed60);
    }
  }
  return &DAT_14ca4ecb8;
}



// FUNCTION 14006f956 FUN_14006f956 body=284 status=ok
// SIG undefined FUN_14006f956(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14006f956(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4eb10) {
    FUN_144b3d300(&DAT_14ca4eb10);
    if (DAT_14ca4eb10 == -1) {
      FUN_1456c03b2();
      FUN_140db5666(&DAT_14ca4ea68,2,&DAT_14ca4ea00,
                    L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrect",
                    L"/Engine/Private/ShadowDepthVertexShader.usf",L"Main",0,1,FUN_1472ecb08,
                    FUN_1472ecae0,FUN_141780738,&LAB_1472ecadc,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca4ea68 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143043035);
      _Init_thread_footer(&DAT_14ca4eb10);
    }
  }
  return &DAT_14ca4ea68;
}



// FUNCTION 14006fa72 FUN_14006fa72 body=284 status=ok
// SIG undefined FUN_14006fa72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14006fa72(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4f6a0) {
    FUN_144b3d300(&DAT_14ca4f6a0);
    if (DAT_14ca4f6a0 == -1) {
      FUN_1456c139c();
      FUN_140db5666(&DAT_14ca4f5f8,2,&DAT_14ca4f590,
                    L"TShadowDepthPSPixelShadowDepth_OnePassPointLight",
                    L"/Engine/Private/ShadowDepthPixelShader.usf",L"Main",3,1,FUN_1472ed8e8,
                    FUN_1472ed8c0,FUN_143043150,&LAB_1472ed8bc,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca4f5f8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430431c0);
      _Init_thread_footer(&DAT_14ca4f6a0);
    }
  }
  return &DAT_14ca4f5f8;
}



// FUNCTION 14006fb8e FUN_14006fb8e body=284 status=ok
// SIG undefined FUN_14006fb8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14006fb8e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4f200) {
    FUN_144b3d300(&DAT_14ca4f200);
    if (DAT_14ca4f200 == -1) {
      FUN_1456c0cfe();
      FUN_140db5666(&DAT_14ca4f158,2,&DAT_14ca4f0f0,
                    L"TShadowDepthVSVertexShadowDepth_OnePassPointLightPositionOnly",
                    L"/Engine/Private/ShadowDepthVertexShader.usf",L"PositionOnlyMain",0,1,
                    FUN_1472ed448,FUN_1472ed420,FUN_1417811e6,&LAB_1472ed41c,&LAB_14712ac0c,
                    &LAB_14712ac08,0x118,0);
      _DAT_14ca4f158 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_14304307d);
      _Init_thread_footer(&DAT_14ca4f200);
    }
  }
  return &DAT_14ca4f158;
}



// FUNCTION 14006fcaa FUN_14006fcaa body=284 status=ok
// SIG undefined FUN_14006fcaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14006fcaa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4f0d8) {
    FUN_144b3d300(&DAT_14ca4f0d8);
    if (DAT_14ca4f0d8 == -1) {
      FUN_1456c0baa();
      FUN_140db5666(&DAT_14ca4f030,2,&DAT_14ca4efc8,
                    L"TShadowDepthVSVertexShadowDepth_OutputDepthPositionOnly",
                    L"/Engine/Private/ShadowDepthVertexShader.usf",L"PositionOnlyMain",0,1,
                    FUN_1472ed31c,FUN_1472ed2f4,FUN_141780fe0,&LAB_1472ed2f0,&LAB_14712ac0c,
                    &LAB_14712ac08,0x118,0);
      _DAT_14ca4f030 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143043071);
      _Init_thread_footer(&DAT_14ca4f0d8);
    }
  }
  return &DAT_14ca4f030;
}



// FUNCTION 14006fdc6 FUN_14006fdc6 body=284 status=ok
// SIG undefined FUN_14006fdc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14006fdc6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4efb0) {
    FUN_144b3d300(&DAT_14ca4efb0);
    if (DAT_14ca4efb0 == -1) {
      FUN_1456c0a56();
      FUN_140db5666(&DAT_14ca4ef08,2,&DAT_14ca4eea0,
                    L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrectPositionOnly",
                    L"/Engine/Private/ShadowDepthVertexShader.usf",L"PositionOnlyMain",0,1,
                    FUN_1472ed1f0,FUN_1472ed1c8,FUN_141780db2,&LAB_1472ed1c4,&LAB_14712ac0c,
                    &LAB_14712ac08,0x118,0);
      _DAT_14ca4ef08 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143043065);
      _Init_thread_footer(&DAT_14ca4efb0);
    }
  }
  return &DAT_14ca4ef08;
}



// FUNCTION 14006fee2 FUN_14006fee2 body=200 status=ok
// SIG undefined FUN_14006fee2(void)

void FUN_14006fee2(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x18))();
  if ((*(byte *)((longlong)param_1 + 0xac) & 1) == 0) {
    (**(code **)(*param_1 + 0x70))(param_1);
    LOCK();
    bVar1 = DAT_14caec5e8 == '\0';
    if (bVar1) {
      DAT_14caec5e8 = '\x01';
    }
    UNLOCK();
    if (!bVar1) {
      FUN_1447d2058(&DAT_14caec5e8);
    }
    local_30 = param_1;
    FUN_144ae63ce(&DAT_14caec598,local_34,&local_30,0);
    LOCK();
    bVar1 = DAT_14caec5e8 == '\x01';
    if (bVar1) {
      DAT_14caec5e8 = '\0';
    }
    UNLOCK();
    if (!bVar1) {
      FUN_14008cdb0(&DAT_14caec5e8);
    }
    FUN_1447a4a8e(param_1,param_3);
    if (DAT_14c7615c0 == 0) {
      FUN_140eb1606(param_2,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14006ffac FUN_14006ffac body=493 status=ok
// SIG undefined FUN_14006ffac(void)

void FUN_14006ffac(longlong param_1,uint *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  
  FUN_1447a4a8e(param_1,0);
  plVar1 = (longlong *)(param_1 + 0x140);
  uVar4 = *param_2;
  if (*(int *)(param_1 + 0x158) == 0) {
    uVar12 = param_2[2];
  }
  else {
    uVar12 = param_2[2];
    iVar8 = (uVar4 << 0x10 | uVar4 & 0xffff) + ((uVar4 & 0xffff) >> 4) +
            ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + uVar12;
    uVar9 = ~(iVar8 * 0x8000) + iVar8;
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = ~(uVar9 << 0xb) + uVar9;
    uVar11 = (ulonglong)
             *(ushort *)
              (*(longlong *)(param_1 + 0x150) +
              (longlong)(int)(*(int *)(param_1 + 0x158) - 1U & ((int)uVar9 >> 0x10 ^ uVar9)) * 2);
    if (uVar11 != 0) {
      uVar11 = uVar11 + 0xffffffff;
      lVar10 = *plVar1;
      do {
        uVar11 = uVar11 & 0xffffffff;
        if ((((*(uint *)(lVar10 + uVar11 * 0x14) == uVar4) &&
             (*(uint *)(lVar10 + 8 + uVar11 * 0x14) == uVar12)) &&
            (lVar6 = lVar10 + uVar11 * 0x14, param_2[3] == (int)*(short *)(lVar6 + 0xc))) &&
           (*(ushort *)(lVar6 + 0xe) >> 0xe == (ushort)(byte)param_2[4])) {
          *(undefined4 *)(lVar10 + 0x10 + uVar11 * 0x14) = *param_3;
          return;
        }
        uVar3 = *(ushort *)(lVar10 + 0xe + uVar11 * 0x14);
        uVar11 = (ulonglong)uVar3 & 0x3fff;
      } while ((uVar3 & 0x3fff) != 0);
    }
  }
  uVar9 = param_2[1];
  uVar7 = param_2[3];
  uVar5 = param_2[4];
  uVar2 = *param_3;
  iVar8 = *(int *)(param_1 + 0x148);
  lVar10 = (longlong)iVar8;
  *(uint *)(param_1 + 0x148) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x14c) < iVar8 + 1U) {
    FUN_1417dfb26(plVar1,iVar8);
  }
  lVar6 = *(longlong *)(param_1 + 0x140);
  *(uint *)(lVar6 + lVar10 * 0x14) = uVar4;
  *(uint *)(lVar6 + 4 + lVar10 * 0x14) = uVar9;
  *(uint *)(lVar6 + 8 + lVar10 * 0x14) = uVar12;
  *(short *)(lVar6 + 0xc + lVar10 * 0x14) = (short)uVar7;
  *(short *)(lVar6 + 0xe + lVar10 * 0x14) = (short)(uVar5 << 0xe);
  *(undefined4 *)(lVar6 + 0x10 + lVar10 * 0x14) = uVar2;
  uVar4 = *(uint *)(param_1 + 0x148);
  iVar8 = 1;
  if (3 < uVar4) {
    uVar11 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = 1 << ((byte)lVar10 & 0x1f);
  }
  if (iVar8 != *(int *)(param_1 + 0x158)) {
    FUN_14008eb94(plVar1,iVar8);
    return;
  }
  FUN_14008ec6e(plVar1,uVar4 - 1);
  return;
}



// FUNCTION 14007019a FUN_14007019a body=212 status=ok
// SIG undefined FUN_14007019a(void)

undefined8 * FUN_14007019a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ade2d80;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_14476820c(param_1 + 0x1e);
  FUN_14476820c(param_1 + 0x18);
  FUN_14476820c(param_1 + 0x12);
  FUN_14476820c(param_1 + 0xc);
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14007026e FUN_14007026e body=101 status=ok
// SIG undefined FUN_14007026e(void)

undefined8 FUN_14007026e(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  if ((param_2 != 0xffffffff) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    uVar3 = *(uint *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      while (puVar1 = (uint *)(*param_1 + (longlong)(int)uVar3 * 0x18), *puVar1 != param_2) {
        uVar3 = puVar1[4];
        if (uVar3 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 == (uint *)0x0) {
        return 0;
      }
      if (puVar1 + 2 == (uint *)0x0) {
        return 0;
      }
      return *(undefined8 *)(puVar1 + 2);
    }
  }
  return 0;
}



// FUNCTION 1400702d4 FUN_1400702d4 body=1285 status=ok
// SIG undefined FUN_1400702d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1400702d4(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58 [2];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa8238) && (FUN_144b3d300(&DAT_14caa8238), DAT_14caa8238 == -1)) {
    FUN_1432721ec(&DAT_14caa81e8);
    atexit(FUN_143272a51);
    _Init_thread_footer(&DAT_14caa8238);
  }
  uVar7 = (uint)param_3;
  iVar8 = (int)((ulonglong)param_3 >> 0x20);
  uVar2 = (uint)((ulonglong)param_3 >> 0x10);
  if (DAT_14caa81f0 != DAT_14caa821c) {
    uVar9 = iVar8 + (uVar7 << 0x10 | uVar7 & 0xffff) + (uVar2 << 0x13 | uVar2 & 0xffff) +
            ((uVar7 & 0xffff) >> 4);
    puVar6 = &DAT_14caa8220;
    if (DAT_14caa8228 != (undefined *)0x0) {
      puVar6 = DAT_14caa8228;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(DAT_14caa8230 - 1U & uVar9) * 4);
    while (iVar4 != -1) {
      plVar1 = (longlong *)(DAT_14caa81e8 + (longlong)iVar4 * 0x18);
      if (*plVar1 == param_3) {
        if (plVar1 != (longlong *)0x0) {
          if (*(int *)(param_1 + 0x130) == *(int *)(param_1 + 0x15c)) goto LAB_1400705da;
          lVar3 = plVar1[1];
          uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar7 = (uint)lVar3 & 0xffff;
          lVar5 = param_1 + 0x160;
          if (*(longlong *)(param_1 + 0x168) != 0) {
            lVar5 = *(longlong *)(param_1 + 0x168);
          }
          iVar8 = *(int *)(lVar5 + (ulonglong)
                                   (*(int *)(param_1 + 0x170) - 1U &
                                   (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
          if (iVar8 == -1) goto LAB_1400705da;
          goto LAB_1400705be;
        }
        break;
      }
      iVar4 = (int)plVar1[2];
    }
  }
  if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
    lVar3 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x168);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x170) - 1U &
                             iVar8 + (uVar7 << 0x10 | uVar7 & 0xffff) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar7 & 0xffff) >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar4 * 0x20) == param_3) {
          *param_2 = param_3;
          goto LAB_14007050d;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x128) + 0x18);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caa83f8) && (FUN_144b3d300(&DAT_14caa83f8), DAT_14caa83f8 == -1)) {
      DAT_14caa83c8 = 0;
      _DAT_14caa83d0 = 0;
      DAT_14caa83a8 = 0;
      _DAT_14caa83b0 = 0;
      _DAT_14caa83d4 = 0xffffffff00000080;
      DAT_14caa83dc = 0;
      DAT_14caa83e8 = (undefined *)0x0;
      DAT_14caa83f0 = 0;
      atexit(FUN_143274645);
      _Init_thread_footer(&DAT_14caa83f8);
    }
    if (DAT_14caa83b0 != DAT_14caa83dc) {
      puVar6 = &DAT_14caa83e0;
      if (DAT_14caa83e8 != (undefined *)0x0) {
        puVar6 = DAT_14caa83e8;
      }
      for (iVar8 = *(int *)(puVar6 + (ulonglong)
                                     (DAT_14caa83f0 - 1U &
                                     iVar8 + (uVar7 << 0x10 | uVar7 & 0xffff) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar7 & 0xffff) >> 4)) * 4
                           ); iVar8 != -1;
          iVar8 = *(int *)((longlong)iVar8 * 0x10 + DAT_14caa83a8 + 8)) {
        if (*(longlong *)(DAT_14caa83a8 + (longlong)iVar8 * 0x10) == param_3) goto LAB_140070506;
      }
    }
    FUN_144a13f80(&DAT_14caa83a8,local_58,&local_48,0);
  }
LAB_140070506:
  *param_2 = 0;
LAB_14007050d:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar8 = *(int *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x128) + 0x18),
        iVar8 != -1) {
LAB_1400705be:
    if (*(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar8 * 0x20) == lVar3) {
      *param_2 = lVar3;
      goto LAB_14007050d;
    }
  }
LAB_1400705da:
  if (param_4 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caa83a0) && (FUN_144b3d300(&DAT_14caa83a0), DAT_14caa83a0 == -1)) {
      DAT_14caa8370 = 0;
      _DAT_14caa8378 = 0;
      DAT_14caa8350 = 0;
      _DAT_14caa8358 = 0;
      _DAT_14caa837c = 0xffffffff00000080;
      DAT_14caa8384 = 0;
      DAT_14caa8390 = (undefined *)0x0;
      DAT_14caa8398 = 0;
      atexit(FUN_14327459c);
      _Init_thread_footer(&DAT_14caa83a0);
    }
    if (DAT_14caa8358 != DAT_14caa8384) {
      puVar6 = &DAT_14caa8388;
      if (DAT_14caa8390 != (undefined *)0x0) {
        puVar6 = DAT_14caa8390;
      }
      for (iVar8 = *(int *)(puVar6 + (ulonglong)(DAT_14caa8398 - 1U & uVar9) * 4); iVar8 != -1;
          iVar8 = *(int *)((longlong)iVar8 * 0x10 + DAT_14caa8350 + 8)) {
        if (*(longlong *)(DAT_14caa8350 + (longlong)iVar8 * 0x10) == param_3) goto LAB_140070506;
      }
    }
    local_60 = plVar1[1];
    FUN_1400021e4(&local_60,local_58);
    FUN_144a13f80(&DAT_14caa8350,&local_60,&local_48,0);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  goto LAB_140070506;
}



// FUNCTION 1400707e6 FUN_1400707e6 body=128 status=ok
// SIG undefined FUN_1400707e6(void)

void FUN_1400707e6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_14103c432(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 + *param_1),0,(ulonglong)uVar2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146d9d3aa(param_1);
    return;
  }
  return;
}



// FUNCTION 140070866 FUN_140070866 body=45 status=ok
// SIG undefined FUN_140070866(void)

bool FUN_140070866(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_140070894(param_3);
  if (lVar1 == 0) {
    bVar2 = *(char *)(param_1 + 0x10) == '\0';
  }
  else {
    bVar2 = *(char *)(lVar1 + 0xe39) == *(char *)(param_1 + 0x10);
  }
  return bVar2;
}



// FUNCTION 140070894 FUN_140070894 body=271 status=ok
// SIG undefined FUN_140070894(void)

longlong FUN_140070894(void)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cbbd498 == 0) {
      local_30 = &local_18;
      local_18 = FUN_140940982;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146572ba2;
      local_38 = &LAB_148ca13ba;
      local_40 = &LAB_140e51436;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) goto LAB_1400708df;
  }
  lVar1 = 0;
LAB_1400708df:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400709a4 FUN_1400709a4 body=48 status=ok
// SIG undefined FUN_1400709a4(void)

longlong FUN_1400709a4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = param_2;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
  }
  FUN_1400709d4(param_1,lVar1,*(undefined4 *)(param_2 + 0x38),0);
  return param_1;
}



// FUNCTION 1400709d4 FUN_1400709d4 body=86 status=ok
// SIG undefined FUN_1400709d4(void)

void FUN_1400709d4(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x38) = param_3;
  if (param_4 != 0 || param_3 != 0) {
    FUN_140070a56(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar1 = param_1;
    }
    FUN_140070a2a(lVar1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = 2;
  return;
}



// FUNCTION 140070a2a FUN_140070a2a body=44 status=ok
// SIG undefined FUN_140070a2a(void)

void FUN_140070a2a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140070a56 FUN_140070a56 body=327 status=ok
// SIG undefined FUN_140070a56(void)

void FUN_140070a56(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 2;
    if (2 < param_2) {
      uVar4 = (longlong)(int)param_2 * 0x18;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar1 = uVar4 + 0xf;
          if (uVar4 < 0x7ff1) {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
          }
          else {
            if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
              bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
              uVar6 = 0x32;
              if (0x32 < bVar3) {
                uVar6 = (ulonglong)bVar3;
              }
              uVar8 = 0x32 - (ulonglong)bVar3;
              do {
                uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140070af2;
                lVar2 = uVar6 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar2 != 0x33);
            }
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
LAB_140070af2:
      iVar5 = (int)(uVar4 / 0x18);
      iVar7 = 0x7fffffff;
      if ((int)param_2 <= iVar5) {
        iVar7 = iVar5;
      }
    }
  }
  if (param_3 < iVar7) {
    FUN_140070b9e(param_1,0,iVar7);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0x3c) = param_3;
  return;
}



// FUNCTION 140070b9e FUN_140070b9e body=139 status=ok
// SIG undefined FUN_140070b9e(void)

void FUN_140070b9e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x18);
  return;
}



// FUNCTION 140070c2a FUN_140070c2a body=666 status=ok
// SIG undefined FUN_140070c2a(void)

bool FUN_140070c2a(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8) = *(undefined4 *)(param_1 + 0x18);
    lVar11 = DAT_14ca77418;
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14ca77418 + 0xa0);
    EnterCriticalSection(lpCriticalSection);
    iVar1 = *(int *)(lVar11 + 0xd0);
    *(uint *)(lVar11 + 0xd0) = iVar1 + 1U;
    if (*(uint *)(lVar11 + 0xd4) < iVar1 + 1U) {
      FUN_1449031f2((longlong *)(lVar11 + 200),iVar1);
    }
    lVar11 = *(longlong *)(lVar11 + 200);
    lVar10 = (longlong)iVar1 * 0x30;
    *(undefined4 *)(lVar11 + lVar10) = 7;
    *(undefined8 *)(lVar11 + 8 + lVar10) = uVar12;
    *(longlong *)(lVar11 + 0x10 + lVar10) = lVar4 + 0x8f0;
    LeaveCriticalSection(lpCriticalSection);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x920));
  lVar11 = **(longlong **)(lVar4 + 0x918);
  if (lVar11 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(lVar11 + 8);
    lVar10 = *(longlong *)(lVar4 + 0x918);
    *(longlong *)(lVar4 + 0x918) = lVar11;
    *(undefined8 *)(lVar11 + 8) = 0;
    if (lVar10 != 0) {
      FUN_1400020a8();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x920));
  *(undefined8 *)(param_1 + 0x28) = uVar12;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    piVar5 = (int *)(puVar9 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  piVar5 = *(int **)(param_1 + 0x28);
  if (piVar5 == (int *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(lVar4 + 0x48) == 0) {
      lVar11 = FUN_14001cc68(0x70,0x10);
      FUN_1411d0ff6(lVar11,lVar4,*(undefined8 *)(lVar4 + 0x18));
      *(longlong *)(lVar4 + 0x48) = lVar11;
      if (lVar11 == 0) goto LAB_140070e9b;
      FUN_1411d0dea(lVar11,*(undefined4 *)(lVar4 + 0x134),0);
    }
    (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x20))();
    *(longlong **)(lVar4 + 0x38) = *(longlong **)(lVar4 + 0x48);
    (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x18))();
    FUN_140039a1a(lVar4,0);
  }
  else {
    puVar9 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    iVar1 = *piVar5;
    iVar2 = piVar5[1];
    cVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8) + 8))
                      (*(longlong *)(param_1 + 0x38) + 0x1c8);
    lVar4 = *(longlong *)(lVar4 + 0x8f8 + (ulonglong)(cVar8 == '\x02') * 8);
    puVar9[2] = *(undefined8 *)(lVar4 + 0x10);
    *puVar9 = &PTR_FUN_149e002e8;
    *(undefined4 *)(puVar9 + 1) = 0;
    *puVar9 = &PTR_FUN_14a3498c8;
    plVar6 = *(longlong **)(lVar4 + 0x18);
    puVar9[3] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    uVar3 = *(uint *)(lVar4 + 0x38);
    lVar11 = (ulonglong)uVar3 * (longlong)iVar1;
    puVar9[4] = *(longlong *)(lVar4 + 0x20) + lVar11;
    puVar9[5] = lVar11 + *(longlong *)(lVar4 + 0x28);
    *(int *)(puVar9 + 6) = iVar1;
    *(int *)((longlong)puVar9 + 0x34) = iVar2;
    *(uint *)(puVar9 + 7) = uVar3;
    *(undefined1 *)((longlong)puVar9 + 0x3c) = *(undefined1 *)(lVar4 + 0x3c);
    *(undefined1 *)((longlong)puVar9 + 0x3d) = *(undefined1 *)(lVar4 + 0x3d);
    *(undefined1 *)((longlong)puVar9 + 0x3e) = *(undefined1 *)(lVar4 + 0x3e);
    *(undefined1 *)((longlong)puVar9 + 0x3f) = 1;
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    if (puVar7 != puVar9) {
      *(undefined8 **)(param_1 + 0x10) = puVar9;
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
        UNLOCK();
      }
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar5 = (int *)(puVar7 + 1);
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (*piVar5 == 0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
  }
LAB_140070e9b:
  return *(longlong *)(param_1 + 0x28) != 0;
}



// FUNCTION 140070ec4 FUN_140070ec4 body=1088 status=ok
// SIG undefined FUN_140070ec4(void)

void FUN_140070ec4(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined *puVar12;
  ulonglong uVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 auStack_88 [44];
  int local_5c;
  uint *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if ((DAT_14c949800 & 1) == 0) {
LAB_140070f4f:
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_14c964408;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar9 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar9 != 2)) {
      if (iVar9 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_140071082;
      }
      goto LAB_140070f4f;
    }
LAB_140071082:
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  FUN_14472eae2(param_1,0x10000000);
  if (DAT_14c964628 != DAT_14c964654) {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar12 = &DAT_14c964658;
    if (DAT_14c964660 != (undefined *)0x0) {
      puVar12 = DAT_14c964660;
    }
    iVar9 = *(int *)(puVar12 + (ulonglong)(DAT_14c964668 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    while (iVar9 != -1) {
      lVar10 = (longlong)iVar9;
      if (*(longlong **)(DAT_14c964620 + lVar10 * 0x18) == param_1) {
        uVar17 = *(ulonglong *)(DAT_14c964620 + 8 + lVar10 * 0x18);
        FUN_14690368a(&DAT_14c964620);
        if (uVar17 != 0) {
          uVar3 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          local_50 = uVar17;
          plVar7 = (longlong *)FUN_14690317c(&DAT_14c9645d0,uVar3 >> 0x10 ^ uVar3);
          plVar1 = (longlong *)plVar7[1];
          if ((longlong *)*plVar7 != (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            if (plVar1 != param_1) {
              if ((longlong *)*plVar7 != param_1) goto LAB_1400712a4;
              *plVar7 = (longlong)plVar1;
            }
            plVar7[1] = 0;
            goto LAB_1400712ac;
          }
          local_5c = FUN_144b00eaa(plVar1);
          if (2 < (int)plVar1[1] - *(int *)((longlong)plVar1 + 0x34)) goto LAB_14007129d;
          local_58 = (uint *)(plVar1 + 2);
          iVar9 = (int)plVar1[5];
          uVar3 = 0xfffffffe;
          if (iVar9 == 0) {
            iVar14 = 0;
            iVar9 = 0;
            iVar11 = 0;
            goto LAB_1400711e4;
          }
          puVar16 = (uint *)plVar1[4];
          if ((uint *)plVar1[4] == (uint *)0x0) {
            puVar16 = local_58;
          }
          uVar6 = *puVar16;
          if (uVar6 != 0) {
            iVar14 = 0;
            iVar15 = 0;
            goto LAB_1400711b1;
          }
          iVar11 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar11 = iVar9 + -1;
          }
          uVar13 = 0;
          uVar17 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar17 = uVar13;
          }
          iVar14 = (int)uVar17 + 1;
          iVar15 = 0;
          goto LAB_140071199;
        }
        break;
      }
      iVar9 = *(int *)(DAT_14c964620 + lVar10 * 0x18 + 0x10);
    }
  }
LAB_140070f7d:
  if (!bVar2) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    iVar15 = iVar15 + 0x20;
    uVar6 = puVar16[uVar13 + 1];
    uVar13 = uVar13 + 1;
    if (uVar6 != 0) break;
LAB_140071199:
    iVar11 = (int)uVar17 * 0x20 + 0x20;
    if (uVar17 == uVar13) goto LAB_1400711e4;
  }
  iVar14 = (int)uVar13;
LAB_1400711b1:
  uVar17 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
  lVar10 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  iVar11 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
  if (iVar11 < iVar9) {
    iVar9 = iVar11;
  }
  uVar3 = ~(-uVar6 & uVar6);
  iVar11 = iVar15;
LAB_1400711e4:
  *plVar7 = *(longlong *)(*plVar1 + (longlong)iVar9 * 0x10);
  puVar16 = local_58;
  if ((uint *)plVar1[4] != (uint *)0x0) {
    puVar16 = (uint *)plVar1[4];
  }
  iVar9 = (int)plVar1[5];
  lVar10 = (longlong)iVar14;
  uVar3 = uVar3 & puVar16[lVar10];
  if (uVar3 == 0) {
    iVar15 = iVar9 + 0x1e;
    if (-1 < iVar9 + -1) {
      iVar15 = iVar9 + -1;
    }
    iVar8 = iVar15 >> 5;
    if (iVar15 >> 5 < iVar14) {
      iVar8 = iVar14;
    }
    do {
      if (iVar8 == lVar10) goto LAB_140071265;
      iVar11 = iVar11 + 0x20;
      uVar3 = puVar16[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (uVar3 == 0);
  }
  uVar17 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
  lVar10 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  iVar11 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
  if (iVar11 < iVar9) {
    iVar9 = iVar11;
  }
LAB_140071265:
  plVar7[1] = *(longlong *)(*plVar1 + (longlong)iVar9 * 0x10);
  *(undefined4 *)(plVar1 + 9) = 0;
  if (plVar1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1400dcd30(plVar1);
  FUN_1400020a8(plVar1);
LAB_14007129d:
  if (local_5c != 1) {
LAB_1400712a4:
    FUN_14283fad7(param_1);
  }
LAB_1400712ac:
  lVar10 = plVar7[1];
  if (*plVar7 == 0 && lVar10 != 0) {
    iVar9 = *(int *)(lVar10 + 8) - *(int *)(lVar10 + 0x34);
  }
  else {
    iVar9 = ((*plVar7 != 0) + 1) - (uint)(lVar10 == 0);
  }
  if (iVar9 == 0) {
    FUN_146903574(&DAT_14c9645d0,local_50);
  }
  goto LAB_140070f7d;
}



// FUNCTION 140071306 FUN_140071306 body=21 status=ok
// SIG undefined FUN_140071306(void)

undefined8 FUN_140071306(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14007132e FUN_14007132e body=134 status=ok
// SIG undefined FUN_14007132e(void)

void FUN_14007132e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_140310156(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 2 + *param_1),0,(ulonglong)uVar2 * 2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146d9d1f6(param_1);
    return;
  }
  return;
}



// FUNCTION 1400713b4 FUN_1400713b4 body=160 status=ok
// SIG undefined FUN_1400713b4(void)

ulonglong FUN_1400713b4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  if (((((*(longlong *)(param_1 + 0x30) == 0) ||
        ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x155) & 0x20) != 0)) ||
       (lVar2 = *(longlong *)(param_1 + 0x38), lVar2 == 0)) ||
      (((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0 ||
       ((*(longlong *)(lVar2 + 0x4d8) != 0 &&
        ((*(byte *)(*(longlong *)(lVar2 + 0x4d8) + 0xa0) & 1) == 0)))))) ||
     ((*(byte *)(lVar2 + 0x4a0) & 2) == 0)) {
LAB_140071450:
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x110);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x108);
      lVar6 = 0;
      do {
        lVar4 = (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x68))();
        if (lVar4 != 0) {
          cVar3 = FUN_140071454(lVar4);
          if (cVar3 == '\0') goto LAB_140071450;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar6);
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 140071454 FUN_140071454 body=258 status=ok
// SIG undefined FUN_140071454(void)

undefined8 FUN_140071454(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0xd4) != 4) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((lVar1 == 0) || (lVar5 = (longlong)*(int *)(lVar1 + 0x50), lVar5 == 0)) {
      lVar4 = 0;
    }
    else if (*(char *)(lVar1 + 0x40) == '\0') {
      lVar4 = *(longlong *)(lVar1 + 0x48);
    }
    else {
      lVar3 = *(longlong *)(lVar1 + 0x48);
      if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
          *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
        lVar5 = lVar5 * 0x368;
        do {
          if ((((*(int *)(lVar3 + 8) == *(int *)(lVar1 + 0x30)) &&
               (*(int *)(lVar3 + 0xc) == *(int *)(lVar1 + 0x34))) &&
              (*(int *)(lVar3 + 0x10) == *(int *)(lVar1 + 0x38))) &&
             (lVar4 = lVar3, *(int *)(lVar3 + 0x14) == *(int *)(lVar1 + 0x3c))) break;
          lVar3 = lVar3 + 0x368;
          lVar5 = lVar5 + -0x368;
          lVar4 = 0;
        } while (lVar5 != 0);
      }
      else {
        lVar5 = lVar5 * 0x368;
        do {
          if (((*(int *)(lVar3 + 8) == *(int *)(param_1 + 0x30)) &&
              (*(int *)(lVar3 + 0xc) == *(int *)(param_1 + 0x34))) &&
             ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x38) &&
              (lVar4 = lVar3, *(int *)(lVar3 + 0x14) == *(int *)(param_1 + 0x3c))))) break;
          lVar3 = lVar3 + 0x368;
          lVar5 = lVar5 + -0x368;
          lVar4 = 0;
        } while (lVar5 != 0);
      }
    }
    if (*(char *)(lVar4 + 0x367) == '\x01') {
      bVar2 = *(byte *)(lVar4 + 0x366) & 1;
    }
    else {
      bVar2 = FUN_1404d270c(lVar4);
      *(byte *)(lVar4 + 0x366) = bVar2;
      *(undefined1 *)(lVar4 + 0x367) = 1;
    }
    if (bVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140071562 FUN_140071562 body=136 status=ok
// SIG undefined FUN_140071562(void)

void FUN_140071562(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_140543018(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 4 + *param_1),(int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff)
             ,(ulonglong)uVar2 << 2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_140542718(param_1);
    return;
  }
  return;
}



// FUNCTION 1400715f6 FUN_1400715f6 body=136 status=ok
// SIG undefined FUN_1400715f6(void)

void FUN_1400715f6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1410172ba(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146cb4100(param_1);
    return;
  }
  return;
}



// FUNCTION 14007168a FUN_14007168a body=136 status=ok
// SIG undefined FUN_14007168a(void)

void FUN_14007168a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_141015918(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),(int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff)
             ,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146d9dfe0(param_1);
    return;
  }
  return;
}



// FUNCTION 140071712 FUN_140071712 body=131 status=ok
// SIG undefined FUN_140071712(void)

undefined8 FUN_140071712(double *param_1,byte param_2)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0.0 < *param_1) {
    BVar1 = QueryPerformanceCounter(&local_28);
    dVar3 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
    if (*param_1 <= dVar3 && dVar3 != *param_1) {
      *(byte *)(param_1 + 1) = ~*(byte *)((longlong)param_1 + 9) & param_2;
      uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
      goto LAB_140071769;
    }
  }
  uVar2 = 0;
LAB_140071769:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140071796 FUN_140071796 body=880 status=ok
// SIG undefined FUN_140071796(void)

void FUN_140071796(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_3;
  if (param_4 == 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar2 != 0) {
      lVar14 = *(longlong *)(param_1 + 0x10);
      lVar13 = 0;
      do {
        lVar5 = *(longlong *)(lVar14 + lVar13);
        if (lVar5 != 0) {
          iVar3 = *(int *)(param_2 + 0x88);
          *(uint *)(param_2 + 0x88) = iVar3 + 1U;
          if (*(uint *)(param_2 + 0x8c) < iVar3 + 1U) {
            FUN_1481f8234(param_2,iVar3);
          }
          lVar12 = *(longlong *)(param_2 + 0x80);
          if (*(longlong *)(param_2 + 0x80) == 0) {
            lVar12 = param_2;
          }
          *(longlong *)(lVar12 + (longlong)iVar3 * 0x10) = lVar5;
          *(undefined8 *)(lVar12 + 8 + (longlong)iVar3 * 0x10) = 0;
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar2 * 8 != lVar13);
    }
  }
  else {
    local_94 = DAT_14cb3a5f8;
    if (DAT_14cb3a5f8 != 0) {
      uVar9 = FUN_14811173e();
      uVar8 = FUN_1481f5624(param_4);
      FUN_148121460(uVar9,uVar8);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 != 0) {
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if (*(int *)(param_2 + 0x8c) < iVar2) {
        FUN_1401661d2(param_2);
      }
      if (0 < *(int *)(param_4 + 0x110)) {
        lVar14 = 0;
        local_98 = 0;
        local_80 = param_4;
        local_78 = param_1;
        local_70 = param_2;
        do {
          plVar11 = *(longlong **)(*(longlong *)(param_4 + 0x108) + lVar14 * 0x10);
          if (*(char *)(*(longlong *)(*(longlong *)(plVar11[1] + 0x38) + 0xb8) + 0x20 +
                       (longlong)(int)plVar11[0x19] * 0x48) == '\x01') {
            (**(code **)(*plVar11 + 0x78))(plVar11,&local_58);
            if ((longlong)local_50 != 0) {
              plVar1 = local_58 + local_50;
              plVar10 = local_58;
              do {
                plVar4 = (longlong *)*plVar10;
                if ((plVar4 != (longlong *)0x0) &&
                   (cVar6 = (**(code **)(*plVar4 + 0x308))(plVar4), cVar6 != '\0')) {
                  cVar6 = (**(code **)(*plVar4 + 0x2d8))
                                    (plVar4,*(undefined1 *)((longlong)plVar11 + 0xd1));
                  if (cVar6 != '\0') {
                    local_90 = *(longlong **)
                                (*(longlong *)(param_1 + 0x10) + (longlong)local_98 * 8);
                    if ((local_90 != (longlong *)0x0) &&
                       (cVar6 = (**(code **)(*plVar4 + 0x300))(plVar4), cVar6 != '\0')) {
                      if ((*(int *)((longlong)plVar11 + 0xd4) - 3U < 2) ||
                         ((*(int *)(param_4 + 0x86c) - 3U < 2 ||
                          (plVar7 = (longlong *)
                                    (**(code **)(*local_90 + 0x38))(local_90,local_68,plVar4),
                          plVar7 == (longlong *)0x0)))) {
                        plVar7 = (longlong *)0x0;
                      }
                      else {
                        lVar13 = param_5[1];
                        if ((longlong)(int)lVar13 != 0) {
                          lVar5 = *param_5;
                          lVar12 = 0;
                          local_60 = plVar11;
                          do {
                            if (*(longlong **)(lVar5 + 8 + lVar12) == plVar4) {
                              (**(code **)(*plVar7 + 8))
                                        (plVar7,*(undefined4 *)(lVar5 + 0x10 + lVar12),
                                         *(undefined8 *)(lVar5 + lVar12));
                              plVar11 = local_60;
                            }
                            lVar12 = lVar12 + 0x18;
                            param_1 = local_78;
                            param_2 = local_70;
                            param_4 = local_80;
                          } while ((longlong)(int)lVar13 * 0x18 != lVar12);
                        }
                      }
                      iVar2 = *(int *)(param_2 + 0x88);
                      *(uint *)(param_2 + 0x88) = iVar2 + 1U;
                      if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
                        local_88 = plVar7;
                        FUN_1481f8234(param_2,iVar2);
                        plVar7 = local_88;
                      }
                      lVar13 = *(longlong *)(param_2 + 0x80);
                      if (*(longlong *)(param_2 + 0x80) == 0) {
                        lVar13 = param_2;
                      }
                      *(longlong **)(lVar13 + (longlong)iVar2 * 0x10) = local_90;
                      *(longlong **)(lVar13 + 8 + (longlong)iVar2 * 0x10) = plVar7;
                    }
                    local_98 = local_98 + 1;
                  }
                }
                plVar10 = plVar10 + 1;
              } while (plVar10 != plVar1);
            }
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(param_4 + 0x110));
      }
    }
    if (local_94 != 0) {
      uVar9 = FUN_14811173e();
      FUN_1481117c2(uVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140071b36 FUN_140071b36 body=515 status=ok
// SIG undefined FUN_140071b36(void)

void FUN_140071b36(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar10 = *(longlong *)(param_1 + 0x30);
  local_88 = param_1;
  if ((lVar10 != 0) && ((longlong)*(int *)(lVar10 + 0x110) != 0)) {
    plVar8 = *(longlong **)(lVar10 + 0x108);
    local_80 = plVar8 + (longlong)*(int *)(lVar10 + 0x110) * 2;
    do {
      plVar4 = (longlong *)*plVar8;
      (**(code **)(*plVar4 + 0x78))(plVar4,&local_78);
      if ((longlong)(int)(uint)uStack_70 != 0) {
        plVar1 = local_78 + (int)(uint)uStack_70;
        plVar9 = local_78;
        do {
          plVar5 = (longlong *)*plVar9;
          if ((plVar5 != (longlong *)0x0) &&
             (cVar6 = (**(code **)(*plVar5 + 0x308))(plVar5), cVar6 != '\0')) {
            cVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined1 *)((longlong)plVar4 + 0xd1));
            if (cVar6 != '\0') {
              (**(code **)(*plVar5 + 800))(plVar5);
              local_78 = (longlong *)0x0;
              uStack_70 = 0;
              (**(code **)(*plVar5 + 0x2b0))(plVar5,*plVar8,&local_78);
              cVar6 = (**(code **)(*plVar5 + 800))(plVar5);
              if ((cVar6 != '\0') && (iVar2 = *(int *)(local_88 + 0x48), (longlong)iVar2 != 0)) {
                lVar10 = *(longlong *)(local_88 + 0x40);
                lVar7 = 0;
                do {
                  if (*(longlong **)(lVar10 + 8 + lVar7) == plVar5) {
                    iVar3 = *(int *)(lVar10 + 0x10 + lVar7);
                    if ((-1 < (longlong)iVar3) && (iVar3 < (int)(uint)uStack_70)) {
                      local_78[iVar3] = *(longlong *)(lVar10 + lVar7);
                    }
                  }
                  lVar7 = lVar7 + 0x18;
                } while ((longlong)iVar2 * 0x18 != lVar7);
              }
              lVar10 = (longlong)(int)(uint)uStack_70;
              if (lVar10 != 0) {
                iVar2 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar2 + (uint)uStack_70;
                if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < (uint)uStack_70) {
                  FUN_144769b64(param_2,iVar2);
                }
                memcpy((void *)((longlong)iVar2 * 8 + *param_2),local_78,lVar10 << 3);
              }
              if (local_78 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar1);
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != local_80);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140071d3a FUN_140071d3a body=213 status=ok
// SIG undefined FUN_140071d3a(void)

void FUN_140071d3a(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
       (plVar2 = (longlong *)FUN_144741050(param_1 + 200), *plVar2 != 0)) &&
      ((*(longlong *)(param_2 + 8) != 0 &&
       (plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x40), plVar2 != (longlong *)0x0)))) &&
     (piVar3 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,param_1 + 0xc0,0), piVar3 != (int *)0x0))
  {
    iVar1 = *piVar3;
    if (((-1 < (longlong)iVar1) && (iVar1 < (int)plVar2[9])) &&
       (lVar5 = *(longlong *)(plVar2[8] + (longlong)iVar1 * 8), lVar5 != 0)) {
      lVar4 = FUN_1402d2740();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) goto LAB_140071d5d;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xb8);
LAB_140071d5d:
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_144769b64(param_3,iVar1);
  }
  *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar5;
  return;
}



// FUNCTION 140071e10 FUN_140071e10 body=174 status=ok
// SIG undefined FUN_140071e10(void)

void FUN_140071e10(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_18 = param_1;
  (**(code **)(param_1[0x16] + 0x28))(param_1 + 0x16,0x6ff,&local_18);
  param_1[0x16] = &PTR_FUN_14b452260;
  if (param_1[0x1a] != 0) {
    plVar2 = param_1 + 0x1e;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x1c];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (local_18 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_18 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_18)(local_18,1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140071ecc FUN_140071ecc body=31 status=ok
// SIG undefined FUN_140071ecc(void)

undefined8 FUN_140071ecc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140071eec FUN_140071eec body=256 status=ok
// SIG undefined FUN_140071eec(void)

void FUN_140071eec(longlong *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(*param_1 + 8))();
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((uVar3 & uVar2) == 0xffffffff) {
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,(int)param_1[3]);
    cohtml::Library::HintThreadUsage(*(WorkType *)((longlong)param_1 + 0x1c));
    (**(code **)(*(longlong *)param_1[2] + 0x28))
              ((longlong *)param_1[2],*(undefined4 *)((longlong)param_1 + 0x1c),0,(int)param_1[3]);
    (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if (uVar3 != *(uint *)(param_1 + 3) || uVar2 != *(uint *)((longlong)param_1 + 0x1c)) {
    local_40 = 0;
    pcVar1 = (code *)param_1[4];
    plVar5 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[6];
    }
    local_38 = *(uint *)((longlong)param_1 + 0x1c);
    local_34 = *(uint *)(param_1 + 3);
    uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
    (*pcVar1)(uVar4,&local_40,&local_38,&local_34);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140072006 FUN_140072006 body=114 status=ok
// SIG undefined FUN_140072006(void)

void FUN_140072006(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      FUN_1407c31d4(param_1,lVar2);
      FUN_144769cc6(*(undefined8 *)(lVar2 + 8),lVar2 + 0x140,lVar2 + 0x1e0,lVar2 + 0x1f8,
                    lVar2 + 0x210);
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  return;
}



// FUNCTION 140072078 FUN_140072078 body=156 status=ok
// SIG undefined FUN_140072078(void)

undefined8 FUN_140072078(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  
  dVar1 = *(double *)(param_2 + 0xc0);
  pdVar6 = (double *)*param_1;
  dVar2 = *(double *)(param_2 + 0xb8);
  dVar8 = dVar2 - pdVar6[1];
  dVar5 = *(double *)(param_2 + 0xb0);
  dVar3 = *(double *)(param_2 + 0xb8);
  fVar7 = (float)((dVar1 - pdVar6[2]) * (dVar1 - pdVar6[2]) +
                 (dVar5 - *pdVar6) * (dVar5 - *pdVar6) + dVar8 * dVar8);
  pdVar6 = (double *)param_1[1];
  if (fVar7 < *(float *)pdVar6) {
    *(float *)pdVar6 = fVar7;
    *(longlong *)param_1[2] = param_2;
    pdVar6 = (double *)param_1[3];
    *pdVar6 = dVar5;
    pdVar6[1] = dVar3;
    pdVar6[2] = dVar1;
    pdVar6 = (double *)*param_1;
    dVar3 = pdVar6[2];
    pdVar4 = (double *)param_1[4];
    dVar8 = pdVar6[1];
    *pdVar4 = dVar5 - *pdVar6;
    pdVar4[1] = dVar2 - dVar8;
    pdVar4[2] = dVar1 - dVar3;
  }
  return CONCAT71((int7)((ulonglong)pdVar6 >> 8),1);
}



// FUNCTION 140072114 FUN_140072114 body=419 status=ok
// SIG undefined FUN_140072114(void)

undefined8 FUN_140072114(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  longlong lVar5;
  __uint64 _Var6;
  AKRESULT AVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((longlong *)*param_2 == (longlong *)0x0) || (*(longlong *)*param_2 != -1)) {
    uVar8 = 0;
  }
  else {
    local_58 = (void *)0x0;
    local_50 = (int)param_4[1];
    lVar9 = (longlong)local_50;
    _Src = (void *)*param_4;
    if (lVar9 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar9 * 2);
    }
    _Var6 = DAT_14c7626a8;
    DAT_14c7626a8 = DAT_14c7626a8 + 1;
    AVar7 = AK::SoundEngine::RegisterGameObj(_Var6);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar8 = 0;
    if ((_Var6 != 0xffffffffffffffff) && (AVar7 == 1)) {
      *(__uint64 *)*param_2 = _Var6;
      *(undefined8 *)(*param_2 + 8) = param_3;
      iVar3 = *(int *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x1c) < iVar3 + 1U) {
        FUN_146448916((longlong *)(param_1 + 0x10),iVar3);
      }
      lVar9 = *(longlong *)(param_1 + 0x10);
      *(longlong *)(lVar9 + (longlong)iVar3 * 0x10) = *param_2;
      lVar5 = param_2[1];
      *(longlong *)(lVar9 + 8 + (longlong)iVar3 * 0x10) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      AK::SoundEngine::SetListeners(_Var6,(__uint64 *)&DAT_14acb3fb0,1);
      AK::SoundEngine::SetGameObjectOutputBusVolume(_Var6,1,1.0);
      uVar8 = 1;
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400722b8 FUN_1400722b8 body=775 status=ok
// SIG undefined FUN_1400722b8(void)

void FUN_1400722b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  AKRESULT AVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  __uint64 _Var14;
  __uint64 _Var15;
  longlong lVar16;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1459ad6a4();
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    lVar12 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
    uVar10 = 0;
    if (lVar12 != 0) {
      plVar11 = *(longlong **)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10);
      plVar13 = plVar11 + lVar12 * 2;
      do {
        uVar7 = uStack_50;
        lVar12 = *plVar11;
        plVar4 = (longlong *)plVar11[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0xf0) != 0)) {
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          lVar16 = (longlong)(int)uStack_50;
          uVar8 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
          if (uStack_50._4_4_ < uVar8) {
            FUN_144796c16(&local_58,uVar7 & 0xffffffff);
          }
          local_58[lVar16 * 2] = lVar12;
          local_58[lVar16 * 2 + 1] = (longlong)plVar4;
        }
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
        plVar11 = plVar11 + 2;
      } while (plVar11 != plVar13);
      uVar10 = 0;
      if ((longlong)(int)uStack_50 != 0) {
        plVar13 = local_58 + (longlong)(int)uStack_50 * 2;
        local_90 = (longlong *)(param_1 + 0x10);
        plVar11 = local_58;
        do {
          puVar5 = (undefined8 *)*plVar11;
          plVar4 = (longlong *)plVar11[1];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if (puVar5 != (undefined8 *)0x0) {
            uVar6 = *puVar5;
            FUN_140056680(local_68,L"ERSubmix");
            _Var14 = DAT_14c7626a8;
            DAT_14c7626a8 = DAT_14c7626a8 + 1;
            AVar9 = AK::SoundEngine::RegisterGameObj(_Var14);
            if (local_68[0] != 0) {
              FUN_1400020a8();
            }
            if (AVar9 != 1) {
              _Var14 = 0xffffffffffffffff;
            }
            FUN_140056680(local_78,L"LRSubmix");
            _Var15 = DAT_14c7626a8;
            DAT_14c7626a8 = DAT_14c7626a8 + 1;
            AVar9 = AK::SoundEngine::RegisterGameObj(_Var15);
            if (local_78[0] != 0) {
              FUN_1400020a8();
            }
            if (AVar9 != 1) {
              _Var15 = 0xffffffffffffffff;
            }
            if (_Var14 != 0xffffffffffffffff) {
              AK::SoundEngine::SetListeners(_Var14,(__uint64 *)&DAT_14acb3fb0,1);
              AK::SoundEngine::SetGameObjectOutputBusVolume(_Var14,1,0.0);
            }
            if (_Var15 != 0xffffffffffffffff) {
              AK::SoundEngine::SetListeners(_Var15,(__uint64 *)&DAT_14acb3fb0,1);
              AK::SoundEngine::SetGameObjectOutputBusVolume(_Var15,1,0.0);
            }
            local_88 = 1;
            local_80 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
            local_7c = 0x3f800000;
            AK::SoundEngine::SetGameObjectAuxSendValues(_Var14,(AkAuxSendValue *)&local_88,1);
            iVar3 = *(int *)(param_1 + 0x18);
            lVar12 = (longlong)iVar3;
            *(uint *)(param_1 + 0x18) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0x1c) < iVar3 + 1U) {
              FUN_146448882(local_90,iVar3);
            }
            lVar16 = *local_90;
            *(undefined8 *)(lVar16 + lVar12 * 0x18) = uVar6;
            *(__uint64 *)(lVar16 + 8 + lVar12 * 0x18) = _Var14;
            *(__uint64 *)(lVar16 + 0x10 + lVar12 * 0x18) = _Var15;
          }
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
          plVar11 = plVar11 + 2;
        } while (plVar11 != plVar13);
        uVar10 = (int)uStack_50;
      }
    }
    FUN_144796acb(local_58,uVar10);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400725c0 FUN_1400725c0 body=1474 status=ok
// SIG undefined FUN_1400725c0(void)

void FUN_1400725c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  uint uVar16;
  AkAuxSendValue *pAVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined4 *puVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined8 uStack_190;
  undefined4 *local_188;
  undefined8 uStack_180;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  double local_158;
  double local_150;
  double local_148;
  AkAuxSendValue *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  double dVar5;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_198 = (longlong *)0x0;
  uStack_190 = 0;
  lVar22 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
  if (lVar22 != 0) {
    plVar19 = *(longlong **)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10);
    plVar23 = plVar19 + lVar22 * 2;
    do {
      uVar15 = uStack_190;
      lVar22 = *plVar19;
      plVar8 = (longlong *)plVar19[1];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if ((lVar22 != 0) && (*(longlong *)(lVar22 + 0xf0) != 0)) {
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        lVar20 = (longlong)(int)uStack_190;
        uVar16 = (int)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar16);
        if (uStack_190._4_4_ < uVar16) {
          FUN_144796c16(&local_198,uVar15 & 0xffffffff);
        }
        local_198[lVar20 * 2] = lVar22;
        local_198[lVar20 * 2 + 1] = (longlong)plVar8;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar24 = plVar8 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      plVar19 = plVar19 + 2;
    } while (plVar19 != plVar23);
    if ((longlong)(int)uStack_190 != 0) {
      plVar23 = local_198 + (longlong)(int)uStack_190 * 2;
      plVar19 = local_198;
      do {
        plVar8 = (longlong *)*plVar19;
        if ((plVar8 != (longlong *)0x0) && ((longlong)*(int *)(param_1 + 0x18) != 0)) {
          plVar24 = *(longlong **)(param_1 + 0x10);
          lVar22 = (longlong)*(int *)(param_1 + 0x18) * 0x18;
          do {
            if (*plVar24 == *plVar8) {
              if (plVar24 != (longlong *)0x0) {
                dVar12 = (double)plVar8[0x12];
                dVar13 = (double)plVar8[0x13];
                dVar14 = (double)plVar8[0x14];
                dVar4 = (double)plVar8[0x15];
                dVar5 = (double)plVar8[0x15];
                dVar25 = dVar12 * 0.0 - dVar13 * 0.0;
                dVar26 = dVar13 * 1.0 - dVar14 * 0.0;
                dVar27 = dVar14 * 0.0 - dVar12 * 1.0;
                dVar26 = dVar26 + dVar26;
                dVar27 = dVar27 + dVar27;
                dVar25 = dVar25 + dVar25;
                dVar9 = dVar12 * 0.0 - dVar13 * 1.0;
                dVar10 = dVar13 * 0.0 - dVar14 * 0.0;
                dVar11 = dVar14 * 1.0 - dVar12 * 0.0;
                dVar10 = dVar10 + dVar10;
                dVar11 = dVar11 + dVar11;
                dVar9 = dVar9 + dVar9;
                local_158 = (double)-(float)(double)plVar8[0x16];
                local_150 = (double)(float)(double)plVar8[0x18];
                local_148 = (double)(float)(double)plVar8[0x17];
                local_170 = -(float)((dVar9 * dVar13 - dVar11 * dVar14) + dVar4 * dVar10 + 1.0);
                local_16c = (float)(dVar9 * dVar4 + 0.0 + (dVar11 * dVar12 - dVar10 * dVar13));
                local_168 = (float)((dVar14 * dVar10 - dVar12 * dVar9) + dVar5 * dVar11 + 0.0);
                local_164 = -(float)((dVar25 * dVar13 - dVar27 * dVar14) + dVar4 * dVar26 + 0.0);
                local_160 = (float)(dVar25 * dVar4 + 1.0 + (dVar27 * dVar12 - dVar26 * dVar13));
                local_15c = (float)((dVar14 * dVar26 - dVar12 * dVar25) + dVar5 * dVar27 + 0.0);
                uVar18 = CONCAT71((int7)((ulonglong)param_3 >> 8),3);
                AK::SoundEngine::SetPosition
                          (plVar24[1],(AkWorldTransform *)&local_170,(AkSetPositionFlags)uVar18);
                param_3 = CONCAT71((int7)((ulonglong)uVar18 >> 8),3);
                AK::SoundEngine::SetPosition
                          (plVar24[2],(AkWorldTransform *)&local_170,(AkSetPositionFlags)param_3);
              }
              break;
            }
            plVar24 = plVar24 + 3;
            lVar22 = lVar22 + -0x18;
          } while (lVar22 != 0);
        }
        plVar19 = plVar19 + 2;
      } while (plVar19 != plVar23);
    }
  }
  plVar19 = *(longlong **)(param_1 + 0x20);
  if (plVar19 != (longlong *)0x0) {
    local_188 = (undefined4 *)0x0;
    uStack_180 = 0;
    (**(code **)(*plVar19 + 0x28))(plVar19,&local_188);
    local_f0 = (AkAuxSendValue *)0x0;
    local_e8 = 0x800000000;
    if ((longlong)(int)uStack_180 != 0) {
      puVar2 = local_188 + (longlong)(int)uStack_180 * 2;
      puVar21 = local_188;
      do {
        uVar15 = local_e8;
        uVar6 = *puVar21;
        uVar3 = puVar21[1];
        lVar22 = (longlong)(int)(uint)local_e8;
        uVar16 = (uint)local_e8 + 1;
        local_e8 = CONCAT44(local_e8._4_4_,uVar16);
        if (local_e8._4_4_ < uVar16) {
          FUN_147f7fd78((AkAuxSendValue *)&local_170,uVar15 & 0xffffffff);
        }
        pAVar17 = local_f0;
        if (local_f0 == (AkAuxSendValue *)0x0) {
          pAVar17 = (AkAuxSendValue *)&local_170;
        }
        lVar22 = lVar22 * 0x10;
        *(undefined8 *)(pAVar17 + lVar22) = 1;
        *(undefined4 *)(pAVar17 + lVar22 + 8) = uVar6;
        *(undefined4 *)(pAVar17 + lVar22 + 0xc) = uVar3;
        puVar21 = puVar21 + 2;
      } while (puVar21 != puVar2);
    }
    iVar7 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar7 != 0) {
      lVar22 = *(longlong *)(param_1 + 0x10);
      lVar20 = 0;
      do {
        pAVar17 = local_f0;
        if (local_f0 == (AkAuxSendValue *)0x0) {
          pAVar17 = (AkAuxSendValue *)&local_170;
        }
        AK::SoundEngine::SetGameObjectAuxSendValues
                  (*(__uint64 *)(lVar22 + 0x10 + lVar20),pAVar17,(uint)local_e8);
        lVar20 = lVar20 + 0x18;
      } while ((longlong)iVar7 * 0x18 != lVar20);
    }
    if (local_f0 != (AkAuxSendValue *)0x0) {
      FUN_1400020a8();
    }
    if (local_188 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_144796acb(local_198,uStack_190 & 0xffffffff);
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140072b84 FUN_140072b84 body=1367 status=ok
// SIG undefined FUN_140072b84(void)

void FUN_140072b84(longlong *param_1,int param_2,undefined4 *param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 **ppuVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint *lpTlsValue;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  int local_8c;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = *param_1;
  local_8c = param_2;
  if (*(char *)((longlong)param_1 + 0x14) == '\0' || (int)param_1[2] != param_2) {
    if (local_80 != 0) {
      FUN_1447177f6();
      *param_1 = 0;
    }
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    *(int *)(param_1 + 2) = param_2;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    local_80 = *param_1;
  }
  local_68 = DAT_14ca83d00;
  uVar18 = (uint)DAT_14ca83d00;
  if (((ulonglong)DAT_14ca83d00 & 0x3ffffff) != 0) {
LAB_140072c56:
    puVar5 = DAT_14ca83d00;
    local_98 = (undefined8 *)(((ulonglong)DAT_14ca83d00 & 0xfffffffffc000000) + 0x4000000);
    local_68 = DAT_14ca83d00;
    if ((ulonglong)local_98 >> 0x1a < (ulonglong)DAT_14ca83d00 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar21 = (ulonglong)((uVar18 & 0x3ffffff) >> 0xe);
    uVar15 = (ulonglong)((uint)puVar5 & 0x3fff);
    local_98 = (undefined8 *)
               ((ulonglong)local_98 & 0xfffffffffc000000 |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar21 * 8) + 0x10 + uVar15 * 0x18));
    LOCK();
    bVar22 = local_68 != DAT_14ca83d00;
    puVar5 = local_98;
    if (bVar22) {
      puVar5 = DAT_14ca83d00;
    }
    DAT_14ca83d00 = puVar5;
    UNLOCK();
    if (bVar22) goto code_r0x000140072cd7;
    *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar21 * 8) + uVar15 * 0x18 + 0x10) = 0;
    uVar15 = (ulonglong)(uVar18 & 0x3fff);
    plVar17 = *(longlong **)(*(longlong *)(&DAT_14c833b00 + uVar21 * 8) + 8 + uVar15 * 0x18);
    local_88 = param_4;
    if (DAT_14c833980 != '\x01') {
      DAT_14c833940 = (undefined8 *)0x0;
      DAT_14c833900 = TlsAlloc();
      DAT_14c833980 = '\x01';
    }
    lpTlsValue = TlsGetValue(DAT_14c833900);
    if (lpTlsValue == (uint *)0x0) {
      lpTlsValue = (uint *)FUN_14001cc68(0xc,0x10);
      lpTlsValue[0] = 0;
      lpTlsValue[1] = 0;
      lpTlsValue[2] = 0;
      TlsSetValue(DAT_14c833900,lpTlsValue);
    }
    param_4 = local_88;
    if (0x3f < (int)lpTlsValue[2]) {
      uVar4 = *lpTlsValue;
      if ((ulonglong)uVar4 != 0) {
        uVar20 = (ulonglong)(uVar4 >> 0xe);
        local_70 = (ulonglong)(uVar4 & 0x3fff) * 3;
        do {
          local_68 = DAT_14c833940;
          local_98 = (undefined8 *)(((ulonglong)DAT_14c833940 & 0xfffffffffc000000) + 0x4000000);
          if ((ulonglong)local_98 >> 0x1a < (ulonglong)DAT_14c833940 >> 0x1a) {
            local_78 = uVar20;
            FUN_14000f986(0x3a83126f);
            uVar20 = local_78;
            param_4 = local_88;
          }
          local_98 = (undefined8 *)((ulonglong)local_98 & 0xfffffffffc000000 | (ulonglong)uVar4);
          *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar20 * 8) + 0x10 + local_70 * 8) =
               (uint)local_68 & 0x3ffffff;
          LOCK();
          bVar22 = local_68 != DAT_14c833940;
          puVar5 = local_98;
          if (bVar22) {
            puVar5 = DAT_14c833940;
          }
          DAT_14c833940 = puVar5;
          UNLOCK();
        } while (bVar22);
      }
      *lpTlsValue = lpTlsValue[1];
      lpTlsValue[1] = 0;
      lpTlsValue[2] = 0;
    }
    lVar16 = *(longlong *)(&DAT_14c833b00 + uVar21 * 8);
    puVar3 = (ulonglong *)(lVar16 + uVar15 * 0x18);
    *puVar3 = *puVar3 & 0xfffffffffc000000;
    *(undefined4 *)(lVar16 + 0x10 + uVar15 * 0x18) = 0;
    *(ulonglong *)(lVar16 + 8 + uVar15 * 0x18) = (ulonglong)lpTlsValue[1];
    lpTlsValue[1] = uVar18 & 0x3ffffff;
    lpTlsValue[2] = lpTlsValue[2] + 1;
    if (plVar17 == (longlong *)0x0) goto LAB_140073069;
    goto LAB_140072da7;
  }
LAB_140073069:
  plVar17 = (longlong *)FUN_14001cc68(0x90,0x10);
LAB_140072da7:
  *plVar17 = *param_4;
  plVar17[2] = param_4[2];
  param_4[2] = 0;
  lVar16 = param_4[4];
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x24);
  lVar19 = param_4[5];
  uVar7 = *(undefined4 *)((longlong)param_4 + 0x2c);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x34);
  lVar13 = param_4[7];
  uVar9 = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(int *)(plVar17 + 6) = (int)param_4[6];
  *(undefined4 *)((longlong)plVar17 + 0x34) = uVar8;
  *(int *)(plVar17 + 7) = (int)lVar13;
  *(undefined4 *)((longlong)plVar17 + 0x3c) = uVar9;
  *(int *)(plVar17 + 4) = (int)lVar16;
  *(undefined4 *)((longlong)plVar17 + 0x24) = uVar6;
  *(int *)(plVar17 + 5) = (int)lVar19;
  *(undefined4 *)((longlong)plVar17 + 0x2c) = uVar7;
  if (*plVar17 != 0) {
    *param_4 = 0;
  }
  plVar17[0xc] = 0;
  lVar16 = *(longlong *)(param_3 + 8);
  if (lVar16 == 0) {
    uVar6 = *param_3;
    uVar7 = param_3[1];
    uVar8 = param_3[2];
    uVar9 = param_3[3];
    uVar10 = param_3[5];
    uVar11 = param_3[6];
    uVar12 = param_3[7];
    *(undefined4 *)(plVar17 + 10) = param_3[4];
    *(undefined4 *)((longlong)plVar17 + 0x54) = uVar10;
    *(undefined4 *)(plVar17 + 0xb) = uVar11;
    *(undefined4 *)((longlong)plVar17 + 0x5c) = uVar12;
    *(undefined4 *)(plVar17 + 8) = uVar6;
    *(undefined4 *)((longlong)plVar17 + 0x44) = uVar7;
    *(undefined4 *)(plVar17 + 9) = uVar8;
    *(undefined4 *)((longlong)plVar17 + 0x4c) = uVar9;
    lVar16 = *(longlong *)(param_3 + 8);
  }
  plVar17[0xc] = lVar16;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined4 *)(plVar17 + 0xd) = param_3[10];
  *(undefined4 *)((longlong)plVar17 + 0x6c) = param_3[0xb];
  *(undefined8 *)(param_3 + 10) = 0x400000000;
  plVar17[0xe] = 0;
  *(undefined4 *)(plVar17 + 0xf) = 2;
  *(int *)((longlong)plVar17 + 0x7c) = local_8c;
  iVar14 = 0x4ff;
  if (DAT_14c842752 == '\0') {
    iVar14 = local_8c;
  }
  if (local_8c != 0) {
    iVar14 = local_8c;
  }
  *(int *)(plVar17 + 0x10) = iVar14;
  *param_1 = (longlong)plVar17;
  if (local_80 != 0) {
    LOCK();
    bVar22 = *(longlong *)(local_80 + 0x70) == 0;
    if (bVar22) {
      *(longlong *)(local_80 + 0x70) = (longlong)plVar17;
    }
    UNLOCK();
    FUN_1447177f6();
    if (bVar22) goto LAB_140072f32;
  }
  ppuVar2 = (undefined8 **)(param_1 + 1);
  if (param_1[1] != 0) {
    lVar16 = *param_1;
    iVar14 = *(int *)(lVar16 + 0x68);
    *(uint *)(lVar16 + 0x68) = iVar14 + 1U;
    if (*(uint *)(lVar16 + 0x6c) < iVar14 + 1U) {
      FUN_14476a5c8(lVar16 + 0x40,iVar14);
    }
    lVar19 = lVar16 + 0x40;
    if (*(longlong *)(lVar16 + 0x60) != 0) {
      lVar19 = *(longlong *)(lVar16 + 0x60);
    }
    puVar5 = *ppuVar2;
    *(undefined8 **)(lVar19 + (longlong)iVar14 * 8) = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
  }
  FUN_1431eb31e(param_1,&local_68,*param_1);
  if (ppuVar2 != &local_68) {
    puVar5 = *ppuVar2;
    *ppuVar2 = local_68;
    local_68 = (undefined8 *)0x0;
    if (puVar5 == (undefined8 *)0x0) goto LAB_140072f32;
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_68 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_68)(local_68,1);
    }
  }
LAB_140072f32:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140072cd7:
  local_68 = DAT_14ca83d00;
  uVar18 = (uint)DAT_14ca83d00;
  if (((ulonglong)DAT_14ca83d00 & 0x3ffffff) == 0) goto LAB_140073069;
  goto LAB_140072c56;
}



// FUNCTION 1400730dc FUN_1400730dc body=1423 status=ok
// SIG undefined FUN_1400730dc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1400730dc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 *_Dst;
  undefined1 *_Dst_00;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 auStack_b0 [4];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  longlong *local_70;
  undefined4 local_68;
  wchar_t *local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = (longlong *)*plVar1;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(longlong *)(param_2 + 0x20) = (longlong)plVar1 + 9;
  auStack_b0[0] = 0x140073142;
  (*(code *)(&DAT_14c962c70)[*(byte *)(plVar1 + 1)])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar3 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    if (plVar2 != (longlong *)0x0) {
      auStack_b0[0] = 0x140073169;
      cVar8 = (**(code **)(*plVar2 + 0x80))(plVar2);
      if (cVar8 != '\0') {
        if (*(int *)((longlong)plVar2 + 0x34) == 0 || (int)plVar2[6] == 0) {
LAB_14007337e:
          puVar15 = (undefined8 *)auStack_88;
          _Dst = (undefined1 *)0x0;
        }
        else {
          auStack_b0[0] = 0x140073197;
          iVar10 = (**(code **)(*plVar2 + 0x178))(plVar2);
          lVar16 = (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6];
          iVar11 = (int)lVar16;
          if (iVar10 < 0x11) {
            if (iVar11 == 0) goto LAB_14007337e;
            uStack_90 = 0x1400731c9;
            lVar16 = -(lVar16 + 0x1eU & 0xfffffffffffffff0);
            puVar15 = (undefined8 *)(auStack_88 + lVar16);
            _Dst = auStack_88 + lVar16;
          }
          else {
            auStack_b0[0] = 0x140073457;
            iVar10 = (**(code **)(*plVar2 + 0x178))(plVar2);
            uStack_90 = 0x14007346f;
            lVar16 = -((longlong)(iVar10 + iVar11 + -1) + 0xfU & 0xfffffffffffffff0);
            pcVar4 = *(code **)(*plVar2 + 0x178);
            *(undefined8 *)((longlong)auStack_b0 + lVar16) = 0x140073485;
            iVar10 = (*pcVar4)(plVar2);
            pcVar4 = *(code **)(*plVar2 + 0x178);
            *(undefined8 *)((longlong)auStack_b0 + lVar16) = 0x1400734a1;
            iVar11 = (*pcVar4)(plVar2);
            puVar15 = (undefined8 *)(auStack_88 + lVar16);
            _Dst = (undefined1 *)
                   ((longlong)-iVar11 & (ulonglong)(auStack_88 + iVar10 + lVar16 + -1));
          }
        }
        if ((*(byte *)((longlong)plVar2 + 0x39) & 2) == 0) {
          pcVar4 = *(code **)(*plVar2 + 0x160);
          *(undefined8 *)((longlong)puVar15 + -0x28) = 0x1400734c6;
          (*pcVar4)(plVar2,_Dst);
        }
        else {
          iVar10 = *(int *)((longlong)plVar2 + 0x34);
          lVar16 = plVar2[6];
          *(undefined8 *)((longlong)puVar15 + -0x28) = 0x1400734e2;
          memset(_Dst,0,(longlong)(int)lVar16 * (longlong)iVar10);
        }
        uVar14 = *(undefined8 *)(param_2 + 0x38);
        *(undefined1 **)(param_2 + 0x38) = _Dst;
        goto LAB_1400734ee;
      }
    }
    puVar15 = (undefined8 *)auStack_88;
    uVar14 = 0;
    _Dst = (undefined1 *)0x0;
    goto LAB_1400734ee;
  }
  local_60 = L"LetAccessNone";
  local_58._0_4_ = 0xd;
  auStack_b0[0] = 0x14007320e;
  local_80 = param_1;
  FUN_1446e940c(local_74,&local_60);
  local_60 = L"ScriptCore";
  local_58._0_4_ = 10;
  auStack_b0[0] = 0x14007323b;
  FUN_1446e940c(local_78,&local_60);
  local_60 = L"Attempted to assign to None";
  local_58 = (longlong *)CONCAT44(local_58._4_4_,0x1b);
  auStack_b0[0] = 0x14007326f;
  FUN_140208c1e(&local_70,local_78,local_74,&local_60);
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,3);
  local_58 = local_70;
  if (local_70 == (longlong *)0x0) {
    local_50 = local_68;
  }
  else {
    auStack_b0[0] = 0x140073290;
    (**(code **)(*local_70 + 8))();
    local_50 = local_68;
    if (local_70 != (longlong *)0x0) {
      auStack_b0[0] = 0x1400732ad;
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar10 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar10 != 2)) {
    if (iVar10 == 1) {
      auStack_b0[0] = 0x14007361d;
      DVar12 = FUN_140ad26c0();
      auStack_b0[0] = 0x14007362d;
      DVar13 = GetCurrentThreadId();
      if (DVar12 == DVar13) goto LAB_140073639;
    }
  }
  else {
LAB_140073639:
    auStack_b0[0] = 0x140073657;
    FUN_14282d110(&DAT_14c963468,local_80,param_2,&local_60);
    if ((int)local_60 == 7) {
      *(undefined1 *)(param_2 + 0xa1) = 1;
    }
  }
  puVar15 = (undefined8 *)auStack_88;
  if (plVar2 == (longlong *)0x0) {
    uStack_90 = 0x140073361;
    puVar15 = &local_498;
    *(undefined8 **)(param_2 + 0x38) = &local_498;
    local_498 = 0;
    uStack_490 = 0;
    _Dst = (undefined1 *)0x0;
  }
  else {
    if (*(int *)((longlong)plVar2 + 0x34) == 0 || (int)plVar2[6] == 0) {
LAB_140073379:
      _Dst = (undefined1 *)0x0;
    }
    else {
      auStack_b0[0] = 0x140073322;
      iVar10 = (**(code **)(*plVar2 + 0x178))(plVar2);
      lVar16 = (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6];
      iVar11 = (int)lVar16;
      if (iVar10 < 0x11) {
        if (iVar11 == 0) goto LAB_140073379;
        uStack_90 = 0x14007334c;
        lVar16 = -(lVar16 + 0x1eU & 0xfffffffffffffff0);
        puVar15 = (undefined8 *)(auStack_88 + lVar16);
        _Dst = auStack_88 + lVar16;
      }
      else {
        auStack_b0[0] = 0x140073396;
        iVar10 = (**(code **)(*plVar2 + 0x178))(plVar2);
        uStack_90 = 0x1400733ae;
        lVar16 = -((longlong)(iVar10 + iVar11 + -1) + 0xfU & 0xfffffffffffffff0);
        puVar15 = (undefined8 *)(auStack_88 + lVar16);
        pcVar4 = *(code **)(*plVar2 + 0x178);
        *(undefined8 *)((longlong)auStack_b0 + lVar16) = 0x1400733c4;
        iVar10 = (*pcVar4)(plVar2);
        pcVar4 = *(code **)(*plVar2 + 0x178);
        *(undefined8 *)((longlong)auStack_b0 + lVar16) = 0x1400733e0;
        iVar11 = (*pcVar4)(plVar2);
        _Dst = (undefined1 *)((longlong)-iVar11 & (ulonglong)(auStack_88 + iVar10 + lVar16 + -1));
      }
    }
    if ((*(byte *)((longlong)plVar2 + 0x39) & 2) == 0) {
      pcVar4 = *(code **)(*plVar2 + 0x160);
      *(undefined8 *)((longlong)puVar15 + -0x28) = 0x140073405;
      (*pcVar4)(plVar2,_Dst);
    }
    else {
      iVar10 = *(int *)((longlong)plVar2 + 0x34);
      lVar16 = plVar2[6];
      *(undefined8 *)((longlong)puVar15 + -0x28) = 0x140073421;
      memset(_Dst,0,(longlong)(int)lVar16 * (longlong)iVar10);
    }
    *(undefined1 **)(param_2 + 0x38) = _Dst;
  }
  if (local_58 != (longlong *)0x0) {
    pcVar4 = *(code **)(*local_58 + 0x10);
    *(undefined8 *)((longlong)puVar15 + -0x28) = 0x14007343c;
    (*pcVar4)();
  }
  uVar14 = 0;
LAB_1400734ee:
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  pbVar7 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar7 + 1;
  pcVar4 = (code *)(&DAT_14c962c70)[*pbVar7];
  *(undefined8 *)((longlong)puVar15 + -0x28) = 0x140073510;
  (*pcVar4)(uVar6,param_2,uVar5);
  if (plVar2 != (longlong *)0x0) {
    pcVar4 = *(code **)(*plVar2 + 0x80);
    *(undefined8 *)((longlong)puVar15 + -0x28) = 0x14007352d;
    bVar9 = (*pcVar4)(plVar2);
    if ((lVar3 != 0 & bVar9) == 1) {
      pcVar4 = *(code **)(*plVar2 + 0x80);
      *(undefined8 *)((longlong)puVar15 + -0x28) = 0x140073552;
      cVar8 = (*pcVar4)(plVar2);
      if (cVar8 == '\0') {
        _Dst_00 = (undefined1 *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (_Dst_00 != _Dst) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            lVar3 = plVar2[6];
            pcVar4 = *(code **)(*plVar2 + 0x100);
            *(undefined8 *)((longlong)puVar15 + -0x28) = 0x14007359e;
            (*pcVar4)(plVar2,_Dst_00,_Dst,(int)lVar3);
          }
          else {
            iVar10 = *(int *)((longlong)plVar2 + 0x34);
            lVar3 = plVar2[6];
            *(undefined8 *)((longlong)puVar15 + -0x28) = 0x1400735bb;
            memcpy(_Dst_00,_Dst,(longlong)(int)lVar3 * (longlong)iVar10);
          }
        }
      }
      else {
        pcVar4 = *(code **)(*plVar2 + 0x98);
        *(undefined8 *)((longlong)puVar15 + -0x28) = 0x140073570;
        (*pcVar4)(plVar2,lVar3,_Dst);
      }
      *(undefined8 *)(param_2 + 0x38) = uVar14;
    }
    if ((_Dst != (undefined1 *)0x0) && ((*(byte *)((longlong)plVar2 + 0x3c) & 0x10) == 0)) {
      pcVar4 = *(code **)(*plVar2 + 0x148);
      *(undefined8 *)((longlong)puVar15 + -0x28) = 0x1400735e1;
      (*pcVar4)(plVar2,_Dst);
    }
  }
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar15 + -0x28) = &UNK_14007360f;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140073682 FUN_140073682 body=421 status=ok
// SIG undefined FUN_140073682(void)

void FUN_140073682(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  code *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_2 + 0xb1) & 4) == 0) {
    local_88 = FUN_14488c8f6;
    FUN_14476a7c0(param_1,param_2,param_3,param_4);
    if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950d78 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_1468b50ee;
    local_60 = FUN_1427f23a3;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10004001;
    local_80 = 8;
    local_88 = (code *)CONCAT44(local_88._4_4_,0x28);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
    if (DAT_14c950d78 == 0) goto LAB_140073718;
  }
  if ((*(int *)(DAT_14c950d78 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8) ==
      DAT_14c950d78 + 0x30)) {
    param_1 = FUN_144718840(param_1,lVar1);
  }
LAB_140073718:
  uVar2 = *(undefined8 *)(param_3 + 0x90);
  *(longlong *)(param_3 + 0x90) = param_2;
  if (*(code **)(param_2 + 0xd8) == FUN_144810466) {
    FUN_144810466(param_1,param_3,param_4);
  }
  else {
    (**(code **)(param_2 + 0xd8))(param_1,param_3,param_4);
  }
  *(undefined8 *)(param_3 + 0x90) = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140073828 FUN_140073828 body=889 status=ok
// SIG undefined FUN_140073828(void)

void FUN_140073828(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0 [2];
  longlong *local_b0 [2];
  longlong *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar3 = *(longlong **)(param_2 + 0x20);
  lVar4 = *plVar3;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(longlong *)(param_2 + 0x20) = (longlong)plVar3 + 9;
  (*(code *)(&DAT_14c962c70)[*(byte *)(plVar3 + 1)])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x38);
    *(longlong *)(param_2 + 0x38) = (longlong)*(int *)(lVar4 + 0x44) + *(longlong *)(param_2 + 0x38)
    ;
    *(longlong *)(param_2 + 0x30) = lVar4;
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
    }
    goto LAB_140073b53;
  }
  if (lVar4 == 0) {
    FUN_140056680(local_c0,&DAT_149e01fe8);
  }
  else {
    FUN_1400021e4(lVar4 + 0x20,local_c0);
  }
  FUN_140233b1a(local_b0,local_c0);
  local_60 = L"AccessNoneStructure";
  local_58._0_4_ = 0x13;
  FUN_1446e940c(local_e4,&local_60);
  local_60 = L"ScriptCore";
  local_58._0_4_ = 10;
  FUN_1446e940c(local_e8,&local_60);
  local_60 = L"Accessed None reading structure {0}";
  local_58 = (longlong *)CONCAT44(local_58._4_4_,0x23);
  FUN_140208c1e(local_e0,local_e8,local_e4,&local_60);
  FUN_14023409e(&local_d0,local_e0,1);
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
  FUN_14023423e(&local_50,local_b0);
  local_78 = &local_40;
  local_80 = &local_60;
  FUN_14010d304(&local_70);
  local_90 = local_d0;
  local_88 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_a0,&local_90,&local_70);
  FUN_14007f2db(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)CONCAT44(uStack_4c,local_50) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x10))();
  }
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))(local_c8);
      }
    }
  }
  if (local_b0[0] != (longlong *)0x0) {
    (**(code **)(*local_b0[0] + 0x10))();
  }
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,3);
  local_58 = local_a0;
  if (local_a0 == (longlong *)0x0) {
    local_50 = local_98;
  }
  else {
    (**(code **)(*local_a0 + 8))(local_a0);
    local_50 = local_98;
    (**(code **)(*local_a0 + 0x10))(local_a0);
  }
  if (local_e0[0] != (longlong *)0x0) {
    (**(code **)(*local_e0[0] + 0x10))();
  }
  if (local_c0[0] != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_140073b91;
    if (iVar2 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_140073b91;
    }
  }
  else {
LAB_140073b91:
    FUN_14282d110(&DAT_14c963468,param_1,param_2,&local_60);
    if ((int)local_60 == 7) {
      *(undefined1 *)(param_2 + 0xa1) = 1;
    }
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
LAB_140073b53:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140073bc4 FUN_140073bc4 body=67 status=ok
// SIG undefined FUN_140073bc4(void)

void FUN_140073bc4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + *(int *)(param_1 + 0x34) * lVar3);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        iVar2 = *(int *)(param_1 + 0x30);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 140073c08 FUN_140073c08 body=275 status=ok
// SIG undefined FUN_140073c08(void)

void FUN_140073c08(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x34);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c844850) {
        FUN_144b3d300(&DAT_14c844850);
        if (DAT_14c844850 == -1) {
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
      }
      plVar2 = DAT_14c844840;
      lVar4 = iVar1 * lVar3;
      *(longlong **)(param_2 + lVar4) = DAT_14c844840;
      if (plVar2 != (longlong *)0x0) {
        if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*plVar2 + 8))();
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar4) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 140073d1c FUN_140073d1c body=469 status=ok
// SIG undefined FUN_140073d1c(void)

void FUN_140073d1c(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140073e4c:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140073e89:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140073d86;
LAB_140073d7b:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140073d86:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x000140073db3;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140073e09:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140073e89;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140073e4c;
code_r0x000140073db3:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140073e09;
    }
  }
  goto LAB_140073d7b;
}



// FUNCTION 140073ef2 FUN_140073ef2 body=32 status=ok
// SIG undefined FUN_140073ef2(void)

void FUN_140073ef2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14476b56c(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 140073f12 FUN_140073f12 body=137 status=ok
// SIG undefined FUN_140073f12(void)

float FUN_140073f12(float param_1)

{
  ulonglong uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  auVar3 = roundps(ZEXT416((uint)param_1),ZEXT416((uint)param_1),1);
  uVar1 = (ulonglong)((int)auVar3._0_4_ & 0xff);
  param_1 = param_1 - auVar3._0_4_;
  fVar2 = param_1 * *(float *)(&DAT_149e25c30 +
                              (ulonglong)(*(uint *)(&DAT_149e25020 + uVar1 * 4) & 0xf) * 4) +
          ((param_1 + -1.0) *
           *(float *)(&DAT_149e25c30 + (ulonglong)(*(uint *)(&DAT_149e25024 + uVar1 * 4) & 0xf) * 4)
          - param_1 * *(float *)(&DAT_149e25c30 +
                                (ulonglong)(*(uint *)(&DAT_149e25020 + uVar1 * 4) & 0xf) * 4)) *
          ((param_1 * 6.0 + -15.0) * param_1 + 10.0) * param_1 * param_1 * param_1;
  return fVar2 + fVar2;
}



// FUNCTION 140073f9c FUN_140073f9c body=436 status=ok
// SIG undefined FUN_140073f9c(void)

void FUN_140073f9c(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar4 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar10 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar13 == uVar10) goto LAB_1400740e1;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(*param_1 + (longlong)iVar4 * 0x18);
      if (lVar12 != 0) {
        LOCK();
        piVar1 = (int *)(lVar12 + 0x478);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_1402cd3ea(*(undefined8 *)(lVar12 + 0x10));
        }
        iVar3 = (int)param_1[5];
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)uVar10;
      lVar12 = (longlong)iVar4;
      uVar5 = puVar8[lVar12] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar12 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar12 == lVar9) goto LAB_1400740e1;
        }
        uVar10 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1400740e1:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 140074150 FUN_140074150 body=679 status=ok
// SIG undefined FUN_140074150(void)

void FUN_140074150(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1400741b4;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1400741b4:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1400743f8 FUN_1400743f8 body=156 status=ok
// SIG undefined FUN_1400743f8(void)

void FUN_1400743f8(void *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  void *_Src;
  
  uVar2 = *(int *)((longlong)param_2 + 0x20) + 0x1fU & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < (int)uVar2 || 0x20 < *(int *)((longlong)param_1 + 0x24))
  {
    uVar3 = 0x20;
    if (0x20 < (int)uVar2) {
      uVar3 = uVar2;
    }
    *(uint *)((longlong)param_1 + 0x24) = uVar3;
    FUN_140074494(param_1);
  }
  iVar1 = *(int *)((longlong)param_2 + 0x20);
  *(int *)((longlong)param_1 + 0x20) = iVar1;
  if (iVar1 != 0) {
    _Src = (void *)((longlong)param_2 + 8);
    if (*(void **)((longlong)param_2 + 0x18) != (void *)0x0) {
      _Src = *(void **)((longlong)param_2 + 0x18);
    }
    if (_Src == (void *)0x0) {
      _Src = param_2;
    }
    _Dst = (void *)((longlong)param_1 + 8);
    if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
      _Dst = *(void **)((longlong)param_1 + 0x18);
    }
    if (_Dst == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
    return;
  }
  return;
}



// FUNCTION 140074494 FUN_140074494 body=93 status=ok
// SIG undefined FUN_140074494(void)

void FUN_140074494(longlong param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_1400744f2(param_1,*(int *)(param_1 + 0x24) + 0x1fU >> 5);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    lVar4 = param_1 + 8;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x18);
    }
    if (lVar4 == 0) {
      lVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 1400744f2 FUN_1400744f2 body=73 status=ok
// SIG undefined FUN_1400744f2(void)

void FUN_1400744f2(longlong param_1,uint param_2)

{
  if (param_2 < 2) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_140047396(param_1 + 0x18,0,0,4);
      return;
    }
  }
  else if ((4 < param_2) || (*(longlong *)(param_1 + 0x18) != 0)) {
    if (param_2 < 5) {
      param_2 = 0;
    }
    FUN_140047396(param_1 + 0x18,0,param_2,4);
    return;
  }
  return;
}



// FUNCTION 14007453b FUN_14007453b body=133 status=ok
// SIG undefined FUN_14007453b(void)

longlong * FUN_14007453b(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  FUN_1447712aa(param_1,param_2 + 0xc);
  FUN_1447712aa(param_1,param_2 + 0x18);
  FUN_1447712aa(param_1,param_2 + 0x24);
  FUN_1447712aa(param_1,param_2);
  FUN_1447712aa(param_1,param_2 + 0x30);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x3c),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x3c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 1400745c0 FUN_1400745c0 body=96 status=ok
// SIG undefined FUN_1400745c0(void)

longlong FUN_1400745c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140074620();
  param_3 = param_3 + *(longlong *)(param_1 + 0x10);
  lVar2 = (longlong)DAT_14c758610 * 0x400;
  lVar1 = *(int *)(param_1 + 0x24 + (longlong)(int)(param_3 / lVar2) * 4) * lVar2 + DAT_14c833a58;
  lVar3 = (longlong)(int)(param_3 % lVar2);
  lVar2 = lVar2 - lVar3;
  if (param_4 < lVar2) {
    lVar2 = param_4;
  }
  *param_2 = lVar2;
  return lVar1 + lVar3;
}



// FUNCTION 140074620 FUN_140074620 body=109 status=ok
// SIG undefined FUN_140074620(void)

void FUN_140074620(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c833a80) {
    FUN_144b3d300(&DAT_14c833a80);
    if (DAT_14c833a80 == -1) {
      FUN_1427488ce(&DAT_14c8339c0,DAT_14c758614);
      atexit((_func_5014 *)&LAB_14274a6da);
      _Init_thread_footer(&DAT_14c833a80);
      return;
    }
  }
  return;
}



// FUNCTION 14007468e FUN_14007468e body=33 status=ok
// SIG undefined FUN_14007468e(void)

void FUN_14007468e(void)

{
  FUN_1400746b0();
  return;
}



// FUNCTION 1400746b0 FUN_1400746b0 body=504 status=ok
// SIG undefined FUN_1400746b0(void)

void FUN_1400746b0(longlong *param_1,undefined8 *param_2,longlong param_3,char param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  void *_Dst;
  undefined8 *_Src;
  void *_Src_00;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 == '\x01') {
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      param_3 = param_3 + *(int *)((longlong)param_1 + 0x44) +
                (longlong)param_5 * (longlong)*(int *)((longlong)param_1 + 0x34);
      goto LAB_140074710;
    }
    if (param_6 != 1) {
      _Dst = (void *)FUN_1468c8356(param_1);
      cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar2 == '\0') {
        _Src_00 = (void *)(param_3 + *(int *)((longlong)param_1 + 0x44));
        if (_Src_00 != _Dst) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,_Dst,_Src_00,(int)param_1[6]);
          }
          else {
            memcpy(_Dst,_Src_00,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,_Dst);
      }
      if (param_6 != 0) {
        uVar4 = 0;
        do {
          param_2[uVar4] = *(undefined8 *)((longlong)_Dst + uVar4 * 8 + (longlong)param_5 * 8);
          uVar4 = uVar4 + 1;
        } while (param_6 != uVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
    }
    local_48 = 0;
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      _Src = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
      uVar3 = local_48;
      if (_Src != &local_48) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_48,_Src,(int)param_1[6]);
          uVar3 = local_48;
        }
        else {
          memcpy(&local_48,_Src,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          uVar3 = local_48;
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_48);
      uVar3 = local_48;
    }
  }
  else {
LAB_140074710:
    if (param_6 != 1) {
      if (param_6 != 0) {
        iVar1 = *(int *)((longlong)param_1 + 0x34);
        uVar4 = 0;
        do {
          uVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
          param_2[uVar4] = uVar3;
          uVar4 = uVar4 + 1;
          param_3 = param_3 + iVar1;
        } while (param_6 != uVar4);
      }
      goto LAB_140074727;
    }
    uVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
  }
  *param_2 = uVar3;
LAB_140074727:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400748c2 FUN_1400748c2 body=234 status=ok
// SIG undefined FUN_1400748c2(void)

void FUN_1400748c2(longlong *param_1,char param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = param_1[0x14];
  if (param_1[0x15] <= (longlong)uVar3) {
    if ((char)param_1[0x16] != '\x01') {
      lVar4 = (**(code **)(*param_1 + 8))(param_1);
      do {
        *(byte *)(lVar4 + 0x29) = *(byte *)(lVar4 + 0x29) | 2;
        lVar4 = *(longlong *)(lVar4 + 0x88);
      } while (lVar4 != 0);
      return;
    }
    lVar4 = param_1[0x15] * 2;
    if (lVar4 < (longlong)(uVar3 + 1)) {
      lVar4 = uVar3 + 1;
    }
    param_1[0x15] = lVar4;
    iVar2 = (int)param_1[0x13];
    iVar5 = (int)(lVar4 + 7U >> 3);
    *(int *)(param_1 + 0x13) = iVar5;
    uVar6 = iVar5 - iVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0x9c) - iVar2) < uVar6) {
      FUN_1447403be(param_1 + 0x12);
    }
    memset((void *)((longlong)iVar2 + param_1[0x12]),0,(longlong)(int)uVar6);
    uVar3 = param_1[0x14];
  }
  if (param_2 != '\0') {
    pbVar1 = (byte *)(param_1[0x12] + (longlong)(int)(uVar3 >> 3));
    *pbVar1 = *pbVar1 | (&DAT_149e37088)[(uint)uVar3 & 7];
    uVar3 = param_1[0x14];
  }
  param_1[0x14] = uVar3 + 1;
  return;
}



// FUNCTION 1400749ac FUN_1400749ac body=29 status=ok
// SIG undefined FUN_1400749ac(void)

void FUN_1400749ac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1400749ca FUN_1400749ca body=54 status=ok
// SIG undefined FUN_1400749ca(void)

undefined8 * FUN_1400749ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a391d80;
  FUN_14004710c(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140074a56 FUN_140074a56 body=106 status=ok
// SIG undefined FUN_140074a56(void)

void FUN_140074a56(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140074ac0(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140074ac0 FUN_140074ac0 body=58 status=ok
// SIG undefined FUN_140074ac0(void)

void FUN_140074ac0(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_LAB_14a1e27b0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 140074afa FUN_140074afa body=1505 status=ok
// SIG undefined FUN_140074afa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140074afa(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 *_Dst;
  undefined1 *puVar13;
  bool bVar14;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  uint local_5c;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  if ((*(uint *)(param_4 + 0x16) >> 10 & 1) == 0) {
    FUN_14476a7c0(param_1,param_4,param_2,param_3,FUN_140183844);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)&local_48);
  }
  puVar10 = &local_78;
  if ((*(uint *)(param_4 + 0x16) & 0x12051cc) != 0) {
    uVar6 = (**(code **)(*param_1 + 0x250))(param_1,param_4,param_2);
    puVar9 = &local_78;
    puVar10 = &local_78;
    if ((uVar6 & 1) != 0) {
      uVar1 = *(ushort *)((longlong)param_4 + 0xb6);
      if ((ulonglong)uVar1 == 0) {
        _Dst = (undefined1 *)0x0;
        puVar9 = &local_78;
      }
      else {
        lVar12 = (longlong)*(int *)((longlong)param_4 + 0x5c);
        if (lVar12 < 0x11) {
          local_80 = 0x140074bd5;
          lVar12 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
          _Dst = (undefined1 *)((longlong)&local_78 + lVar12);
          puVar9 = (undefined8 *)((longlong)&local_78 + lVar12);
        }
        else {
          local_80 = 0x140074bf5;
          lVar5 = -((ulonglong)(((uint)uVar1 + *(int *)((longlong)param_4 + 0x5c)) - 1) + 0xf &
                   0xfffffffffffffff0);
          _Dst = (undefined1 *)(-lVar12 & (longlong)&local_80 + lVar12 + lVar5 + 7);
          puVar9 = (undefined8 *)((longlong)&local_78 + lVar5);
        }
      }
      local_68 = *(longlong *)(param_2 + 0x20);
      local_78 = param_3;
      local_70 = param_1;
      local_5c = uVar6;
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074c1d;
      memset(_Dst,0,(ulonglong)uVar1);
      plVar11 = param_4;
      plVar7 = local_58;
joined_r0x000140074c24:
      local_58 = plVar11;
      if (local_58 != (longlong *)0x0) {
        lVar12 = local_58[10];
        while( true ) {
          if (lVar12 == 0) goto LAB_140074c52;
          puVar10 = *(undefined8 **)(lVar12 + 8);
          if ((~*(uint *)(puVar10 + 3) & 0x8001) == 0) break;
          lVar12 = *(longlong *)(lVar12 + 0x18);
        }
        plVar7 = local_58;
        if ((*(uint *)(lVar12 + 0x38) & 0x480) != 0x80) goto LAB_140074f1e;
LAB_140074c91:
        iVar2 = *(int *)(lVar12 + 0x44);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c951d20) {
          *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074def;
          FUN_144b3d300(&DAT_14c951d20);
          if (DAT_14c951d20 == -1) {
            if (*(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
                < DAT_14c951a88) {
              *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074e9c;
              FUN_144b3d300(&DAT_14c951a88);
              if (DAT_14c951a88 == -1) {
                *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074eb6;
                uVar8 = FUN_140342cba();
                *(code **)((longlong)puVar9 + -8) = FUN_1468c7f1e;
                *(undefined8 *)((longlong)puVar9 + -0x10) = uVar8;
                *(undefined8 *)((longlong)puVar9 + -0x18) = 0;
                *(undefined8 *)((longlong)puVar9 + -0x20) = 0x8001;
                *(undefined8 *)((longlong)puVar9 + -0x48) = 0x140074ef9;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074f09;
                atexit(FUN_14280c819);
                *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074f15;
                _Init_thread_footer(&DAT_14c951a88);
              }
            }
            *(code **)((longlong)puVar9 + -8) = FUN_14067a048;
            *(undefined **)((longlong)puVar9 + -0x10) = &DAT_14c951a38;
            *(undefined8 *)((longlong)puVar9 + -0x18) = 0;
            *(undefined8 *)((longlong)puVar9 + -0x20) = 0x28001;
            *(undefined8 *)((longlong)puVar9 + -0x48) = 0x140074e67;
            FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
            *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074e77;
            atexit(FUN_142811fe5);
            *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074e83;
            _Init_thread_footer(&DAT_14c951d20);
          }
        }
        puVar13 = _Dst + iVar2;
        if (DAT_14c951cd8 == 0) {
          bVar14 = puVar10 != (undefined8 *)0x0;
          if (puVar10 != &DAT_14c951cd0 && bVar14) {
            do {
              puVar10 = (undefined8 *)puVar10[6];
              bVar14 = puVar10 != (undefined8 *)0x0;
              if (puVar10 == &DAT_14c951cd0) break;
            } while (puVar10 != (undefined8 *)0x0);
          }
          if (bVar14) goto LAB_140074cfc;
LAB_140074d4f:
          uVar8 = *(undefined8 *)(param_2 + 0x18);
          pbVar3 = *(byte **)(param_2 + 0x20);
          *(byte **)(param_2 + 0x20) = pbVar3 + 1;
          pcVar4 = (code *)(&DAT_14c962c70)[*pbVar3];
          *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074d77;
          (*pcVar4)(uVar8,param_2,puVar13);
        }
        else {
          if ((puVar10[3] & DAT_14c951cd8) == 0) goto LAB_140074d4f;
LAB_140074cfc:
          if (*(int *)(lVar12 + 0x30) != 1) goto LAB_140074d4f;
          local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
          uVar8 = *(undefined8 *)(param_2 + 0x18);
          pbVar3 = *(byte **)(param_2 + 0x20);
          *(byte **)(param_2 + 0x20) = pbVar3 + 1;
          pcVar4 = (code *)(&DAT_14c962c70)[*pbVar3];
          *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074d2f;
          (*pcVar4)(uVar8,param_2,&local_50);
          if ((char)local_50 == '\x01') {
            puVar13[*(byte *)(lVar12 + 0x71)] =
                 ~*(byte *)(lVar12 + 0x73) & puVar13[*(byte *)(lVar12 + 0x71)] |
                 *(byte *)(lVar12 + 0x72);
          }
        }
        plVar11 = (longlong *)(lVar12 + 0x18);
        do {
          for (lVar12 = *plVar11; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x18)) {
            puVar10 = *(undefined8 **)(lVar12 + 8);
            if ((~*(uint *)(puVar10 + 3) & 0x8001) == 0) {
              plVar7 = local_58;
              if ((*(uint *)(lVar12 + 0x38) & 0x480) == 0x80) goto LAB_140074c91;
              goto LAB_140074f1e;
            }
          }
          pcVar4 = *(code **)(*local_58 + 0x2b0);
          *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074daf;
          local_58 = (longlong *)(*pcVar4)();
          plVar11 = local_58 + 10;
          plVar7 = local_58;
        } while (local_58 != (longlong *)0x0);
      }
LAB_140074f1e:
      local_58 = plVar7;
      param_1 = local_70;
      uVar8 = *(undefined8 *)(param_2 + 0x80);
      lVar12 = *local_70;
      *(longlong *)((longlong)puVar9 + -0x10) = param_2;
      pcVar4 = *(code **)(lVar12 + 600);
      *(undefined8 *)((longlong)puVar9 + -0x38) = 0x140074f45;
      (*pcVar4)(param_1,param_4,_Dst,uVar8);
      param_3 = local_78;
      if ((local_5c & 2) == 0) goto LAB_140074f53;
      puVar10 = puVar9;
      if (local_68 != 0) {
        *(longlong *)(param_2 + 0x20) = local_68;
      }
      goto LAB_140074f7d;
    }
    if ((uVar6 & 2) == 0) {
LAB_140074f53:
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074f65;
      FUN_140d2a93a(param_2,param_3,param_4);
      goto LAB_140074ff4;
    }
  }
LAB_140074f7d:
  lVar12 = param_4[4];
  if (DAT_14c950d78 == 0) {
    local_50 = FUN_1449e2820;
    *(code **)((longlong)puVar10 + -8) = FUN_14081d0ea;
    *(code **)((longlong)puVar10 + -0x10) = FUN_14081d0ea;
    *(code ***)((longlong)puVar10 + -0x18) = &local_50;
    *(undefined1 **)((longlong)puVar10 + -0x20) = &LAB_1468b50ee;
    *(code **)((longlong)puVar10 + -0x28) = FUN_1427f23a3;
    *(wchar_t **)((longlong)puVar10 + -0x30) = L"Engine";
    *(undefined8 *)((longlong)puVar10 + -0x38) = 0;
    *(undefined4 *)((longlong)puVar10 + -0x40) = 0x10004001;
    *(undefined4 *)((longlong)puVar10 + -0x48) = 8;
    *(undefined4 *)((longlong)puVar10 + -0x50) = 0x28;
    *(undefined8 *)((longlong)puVar10 + -0x78) = 0x1400750cc;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
    if (DAT_14c950d78 != 0) goto LAB_140074f91;
  }
  else {
LAB_140074f91:
    if ((*(int *)(DAT_14c950d78 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8)
        == DAT_14c950d78 + 0x30)) {
      *(undefined8 *)((longlong)puVar10 + -0x28) = 0x140075032;
      param_1 = (longlong *)FUN_144718840(param_1,lVar12);
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  *(longlong **)(param_2 + 0x90) = param_4;
  pcVar4 = (code *)param_4[0x1b];
  if (pcVar4 == FUN_144810466) {
    *(undefined8 *)((longlong)puVar10 + -0x28) = 0x140074fe9;
    FUN_144810466(param_1,param_2,param_3);
  }
  else {
    *(undefined8 *)((longlong)puVar10 + -0x28) = 0x140074fd9;
    (*pcVar4)(param_1,param_2,param_3);
  }
  *(undefined8 *)(param_2 + 0x90) = uVar8;
  puVar9 = puVar10;
LAB_140074ff4:
  if ((local_48 ^ (ulonglong)&local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar9 + -0x28) = &UNK_14007501e;
  FUN_144d8e3a0();
LAB_140074c52:
  pcVar4 = *(code **)(*local_58 + 0x2b0);
  *(undefined8 *)((longlong)puVar9 + -0x28) = 0x140074c63;
  plVar7 = (longlong *)(*pcVar4)();
  plVar11 = plVar7;
  goto joined_r0x000140074c24;
}



// FUNCTION 1400750e6 FUN_1400750e6 body=73 status=ok
// SIG undefined FUN_1400750e6(void)

undefined8 * FUN_1400750e6(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1447715ec(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 140075134 FUN_140075134 body=146 status=ok
// SIG undefined FUN_140075134(void)

undefined8 FUN_140075134(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x658);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar2 != (longlong *)0x0) != 0) goto LAB_14007518b;
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
LAB_1400751ac:
    bVar1 = DAT_14c950c29 & plVar2 != (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 0) goto LAB_140075152;
LAB_14007518b:
    FUN_1456cec3c(plVar2);
    plVar2 = *(longlong **)(param_1 + 0x658);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x660);
      goto LAB_1400751ac;
    }
    bVar1 = DAT_14c950c29 & 1;
  }
  if (bVar1 != 0) {
    FUN_1456cec3c(plVar2);
  }
LAB_140075152:
                    /* WARNING: Could not recover jumptable at 0x00014007515e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x418))(plVar2);
  return uVar3;
}



// FUNCTION 1400751c6 FUN_1400751c6 body=22 status=ok
// SIG undefined FUN_1400751c6(void)

undefined1 FUN_1400751c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1400751dc(param_2,param_3);
  return 1;
}



// FUNCTION 1400751dc FUN_1400751dc body=82 status=ok
// SIG undefined FUN_1400751dc(void)

longlong * FUN_1400751dc(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 14007522e FUN_14007522e body=1775 status=ok
// SIG undefined FUN_14007522e(void)

undefined8 FUN_14007522e(double *param_1,double *param_2)

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
  int iVar26;
  undefined4 extraout_var;
  longlong lVar27;
  double *pdVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  dVar29 = param_2[10];
  dVar32 = param_2[0xf];
  dVar33 = param_2[0xb];
  dVar1 = param_2[0xe];
  dVar16 = dVar29 * dVar32 - dVar1 * dVar33;
  dVar2 = param_2[6];
  dVar3 = param_2[7];
  dVar25 = dVar2 * dVar32 - dVar1 * dVar3;
  dVar22 = dVar2 * dVar33 - dVar29 * dVar3;
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  dVar6 = param_2[3];
  dVar20 = dVar32 * dVar5 - dVar1 * dVar6;
  dVar23 = dVar33 * dVar5 - dVar29 * dVar6;
  dVar2 = dVar5 * dVar3 - dVar2 * dVar6;
  dVar29 = param_2[5];
  dVar32 = param_2[9];
  dVar33 = param_2[0xd];
  dVar1 = dVar33 * dVar22 + (dVar29 * dVar16 - dVar25 * dVar32);
  dVar3 = dVar33 * dVar23 + (dVar4 * dVar16 - dVar20 * dVar32);
  dVar33 = dVar33 * dVar2 + (dVar4 * dVar25 - dVar20 * dVar29);
  dVar32 = dVar32 * dVar2 + (dVar4 * dVar22 - dVar29 * dVar23);
  dVar29 = (param_2[8] * dVar33 + (*param_2 * dVar1 - param_2[4] * dVar3)) - param_2[0xc] * dVar32;
  if ((dVar29 != 0.0) || (NAN(dVar29))) {
    iVar26 = _finite(dVar29);
    if (iVar26 != 0) {
      dVar29 = 1.0 / dVar29;
      dVar4 = param_2[4];
      dVar5 = param_2[8];
      dVar6 = param_2[0xc];
      dVar7 = *param_2;
      dVar8 = param_2[0xb];
      dVar9 = param_2[0xd];
      dVar10 = param_2[9];
      dVar11 = param_2[0xf];
      dVar21 = dVar10 * dVar11 - dVar9 * dVar8;
      dVar30 = param_2[7];
      dVar12 = param_2[5];
      dVar31 = dVar12 * dVar11 - dVar9 * dVar30;
      dVar18 = dVar12 * dVar8 - dVar10 * dVar30;
      dVar13 = param_2[3];
      dVar14 = param_2[1];
      dVar17 = dVar11 * dVar14 - dVar9 * dVar13;
      dVar15 = dVar8 * dVar14 - dVar10 * dVar13;
      dVar24 = dVar30 * dVar14 - dVar13 * dVar12;
      dVar8 = param_2[10];
      dVar11 = param_2[0xe];
      dVar19 = dVar10 * dVar11 - dVar9 * dVar8;
      dVar30 = param_2[6];
      dVar34 = dVar12 * dVar11 - dVar9 * dVar30;
      dVar13 = param_2[2];
      dVar11 = dVar11 * dVar14 - dVar9 * dVar13;
      dVar9 = dVar8 * dVar14 - dVar10 * dVar13;
      dVar8 = dVar12 * dVar8 - dVar10 * dVar30;
      dVar10 = dVar14 * dVar30 - dVar12 * dVar13;
      dVar30 = -dVar29;
      *param_1 = dVar1 * dVar29;
      param_1[1] = dVar3 * dVar30;
      param_1[2] = dVar33 * dVar29;
      param_1[3] = dVar32 * dVar30;
      param_1[4] = (dVar6 * dVar22 + (dVar4 * dVar16 - dVar25 * dVar5)) * dVar30;
      param_1[5] = (dVar6 * dVar23 + (dVar16 * dVar7 - dVar20 * dVar5)) * dVar29;
      param_1[6] = (dVar6 * dVar2 + (dVar25 * dVar7 - dVar20 * dVar4)) * dVar30;
      param_1[7] = (dVar2 * dVar5 + (dVar22 * dVar7 - dVar23 * dVar4)) * dVar29;
      param_1[8] = (dVar6 * dVar18 + (dVar4 * dVar21 - dVar31 * dVar5)) * dVar29;
      param_1[9] = (dVar6 * dVar15 + (dVar21 * dVar7 - dVar17 * dVar5)) * dVar30;
      param_1[10] = (dVar6 * dVar24 + (dVar31 * dVar7 - dVar17 * dVar4)) * dVar29;
      param_1[0xb] = (dVar24 * dVar5 + (dVar18 * dVar7 - dVar15 * dVar4)) * dVar30;
      param_1[0xc] = (dVar6 * dVar8 + (dVar4 * dVar19 - dVar34 * dVar5)) * dVar30;
      param_1[0xd] = (dVar6 * dVar9 + (dVar19 * dVar7 - dVar11 * dVar5)) * dVar29;
      param_1[0xe] = (dVar6 * dVar10 + (dVar34 * dVar7 - dVar11 * dVar4)) * dVar30;
      param_1[0xf] = (dVar10 * dVar5 + (dVar8 * dVar7 - dVar9 * dVar4)) * dVar29;
      return CONCAT71((int7)(CONCAT44(extraout_var,iVar26) >> 8),1);
    }
  }
  pdVar28 = (double *)&DAT_14c846400;
  for (lVar27 = 0x10; lVar27 != 0; lVar27 = lVar27 + -1) {
    *param_1 = *pdVar28;
    pdVar28 = pdVar28 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



// FUNCTION 14007591e FUN_14007591e body=195 status=ok
// SIG undefined FUN_14007591e(void)

float FUN_14007591e(longlong *param_1,longlong param_2,int *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  dVar2 = (double)((float)param_3[1] * 0.5) * *(double *)(param_2 + 0xb80);
  dVar3 = (double)((float)*param_3 * 0.5) * *(double *)(param_2 + 0xb78);
  if (dVar3 <= dVar2) {
    dVar3 = dVar2;
  }
  dVar2 = (double)param_1[0x28] - *(double *)(param_2 + 0xb58);
  dVar4 = (double)param_1[0x27] - *(double *)(param_2 + 0xb50);
  dVar5 = (double)param_1[0x26] - *(double *)(param_2 + 0xb48);
  fVar6 = (float)SQRT(dVar2 * dVar2 + dVar5 * dVar5 + dVar4 * dVar4);
  fVar1 = (float)(**(code **)(*param_1 + 0x18))();
  if (fVar6 <= 1.0) {
    fVar6 = 1.0;
  }
  return (fVar1 * (float)dVar3) / fVar6;
}



// FUNCTION 1400759e2 FUN_1400759e2 body=354 status=ok
// SIG undefined FUN_1400759e2(void)

ulonglong FUN_1400759e2(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4,
                       int *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_1[1] + (longlong)param_4 * 8);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if ((*(int *)(lVar2 + 0x828) != param_4) ||
         ((lVar6 = (longlong)param_4 * 0xc + param_1[3], *(char *)(param_3 + 0x38) == '\x01' &&
          ((*(byte *)(lVar6 + 10) & 1) == 0)))) goto LAB_140075af8;
      lVar3 = *(longlong *)(lVar2 + 0x668);
      if (lVar3 != 0) {
        *(byte *)(lVar6 + 10) = *(byte *)(lVar6 + 10) & 0xfc | *(byte *)(lVar6 + 10) * '\x02' & 2;
        uVar4 = *(undefined8 *)(lVar3 + 0x4e0);
        lVar5 = FUN_1449a78be(param_1,param_4,0);
        FUN_14085e496(param_2,lVar3,uVar4,*param_1,lVar2,0,*(undefined4 *)(param_3 + 0x34),lVar6);
        uVar1 = *(ushort *)(lVar5 + 4);
        if ((uVar1 & 1) == 0) {
          if ((uVar1 & 2) != 0) {
LAB_140075b18:
            *(byte *)(param_3 + 0x3b) =
                 *(byte *)(param_3 + 0x3b) | *(byte *)(lVar3 + 0x4f8) >> 5 & 1;
          }
        }
        else if (((uVar1 & 2) != 0) || ((*(byte *)(lVar6 + 10) & 0xc) != 0xc)) goto LAB_140075b18;
        *(byte *)(param_3 + 0x3a) =
             *(byte *)(param_3 + 0x3a) |
             (*(byte *)(lVar6 + 10) >> 3 ^ *(byte *)(lVar6 + 10) >> 2) & 1;
        *param_5 = *param_5 + 1;
        goto LAB_140075af8;
      }
      *(undefined4 *)(lVar2 + 0x828) = 0xffffffff;
    }
    else {
      param_4 = *(int *)(lVar2 + 0x828);
      *(undefined4 *)(lVar2 + 0x828) = 0xffffffff;
    }
  }
  FUN_140389238(param_1,param_4);
  uVar7 = 0;
LAB_140075af8:
  return uVar7 & 0xffffffff;
}



// FUNCTION 140075b44 FUN_140075b44 body=482 status=ok
// SIG undefined FUN_140075b44(void)

void FUN_140075b44(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,int *param_6,ushort *param_7,longlong param_8)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  bVar4 = 0;
  if ((DAT_14cb444a0 == '\0') && (bVar4 = 0, DAT_14c762a38 != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x668) + 0x4e0);
    iVar6 = *(int *)(lVar2 + 0x3c);
    iVar5 = *(int *)(lVar2 + 0x40);
    bVar3 = (byte)*(undefined4 *)(param_4 + 0x30);
    bVar4 = iVar5 <= (int)(uint)*param_7 & bVar3 >> 2 | iVar6 <= *param_6 & bVar3 >> 1;
    if ((DAT_14c762a48 != 0) &&
       ((DAT_14caf2ef8 == '\x01' && (DAT_14c76292c == '\x01' && bVar4 == 0)))) {
      uVar1 = *(uint *)(lVar2 + 0x5c);
      if ((uVar1 & 0xc) != 0) {
        if ((*(uint *)(lVar2 + 0x30) & 2) != 0 && (uVar1 & 4) != 0) {
          fVar7 = *(float *)(lVar2 + 0x74);
          if (DAT_14caf2f10 <= fVar7) {
            fVar7 = *(float *)(lVar2 + 0x78);
          }
          else if (*(float *)(lVar2 + 0x7c) <= DAT_14caf2f10) {
            fVar7 = *(float *)(lVar2 + 0x80);
          }
          else {
            fVar7 = (*(float *)(lVar2 + 0x80) - *(float *)(lVar2 + 0x78)) *
                    ((DAT_14caf2f10 - fVar7) / (*(float *)(lVar2 + 0x7c) - fVar7)) +
                    *(float *)(lVar2 + 0x78);
          }
          iVar6 = (int)((float)iVar6 * fVar7);
        }
        if ((uVar1 & 8) != 0 && (*(uint *)(lVar2 + 0x30) & 4) != 0) {
          fVar7 = *(float *)(lVar2 + 0x84);
          if (DAT_14caf2f10 <= fVar7) {
            fVar7 = *(float *)(lVar2 + 0x88);
          }
          else if (*(float *)(lVar2 + 0x8c) <= DAT_14caf2f10) {
            fVar7 = *(float *)(lVar2 + 0x90);
          }
          else {
            fVar7 = (*(float *)(lVar2 + 0x90) - *(float *)(lVar2 + 0x88)) *
                    ((DAT_14caf2f10 - fVar7) / (*(float *)(lVar2 + 0x8c) - fVar7)) +
                    *(float *)(lVar2 + 0x88);
          }
          iVar5 = (int)((float)iVar5 * fVar7);
        }
      }
      bVar4 = iVar5 <= (int)(uint)*param_7 & bVar3 >> 2 | iVar6 <= *param_6 & bVar3 >> 1;
    }
    bVar4 = bVar4 << 2;
  }
  bVar3 = *(byte *)(param_8 + 10);
  *(byte *)(param_8 + 10) = bVar4 | bVar3;
  if (bVar4 == 0 && (bVar3 & 4) == 0) {
    *param_6 = *param_6 + 1;
    *param_7 = *param_7 + 1;
  }
  return;
}



// FUNCTION 140075d26 FUN_140075d26 body=759 status=ok
// SIG undefined FUN_140075d26(void)

ulonglong FUN_140075d26(longlong *param_1,undefined8 param_2,uint param_3,byte param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  float fVar12;
  undefined7 uVar7;
  
  lVar8 = (longlong)(int)param_2;
  bVar1 = *(byte *)(param_1[3] + 10 + lVar8 * 0xc);
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (((((bVar1 >> 3 ^ bVar1 >> 2) & 1) == 0) || (((bVar1 & 2) == 0 & param_4) != 0)) ||
     (lVar3 = *(longlong *)(param_1[1] + lVar8 * 8), lVar3 == 0)) goto switchD_140075e9f_default;
  pbVar11 = (byte *)(param_1[3] + lVar8 * 0xc + 10);
  lVar8 = FUN_1449a78be(param_1,param_2,0);
  if ((*(byte *)(lVar8 + 4) & 2) != 0) {
    if (param_3 == 0) {
      param_3 = 1;
    }
    else if (param_3 == 2) {
      param_3 = 3;
    }
  }
  bVar1 = *pbVar11;
  if ((bVar1 & 4) == 0) {
    lVar8 = *(longlong *)(lVar3 + 0x668);
    if ((DAT_14c762a48 == 0) || (DAT_14caf2ef8 == '\0')) {
      lVar10 = *(longlong *)(lVar8 + 0x4e0);
      uVar9 = (ulonglong)*(uint *)(lVar10 + 0x3c);
      iVar4 = *(int *)(lVar10 + 0x40);
    }
    else {
      lVar10 = *(longlong *)(lVar8 + 0x4e0);
      uVar9 = (ulonglong)*(uint *)(lVar10 + 0x3c);
      iVar4 = *(int *)(lVar10 + 0x40);
      if ((DAT_14c76292c == '\x01') && (uVar2 = *(uint *)(lVar10 + 0x5c), (uVar2 & 0xc) != 0)) {
        if ((*(uint *)(lVar10 + 0x30) & 2) != 0 && (uVar2 & 4) != 0) {
          fVar12 = *(float *)(lVar10 + 0x74);
          if (DAT_14caf2f10 <= fVar12) {
            fVar12 = *(float *)(lVar10 + 0x78);
          }
          else if (*(float *)(lVar10 + 0x7c) <= DAT_14caf2f10) {
            fVar12 = *(float *)(lVar10 + 0x80);
          }
          else {
            fVar12 = (*(float *)(lVar10 + 0x80) - *(float *)(lVar10 + 0x78)) *
                     ((DAT_14caf2f10 - fVar12) / (*(float *)(lVar10 + 0x7c) - fVar12)) +
                     *(float *)(lVar10 + 0x78);
          }
          uVar9 = (ulonglong)(uint)(int)((float)(int)*(uint *)(lVar10 + 0x3c) * fVar12);
        }
        if ((uVar2 & 8) != 0 && (*(uint *)(lVar10 + 0x30) & 4) != 0) {
          fVar12 = *(float *)(lVar10 + 0x84);
          if (DAT_14caf2f10 <= fVar12) {
            fVar12 = *(float *)(lVar10 + 0x88);
          }
          else if (*(float *)(lVar10 + 0x8c) <= DAT_14caf2f10) {
            fVar12 = *(float *)(lVar10 + 0x90);
          }
          else {
            fVar12 = (*(float *)(lVar10 + 0x90) - *(float *)(lVar10 + 0x88)) *
                     ((DAT_14caf2f10 - fVar12) / (*(float *)(lVar10 + 0x8c) - fVar12)) +
                     *(float *)(lVar10 + 0x88);
          }
          iVar4 = (int)((float)iVar4 * fVar12);
        }
      }
    }
    if ((((DAT_14cb42e50 != 0) &&
         ((((*(longlong *)(lVar3 + 0x760) == 0 ||
            (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x760) + 0x30) + 0x86c) - 3U < 2)) &&
           ((*(uint *)(lVar10 + 0x30) & 2) != 0)) &&
          (((*(uint *)(lVar10 + 0x30) & 4) != 0 && ((int)uVar9 <= *(int *)(*param_1 + 0x70))))))) &&
        (iVar4 <= *(int *)(lVar8 + 0x4fc))) || (*pbVar11 = bVar1 & 0xf3, param_3 < 2))
    goto switchD_140075e9f_default;
    uVar6 = CONCAT71(uVar7,1);
    uVar5 = 0;
    if (param_3 != 4) {
      FUN_14083f3f8(lVar3,0,CONCAT71((int7)(uVar9 >> 8),1));
      goto switchD_140075e9f_default;
    }
LAB_140075f32:
    uVar6 = CONCAT71(uVar7,1);
    FUN_1402442c2(lVar3,uVar5,1);
    goto switchD_140075e9f_default;
  }
  *pbVar11 = bVar1 | 8;
  switch(param_3) {
  case 0:
    uVar6 = 0;
    uVar5 = 0;
    break;
  case 1:
    uVar6 = 0;
    uVar5 = 0;
    goto LAB_140075f5c;
  case 2:
    uVar6 = CONCAT71(uVar7,1);
    uVar5 = 1;
    break;
  case 3:
    uVar6 = CONCAT71(uVar7,1);
    uVar5 = 1;
LAB_140075f5c:
    FUN_1404ec998(lVar3,uVar5);
    goto switchD_140075e9f_default;
  case 4:
    uVar5 = 1;
    goto LAB_140075f32;
  default:
    goto switchD_140075e9f_default;
  }
  FUN_14073c87a(lVar3,uVar5);
switchD_140075e9f_default:
  return uVar6 & 0xffffffff;
}



// FUNCTION 140076026 FUN_140076026 body=156 status=ok
// SIG undefined FUN_140076026(void)

ulonglong FUN_140076026(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  FUN_14483f2ae();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  iVar2 = FUN_1448332aa(param_2,&DAT_14ad42464);
  bVar4 = (*(byte *)(param_2 + 5) & 1) == 0;
  if (0x3f < iVar2 || bVar4) {
    puVar3 = (undefined4 *)(param_1 + 0xc);
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
      }
      else {
        thunk_FUN_14572512c(param_2,puVar3);
      }
    }
    else {
      *puVar3 = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  return CONCAT71(0x14ad424,0x3f < iVar2 || bVar4) & 0xffffffff;
}



// FUNCTION 1400760c2 FUN_1400760c2 body=14 status=ok
// SIG undefined FUN_1400760c2(void)

void FUN_1400760c2(undefined4 *param_1)

{
  FUN_1400760d0(&DAT_14c87eb00,*param_1);
  return;
}



// FUNCTION 1400760d0 FUN_1400760d0 body=169 status=ok
// SIG undefined FUN_1400760d0(void)

longlong FUN_1400760d0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(uint *)(param_1 + 0x15014) < param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x17020) != *(int *)(param_1 + 0x1707c)) {
    lVar2 = param_1 + 0x17080;
    if (*(longlong *)(param_1 + 0x17480) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x17480);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x17488) - 1U &
                             (param_2 << 0x10 | param_2 & 0xffff) + ((param_2 & 0xffff) >> 4) +
                             ((param_2 >> 0x10) << 0x13 | param_2 >> 0x10)) * 4);
    if (iVar1 != -1) {
      lVar2 = param_1 + 0x15018;
      if (*(longlong *)(param_1 + 0x17018) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x17018);
      }
      do {
        lVar3 = lVar2 + (longlong)iVar1 * 0x10;
        if (*(uint *)(lVar2 + (longlong)iVar1 * 0x10) == param_2) goto LAB_14007616a;
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  lVar3 = 0;
LAB_14007616a:
  lVar2 = lVar3 + 4;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14007617a FUN_14007617a body=1041 status=ok
// SIG undefined FUN_14007617a(void)

ulonglong FUN_14007617a(longlong *param_1,byte param_2)

{
  int *piVar1;
  LARGE_INTEGER LVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  DWORD DVar7;
  DWORD dwTlsIndex;
  DWORD DVar8;
  LPVOID lpTlsValue;
  LARGE_INTEGER LVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  longlong *local_d8;
  int local_cc;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  local_e2 = param_2;
  local_d8 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar8 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c7585d0 != 0xffffffff;
    DVar7 = dwTlsIndex;
    if (bVar15) {
      DVar8 = DAT_14c7585d0;
      DVar7 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar7;
    UNLOCK();
    if (bVar15) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar8;
    }
  }
  plVar6 = local_d8;
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_c8 = -0x8000000000000000;
  LVar9.QuadPart = *plVar6;
  if (local_e2 == 0) {
    LVar2.QuadPart = *plVar6;
    uVar12 = (ulonglong)*(uint *)(LVar2.QuadPart + 0x34);
    LVar9.QuadPart = LVar2.QuadPart;
    if (*(int *)(LVar2.QuadPart + 0x20) + 2 <= (int)*(uint *)(LVar2.QuadPart + 0x34)) {
      LOCK();
      piVar1 = (int *)(LVar2.QuadPart + 0x28);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      LVar9.QuadPart = *plVar6;
      if ((iVar10 != -1) && (iVar10 < *(int *)(LVar2.QuadPart + 0x60))) {
        if ((undefined8 *)LVar9.QuadPart != (undefined8 *)0x0) {
          LOCK();
          *(int *)(LVar9.QuadPart + 8) = *(int *)(LVar9.QuadPart + 8) + 1;
          UNLOCK();
        }
        local_88.QuadPart = LVar9.QuadPart;
        FUN_1448eed04(&local_88,iVar10,1);
        if ((undefined8 *)local_88.QuadPart != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_88.QuadPart + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)**(undefined8 **)local_88)(local_88.QuadPart,1);
          }
        }
        LVar9.QuadPart = *plVar6;
      }
    }
    if ('\x02' < *(char *)(LVar9.QuadPart + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar18._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar18 = roundpd(auVar18,auVar18,1);
      local_c8 = (longlong)auVar18._0_8_;
      iVar10 = 0;
      if (0 < DAT_14c7585cc) {
        iVar10 = DAT_14c7585cc;
      }
      auVar16._0_8_ = (double)iVar10 * 10000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar18 = roundpd(auVar16,auVar16,1);
      local_e0 = (longlong)auVar18._0_8_;
      LVar9.QuadPart = *plVar6;
      bVar15 = true;
      goto LAB_14007634c;
    }
  }
  else {
    uVar12 = (ulonglong)*(uint *)(LVar9.QuadPart + 0x34);
  }
  bVar15 = false;
  local_e0 = 0;
LAB_14007634c:
  iVar10 = *(int *)(LVar9.QuadPart + 0x2c);
  local_b8 = (ulonglong)*(uint *)(LVar9.QuadPart + 0x30);
  puVar3 = *(undefined8 **)(LVar9.QuadPart + 0x40);
  local_cc = (int)uVar12 + -1;
  local_e1 = local_e2 ^ 1;
  local_c0 = uVar12;
  do {
    LOCK();
    piVar1 = (int *)(LVar9.QuadPart + 0x20);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c0 < iVar10) {
      bVar4 = local_cc <= iVar11;
      if (local_cc <= iVar11) {
        iVar11 = local_cc;
      }
      if ((local_e1 & bVar4) != 0) goto LAB_140076490;
    }
    iVar11 = iVar11 * (int)local_b8;
    iVar14 = iVar11 + (int)local_b8;
    iVar5 = iVar10;
    if (iVar14 < iVar10) {
      iVar5 = iVar14;
    }
    iVar13 = iVar11;
    if (iVar11 < iVar5) {
      do {
        local_88.QuadPart._0_4_ = iVar13;
        (*(code *)*puVar3)(puVar3[1],&local_88);
        iVar13 = iVar13 + 1;
      } while (iVar5 != iVar13);
    }
    plVar6 = local_d8;
    if (iVar11 < iVar10) {
      LOCK();
      piVar1 = (int *)(*local_d8 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)&local_88 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_d8 + 0x48) + 0x10))();
        }
        goto LAB_140076492;
      }
    }
    if (iVar14 < iVar10 && bVar15) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,1);
      if (local_e0 < (longlong)auVar18._0_8_ - local_c8) {
        *(undefined1 *)((longlong)plVar6 + 0xc) = 1;
LAB_140076490:
        uVar12 = 0;
LAB_140076492:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar12 & 0xffffffff;
      }
    }
    else if (iVar10 <= iVar14) goto LAB_140076490;
    LVar9.QuadPart = *plVar6;
  } while( true );
}



// FUNCTION 14007658c FUN_14007658c body=1896 status=ok
// SIG undefined FUN_14007658c(void)

void FUN_14007658c(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  void *_Dst;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  longlong lVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_108 [44];
  uint local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  longlong local_88;
  longlong local_78 [4];
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar20 = param_1 + 0x38;
  uVar18 = *(undefined4 *)(param_1 + 0x1b4);
  lVar9 = FUN_14001cc68(0x308,0x10);
  FUN_1431eb516(lVar9,lVar20);
  FUN_1431eb604(lVar20);
  local_d8 = lVar20;
  FUN_141645ea2(lVar20,lVar9 + 0xa0);
  *(undefined4 *)(param_1 + 0x1b8) = uVar18;
  LOCK();
  piVar2 = (int *)(*(longlong *)(lVar9 + 0x78) + 8);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
  FUN_1447439e4();
  local_c8 = 0;
  uStack_c0 = 0;
  iVar19 = *(int *)(param_2 + 1);
  if (iVar19 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar19 + 1);
  }
  if (iVar19 < 0) {
    uVar6 = 0;
    iVar19 = 0;
  }
  else {
    FUN_144775d28(&local_c8);
    iVar19 = (uint)uStack_c0;
    uVar6 = uStack_c0._4_4_;
  }
  uVar1 = iVar19 + 1;
  uStack_c0._0_4_ = uVar1;
  if (uVar6 < uVar1) {
    FUN_14741464c(&local_c8,iVar19);
  }
  uVar1 = (uint)uStack_c0;
  *(longlong *)(local_c8 + (longlong)iVar19 * 8) = lVar9;
  uVar6 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar6 != 0) {
    lVar20 = (longlong)(int)(uint)uStack_c0;
    uVar7 = (uint)uStack_c0 + uVar6;
    uVar8 = uStack_c0._4_4_ - (uint)uStack_c0;
    uStack_c0._0_4_ = uVar7;
    if (uVar8 < uVar6) {
      FUN_14741464c(&local_c8,uVar1);
    }
    memcpy((void *)(lVar20 * 8 + local_c8),(void *)*param_2,(longlong)(int)uVar6 << 3);
  }
  if (*(longlong *)(param_1 + 0x370) == 0) {
    _Dst = (void *)FUN_14001cc68(0x138);
    memset(_Dst,0,0x138);
    *(undefined4 *)((longlong)_Dst + 0x44) = 4;
    *(undefined1 *)((longlong)_Dst + 0x55) = 1;
    memset((void *)((longlong)_Dst + 0x58),0,0xc4);
    *(undefined8 *)((longlong)_Dst + 0x120) = 0;
    *(undefined8 *)((longlong)_Dst + 0x128) = 0;
    *(undefined1 *)((longlong)_Dst + 0x130) = 0;
    *(void **)(param_1 + 0x370) = _Dst;
    puVar11 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar11,0);
    *puVar11 = &PTR_FUN_149e00300;
    if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
    }
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar11[9] = puVar11;
    puVar11[10] = puVar11;
    lVar20 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar20 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(lVar20 + 0x30);
    }
    puVar11[0xf] = uVar12;
    puVar11[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = 2;
    lVar20 = *(longlong *)(param_1 + 0x388);
    if (lVar20 == 0) {
      puVar17 = (undefined8 *)0x0;
    }
    else {
      LOCK();
      *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
      UNLOCK();
      local_d0 = lVar20;
      FUN_14002c244(puVar11);
      puVar17 = *(undefined8 **)(param_1 + 0x388);
    }
    if (puVar17 != puVar11) {
      *(undefined8 **)(param_1 + 0x388) = puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
      }
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar17 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    puVar17 = *(undefined8 **)(param_1 + 0x388);
    puVar4 = (undefined8 *)**(longlong **)(param_1 + 0x370);
    if (puVar4 != puVar17) {
      **(longlong **)(param_1 + 0x370) = (longlong)puVar17;
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
      }
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    if (((DAT_14ca84f1f == '\x01') && (DAT_14ca84e99 == '\0')) &&
       (*(char *)(DAT_14ca83c28 + 1) == '\x01')) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x370) + 0x50) = *(undefined4 *)(DAT_14ca83c40 + 4);
      uVar13 = *(undefined1 *)(DAT_14ca83c58 + 1);
      uVar5 = 1;
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x370) + 0x50) = 0;
      uVar13 = 1;
      uVar5 = 0;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x370) + 0x54) = uVar13;
    *(undefined1 *)(*(longlong *)(param_1 + 0x370) + 0x55) = uVar5;
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar11 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar11)(puVar11,1);
      }
    }
  }
  if ((param_3 & 1) != 0) {
    *(bool *)(*(longlong *)(param_1 + 0x370) + 0x130) = DAT_14ca83d40 == 0;
    *(uint *)(*(longlong *)(param_1 + 0x370) + 0x118) = param_3;
    if ((param_3 & 6) == 2) {
      FUN_1431eb46e(*(longlong *)(param_1 + 0x370) + 0x120,
                    *(undefined1 *)(*(longlong *)(param_1 + 0x370) + 0x130));
    }
  }
  local_dc = param_3;
  if (0 < (int)(uint)uStack_c0) {
    lVar20 = param_1 + 0x390;
    lVar9 = 0;
    do {
      lVar10 = *(longlong *)(local_c8 + lVar9 * 8);
      iVar19 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar19 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar19 + 1U) {
        FUN_14476a5c8(param_1,iVar19);
      }
      lVar14 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar14 = param_1;
      }
      lVar3 = *(longlong *)(lVar10 + 0x78);
      *(longlong *)(lVar14 + (longlong)iVar19 * 8) = lVar3;
      if (lVar3 == 0) {
        local_78[0] = 0;
      }
      else {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
        local_78[0] = *(longlong *)(lVar10 + 0x78);
        if (local_78[0] != 0) {
          LOCK();
          *(int *)(local_78[0] + 8) = *(int *)(local_78[0] + 8) + 1;
          UNLOCK();
        }
      }
      local_50 = 0x400000001;
      local_58 = (longlong *)0x0;
      local_90 = *(longlong *)(param_1 + 0x370);
      local_a8 = (undefined ***)0x0;
      local_98 = &PTR_LAB_14a380dc0;
      local_b8[0] = FUN_1431eec18;
      uVar18 = 0x6ff;
      if (DAT_14c842750 == 0) {
        uVar18 = DAT_14c7585d4;
      }
      iVar19 = *(int *)(param_1 + 0x3b8);
      *(int *)(param_1 + 0x3b8) = iVar19 + 1;
      local_88 = lVar10;
      if (*(int *)(param_1 + 0x3bc) == iVar19) {
        FUN_14476a5c8(lVar20,iVar19);
      }
      plVar16 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar16 = local_78;
      }
      lVar10 = *(longlong *)(param_1 + 0x3b0);
      if (*(longlong *)(param_1 + 0x3b0) == 0) {
        lVar10 = lVar20;
      }
      memmove((void *)(lVar10 + (longlong)iVar19 * 8),plVar16,8);
      local_50 = local_50 & 0xffffffff00000000;
      FUN_140072b84(param_1 + 0x340,uVar18,lVar20,local_b8);
      if (local_b8[0] != (code *)0x0) {
        pppuVar15 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar15 = &local_98;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      plVar16 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar16 = local_78;
      }
      FUN_144717c65(plVar16,local_50 & 0xffffffff);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)(uint)uStack_c0);
  }
  uVar6 = local_dc;
  if ((local_dc & 1) != 0) {
    local_88 = *(longlong *)(param_1 + 0x370);
    local_a8 = (undefined ***)0x0;
    local_98 = &PTR_LAB_14a380de0;
    local_b8[0] = FUN_1431ef076;
    local_58 = (longlong *)0x0;
    local_50 = 0x400000000;
    uVar18 = 0x6ff;
    if (DAT_14c842750 == 0) {
      uVar18 = DAT_14c7585d4;
    }
    local_90 = param_1;
    FUN_140072b84(param_1 + 0x340,uVar18,param_1 + 0x390,local_b8);
    FUN_144717c65(local_78,0);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8[0] != (code *)0x0) {
      pppuVar15 = &local_98;
      if (local_a8 != (undefined ***)0x0) {
        pppuVar15 = local_a8;
      }
      (*(code *)(*pppuVar15)[2])();
    }
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  if (((uVar6 & 4) != 0) || ((uVar6 & 1) != 0 && (DAT_14c842750 & 1) == 0)) {
    if ((*(longlong *)(param_1 + 0x388) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x388) + 0xa0) & 1) == 0)) {
      FUN_14009fd82(DAT_14c82b500,param_1 + 0x388,DAT_14c7585d4);
    }
    FUN_1431eb898();
  }
  if (DAT_14ca83900 != 0) {
    FUN_14002049c(local_d8,1);
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140076d02 FUN_140076d02 body=155 status=ok
// SIG undefined FUN_140076d02(void)

void FUN_140076d02(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (param_2 <= iVar1) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      FUN_146d9d516(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146d9d576(param_1);
        return;
      }
    }
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  uVar2 = param_2 - iVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
    FUN_140fab7a0(param_1,iVar1);
  }
  if (uVar2 != 0) {
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)uVar2 << 4);
    return;
  }
  return;
}



// FUNCTION 140076daa FUN_140076daa body=155 status=ok
// SIG undefined FUN_140076daa(void)

void FUN_140076daa(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (param_2 <= iVar1) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      FUN_146d9d902(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146d9d962(param_1);
        return;
      }
    }
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  uVar2 = param_2 - iVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
    FUN_140cd9fe2(param_1,iVar1);
  }
  if (uVar2 != 0) {
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)uVar2 << 4);
    return;
  }
  return;
}



// FUNCTION 140076e46 FUN_140076e46 body=141 status=ok
// SIG undefined FUN_140076e46(void)

bool FUN_140076e46(undefined4 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_3 = 0;
  local_20 = param_2;
  if (((DAT_14c83f3d0 != 0) && (DAT_14c83f3c8 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*DAT_14c83f3c8 + 0x30))(), cVar1 != '\0')) {
    plVar2 = DAT_14c83f3c8;
    if (DAT_14c83f3d0 == 0) {
      plVar2 = (longlong *)0x0;
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_1,&local_20,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *param_3 != 0;
}



// FUNCTION 140076ed4 FUN_140076ed4 body=69 status=ok
// SIG undefined FUN_140076ed4(void)

void FUN_140076ed4(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  if (*(char *)(param_2 + 2) != '\0') {
    *(undefined8 *)(param_4 + 0x28) = DAT_14c866ff8;
  }
  FUN_144775fd8(param_1,param_2,*(undefined8 *)(param_4 + 0x10));
  FUN_144775e63(param_1,param_3,*(undefined8 *)(param_4 + 0x18));
  return;
}



// FUNCTION 140076f1a FUN_140076f1a body=95 status=ok
// SIG undefined FUN_140076f1a(void)

void FUN_140076f1a(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_140076f80();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x000140076f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}



// FUNCTION 140076f80 FUN_140076f80 body=57 status=ok
// SIG undefined FUN_140076f80(void)

void FUN_140076f80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a7c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a7c8 = FUN_140002ddd(FUN_1464cae36,uVar1,L"GbxBodyNodeSettings_SceneComponent");
  }
  return;
}



// FUNCTION 140076fba FUN_140076fba body=70 status=ok
// SIG undefined FUN_140076fba(void)

bool FUN_140076fba(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 140077008 FUN_140077008 body=96 status=ok
// SIG undefined FUN_140077008(void)

ulonglong FUN_140077008(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  
  FUN_14483f2ae();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  iVar1 = FUN_1448332aa(param_2,&DAT_14ad42464);
  bVar2 = (*(byte *)(param_2 + 5) & 1) == 0;
  if (0x3f < iVar1 || bVar2) {
    FUN_140077068(param_2,param_1 + 0x10);
  }
  return CONCAT71(0x14ad424,0x3f < iVar1 || bVar2) & 0xffffffff;
}



// FUNCTION 140077068 FUN_140077068 body=285 status=ok
// SIG undefined FUN_140077068(void)

longlong * FUN_140077068(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1),(longlong)*(int *)((longlong)param_2 + 0xc));
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_144893a1c(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x1000000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1447a127e(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140077186 FUN_140077186 body=51 status=ok
// SIG undefined FUN_140077186(void)

void FUN_140077186(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1400771ba FUN_1400771ba body=203 status=ok
// SIG undefined FUN_1400771ba(void)

longlong FUN_1400771ba(char *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = FUN_14001cc68(0x3b8,0x10);
  *(undefined8 *)(lVar3 + 0x380) = 0;
  *(undefined8 *)(lVar3 + 0x388) = 0x800000000;
  *(undefined8 *)(lVar3 + 0x390) = 0;
  *(undefined8 *)(lVar3 + 0x398) = 0;
  *(undefined4 *)(lVar3 + 0x3a0) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x3a4) = 0;
  *(undefined4 *)(lVar3 + 0x3a8) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x3ac) = 0;
  *(undefined1 *)(lVar3 + 0x3b0) = 0;
  LOCK();
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar1 != '\0') {
    FUN_1447d2058();
  }
  iVar2 = *(int *)(param_1 + 0x410);
  *(uint *)(param_1 + 0x410) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x414) < iVar2 + 1U) {
    FUN_14717a924(param_1 + 8,iVar2);
  }
  pcVar4 = param_1 + 8;
  if (*(char **)(param_1 + 0x408) != (char *)0x0) {
    pcVar4 = *(char **)(param_1 + 0x408);
  }
  *(longlong *)(pcVar4 + (longlong)iVar2 * 8) = lVar3;
  if (param_1 != (char *)0x0) {
    LOCK();
    cVar1 = *param_1;
    if (cVar1 == '\x01') {
      *param_1 = '\0';
    }
    UNLOCK();
    if (cVar1 != '\x01') {
      FUN_14008cdb0(param_1);
    }
  }
  return lVar3;
}



// FUNCTION 140077286 FUN_140077286 body=454 status=ok
// SIG undefined FUN_140077286(void)

void FUN_140077286(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x388);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 9) {
    *(undefined4 *)((longlong)param_1 + 0x38c) = 8;
    _Src = *(void **)((longlong)param_1 + 0x380);
joined_r0x0001400773bc:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x70);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    lVar3 = (longlong)(int)uVar1;
    if (8 < *(uint *)((longlong)param_1 + 0x38c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 0x70;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4 >> 4;
    uVar4 = (uVar4 >> 4) / 7;
    uVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    if ((int)uVar6 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x38c) = 0x7fffffff;
      uVar4 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x380);
    }
    else {
      *(uint *)((longlong)param_1 + 0x38c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x380);
      if (uVar6 < 9) goto joined_r0x0001400773bc;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x380,0,uVar4,0x70);
      memmove(*(void **)((longlong)param_1 + 0x380),param_1,(longlong)param_2 * 0x70);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x380,param_2,uVar4,0x70);
  return;
}



// FUNCTION 14007744c FUN_14007744c body=1066 status=ok
// SIG undefined FUN_14007744c(void)

ulonglong FUN_14007744c(longlong param_1,longlong *param_2,ulonglong param_3,longlong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined7 uVar14;
  uint uVar15;
  undefined *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  
  lVar24 = 0x10;
  if (DAT_14c86a9f8 == '\x01') {
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar7 = *(int *)(lVar10 + 0xc60);
    if (iVar7 != 2) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1400774b2;
        iVar7 = *(int *)(lVar10 + 0xc60);
      }
      lVar24 = (ulonglong)(iVar7 != 0x40000002) * 8 + 0x10;
    }
  }
LAB_1400774b2:
  lVar24 = *(longlong *)(param_1 + lVar24);
  if (lVar24 == 0) {
    uVar13 = 0;
    goto LAB_1400777eb;
  }
  *param_4 = lVar24;
  uVar22 = *(ulonglong *)(lVar24 + 0x28);
  uVar11 = 0x9b;
  if ((uVar22 != 0) && (DAT_14ca80058 != DAT_14ca80084)) {
    lVar24 = *(longlong *)(uVar22 + 0x58);
    uVar3 = (uint)((ulonglong)lVar24 >> 0x10);
    uVar23 = (uint)lVar24 & 0xffff;
    puVar16 = &DAT_14ca80088;
    if (DAT_14ca80090 != (undefined *)0x0) {
      puVar16 = DAT_14ca80090;
    }
    iVar7 = *(int *)(puVar16 +
                    (ulonglong)
                    (DAT_14ca80098 - 1U &
                    (int)((ulonglong)lVar24 >> 0x20) + ((uint)lVar24 << 0x10 | uVar23) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar23 >> 4)) * 4);
    while (iVar7 != -1) {
      plVar2 = (longlong *)(DAT_14ca80050 + (longlong)iVar7 * 0x14);
      if (*plVar2 == lVar24) {
        if ((plVar2 != (longlong *)0x0) && ((ushort *)(plVar2 + 1) != (ushort *)0x0)) {
          uVar11 = *(ushort *)(plVar2 + 1);
        }
        break;
      }
      iVar7 = *(int *)((longlong)plVar2 + 0xc);
    }
  }
  uVar13 = param_3;
  if (param_3 != 0) {
    uVar3 = *(uint *)(uVar22 + 0x68);
    uVar18 = *(ulonglong *)(uVar22 + 0x60);
    uVar12 = uVar22 + 0x60 + ((longlong)uVar18 >> 0x18);
    uVar22 = uVar12;
    if ((uVar18 & 1) == 0) {
      uVar22 = uVar18;
    }
    if ((int)uVar3 < 1) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      uVar20 = (ulonglong)uVar3;
      do {
        uVar23 = (int)(uVar20 >> 1) + (int)uVar17;
        puVar19 = (ulonglong *)(uVar22 + (ulonglong)uVar23 * 8);
        uVar13 = *puVar19;
        uVar21 = ((longlong)uVar13 >> 0x18) + (longlong)puVar19;
        if ((uVar13 & 1) == 0) {
          uVar21 = uVar13;
        }
        uVar15 = (uint)uVar20;
        if (*(ulonglong *)(uVar21 + 0x60) < *(ulonglong *)(param_3 + 0x20)) {
          uVar17 = (ulonglong)(uVar23 + (uVar15 & 1));
        }
        uVar20 = uVar20 >> 1;
      } while (1 < uVar15);
    }
    if ((int)uVar17 < (int)uVar3) {
      puVar19 = (ulonglong *)(uVar22 + uVar17 * 8);
      uVar22 = *puVar19;
      uVar20 = ((longlong)uVar22 >> 0x18) + (longlong)puVar19;
      if ((uVar22 & 1) == 0) {
        uVar20 = uVar22;
      }
      if (*(ulonglong *)(uVar20 + 0x60) <= *(ulonglong *)(param_3 + 0x20)) {
        if ((uVar18 & 1) == 0) {
          uVar12 = uVar18;
        }
        uVar22 = *(ulonglong *)(uVar12 + uVar17 * 8);
        if ((uVar22 & 1) != 0) {
          uVar22 = ((longlong)uVar22 >> 0x18) + uVar12 + uVar17 * 8;
        }
        goto LAB_14007764a;
      }
    }
    uVar22 = 0;
  }
LAB_14007764a:
  if (((*param_2 == 0) ||
      (uVar13 = (ulonglong)uVar11 * 0x3c,
      (*(byte *)((longlong)&DAT_14ca814d8 + uVar13 + 1) & 8) == 0)) ||
     (cVar6 = FUN_144939fee(), cVar6 == '\0')) {
    lVar24 = -0x30;
    uVar12 = 0;
    do {
      lVar10 = *(longlong *)((longlong)param_2 + lVar24 * 2 + 0x68);
      uVar14 = (undefined7)(uVar13 >> 8);
      uVar13 = CONCAT71(uVar14,lVar10 != 0 | (byte)uVar12);
      if ((lVar10 != 0) && (uVar22 != 0)) {
        lVar10 = FUN_144b1d0c2(uVar22,lVar10 + 0x28,
                               *(undefined4 *)((longlong)param_2 + lVar24 + 0x98));
        if (lVar10 == 0) {
          uVar13 = CONCAT71(uVar14,1);
        }
        else {
          *(longlong *)((longlong)param_4 + lVar24 * 2 + 0x70) = lVar10;
          uVar13 = uVar12;
        }
      }
      uVar12 = uVar13 & 0xffffffff;
      lVar24 = lVar24 + 4;
    } while (lVar24 != 0);
  }
  else {
    lVar24 = *param_2;
    if (uVar22 == 0) {
LAB_140077801:
      if (*(char *)(lVar24 + 0xac) == '\x01') {
        uVar13 = CONCAT71((int7)(uVar13 >> 8),*(undefined1 *)((longlong)&DAT_14ca814d8 + uVar13 + 1)
                         ) & 0xffffffffffffff08;
        uVar13 = CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 3);
        goto LAB_1400777db;
      }
    }
    else {
      uVar3 = *(uint *)(uVar22 + 0x50);
      uVar12 = *(ulonglong *)(uVar22 + 0x48);
      uVar22 = uVar22 + 0x48 + ((longlong)uVar12 >> 0x18);
      uVar18 = uVar22;
      if ((uVar12 & 1) == 0) {
        uVar18 = uVar12;
      }
      if ((int)uVar3 < 1) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        uVar15 = uVar3;
        do {
          uVar1 = (uVar15 >> 1) + uVar23;
          puVar19 = (ulonglong *)(uVar18 + (ulonglong)uVar1 * 8);
          puVar4 = (ulonglong *)*puVar19;
          puVar19 = (ulonglong *)(((longlong)puVar4 >> 0x18) + (longlong)puVar19);
          if (((ulonglong)puVar4 & 1) == 0) {
            puVar19 = puVar4;
          }
          if (*puVar19 < *(ulonglong *)(lVar24 + 0x10)) {
            uVar23 = uVar1 + (uVar15 & 1);
          }
          bVar5 = 1 < uVar15;
          uVar15 = uVar15 >> 1;
        } while (bVar5);
      }
      if ((int)uVar3 <= (int)uVar23) goto LAB_140077801;
      uVar17 = (ulonglong)uVar23;
      puVar19 = (ulonglong *)(uVar18 + uVar17 * 8);
      puVar4 = (ulonglong *)*puVar19;
      puVar19 = (ulonglong *)(((longlong)puVar4 >> 0x18) + (longlong)puVar19);
      if (((ulonglong)puVar4 & 1) == 0) {
        puVar19 = puVar4;
      }
      if (*(ulonglong *)(lVar24 + 0x10) < *puVar19) goto LAB_140077801;
      if ((uVar12 & 1) == 0) {
        uVar22 = uVar12;
      }
      uVar12 = *(ulonglong *)(uVar22 + uVar17 * 8);
      if ((uVar12 & 1) != 0) {
        uVar12 = ((longlong)uVar12 >> 0x18) + uVar22 + uVar17 * 8;
      }
      if (uVar12 == 0) goto LAB_140077801;
      param_4[1] = uVar12;
      lVar24 = 0;
      do {
        uVar13 = *(ulonglong *)(uVar12 + 8 + lVar24);
        uVar22 = ((longlong)uVar13 >> 0x18) + uVar12 + 8 + lVar24;
        if ((uVar13 & 1) == 0) {
          uVar22 = uVar13;
        }
        if (uVar22 != 0) {
          *(ulonglong *)((longlong)param_4 + lVar24 + 0x10) = uVar22;
        }
        lVar24 = lVar24 + 8;
      } while (lVar24 != 0x28);
    }
    uVar13 = 0;
  }
LAB_1400777db:
  uVar13 = uVar13 ^ 1;
  FUN_144b25a0f(0,0);
LAB_1400777eb:
  return uVar13 & 0xffffff01;
}



// FUNCTION 140077876 FUN_140077876 body=500 status=ok
// SIG undefined FUN_140077876(void)

undefined8 FUN_140077876(uint param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ushort uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96910) && (FUN_144b3d300(&DAT_14ca96910), DAT_14ca96910 == -1)) {
    FUN_140056680(&DAT_14ca968f8,L"r.EarlyZPassOnlyMaterialMasking");
    DAT_14ca96908 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_1432249ff);
    _Init_thread_footer(&DAT_14ca96910);
  }
  uVar7 = (ushort)param_1;
  uVar5 = (ulonglong)param_1 & 0xffff;
  if ((&DAT_14ca814b8)[uVar5 * 0xf] == 1) {
    if (DAT_14ca964d8 == 2) {
      return CONCAT71((int7)(uVar5 * 0x3c >> 8),1);
    }
    uVar3 = FUN_147430516(param_1);
    return uVar3;
  }
  puVar2 = &DAT_14ca84468;
  if (uVar7 != 0x31) {
    switch((int)uVar5) {
    case 0x30:
switchD_14007792d_caseD_30:
      puVar2 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14007792d_caseD_31:
      if ((uVar7 & 0xfff0) != 0x20) {
        uVar3 = 0;
        goto LAB_1400778cc;
      }
      lVar4 = FUN_14741392a();
      puVar2 = (undefined8 *)(lVar4 + (ulonglong)(param_1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14007792d_caseD_34:
      puVar2 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14007792d_caseD_35:
      puVar2 = &DAT_14ca84478;
      break;
    default:
      switch(uVar5) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14007792d_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14007792d_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14007792d_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14007792d_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar2 = &DAT_14ca84488;
      }
    }
  }
  uVar3 = *puVar2;
LAB_1400778cc:
  if (DAT_14ca96908 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar6 = DAT_14ca968f8;
    if (DAT_14ca96900 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    DAT_14ca96908 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar6,1);
  }
  cVar1 = FUN_14002b5e0(uVar3,"Windows",7);
  if ((cVar1 == '\0') && (DAT_14ca85550 != uVar7)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014007790c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*DAT_14ca96908 + 0xa8))();
  return uVar3;
}



// FUNCTION 140077a6a FUN_140077a6a body=4604 status=ok
// SIG undefined FUN_140077a6a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140077a6a(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8,
                  int param_9,int param_10,longlong param_11,byte param_12,longlong param_13)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 auStack_348 [32];
  longlong *local_328;
  longlong *local_320;
  longlong local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  longlong *local_300;
  longlong *local_2f8;
  undefined8 *local_2f0;
  longlong *local_2e8;
  longlong local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  undefined8 *local_2c0;
  uint local_2b4;
  longlong local_2b0;
  uint local_2a4;
  ulonglong local_2a0;
  undefined8 local_298;
  longlong *******local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined2 local_19f;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_180 [2];
  longlong *local_170;
  undefined8 local_168;
  longlong *******local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  char local_67;
  undefined1 local_66;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  uVar6 = 0;
  if (param_4 == (undefined8 *)0x0) {
    local_2b0 = 0;
  }
  else {
    local_2b0 = param_4[0x43];
  }
  local_2d0 = *(longlong **)(param_2 + 0xb8);
  local_170 = (longlong *)0x0;
  local_168 = 0x200000000;
  local_b0 = 0;
  local_a8 = 0x700000000;
  local_160 = (longlong *******)0x0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_98 = 0;
  local_78 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  local_2d8 = param_2;
  local_2a0 = param_3;
  if (param_6[3] != 0) {
    if ((*(byte *)(*(longlong *)(param_6[3] + 0x28) + 0x246) & 0x10) == 0) {
      uVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*param_6 + 0x358))(param_6);
      uVar6 = (uint)(byte)(cVar2 * '\x02' + 1);
    }
  }
  local_66 = *(undefined1 *)(param_7 + 7);
  local_19c = *(uint *)(local_2d8 + 0xe4) >> 0xe & 7;
  local_218 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_210 = 1;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  lStack_1f0 = 0;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0xffffffff;
  uStack_1d4 = 0xffffffff;
  uStack_1d0 = 0xffffffff;
  uStack_1cc = 0xffffffff;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  local_19f = 1;
  local_198 = 0;
  local_190 = 0;
  uStack_1b0 = (undefined4)param_5[10];
  uStack_1ac = *(undefined4 *)((longlong)param_5 + 0x54);
  uStack_1a8 = (undefined4)param_5[0xb];
  uStack_1a4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  local_2b4 = 2;
  if ((param_12 & 2) == 0) {
    local_2b4 = (uint)(param_12 & 1);
  }
  uVar12 = (ulonglong)local_2b4;
  local_248 = 0;
  uStack_240 = 0;
  local_288 = *param_8;
  local_280 = param_8[1];
  local_278 = param_8[2];
  local_270 = param_8[3];
  local_268 = param_8[4];
  local_260 = param_8[5];
  local_258 = param_8[6];
  local_250 = param_8[7];
  local_238 = param_8[8];
  local_230 = param_8[9];
  local_64 = local_19c;
  FUN_144765e6c(&local_228,local_2d0[uVar12 + 0x22],&local_288);
  local_2c8 = local_180;
  FUN_1447662e4(local_180,&local_288);
  if (param_9 == 0) {
    puVar11 = &DAT_14c9c0e48;
    if (param_10 == 2) {
      puVar11 = &DAT_14c9c0e60;
    }
    puVar7 = &DAT_14c9c0e78;
  }
  else if (param_9 == 1) {
    puVar11 = &DAT_14c9c0e00;
    if (param_10 == 2) {
      puVar11 = &DAT_14c9c0e18;
    }
    puVar7 = &DAT_14c9c0e30;
  }
  else {
    puVar11 = &DAT_14c9c0d58;
    if (param_10 == 2) {
      puVar11 = &DAT_14c9c0de8;
    }
    puVar7 = &DAT_14c9c0da0;
  }
  if (param_10 != 0) {
    puVar7 = puVar11;
  }
  uStack_1c0 = *(undefined8 *)(puVar7 + 0x10);
  local_1c8 = *param_7;
  local_1b8 = param_7[1];
  if ((DAT_14ca84f32 == '\x01') && (*(int *)(DAT_14ca620d8 + 4) != 0)) {
    uVar4 = (**(code **)(*param_6 + 0x490))(param_6);
    if (uVar4 < 4) {
      uVar3 = (undefined1)(0x5010400 >> ((byte)(uVar4 << 3) & 0x1f));
    }
    else {
      uVar3 = 0;
      if ((uVar4 < 7) && (DAT_14ca84f33 != '\0')) {
        uVar3 = (undefined1)(0xa060900000000 >> ((byte)(uVar4 << 3) & 0x3f));
      }
    }
  }
  else {
    uVar3 = 0;
  }
  local_19f = CONCAT11(uVar3,(undefined1)local_19f);
  cVar2 = (**(code **)(*param_6 + 0x4a0))(param_6);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1449c014c(param_1);
  }
  local_19f = CONCAT11(local_19f._1_1_,uVar3);
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    FUN_144766928(&local_228);
  }
  FUN_144765fea(local_2d0,*(undefined4 *)(param_1 + 0x20),local_2b4);
  plVar17 = local_2d0;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar8 = (**(code **)(*local_2d0 + 0x30))(local_2d0);
    local_328._0_4_ = uVar5;
    FUN_1456c013a(&local_228,param_6,uVar8,param_4);
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar8 = (**(code **)(*plVar17 + 0x30))(plVar17);
    local_328 = (longlong *)CONCAT44(local_328._4_4_,uVar5);
    FUN_1456c0257(&local_228,param_6,uVar8);
  }
  local_67 = *(char *)((longlong)local_2d0 + uVar12 + 0x128);
  local_2a4 = uVar6 + 4;
  if (local_67 == -1) {
    local_2a4 = uVar6;
  }
  local_2a4 = local_2a4 & 0xff;
  lVar15 = *param_8;
  local_2c0 = param_4;
  if (lVar15 == 0) {
    uVar6 = 0;
  }
  else {
    if ((local_110 & 1) == 0) {
      local_290 = (longlong *******)0x0;
      local_298 = 0x58;
      uVar6 = 0;
    }
    else {
      plVar17 = local_170;
      if (local_170 == (longlong *)0x0) {
        plVar17 = local_180;
      }
      local_298 = *plVar17;
      uVar12 = *(ulonglong *)(local_298 + 0x30);
      if ((uVar12 & 1) != 0) {
        uVar12 = ((longlong)uVar12 >> 0x18) + local_298 + 0x30;
      }
      iVar13 = *(int *)(local_298 + 0x28);
      iVar19 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        lVar10 = 0;
        iVar19 = 0;
        do {
          iVar19 = iVar19 + (uint)*(ushort *)(uVar12 + 2 + lVar10);
          lVar10 = lVar10 + 0x18;
        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar10);
      }
      iVar16 = iVar13 + 0xe;
      if (-1 < iVar13 + 7) {
        iVar16 = iVar13 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      uVar6 = iVar19 + (iVar16 >> 3) +
                       (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar13) * 8 + 7U &
              0xfffffff8;
    }
    local_310 = &local_298;
    local_318 = param_13;
    local_320 = param_6;
    local_328 = param_5;
    FUN_14474308c(lVar15,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),param_4);
    lVar10 = *(longlong *)(param_13 + 0x10);
    if (lVar10 == 0) {
      lVar14 = 0;
LAB_140078025:
      lVar10 = 0;
    }
    else {
      lVar14 = *(longlong *)(lVar10 + 0x28);
      if (*(longlong *)(lVar10 + 0x20) == 0) goto LAB_140078025;
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + 0x50);
    }
    if (lVar14 == 0) {
      lVar14 = DAT_14c9e9108;
    }
    if (lVar10 == 0) {
      lVar10 = DAT_14cb05400;
    }
    if ((param_4 == (undefined8 *)0x0) || (param_4[0x43] == 0)) {
      lVar21 = 0;
    }
    else {
      lVar21 = *(longlong *)(param_4[0x43] + 0xc0);
    }
    if (lVar21 == 0) {
      lVar21 = DAT_14c9e9130;
    }
    if (*(short *)(lVar15 + 0x108) != -1) {
      FUN_144b11088(&local_298,lVar14);
    }
    if (*(short *)(lVar15 + 0x10a) != -1) {
      FUN_144b11088(&local_298,lVar21);
    }
    if (*(short *)(lVar15 + 0x10c) != -1) {
      FUN_144b11088(&local_298,lVar10);
    }
  }
  puVar1 = local_2c0;
  lVar15 = param_8[2];
  if (lVar15 == 0) goto LAB_1400782ba;
  uVar12 = (ulonglong)(local_110 & 0xf) - (ulonglong)(local_110 >> 1 & 5);
  uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
  uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar12 < 0x100000000000000) {
    local_298 = 0x58;
    local_290 = (longlong *******)0x0;
  }
  else {
    plVar17 = local_170;
    if (local_170 == (longlong *)0x0) {
      plVar17 = local_180;
    }
    local_298 = plVar17[(uVar12 >> 0x38) - 1];
    uVar12 = *(ulonglong *)(local_298 + 0x30);
    if ((uVar12 & 1) != 0) {
      uVar12 = ((longlong)uVar12 >> 0x18) + local_298 + 0x30;
    }
    iVar13 = *(int *)(local_298 + 0x28);
    iVar19 = 0;
    if ((longlong)*(int *)(local_298 + 0x38) != 0) {
      lVar10 = 0;
      iVar19 = 0;
      do {
        iVar19 = iVar19 + (uint)*(ushort *)(uVar12 + 2 + lVar10);
        lVar10 = lVar10 + 0x18;
      } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar10);
    }
    iVar16 = iVar13 + 0xe;
    if (-1 < iVar13 + 7) {
      iVar16 = iVar13 + 7;
    }
    local_290 = (longlong *******)&local_160;
    if (0x50 < local_110._2_2_) {
      local_290 = local_160;
    }
    local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)local_290);
    uVar6 = ((iVar16 >> 3) + (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar13) * 8 +
             iVar19 + 7U & 0xfffffff8) + uVar6;
  }
  local_310 = &local_298;
  local_318 = param_13;
  local_320 = param_6;
  local_328 = param_5;
  FUN_14474308c(lVar15,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),local_2c0);
  lVar10 = *(longlong *)(param_13 + 0x10);
  if (lVar10 == 0) {
    lVar14 = 0;
LAB_140078224:
    lVar10 = 0;
  }
  else {
    lVar14 = *(longlong *)(lVar10 + 0x28);
    if (*(longlong *)(lVar10 + 0x20) == 0) goto LAB_140078224;
    lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + 0x50);
  }
  if (lVar14 == 0) {
    lVar14 = DAT_14c9e9108;
  }
  if (lVar10 == 0) {
    lVar10 = DAT_14cb05400;
  }
  if ((puVar1 == (undefined8 *)0x0) || (lVar21 = puVar1[0x43], lVar21 == 0)) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(longlong *)(lVar21 + 0xc0);
  }
  if (lVar21 == 0) {
    lVar21 = DAT_14c9e9130;
  }
  if (*(short *)(lVar15 + 0x108) != -1) {
    FUN_144b11088(&local_298,lVar14);
  }
  if (*(short *)(lVar15 + 0x10a) != -1) {
    FUN_144b11088(&local_298,lVar21);
  }
  if (*(short *)(lVar15 + 0x10c) != -1) {
    FUN_144b11088(&local_298,lVar10);
  }
LAB_1400782ba:
  if (param_8[4] != 0) {
    uVar12 = (ulonglong)(local_110 & 0x1f) - (ulonglong)(local_110 >> 1 & 5);
    uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
    uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar12 < 0x100000000000000) {
      local_298 = 0x58;
      local_290 = (longlong *******)0x0;
    }
    else {
      if (local_170 != (longlong *)0x0) {
        local_2c8 = local_170;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_298 = local_2c8[(uVar12 >> 0x38) - 1];
      local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)local_290);
    }
    local_310 = &local_298;
    local_318 = param_13;
    local_320 = param_6;
    local_328 = param_5;
    FUN_14474308c(param_8[4],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2c0);
  }
  plVar17 = (longlong *)(longlong)*(int *)(local_2d8 + 0xb0);
  if (0 < (longlong)plVar17) {
    plVar20 = (longlong *)0x0;
    local_2c8 = plVar17;
    do {
      if ((local_2a0 >> ((ulonglong)plVar20 & 0x3f) & 1) != 0) {
        lVar15 = *(longlong *)(local_2d8 + 0xa8);
        if (*(longlong *)(local_2d8 + 0xa8) == 0) {
          lVar15 = local_2d8;
        }
        plVar17 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
        uVar6 = *(uint *)(lVar15 + 0x7c + (longlong)plVar20 * 0xa8);
        bVar22 = (byte)(uVar6 >> 8);
        bVar23 = (bVar22 & 8) + (char)local_2a4;
        bVar24 = bVar23;
        if (((uVar6 >> 0xc & 1) != 0) && (bVar24 = bVar23 + 0x10, *(int *)(param_1 + 0x20) < 2)) {
          bVar24 = bVar23;
        }
        lVar15 = lVar15 + (longlong)plVar20 * 0xa8;
        if (*param_8 == 0) {
          uVar6 = 0;
        }
        else {
          if ((*(byte *)(plVar17 + 0xe) & 1) == 0) {
            local_290 = (longlong *******)0x0;
            local_298 = 0x58;
            uVar6 = 0;
          }
          else {
            plVar9 = (longlong *)plVar17[2];
            if ((longlong *)plVar17[2] == (longlong *)0x0) {
              plVar9 = plVar17;
            }
            local_298 = *plVar9;
            uVar12 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar12 & 1) != 0) {
              uVar12 = ((longlong)uVar12 >> 0x18) + local_298 + 0x30;
            }
            iVar13 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar10 = 0;
              iVar13 = 0;
              do {
                iVar13 = iVar13 + (uint)*(ushort *)(uVar12 + 2 + lVar10);
                lVar10 = lVar10 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar10);
            }
            iVar19 = *(int *)(local_298 + 0x28);
            iVar16 = iVar19 + 0xe;
            if (-1 < iVar19 + 7) {
              iVar16 = iVar19 + 7;
            }
            if (*(ushort *)((longlong)plVar17 + 0x72) < 0x51) {
              local_290 = (longlong *******)(plVar17 + 4);
            }
            else {
              local_290 = (longlong *******)plVar17[4];
            }
            uVar6 = iVar13 + (iVar16 >> 3) +
                             (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar19) * 8 +
                    7U & 0xfffffff8;
          }
          local_2e8 = plVar17 + 0xf;
          local_2f0 = &local_298;
          local_2f8 = (longlong *)param_13;
          local_308 = (undefined8 *)local_2d8;
          local_310 = local_2c0;
          local_318 = CONCAT44(local_318._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_320 = (longlong *)CONCAT71(local_320._1_7_,(char)local_2b4);
          local_328 = local_2d0;
          local_300 = (longlong *)lVar15;
          FUN_1456bf974(*param_8,*(undefined8 *)(param_8[1] + 0x18),*(undefined8 *)(param_1 + 0x18),
                        *(undefined8 *)(param_1 + 0x28));
        }
        if (param_8[2] != 0) {
          uVar12 = (ulonglong)(*(ushort *)(plVar17 + 0xe) & 0xf) -
                   (ulonglong)(*(ushort *)(plVar17 + 0xe) >> 1 & 5);
          uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
          uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar12 < 0x100000000000000) {
            local_298 = 0x58;
            local_290 = (longlong *******)0x0;
          }
          else {
            plVar9 = (longlong *)plVar17[2];
            if ((longlong *)plVar17[2] == (longlong *)0x0) {
              plVar9 = plVar17;
            }
            local_298 = plVar9[(uVar12 >> 0x38) - 1];
            uVar12 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar12 & 1) != 0) {
              uVar12 = ((longlong)uVar12 >> 0x18) + local_298 + 0x30;
            }
            iVar13 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar10 = 0;
              iVar13 = 0;
              do {
                iVar13 = iVar13 + (uint)*(ushort *)(uVar12 + 2 + lVar10);
                lVar10 = lVar10 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar10);
            }
            iVar19 = *(int *)(local_298 + 0x28);
            iVar16 = iVar19 + 0xe;
            if (-1 < iVar19 + 7) {
              iVar16 = iVar19 + 7;
            }
            if (*(ushort *)((longlong)plVar17 + 0x72) < 0x51) {
              plVar9 = plVar17 + 4;
            }
            else {
              plVar9 = (longlong *)plVar17[4];
            }
            local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)plVar9);
            uVar6 = ((iVar16 >> 3) +
                     (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar19) * 8 + iVar13 +
                     7U & 0xfffffff8) + uVar6;
          }
          local_2e8 = plVar17 + 0xf;
          local_2f0 = &local_298;
          local_2f8 = (longlong *)param_13;
          local_308 = (undefined8 *)local_2d8;
          local_310 = local_2c0;
          local_318 = CONCAT44(local_318._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_328 = local_2d0;
          local_320 = (longlong *)((ulonglong)local_320 & 0xffffffffffffff00);
          local_300 = (longlong *)lVar15;
          FUN_1456bf974(param_8[2],*(undefined8 *)(param_8[3] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        if (param_8[4] != 0) {
          uVar12 = (ulonglong)(*(ushort *)(plVar17 + 0xe) & 0x1f) -
                   (ulonglong)(*(ushort *)(plVar17 + 0xe) >> 1 & 5);
          uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
          uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar12 < 0x100000000000000) {
            local_298 = 0x58;
            local_290 = (longlong *******)0x0;
          }
          else {
            plVar9 = (longlong *)plVar17[2];
            if ((longlong *)plVar17[2] == (longlong *)0x0) {
              plVar9 = plVar17;
            }
            if (*(ushort *)((longlong)plVar17 + 0x72) < 0x51) {
              plVar18 = plVar17 + 4;
            }
            else {
              plVar18 = (longlong *)plVar17[4];
            }
            local_298 = plVar9[(uVar12 >> 0x38) - 1];
            local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)plVar18);
          }
          local_2e8 = plVar17 + 0xf;
          local_2f0 = &local_298;
          local_2f8 = (longlong *)param_13;
          local_308 = (undefined8 *)local_2d8;
          local_310 = local_2c0;
          local_318 = CONCAT44(local_318._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_328 = local_2d0;
          local_320 = (longlong *)((ulonglong)local_320 & 0xffffffffffffff00);
          local_300 = (longlong *)lVar15;
          FUN_1456bf974(param_8[4],*(undefined8 *)(param_8[5] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        uVar6 = 0;
        local_290 = (longlong *******)CONCAT44(local_290._4_4_,0x7fffffff);
        bVar23 = DAT_14ca96500;
        if (*(int *)(param_1 + 0x20) == 1) {
joined_r0x000140078a04:
          if (bVar23 != 0) {
LAB_140078885:
            uVar4 = *(uint *)(lVar15 + 0x54) & 7;
            if (uVar4 == 0) {
              uVar6 = *(uint *)(local_2b0 + 0x15c);
              uVar4 = *(uint *)(local_2b0 + 0x204) & 0x7fffffff;
            }
            else {
              if ((uVar4 != 1) || (*(longlong *)(param_1 + 0x28) == 0)) goto LAB_1400788b4;
              uVar6 = *(uint *)(lVar15 + 0xa0) | 0x80000000;
              uVar4 = *(uint *)(lVar15 + 0xa4) | 0x80000000;
            }
            local_290 = (longlong *******)CONCAT44(local_290._4_4_,uVar4);
          }
        }
        else if (((2 < *(int *)(param_1 + 0x20)) &&
                 (lVar10 = (ulonglong)DAT_14ca85550 * 0x3c,
                 *(longlong *)(&DAT_14ca814b0 + lVar10) != DAT_14ca81490)) && (DAT_14ca85550 != 0xc)
                ) {
          if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar10 + 3) & 0x10) != 0) {
            bVar23 = *(byte *)((longlong)&DAT_14ca814c8 + lVar10 + 3) & 0x20;
            goto joined_r0x000140078a04;
          }
          goto LAB_140078885;
        }
LAB_1400788b4:
        if (local_2b0 == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = *(undefined4 *)(local_2b0 + 0x158);
        }
        local_298 = CONCAT44(uVar5,uVar6);
        local_300 = &local_288;
        local_308 = &local_228;
        local_310 = (undefined8 *)CONCAT71(local_310._1_7_,bVar24 | bVar22 & 0x20);
        local_318 = param_11;
        local_320 = (longlong *)CONCAT44(local_320._4_4_,param_10);
        local_328 = (longlong *)CONCAT44(local_328._4_4_,param_9);
        local_2f8 = plVar17;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                  (*(longlong **)(param_1 + 0x30),local_2d8,(ulonglong)plVar20 & 0xffffffff,
                   &local_298);
        plVar17 = local_2c8;
      }
      plVar20 = (longlong *)((longlong)plVar20 + 1);
    } while (plVar20 != plVar17);
  }
  if (lStack_1e0 != 0) {
    FUN_140021284();
  }
  if (local_1e8 != 0) {
    FUN_140021284();
  }
  if (lStack_1f0 != 0) {
    FUN_140021284();
  }
  if (local_1f8 != 0) {
    FUN_140021284();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((0x50 < local_110._2_2_) && (local_160 != (longlong *******)0x0)) {
    FUN_1400020a8();
  }
  local_110 = local_110 & 0xffff;
  local_160 = (longlong *******)0x0;
  if (local_170 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140078c68 FUN_140078c68 body=284 status=ok
// SIG undefined FUN_140078c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140078c68(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9afe50) {
    FUN_144b3d300(&DAT_14c9afe50);
    if (DAT_14c9afe50 == -1) {
      FUN_1456c24e4();
      FUN_140db5666(&DAT_14c9afda8,2,&DAT_14c9afd40,L"TBasePassPSFNoLightMapPolicySkylightGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712d0e2,
                    FUN_14712d0ba,FUN_14174e71e,&LAB_14712d0b6,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9afda8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c44b);
      _Init_thread_footer(&DAT_14c9afe50);
    }
  }
  return &DAT_14c9afda8;
}



// FUNCTION 140078d84 FUN_140078d84 body=284 status=ok
// SIG undefined FUN_140078d84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140078d84(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aff78) {
    FUN_144b3d300(&DAT_14c9aff78);
    if (DAT_14c9aff78 == -1) {
      FUN_1456c2638();
      FUN_140db5666(&DAT_14c9afed0,2,&DAT_14c9afe68,L"TBasePassPSFNoLightMapPolicyGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712d190,
                    FUN_14712d168,FUN_14174eade,&LAB_14712d164,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9afed0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c457);
      _Init_thread_footer(&DAT_14c9aff78);
    }
  }
  return &DAT_14c9afed0;
}



// FUNCTION 140078ea0 FUN_140078ea0 body=33 status=ok
// SIG undefined FUN_140078ea0(void)

void FUN_140078ea0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x3d) & 0x40) != 0) {
    FUN_140078ec2(param_1,*(undefined8 *)(param_1 + 0x44));
    *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xbf;
  }
  return;
}



// FUNCTION 140078ec2 FUN_140078ec2 body=160 status=ok
// SIG undefined FUN_140078ec2(void)

void FUN_140078ec2(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_1 + 0x3d) & 0x40) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0xa4) != 0) {
      uVar1 = *(uint *)(param_1 + 0xa0);
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar3 != (longlong *)0x0) &&
           ((((int)plVar3[2] == *(int *)(param_1 + 0xa4) &&
             ((*(uint *)(plVar3 + 1) >> 0x1c & 1) == 0)) && (*plVar3 != 0)))) {
          lVar2 = *(longlong *)(*plVar3 + 0x18c);
        }
      }
    }
    if (lVar2 == param_2) goto LAB_140078f51;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(longlong *)(param_1 + 0x44) = param_2;
  FUN_140136902(param_1,0);
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xbf;
LAB_140078f51:
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 140078f62 FUN_140078f62 body=286 status=ok
// SIG undefined FUN_140078f62(void)

longlong FUN_140078f62(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined1 local_89;
  undefined8 local_88;
  int iStack_80;
  int iStack_7c;
  undefined **local_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_40;
  longlong lStack_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = &local_89;
  local_89 = 1;
  local_98 = &local_88;
  local_a0 = &LAB_1427894a2;
  FUN_144a2afa0(param_2 + 0x10,&local_40,&local_a0,0);
  if (local_28 == '\x01') {
    local_60 = local_30;
    local_70 = local_40;
    lStack_68 = lStack_38;
    local_88 = (undefined1 *)0x85d9466403ed3a25;
    iStack_80 = -0x757ffe5f;
    iStack_7c = -0x2339c809;
    local_78 = &PTR_FUN_149e34cc0;
    local_58 = (undefined4)((ulonglong)(lStack_38 - local_40) >> 1);
    FUN_140079082(param_2,&local_40,&local_88);
    if ((((((local_88._4_4_ != 0 || (int)local_88 != 0) || iStack_80 != 0) || iStack_7c != 0) &&
         (pcVar1 = (code *)*local_78, pcVar1 != FUN_1400791ec)) && (pcVar1 != FUN_14477b052)) &&
       (pcVar1 != FUN_1400791cc)) {
      (*pcVar1)(&local_78,0);
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140079082 FUN_140079082 body=329 status=ok
// SIG undefined FUN_140079082(void)

void FUN_140079082(longlong *param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ulonglong *)(param_2 + 2);
  if (((ulonglong)param_1[2] <= uVar1) && (uVar1 <= (ulonglong)param_1[3])) {
    param_1[4] = uVar1;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140188580(param_1,iVar2);
  }
  piVar5 = (int *)((longlong)iVar2 * 0x60 + *param_1);
  if (((param_3[1] == 0 && *param_3 == 0) && param_3[2] == 0) && param_3[3] == 0) {
    local_68 = *(undefined8 *)param_3;
    uStack_60 = *(undefined8 *)(param_3 + 2);
  }
  else {
    local_68 = *(undefined8 *)param_3;
    uStack_60 = *(undefined8 *)(param_3 + 2);
    (**(code **)(*(longlong *)(param_3 + 4) + 8))(param_3 + 4);
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    (*(code *)**(undefined8 **)(param_3 + 4))(param_3 + 4,0);
  }
  *piVar5 = (int)local_68;
  piVar5[1] = local_68._4_4_;
  piVar5[2] = (int)uStack_60;
  piVar5[3] = uStack_60._4_4_;
  if (((local_68._4_4_ == 0 && (int)local_68 == 0) && (int)uStack_60 == 0) && uStack_60._4_4_ == 0)
  {
    *(undefined8 *)(piVar5 + 0x14) = *(undefined8 *)(param_2 + 4);
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    piVar5[0x10] = *param_2;
    piVar5[0x11] = iVar2;
    piVar5[0x12] = iVar3;
    piVar5[0x13] = iVar4;
  }
  else {
    (*(code *)local_58[0][1])(local_58,piVar5 + 4);
    local_68 = 0;
    uStack_60 = 0;
    (*(code *)*local_58[0])(local_58,0);
    *(undefined8 *)(piVar5 + 0x14) = *(undefined8 *)(param_2 + 4);
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    piVar5[0x10] = *param_2;
    piVar5[0x11] = iVar2;
    piVar5[0x12] = iVar3;
    piVar5[0x13] = iVar4;
    if (((local_68._4_4_ != 0 || (int)local_68 != 0) || (int)uStack_60 != 0) || uStack_60._4_4_ != 0
       ) {
      (*(code *)*local_58[0])(local_58,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400791cc FUN_1400791cc body=31 status=ok
// SIG undefined FUN_1400791cc(void)

undefined8 FUN_1400791cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400791ec FUN_1400791ec body=31 status=ok
// SIG undefined FUN_1400791ec(void)

undefined8 FUN_1400791ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14007920c FUN_14007920c body=74 status=ok
// SIG undefined FUN_14007920c(void)

void FUN_14007920c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_149e191a0;
  local_18._0_4_ = (undefined4)uVar1;
  local_18._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar2;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 1) = (undefined4)local_18;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_18._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_10._4_4_;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
  local_18 = uVar1;
  uStack_10 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140079258 FUN_140079258 body=74 status=ok
// SIG undefined FUN_140079258(void)

void FUN_140079258(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_149e19110;
  local_18._0_4_ = (undefined4)uVar1;
  local_18._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar2;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 1) = (undefined4)local_18;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_18._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_10._4_4_;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
  local_18 = uVar1;
  uStack_10 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400792a4 FUN_1400792a4 body=164 status=ok
// SIG undefined FUN_1400792a4(void)

undefined8 FUN_1400792a4(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_140079348();
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x48);
    lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x78;
    do {
      if (*plVar3 != 0) {
        if ((plVar3[0xb] == 0) || (cVar1 = FUN_147fc1868(), cVar1 == '\0')) {
          *plVar3 = 0;
          plVar3[0xb] = 0;
        }
        else {
          FUN_1438e4990(param_1,plVar3,param_2,param_3);
          iVar2 = (**(code **)(*(longlong *)(plVar3[0xb] + 0x28) + 0x38))(plVar3[0xb] + 0x28);
          if (iVar2 == 0) {
            FUN_14802dafe(param_1,(short)plVar3[10]);
          }
        }
      }
      plVar3 = plVar3 + 0xf;
      lVar4 = lVar4 + -0x78;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 140079348 FUN_140079348 body=532 status=ok
// SIG undefined FUN_140079348(void)

undefined8 FUN_140079348(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_988 [32];
  undefined4 local_968;
  undefined8 *local_960;
  undefined8 *local_958;
  undefined8 *local_950;
  float local_93c;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined4 local_8f8 [2];
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined4 local_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined4 local_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined8 local_890;
  undefined4 local_888;
  longlong local_d0;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_988;
  (**(code **)(*param_1 + 0x300))();
  local_950 = param_3 + 6;
  local_958 = param_3 + 3;
  local_968 = *(undefined4 *)(param_3 + 6);
  local_908 = param_3[5];
  local_918 = param_3[3];
  uStack_910 = param_3[4];
  local_928 = param_3[2];
  local_938 = *param_3;
  uStack_930 = param_3[1];
  local_960 = param_3;
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2);
  local_8c0 = *(undefined4 *)(param_3 + 6);
  local_8c8 = param_3[5];
  local_8d8 = param_3[3];
  uStack_8d0 = param_3[4];
  local_8f0 = *param_3;
  uStack_8e8 = param_3[1];
  local_8e0 = param_3[2];
  local_8b8 = *param_3;
  uStack_8b0 = param_3[1];
  local_8a8 = param_3[2];
  local_8a0 = *(undefined4 *)(param_3 + 3);
  uStack_89c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_898 = *(undefined4 *)(param_3 + 4);
  uStack_894 = *(undefined4 *)((longlong)param_3 + 0x24);
  local_890 = param_3[5];
  local_8f8[0] = param_2;
  local_888 = local_8c0;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf140);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_8f8);
  param_3[2] = local_8a8;
  *param_3 = local_8b8;
  param_3[1] = uStack_8b0;
  param_3[3] = CONCAT44(uStack_89c,local_8a0);
  param_3[4] = CONCAT44(uStack_894,uStack_898);
  param_3[5] = local_890;
  *(undefined4 *)(param_3 + 6) = local_888;
  if (param_1[6] != 0) {
    local_93c = 0.0;
    FUN_144894d4c(local_8f8);
    (**(code **)(*param_1 + 0x308))(param_1,param_2,&local_93c,local_8f8);
    FUN_1400795e4(param_1,param_2,&local_93c,local_8f8);
    if (0.0 < local_93c) {
      FUN_14019e69a(param_1[6],local_8f8,local_93c,0);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
  }
  if (((*(byte *)(param_1 + 5) & 8) != 0) && (*(float *)(param_1 + 8) <= 0.0)) {
    (**(code **)(*param_1 + 0x2e0))(param_1,1);
  }
  if ((local_30 ^ (ulonglong)auStack_988) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140079562 FUN_140079562 body=110 status=ok
// SIG undefined FUN_140079562(void)

void FUN_140079562(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)(**(code **)(*param_1 + 0x2a0))();
  fVar1 = *(float *)((longlong)param_1 + (ulonglong)(-(uint)(fVar2 == 0.0) & 1) * 4 + 0x38);
  fVar3 = fVar2;
  if (0.0 < fVar1) {
    fVar3 = *(float *)(param_1 + 8);
    param_2 = param_2 / fVar1;
    if (fVar3 <= fVar2) {
      fVar3 = param_2 + fVar3;
      if (fVar2 <= fVar3) {
        fVar3 = fVar2;
      }
    }
    else {
      fVar3 = fVar3 - param_2;
      if (fVar3 <= fVar2) {
        fVar3 = fVar2;
      }
    }
  }
  *(float *)(param_1 + 8) = fVar3;
  return;
}



// FUNCTION 1400795e4 FUN_1400795e4 body=235 status=ok
// SIG undefined FUN_1400795e4(void)

void FUN_1400795e4(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_938 [32];
  undefined4 local_918;
  undefined4 local_914;
  undefined1 local_908 [2088];
  longlong local_e0;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_938;
  FUN_144894d4c(local_908);
  local_914 = *param_3;
  local_918 = param_2;
  FUN_14477b16e(local_908,param_4);
  uVar1 = FUN_14477b072(param_1,DAT_14cacf150);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_918);
  *param_3 = local_914;
  FUN_14477b16e(param_4,local_908);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_938) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400796d0 FUN_1400796d0 body=2739 status=ok
// SIG undefined FUN_1400796d0(void)

longlong FUN_1400796d0(longlong param_1,longlong param_2,int param_3)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  PSRWLOCK SRWLock_00;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  code *local_78;
  longlong *local_70;
  code *local_68;
  undefined1 local_60 [8];
  code *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_88 = 0;
  uVar3 = (uint)param_2;
  iVar8 = (int)((ulonglong)param_2 >> 0x20);
  uVar1 = (uint)((ulonglong)param_2 >> 0x10);
  local_80 = param_2;
  if ((param_3 == 0) ||
     ((lVar7 = *(longlong *)(param_1 + 0x40), lVar7 == 0 && (*(int *)(param_1 + 0x1e0) == 0)))) {
    SRWLock_00 = (PSRWLOCK)(param_1 + 0x178);
    AcquireSRWLockShared(SRWLock_00);
    if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
      lVar7 = param_1 + 0x160;
      if (*(longlong *)(param_1 + 0x168) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x168);
      }
      iVar8 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0x170) - 1U &
                               iVar8 + (uVar3 << 0x10 | uVar3 & 0xffff) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + ((uVar3 & 0xffff) >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          plVar10 = (longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar8 * 0x18);
          if (*plVar10 == param_2) {
            if (plVar10 == (longlong *)0x0) goto LAB_140079887;
            lVar7 = plVar10[1];
            if ((DAT_14c950c29 == '\x01') && (lVar7 != 0)) {
              FUN_1456cec3c(lVar7);
            }
            break;
          }
          iVar8 = (int)plVar10[2];
          lVar7 = 0;
        } while (iVar8 != -1);
        goto LAB_140079fbd;
      }
    }
LAB_140079887:
    lVar7 = 0;
  }
  else {
    SRWLock = (PSRWLOCK)(param_1 + 0x1d0);
    AcquireSRWLockShared(SRWLock);
    plVar10 = (longlong *)(param_1 + 0x180);
    if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1b4)) {
      lVar4 = param_1 + 0x1b8;
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x1c0);
      }
      iVar9 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x1c8) - 1U &
                               iVar8 + (uVar3 << 0x10 | uVar3 & 0xffff) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + ((uVar3 & 0xffff) >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          plVar13 = (longlong *)(*plVar10 + (longlong)iVar9 * 0x18);
          if (*plVar13 == param_2) {
            if (plVar13 + 1 != (longlong *)0x0 && plVar13 != (longlong *)0x0) {
              SRWLock_00 = SRWLock;
              lVar7 = plVar13[1];
              goto LAB_140079fbd;
            }
            break;
          }
          iVar9 = (int)plVar13[2];
        } while (iVar9 != -1);
      }
    }
    ReleaseSRWLockShared(SRWLock);
    SRWLock_00 = (PSRWLOCK)(param_1 + 0x178);
    AcquireSRWLockShared(SRWLock_00);
    if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
      lVar4 = param_1 + 0x160;
      if (*(longlong *)(param_1 + 0x168) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x168);
      }
      iVar9 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x170) - 1U &
                               iVar8 + (uVar3 << 0x10 | uVar3 & 0xffff) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + ((uVar3 & 0xffff) >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          plVar13 = (longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar9 * 0x18);
          if (*plVar13 == param_2) {
            if (plVar13 != (longlong *)0x0) {
              lVar4 = plVar13[1];
              if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
                FUN_1456cec3c(lVar4);
                local_88 = lVar4;
                ReleaseSRWLockShared(SRWLock_00);
              }
              else {
                local_88 = lVar4;
                ReleaseSRWLockShared(SRWLock_00);
                if (lVar4 == 0) goto LAB_1400799de;
              }
              AcquireSRWLockExclusive(SRWLock);
              local_78 = (code *)&local_80;
              local_70 = &local_88;
              FUN_140772728(plVar10,local_50,&local_78,0);
              ReleaseSRWLockExclusive(SRWLock);
              goto LAB_140079fc3;
            }
            break;
          }
          iVar9 = (int)plVar13[2];
        } while (iVar9 != -1);
      }
    }
    local_88 = 0;
    ReleaseSRWLockShared(SRWLock_00);
LAB_1400799de:
    local_90 = plVar10;
    if ((longlong)*(int *)(param_1 + 0x1e0) < 1) {
LAB_140079a47:
      lVar4 = 0;
      lVar5 = local_88;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x1d8);
      plVar13 = plVar10 + (longlong)*(int *)(param_1 + 0x1e0) * 2;
      do {
        while (*plVar10 == 0) {
          local_88 = 0;
          plVar10 = plVar10 + 2;
          if (plVar10 == plVar13) goto LAB_140079a47;
        }
        lVar4 = FUN_1400796d0(*plVar10,param_2,1);
        lVar5 = lVar4;
        if (lVar4 != 0) break;
        plVar10 = plVar10 + 2;
        local_88 = 0;
      } while (plVar10 != plVar13);
    }
    local_88 = lVar5;
    if (lVar7 == 0) {
      lVar7 = local_88;
      if (lVar4 == 0) {
        lVar7 = 0;
      }
    }
    else {
      lVar5 = FUN_1400796d0(lVar7,param_2);
      lVar7 = lVar5;
      if ((lVar4 != 0) && (lVar11 = DAT_14c949118, lVar12 = lVar5, lVar7 = local_88, lVar5 != 0)) {
        do {
          if (lVar11 == 0) {
            local_68 = FUN_140631fbe;
            local_98 = lVar5;
            if (DAT_14c963f04 == '\0') {
              uVar6 = FUN_140011aa6();
              lVar7 = FUN_140011c0e(uVar6,0x250,8);
            }
            else {
              lVar7 = FUN_14001cc68(0x250,8);
            }
            DAT_14c949118 = lVar7;
            local_a8 = lVar7;
            FUN_1446f470e(local_60,L"Class",1);
            local_d0 = &local_68;
            local_d8 = &LAB_146891e90;
            local_e0 = (code *)&LAB_146273097;
            local_f0 = L"Engine";
            local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,199);
            local_f8 = 0x20;
            local_100 = 0x10000000;
            local_108._0_4_ = 8;
            FUN_14574b4b2(lVar7);
            DAT_14c949118 = lVar7;
            if (DAT_14c951858 == 0) {
              local_78 = FUN_1449e2820;
              local_c0 = FUN_14081d0ea;
              local_c8 = FUN_14081d0ea;
              local_d0 = &local_78;
              local_d8 = &LAB_1468c5283;
              local_e0 = FUN_142809da0;
              local_e8 = L"Engine";
              local_f0 = (wchar_t *)0x400000000;
              local_f8 = CONCAT44(local_f8._4_4_,0x10000000);
              local_100 = 8;
              local_108._0_4_ = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              local_a8 = DAT_14c949118;
            }
            lVar7 = DAT_14c951858;
            if (DAT_14c948f88 == 0) {
              local_58 = (code *)&DAT_1427db2a2;
              if (DAT_14c963f04 == '\0') {
                uVar6 = FUN_140011aa6();
                DAT_14c948f88 = FUN_140011c0e(uVar6,0x250,8);
              }
              else {
                DAT_14c948f88 = FUN_14001cc68(0x250,8);
              }
              local_b0 = DAT_14c948f88;
              FUN_1446f470e(local_50,L"Struct",1);
              local_d0 = &local_58;
              local_d8 = &LAB_146891313;
              local_e0 = FUN_146272f63;
              local_f0 = L"Engine";
              local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,199);
              local_f8 = 8;
              local_100 = 0x10000020;
              local_108._0_4_ = 8;
              FUN_14574b4b2(local_b0);
              DAT_14c948f88 = local_b0;
              local_a0 = DAT_14c927740;
              if (DAT_14c927740 == 0) {
                local_78 = FUN_1449e2820;
                local_c0 = FUN_14081d0ea;
                local_c8 = FUN_14081d0ea;
                local_d0 = &local_78;
                local_d8 = &LAB_146856450;
                local_e0 = FUN_1427b121c;
                local_e8 = L"Engine";
                local_f0 = (wchar_t *)0x0;
                local_f8 = CONCAT44(local_f8._4_4_,0x10000021);
                local_100 = 8;
                local_108._0_4_ = 0x28;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                local_b0 = DAT_14c948f88;
              }
              DAT_14c948f88 = local_b0;
              local_a0 = DAT_14c927740;
              uVar6 = FUN_1400163b0();
              local_108 = L"Struct";
              FUN_14574b446(uVar6,local_b0,local_a0,L"/Script/CoreUObject");
            }
            local_108 = L"Class";
            FUN_14574b446(DAT_14c948f88,local_a8,lVar7,L"/Script/CoreUObject");
            lVar5 = local_98;
            lVar11 = DAT_14c949118;
          }
          iVar9 = *(int *)(lVar11 + 0x38);
          if ((iVar9 <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar9 * 8) ==
              lVar11 + 0x30)) {
            bVar2 = false;
            goto LAB_14007a00b;
          }
          plVar10 = (longlong *)(lVar12 + 0x20);
          lVar12 = *plVar10;
        } while (*plVar10 != 0);
        bVar2 = true;
        lVar12 = 0;
LAB_14007a00b:
        do {
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar9) ||
             (lVar14 = lVar4,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar9 * 8)
             != lVar11 + 0x30)) {
            lVar14 = 0;
          }
        } while ((lVar14 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
        lVar7 = local_88;
        if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0xd5) & 0x40) != 0)) {
          if (DAT_14c950d78 == 0) {
            local_78 = FUN_1449e2820;
            local_c0 = FUN_14081d0ea;
            local_c8 = FUN_14081d0ea;
            local_d0 = &local_78;
            local_d8 = &LAB_1468b50ee;
            local_e0 = FUN_1427f23a3;
            local_e8 = L"Engine";
            local_f0 = (wchar_t *)0x0;
            local_f8 = CONCAT44(local_f8._4_4_,0x10004001);
            local_100 = 8;
            local_108 = (wchar_t *)CONCAT44(local_108._4_4_,0x28);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
          }
          lVar7 = local_88;
          if (!bVar2 && DAT_14c950d78 != lVar14) {
            do {
              if (0 < (longlong)*(int *)(lVar12 + 0x1e0)) {
                lVar4 = 0;
                do {
                  lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x1d8) + lVar4);
                  if (((lVar11 != 0) && (*(int *)(lVar14 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
                     (lVar7 = lVar5,
                     *(longlong *)
                      (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
                     lVar14 + 0x30)) goto LAB_140079eb6;
                  lVar4 = lVar4 + 0x10;
                } while ((longlong)*(int *)(lVar12 + 0x1e0) * 0x10 != lVar4);
              }
              lVar12 = *(longlong *)(lVar12 + 0x40);
              lVar7 = local_88;
            } while (lVar12 != 0);
          }
        }
      }
    }
LAB_140079eb6:
    local_88 = lVar7;
    AcquireSRWLockShared(SRWLock_00);
    plVar10 = local_90;
    if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
      lVar7 = param_1 + 0x160;
      if (*(longlong *)(param_1 + 0x168) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x168);
      }
      iVar8 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0x170) - 1U &
                               iVar8 + (uVar3 << 0x10 | uVar3 & 0xffff) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + ((uVar3 & 0xffff) >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          plVar13 = (longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar8 * 0x18);
          if (*plVar13 == param_2) {
            if (plVar13 != (longlong *)0x0) {
              if ((DAT_14c950c29 == '\x01') && (plVar13[1] != 0)) {
                FUN_1456cec3c();
                lVar7 = local_88;
                goto LAB_140079fbd;
              }
              lVar7 = local_88;
              if (plVar13[1] != 0) goto LAB_140079fbd;
            }
            break;
          }
          iVar8 = (int)plVar13[2];
        } while (iVar8 != -1);
      }
    }
    AcquireSRWLockExclusive(SRWLock);
    local_78 = (code *)&local_80;
    local_70 = &local_88;
    FUN_140772728(plVar10,local_50,&local_78,0);
    ReleaseSRWLockExclusive(SRWLock);
    lVar7 = local_88;
  }
LAB_140079fbd:
  local_88 = lVar7;
  ReleaseSRWLockShared(SRWLock_00);
LAB_140079fc3:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_88;
}



// FUNCTION 14007a184 FUN_14007a184 body=1058 status=ok
// SIG undefined FUN_14007a184(void)

void FUN_14007a184(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_528 [32];
  undefined4 local_508;
  undefined4 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined2 *local_4e8;
  undefined1 *local_4e0;
  undefined1 *local_4d8;
  code **local_4d0;
  undefined1 *local_4c8;
  code *local_4c0;
  code *local_4b8 [70];
  undefined1 local_288 [560];
  undefined1 local_58;
  undefined6 local_54;
  undefined2 uStack_4e;
  undefined6 uStack_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_528;
  if (*param_2 == 0) goto LAB_14007a495;
  if (*(char *)(param_1 + 0x26c) == '\x01') {
    uVar4 = FUN_1447210f0(param_1 + -0x530);
    plVar5 = (longlong *)FUN_14007a5e6(uVar4);
    if (plVar5 == (longlong *)0x0) goto LAB_14007a1fd;
    uVar1 = *(undefined4 *)(param_1 + 0x268);
    cVar3 = (**(code **)(*plVar5 + 0xa8))(plVar5,uVar1);
    if (cVar3 == '\0') goto LAB_14007a1fd;
    lVar6 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    if (lVar6 == 0) {
LAB_14007a555:
      lVar6 = 0;
    }
    else {
      if (DAT_14cb61cd0 == 0) {
        local_4d0 = local_4b8;
        local_4b8[0] = FUN_141030f22;
        local_4c0 = FUN_14081d0ea;
        local_4c8 = &LAB_1463b31ae;
        local_4d8 = &LAB_1486dca4f;
        local_4e0 = &LAB_1464f50a6;
        local_4e8 = &DAT_149e063b2;
        local_4f0 = 0;
        local_4f8 = 0x10000004;
        local_500 = 8;
        local_508 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30))
      goto LAB_14007a555;
    }
    lVar7 = (**(code **)(*plVar5 + 0xb0))(plVar5,uVar1);
    if (lVar7 == lVar6) goto LAB_14007a1fd;
    if (cVar3 == '\x01') goto LAB_14007a495;
    if (cVar3 != '\x02') goto LAB_14007a1fd;
    FUN_140e386ea(local_4b8);
    FUN_140e386ea(local_288);
    local_58 = 0;
    local_44 = 0;
    local_54 = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    FUN_1414b2d2c(local_4b8,1);
    uVar4 = 2;
  }
  else {
LAB_14007a1fd:
    lVar6 = *(longlong *)(param_1 + -0x140);
    if (lVar6 != 0) {
      lVar7 = *(longlong *)(lVar6 + 0x2c8);
      if (lVar7 == 0) {
        uVar4 = FUN_140aa9886();
        lVar7 = FUN_14477b664(uVar4);
        *(longlong *)(lVar6 + 0x2c8) = lVar7;
      }
      plVar5 = (longlong *)(lVar6 + 0x2c0);
      if (*(longlong *)(lVar6 + 0x2d0) != 0) {
LAB_14007a521:
        if (lVar7 != 0) goto LAB_14007a526;
        uVar4 = FUN_140aa9886();
        lVar7 = FUN_14477b664(uVar4);
        *(longlong *)(lVar6 + 0x2c8) = lVar7;
        if (((*(longlong *)(lVar6 + 0x2d0) != 0) || (lVar7 == 0)) || (*plVar5 == 0))
        goto LAB_14007a526;
        plVar2 = *(longlong **)(lVar7 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_14007a5e1:
          uVar4 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
          if (cVar3 == '\0') goto LAB_14007a5e1;
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar4 = FUN_144aff482(uVar4,plVar5);
        }
        *(undefined8 *)(lVar6 + 0x2d0) = uVar4;
LAB_14007a526:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_528);
      }
      if ((*plVar5 != 0) && (lVar7 != 0)) {
        plVar2 = *(longlong **)(lVar7 + 0xb8);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
          if (cVar3 != '\0') {
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar7 = FUN_144aff482(uVar4,plVar5);
            *(longlong *)(lVar6 + 0x2d0) = lVar7;
            if (lVar7 != 0) {
              lVar7 = *(longlong *)(lVar6 + 0x2c8);
              goto LAB_14007a521;
            }
            goto LAB_14007a23d;
          }
        }
        *(undefined8 *)(lVar6 + 0x2d0) = 0;
      }
    }
LAB_14007a23d:
    lVar6 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    if (lVar6 != 0) {
      uVar4 = FUN_14007a696();
      lVar6 = FUN_144718840(lVar6,uVar4);
      if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_528);
      }
    }
    FUN_140e386ea(local_4b8);
    FUN_140e386ea(local_288);
    local_58 = 0;
    local_44 = 0;
    local_54 = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    uVar4 = 1;
  }
  FUN_1414b2d2c(local_4b8,uVar4);
  FUN_140e386c4(param_3,local_4b8,0);
  FUN_144908ac8(local_288);
  FUN_144908ac8(local_4b8);
LAB_14007a495:
  if ((local_40 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14007a5e6 FUN_14007a5e6 body=35 status=ok
// SIG undefined FUN_14007a5e6(void)

undefined8 FUN_14007a5e6(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140149a73(param_1,0);
  if (lVar1 != 0) {
    uVar2 = FUN_14007a60a(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14007a60a FUN_14007a60a body=139 status=ok
// SIG undefined FUN_14007a60a(void)

undefined8 FUN_14007a60a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  while ((((*(int *)(param_1 + 100) != 0 && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         (((puVar3 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           puVar3 != (undefined8 *)0x0 && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 100))) &&
          ((*(uint *)(puVar3 + 1) & 0x10200000) == 0))))) {
    if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
      plVar2 = (longlong *)*puVar3;
    }
    else {
      plVar2 = (longlong *)0x0;
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f8))();
    if (plVar2 == (longlong *)0x0) break;
    param_1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x148);
}



// FUNCTION 14007a696 FUN_14007a696 body=228 status=ok
// SIG undefined FUN_14007a696(void)

longlong FUN_14007a696(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6a3a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148761605;
    local_40 = FUN_146525ec4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryOwner",&DAT_14cb6a3a0,&DAT_148761604);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a3a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14007a81a FUN_14007a81a body=1937 status=ok
// SIG undefined FUN_14007a81a(void)

void FUN_14007a81a(longlong *param_1,uint *param_2,longlong param_3,char param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_4f8 [32];
  uint local_4d8 [4];
  undefined8 local_4c8;
  undefined1 local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a8;
  undefined1 local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined1 local_428;
  undefined **local_420;
  undefined8 local_418;
  undefined1 local_410;
  undefined **local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined **local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined1 local_3cc;
  undefined4 local_3c8;
  undefined1 local_3c4;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined2 local_390;
  undefined4 local_38c;
  undefined2 local_388;
  undefined4 local_384;
  undefined8 local_380;
  longlong *local_378;
  undefined4 local_370;
  undefined4 local_368;
  undefined2 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined1 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8;
  undefined **local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined **local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined4 local_198;
  undefined1 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined4 local_15c;
  undefined2 local_158;
  undefined4 local_154;
  undefined8 local_150;
  longlong *local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined2 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined1 local_64;
  char local_59;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  lVar3 = *(longlong *)(param_2 + 2);
  if (((((lVar3 == 0) || (param_2[1] == 0)) || (uVar1 = *param_2, (int)uVar1 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar1 ||
       (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)))) ||
     ((*(uint *)(lVar4 + 0x10) != param_2[1] ||
      (((*(uint *)(lVar4 + 8) & 0x10200000) != 0 || (local_48 = lVar3, *param_1 == 0))))))
  goto LAB_14007addd;
  local_58 = &local_48;
  lVar3 = 0x488;
  local_50 = param_1;
  if (param_4 == '\0') {
LAB_14007a8ed:
    if (*(char *)((longlong)param_2 + lVar3) != '\0') goto LAB_14007addd;
  }
  else {
    if (param_4 == '\x01') {
      lVar3 = 0x908;
      goto LAB_14007a8ed;
    }
    if (param_4 == '\x02') {
      lVar3 = 0x908;
      if ((char)param_2[0x122] != '\0') goto LAB_14007addd;
      goto LAB_14007a8ed;
    }
  }
  local_59 = '\0';
  local_4d8[0] = 0;
  local_4d8[1] = 0;
  local_4d8[2] = 0x10;
  local_4c8 = 0;
  local_4c0 = 1;
  local_4b8 = 0;
  local_4b0 = 0xf00000d0;
  local_4a8 = 0;
  local_4a0 = 4;
  local_498 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_480 = 0;
  uStack_478 = 0;
  local_470 = 0;
  uStack_468 = 0;
  local_460 = 0xf00000d0;
  local_458 = 0;
  local_450 = 0x3f800000;
  local_448 = 0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  local_418 = 0;
  local_410 = 0;
  local_420 = &PTR_FUN_14b023b20;
  local_408 = &PTR_FUN_14b023b40;
  local_400 = 0;
  uStack_3f8 = 0;
  local_3f0 = &PTR_FUN_14b00be70;
  local_3e8 = 0;
  local_3e0 = 0xf00000d0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 0;
  local_3c8 = 0;
  local_3c4 = 1;
  local_3c0 = 0;
  local_3b8 = 0xf00000d0;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_3a0 = 0xf00000d0;
  local_398 = 0;
  local_390 = 0;
  local_38c = 0;
  local_388 = 0;
  local_384 = 6;
  local_380 = 0;
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
  local_378 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  local_320 = 0xf00000d0;
  local_318 = 0;
  local_310 = 0x3f800000;
  local_2b0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  local_2a8 = 0;
  local_2a0 = 0x10;
  local_298 = 0;
  local_290 = 1;
  local_288 = 0;
  local_280 = 0xf00000d0;
  local_278 = 0;
  local_270 = 4;
  local_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0xf00000d0;
  local_228 = 0;
  local_220 = 0x3f800000;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1f0 = &PTR_FUN_14b023b20;
  local_1d8 = &PTR_FUN_14b023b40;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = &PTR_FUN_14b00be70;
  local_1b8 = 0;
  local_1b0 = 0xf00000d0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
  local_194 = 1;
  local_190 = 0;
  local_188 = 0xf00000d0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0xf00000d0;
  local_168 = 0;
  local_160 = 0;
  local_15c = 0;
  local_158 = 0;
  local_154 = 6;
  local_150 = 0;
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
  local_148 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0xf00000d0;
  local_e8 = 0;
  local_e0 = 0x3f800000;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_64 = 0;
  local_74 = 0;
  uStack_70 = 0;
  uStack_6e = 0;
  uStack_6c = 0;
  local_68 = 0;
  if (((*(byte *)(param_3 + 0x28) & 0xfd) != 0) ||
     (FUN_14007b61c(&local_58,local_4d8,param_3 + 0x18,&local_59), *(char *)(param_3 + 0x28) != '\0'
     )) {
    FUN_14007b61c(&local_58,&local_2a8,param_3 + 0x30,&local_59);
    local_78 = *(undefined1 *)(param_3 + 0x28);
    local_74 = *(undefined4 *)(param_3 + 0x2c);
    local_68 = (undefined2)*(undefined4 *)(param_3 + 0x48);
    uStack_66 = (undefined2)((uint)*(undefined4 *)(param_3 + 0x48) >> 0x10);
    uVar2 = *(undefined8 *)(param_3 + 0x40);
    uStack_70 = (undefined2)uVar2;
    uStack_6e = (undefined2)((ulonglong)uVar2 >> 0x10);
    uStack_6c = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if (local_59 == '\x01') {
    if (param_4 == '\0') {
      param_2 = param_2 + 4;
    }
    else {
      if (param_4 != '\x01') goto LAB_14007adcb;
      param_2 = param_2 + 0x124;
    }
    if (param_2 != local_4d8) {
      FUN_14007afac(param_2,local_4d8);
    }
  }
LAB_14007adcb:
  FUN_144908ac8(&local_2a8);
  FUN_144908ac8(local_4d8);
LAB_14007addd:
  if ((local_40 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14007afac FUN_14007afac body=296 status=ok
// SIG undefined FUN_14007afac(void)

undefined8 * FUN_14007afac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x8f) == '\x01') {
    FUN_144908ac8(param_1 + 0x46);
    FUN_144908ac8(param_1);
  }
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  FUN_14007b208(param_1 + 3,param_2 + 3);
  FUN_14007b350(param_1 + 0x17,param_2 + 0x17);
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_14007b0d4(param_1 + 0x43,param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x45);
  param_1[0x46] = param_2[0x46];
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
  param_1[0x48] = 0;
  FUN_14007b208(param_1 + 0x49,param_2 + 0x49);
  FUN_14007b350(param_1 + 0x5d,param_2 + 0x5d);
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  FUN_14007b0d4(param_1 + 0x89,param_2 + 0x89);
  *(undefined4 *)(param_1 + 0x8b) = *(undefined4 *)(param_2 + 0x8b);
  uVar1 = param_2[0x8d];
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x46d) = *(undefined8 *)((longlong)param_2 + 0x46d);
  *(undefined1 *)(param_1 + 0x8f) = 1;
  return param_1;
}



// FUNCTION 14007b0d4 FUN_14007b0d4 body=306 status=ok
// SIG undefined FUN_14007b0d4(void)

void FUN_14007b0d4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_14007b15d;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14007b136:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14007b136;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14007b15d;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14007b15d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14007b208 FUN_14007b208 body=327 status=ok
// SIG undefined FUN_14007b208(void)

undefined1 * FUN_14007b208(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar2 = FUN_14477b664(*(undefined8 *)(param_2 + 0x38));
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  _Src = *(void **)(param_2 + 0x78);
  *(int *)(param_1 + 0x80) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  else {
    FUN_14007bfde(param_1 + 0x78,iVar1,0);
    memcpy(*(void **)(param_1 + 0x78),_Src,(longlong)iVar1 * 0x14);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(int *)(param_1 + 0x90) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  else {
    FUN_14055313c(param_1 + 0x88,iVar1,0);
    FUN_140553097(*(undefined8 *)(param_1 + 0x88),uVar2,iVar1);
  }
  param_1[0x98] = param_2[0x98];
  return param_1;
}



// FUNCTION 14007b350 FUN_14007b350 body=716 status=ok
// SIG undefined FUN_14007b350(void)

undefined8 * FUN_14007b350(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_14a171dc0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    param_1[1] = *(undefined8 *)(param_2 + 8);
  }
  *param_1 = &PTR_FUN_14b023b20;
  param_1[3] = &PTR_FUN_14b023b40;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  param_1[6] = &PTR_FUN_14b00be70;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = 0;
  uVar6 = *(undefined8 *)(param_2 + 0x55);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x55) = uVar6;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  param_1[0x11] = 0;
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x13) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  plVar2 = *(longlong **)(param_2 + 0xa8);
  param_1[0x15] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0xd8));
  uVar6 = FUN_14477b664(uVar6);
  param_1[0x1b] = uVar6;
  param_1[0x1c] = *(undefined8 *)(param_2 + 0xe0);
  uVar6 = *(undefined8 *)(param_2 + 0xf0);
  param_1[0x1d] = *(undefined8 *)(param_2 + 0xe8);
  param_1[0x1e] = uVar6;
  param_1[0x1f] = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x100);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x110);
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = *(undefined8 *)(param_2 + 0x118);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0x120));
  uVar6 = FUN_14477b664(uVar6);
  param_1[0x24] = uVar6;
  param_1[0x25] = *(undefined8 *)(param_2 + 0x128);
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0x138));
  uVar6 = FUN_14477b664(uVar6);
  param_1[0x27] = uVar6;
  param_1[0x28] = *(undefined8 *)(param_2 + 0x140);
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = *(undefined8 *)(param_2 + 0x148);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0x150));
  uVar6 = FUN_14477b664(uVar6);
  param_1[0x2a] = uVar6;
  param_1[0x2b] = *(undefined8 *)(param_2 + 0x158);
  return param_1;
}



// FUNCTION 14007b61c FUN_14007b61c body=2496 status=ok
// SIG undefined FUN_14007b61c(void)

void FUN_14007b61c(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  uint uVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_668 [32];
  undefined8 local_648;
  undefined8 uStack_640;
  undefined **local_638;
  undefined8 local_630;
  undefined1 local_628;
  undefined1 local_620;
  undefined8 local_618;
  undefined4 local_610;
  undefined8 local_608;
  undefined1 local_600;
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined8 local_5e8;
  undefined1 local_5e0;
  undefined4 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined8 local_598;
  undefined4 local_590;
  void *local_588;
  int local_580;
  undefined4 local_57c;
  undefined8 local_578;
  int local_570;
  undefined4 local_56c;
  undefined1 local_568;
  undefined1 local_560;
  undefined8 local_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined1 local_540;
  undefined4 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  void *local_4e8;
  int local_4e0;
  undefined4 local_4dc;
  undefined8 local_4d8;
  int local_4d0;
  undefined4 local_4cc;
  undefined1 local_4c8;
  undefined1 local_4c0 [352];
  void *local_360;
  int local_358;
  undefined4 local_354;
  undefined8 local_348;
  longlong *plStack_340;
  undefined **local_330;
  undefined8 local_328;
  char local_320;
  undefined1 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined1 local_2f8 [8];
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined1 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_288;
  void *local_280;
  int local_278;
  undefined8 local_270;
  int local_268;
  undefined1 local_260;
  undefined1 local_258 [8];
  undefined8 local_250;
  undefined4 local_248;
  undefined1 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1e8;
  void *local_1e0;
  int local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8 [352];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_668;
  lVar8 = param_3[1];
  if ((longlong)(int)lVar8 == 0) {
    *(byte *)(param_2 + 0x45) = *(byte *)(param_2 + 0x45) | 1;
LAB_14007b959:
    *param_4 = 1;
  }
  else {
    uVar7 = *(undefined8 *)param_1[1];
    plVar2 = *(longlong **)*param_1;
    lVar9 = *param_3;
    lVar11 = 0;
    do {
      if (plVar2 != (longlong *)0x0) {
        cVar5 = *(char *)(lVar9 + 0x18 + lVar11);
        if (cVar5 != '\x01') {
          if (cVar5 != '\0') {
            cVar5 = FUN_1448161ac(lVar9 + lVar11 + 0x38,plVar2,uVar7);
            goto LAB_14007b6ca;
          }
          cVar5 = (**(code **)(*plVar2 + 0x50))(plVar2);
          if (((cVar5 != '\0') && (cVar5 = (**(code **)(*plVar2 + 0x58))(plVar2), cVar5 != '\0')) ||
             ((cVar5 = (**(code **)(*plVar2 + 0x68))(plVar2), cVar5 != '\0' &&
              (cVar5 = (**(code **)(*plVar2 + 0x70))(plVar2), cVar5 != '\0')))) goto LAB_14007b6ce;
LAB_14007b713:
          if (lVar9 + lVar11 != 0) {
            lVar8 = *(longlong *)(lVar9 + 0x20 + lVar11);
            if ((*param_2 != lVar8) || ((int)param_2[1] != *(int *)(lVar9 + 0x28 + lVar11))) {
              *param_2 = lVar8;
              *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar9 + 0x28 + lVar11);
              param_2[2] = 0;
            }
            *(byte *)(param_2 + 0x45) = *(byte *)(param_2 + 0x45) | 1;
            *(undefined1 *)(param_2 + 3) = *(undefined1 *)(lVar9 + 0xd8 + lVar11);
            lVar8 = *(longlong *)(lVar9 + 0xe0 + lVar11);
            if ((param_2[4] != lVar8) || ((int)param_2[5] != *(int *)(lVar9 + 0xe8 + lVar11))) {
              param_2[4] = lVar8;
              *(undefined4 *)(param_2 + 5) = *(undefined4 *)(lVar9 + 0xe8 + lVar11);
              param_2[6] = 0;
            }
            *(undefined1 *)(param_2 + 7) = *(undefined1 *)(lVar9 + 0xf8 + lVar11);
            *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar9 + 0x100 + lVar11);
            lVar8 = *(longlong *)(lVar9 + 0x108 + lVar11);
            if (param_2[9] != lVar8) {
              param_2[0xb] = 0;
            }
            param_2[9] = lVar8;
            if (param_2[10] != *(longlong *)(lVar9 + 0x110 + lVar11)) {
              param_2[0xb] = 0;
            }
            uVar7 = FUN_14477b664();
            lVar8 = FUN_14477b664(uVar7);
            param_2[10] = lVar8;
            param_2[0xb] = *(longlong *)(lVar9 + 0x118 + lVar11);
            plVar2 = (longlong *)(lVar9 + 0x120 + lVar11);
            lVar8 = plVar2[1];
            param_2[0xc] = *plVar2;
            param_2[0xd] = lVar8;
            lVar8 = *(longlong *)(lVar9 + 0x130 + lVar11);
            if ((param_2[0xe] != lVar8) || ((int)param_2[0xf] != *(int *)(lVar9 + 0x138 + lVar11)))
            {
              param_2[0xe] = lVar8;
              *(undefined4 *)(param_2 + 0xf) = *(undefined4 *)(lVar9 + 0x138 + lVar11);
              param_2[0x10] = 0;
            }
            *(undefined4 *)(param_2 + 0x11) = *(undefined4 *)(lVar9 + lVar11 + 0x148);
            FUN_1400fce1e(param_2 + 0x12);
            FUN_1400fce78(param_2 + 0x14,lVar9 + lVar11 + 0x160);
            *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(lVar9 + lVar11 + 0x170);
            lVar8 = lVar9 + lVar11 + 0x178;
            FUN_14070e2ba(param_2 + 0x17,lVar8);
            if ((*(char *)(param_1[1] + 8) == '\x01') && (0 < *(int *)(lVar9 + 0x2e0 + lVar11))) {
              local_328 = 0;
              local_320 = '\0';
              if (*(char *)(lVar9 + lVar11 + 0x10) == '\0') {
                local_328 = *(undefined8 *)(lVar9 + 8 + lVar11);
              }
              local_330 = &PTR_FUN_14b023890;
              lVar10 = lVar9 + lVar11;
              local_318 = *(undefined1 *)(lVar10 + 0x18);
              local_310 = *(undefined8 *)(lVar10 + 0x20);
              local_308 = *(undefined4 *)(lVar10 + 0x28);
              local_300 = 0;
              FUN_14007b208(local_2f8,lVar10 + 0x38);
              FUN_14007b208(local_258,lVar9 + lVar11 + 0xd8);
              FUN_14007b350(local_1b8,lVar8);
              local_58 = (void *)0x0;
              local_50 = *(int *)(lVar10 + 0x2e0);
              lVar8 = (longlong)local_50;
              pvVar3 = *(void **)(lVar10 + 0x2d8);
              if (lVar8 == 0) {
                local_4c = 0;
              }
              else {
                FUN_14083056c(&local_58,local_50,0);
                memcpy(local_58,pvVar3,lVar8 << 4);
              }
              plVar2 = *(longlong **)*param_1;
              local_348 = 0;
              plStack_340 = (longlong *)0x0;
              if ((plVar2 == (longlong *)0x0) ||
                 (lVar8 = (**(code **)(*plVar2 + 8))(plVar2), lVar8 == 0)) {
                local_348 = 0;
                iVar6 = 0;
              }
              else {
                uVar1 = *(uint *)(lVar8 + 0xc);
                local_348 = CONCAT44(local_348._4_4_,uVar1);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar8 = 0;
                }
                iVar6 = *(int *)(lVar8 + 0x10);
                if (*(int *)(lVar8 + 0x10) == 0) {
                  LOCK();
                  iVar6 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar12 = DAT_14c964868 + 1;
                  bVar13 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar6;
                  if (bVar13) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar12);
                  }
                  LOCK();
                  iVar6 = *(int *)(lVar8 + 0x10);
                  bVar13 = iVar6 == 0;
                  if (bVar13) {
                    *(int *)(lVar8 + 0x10) = iVar12;
                    iVar6 = 0;
                  }
                  UNLOCK();
                  if (bVar13) {
                    iVar6 = iVar12;
                  }
                }
              }
              local_348 = CONCAT44(iVar6,(undefined4)local_348);
              cVar5 = FUN_14493c216(&local_348,0);
              if (cVar5 == '\0') {
                plStack_340 = plVar2;
              }
              local_648 = local_348;
              uStack_640 = plStack_340;
              local_630 = 0;
              local_628 = 0;
              if (local_320 == '\0') {
                local_630 = local_328;
              }
              local_638 = &PTR_FUN_14b023890;
              local_620 = local_318;
              local_618 = local_310;
              local_610 = local_308;
              local_608 = 0;
              local_600 = local_2f8[0];
              local_5f8 = local_2f0;
              local_5f0 = local_2e8;
              local_5e8 = 0;
              local_5e0 = local_2d8;
              local_5d8 = local_2d0;
              local_5c8 = 0;
              uStack_5c0 = 0;
              local_5d0 = local_2c8;
              uVar7 = FUN_14477b664(local_2c0);
              local_5c8 = FUN_14477b664(uVar7);
              uStack_5c0 = local_2b8;
              local_5b8 = local_2b0;
              uStack_5b0 = uStack_2a8;
              local_5a8 = local_2a0;
              local_5a0 = local_298;
              local_598 = 0;
              local_590 = local_288;
              local_588 = (void *)0x0;
              local_580 = local_278;
              if ((longlong)local_278 == 0) {
                local_57c = 0;
              }
              else {
                FUN_14007bfde(&local_588,local_278,0);
                memcpy(local_588,local_280,(longlong)local_278 * 0x14);
              }
              local_578 = 0;
              local_570 = local_268;
              if (local_268 == 0) {
                local_56c = 0;
              }
              else {
                FUN_14055313c(&local_578,local_268,0);
                FUN_140553097(local_578,local_270,local_268);
              }
              local_568 = local_260;
              local_560 = local_258[0];
              local_558 = local_250;
              local_550 = local_248;
              local_548 = 0;
              local_540 = local_238;
              local_538 = local_230;
              local_528 = 0;
              uStack_520 = 0;
              local_530 = local_228;
              uVar7 = FUN_14477b664(local_220);
              local_528 = FUN_14477b664(uVar7);
              uStack_520 = local_218;
              local_518 = local_210;
              uStack_510 = uStack_208;
              local_508 = local_200;
              local_500 = local_1f8;
              local_4f8 = 0;
              local_4f0 = local_1e8;
              local_4e8 = (void *)0x0;
              local_4e0 = local_1d8;
              if ((longlong)local_1d8 == 0) {
                local_4dc = 0;
              }
              else {
                FUN_14007bfde(&local_4e8,local_1d8,0);
                memcpy(local_4e8,local_1e0,(longlong)local_1d8 * 0x14);
              }
              local_4d8 = 0;
              local_4d0 = local_1c8;
              if (local_1c8 == 0) {
                local_4cc = 0;
              }
              else {
                FUN_14055313c(&local_4d8,local_1c8,0);
                FUN_140553097(local_4d8,local_1d0,local_1c8);
              }
              local_4c8 = local_1c0;
              FUN_14007b350(local_4c0,local_1b8);
              pvVar3 = local_58;
              local_360 = (void *)0x0;
              lVar8 = (longlong)local_50;
              local_358 = local_50;
              if (lVar8 == 0) {
                local_354 = 0;
              }
              else {
                FUN_14083056c(&local_360,local_50,0);
                memcpy(local_360,pvVar3,lVar8 << 4);
              }
              if ((int)param_2[0x44] != 0x31) {
                FUN_1446efa72(param_2 + 0x43,0,0x31,0x10);
                *(undefined4 *)(param_2 + 0x44) = 0x31;
              }
              puVar4 = (undefined8 *)param_2[0x43];
              *puVar4 = &PTR_LAB_14b3e9b40;
              LOCK();
              UNLOCK();
              lVar9 = DAT_14c758608 + 1;
              lVar8 = DAT_14c758608 + 1;
              if (lVar9 == 0) {
                LOCK();
                UNLOCK();
                lVar9 = DAT_14c758608 + 2;
                lVar8 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar8;
              puVar4[2] = lVar9;
              *puVar4 = &PTR_FUN_14b433f70;
              *(undefined4 *)(puVar4 + 3) = (undefined4)local_648;
              *(undefined4 *)((longlong)puVar4 + 0x1c) = local_648._4_4_;
              *(undefined4 *)(puVar4 + 4) = (undefined4)uStack_640;
              *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_640._4_4_;
              FUN_145981026(puVar4 + 5,&local_638);
              FUN_14063b166(&local_638);
              FUN_14063b166(&local_330);
            }
            goto LAB_14007b959;
          }
          break;
        }
        cVar5 = (**(code **)(*plVar2 + 0x50))(plVar2);
        if (((cVar5 == '\0') || (cVar5 = (**(code **)(*plVar2 + 0x58))(plVar2), cVar5 == '\0')) &&
           (cVar5 = (**(code **)(*plVar2 + 0x68))(plVar2), cVar5 != '\0')) {
          cVar5 = (**(code **)(*plVar2 + 0x70))(plVar2);
LAB_14007b6ca:
          if (cVar5 != '\0') goto LAB_14007b713;
        }
      }
LAB_14007b6ce:
      lVar11 = lVar11 + 0x2e8;
    } while ((longlong)(int)lVar8 * 0x2e8 - lVar11 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_668) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14007bfde FUN_14007bfde body=334 status=ok
// SIG undefined FUN_14007bfde(void)

void FUN_14007bfde(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14007c050;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14007c050:
    iVar5 = (int)(uVar4 / 0x14);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x14,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14007c12c FUN_14007c12c body=298 status=ok
// SIG undefined FUN_14007c12c(void)

void FUN_14007c12c(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  
  cVar4 = *(char *)(param_1 + 0x238);
  do {
    if (cVar4 == '\x02') {
      lVar3 = FUN_14493e20e(param_1);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x361) == '\x01')) {
        *(undefined1 *)(param_1 + 0x238) = 0;
      }
    }
    else if (cVar4 == '\x01') {
      lVar3 = *(longlong *)(param_1 + 0x228);
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0x13) == '\x01') {
          FUN_140420124();
          lVar3 = *(longlong *)(param_1 + 0x228);
          if (lVar3 == 0) goto LAB_14007c195;
        }
        if (*(char *)(lVar3 + 0x10) != '\x01') goto LAB_14007c156;
      }
LAB_14007c195:
      *(undefined1 *)(param_1 + 0x238) = 2;
      FUN_140422bb6(param_1);
    }
    else if (cVar4 == '\0') {
      FUN_140421054(param_1);
    }
LAB_14007c156:
    bVar5 = *(char *)(param_1 + 0x238) == cVar4;
    cVar4 = *(char *)(param_1 + 0x238);
    if (bVar5) {
      lVar3 = *(longlong *)(param_1 + 0x240);
      if (((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x3a8) != 0)) &&
           (*(longlong *)(lVar3 + 0x3f0) != 0)) &&
          ((*(longlong *)(lVar3 + 0x3f8) != 0 &&
           (plVar2 = *(longlong **)(param_1 + 0x218), plVar2 != (longlong *)0x0)))) &&
         ((*(int *)(param_1 + 0x214) != 0 &&
          ((uVar1 = *(uint *)(param_1 + 0x210), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))))))
      {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((lVar3 != 0) &&
           ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x214) &&
            ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00014007c253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
          return;
        }
      }
      return;
    }
  } while( true );
}



// FUNCTION 14007c256 FUN_14007c256 body=18 status=ok
// SIG undefined FUN_14007c256(void)

void FUN_14007c256(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00014007c265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 14007c268 FUN_14007c268 body=167 status=ok
// SIG undefined FUN_14007c268(void)

bool FUN_14007c268(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  bVar5 = true;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      if (((param_2[1] != 0) && (-1 < (int)uVar3)) &&
         (((int)uVar3 < DAT_14c9647dc &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 14007c310 FUN_14007c310 body=164 status=ok
// SIG undefined FUN_14007c310(void)

bool FUN_14007c310(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  bVar5 = true;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      if ((param_2[1] != 0) &&
         (((-1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 14007c3b4 FUN_14007c3b4 body=1029 status=ok
// SIG undefined FUN_14007c3b4(void)

/* WARNING: Removing unreachable block (ram,0x00014007c470) */

undefined4
FUN_14007c3b4(double param_1,double param_2,double param_3,double *param_4,double *param_5,
             double param_6,int *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar2 = param_2 * param_2;
  dVar5 = ((param_1 * param_1 - param_3 * param_3) + dVar2) * dVar2;
  if (0.0 <= dVar5) {
    dVar5 = SQRT(dVar5);
    dVar8 = (double)*param_7;
    dVar7 = (double)(*param_8 - *param_7);
    dVar9 = 1.0 / (param_1 * param_1 + dVar2);
    dVar1 = (param_3 * param_1 - dVar5) * dVar9;
    dVar9 = (param_3 * param_1 + dVar5) * dVar9;
    dVar5 = (param_3 - dVar1 * param_1) / param_2;
    dVar6 = (param_3 - param_1 * dVar9) / param_2;
    dVar2 = param_2 - param_3 * dVar5;
    param_2 = param_2 - param_3 * dVar6;
    if (0.0 < dVar2) {
      dVar5 = (dVar5 * -dVar2) / dVar1;
      dVar3 = dVar5 * param_5[1];
      dVar5 = dVar5 * *param_5;
      dVar2 = ((param_5[2] *
                (dVar2 * param_4[10] + dVar3 * param_4[6] + dVar5 * param_4[2] + param_4[0xe]) +
               (param_4[8] * dVar2 + param_4[4] * dVar3 + *param_4 * dVar5 + param_4[0xc]) *
               *param_5 +
               (param_4[9] * dVar2 + param_4[5] * dVar3 + param_4[1] * dVar5 + param_4[0xd]) *
               param_5[1]) /
               (dVar2 * param_4[0xb] + dVar3 * param_4[7] + dVar5 * param_4[3] + param_4[0xf]) +
              param_6) * 0.5 * param_6 * dVar7 + dVar8;
      dVar2 = dVar2 + dVar2;
      if (param_6 < 0.0 == dVar1 < 0.0) {
        iVar4 = (int)ROUND(dVar2 + -0.5) >> 1;
        if (iVar4 < *param_7) {
          iVar4 = *param_7;
        }
        *param_7 = iVar4;
      }
      else {
        iVar4 = -((int)ROUND(-0.5 - dVar2) >> 1);
        if (*param_8 <= iVar4) {
          iVar4 = *param_8;
        }
        *param_8 = iVar4;
      }
    }
    if (0.0 < param_2) {
      dVar5 = (dVar6 * -param_2) / dVar9;
      dVar2 = dVar5 * param_5[1];
      dVar5 = dVar5 * *param_5;
      dVar8 = dVar7 * ((param_5[2] *
                        (param_2 * param_4[10] + dVar2 * param_4[6] + dVar5 * param_4[2] +
                        param_4[0xe]) +
                       (param_4[8] * param_2 + param_4[4] * dVar2 + *param_4 * dVar5 + param_4[0xc])
                       * *param_5 +
                       (param_4[9] * param_2 + param_4[5] * dVar2 + param_4[1] * dVar5 +
                       param_4[0xd]) * param_5[1]) /
                       (param_2 * param_4[0xb] + dVar2 * param_4[7] + dVar5 * param_4[3] +
                       param_4[0xf]) + param_6) * 0.5 * param_6 + dVar8;
      dVar8 = dVar8 + dVar8;
      if (param_6 < 0.0 == dVar9 < 0.0) {
        iVar4 = (int)ROUND(dVar8 + -0.5) >> 1;
        if (iVar4 < *param_7) {
          iVar4 = *param_7;
        }
        *param_7 = iVar4;
      }
      else {
        iVar4 = -((int)ROUND(-0.5 - dVar8) >> 1);
        if (*param_8 <= iVar4) {
          iVar4 = *param_8;
        }
        *param_8 = iVar4;
      }
    }
  }
  return CONCAT31((int3)((uint)*param_7 >> 8),*param_7 < *param_8);
}



// FUNCTION 14007c7b9 FUN_14007c7b9 body=214 status=ok
// SIG undefined FUN_14007c7b9(void)

void FUN_14007c7b9(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_14007c92a(puVar1);
  *puVar1 = &PTR_FUN_14adc5a30;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined4 *)(puVar1 + 0x1b) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0xdc) = 0x404;
  puVar1[0xe] = &DAT_14a176f00;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  FUN_1446f470e(&local_20,L"Float Curve",1);
  puVar1[0xc] = local_20;
  FUN_14007c890(puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14007c890 FUN_14007c890 body=148 status=ok
// SIG undefined FUN_14007c890(void)

void FUN_14007c890(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x448))();
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0x44) != iVar1) {
      FUN_14482f6fa(param_1 + 7);
    }
    uVar2 = (**(code **)(*param_1 + 0x448))(param_1);
    iVar1 = (int)param_1[8];
    *(uint *)(param_1 + 8) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0x44) - iVar1) < uVar2) {
      FUN_14475e4ac(param_1 + 7);
    }
    memset((void *)((longlong)iVar1 * 4 + param_1[7]),0,(longlong)(int)uVar2 << 2);
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 14007c92a FUN_14007c92a body=219 status=ok
// SIG undefined FUN_14007c92a(void)

undefined8 * FUN_14007c92a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14007ca06();
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = &PTR_FUN_14adc62b0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 **)((longlong)param_1 + 0x4c) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(uint *)((longlong)param_1 + 0x5c) = (*(uint *)((longlong)param_1 + 0x5c) & 0xfffffffc) + 1;
  FUN_1446f470e(param_1 + 0xc,L"Curve",1);
  param_1[0xd] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14adcb320;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar2 + 7) = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 14007ca06 FUN_14007ca06 body=162 status=ok
// SIG undefined FUN_14007ca06(void)

void FUN_14007ca06(void)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  bool bVar3;
  
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar3 = DAT_14c75ec34 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar3) {
      DVar2 = DAT_14c75ec34;
      DVar1 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar1;
    UNLOCK();
    if (bVar3) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if (*(int *)((longlong)lpTlsValue + 0x28) == 0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x11ea,
                  L"FObjectInitializer::Get() can only be used inside of UObject-derived class constructor."
                 );
  }
  FUN_14007caa8(lpTlsValue);
  return;
}



// FUNCTION 14007caa8 FUN_14007caa8 body=61 status=ok
// SIG undefined FUN_14007caa8(void)

longlong FUN_14007caa8(longlong param_1)

{
  longlong lVar1;
  
  if ((*(int *)(param_1 + 0x18) == 0) ||
     (lVar1 = *(longlong *)
               (*(longlong *)(param_1 + 0x10) + (longlong)(*(int *)(param_1 + 0x18) + -1) * 8),
     lVar1 == 0)) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectThreadContext.cpp",0x2a,
                  L"Tried to get the current ObjectInitializer, but none is set. Please use NewObject to construct new UObject-derived classes."
                 );
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14007cae6 FUN_14007cae6 body=105 status=ok
// SIG undefined FUN_14007cae6(void)

void FUN_14007cae6(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014007cb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 14007cb58 FUN_14007cb58 body=2825 status=ok
// SIG undefined FUN_14007cb58(void)

void FUN_14007cb58(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong **_Dst;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  byte bVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_418 [32];
  code **local_3f8;
  undefined4 *local_3f0;
  longlong *local_3e8;
  undefined8 local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined1 local_390 [56];
  code *local_358 [16];
  longlong local_2d8 [12];
  char local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong *local_258;
  longlong *local_248;
  longlong local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8 [16];
  longlong local_148 [12];
  char local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  code *local_b8 [2];
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if (param_2[0x77] == 0) {
    if ((local_70 ^ (ulonglong)auStack_418) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014007cc23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1,param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  cVar4 = (**(code **)(*param_2 + 2000))(param_2);
  plVar11 = param_2;
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_418);
  }
  do {
    plVar21 = plVar11;
    plVar11 = (longlong *)plVar21[0x24];
    if (plVar11 == (longlong *)0x0) break;
  } while ((*(byte *)((longlong)plVar11 + 0x1fa) & 2) == 0);
  lVar15 = plVar21[0x15];
  if (lVar15 == 0) {
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
  }
  else {
    lVar15 = *(longlong *)(lVar15 + 0x1c8);
    if (lVar15 == 0) {
      uVar30 = (undefined4)DAT_14c8464f0;
      uVar31 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      uVar26 = (undefined4)DAT_14c8464e0;
      uVar27 = DAT_14c8464e0._4_4_;
      uVar28 = (undefined4)DAT_14c8464e8;
      uVar29 = DAT_14c8464e8._4_4_;
    }
    else {
      uVar30 = (undefined4)*(undefined8 *)(lVar15 + 0x270);
      uVar31 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x270) >> 0x20);
      uVar26 = *(undefined4 *)(lVar15 + 0x260);
      uVar27 = *(undefined4 *)(lVar15 + 0x264);
      uVar28 = *(undefined4 *)(lVar15 + 0x268);
      uVar29 = *(undefined4 *)(lVar15 + 0x26c);
    }
  }
  local_e8 = '\0';
  local_240 = param_2[0x77];
  local_238 = (double)param_2[0x2c];
  dStack_230 = (double)param_2[0x2d];
  local_228 = (double)param_2[0x2e];
  dStack_220 = (double)param_2[0x2f];
  local_218 = (double)param_2[0x30];
  dStack_210 = (double)param_2[0x31];
  local_208 = (double)param_2[0x32];
  local_248 = param_1;
  (**(code **)(*param_2 + 0x7a8))(param_2,&local_3d8);
  puVar20 = &local_3d8;
  puVar19 = local_1c8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar19 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar19 = puVar19 + 1;
  }
  local_c8 = (longlong *)CONCAT44(uVar31,uVar30);
  local_d8 = uVar26;
  uStack_d4 = uVar27;
  uStack_d0 = uVar28;
  uStack_cc = uVar29;
  FUN_14487e4ca(param_2,&local_3d8);
  local_1d0 = local_3a8;
  local_1e0 = local_3b8;
  uStack_1dc = uStack_3b4;
  uStack_1d8 = uStack_3b0;
  uStack_1d4 = uStack_3ac;
  local_1f0 = local_3c8;
  uStack_1ec = uStack_3c4;
  uStack_1e8 = uStack_3c0;
  uStack_1e4 = uStack_3bc;
  local_200 = (undefined4)local_3d8;
  uStack_1fc = local_3d8._4_4_;
  uStack_1f8 = uStack_3d0;
  uStack_1f4 = uStack_3cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caff428) && (FUN_144b3d300(&DAT_14caff428), DAT_14caff428 == -1)) {
    FUN_145f8e32a(&DAT_14caff3a0);
    atexit((_func_5014 *)&LAB_1436691a2);
    _Init_thread_footer(&DAT_14caff428);
  }
  if (DAT_14caff38c != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
    if (DAT_14caff3e0 != DAT_14caff40c) {
      uVar8 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      puVar18 = &DAT_14caff410;
      if (DAT_14caff418 != (undefined *)0x0) {
        puVar18 = DAT_14caff418;
      }
      iVar7 = *(int *)(puVar18 + (ulonglong)(DAT_14caff420 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
      if (iVar7 != -1) {
LAB_14007d5cc:
        lVar15 = DAT_14caff3d8 + (longlong)iVar7 * 0x90;
        if (*(longlong **)(DAT_14caff3d8 + (longlong)iVar7 * 0x90) != param_2)
        goto code_r0x00014007d5e1;
        if (((longlong *)(lVar15 + 0x10) != (longlong *)0x0 && lVar15 != 0) &&
           (*(longlong *)(lVar15 + 0x70) == DAT_14c872be0)) {
          plVar11 = (longlong *)(lVar15 + 0x10);
          plVar21 = &local_3d8;
          for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
            *plVar21 = *plVar11;
            plVar11 = plVar11 + 1;
            plVar21 = plVar21 + 1;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
          plVar11 = &local_3d8;
          plVar21 = local_148;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *plVar21 = *plVar11;
            plVar11 = plVar11 + 1;
            plVar21 = plVar21 + 1;
          }
          local_e8 = '\x01';
          goto LAB_14007cd6e;
        }
      }
    }
LAB_14007d649:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
  }
  if (local_e8 != '\0') {
    local_e8 = '\0';
  }
LAB_14007cd6e:
  iVar7 = _finite(local_238);
  if (((((iVar7 == 0) || (iVar7 = _finite(dStack_230), iVar7 == 0)) ||
       (iVar7 = _finite(local_228), iVar7 == 0)) ||
      ((iVar7 = _finite(dStack_220), iVar7 == 0 || (iVar7 = _finite(local_218), iVar7 == 0)))) ||
     ((iVar7 = _finite(dStack_210), iVar7 == 0 || (iVar7 = _finite(local_208), iVar7 == 0)))) {
    local_218 = 0.0;
    dStack_210 = 0.0;
    local_228 = 0.0;
    dStack_220 = 0.0;
    local_238 = 0.0;
    dStack_230 = 0.0;
    local_208 = 0.0;
  }
  if (DAT_14c760990 == 0) {
    bVar22 = 0;
  }
  else {
    bVar22 = (*(byte *)(param_2[0x77] + 0x6f) & 8) >> 3;
  }
  if (((bVar22 != 0) || (DAT_14ca43528 != 0)) &&
     (local_3f8 = (code **)&local_d8,
     bVar5 = FUN_144ae8422(param_2[0x77],local_1c8,&local_238,&local_200), (bVar22 & bVar5) != 0))
  goto LAB_14007d13c;
  if ((char)param_1[0x662] == '\x01') {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x3314);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar7 < (int)param_1[0x664]) {
      lVar15 = param_1[0x663];
      lVar25 = (longlong)iVar7 * 400;
      _Dst = (longlong **)(lVar15 + lVar25);
      memcpy(_Dst,&local_248,0x100);
      if (&local_248 != _Dst) {
        if (local_e8 == '\x01') {
          plVar11 = local_148;
          plVar21 = (longlong *)(lVar15 + lVar25 + 0x100);
          for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
            *plVar21 = *plVar11;
            plVar11 = plVar11 + 1;
            plVar21 = plVar21 + 1;
          }
          uVar6 = 1;
        }
        else {
          if (*(char *)(_Dst + 0x2c) != '\x01') goto LAB_14007cfde;
          uVar6 = 0;
        }
        *(undefined1 *)(_Dst + 0x2c) = uVar6;
      }
LAB_14007cfde:
      _Dst[0x30] = local_c8;
      *(undefined4 *)(_Dst + 0x2e) = local_d8;
      *(undefined4 *)((longlong)_Dst + 0x174) = uStack_d4;
      *(undefined4 *)(_Dst + 0x2f) = uStack_d0;
      *(undefined4 *)((longlong)_Dst + 0x17c) = uStack_cc;
      goto LAB_14007d13c;
    }
  }
  memcpy(&local_3d8,&local_248,0x100);
  cVar4 = local_e8;
  local_278 = local_e8;
  if (local_e8 == '\x01') {
    plVar11 = local_148;
    plVar21 = local_2d8;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *plVar21 = *plVar11;
      plVar11 = plVar11 + 1;
      plVar21 = plVar21 + 1;
    }
  }
  local_258 = local_c8;
  local_268 = local_d8;
  uStack_264 = uStack_d4;
  uStack_260 = uStack_d0;
  uStack_25c = uStack_cc;
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar15 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14007cf72;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_14007cf7b;
      goto LAB_14007d021;
    }
  }
  else {
LAB_14007cf72:
    if (iVar7 != 0x10) {
LAB_14007d021:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar15 + 0xc60), iVar7 == 2))
        goto LAB_14007cf7b;
        if (iVar7 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_14007cf7b;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar20 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar20;
        if (puVar13 != (uint *)0x0) goto LAB_14007d210;
        while( true ) {
          uVar8 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar8 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar8 | 1;
            __tlregdtor(&LAB_142fb49ae);
          }
          lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar15 + 0x310);
          *(undefined8 *)(lVar15 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar20 = puVar12;
          FUN_140217a48(puVar20);
          puVar13 = (uint *)*puVar20;
LAB_14007d210:
          puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar17 = (uint *)(puVar19 + 0x48);
          uVar8 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar8 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar8) != 0xffffffff) break;
            puVar13 = (uint *)*puVar20;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar20 = puVar13;
            puVar19 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
            puVar17 = (uint *)(puVar19 + 0x48);
            uVar8 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar8 = 1;
              goto LAB_14007d290;
            }
          }
        }
        uVar8 = uVar8 + 1;
LAB_14007d290:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar8;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14a2e8130;
        memcpy(puVar19 + 0x16,&local_3d8,0x100);
        *(char *)(puVar19 + 0x42) = local_278;
        if (local_278 == '\x01') {
          plVar11 = local_2d8;
          plVar21 = puVar19 + 0x36;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *plVar21 = *plVar11;
            plVar11 = plVar11 + 1;
            plVar21 = plVar21 + 1;
          }
        }
        puVar19[0x46] = local_258;
        *(undefined4 *)(puVar19 + 0x44) = local_268;
        *(undefined4 *)((longlong)puVar19 + 0x224) = uStack_264;
        *(undefined4 *)(puVar19 + 0x45) = uStack_260;
        *(undefined4 *)((longlong)puVar19 + 0x22c) = uStack_25c;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar8 = DAT_14c7585c8 >> 10 & 3;
          iVar7 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
            uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
            iVar7 = 0;
          }
          else {
            uVar24 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar24 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar15 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar15 == 0) {
          uVar3 = 1;
          if ((char)uVar24 != '\x06') {
            uVar3 = uVar24;
          }
          uVar24 = uVar3;
          uVar14 = 0;
        }
        else {
          if ((char)uVar24 == '\x06') {
            uVar24 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar15 + 0x30);
        }
        puVar19[0xf] = uVar14;
        puVar19[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar7;
        if (puVar19 == (undefined8 *)0x0) {
          local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_b8[0] = (code *)0x0;
        plVar11 = (longlong *)FUN_14001cc68(0x1a0,0x10);
        *plVar11 = (longlong)&PTR_LAB_14a2e80e0;
        local_a8 = plVar11;
        memcpy(plVar11 + 2,&local_3d8,0x100);
        *(char *)(plVar11 + 0x2e) = cVar4;
        if (cVar4 != '\0') {
          plVar21 = local_2d8;
          plVar23 = plVar11 + 0x22;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *plVar23 = *plVar21;
            plVar21 = plVar21 + 1;
            plVar23 = plVar23 + 1;
          }
        }
        plVar11[0x32] = (longlong)local_258;
        *(undefined4 *)(plVar11 + 0x30) = local_268;
        *(undefined4 *)((longlong)plVar11 + 0x184) = uStack_264;
        *(undefined4 *)(plVar11 + 0x31) = uStack_260;
        *(undefined4 *)((longlong)plVar11 + 0x18c) = uStack_25c;
        if (plVar11 + 2 != (longlong *)0x0) {
          local_b8[0] = FUN_1472d3966;
        }
        local_3f8 = local_b8;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateTransformCommand",&DAT_14ca44c34);
        if (local_b8[0] != (code *)0x0) {
          plVar11 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar11 = local_98;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      goto LAB_14007d13c;
    }
  }
LAB_14007cf7b:
  local_3e8 = local_2d8;
  local_3f8 = local_358;
  local_3f0 = &local_268;
  FUN_14493a558(CONCAT44(local_3d8._4_4_,(undefined4)local_3d8),CONCAT44(uStack_3cc,uStack_3d0),
                &local_3c8,local_390);
LAB_14007d13c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_418);
code_r0x00014007d5e1:
  iVar7 = *(int *)(lVar15 + 0x80);
  if (iVar7 == -1) goto LAB_14007d649;
  goto LAB_14007d5cc;
}



// FUNCTION 14007d692 FUN_14007d692 body=469 status=ok
// SIG undefined FUN_14007d692(void)

void FUN_14007d692(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14007d7c2:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14007d7ff:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14007d6fc;
LAB_14007d6f1:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14007d6fc:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x00014007d729;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14007d77f:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14007d7ff;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14007d7c2;
code_r0x00014007d729:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14007d77f;
    }
  }
  goto LAB_14007d6f1;
}



// FUNCTION 14007d868 FUN_14007d868 body=165 status=ok
// SIG undefined FUN_14007d868(void)

ulonglong FUN_14007d868(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(char *)(param_1 + 0x61) == '\x01') {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    *(undefined8 *)(param_1 + 0x40) = param_2;
    if (*(int *)(param_1 + 0x28) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_1 + 0x48);
    if (*(char *)(param_1 + 0x61) == '\x01') {
      uVar4 = CONCAT71(uVar5,1);
    }
    else if (*(char *)(param_1 + 0xb0) == '\x01') {
      uVar2 = (**(code **)(*(longlong *)(param_1 + 0x58) + 0x10))
                        (param_1 + 0x58,param_1 + 0x98,param_1 + 0x18,0);
      uVar4 = (ulonglong)uVar2;
    }
    else {
      uVar4 = 0;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    iVar1 = *(int *)(param_1 + 0x54);
    FUN_1447a1747(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
      FUN_1408be2c4(param_1 + 0x48,0);
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14007d91b FUN_14007d91b body=134 status=ok
// SIG undefined FUN_14007d91b(void)

void FUN_14007d91b(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1447a1bd6(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  iVar2 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(lVar3 + 8 + lVar4) = iVar2;
  if ((longlong)iVar2 != 0) {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  return;
}



// FUNCTION 14007d9a2 FUN_14007d9a2 body=28 status=ok
// SIG undefined FUN_14007d9a2(void)

undefined8 FUN_14007d9a2(undefined8 param_1,undefined8 param_2)

{
  FUN_14007d9be(param_1,param_2,10);
  return param_2;
}



// FUNCTION 14007d9be FUN_14007d9be body=228 status=ok
// SIG undefined FUN_14007d9be(void)

float * FUN_14007d9be(longlong param_1,float *param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_3 == 10) && (plVar1 = *(longlong **)(param_1 + 0x20), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_28);
    *param_2 = (float)local_28;
    param_2[1] = (float)local_20;
  }
  else {
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar4 = param_1 + 0xe0;
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        lVar4 = *(longlong *)(param_1 + 0xe8);
      }
      uVar2 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_3) * 4);
      if (uVar2 != 0xffffffff) {
        do {
          puVar3 = (uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)(int)uVar2 * 0x14);
          if (*puVar3 == param_3) goto LAB_14007da3a;
          uVar2 = puVar3[3];
        } while (uVar2 != 0xffffffff);
      }
    }
    puVar3 = (uint *)0x0;
LAB_14007da3a:
    puVar5 = puVar3 + 1;
    if (puVar3 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    puVar3 = (uint *)&DAT_14c84635c;
    if (puVar5 != (uint *)0x0) {
      puVar3 = puVar5;
    }
    *(undefined8 *)param_2 = *(undefined8 *)puVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14007daa4 FUN_14007daa4 body=189 status=ok
// SIG undefined FUN_14007daa4(void)

longlong * FUN_14007daa4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      (((plVar4 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0xc))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))))) ||
     (lVar3 = FUN_1456c2db2(param_1), lVar3 != 0)) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (0 < (longlong)iVar2) {
      plVar4 = (longlong *)
               FUN_14477f635(lVar3,*(undefined8 *)
                                    (*(longlong *)(param_1 + 0x10) + -8 + (longlong)iVar2 * 8),3);
      if (iVar2 == 1) {
        return plVar4;
      }
      if (plVar4 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      lVar3 = (ulonglong)(iVar2 - 2) << 3;
      do {
        plVar4 = (longlong *)
                 (**(code **)(*plVar4 + 0x50))(plVar4,*(longlong *)(param_1 + 0x10) + lVar3);
        if (lVar3 == 0) {
          return plVar4;
        }
        lVar3 = lVar3 + -8;
      } while (plVar4 != (longlong *)0x0);
      return (longlong *)0x0;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14007db62 FUN_14007db62 body=41 status=ok
// SIG undefined FUN_14007db62(void)

void FUN_14007db62(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14007e7b4();
  return;
}



// FUNCTION 14007db8c FUN_14007db8c body=187 status=ok
// SIG undefined FUN_14007db8c(void)

undefined4 FUN_14007db8c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_48 [32];
  int local_28;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *(int *)(param_1 + 0x34);
  uVar1 = iVar2 - 1;
  if ((uVar1 < 8) && ((0x8bU >> (uVar1 & 0x1f) & 1) != 0)) {
    uVar3 = *(undefined4 *)(&DAT_149ea6f60 + (ulonglong)uVar1 * 4);
  }
  else {
    if (param_1 == 0) {
      FUN_140056680(&local_20,&DAT_149e01fe8);
    }
    else {
      FUN_1400021e4(param_1 + 0x20,&local_20);
    }
    puVar4 = local_20;
    if (local_18 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    local_28 = iVar2;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/PropertyBool.cpp",0x85,
                  L"Unsupported FBoolProperty %s size %d.",puVar4);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14007dc48 FUN_14007dc48 body=305 status=ok
// SIG undefined FUN_14007dc48(void)

longlong * FUN_14007dc48(longlong *param_1,longlong param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x50);
  }
  param_1[1] = lVar5;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar5 = FUN_144a797b2();
    if (*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30;
      goto LAB_14007dc94;
    }
  }
  bVar6 = false;
LAB_14007dc94:
  *(bool *)((longlong)param_1 + 0x16) = bVar6;
  plVar3 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
LAB_14007dca3:
    while( true ) {
      for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x18)) {
        uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 8) + 0x18);
        if (((uVar1 & 1) != 0) &&
           (((-1 < (short)uVar1 || (*(char *)((longlong)param_1 + 0x15) != '\0')) ||
            ((*(byte *)(lVar5 + 0x3b) & 0x20) == 0)))) goto LAB_14007dcc0;
      }
      if (*(char *)((longlong)param_1 + 0x16) != '\x01') break;
      lVar5 = (longlong)(int)param_1[2] + 1;
      iVar4 = (int)lVar5;
      *(int *)(param_1 + 2) = iVar4;
      if ((int)plVar3[0x3c] <= iVar4) break;
      lVar2 = *(longlong *)(plVar3[0x3b] + lVar5 * 0x10);
      lVar5 = 0;
      if (lVar2 != 0) {
        lVar5 = *(longlong *)(lVar2 + 0x50);
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_14007dcf0;
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b0))();
    if (plVar3 != (longlong *)0x0) {
      lVar5 = plVar3[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
      goto LAB_14007dca3;
    }
    plVar3 = (longlong *)0x0;
LAB_14007dcf0:
    lVar5 = 0;
  }
LAB_14007dcc0:
  *param_1 = (longlong)plVar3;
  param_1[1] = lVar5;
  return param_1;
}



// FUNCTION 14007dd7a FUN_14007dd7a body=123 status=ok
// SIG undefined FUN_14007dd7a(void)

void FUN_14007dd7a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14007e22a(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14007de86(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14007ddf6 FUN_14007ddf6 body=144 status=ok
// SIG undefined FUN_14007ddf6(void)

undefined4 FUN_14007ddf6(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((((*(int *)(param_2 + 0x168) == *(int *)(param_1 + 0xc0)) &&
         (*(int *)(param_2 + 0x16c) == *(int *)(param_1 + 0xc4))) &&
        (*(int *)(param_2 + 0x170) == *(int *)(param_1 + 200))) &&
       (uVar2 = 0, *(int *)(param_2 + 0x174) == *(int *)(param_1 + 0xcc))) {
      uVar1 = *(uint *)(param_2 + 0x178) ^ *(uint *)(param_1 + 0xd0);
      uVar2 = CONCAT31((int3)(uVar1 >> 8),
                       *(int *)(param_2 + 0x184) == *(int *)(param_1 + 0xdc) &&
                       (*(int *)(param_2 + 0x180) == *(int *)(param_1 + 0xd8) &&
                       (*(int *)(param_2 + 0x17c) == *(int *)(param_1 + 0xd4) && uVar1 == 0)));
    }
  }
  return uVar2;
}



// FUNCTION 14007de86 FUN_14007de86 body=374 status=ok
// SIG undefined FUN_14007de86(void)

void FUN_14007de86(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14007df2f;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14007df2f:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
    }
  }
  return;
}



// FUNCTION 14007dffc FUN_14007dffc body=290 status=ok
// SIG undefined FUN_14007dffc(void)

void FUN_14007dffc(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined1 local_3c;
  longlong local_38;
  longlong local_30;
  undefined1 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = 0;
  do {
    cVar1 = *(char *)(param_1 + 0x18a + lVar3);
    lVar2 = 0xa0;
    if (cVar1 == '\0') {
LAB_14007e02c:
      lVar2 = *(longlong *)(lVar3 + 0x148 + lVar2 + param_1);
    }
    else {
      if (cVar1 == '\x01') {
        lVar2 = 0x178;
        goto LAB_14007e02c;
      }
      lVar2 = 0;
    }
    if ((lVar2 == param_2) && (*(char *)(param_1 + 0x189 + lVar3) != '\x03')) {
      if (*(int *)(param_1 + 0x160 + lVar3) == *(int *)(param_1 + 0x34)) {
        local_3c = *(undefined1 *)(param_1 + 0x16c + lVar3);
        local_40 = *(undefined4 *)(param_1 + 0x168 + lVar3);
        local_38 = *(longlong *)(param_1 + 0x170 + lVar3);
        if ((DAT_14c950c29 == 1) && (local_38 != 0)) {
          FUN_1456cec3c();
        }
        local_30 = *(longlong *)(param_1 + 0x178 + lVar3);
        if (((DAT_14c950c29 & 1) != 0) && (local_30 != 0)) {
          FUN_1456cec3c();
        }
        local_28 = *(undefined1 *)(param_1 + 0x180 + lVar3);
        local_20 = 1;
        FUN_1403201ee(param_1,0);
      }
      *(undefined1 *)(param_1 + 0x189 + lVar3) = 2;
      goto LAB_14007e0e6;
    }
    lVar3 = lVar3 + 0x1e8;
    if (lVar3 == 0x988) {
LAB_14007e0e6:
      if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 14007e120 FUN_14007e120 body=57 status=ok
// SIG undefined FUN_14007e120(void)

void FUN_14007e120(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa240 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa240 = FUN_140002ddd(FUN_146330de3,uVar1,L"AnimNode_LayeredBoneBlend");
  }
  return;
}



// FUNCTION 14007e15a FUN_14007e15a body=206 status=ok
// SIG undefined FUN_14007e15a(void)

void FUN_14007e15a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined1 local_3c;
  longlong local_38;
  longlong local_30;
  undefined1 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = 0x189;
  while ((*(int *)(param_1 + -0x29 + lVar1) != *(int *)(param_1 + 0x34) ||
         (*(char *)(param_1 + lVar1) == '\x03'))) {
    lVar1 = lVar1 + 0x1e8;
    if (lVar1 == 0xb11) {
LAB_14007e190:
      if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  local_3c = *(undefined1 *)(param_1 + -0x1d + lVar1);
  local_40 = *(undefined4 *)(param_1 + -0x21 + lVar1);
  local_38 = *(longlong *)(param_1 + -0x19 + lVar1);
  if ((DAT_14c950c29 == 1) && (local_38 != 0)) {
    FUN_1456cec3c();
  }
  local_30 = *(longlong *)(param_1 + -0x11 + lVar1);
  if (((DAT_14c950c29 & 1) != 0) && (local_30 != 0)) {
    FUN_1456cec3c();
  }
  local_28 = *(undefined1 *)(param_1 + -9 + lVar1);
  local_20 = 1;
  FUN_1403201ee(param_1,0);
  *(undefined1 *)(param_1 + lVar1) = 2;
  goto LAB_14007e190;
}



// FUNCTION 14007e22a FUN_14007e22a body=353 status=ok
// SIG undefined FUN_14007e22a(void)

void FUN_14007e22a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14007e2b1;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14007e2b1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14007e38c FUN_14007e38c body=91 status=ok
// SIG undefined FUN_14007e38c(void)

void FUN_14007e38c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      FUN_14477f762(param_1 + 0x90,param_1 + 0x50,param_2);
    }
    else {
      FUN_1478d2922(param_1 + 0x90,param_1 + 0x40,param_2);
    }
    uVar1 = *(undefined8 *)(param_2 + 0x170);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0x168);
    *(undefined8 *)(param_1 + 200) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x180);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0x178);
    *(undefined8 *)(param_1 + 0xd8) = uVar1;
  }
  return;
}



// FUNCTION 14007e3e8 FUN_14007e3e8 body=912 status=ok
// SIG undefined FUN_14007e3e8(void)

void FUN_14007e3e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_48;
  longlong local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = *(int *)(param_1 + 0x140) + ((*(int *)(param_1 + 0x140) + 1) / 5) * -5 + 1;
  *(int *)(param_1 + 0x140) = iVar4;
  lVar1 = param_1 + (longlong)iVar4 * 0x1e8;
  lVar8 = *(longlong *)(param_2 + 8);
  if (lVar8 == 0) {
    *(undefined8 *)(lVar1 + 0x1e8) = 0;
    *(undefined8 *)(lVar1 + 0x2c0) = 0;
    goto LAB_14007e4b8;
  }
  lVar6 = FUN_14063d1f6();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) {
    lVar6 = FUN_1405b04b6();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_14007e4b8;
    *(undefined1 *)(lVar1 + 0x18a) = 1;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar8);
    }
    *(longlong *)(lVar1 + 0x2c0) = lVar8;
    plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x2c8) + 0xa8))(lVar1 + 0x2c8);
    if (plVar7 == (longlong *)0x0) goto LAB_14007e4b8;
    lVar8 = lVar1 + 0x230;
  }
  else {
    *(undefined1 *)(lVar1 + 0x18a) = 0;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar8);
    }
    *(longlong *)(lVar1 + 0x1e8) = lVar8;
    plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x2c8) + 0xa8))(lVar1 + 0x2c8);
    if (plVar7 == (longlong *)0x0) goto LAB_14007e4b8;
    lVar8 = lVar1 + 400;
  }
  *plVar7 = lVar8;
LAB_14007e4b8:
  if (*(char *)(lVar1 + 0x18a) == '\0') {
    *(undefined4 *)(lVar1 + 500) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(lVar1 + 0x224) = *(undefined4 *)(param_2 + 0x14);
    *(bool *)(lVar1 + 0x228) = *(char *)(param_2 + 0x58) == '\x02';
  }
  else if (*(char *)(lVar1 + 0x18a) == '\x01') {
    *(undefined4 *)(lVar1 + 0x2b4) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(lVar1 + 700) = *(undefined4 *)(param_2 + 0x14);
    *(bool *)(lVar1 + 0x2b8) = *(char *)(param_2 + 0x58) == '\x02';
    dVar2 = *(double *)(param_2 + 0x70);
    *(float *)(lVar1 + 0x2ac) = (float)*(double *)(param_2 + 0x68);
    *(float *)(lVar1 + 0x2b0) = (float)dVar2;
  }
  lVar8 = *(longlong *)(param_2 + 0x60);
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  if ((lVar8 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar8);
  }
  *(longlong *)(lVar1 + 800) = lVar8;
  uVar5 = *(int *)(param_1 + 0x34) - 1;
  if (uVar5 < 5) {
    *(undefined1 *)(param_1 + 0x189 + (ulonglong)uVar5 * 0x1e8) = 2;
  }
  *(undefined1 *)(lVar1 + 0x188) = *(undefined1 *)(param_2 + 0x58);
  *(undefined4 *)(lVar1 + 0x164) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(lVar1 + 0x16c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined4 *)(lVar1 + 0x168) = *(undefined4 *)(param_2 + 0x38);
  lVar8 = *(longlong *)(param_2 + 0x40);
  if (DAT_14c950c29 == 1) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x40);
    }
  }
  bVar3 = DAT_14c950c29;
  *(longlong *)(lVar1 + 0x170) = lVar8;
  lVar8 = *(longlong *)(param_2 + 0x48);
  if ((bVar3 & 1) != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(lVar1 + 0x178) = lVar8;
  *(undefined1 *)(lVar1 + 0x180) = *(undefined1 *)(param_2 + 0x50);
  *(undefined1 *)(lVar1 + 0x189) = 0;
  local_4c = *(undefined1 *)(param_2 + 0x1c);
  local_50 = *(undefined4 *)(param_2 + 0x18);
  local_48 = *(longlong *)(param_2 + 0x20);
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40 = *(longlong *)(param_2 + 0x28);
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = *(undefined1 *)(param_2 + 0x30);
  local_30 = 1;
  FUN_1403201ee(param_1,*(undefined4 *)(lVar1 + 0x160));
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14007e77a FUN_14007e77a body=57 status=ok
// SIG undefined FUN_14007e77a(void)

void FUN_14007e77a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa078 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa078 = FUN_140002ddd(FUN_146330429,uVar1,L"AnimNode_ApplyAdditive");
  }
  return;
}



// FUNCTION 14007e7b4 FUN_14007e7b4 body=315 status=ok
// SIG undefined FUN_14007e7b4(void)

void FUN_14007e7b4(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14007e81e;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_14007e81e:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 14007e8fc FUN_14007e8fc body=176 status=ok
// SIG undefined FUN_14007e8fc(void)

void FUN_14007e8fc(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1410698b0(param_1,iVar1);
    }
    if (uVar3 != 0) {
      lVar2 = (longlong)iVar1 * 0x18 + *param_1 + 0x14;
      do {
        *(undefined8 *)(lVar2 + -0xc) = 0;
        *(undefined8 *)(lVar2 + -4) = 0x100000000;
        lVar2 = lVar2 + 0x18;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146d9cfba(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146d9d020(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14007e9ac FUN_14007e9ac body=369 status=ok
// SIG undefined FUN_14007e9ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_14007e9ac(longlong param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = -1;
  if (*(char *)(param_1 + 0x1e) != -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c99e178) {
      FUN_144b3d300(&DAT_14c99e178);
      if (DAT_14c99e178 == -1) {
        _DAT_14c99e148 = &PTR_LAB_149e668b0;
        _DAT_14c99e150 = 0;
        FUN_1405bceb4(&DAT_14c99e148);
        _DAT_14c99e148 = &PTR_FUN_149fcd880;
        DAT_14c99e158 = 0;
        _DAT_14c99e160 = 0;
        _DAT_14c99e168 = 0;
        _DAT_14c99e170 = 0;
        atexit((_func_5014 *)&LAB_142aedb63);
        _Init_thread_footer(&DAT_14c99e178);
      }
    }
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
    if (lVar2 != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c99e178) {
        FUN_144b3d300(&DAT_14c99e178);
        if (DAT_14c99e178 == -1) {
          _DAT_14c99e148 = &PTR_LAB_149e668b0;
          _DAT_14c99e150 = 0;
          FUN_1405bceb4(&DAT_14c99e148);
          _DAT_14c99e148 = &PTR_FUN_149fcd880;
          DAT_14c99e158 = 0;
          _DAT_14c99e160 = 0;
          _DAT_14c99e168 = 0;
          _DAT_14c99e170 = 0;
          atexit((_func_5014 *)&LAB_142aedb63);
          _Init_thread_footer(&DAT_14c99e178);
        }
      }
      cVar1 = (char)((uint)((int)lVar2 - DAT_14c99e168) >> 3) * -0x5d;
    }
  }
  *param_2 = cVar1;
  return param_2;
}



// FUNCTION 14007eb1e FUN_14007eb1e body=482 status=ok
// SIG undefined FUN_14007eb1e(void)

void FUN_14007eb1e(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [64];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  byte local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar4 + 0x208) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x218);
    EnterCriticalSection(lpCriticalSection);
    if (*(longlong *)(lVar4 + 0x208) != 0) {
      FUN_143abbf58(lVar4 + 0x1d8,*(longlong *)(param_1 + 8) + 0x170,lVar4 + 0x208);
      *(undefined8 *)(lVar4 + 0x208) = 0;
      plVar3 = *(longlong **)(lVar4 + 0x210);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(lVar4 + 0x210) = 0;
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
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  local_88 = *(undefined8 *)(lVar4 + 0x1d8);
  if (*(int *)(lVar4 + 0x1f8) < 1) {
    local_80 = 0;
  }
  else {
    local_80 = *(undefined8 *)(lVar4 + 0x1f0);
  }
  local_78 = *(undefined4 *)(lVar4 + 0x240);
  local_74 = *(undefined4 *)(param_3 + 0x68);
  local_70 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    local_70 = param_3;
  }
  local_68 = param_3 + 0x70;
  if (*(longlong *)(param_3 + 0xa0) != 0) {
    local_68 = *(longlong *)(param_3 + 0xa0);
  }
  local_60 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0x210) != 0) {
    local_60 = *(longlong *)(param_1 + 0x210);
  }
  local_58 = *(undefined4 *)(param_1 + 0x218);
  local_50 = *(undefined8 *)(param_1 + 0x18);
  local_48 = *(undefined8 *)(param_1 + 0x28);
  local_3c = *(byte *)(param_1 + 0x264) >> 1 & 1;
  local_40 = param_2;
  FUN_1438e6c63();
  if (0 < *(int *)(param_1 + 600)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x250);
      if (*(longlong *)(param_1 + 0x250) == 0) {
        lVar6 = param_1 + 0x220;
      }
      **(undefined4 **)(lVar6 + lVar4) = (*(undefined4 **)(lVar6 + lVar4))[0xe];
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 < *(int *)(param_1 + 600));
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14007ed02 FUN_14007ed02 body=469 status=ok
// SIG undefined FUN_14007ed02(void)

void FUN_14007ed02(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14007ee32:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14007ee6f:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14007ed6c;
LAB_14007ed61:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14007ed6c:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x00014007ed99;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14007edef:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14007ee6f;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14007ee32;
code_r0x00014007ed99:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14007edef;
    }
  }
  goto LAB_14007ed61;
}



// FUNCTION 14007eed8 FUN_14007eed8 body=100 status=ok
// SIG undefined FUN_14007eed8(void)

void FUN_14007eed8(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_14007ef3c(param_1,param_2,1);
  return;
}


