// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1441189bb FUN_1441189bb body=41 status=ok
// SIG undefined FUN_1441189bb(void)

void FUN_1441189bb(void)

{
  DAT_14cbc9068 = 0;
  if (DAT_14cbc9060 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69252();
  return;
}



// FUNCTION 144118a2e FUN_144118a2e body=393 status=ok
// SIG undefined FUN_144118a2e(void)

void FUN_144118a2e(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x28) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  FUN_144118bb8(param_1,*(undefined8 *)(param_2 + 0xa8));
  local_30 = DAT_14cbc9b08;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_1418e54c0(param_2,lVar4,param_1,FUN_148d191de);
  }
  local_30 = DAT_14cbc9b10;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_1418e54c0(param_2,lVar4,param_1,FUN_148d19248);
  }
  local_30 = DAT_14cbc9b18;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_1418e54c0(param_2,lVar4,param_1,FUN_1458de644);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144118bb8 FUN_144118bb8 body=1817 status=ok
// SIG undefined FUN_144118bb8(void)

void FUN_144118bb8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (param_2 == 0) goto LAB_144118dcf;
  if (DAT_14cba8288 == 0) {
    local_50 = &local_30;
    local_30 = FUN_141864c34;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464cee30;
    local_58 = &LAB_148bfac22;
    local_60 = &LAB_140f21842;
    local_68 = &DAT_149e063b2;
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  puVar1 = (uint *)(param_1 + 0x30);
  lVar6 = *(longlong *)(param_2 + 0x10);
  iVar3 = *(int *)(lVar6 + 0x38);
  if ((iVar3 < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
      DAT_14cba8288 + 0x30)) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar6 = *(longlong *)(param_2 + 0x10);
      iVar3 = *(int *)(lVar6 + 0x38);
    }
    if ((iVar3 < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
        DAT_14cbadd90 + 0x30)) goto LAB_144118dcf;
    lVar6 = *(longlong *)(param_2 + 0x168);
    if (lVar6 == 0) {
LAB_144118c94:
      *puVar1 = 0;
      iVar3 = 0;
    }
    else {
      if (DAT_14cba8288 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141864c34;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1464cee30;
        local_58 = &LAB_148bfac22;
        local_60 = &LAB_140f21842;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
      goto LAB_144118c94;
      uVar2 = *(uint *)(lVar6 + 0xc);
      *puVar1 = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar3 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar3 = *(int *)(lVar6 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar5;
        }
      }
    }
    *(int *)(param_1 + 0x34) = iVar3;
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x38) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar5;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar3;
LAB_144118cdc:
    lVar6 = FUN_14030d330(param_2);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      lVar6 = 0x44;
      iVar3 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar6 + 0xc);
      *(uint *)(param_1 + 0x40) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      lVar6 = 0x44;
      iVar3 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar3 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar5;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar5;
        }
      }
    }
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *puVar1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar5;
      }
    }
    *(int *)(param_1 + 0x34) = iVar3;
    lVar6 = *(longlong *)(param_2 + 0x3c0);
    if (lVar6 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1459f2e4c;
        local_58 = &LAB_148c39de3;
        local_60 = &LAB_1457a9eb2;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        uVar2 = *(uint *)(lVar6 + 0xc);
        *(uint *)(param_1 + 0x38) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar3 = *(int *)(lVar6 + 0x10);
        if (iVar3 == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar3 = *(int *)(lVar6 + 0x10);
          bVar8 = iVar3 == 0;
          if (bVar8) {
            *(int *)(lVar6 + 0x10) = iVar5;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar8) {
            iVar3 = iVar5;
          }
          *(int *)(param_1 + 0x3c) = iVar3;
          if (iVar3 == 0) goto LAB_144118dcf;
        }
        else {
          *(int *)(param_1 + 0x3c) = iVar3;
        }
        uVar2 = *(uint *)(param_1 + 0x38);
        if (((((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) ||
            (plVar4 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar4 == (longlong *)0x0)) ||
           (((int)plVar4[2] != iVar3 || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
        goto LAB_144118dcf;
        if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
          param_2 = *plVar4;
        }
        else {
          param_2 = 0;
        }
        goto LAB_144118cdc;
      }
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    lVar6 = 0x3c;
    iVar3 = 0;
  }
  *(int *)(param_1 + lVar6) = iVar3;
LAB_144118dcf:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441192d2 FUN_1441192d2 body=275 status=ok
// SIG undefined FUN_1441192d2(void)

void FUN_1441192d2(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x28) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  FUN_144118bb8(param_1,*(undefined8 *)(param_2 + 0xa8));
  local_30 = DAT_14cbc9b20;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_145c36434(param_2,lVar4,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441193e6 FUN_1441193e6 body=2613 status=ok
// SIG undefined FUN_1441193e6(void)

void FUN_1441193e6(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x28) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  FUN_144118bb8(param_1,*(undefined8 *)(param_2 + 0xa8));
  local_30 = DAT_14cbc99d8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_140545d22;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc99e0;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = (code *)&LAB_140545c9c;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc99e8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = (code *)&LAB_148d1945c;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc99f0;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_1410032f0;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc99f8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_141003164;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a00;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_1414641b4;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a08;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_1459e1a48;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a10;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_145a2721a;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a48;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_14114c9d6;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a20;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = (code *)&LAB_140545ca4;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a20;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = (code *)&LAB_140545ca4;
    FUN_1410530c2(param_2,lVar4,0,param_1);
  }
  local_30 = DAT_14cbc9a28;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_148d19464;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a30;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_148d194d8;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a38;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_148d1954c;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a40;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_148d195c0;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a18;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_140fb278a;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a50;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_140dc8ca0;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a58;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_1418e322a;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a60;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_1418e33b4;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a68;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_148d19634;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a70;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_146255fda;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a78;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_1458df1c6;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a80;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_145c255c2;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a88;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = (code *)&LAB_148d19690;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a90;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = (code *)&LAB_146625bec;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9a98;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = (code *)&LAB_148d19698;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9aa0;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = (code *)&LAB_145e37f72;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9aa8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_144119e1c;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9ab0;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_1458ccfea;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9ab8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_1410ee938;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9ac0;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_148d196a2;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9ac8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_141266b9c;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9ad0;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_14586643a;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9ad8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_145906092;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9af0;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_1418e347c;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9af8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_148d1972e;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9b00;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_148d197ce;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9b28;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_145acc7f6;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  local_30 = DAT_14cbc9b30;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    local_38 = FUN_14625c542;
    FUN_1410530c2(param_2,lVar4,1,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144119e1c FUN_144119e1c body=189 status=ok
// SIG undefined FUN_144119e1c(void)

void FUN_144119e1c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x3c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_140545fa2(uVar2);
    }
  }
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x34))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_1440ae9d6(uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 144119ed9 FUN_144119ed9 body=69 status=ok
// SIG undefined FUN_144119ed9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144119ed9(void)

{
  _DAT_14cbc91b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144119f1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc91c0,1);
  return;
}



// FUNCTION 144119f1e FUN_144119f1e body=978 status=ok
// SIG undefined FUN_144119f1e(void)

void FUN_144119f1e(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x28) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  FUN_144118bb8(param_1,*(undefined8 *)(param_2 + 0xa8));
  local_30 = DAT_14cbc99d8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,FUN_148d19812);
  }
  local_30 = DAT_14cbc99e0;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,&LAB_148d198e0);
  }
  local_30 = DAT_14cbc99e8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,&LAB_148d198e8);
  }
  local_30 = DAT_14cbc99f0;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,FUN_148d198f0);
  }
  local_30 = DAT_14cbc99f8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,FUN_148d198f0);
  }
  local_30 = DAT_14cbc9a48;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,FUN_148d19966);
  }
  local_30 = DAT_14cbc9a50;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,FUN_148d19a44);
  }
  local_30 = DAT_14cbc9a58;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,FUN_148d19bce);
  }
  local_30 = DAT_14cbc9a68;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,FUN_148d19c56);
  }
  local_30 = DAT_14cbc9aa8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,FUN_148d19c8e);
  }
  local_30 = DAT_14cbc9a60;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,FUN_148d19d04);
  }
  local_30 = DAT_14cbc9ab8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  if (lVar4 != 0) {
    FUN_148d238cc(param_2,lVar4,param_1,FUN_148d19d3e);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14411a2f2 FUN_14411a2f2 body=2483 status=ok
// SIG undefined FUN_14411a2f2(void)

void FUN_14411a2f2(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  code *local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x28) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar2 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar2 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar2 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar2 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar8 = *(longlong *)(param_2 + 0xa8);
  if (lVar8 == 0) goto LAB_14411a468;
  lVar3 = FUN_1402095ca();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_14411a468;
  uVar1 = *(uint *)(lVar8 + 0xc);
  *(uint *)(param_1 + 0x30) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  iVar2 = *(int *)(lVar3 + 0x10);
  if (*(int *)(lVar3 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar2 = *(int *)(lVar3 + 0x10);
    bVar9 = iVar2 == 0;
    if (bVar9) {
      *(int *)(lVar3 + 0x10) = iVar6;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar2 = iVar6;
    }
  }
  *(int *)(param_1 + 0x34) = iVar2;
  lVar3 = *(longlong *)(lVar8 + 0x3c0);
  if (lVar3 == 0) {
LAB_14411a419:
    *(undefined4 *)(param_1 + 0x38) = 0;
    lVar3 = 0x3c;
    iVar2 = 0;
LAB_14411a428:
    *(int *)(param_1 + lVar3) = iVar2;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = (code *)CONCAT44(local_98._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_14411a419;
    uVar1 = *(uint *)(lVar3 + 0xc);
    *(uint *)(param_1 + 0x38) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x3c) = iVar2;
LAB_14411a962:
      uVar1 = *(uint *)(param_1 + 0x38);
      if (((((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) ||
          (puVar5 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          puVar5 == (undefined8 *)0x0)) ||
         ((*(int *)(puVar5 + 2) != iVar2 || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_14411a42c;
      if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar5;
      }
      else {
        uVar4 = 0;
      }
      lVar3 = FUN_14030d330(uVar4);
      if (lVar3 == 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
        lVar3 = 0x44;
        iVar2 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0xc);
        *(uint *)(param_1 + 0x40) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        lVar3 = 0x44;
        iVar2 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar2 = *(int *)(lVar7 + 0x10);
          bVar9 = iVar2 == 0;
          if (bVar9) {
            *(int *)(lVar7 + 0x10) = iVar6;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar2 = iVar6;
          }
        }
      }
      goto LAB_14411a428;
    }
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar2 = *(int *)(lVar3 + 0x10);
    bVar9 = iVar2 == 0;
    if (bVar9) {
      *(int *)(lVar3 + 0x10) = iVar6;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar2 = iVar6;
    }
    *(int *)(param_1 + 0x3c) = iVar2;
    if (iVar2 != 0) goto LAB_14411a962;
  }
LAB_14411a42c:
  lVar8 = *(longlong *)(lVar8 + 0x430);
  if (lVar8 == 0) {
LAB_14411a45c:
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar2 = 0;
  }
  else {
    lVar3 = FUN_140d012c2();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14411a45c;
    uVar1 = *(uint *)(lVar8 + 0xc);
    *(uint *)(param_1 + 0x48) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar2 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar2 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar2 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar2 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 0x4c) = iVar2;
LAB_14411a468:
  local_40 = DAT_14cbc9ad8;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_148d1a298;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b58;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_146625bf6;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b48;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_1457da7d8;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b70;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_148d1a2d2;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b78;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_148d1a33e;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b50;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_148d1a3a4;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b60;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_140fb2d9c;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b60;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_140fb2d9c;
    FUN_1418e58de(param_2,lVar8,0,param_1);
  }
  local_40 = DAT_14cbc99e0;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = (code *)&LAB_140fb2d94;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc99e8;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = (code *)&LAB_148d1a40a;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b68;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_148d1a412;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b88;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_146625c30;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b90;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_146625cfa;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9b98;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_148d1a47e;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9ba0;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_148d1a4d6;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9bb8;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_148d1a52e;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9bc0;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_148d1a588;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9ba8;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_146625dba;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  local_40 = DAT_14cbc9bb0;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 != 0) {
    local_98 = FUN_148d1a5e4;
    FUN_1418e58de(param_2,lVar8,1,param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14411aca6 FUN_14411aca6 body=147 status=ok
// SIG undefined FUN_14411aca6(void)

undefined8 *
FUN_14411aca6(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((param_3 != 0) && (*(char *)(param_1 + 0x28) != '\0')) && (0 < *(int *)(param_3 + 400))) &&
     (lVar4 = FUN_1404d56e0(param_3), lVar4 != 0)) {
    lVar5 = FUN_14030d4a0();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && (*(char *)(lVar4 + 0x3e6) == '\0')) {
      param_2[3] = 0;
      uVar1 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = uVar1;
      param_2[2] = DAT_14c8464f0;
      return param_2;
    }
  }
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[3];
  param_2[2] = param_4[2];
  param_2[3] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 14411ad3a FUN_14411ad3a body=179 status=ok
// SIG undefined FUN_14411ad3a(void)

void FUN_14411ad3a(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  plVar3 = (longlong *)FUN_140489acc();
  if (plVar3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x420))(plVar3);
    *(undefined1 *)(param_1 + 0x28) = uVar2;
  }
  return;
}



// FUNCTION 14411aeca FUN_14411aeca body=11301 status=ok
// SIG undefined FUN_14411aeca(void)

void FUN_14411aeca(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,L"OakInputTags");
  FUN_1446f470e(&local_40,L"Input.Action.Move",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Look",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x10) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Jump",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x20) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.LookMotionControls",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x18) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.JumpAndGlide",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x28) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Crouch",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x30) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.CrouchHold",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x38) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.CrouchOrDash",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x40) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Dash",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x48) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.DashDirection",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x50) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.DashUp",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x58) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.DashDown",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x60) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.DashLeft",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x68) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.DashRight",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x70) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Sprint",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x78) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Fire",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x80) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Zoom",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x88) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Reload",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x90) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.WeaponMode",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x98) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.DropWeapon",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xa0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.NextWeapon",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xa8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.PrevWeapon",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xb0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Weapon1",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xb8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Weapon2",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xc0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Weapon3",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 200) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Weapon4",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xd0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Melee",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xd8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.WeaponWheel",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xe0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Gadget",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xe8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.GadgetHold",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xf0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.GadgetDoubleTap",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0xf8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.RepairKit",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x100) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.SummonPersonalVehicle",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x108) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Equip",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x110) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.HealSelf",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x118) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Use",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x120) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.SecondaryUse",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x128) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Inventory.TakeAsJunk",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x130) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Drop",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x138) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.ReloadOrDrop",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x140) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Throw",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x148) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.GiveUp",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x150) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Ping",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x158) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.PingLocations",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x160) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.PingHold",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x168) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.CancelTravelCountdown",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x170) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Boost",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x178) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Brake",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x180) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.ExitVehicle",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x188) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Steer",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 400) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Horn",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x198) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Powerslide",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1a0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Throttle",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1a8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vehicle.Look",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1b0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vehicle.Fire",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1b8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vehicle.Zoom",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1c0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vehicle.NextWeapon",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1c8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vehicle.PrevWeapon",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1d0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vehicle.Ping",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1d8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vehicle.PingLocations",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1e0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vehicle.Weapon1",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1e8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Vehicle.Weapon2",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1f0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Pause",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x1f8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.PrevTrackedMission",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x200) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.NextTrackedMission",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x208) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.StatusMenu",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x210) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.ContextSensitivePrompt",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x218) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.OpenInventory",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x220) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.PushToTalk",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x228) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.OpenMap",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x230) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.OpenSkills",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x238) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.OpenLog",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x240) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Skip",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x248) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Cursor.Click",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x250) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Cursor.Hold",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 600) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Cursor.HoldReleased",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x260) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Cursor.Move",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x268) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Cursor.MoveReleased",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x270) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Cursor.Scroll",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x278) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Cursor.ScrollReleased",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x280) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.ViewLegend",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x288) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.Pan",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x290) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.EdgePan",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x298) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.Rotate",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2a0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.ZoomIn",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2a8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.ZoomOut",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2b0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.ZoomAxis",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2b8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.ViewSubmap",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2c0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.Center",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2c8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.Explore",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2d0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.SetMarker",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2d8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.RemoveMarkers",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2e0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.Back",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2e8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.Tooltip.MainAction",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2f0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.Tooltip.LeaveMenuAction",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x2f8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.Tooltip.LocateOnMap",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x300) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.ListNavDown",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x308) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.ListNavUp",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x310) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.SwitchRegion",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x318) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.Drag",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 800) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.DragMove",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x328) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.LayerSelect.Show",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x330) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.LayerSelect",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x338) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.LayerSelect.Up",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x340) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.LayerSelect.Down",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x348) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.ViewKairos",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x350) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.BigMap.ToggleProgress",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x358) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.NewCharacter.Special",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x360) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.NewCharacter.CancelSelect",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x368) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Standin.Rotate",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x370) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Standin.ResetView",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x378) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Standin.Zoom",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x380) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Standin.Pan",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x388) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.HideUI",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x390) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Customization.Apply",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x398) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.Customization.RenameCharacter",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3a0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.EchoUpgrade.Upgrade",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3a8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Mission.ShowOnMap",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3b0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Mission.Track",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3b8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Mission.Abandon",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3c0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.LAN.Refresh",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3c8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.LAN.Sort",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3d0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Inspect.Customize",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3d8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.Inspect.Rotate",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3e0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.DemoModeEntryCode",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 1000) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.VaultCards.Activate",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3f0) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.VaultCards.Purchase",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x3f8) = local_28;
  FUN_1446f470e(&local_40,L"Input.Action.UI.VaultCards.Toggle",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x400) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.On Foot",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x408) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.On Foot Possessed",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x410) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.Vehicle",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x418) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.Primary Use",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x420) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.Secondary Use",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x428) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.Carrying",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x430) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.Cinematic",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x438) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.FFYL",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x440) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.CancelTravelCountdown",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x448) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.DemoModeEntryCode",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x450) = local_28;
  FUN_1446f470e(&local_40,L"Input.Context.TakeAsJunk",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x458) = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14411daf0 FUN_14411daf0 body=1348 status=ok
// SIG undefined FUN_14411daf0(void)

void FUN_14411daf0(longlong param_1,uint *param_2,undefined1 param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar4 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar4 = *(longlong *)(param_1 + 200);
    }
    iVar9 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & *param_2) * 4);
    if (iVar9 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x88);
      do {
        if (*(uint *)(lVar4 + (longlong)iVar9 * 0x38) == *param_2) {
          FUN_148d24f7a((longlong *)(param_1 + 0x88),param_2);
          bVar3 = true;
          goto LAB_14411db7c;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x38 + lVar4 + 0x30);
      } while (iVar9 != -1);
    }
  }
  bVar3 = false;
LAB_14411db7c:
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar4 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x68);
    }
    iVar9 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & *param_2) * 4);
    if (iVar9 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x28) + (longlong)iVar9 * 0x78;
        if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar9 * 0x78) == *param_2) {
          if (lVar4 != 0) {
            lVar11 = *(longlong *)(lVar4 + 0x28);
            if (lVar11 != 0) {
              if (*(int *)(param_1 + 0x1c) == 0) {
LAB_14411df9c:
                lVar8 = 0;
              }
              else {
                uVar2 = *(uint *)(param_1 + 0x18);
                lVar8 = 0;
                if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                  plVar10 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                  if ((plVar10 == (longlong *)0x0) ||
                     (((int)plVar10[2] != *(int *)(param_1 + 0x1c) ||
                      ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_14411df9c;
                  lVar8 = *plVar10;
                }
              }
              *(undefined1 *)(lVar4 + 0x68) = param_3;
              if (*(longlong *)(lVar11 + 0x18) != 0) {
                plVar10 = (longlong *)FUN_1412ba9fc(lVar11 + 0x18);
                (**(code **)(*plVar10 + 0x20))(plVar10,lVar8,lVar11,(longlong *)(lVar4 + 0x28));
              }
              if (((((*(int *)(param_1 + 0x1c) != 0) &&
                    (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2)) &&
                   ((int)uVar2 < DAT_14c9647dc)) &&
                  ((puVar7 = (undefined8 *)
                             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                   puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x1c))
                   ))) && ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
                if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
                  uVar5 = *puVar7;
                }
                else {
                  uVar5 = 0;
                }
                lVar4 = FUN_1447210f0(uVar5);
                if (lVar4 != 0) {
                  uVar5 = FUN_1401cb356();
                  local_68 = (undefined8 *)0x0;
                  local_60 = 0;
                  FUN_1446efa72(&local_68,0,3,0x10);
                  puVar7 = local_68;
                  local_60 = 3;
                  *local_68 = &PTR_LAB_149e02020;
                  LOCK();
                  UNLOCK();
                  lVar6 = DAT_14c758608 + 1;
                  lVar11 = DAT_14c758608 + 1;
                  if (lVar6 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar6 = DAT_14c758608 + 2;
                    lVar11 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar11;
                  local_68[2] = lVar6;
                  *local_68 = &PTR_FUN_14b96c5d0;
                  local_68[3] = 0;
                  iVar9 = 0;
                  if (lVar8 != 0) {
                    uVar2 = *(uint *)(lVar8 + 0xc);
                    *(uint *)(local_68 + 3) = uVar2;
                    if ((int)uVar2 < DAT_14c9647dc) {
                      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                    }
                    else {
                      lVar11 = 0;
                    }
                    iVar9 = *(int *)(lVar11 + 0x10);
                    if (*(int *)(lVar11 + 0x10) == 0) {
                      LOCK();
                      iVar9 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar12 = DAT_14c964868 + 1;
                      bVar13 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar9;
                      if (bVar13) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar12);
                      }
                      LOCK();
                      iVar9 = *(int *)(lVar11 + 0x10);
                      bVar13 = iVar9 == 0;
                      if (bVar13) {
                        *(int *)(lVar11 + 0x10) = iVar12;
                        iVar9 = 0;
                      }
                      UNLOCK();
                      if (bVar13) {
                        iVar9 = iVar12;
                      }
                    }
                  }
                  *(int *)((longlong)puVar7 + 0x1c) = iVar9;
                  puVar7[4] = param_1;
                  local_88 = 0;
                  FUN_1405f67fc(uVar5,&local_58,&local_68,
                                L"FOakEntitlementManager.OnConsumeEntitlementComplete");
                  *(undefined8 *)(param_1 + 0x100) = local_58;
                  local_58 = 0;
                  plVar10 = *(longlong **)(param_1 + 0x108);
                  *(longlong **)(param_1 + 0x108) = local_50;
                  local_50 = (longlong *)0x0;
                  if (plVar10 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)plVar10 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar10 + 0x10))();
                    }
                    if (local_50 != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)((longlong)local_50 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_50 + 0x10))();
                      }
                    }
                  }
                  if (local_60 == 0) {
LAB_14411de63:
                    if (local_68 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (local_68 != (undefined8 *)0x0) {
                    (**(code **)*local_68)(local_68,0);
                    FUN_1446efa72(&local_68,0,0,0x10);
                    local_60 = 0;
                    goto LAB_14411de63;
                  }
                  if (((bVar3) && (lVar11 = FUN_1400f6f32(lVar4), lVar11 != 0)) &&
                     ((lVar11 = *(longlong *)(lVar11 + 0x30), lVar11 != 0 &&
                      ((lVar4 = FUN_1400f6f32(lVar4), lVar4 != 0 &&
                       (*(longlong *)(lVar4 + 0x68) != 0)))))) {
                    if (*(int *)(param_1 + 0x1c) == 0) {
LAB_14411dfa4:
                      uVar5 = 0;
                    }
                    else {
                      uVar2 = *(uint *)(param_1 + 0x18);
                      uVar5 = 0;
                      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                        puVar7 = (undefined8 *)
                                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                        if ((puVar7 == (undefined8 *)0x0) ||
                           ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x1c) ||
                            ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_14411dfa4;
                        uVar5 = *puVar7;
                      }
                    }
                    FUN_140d27df6(*(longlong *)(lVar4 + 0x68),&local_68,uVar5);
                    local_78 = (undefined8 *)0x0;
                    local_70 = 0;
                    FUN_1446efa72(&local_78,0,2,0x10);
                    local_70 = 2;
                    *local_78 = &PTR_LAB_14b96eac0;
                    LOCK();
                    UNLOCK();
                    lVar8 = DAT_14c758608 + 1;
                    lVar4 = DAT_14c758608 + 1;
                    if (lVar8 == 0) {
                      LOCK();
                      UNLOCK();
                      lVar8 = DAT_14c758608 + 2;
                      lVar4 = DAT_14c758608 + 2;
                    }
                    DAT_14c758608 = lVar4;
                    local_78[2] = lVar8;
                    *local_78 = &PTR_FUN_14b96c640;
                    FUN_140ceec8e(lVar11,&local_58,&local_68,&local_78);
                  }
                }
              }
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar4 + 0x70);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14411e068 FUN_14411e068 body=668 status=ok
// SIG undefined FUN_14411e068(void)

void FUN_14411e068(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_88 [39];
  undefined1 local_61;
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  lVar9 = *param_3;
  if (*param_3 == 0) {
    uVar2 = param_1[1];
    local_61 = (undefined1)param_1[2];
    if (uVar2 >> 0x20 == 0) {
LAB_14411e28e:
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      uVar11 = (uint)uVar2;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar2 >> 0xd) & 0x3fff8)));
        if ((plVar6 == (longlong *)0x0) ||
           (((int)plVar6[2] != (int)(uVar2 >> 0x20) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))
           ) goto LAB_14411e28e;
        lVar9 = *plVar6;
      }
    }
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar3 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b96b8b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b96b840;
    local_58[3] = 0;
    iVar8 = 0;
    if (lVar9 != 0) {
      uVar11 = *(uint *)(lVar9 + 0xc);
      *(uint *)(local_58 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar12 = iVar8 == 0;
        if (bVar12) {
          *(int *)(lVar9 + 0x10) = iVar10;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar8 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar3 + 0x1c) = iVar8;
    puVar3[4] = uVar2;
    *(undefined1 *)(puVar3 + 5) = local_61;
    FUN_145c9287e(param_2,&local_60,&local_58);
    if (local_50 == 0) {
LAB_14411e21a:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_14411e21a;
    }
    *param_3 = local_60;
    lVar9 = local_60;
    if (local_60 == 0) goto LAB_14411e266;
  }
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  piVar5 = (int *)FUN_145bcb1ac(lVar1 + 0xcc8,(int)((ulonglong)lVar9 >> 0x20) * 0x17 + (int)lVar9,
                                param_3);
  *piVar5 = *piVar5 + 1;
LAB_14411e266:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14411e306 FUN_14411e306 body=663 status=ok
// SIG undefined FUN_14411e306(void)

void FUN_14411e306(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_1;
  lVar4 = *param_3;
  if (*param_3 == 0) {
    uVar1 = param_1[1];
    lVar4 = param_1[2];
    if (uVar1 >> 0x20 == 0) {
LAB_14411e52a:
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      uVar11 = (uint)uVar1;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar1 >> 0xd) & 0x3fff8)));
        if ((plVar6 == (longlong *)0x0) ||
           (((int)plVar6[2] != (int)(uVar1 >> 0x20) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))
           ) goto LAB_14411e52a;
        lVar9 = *plVar6;
      }
    }
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar2 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b96bae0;
    local_58[3] = 0;
    iVar8 = 0;
    if (lVar9 != 0) {
      uVar11 = *(uint *)(lVar9 + 0xc);
      *(uint *)(local_58 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar12 = iVar8 == 0;
        if (bVar12) {
          *(int *)(lVar9 + 0x10) = iVar10;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar8 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar8;
    puVar2[4] = uVar1;
    *(char *)(puVar2 + 5) = (char)lVar4;
    FUN_1448b6402(param_2,&local_60,&local_58);
    if (local_50 == 0) {
LAB_14411e4b0:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_14411e4b0;
    }
    *param_3 = local_60;
    lVar4 = local_60;
    if (local_60 == 0) goto LAB_14411e4cb;
  }
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  piVar5 = (int *)FUN_145bcb1ac(local_68 + 0xcc8,(int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4
                                ,param_3);
  *piVar5 = *piVar5 + 1;
LAB_14411e4cb:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14411e59e FUN_14411e59e body=668 status=ok
// SIG undefined FUN_14411e59e(void)

void FUN_14411e59e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_88 [39];
  undefined1 local_61;
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  lVar9 = *param_3;
  if (*param_3 == 0) {
    uVar2 = param_1[1];
    local_61 = (undefined1)param_1[2];
    if (uVar2 >> 0x20 == 0) {
LAB_14411e7c4:
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      uVar11 = (uint)uVar2;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar2 >> 0xd) & 0x3fff8)));
        if ((plVar6 == (longlong *)0x0) ||
           (((int)plVar6[2] != (int)(uVar2 >> 0x20) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))
           ) goto LAB_14411e7c4;
        lVar9 = *plVar6;
      }
    }
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar3 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b96bbc0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b96bb50;
    local_58[3] = 0;
    iVar8 = 0;
    if (lVar9 != 0) {
      uVar11 = *(uint *)(lVar9 + 0xc);
      *(uint *)(local_58 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar12 = iVar8 == 0;
        if (bVar12) {
          *(int *)(lVar9 + 0x10) = iVar10;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar8 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar3 + 0x1c) = iVar8;
    puVar3[4] = uVar2;
    *(undefined1 *)(puVar3 + 5) = local_61;
    FUN_145dfcecc(param_2,&local_60,&local_58);
    if (local_50 == 0) {
LAB_14411e750:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_14411e750;
    }
    *param_3 = local_60;
    lVar9 = local_60;
    if (local_60 == 0) goto LAB_14411e79c;
  }
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  piVar5 = (int *)FUN_145bcb1ac(lVar1 + 0xcc8,(int)((ulonglong)lVar9 >> 0x20) * 0x17 + (int)lVar9,
                                param_3);
  *piVar5 = *piVar5 + 1;
LAB_14411e79c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14411e83c FUN_14411e83c body=591 status=ok
// SIG undefined FUN_14411e83c(void)

void FUN_14411e83c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(int *)(param_1 + 0xc1c) == 0) || (uVar1 = *(uint *)(param_1 + 0xc18), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_14411e8a2;
  plVar6 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != *(int *)(param_1 + 0xc1c))) ||
     ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_14411e8a2;
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar6;
  }
  else {
    lVar7 = 0;
  }
  plVar6 = *(longlong **)(&DAT_00006850 + lVar7);
  if (plVar6 == (longlong *)0x0) goto LAB_14411e8a2;
  plVar2 = *(longlong **)(lVar7 + 0x11e8);
  plVar5 = plVar6;
  if (plVar2 == (longlong *)0x0) {
LAB_14411e911:
    cVar3 = FUN_1407e8822(plVar5);
    if (cVar3 != '\0') {
LAB_14411e91a:
      *(byte *)(param_2 + 0x238) = *(byte *)(param_2 + 0x238) | 1;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0xeb8))(plVar2);
    if (cVar3 != '\0') goto LAB_14411e91a;
    plVar5 = *(longlong **)(&DAT_00006850 + lVar7);
    if (plVar5 != (longlong *)0x0) goto LAB_14411e911;
  }
  plVar2 = plVar6 + 0x2f;
  cVar3 = (**(code **)(plVar6[0x2f] + 0xd8))(plVar2);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*plVar2 + 0xf0))(plVar2);
    if (cVar3 != '\0') goto LAB_14411e94c;
  }
  else {
LAB_14411e94c:
    *(byte *)(param_2 + 0x238) = *(byte *)(param_2 + 0x238) | 2;
  }
  if (*(char *)(lVar7 + 0x73eb) != '\0') {
    *(byte *)(param_2 + 0x238) = *(byte *)(param_2 + 0x238) | 4;
  }
  if (lVar7 != 0) {
    if (DAT_14cb6fd70 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_1487a9cc9;
      local_60 = FUN_1465433f8;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
    }
    plVar5 = (longlong *)FUN_144718840(lVar7,DAT_14cb6fd70);
    if (plVar5 != (longlong *)0x0) {
      bVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
      *(byte *)(param_2 + 0x238) = *(byte *)(param_2 + 0x238) | (bVar4 ^ 1) * '\b' + 8;
    }
  }
  cVar3 = (**(code **)(*plVar2 + 0xd0))(plVar2);
  if (cVar3 != '\0') {
    *(byte *)(param_2 + 0x238) = *(byte *)(param_2 + 0x238) | 0x20;
  }
  cVar3 = (**(code **)(*plVar6 + 0xf38))(plVar6);
  if ((cVar3 != '\0') || ((char)plVar6[0x883] == '\x01')) {
    *(byte *)(param_2 + 0x238) = *(byte *)(param_2 + 0x238) | 0x40;
  }
  if ((char)plVar6[0x220] == '\r') {
    *(byte *)(param_2 + 0x238) = *(byte *)(param_2 + 0x238) | 0x80;
  }
LAB_14411e8a2:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14411ea8c FUN_14411ea8c body=159 status=ok
// SIG undefined FUN_14411ea8c(void)

void FUN_14411ea8c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xc18) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xc18) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0xc1c) = iVar2;
  return;
}



// FUNCTION 14411eb2b FUN_14411eb2b body=49 status=ok
// SIG undefined FUN_14411eb2b(void)

void FUN_14411eb2b(void)

{
  FUN_144760e21(DAT_14cbc9990,DAT_14cbc9998);
  if (DAT_14cbc9990 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14411eb95 FUN_14411eb95 body=41 status=ok
// SIG undefined FUN_14411eb95(void)

void FUN_14411eb95(void)

{
  DAT_14cbc9540 = 0;
  if (DAT_14cbc9538 != 0) {
    FUN_1400020a8();
  }
  FUN_145d692f0();
  return;
}



// FUNCTION 14411ebc4 FUN_14411ebc4 body=738 status=ok
// SIG undefined FUN_14411ebc4(void)

void FUN_14411ebc4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  wint_t _C;
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  uint local_78;
  undefined4 uStack_74;
  int local_70;
  undefined1 local_68 [8];
  longlong local_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1 = (undefined8 *)*param_1;
  local_88 = DAT_14cbc95e8;
  local_90 = DAT_14cbc95e0;
  FUN_1448075d0(&local_78);
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar3 = &DAT_14c9a1288;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
      plVar5 = plVar3 + 8;
      if ((longlong *)plVar3[9] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[9];
      }
      iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & local_78) * 4);
      if (iVar2 != -1) {
        do {
          lVar6 = *plVar3 + (longlong)iVar2 * 0x40;
          if (*(uint *)(*plVar3 + (longlong)iVar2 * 0x40) == local_78) {
            if ((((lVar6 != 0) && (plVar3 = (longlong *)(lVar6 + 0x28), plVar3 != (longlong *)0x0))
                && ((byte *)*plVar3 != (byte *)0x0)) && ((*(byte *)*plVar3 & 0x40) == 0))
            goto LAB_14411ec9d;
            break;
          }
          iVar2 = *(int *)(lVar6 + 0x38);
        } while (iVar2 != -1);
      }
    }
  }
  plVar3 = &DAT_14c9a1308;
LAB_14411ec9d:
  local_90 = (undefined2 *)0x0;
  if (*plVar3 == 0) {
    local_80 = 0;
  }
  else {
    FUN_1400bc2ec(*plVar3,&local_80,&local_90);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400021e4(&local_80,&local_78);
    if (local_70 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)CONCAT44(uStack_74,local_78);
    }
    FUN_140056680(&local_90,puVar4);
    if (CONCAT44(uStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
    if (local_88 - 2U < 0x7fffffff) {
      lVar6 = 0;
      do {
        _C = local_90[lVar6];
        iVar2 = iswalpha(_C);
        if (iVar2 == 0) {
          iVar2 = iswdigit(_C);
          if ((_C != 0x5f) && (lVar6 == 0 || iVar2 == 0)) {
            local_90[lVar6] = 0x5f;
          }
        }
        lVar6 = lVar6 + 1;
        iVar2 = local_88 + -1;
        if (local_88 == 0) {
          iVar2 = 0;
        }
      } while (lVar6 < iVar2);
    }
    puVar4 = &DAT_149dfb77a;
    if (local_88 != 0) {
      puVar4 = local_90;
    }
    FUN_140002266(&local_a0,L"Faction_%s_%s",puVar4,param_3);
    FUN_144928b90(&local_78,3);
    local_a8 = 0;
    puVar4 = &DAT_149dfb77a;
    if (local_98 != 0) {
      puVar4 = local_a0;
    }
    FUN_1405f0d29(local_ac,puVar4,0);
    FUN_144928d62(local_68,1,local_ac);
    FUN_140114204(&local_78);
    *param_2 = CONCAT44(uStack_74,local_78);
    *(int *)(param_2 + 1) = local_70;
    FUN_1447715ec(param_2 + 2,local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14411eea8 FUN_14411eea8 body=1303 status=ok
// SIG undefined FUN_14411eea8(void)

void FUN_14411eea8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_198 [32];
  longlong *local_178;
  int local_170;
  int local_16c;
  longlong *local_168;
  longlong *local_160;
  wchar_t *local_158;
  int local_150;
  wchar_t *local_148;
  undefined8 uStack_140;
  longlong local_130 [24];
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1461de164(*(undefined8 *)(param_1 + 0xa8),param_1 + 0x180);
  local_178 = (longlong *)(param_1 + 400);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    local_70 = (longlong *)0x0;
    local_68 = 0x1800000000;
    FUN_141226200(*(longlong *)(param_1 + 0xa8),local_130,0);
    plVar7 = local_70;
    if (local_70 == (longlong *)0x0) {
      plVar7 = local_130;
    }
    if ((longlong)(int)local_68 != 0) {
      local_168 = plVar7 + (int)local_68;
      do {
        plVar1 = (longlong *)*plVar7;
        local_160 = plVar7;
        if ((plVar1 != (longlong *)0x0) &&
           (local_16c = (**(code **)(*plVar1 + 0x7b0))(plVar1), 0 < local_16c)) {
          iVar10 = 0;
          do {
            plVar7 = (longlong *)FUN_1448c9576(plVar1,iVar10);
            if (plVar7 == (longlong *)0x0) {
LAB_14411f0ba:
              lVar12 = (**(code **)(*plVar7 + 0x2b8))(plVar7);
              if (lVar12 != 0) {
                local_148 = (wchar_t *)0x0;
                uStack_140 = 0;
                local_158 = *(wchar_t **)(lVar12 + 0x18);
                FUN_1400348e2(&local_158,&local_148);
                FUN_140056680(&local_158,L"M_GIMesh_Emissive");
                pwVar5 = local_158;
                if ((int)uStack_140 == local_150) {
                  bVar13 = true;
                  if (1 < (int)uStack_140) {
                    iVar6 = wcscmp(local_148,local_158);
                    bVar13 = iVar6 == 0;
                  }
                }
                else {
                  bVar13 = local_150 + (int)uStack_140 == 1;
                }
                if (pwVar5 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar5);
                }
                bVar14 = false;
                if (bVar13) {
                  iVar6 = *(int *)(param_1 + 0x198);
                  lVar12 = (longlong)iVar6;
                  *(uint *)(param_1 + 0x198) = iVar6 + 1U;
                  if (*(uint *)(param_1 + 0x19c) < iVar6 + 1U) {
                    FUN_14163bfaa(local_178,iVar6);
                  }
                  lVar2 = *local_178;
                  *(undefined8 *)(lVar2 + lVar12 * 8) = 0;
                  uVar8 = *(uint *)((longlong)plVar1 + 0xc);
                  *(uint *)(lVar2 + lVar12 * 8) = uVar8;
                  if ((int)uVar8 < DAT_14c9647dc) {
                    lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                  }
                  else {
                    lVar9 = 0;
                  }
                  iVar6 = *(int *)(lVar9 + 0x10);
                  if (*(int *)(lVar9 + 0x10) == 0) {
                    LOCK();
                    iVar6 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar11 = DAT_14c964868 + 1;
                    bVar14 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar6;
                    if (bVar14) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar11);
                    }
                    LOCK();
                    iVar6 = *(int *)(lVar9 + 0x10);
                    bVar14 = iVar6 == 0;
                    if (bVar14) {
                      *(int *)(lVar9 + 0x10) = iVar11;
                      iVar6 = 0;
                    }
                    UNLOCK();
                    if (bVar14) {
                      iVar6 = iVar11;
                    }
                  }
                  *(int *)(lVar2 + 4 + lVar12 * 8) = iVar6;
                  bVar14 = true;
                }
                if (local_148 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                if (bVar13) goto LAB_14411f1d8;
              }
            }
            else {
              local_148 = (wchar_t *)0x0;
              uStack_140 = 0;
              local_158 = (wchar_t *)plVar7[3];
              FUN_1400348e2(&local_158,&local_148);
              FUN_140056680(&local_158,L"M_GIMesh_Emissive");
              pwVar5 = local_158;
              if ((int)uStack_140 == local_150) {
                bVar13 = true;
                if (1 < (int)uStack_140) {
                  iVar6 = wcscmp(local_148,local_158);
                  bVar13 = iVar6 == 0;
                }
              }
              else {
                bVar13 = local_150 + (int)uStack_140 == 1;
              }
              if (pwVar5 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar5);
              }
              bVar14 = false;
              if (bVar13) {
                iVar6 = *(int *)(param_1 + 0x198);
                lVar12 = (longlong)iVar6;
                *(uint *)(param_1 + 0x198) = iVar6 + 1U;
                if (*(uint *)(param_1 + 0x19c) < iVar6 + 1U) {
                  FUN_14163bfaa(local_178,iVar6);
                }
                lVar2 = *local_178;
                *(undefined8 *)(lVar2 + lVar12 * 8) = 0;
                uVar8 = *(uint *)((longlong)plVar1 + 0xc);
                *(uint *)(lVar2 + lVar12 * 8) = uVar8;
                if ((int)uVar8 < DAT_14c9647dc) {
                  lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                }
                else {
                  lVar9 = 0;
                }
                iVar6 = *(int *)(lVar9 + 0x10);
                if (*(int *)(lVar9 + 0x10) == 0) {
                  LOCK();
                  iVar6 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar11 = DAT_14c964868 + 1;
                  bVar14 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar6;
                  if (bVar14) {
                    local_170 = iVar11;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar11);
                    iVar11 = local_170;
                  }
                  LOCK();
                  iVar6 = *(int *)(lVar9 + 0x10);
                  bVar14 = iVar6 == 0;
                  if (bVar14) {
                    *(int *)(lVar9 + 0x10) = iVar11;
                    iVar6 = 0;
                  }
                  UNLOCK();
                  if (bVar14) {
                    iVar6 = iVar11;
                  }
                }
                *(int *)(lVar2 + 4 + lVar12 * 8) = iVar6;
                bVar14 = true;
              }
              if (local_148 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              if (!bVar13) goto LAB_14411f0ba;
LAB_14411f1d8:
              if (bVar14) break;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < local_16c);
        }
        plVar7 = local_160 + 1;
      } while (plVar7 != local_168);
    }
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    uVar3 = *(ulonglong *)*local_178;
    uVar15 = DAT_14c75905c;
    uVar16 = DAT_14c75905c;
    uVar17 = DAT_14c75905c;
    if ((((uVar3 >> 0x20 != 0) && (uVar8 = (uint)uVar3, -1 < (int)uVar8)) &&
        ((int)uVar8 < DAT_14c9647dc)) &&
       (((plVar7 = (longlong *)
                   ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0xd & 0x3fff8))),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == (int)(uVar3 >> 0x20))) &&
        ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
        lVar12 = *plVar7;
      }
      else {
        lVar12 = 0;
      }
      if (*(int *)(lVar12 + 0x358) != 0) {
        puVar4 = *(undefined4 **)(lVar12 + 0x350);
        uVar15 = *puVar4;
        uVar16 = puVar4[2];
        uVar17 = puVar4[1];
      }
    }
    *(undefined4 *)(param_1 + 0x1a0) = uVar15;
    *(undefined4 *)(param_1 + 0x1a4) = uVar17;
    *(undefined4 *)(param_1 + 0x1a8) = uVar16;
    *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_143f7872c(param_1);
  return;
}



// FUNCTION 14411f3c6 FUN_14411f3c6 body=200 status=ok
// SIG undefined FUN_14411f3c6(void)

void FUN_14411f3c6(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) == '\x01') {
    if (*(char *)(param_1 + 0x160) != '\x01') {
      if (*param_2 != '\x01') {
        FUN_140321d1a(param_2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    FUN_1403a0728(param_2,&local_20);
    if ((longlong)*(int *)(param_1 + 0x170) == 0) {
      bVar3 = false;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x168);
      lVar2 = (longlong)*(int *)(param_1 + 0x170) << 3;
      do {
        if ((*plVar1 != 0) && (*plVar1 == local_20)) goto LAB_14411f480;
        plVar1 = plVar1 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
      plVar1 = (longlong *)0x0;
LAB_14411f480:
      bVar3 = plVar1 != (longlong *)0x0;
    }
    FUN_145d80258(param_1,bVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14411f4a0 FUN_14411f4a0 body=3197 status=ok
// SIG undefined FUN_14411f4a0(void)

void FUN_14411f4a0(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  undefined1 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  byte bVar22;
  int iVar23;
  ulonglong uVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  code *local_198;
  code *local_190;
  uint *local_180;
  longlong *local_178;
  longlong local_170;
  longlong *local_168;
  longlong local_160;
  wchar_t *local_158;
  int local_150;
  code *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)(param_1 + 0xa8);
  local_170 = param_1;
  if (lVar15 == 0) {
    local_180 = (uint *)(param_1 + 0x1a0);
  }
  else {
    local_138 = (undefined1 *)0x0;
    uStack_130 = (undefined1 *)0x0;
    lVar8 = FUN_140d28d40();
    if ((lVar8 == 0) || (DAT_14c950c29 == 0)) {
      if (lVar8 != 0) goto LAB_14411f526;
      bVar25 = true;
      if (DAT_14cad00c8 == 0) goto LAB_14411f9c7;
      lVar18 = 0;
      bVar25 = true;
LAB_14411f558:
      bVar26 = bVar25;
      local_178 = (longlong *)CONCAT71(local_178._1_7_,lVar8 != 0);
      if (lVar18 != DAT_14cad00c8) goto LAB_14411f569;
      if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar8);
      }
      FUN_148d252b8(lVar15,&local_138);
    }
    else {
      FUN_1456cec3c(lVar8);
LAB_14411f526:
      if (DAT_14cad00c8 == 0) {
        local_1a0 = &local_148;
        local_148 = FUN_144a7958c;
        local_190 = FUN_14081d0ea;
        local_198 = FUN_14081d0ea;
        local_1a8 = &LAB_1479b7a0c;
        local_1b0 = &LAB_1463b464e;
        local_1b8 = L"Engine";
        local_1c0 = 0;
        local_1c8 = 0x10000005;
        local_1d0 = 8;
        local_1d8 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        if (DAT_14cad00c8 == 0) {
          bVar25 = false;
LAB_14411f9c7:
          local_1a0 = &local_148;
          local_148 = FUN_144a7958c;
          local_190 = FUN_14081d0ea;
          local_198 = FUN_14081d0ea;
          local_1a8 = &LAB_1479b7a0c;
          local_1b0 = &LAB_1463b464e;
          local_1b8 = L"Engine";
          local_1c0 = 0;
          local_1c8 = 0x10000005;
          local_1d0 = 8;
          local_1d8 = 0x110;
          FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
          lVar18 = 0;
          goto LAB_14411f558;
        }
      }
      local_178 = (longlong *)CONCAT71(local_178._1_7_,1);
      if (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) {
        bVar26 = false;
      }
      else {
        bVar26 = false;
        lVar18 = lVar8;
        bVar25 = false;
        if (*(longlong *)
             (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
            DAT_14cad00c8 + 0x30) goto LAB_14411f558;
      }
LAB_14411f569:
      bVar22 = (byte)local_178;
      if (((byte)local_178 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar8);
      }
      puVar19 = (uint *)(lVar15 + 0x250);
      uVar7 = *(uint *)(lVar15 + 0x268);
      if (uVar7 == 0) {
        uVar16 = 1;
        uVar24 = 0;
        uVar6 = 0;
        iVar14 = 0;
      }
      else {
        puVar9 = *(uint **)(lVar15 + 0x260);
        if (*(uint **)(lVar15 + 0x260) == (uint *)0x0) {
          puVar9 = puVar19;
        }
        uVar6 = *puVar9;
        if (uVar6 == 0) {
          iVar14 = uVar7 + 0x1e;
          if (-1 < (int)(uVar7 - 1)) {
            iVar14 = uVar7 - 1;
          }
          uVar24 = 0;
          uVar16 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar16 = uVar24;
          }
          iVar14 = 0;
          do {
            if (uVar16 == uVar24) goto LAB_14411fa92;
            iVar14 = iVar14 + 0x20;
            uVar6 = puVar9[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar24 = 0;
          iVar14 = 0;
        }
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar16 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar6 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar7 <= (int)uVar6) {
          uVar6 = uVar7;
        }
      }
      if (uVar6 != uVar7) {
        uVar20 = 0xffffffff;
        local_180 = puVar19;
        local_168 = (longlong *)(ulonglong)uVar7;
        local_160 = lVar8;
        do {
          lVar18 = *(longlong *)(*(longlong *)(lVar15 + 0x240) + (longlong)(int)uVar6 * 0x10);
          if (lVar18 != 0) {
            if ((DAT_14c950c29 & bVar22) == 1) {
              FUN_1456cec3c(lVar8);
              puVar19 = local_180;
              bVar22 = (byte)local_178;
LAB_14411f660:
              if (DAT_14cad00c8 == 0) {
                local_148 = FUN_144a7958c;
                local_190 = FUN_14081d0ea;
                local_198 = FUN_14081d0ea;
                local_1a0 = &local_148;
                local_1a8 = &LAB_1479b7a0c;
                local_1b0 = &LAB_1463b464e;
                local_1b8 = L"Engine";
                local_1c0 = 0;
                local_1c8 = 0x10000005;
                local_1d0 = 8;
                local_1d8 = 0x110;
                FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
                puVar19 = local_180;
                bVar22 = (byte)local_178;
                if (DAT_14cad00c8 == 0) goto LAB_14411f898;
              }
              if (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14411f898;
              lVar17 = 0;
              if (*(longlong *)
                   (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                  DAT_14cad00c8 + 0x30) {
                lVar17 = lVar8;
              }
            }
            else {
              if (!bVar26) goto LAB_14411f660;
LAB_14411f898:
              lVar17 = 0;
            }
            puVar4 = uStack_130;
            if ((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) {
              lVar8 = (longlong)(int)uStack_130;
              uVar7 = (int)uStack_130 + 1;
              uStack_130 = (undefined1 *)CONCAT44(uStack_130._4_4_,uVar7);
              if (uStack_130._4_4_ < uVar7) {
                FUN_1418e5db8(&local_138,(ulonglong)puVar4 & 0xffffffff);
              }
              *(longlong *)(local_138 + lVar8 * 8) = lVar18;
              lVar8 = local_160;
              puVar19 = local_180;
              bVar22 = (byte)local_178;
            }
          }
          uVar20 = uVar20 & ~(uint)uVar16;
          puVar9 = *(uint **)(lVar15 + 0x260);
          if (*(uint **)(lVar15 + 0x260) == (uint *)0x0) {
            puVar9 = puVar19;
          }
          uVar7 = *(uint *)(lVar15 + 0x268);
          iVar21 = (int)uVar24;
          lVar18 = (longlong)iVar21;
          uVar6 = puVar9[lVar18] & uVar20;
          if (uVar6 == 0) {
            iVar11 = uVar7 + 0x1e;
            if (-1 < (int)(uVar7 - 1)) {
              iVar11 = uVar7 - 1;
            }
            iVar11 = iVar11 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar23 = iVar11;
            if (iVar11 < iVar21) {
              iVar23 = iVar21;
            }
            puVar19 = local_180;
            if (iVar21 < iVar11) {
              lVar17 = 0;
              do {
                uVar6 = puVar9[lVar18 + lVar17 + 1];
                if (uVar6 != 0) {
                  uVar24 = (ulonglong)(iVar21 + (int)lVar17 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_14411f79b;
                }
                iVar14 = iVar14 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar23 - lVar18 != lVar17);
              uVar20 = 0xffffffff;
              iVar21 = iVar23;
            }
            uVar24 = (ulonglong)(iVar21 + 1);
            bVar22 = (byte)local_178;
            uVar6 = uVar7;
          }
          else {
LAB_14411f79b:
            uVar16 = (ulonglong)(-uVar6 & uVar6);
            uVar1 = uVar16 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            uVar6 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if ((int)uVar7 <= (int)uVar6) {
              uVar6 = uVar7;
            }
          }
        } while (uVar6 != (uint)local_168);
      }
    }
LAB_14411fa92:
    puVar4 = local_138;
    lVar15 = (longlong)(int)uStack_130;
    if (lVar15 != 0) {
      plVar10 = (longlong *)(local_170 + 400);
      lVar8 = 0;
      do {
        if (*(longlong *)(puVar4 + lVar8) != 0) {
          uVar7 = *(uint *)(*(longlong *)(puVar4 + lVar8) + 0xc);
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar18 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar18 = 0;
          }
          iVar14 = *(int *)(lVar18 + 0x10);
          if (*(int *)(lVar18 + 0x10) == 0) {
            LOCK();
            iVar21 = DAT_14c964868 + 1;
            UNLOCK();
            iVar14 = DAT_14c964868 + 1;
            bVar25 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar21;
            if (bVar25) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar14);
            }
            LOCK();
            iVar21 = *(int *)(lVar18 + 0x10);
            bVar25 = iVar21 == 0;
            if (bVar25) {
              *(int *)(lVar18 + 0x10) = iVar14;
              iVar21 = 0;
            }
            UNLOCK();
            if (!bVar25) {
              iVar14 = iVar21;
            }
          }
          iVar21 = *(int *)(local_170 + 0x198);
          *(uint *)(local_170 + 0x198) = iVar21 + 1U;
          if (*(uint *)(local_170 + 0x19c) < iVar21 + 1U) {
            FUN_1418e5f1a(plVar10,iVar21);
          }
          *(ulonglong *)(*plVar10 + (longlong)iVar21 * 8) = CONCAT44(iVar14,uVar7);
        }
        lVar8 = lVar8 + 8;
      } while (lVar15 * 8 != lVar8);
    }
    if (local_138 != (undefined1 *)0x0) {
      FUN_1400020a8(local_138);
    }
    param_1 = local_170;
    local_180 = (uint *)(local_170 + 0x1a0);
    if (*(longlong *)(local_170 + 0xa8) != 0) {
      local_78 = (longlong *)0x0;
      local_70 = 0x1800000000;
      FUN_141226200(*(longlong *)(local_170 + 0xa8),&local_138,0);
      plVar10 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar10 = &local_138;
      }
      if ((longlong)(int)local_70 != 0) {
        local_178 = plVar10 + (int)local_70;
        do {
          plVar2 = (longlong *)*plVar10;
          local_168 = plVar10;
          if ((plVar2 != (longlong *)0x0) &&
             (iVar14 = (**(code **)(*plVar2 + 0x7b0))(plVar2), 0 < iVar14)) {
            iVar21 = 0;
            do {
              plVar10 = (longlong *)FUN_1448c9576(plVar2,iVar21);
              if (plVar10 == (longlong *)0x0) {
LAB_14411fdb2:
                lVar15 = (**(code **)(*plVar10 + 0x2b8))(plVar10);
                if (lVar15 != 0) {
                  local_148 = (code *)0x0;
                  uStack_140 = 0;
                  local_158 = *(wchar_t **)(lVar15 + 0x18);
                  FUN_1400348e2(&local_158,&local_148);
                  FUN_140056680(&local_158,L"M_FixtureBulb_00");
                  pwVar3 = local_158;
                  if ((int)uStack_140 == local_150) {
                    bVar25 = true;
                    if (1 < (int)uStack_140) {
                      iVar11 = wcscmp((wchar_t *)local_148,local_158);
                      bVar25 = iVar11 == 0;
                    }
                  }
                  else {
                    bVar25 = local_150 + (int)uStack_140 == 1;
                  }
                  if (pwVar3 != (wchar_t *)0x0) {
                    FUN_1400020a8(pwVar3);
                  }
                  bVar26 = false;
                  if (bVar25) {
                    iVar11 = *(int *)(local_170 + 0x1a8);
                    lVar15 = (longlong)iVar11;
                    *(uint *)(local_170 + 0x1a8) = iVar11 + 1U;
                    if (*(uint *)(local_170 + 0x1ac) < iVar11 + 1U) {
                      FUN_14163bfaa(local_180,iVar11);
                    }
                    lVar8 = *(longlong *)local_180;
                    *(undefined8 *)(lVar8 + lVar15 * 8) = 0;
                    uVar7 = *(uint *)((longlong)plVar2 + 0xc);
                    *(uint *)(lVar8 + lVar15 * 8) = uVar7;
                    if ((int)uVar7 < DAT_14c9647dc) {
                      lVar18 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                    }
                    else {
                      lVar18 = 0;
                    }
                    iVar11 = *(int *)(lVar18 + 0x10);
                    if (*(int *)(lVar18 + 0x10) == 0) {
                      LOCK();
                      iVar11 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar23 = DAT_14c964868 + 1;
                      bVar26 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar11;
                      if (bVar26) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar23);
                      }
                      LOCK();
                      iVar11 = *(int *)(lVar18 + 0x10);
                      bVar26 = iVar11 == 0;
                      if (bVar26) {
                        *(int *)(lVar18 + 0x10) = iVar23;
                        iVar11 = 0;
                      }
                      UNLOCK();
                      if (bVar26) {
                        iVar11 = iVar23;
                      }
                    }
                    *(int *)(lVar8 + 4 + lVar15 * 8) = iVar11;
                    bVar26 = true;
                  }
                  if (local_148 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  if (bVar25) goto LAB_14411fef7;
                }
              }
              else {
                local_148 = (code *)0x0;
                uStack_140 = 0;
                local_158 = (wchar_t *)plVar10[3];
                FUN_1400348e2(&local_158,&local_148);
                FUN_140056680(&local_158,L"M_FixtureBulb_00");
                pwVar3 = local_158;
                if ((int)uStack_140 == local_150) {
                  bVar25 = true;
                  if (1 < (int)uStack_140) {
                    iVar11 = wcscmp((wchar_t *)local_148,local_158);
                    bVar25 = iVar11 == 0;
                  }
                }
                else {
                  bVar25 = local_150 + (int)uStack_140 == 1;
                }
                if (pwVar3 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar3);
                }
                bVar26 = false;
                if (bVar25) {
                  iVar11 = *(int *)(local_170 + 0x1a8);
                  lVar15 = (longlong)iVar11;
                  *(uint *)(local_170 + 0x1a8) = iVar11 + 1U;
                  if (*(uint *)(local_170 + 0x1ac) < iVar11 + 1U) {
                    FUN_14163bfaa(local_180,iVar11);
                  }
                  lVar8 = *(longlong *)local_180;
                  *(undefined8 *)(lVar8 + lVar15 * 8) = 0;
                  uVar7 = *(uint *)((longlong)plVar2 + 0xc);
                  *(uint *)(lVar8 + lVar15 * 8) = uVar7;
                  if ((int)uVar7 < DAT_14c9647dc) {
                    lVar18 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                  }
                  else {
                    lVar18 = 0;
                  }
                  iVar11 = *(int *)(lVar18 + 0x10);
                  if (*(int *)(lVar18 + 0x10) == 0) {
                    LOCK();
                    iVar11 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar23 = DAT_14c964868 + 1;
                    bVar26 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar11;
                    if (bVar26) {
                      local_160 = CONCAT44(local_160._4_4_,iVar23);
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar23);
                      iVar23 = (int)local_160;
                    }
                    LOCK();
                    iVar11 = *(int *)(lVar18 + 0x10);
                    bVar26 = iVar11 == 0;
                    if (bVar26) {
                      *(int *)(lVar18 + 0x10) = iVar23;
                      iVar11 = 0;
                    }
                    UNLOCK();
                    if (bVar26) {
                      iVar11 = iVar23;
                    }
                  }
                  *(int *)(lVar8 + 4 + lVar15 * 8) = iVar11;
                  bVar26 = true;
                }
                if (local_148 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (!bVar25) goto LAB_14411fdb2;
LAB_14411fef7:
                if (bVar26) break;
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar14);
          }
          plVar10 = local_168 + 1;
          param_1 = local_170;
        } while (plVar10 != local_178);
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (*(int *)(param_1 + 0x1a8) == 0) goto LAB_144120092;
  uVar16 = **(ulonglong **)local_180;
  if ((((uVar16 >> 0x20 == 0) || (uVar7 = (uint)uVar16, (int)uVar7 < 0)) ||
      (DAT_14c9647dc <= (int)uVar7)) ||
     (((puVar13 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8))),
       puVar13 == (undefined8 *)0x0 || (*(int *)(puVar13 + 2) != (int)(uVar16 >> 0x20))) ||
      ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) {
LAB_144120074:
    local_138 = &DAT_3f8000003f800000;
    uStack_130 = &DAT_3f8000003f800000;
  }
  else {
    if ((*(uint *)(puVar13 + 1) & 0x10200000) == 0) {
      uVar12 = *puVar13;
    }
    else {
      uVar12 = 0;
    }
    cVar5 = FUN_1417bdf78(uVar12,DAT_14cbc95f8,&local_138);
    if (cVar5 == '\0') goto LAB_144120074;
  }
  *(undefined4 *)(param_1 + 0x1b0) = (undefined4)local_138;
  *(undefined4 *)(param_1 + 0x1b4) = local_138._4_4_;
  *(int *)(param_1 + 0x1b8) = (int)uStack_130;
  *(uint *)(param_1 + 0x1bc) = uStack_130._4_4_;
LAB_144120092:
  FUN_143f7872c(param_1);
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144120124 FUN_144120124 body=680 status=ok
// SIG undefined FUN_144120124(void)

void FUN_144120124(longlong param_1,char *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x178) == '\x02') {
    FUN_1403a0728(param_2,&local_70);
    if ((longlong)*(int *)(param_1 + 0x188) != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x180) + lVar5) == local_70) {
          iVar7 = (int)(lVar5 >> 3) * -0x55555555;
          if (iVar7 != -1) {
            puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar7 * 0x18 + 8);
            goto LAB_14412024e;
          }
          break;
        }
        lVar5 = lVar5 + 0x18;
      } while ((longlong)*(int *)(param_1 + 0x188) * 0x18 != lVar5);
    }
    puVar3 = (undefined4 *)(param_1 + 0x1b0);
LAB_14412024e:
    local_48 = *puVar3;
    uStack_44 = puVar3[1];
    uStack_40 = puVar3[2];
    uStack_3c = puVar3[3];
    iVar7 = *(int *)(param_1 + 0x198);
    if ((longlong)iVar7 != 0) {
      lVar5 = *(longlong *)(param_1 + 400);
      lVar9 = 0;
      do {
        uVar1 = *(ulonglong *)(lVar5 + lVar9);
        if ((((uVar1 >> 0x20 != 0) && (uVar4 = (uint)uVar1, -1 < (int)uVar4)) &&
            ((int)uVar4 < DAT_14c9647dc)) &&
           (((puVar8 = (undefined8 *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
             puVar8 != (undefined8 *)0x0 && (*(int *)(puVar8 + 2) == (int)(uVar1 >> 0x20))) &&
            ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
            uVar6 = *puVar8;
          }
          else {
            uVar6 = 0;
          }
          local_58 = local_48;
          uStack_54 = uStack_44;
          uStack_50 = uStack_40;
          uStack_4c = uStack_3c;
          FUN_140802a50(uVar6,&local_58,1);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar7 * 8 != lVar9);
    }
    iVar7 = *(int *)(param_1 + 0x1a8);
    if ((longlong)iVar7 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1a0);
      lVar9 = 0;
      do {
        uVar1 = *(ulonglong *)(lVar5 + lVar9);
        if (((uVar1 >> 0x20 != 0) && (uVar4 = (uint)uVar1, -1 < (int)uVar4)) &&
           (((int)uVar4 < DAT_14c9647dc &&
            (((puVar8 = (undefined8 *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
              puVar8 != (undefined8 *)0x0 && (*(int *)(puVar8 + 2) == (int)(uVar1 >> 0x20))) &&
             ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
            uVar6 = *puVar8;
          }
          else {
            uVar6 = 0;
          }
          local_68 = local_48;
          uStack_64 = uStack_44;
          uStack_60 = uStack_40;
          uStack_5c = uStack_3c;
          FUN_140654ea0(uVar6,DAT_14cbc95f8,&local_68);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar7 * 8 != lVar9);
    }
  }
  else if (*(char *)(param_1 + 0x178) == '\x01') {
    if (*(char *)(param_1 + 0x160) != '\x01') {
      if (*param_2 != '\x01') {
        FUN_140321d1a(param_2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
    }
    FUN_1403a0728(param_2,&local_48);
    if ((longlong)*(int *)(param_1 + 0x170) == 0) {
      uVar6 = 0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x168);
      lVar5 = (longlong)*(int *)(param_1 + 0x170) << 3;
      do {
        if ((*plVar2 != 0) && (*plVar2 == CONCAT44(uStack_44,local_48))) goto LAB_1441201ac;
        plVar2 = plVar2 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
      plVar2 = (longlong *)0x0;
LAB_1441201ac:
      uVar6 = CONCAT71((int7)((ulonglong)CONCAT44(uStack_44,local_48) >> 8),
                       plVar2 != (longlong *)0x0);
    }
    FUN_1418e474e(param_1,uVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441203e2 FUN_1441203e2 body=202 status=ok
// SIG undefined FUN_1441203e2(void)

void FUN_1441203e2(byte param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 1;
  local_5c = (uint)param_1;
  puVar2 = &DAT_14cb7c580;
  if (param_1 != 0) {
    puVar2 = &DAT_14cb7c588;
  }
  local_64 = *puVar2;
  FUN_144928b90(local_48,CONCAT71((int7)((ulonglong)puVar2 >> 8),2));
  local_58 = DAT_14cbca698;
  local_50 = DAT_14cbca6a0;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_2,0);
  if (lVar1 != 0) {
    FUN_140bc53f1(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441204ad FUN_1441204ad body=202 status=ok
// SIG undefined FUN_1441204ad(void)

void FUN_1441204ad(byte param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 1;
  local_5c = (uint)param_1;
  puVar2 = &DAT_14cb7c580;
  if (param_1 != 0) {
    puVar2 = &DAT_14cb7c588;
  }
  local_64 = *puVar2;
  FUN_144928b90(local_48,CONCAT71((int7)((ulonglong)puVar2 >> 8),3));
  local_58 = DAT_14cbca6b0;
  local_50 = DAT_14cbca6b8;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_2,0);
  if (lVar1 != 0) {
    FUN_140bc53f1(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144120578 FUN_144120578 body=202 status=ok
// SIG undefined FUN_144120578(void)

void FUN_144120578(byte param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 1;
  local_5c = (uint)param_1;
  puVar2 = &DAT_14cb7c580;
  if (param_1 != 0) {
    puVar2 = &DAT_14cb7c588;
  }
  local_64 = *puVar2;
  FUN_144928b90(local_48,CONCAT71((int7)((ulonglong)puVar2 >> 8),3));
  local_58 = DAT_14cbca6c8;
  local_50 = DAT_14cbca6d0;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_2,0);
  if (lVar1 != 0) {
    FUN_140bc53f1(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144120643 FUN_144120643 body=180 status=ok
// SIG undefined FUN_144120643(void)

void FUN_144120643(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 2;
  local_64 = 0;
  local_5c = param_1;
  FUN_144928b90(local_48,2);
  local_58 = DAT_14cbca6e0;
  local_50 = DAT_14cbca6e8;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_2,0);
  if (lVar1 != 0) {
    FUN_140bc53f1(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441206f8 FUN_1441206f8 body=180 status=ok
// SIG undefined FUN_1441206f8(void)

void FUN_1441206f8(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 2;
  local_64 = 0;
  local_5c = param_1;
  FUN_144928b90(local_48,2);
  local_58 = DAT_14cbca6f8;
  local_50 = DAT_14cbca700;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_2,0);
  if (lVar1 != 0) {
    FUN_140bc53f1(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441207ad FUN_1441207ad body=211 status=ok
// SIG undefined FUN_1441207ad(void)

undefined1 FUN_1441207ad(undefined8 param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_88 [32];
  char local_68 [4];
  undefined8 local_64;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = '\0';
  local_64 = 0;
  local_5c = 0;
  FUN_144928b90(local_48,2);
  local_58 = DAT_14cbca698;
  local_50 = DAT_14cbca6a0;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_1,0);
  if (lVar1 != 0) {
    FUN_14039fc7b(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] == '\x01') {
    uVar2 = local_5c != 0;
  }
  else {
    uVar2 = FUN_140321d1a(local_68);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144120881 FUN_144120881 body=211 status=ok
// SIG undefined FUN_144120881(void)

undefined1 FUN_144120881(undefined8 param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_88 [32];
  char local_68 [4];
  undefined8 local_64;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = '\0';
  local_64 = 0;
  local_5c = 0;
  FUN_144928b90(local_48,3);
  local_58 = DAT_14cbca6b0;
  local_50 = DAT_14cbca6b8;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_1,0);
  if (lVar1 != 0) {
    FUN_14039fc7b(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] == '\x01') {
    uVar2 = local_5c != 0;
  }
  else {
    uVar2 = FUN_140321d1a(local_68);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144120955 FUN_144120955 body=234 status=ok
// SIG undefined FUN_144120955(void)

uint FUN_144120955(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  char local_68 [4];
  longlong local_64;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = '\0';
  local_64 = 0;
  local_5c = 0;
  FUN_144928b90(local_48,2);
  local_58 = DAT_14cbca6e0;
  local_50 = DAT_14cbca6e8;
  FUN_144928d62(local_38,1);
  lVar2 = FUN_140149a73(param_1,0);
  if (lVar2 != 0) {
    FUN_14039fc7b(local_48,local_68,lVar2,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] == '\x03') {
    bVar3 = local_64 == 0;
  }
  else {
    uVar1 = local_5c;
    if (local_68[0] == '\x02') goto LAB_144120a19;
    if (local_68[0] != '\x01') {
      uVar1 = 0;
      goto LAB_144120a19;
    }
    bVar3 = local_5c == 0;
  }
  uVar1 = (uint)!bVar3;
LAB_144120a19:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 144120a40 FUN_144120a40 body=234 status=ok
// SIG undefined FUN_144120a40(void)

uint FUN_144120a40(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  char local_68 [4];
  longlong local_64;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = '\0';
  local_64 = 0;
  local_5c = 0;
  FUN_144928b90(local_48,2);
  local_58 = DAT_14cbca6f8;
  local_50 = DAT_14cbca700;
  FUN_144928d62(local_38,1);
  lVar2 = FUN_140149a73(param_1,0);
  if (lVar2 != 0) {
    FUN_14039fc7b(local_48,local_68,lVar2,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] == '\x03') {
    bVar3 = local_64 == 0;
  }
  else {
    uVar1 = local_5c;
    if (local_68[0] == '\x02') goto LAB_144120b04;
    if (local_68[0] != '\x01') {
      uVar1 = 0;
      goto LAB_144120b04;
    }
    bVar3 = local_5c == 0;
  }
  uVar1 = (uint)!bVar3;
LAB_144120b04:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 144120b2c FUN_144120b2c body=618 status=ok
// SIG undefined FUN_144120b2c(void)

void FUN_144120b2c(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar8 = (undefined8 *)*param_2;
    lVar9 = (longlong)*(int *)(param_2 + 1) * 0xc;
    do {
      lVar3 = FUN_140bc5192(param_1,puVar8);
      if ((lVar3 != 0) && (lVar5 = *(longlong *)(lVar3 + 0x20), lVar5 != 0)) {
        local_58 = local_58 & 0xffffff00;
        uStack_54 = 0;
        uStack_50 = 0;
        local_4c = 0;
        FUN_144976b9c(&local_58,DAT_14cb88928);
        cVar1 = FUN_1403218c0(lVar5 + 0x38,&local_58);
        if (cVar1 == '\0') {
          lVar5 = *(longlong *)(lVar3 + 0x20);
          local_58 = local_58 & 0xffffff00;
          uStack_54 = 0;
          uStack_50 = 0;
          local_4c = 0;
          FUN_144976b9c(&local_58,DAT_14cb888c8);
          cVar1 = FUN_1403218c0(lVar5 + 0x38,&local_58);
          if (cVar1 == '\0') goto LAB_144120c04;
        }
        plVar4 = (longlong *)FUN_1488430da(lVar3);
        if (plVar4 != (longlong *)0x0) {
          lVar3 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar5 = FUN_140fa5e64();
          if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
               lVar5 + 0x30)) &&
             (uVar2 = (**(code **)(*plVar4 + 0x80))(plVar4), uVar2 != 0xffffffff)) {
            uVar7 = (ulonglong)uVar2;
            if (((int)uVar2 < 0) || (*(int *)(param_1 + 0x168) <= (int)uVar2)) {
              uStack_50 = DAT_14c948620;
              uVar6 = DAT_14c948618;
            }
            else {
              uStack_50 = *(undefined4 *)(*(longlong *)(param_1 + 0x160) + 8 + uVar7 * 0xc);
              uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x160) + uVar7 * 0xc);
            }
            local_58 = (uint)uVar6;
            uStack_54 = (undefined4)((ulonglong)uVar6 >> 0x20);
            lVar3 = FUN_140bc5192(param_1,&local_58);
            if ((lVar3 == 0) || (lVar5 = *(longlong *)(lVar3 + 0x20), lVar5 == 0)) {
LAB_144120d24:
              local_60 = *(undefined4 *)(puVar8 + 1);
              local_68 = *puVar8;
              FUN_14169f05e(param_1,uVar7,&local_68);
            }
            else {
              local_58 = local_58 & 0xffffff00;
              uStack_54 = 0;
              uStack_50 = 0;
              local_4c = 0;
              FUN_144976b9c(&local_58,DAT_14cb88928);
              cVar1 = FUN_1403218c0(lVar5 + 0x38,&local_58);
              if (cVar1 == '\0') {
                lVar3 = *(longlong *)(lVar3 + 0x20);
                local_58 = local_58 & 0xffffff00;
                uStack_54 = 0;
                uStack_50 = 0;
                local_4c = 0;
                FUN_144976b9c(&local_58,DAT_14cb888c8);
                cVar1 = FUN_1403218c0(lVar3 + 0x38,&local_58);
                if (cVar1 == '\0') goto LAB_144120d24;
              }
            }
          }
        }
      }
LAB_144120c04:
      puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
      lVar9 = lVar9 + -0xc;
    } while (lVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144120d98 FUN_144120d98 body=309 status=ok
// SIG undefined FUN_144120d98(void)

ulonglong FUN_144120d98(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x144) != 0) {
    uVar1 = *(uint *)(param_1 + 0x140);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144120e24;
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) &&
        ((((int)plVar5[2] == *(int *)(param_1 + 0x144) &&
          ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (*plVar5 != 0)))) &&
       (lVar2 = *(longlong *)(*plVar5 + 0x30), lVar2 != 0)) {
      uVar4 = *(undefined8 *)(lVar2 + 0x360);
      goto LAB_144120e24;
    }
  }
  uVar4 = 0;
LAB_144120e24:
  lVar2 = FUN_14133cf3b(uVar4);
  if (lVar2 == 0) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    lVar3 = FUN_14133cf88(lVar2);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(lVar2 + 200);
      if (lVar3 == 0) {
        local_48 = DAT_14c948620;
        local_50 = DAT_14c948618;
      }
      else {
        local_48 = *(undefined4 *)(lVar3 + 0x10);
        local_50 = *(undefined8 *)(lVar3 + 8);
      }
      FUN_1448075d0(local_40,&local_50);
      lVar3 = FUN_1441a615e(local_40);
      uVar6 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar3 == 0);
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar6 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144120ece FUN_144120ece body=199 status=ok
// SIG undefined FUN_144120ece(void)

void FUN_144120ece(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) == '\x01') {
    if (*(char *)(param_1 + 0x160) != '\x01') {
      if (*param_2 != '\x01') {
        FUN_140321d1a(param_2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    FUN_1403a0728(param_2,&local_20);
    if ((longlong)*(int *)(param_1 + 0x170) == 0) {
      bVar3 = false;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x168);
      lVar2 = (longlong)*(int *)(param_1 + 0x170) << 3;
      do {
        if ((*plVar1 != 0) && (*plVar1 == local_20)) goto LAB_144120f41;
        plVar1 = plVar1 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
      plVar1 = (longlong *)0x0;
LAB_144120f41:
      bVar3 = plVar1 != (longlong *)0x0;
    }
    FUN_144120fa6(param_1,bVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144120fa6 FUN_144120fa6 body=309 status=ok
// SIG undefined FUN_144120fa6(void)

void FUN_144120fa6(longlong param_1,byte param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_138 [32];
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(int *)(param_1 + 0x188) != 0)) {
    bVar2 = *(byte *)(param_1 + 0x1a0);
    local_58 = (longlong *)0x0;
    local_50 = 0x1800000000;
    FUN_141226200(*(longlong *)(param_1 + 0xa8),local_118,0);
    plVar7 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar7 = local_118;
    }
    if ((longlong)(int)local_50 != 0) {
      plVar1 = plVar7 + (int)local_50;
      do {
        plVar4 = (longlong *)*plVar7;
        if ((plVar4 != (longlong *)0x0) && (iVar3 = *(int *)(param_1 + 0x188), (longlong)iVar3 != 0)
           ) {
          lVar5 = *(longlong *)(param_1 + 0x180);
          lVar6 = 0;
          do {
            (**(code **)(*plVar4 + 0x640))
                      (plVar4,*(undefined8 *)(lVar5 + lVar6),
                       *(undefined8 *)(param_1 + ((ulonglong)(bVar2 ^ param_2) ^ 1) * 8 + 400));
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar3 * 8 != lVar6);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441210dc FUN_1441210dc body=614 status=ok
// SIG undefined FUN_1441210dc(void)

void FUN_1441210dc(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  longlong *local_48;
  wchar_t *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14101dc7e(param_1,0);
  local_40 = L"DisabledOption";
  local_38._0_4_ = 0xe;
  FUN_1446e940c(local_54,&local_40);
  local_40 = L"OakCrossSave";
  local_38._0_4_ = 0xc;
  FUN_1446e940c(local_58,&local_40);
  local_40 = L"Off";
  local_38 = (longlong *)CONCAT44(local_38._4_4_,3);
  FUN_140208c1e(&local_50,local_58,local_54,&local_40);
  FUN_14101dbe4(param_1,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  local_40 = L"EnabledOption";
  local_38._0_4_ = 0xd;
  FUN_1446e940c(local_54,&local_40);
  local_40 = L"OakCrossSave";
  local_38._0_4_ = 0xc;
  FUN_1446e940c(local_58,&local_40);
  local_40 = L"On";
  local_38 = (longlong *)CONCAT44(local_38._4_4_,2);
  FUN_140208c1e(&local_50,local_58,local_54,&local_40);
  FUN_14101d98e(param_1,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  local_48 = (longlong *)FUN_14001cc68(0x80,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14b5414b0;
  local_50 = (wchar_t *)(local_48 + 2);
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 2;
  local_48[2] = (longlong)&PTR_FUN_14b5414d0;
  local_48[8] = (longlong)&LAB_143fa6636;
  local_48[10] = 0;
  local_48[0xc] = (longlong)&PTR_LAB_14b54a520;
  local_48[0xd] = (longlong)FUN_144139a68;
  FUN_1410e573a(&local_50);
  plVar3 = local_48;
  local_40 = local_50;
  local_38 = local_48;
  if (local_48 == (longlong *)0x0) {
    FUN_1410e57dc(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    FUN_1410e57dc(param_1);
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
  }
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144121344 FUN_144121344 body=1939 status=ok
// SIG undefined FUN_144121344(void)

void FUN_144121344(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined8 **local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined1 local_7c [4];
  longlong *local_78 [2];
  longlong *local_68 [2];
  wchar_t *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 == (longlong *)0x0) goto LAB_144121395;
  lVar6 = FUN_14030d4a0();
  if (((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
      (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
       lVar6 + 0x30)) || (plVar7 = (longlong *)FUN_140773fe2(), plVar7 == (longlong *)0x0))
  goto LAB_144121395;
  uVar8 = (**(code **)(*plVar2 + 0x180))(plVar2);
  lVar6 = (**(code **)(*plVar7 + 0x2d0))(plVar7,(int)plVar2[0x1c],uVar8);
  if (((lVar6 == 0) || (lVar9 = (**(code **)(*param_1 + 0x180))(param_1), lVar9 == 0)) ||
     ((*(longlong *)(lVar9 + 0x1f0) == 0 || (lVar9 = FUN_145c548d8(), lVar9 == 0))))
  goto LAB_144121395;
  cVar3 = FUN_145d1188e(plVar2);
  cVar4 = FUN_148a6a1fe(lVar9,lVar6);
  if (cVar3 == cVar4) goto LAB_144121395;
  cVar3 = FUN_145d1188e(plVar2);
  lVar10 = FUN_145da44aa(plVar2);
  if (cVar3 == '\0') {
    uVar5 = 0xffffffff;
    if (lVar10 != 0) {
      local_58 = L"DisableDialogHeader";
      uStack_50._0_4_ = 0x13;
      FUN_1446e940c(local_78,&local_58);
      local_58 = L"OakCrossSave";
      uStack_50._0_4_ = 0xc;
      FUN_1446e940c(&local_98,&local_58);
      local_58 = L"Disabling Cross-Platform Saves";
      uStack_50._0_4_ = 0x1e;
      FUN_140208c1e(local_68,&local_98,local_78,&local_58);
      local_58 = L"DisableDialogBody";
      uStack_50._0_4_ = 0x11;
      FUN_1446e940c(&local_98,&local_58);
      local_58 = L"OakCrossSave";
      uStack_50._0_4_ = 0xc;
      FUN_1446e940c(local_7c,&local_58);
      local_58 = L"Please wait while cross-platform saves are disabled.";
      uStack_50 = CONCAT44(uStack_50._4_4_,0x34);
      FUN_140208c1e(local_78,local_7c,&local_98,&local_58);
      local_58 = (wchar_t *)0x0;
      uStack_50 = 0;
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      local_c0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = &local_98;
      uVar5 = FUN_1459dd948(lVar10,local_68,local_78,&local_58);
      if ((int)uStack_90 == 0) {
LAB_144121989:
        if (local_98 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_98 != (undefined8 *)0x0) {
        (**(code **)*local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        uStack_90 = uStack_90 & 0xffffffff00000000;
        goto LAB_144121989;
      }
      FUN_140e0067b(local_58,uStack_50 & 0xffffffff);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      if (local_68[0] != (longlong *)0x0) {
        (**(code **)(*local_68[0] + 0x10))();
      }
    }
    uVar1 = *(uint *)((longlong)plVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar12 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar12 = *(int *)(lVar10 + 0x10);
      bVar14 = iVar12 == 0;
      if (bVar14) {
        *(int *)(lVar10 + 0x10) = iVar13;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar12 = iVar13;
      }
    }
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    local_b0 = 3;
    *local_b8 = &PTR_LAB_14b4e3fb0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_b8[2] = lVar11;
    *local_b8 = &PTR_FUN_14b96e3c0;
    *(uint *)(local_b8 + 3) = uVar1;
    *(int *)((longlong)local_b8 + 0x1c) = iVar12;
    *(undefined4 *)(local_b8 + 4) = uVar5;
    FUN_143f04c94(lVar9,lVar6,&local_b8);
    goto LAB_144121395;
  }
  uVar5 = 0xffffffff;
  if (lVar10 != 0) {
    local_58 = L"InitializeDialogHeader";
    uStack_50._0_4_ = 0x16;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"OakCrossSave";
    uStack_50._0_4_ = 0xc;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Initializing Cross-Platform Saves";
    uStack_50._0_4_ = 0x21;
    FUN_140208c1e(local_68,&local_98,local_78,&local_58);
    local_58 = L"InitializeDialogBody";
    uStack_50._0_4_ = 0x14;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"OakCrossSave";
    uStack_50._0_4_ = 0xc;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"Please wait while cross-platform saves are initialized.";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x37);
    FUN_140208c1e(local_78,local_7c,&local_98,&local_58);
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = &local_98;
    uVar5 = FUN_1459dd948(lVar10,local_68,local_78,&local_58);
    if ((int)uStack_90 == 0) {
LAB_14412179b:
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_98 != (undefined8 *)0x0) {
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      uStack_90 = uStack_90 & 0xffffffff00000000;
      goto LAB_14412179b;
    }
    FUN_140e0067b(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
  }
  uVar1 = *(uint *)((longlong)plVar2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  iVar12 = *(int *)(lVar10 + 0x10);
  if (*(int *)(lVar10 + 0x10) == 0) {
    LOCK();
    iVar12 = DAT_14c964868 + 1;
    UNLOCK();
    iVar13 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar12;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar13);
    }
    LOCK();
    iVar12 = *(int *)(lVar10 + 0x10);
    bVar14 = iVar12 == 0;
    if (bVar14) {
      *(int *)(lVar10 + 0x10) = iVar13;
      iVar12 = 0;
    }
    UNLOCK();
    if (bVar14) {
      iVar12 = iVar13;
    }
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,3,0x10);
  local_a0 = 3;
  *local_a8 = &PTR_LAB_14b4e3fb0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_a8[2] = lVar11;
  *local_a8 = &PTR_FUN_14b96e350;
  *(uint *)(local_a8 + 3) = uVar1;
  *(int *)((longlong)local_a8 + 0x1c) = iVar12;
  *(undefined4 *)(local_a8 + 4) = uVar5;
  local_d8 = &local_a8;
  FUN_143f036f2(lVar9,lVar6,0,1);
LAB_144121395:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144121ae2 FUN_144121ae2 body=118 status=ok
// SIG undefined FUN_144121ae2(void)

undefined8 * FUN_144121ae2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"GetCrossSaveEnabled",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144121b5a FUN_144121b5a body=118 status=ok
// SIG undefined FUN_144121b5a(void)

undefined8 * FUN_144121b5a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"SetCrossSaveEnabled",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144121be8 FUN_144121be8 body=665 status=ok
// SIG undefined FUN_144121be8(void)

void FUN_144121be8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  DWORD DVar4;
  ushort uVar5;
  DWORD dwTlsIndex;
  DWORD DVar6;
  longlong lVar7;
  LPVOID lpTlsValue;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1[4] != 0) {
    FUN_14146e7de();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_118);
  }
  if (param_1[1] == 0) {
    lVar7 = FUN_148d2c1be(*(undefined2 *)(param_1 + 3));
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    param_1[1] = lVar7;
  }
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar8 = DAT_14c7585d0 != 0xffffffff;
    DVar4 = dwTlsIndex;
    if (bVar8) {
      DVar6 = DAT_14c7585d0;
      DVar4 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar4;
    UNLOCK();
    if (bVar8) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar6;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_c8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_f8 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_f0 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_e8 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_e0 = '\0';
  local_d8 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_f8;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  uStack_b8 = 0;
  uStack_b6 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  local_98 = 1;
  local_50 = 0;
  local_48 = 0x800000000;
  FUN_142b2fe18(&local_c8,param_1);
  uStack_b8 = 0;
  uStack_b6 = 0;
  uVar5 = *(ushort *)(param_1 + 3);
  if ((uVar5 & 0x40) == 0) {
    FUN_1402160b8(&local_d0);
    FUN_14587583c(&local_c8,&DAT_14a17510b,&local_d0);
    uVar5 = *(ushort *)(param_1 + 3);
  }
  if ((uVar5 & 0x20) == 0) {
    local_d0 = *param_1;
    FUN_142b301c0(&local_c8,&DAT_14a18341e);
  }
  FUN_148d2c4e4(&local_c8,param_2);
  local_d0 = *param_3;
  FUN_142b301c0(&local_c8,"bar_name");
  FUN_142b2ff26(&local_c8,"bar_value",(longlong)*param_4);
  FUN_142b2feea(&local_c8,param_1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_e0 == '\0') {
    local_e0 = '\x01';
    *(int *)(local_f8 + 4) = *(int *)(local_f8 + 4) + -1;
    if (local_e8 != local_f8[2]) {
      FUN_14004673c();
    }
    *local_f8 = local_f0;
    local_f8[3] = local_d8;
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144121e9e FUN_144121e9e body=59 status=ok
// SIG undefined FUN_144121e9e(void)

void FUN_144121e9e(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbc98e0;
  if (DAT_14cbc98e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbc98e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144121ece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144121eea FUN_144121eea body=292 status=ok
// SIG undefined FUN_144121eea(void)

void FUN_144121eea(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x7c8);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x7c0);
    lVar7 = 0;
    do {
      iVar2 = *(int *)(lVar4 + 4 + lVar7);
      if (((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + lVar7), -1 < (int)uVar3)) &&
         ((int)uVar3 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == iVar2)) &&
           (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0)))) {
          FUN_144124014(param_1,lVar5);
          if ((*(char *)(param_1 + 0x848) == '\x02') && (*(longlong *)(param_1 + 0x590) != 0)) {
            FUN_1411d3086(*(longlong *)(param_1 + 0x590),lVar5,0);
          }
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  if (*(longlong *)(param_1 + 0x598) != 0) {
    FUN_1441253bc(param_1,*(longlong *)(param_1 + 0x598),1);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x410);
    if (lVar4 != 0) {
      lVar7 = FUN_1407fc0e2();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        FUN_1400bc8c2(lVar4 + 0xce0,param_1 + 0x840);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14412200e FUN_14412200e body=2158 status=ok
// SIG undefined FUN_14412200e(void)

void FUN_14412200e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14078a36a(param_1 + 0x3b8,param_1 + 0x3a8);
  FUN_14078b280(param_1 + 0x5b0,param_1,param_1 + 0x5a0);
  FUN_1401b3e2a(param_1 + 0x5b0);
  iVar8 = *(int *)(param_1 + 0x560);
  if ((longlong)iVar8 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x558);
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar9 + lVar7);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
LAB_1441220a5:
        if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
          FUN_1418e50f8(&local_68);
          FUN_1418e4f72(lVar2 + 0x203,param_1,local_68);
          FUN_1418e5344(&local_70);
          FUN_1418e51be(lVar2 + 0x204,param_1,local_70);
        }
      }
      else if (lVar2 != 0) goto LAB_1441220a5;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar8 * 8 != lVar7);
  }
  iVar8 = *(int *)(param_1 + 0x570);
  if ((longlong)iVar8 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x568);
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar9 + lVar7);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
LAB_144122143:
        if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
          FUN_1418e5406(&local_78);
          FUN_1418e4f72(lVar2 + 0x203,param_1,local_78);
          FUN_1418e5344(&local_80);
          FUN_1418e51be(lVar2 + 0x204,param_1,local_80);
        }
      }
      else if (lVar2 != 0) goto LAB_144122143;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar8 * 8 != lVar7);
  }
  iVar8 = *(int *)(param_1 + 0x588);
  if ((longlong)iVar8 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x580);
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar9 + lVar7);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
LAB_1441221d8:
        if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
          FUN_14412287e(&local_88);
          FUN_1418e4f72(lVar2 + 0x203,param_1,local_88);
        }
      }
      else if (lVar2 != 0) goto LAB_1441221d8;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar8 * 8 != lVar7);
  }
  FUN_1407bebdc(param_1 + 0x480,param_1 + 0x398,param_1);
  plVar5 = *(longlong **)(param_1 + 0x840);
  if (((*(longlong **)(param_1 + 0x840) == (longlong *)0x0) &&
      (plVar3 = *(longlong **)(param_1 + 0x4a8), plVar5 = plVar3, plVar3 == DAT_14c948034)) &&
     (plVar5 = DAT_14c948034, *(int *)(param_1 + 0x4a4) != DAT_14c948030)) {
    FUN_14011791e(&local_60,*(int *)(param_1 + 0x4a4),(ulonglong)plVar3 >> 0x20);
    *(longlong **)(param_1 + 0x4a8) = local_60;
    plVar5 = local_60;
  }
  *(longlong **)(param_1 + 0x840) = plVar5;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar5 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14a8bcc20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b96e5d0;
  local_60[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar6;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar6;
      }
    }
  }
  *(int *)((longlong)plVar5 + 0x1c) = iVar8;
  plVar5[4] = (longlong)FUN_145dab4e6;
  *(undefined4 *)(plVar5 + 5) = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), uVar1 = DAT_14cadbeb8, cVar4 == '\0')) {
    if (local_58 == 0) goto LAB_14412245f;
    if (local_60 != (longlong *)0x0) {
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_144122452;
    }
  }
  else {
    if ((DAT_14cadbec4 < 1) &&
       (DAT_14cadbec0 = DAT_14cadbec0 + -1, DAT_14cadbec0 <= (int)DAT_14cadbeb8)) {
      if (0 < (int)DAT_14cadbeb8) {
        iVar8 = 0;
        do {
          if (((*(int *)(DAT_14cadbeb0 + 8 + (longlong)iVar8 * 0x10) == 0) ||
              (plVar5 = *(longlong **)(DAT_14cadbeb0 + (longlong)iVar8 * 0x10),
              plVar5 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar5 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14cadbeb0,iVar8);
            FUN_14005b248(&DAT_14cadbeb0);
          }
          else {
            iVar8 = iVar8 + 1;
          }
        } while (iVar8 < (int)DAT_14cadbeb8);
      }
      DAT_14cadbec0 = 2;
      if (2 < (int)(DAT_14cadbeb8 * 2)) {
        DAT_14cadbec0 = DAT_14cadbeb8 * 2;
      }
      if ((DAT_14cadbec0 < (int)uVar1) && (DAT_14cadbebc != DAT_14cadbeb8)) {
        FUN_14045812c();
      }
    }
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,local_50);
    }
    uVar1 = DAT_14cadbeb8;
    lVar9 = (longlong)(int)DAT_14cadbeb8;
    DAT_14cadbeb8 = DAT_14cadbeb8 + 1;
    if (DAT_14cadbebc < DAT_14cadbeb8) {
      FUN_1447a71f6(&DAT_14cadbeb0,uVar1);
    }
    lVar7 = DAT_14cadbeb0;
    lVar9 = lVar9 * 0x10;
    *(undefined8 *)(DAT_14cadbeb0 + lVar9) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
    *(longlong **)(lVar7 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar7 + 8 + lVar9) = local_58;
LAB_144122452:
    local_58 = 0;
LAB_14412245f:
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar5 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14a8bcd00;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b96e640;
  local_60[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar6;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar6;
      }
    }
  }
  *(int *)((longlong)plVar5 + 0x1c) = iVar8;
  plVar5[4] = (longlong)FUN_144122984;
  *(undefined4 *)(plVar5 + 5) = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), uVar1 = DAT_14cadbed0, cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_14412266a;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_144122654;
    }
  }
  else {
    if ((DAT_14cadbedc < 1) &&
       (DAT_14cadbed8 = DAT_14cadbed8 + -1, DAT_14cadbed8 <= (int)DAT_14cadbed0)) {
      if (0 < (int)DAT_14cadbed0) {
        iVar8 = 0;
        do {
          if (((*(int *)(DAT_14cadbec8 + 8 + (longlong)iVar8 * 0x10) == 0) ||
              (plVar5 = *(longlong **)(DAT_14cadbec8 + (longlong)iVar8 * 0x10),
              plVar5 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar5 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14cadbec8,iVar8);
            FUN_14005b248(&DAT_14cadbec8);
          }
          else {
            iVar8 = iVar8 + 1;
          }
        } while (iVar8 < (int)DAT_14cadbed0);
      }
      DAT_14cadbed8 = 2;
      if (2 < (int)(DAT_14cadbed0 * 2)) {
        DAT_14cadbed8 = DAT_14cadbed0 * 2;
      }
      if ((DAT_14cadbed8 < (int)uVar1) && (DAT_14cadbed4 != DAT_14cadbed0)) {
        FUN_14045812c();
      }
    }
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,local_50);
    }
    uVar1 = DAT_14cadbed0;
    lVar9 = (longlong)(int)DAT_14cadbed0;
    DAT_14cadbed0 = DAT_14cadbed0 + 1;
    if (DAT_14cadbed4 < DAT_14cadbed0) {
      FUN_1447a71f6(&DAT_14cadbec8,uVar1);
    }
    lVar7 = DAT_14cadbec8;
    lVar9 = lVar9 * 0x10;
    *(undefined8 *)(DAT_14cadbec8 + lVar9) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
    *(longlong **)(lVar7 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar7 + 8 + lVar9) = local_58;
LAB_144122654:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14412266a:
  FUN_141118b96(param_1);
  FUN_1405f1eac(param_1);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14412287e FUN_14412287e body=199 status=ok
// SIG undefined FUN_14412287e(void)

undefined8 * FUN_14412287e(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [9];
  undefined4 local_30;
  undefined2 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc9978) {
    FUN_144b3d300(&DAT_14cbc9978);
    if (DAT_14cbc9978 == -1) {
      pwVar2 = L"OnActorEnteredPlayerAbilityResetVolume";
      puVar3 = local_78;
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_2c = 0;
      local_30 = 0x65006d;
      FUN_1446f470e(&DAT_14cbc9970,local_78,1);
      _Init_thread_footer(&DAT_14cbc9978);
    }
  }
  *param_1 = DAT_14cbc9970;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144122946 FUN_144122946 body=61 status=ok
// SIG undefined FUN_144122946(void)

void FUN_144122946(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_14151233a(param_1,param_3);
  if (lVar2 != 0) {
    cVar1 = FUN_1449ce79a(lVar2);
    if (cVar1 != '\0') {
      FUN_148cd2adc(lVar2 + 0x6ed0,3);
      return;
    }
  }
  return;
}



// FUNCTION 144122984 FUN_144122984 body=286 status=ok
// SIG undefined FUN_144122984(void)

void FUN_144122984(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144122ab8 FUN_144122ab8 body=2509 status=ok
// SIG undefined FUN_144122ab8(void)

void FUN_144122ab8(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined4 local_84;
  uint *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_84 = param_2;
  FUN_144125248();
  iVar1 = *(int *)(param_1 + 0x7c8);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x7c0);
    lVar10 = 0;
    do {
      iVar11 = *(int *)(lVar4 + 4 + lVar10);
      if (((((iVar11 != 0) && (uVar8 = *(uint *)(lVar4 + lVar10), -1 < (int)uVar8)) &&
           ((int)uVar8 < DAT_14c9647dc)) &&
          ((plVar7 = (longlong *)
                     ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar11)))) &&
         (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))) {
        FUN_148d223b6(param_1,*(undefined8 *)(*plVar7 + 0xf48));
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  FUN_141512256(param_1 + 0x7c0);
  FUN_141512256(param_1 + 0x7b0);
  FUN_1412b8792(param_1);
  if (*(char *)(param_1 + 0x860) == '\x01') {
    FUN_14592bdb2(param_1,0);
    if (*(int *)(param_1 + 0x85c) < 0) {
      *(undefined4 *)(param_1 + 0x858) = 0;
      FUN_148d2f048(param_1 + 0x850);
    }
    else {
      *(undefined4 *)(param_1 + 0x858) = 0;
    }
    *(undefined1 *)(param_1 + 0x860) = 0;
  }
  FUN_141362b60(param_1,0);
  lVar4 = param_1 + 0x760;
  iVar1 = *(int *)(param_1 + 0x7a8);
  if (iVar1 < 2) {
    lVar10 = param_1 + 0x798;
    if (*(longlong *)(param_1 + 0x7a0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x7a0);
    }
    iVar11 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar11 = iVar1;
    }
    if (*(int *)(param_1 + 0x768) - *(int *)(param_1 + 0x794) < iVar11 >> 2) {
      iVar1 = *(int *)(param_1 + 0x788);
      if (iVar1 != 0) {
        local_80 = (uint *)(param_1 + 0x770);
        puVar14 = *(uint **)(param_1 + 0x780);
        if (*(uint **)(param_1 + 0x780) == (uint *)0x0) {
          puVar14 = local_80;
        }
        uVar8 = *puVar14;
        if (uVar8 == 0) {
          iVar11 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar11 = iVar1 + -1;
          }
          uVar12 = 0;
          uVar16 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar16 = uVar12;
          }
          iVar11 = 0;
          do {
            if (uVar16 == uVar12) goto LAB_144122b8d;
            iVar11 = iVar11 + 0x20;
            uVar8 = puVar14[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar8 == 0);
        }
        else {
          iVar11 = 0;
          uVar12 = 0;
        }
        uVar13 = (ulonglong)(-uVar8 & uVar8);
        uVar16 = uVar13 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar15 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar15 < iVar1) {
          uVar8 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar10 + (longlong)
                       *(int *)(*(longlong *)(param_1 + 0x760) + 0x44 + (longlong)iVar15 * 0x48) * 4
             ) = 0xffffffff;
            uVar8 = ~(uint)uVar13 & uVar8;
            puVar14 = *(uint **)(param_1 + 0x780);
            if (*(uint **)(param_1 + 0x780) == (uint *)0x0) {
              puVar14 = local_80;
            }
            iVar2 = *(int *)(param_1 + 0x788);
            iVar15 = (int)uVar12;
            lVar5 = (longlong)iVar15;
            uVar17 = puVar14[lVar5] & uVar8;
            if (uVar17 == 0) {
              iVar9 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar9 = iVar2 + -1;
              }
              iVar9 = iVar9 >> 5;
              iVar11 = iVar11 + 0x20;
              iVar6 = iVar9;
              if (iVar9 < iVar15) {
                iVar6 = iVar15;
              }
              if (iVar15 < iVar9) {
                lVar18 = 0;
                do {
                  uVar17 = puVar14[lVar5 + lVar18 + 1];
                  if (uVar17 != 0) {
                    uVar12 = (ulonglong)(iVar15 + (int)lVar18 + 1);
                    uVar8 = 0xffffffff;
                    goto LAB_144123231;
                  }
                  iVar11 = iVar11 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (iVar6 - lVar5 != lVar18);
                uVar8 = 0xffffffff;
                lVar5 = (longlong)iVar6;
              }
              uVar12 = lVar5 + 1U & 0xffffffff;
              iVar15 = iVar2;
            }
            else {
LAB_144123231:
              uVar13 = (ulonglong)(-uVar17 & uVar17);
              uVar16 = uVar13 * 2 + 1;
              lVar5 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              iVar15 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar15) {
                iVar15 = iVar2;
              }
            }
          } while (iVar15 != iVar1);
        }
      }
    }
    else if (iVar1 == 1) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar10 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x7a8));
    }
LAB_144122b8d:
    FUN_144036108(lVar4,0);
  }
  else {
    FUN_144036108(lVar4,0);
    *(undefined4 *)(param_1 + 0x7a8) = 1;
    FUN_148d2cb9a(lVar4);
  }
  *(undefined4 *)(param_1 + 0x7c8) = 0;
  if (*(int *)(param_1 + 0x7cc) != 0) {
    FUN_148d2cd50(param_1 + 0x7c0,0);
  }
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  if (*(int *)(param_1 + 0x7bc) != 0) {
    FUN_148d2cd50(param_1 + 0x7b0,0);
  }
  lVar4 = param_1 + 2000;
  iVar1 = *(int *)(param_1 + 0x818);
  if (iVar1 < 2) {
    lVar10 = param_1 + 0x808;
    if (*(longlong *)(param_1 + 0x810) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x810);
    }
    iVar11 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar11 = iVar1;
    }
    if (*(int *)(param_1 + 0x7d8) - *(int *)(param_1 + 0x804) < iVar11 >> 2) {
      iVar1 = *(int *)(param_1 + 0x7f8);
      if (iVar1 != 0) {
        puVar14 = *(uint **)(param_1 + 0x7f0);
        if (*(uint **)(param_1 + 0x7f0) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x7e0);
        }
        uVar8 = *puVar14;
        if (uVar8 == 0) {
          iVar11 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar11 = iVar1 + -1;
          }
          uVar12 = 0;
          uVar16 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar16 = uVar12;
          }
          iVar11 = 0;
          do {
            if (uVar16 == uVar12) goto LAB_144122c1c;
            iVar11 = iVar11 + 0x20;
            uVar8 = puVar14[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar12 = 0;
          iVar11 = 0;
        }
        uVar13 = (ulonglong)(-uVar8 & uVar8);
        uVar16 = uVar13 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar15 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar15 < iVar1) {
          uVar8 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar10 + (longlong)
                       *(int *)(*(longlong *)(param_1 + 2000) + 0x10 + (longlong)iVar15 * 0x14) * 4)
                 = 0xffffffff;
            uVar8 = ~(uint)uVar13 & uVar8;
            puVar14 = *(uint **)(param_1 + 0x7f0);
            if (*(uint **)(param_1 + 0x7f0) == (uint *)0x0) {
              puVar14 = (uint *)(param_1 + 0x7e0);
            }
            iVar2 = *(int *)(param_1 + 0x7f8);
            iVar15 = (int)uVar12;
            lVar5 = (longlong)iVar15;
            uVar17 = puVar14[lVar5] & uVar8;
            if (uVar17 == 0) {
              iVar9 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar9 = iVar2 + -1;
              }
              iVar9 = iVar9 >> 5;
              iVar11 = iVar11 + 0x20;
              iVar6 = iVar9;
              if (iVar9 < iVar15) {
                iVar6 = iVar15;
              }
              if (iVar15 < iVar9) {
                lVar18 = 0;
                do {
                  uVar17 = puVar14[lVar5 + lVar18 + 1];
                  if (uVar17 != 0) {
                    uVar12 = (ulonglong)(iVar15 + (int)lVar18 + 1);
                    uVar8 = 0xffffffff;
                    goto LAB_1441233ee;
                  }
                  iVar11 = iVar11 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (iVar6 - lVar5 != lVar18);
                uVar8 = 0xffffffff;
                iVar15 = iVar6;
              }
              uVar12 = (ulonglong)(iVar15 + 1);
              iVar15 = iVar2;
            }
            else {
LAB_1441233ee:
              uVar13 = (ulonglong)(-uVar17 & uVar17);
              uVar16 = uVar13 * 2 + 1;
              lVar5 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              iVar15 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar15) {
                iVar15 = iVar2;
              }
            }
          } while (iVar15 != iVar1);
        }
      }
    }
    else if (iVar1 == 1) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar10 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x818));
    }
LAB_144122c1c:
    FUN_14403608c(lVar4,0);
  }
  else {
    FUN_14403608c(lVar4,0);
    *(undefined4 *)(param_1 + 0x818) = 1;
    FUN_148d2cdb0(lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x560);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x558);
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar10);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
LAB_144122c6d:
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) {
          FUN_1418e50f8(&local_58);
          FUN_1418e609a(lVar5 + 0x203,param_1,local_58);
          FUN_1418e5344(&local_60);
          FUN_1418e6106(lVar5 + 0x204,param_1,local_60);
        }
      }
      else if (lVar5 != 0) goto LAB_144122c6d;
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  iVar1 = *(int *)(param_1 + 0x570);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x568);
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar10);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
LAB_144122d17:
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) {
          FUN_1418e5406(&local_68);
          FUN_1418e609a(lVar5 + 0x203,param_1,local_68);
          FUN_1418e5344(&local_70);
          FUN_1418e6106(lVar5 + 0x204,param_1,local_70);
        }
      }
      else if (lVar5 != 0) goto LAB_144122d17;
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  iVar1 = *(int *)(param_1 + 0x588);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x580);
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar10);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
LAB_144122db5:
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) {
          FUN_14412287e(&local_78);
          FUN_1418e609a(lVar5 + 0x203,param_1,local_78);
        }
      }
      else if (lVar5 != 0) goto LAB_144122db5;
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  FUN_140457ffc(&DAT_14cadbeb0,param_1);
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FUN_14480f766(&DAT_14cb7df68);
  }
  FUN_140457ffc(&DAT_14cadbec8,param_1);
  lVar4 = FUN_1447210f0(param_1);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x238))) {
    lVar10 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar10 * 8);
      if ((((iVar1 != 0) &&
           (uVar8 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar10 * 8), -1 < (int)uVar8)) &&
          ((int)uVar8 < DAT_14c9647dc)) &&
         (((plVar7 = (longlong *)
                     ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar1)) &&
          (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar5 = *plVar7, lVar5 != 0)))))) {
        if (DAT_14cb61cd0 == 0) {
          local_50 = FUN_141030f22;
          local_90 = FUN_14081d0ea;
          local_98 = &LAB_1463b31ae;
          local_a0 = &local_50;
          local_a8 = &LAB_1486dca4f;
          local_b0 = &LAB_1464f50a6;
          local_b8 = &DAT_149e063b2;
          local_c0 = 0;
          local_c8 = 0x10000004;
          local_d0 = 8;
          local_d8 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
          lVar18 = lVar5 + 0x9d8;
          if (*(char *)(lVar5 + 0x178) == '\x03') {
            lVar18 = lVar5 + 0x3f0;
          }
          FUN_140457ffc(lVar18,param_1);
        }
      }
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < *(int *)(lVar4 + 0x238));
  }
  uVar3 = local_84;
  FUN_1406335ea(param_1 + 0x5b0,local_84);
  FUN_140355e94(param_1 + 0x5b0);
  FUN_14078a7c0(param_1 + 0x3b8);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1403d8a98(param_1,uVar3);
  return;
}



// FUNCTION 144123486 FUN_144123486 body=293 status=ok
// SIG undefined FUN_144123486(void)

void FUN_144123486(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441235c0 FUN_1441235c0 body=48 status=ok
// SIG undefined FUN_1441235c0(void)

void FUN_1441235c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x638);
  if (0 < lVar2) {
    lVar1 = *(longlong *)(param_1 + 0x630);
    do {
      if (*(longlong *)(lVar1 + 0x270) == param_3) {
        FUN_144123486(param_1,param_2,lVar1);
        return;
      }
      lVar1 = lVar1 + 0x278;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1441235f0 FUN_1441235f0 body=2465 status=ok
// SIG undefined FUN_1441235f0(void)

void FUN_1441235f0(longlong param_1,code *param_2,char param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  char *pcVar13;
  bool bVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  int local_94;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  char local_73 [3];
  uint local_70;
  int local_6c;
  code *local_68;
  char *pcStack_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_14412361e;
  if (param_3 != '\0') {
    FUN_141118b96(param_1);
  }
  plVar5 = (longlong *)(param_1 + 2000);
  if (param_2 == (code *)0x0) {
    uVar12 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    uVar12 = (ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar4 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar8 + 0x10);
      bVar14 = uVar4 == 0;
      if (bVar14) {
        *(uint *)(lVar8 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar4 = uVar6;
      }
    }
  }
  local_68 = (code *)(uVar12 | (ulonglong)uVar4 << 0x20);
  iVar3 = FUN_148d2cf66(plVar5,uVar4 ^ (uint)uVar12);
  if ((iVar3 != -1) &&
     (lVar8 = *plVar5 + (longlong)iVar3 * 0x14, pcVar13 = (char *)(lVar8 + 8),
     pcVar13 != (char *)0x0 && lVar8 != 0)) {
    if (*pcVar13 != param_3) {
      if (param_3 == '\x01' && param_2 != (code *)0x0) {
        local_68 = param_2;
        FUN_1447cd2ec(param_1 + 0x730);
      }
      *pcVar13 = param_3;
      local_68 = (code *)0x0;
      pcStack_60 = (char *)0x0;
      if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      local_58 = param_1;
      if ((longlong)*(int *)(param_1 + 0x7c8) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x7c0);
        lVar9 = (longlong)*(int *)(param_1 + 0x7c8) << 3;
        lVar10 = 0;
        local_90 = lVar8;
        local_88 = lVar9;
        do {
          iVar3 = *(int *)(lVar8 + 4 + lVar10);
          if (((((iVar3 != 0) && (uVar4 = *(uint *)(lVar8 + lVar10), -1 < (int)uVar4)) &&
               ((int)uVar4 < DAT_14c9647dc)) &&
              ((plVar5 = (longlong *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar3)))) &&
             (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar1 = *plVar5, lVar1 != 0)))) {
            FUN_140bf093e(&local_68,lVar1 + 0x3d20);
            lVar8 = *(longlong *)(lVar1 + 0x3d30);
            if (DAT_14c950c29 == '\x01') {
              if (lVar8 == 0) {
                lVar8 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar8 = *(longlong *)(lVar1 + 0x3d30);
              }
            }
            local_58 = lVar8;
            if (param_3 == '\0') {
              local_6c = 0;
              if (param_2 == (code *)0x0) {
                local_70 = 0;
                iVar3 = 0;
              }
              else {
                local_70 = *(uint *)(param_2 + 0xc);
                if ((int)local_70 < DAT_14c9647dc) {
                  lVar8 = (ulonglong)((local_70 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_70 >> 0x10) * 8);
                }
                else {
                  lVar8 = 0;
                }
                iVar3 = *(int *)(lVar8 + 0x10);
                if (*(int *)(lVar8 + 0x10) == 0) {
                  LOCK();
                  iVar3 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar7 = DAT_14c964868 + 1;
                  bVar14 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar3;
                  if (bVar14) {
                    local_94 = iVar7;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar7);
                    iVar7 = local_94;
                  }
                  LOCK();
                  iVar3 = *(int *)(lVar8 + 0x10);
                  bVar14 = iVar3 == 0;
                  if (bVar14) {
                    *(int *)(lVar8 + 0x10) = iVar7;
                    iVar3 = 0;
                  }
                  UNLOCK();
                  if (bVar14) {
                    iVar3 = iVar7;
                  }
                }
              }
              local_50 = &local_70;
              local_6c = iVar3;
              FUN_140bf0ae6(&local_68,&local_50);
            }
            else {
              if (param_2 == (code *)0x0) {
                local_50._0_4_ = 0;
                iVar3 = 0;
                uVar4 = (uint)local_50;
              }
              else {
                uVar4 = *(uint *)(param_2 + 0xc);
                local_50 = (uint *)(ulonglong)uVar4;
                if ((int)uVar4 < DAT_14c9647dc) {
                  lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                }
                else {
                  lVar8 = 0;
                }
                iVar3 = *(int *)(lVar8 + 0x10);
                if (*(int *)(lVar8 + 0x10) == 0) {
                  LOCK();
                  iVar3 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar7 = DAT_14c964868 + 1;
                  bVar14 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar3;
                  if (bVar14) {
                    local_94 = iVar7;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar7);
                    iVar7 = local_94;
                  }
                  LOCK();
                  iVar3 = *(int *)(lVar8 + 0x10);
                  bVar14 = iVar3 == 0;
                  if (bVar14) {
                    *(int *)(lVar8 + 0x10) = iVar7;
                    iVar3 = 0;
                  }
                  UNLOCK();
                  uVar4 = (uint)local_50;
                  if (bVar14) {
                    iVar3 = iVar7;
                  }
                }
              }
              local_50._0_4_ = uVar4;
              local_50 = (uint *)CONCAT44(iVar3,(uint)local_50);
              FUN_1407a297a(&local_68,&local_50);
            }
            FUN_144123f92(param_1,lVar1,lVar1 + 0x3d20,&local_68);
            lVar9 = local_88;
            lVar8 = local_90;
          }
          lVar10 = lVar10 + 8;
        } while (lVar9 != lVar10);
        if (local_68 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    goto LAB_14412361e;
  }
  if ((param_2 == (code *)0x0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) goto LAB_14412361e;
  local_73[1] = '\0';
  local_73[2] = '\0';
  uVar4 = *(uint *)(param_2 + 0xc);
  local_50 = (uint *)(ulonglong)uVar4;
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar3 = *(int *)(lVar8 + 0x10);
  local_73[0] = param_3;
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar3 = *(int *)(lVar8 + 0x10);
    bVar14 = iVar3 == 0;
    if (bVar14) {
      *(int *)(lVar8 + 0x10) = iVar7;
      iVar3 = 0;
    }
    UNLOCK();
    uVar4 = (uint)local_50;
    if (bVar14) {
      iVar3 = iVar7;
    }
  }
  local_50._0_4_ = uVar4;
  local_68 = (code *)&local_50;
  local_50 = (uint *)CONCAT44(iVar3,(uint)local_50);
  pcStack_60 = local_73;
  FUN_148d2d020(plVar5,&local_70,&local_68);
  FUN_148d21a58(param_1);
  if (param_3 != '\0') {
    local_68 = param_2;
    FUN_1447cd2ec(param_1 + 0x730);
  }
  iVar3 = *(int *)(param_1 + 0x7c8);
  if ((longlong)iVar3 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x7c0);
    lVar9 = 0;
    do {
      iVar7 = *(int *)(lVar8 + 4 + lVar9);
      if ((((iVar7 != 0) && (uVar4 = *(uint *)(lVar8 + lVar9), -1 < (int)uVar4)) &&
          ((int)uVar4 < DAT_14c9647dc)) &&
         (((plVar5 = (longlong *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar7)) &&
          (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) {
        FUN_144124014(param_1);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  if (DAT_14cba8288 == 0) {
    local_68 = FUN_141864c34;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1464cee30;
    local_b8 = &LAB_148bfac22;
    local_c0 = &LAB_140f21842;
    local_c8 = &DAT_149e063b2;
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = 0x10;
    local_e8 = 0x9cd0;
    local_b0 = &local_68;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
    lVar8 = (**(code **)(*(longlong *)(param_2 + 0x10a0) + 0x20))(param_2 + 0x10a0);
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x7d) = *(byte *)(lVar8 + 0x7d) & 0xbf;
    }
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar3 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar8 + 0x10);
      bVar14 = iVar3 == 0;
      if (bVar14) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar3 = iVar7;
      }
    }
    local_68 = (code *)0x0;
    pcStack_60 = (char *)((ulonglong)pcStack_60 & 0xffffffff00000000);
    FUN_1446efa72(&local_68,0,3,0x10);
    pcVar2 = local_68;
    pcStack_60 = (char *)CONCAT44(pcStack_60._4_4_,3);
    *(undefined ***)local_68 = &PTR_LAB_149e020b0;
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
    *(longlong *)(local_68 + 0x10) = lVar9;
    *(undefined ***)local_68 = &PTR_FUN_14b96e720;
    *(undefined8 *)(local_68 + 0x18) = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar6 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_68 + 0x18) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar7 = *(int *)(lVar8 + 0x10);
        bVar14 = iVar7 == 0;
        if (bVar14) {
          *(int *)(lVar8 + 0x10) = iVar11;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar7 = iVar11;
        }
      }
    }
    *(int *)(pcVar2 + 0x1c) = iVar7;
    *(longlong *)(pcVar2 + 0x20) = param_1;
    *(ulonglong *)(pcVar2 + 0x28) = CONCAT44(iVar3,uVar4);
    FUN_1448b6402(param_2 + 0x4e80,&local_50,&local_68);
    if ((int)pcStack_60 == 0) {
LAB_144123d74:
      if (local_68 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_68 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      pcStack_60 = (char *)((ulonglong)pcStack_60 & 0xffffffff00000000);
      goto LAB_144123d74;
    }
    FUN_148d21c5c(&local_80);
    FUN_148d21bd2(param_2 + 0x20e,param_1,local_80);
  }
  FUN_1400da9ba(param_1 + 0x6d8,param_2);
LAB_14412361e:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144123f92 FUN_144123f92 body=129 status=ok
// SIG undefined FUN_144123f92(void)

void FUN_144123f92(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  if ((*(int *)(param_4 + 1) == *(int *)(param_3 + 1)) &&
     (cVar1 = FUN_14819d966(*param_4,*param_3), cVar1 != '\0')) {
    return;
  }
  FUN_140bf093e(param_2 + 0x3d20,param_4);
  lVar2 = param_4[2];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_4[2];
    }
  }
  *(longlong *)(param_2 + 0x3d30) = lVar2;
  FUN_1441f2c8c(param_2,param_3);
  return;
}



// FUNCTION 144124014 FUN_144124014 body=1425 status=ok
// SIG undefined FUN_144124014(void)

void FUN_144124014(longlong param_1,longlong param_2)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  uint *local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_68 = 0;
    uStack_60 = 0;
    if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(param_1);
    }
    local_80 = (void *)0x0;
    local_78 = *(int *)(param_2 + 0x3d28);
    lVar10 = (longlong)local_78;
    _Src = *(void **)(param_2 + 0x3d20);
    local_58 = param_1;
    if (lVar10 == 0) {
      local_74 = 0;
    }
    else {
      FUN_140bf0c0e(&local_80,local_78,0);
      memcpy(local_80,_Src,lVar10 << 3);
    }
    local_70 = *(longlong *)(param_2 + 0x3d30);
    if ((local_70 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar2 = *(uint *)(param_1 + 0x7f8);
    if (uVar2 == 0) {
      uVar12 = 1;
      uVar14 = 0;
      iVar9 = 0;
      uVar1 = 0;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x7f0);
      if (*(uint **)(param_1 + 0x7f0) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x7e0);
      }
      uVar1 = *puVar3;
      if (uVar1 == 0) {
        iVar9 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar9 = uVar2 - 1;
        }
        uVar14 = 0;
        uVar12 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar12 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar12 == uVar14) goto LAB_144124533;
          iVar9 = iVar9 + 0x20;
          uVar1 = puVar3[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar1 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar12 = (ulonglong)(-uVar1 & uVar1);
      uVar5 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar1 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar1) {
        uVar1 = uVar2;
      }
    }
    if (uVar1 != uVar2) {
      uVar15 = 0xffffffff;
      local_a8 = 0;
      local_90 = (ulonglong)uVar2;
      local_88 = (uint *)(param_1 + 0x7e0);
      do {
        puVar3 = (uint *)(*(longlong *)(param_1 + 2000) + (longlong)(int)uVar1 * 0x14);
        if (((((puVar3[1] == 0) || (uVar2 = *puVar3, (int)uVar2 < 0)) ||
             (DAT_14c9647dc <= (int)uVar2)) ||
            ((plVar8 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != puVar3[1])))) ||
           (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar10 = *plVar8, lVar10 == 0)))) {
LAB_144124301:
          lVar10 = 0;
        }
        else {
          if (DAT_14cba8288 == 0) {
            local_50 = FUN_141864c34;
            local_b0 = FUN_14081d0ea;
            local_b8 = &LAB_1464cee30;
            local_c0 = &local_50;
            local_c8 = &LAB_148bfac22;
            local_d0 = &LAB_140f21842;
            local_d8 = &DAT_149e063b2;
            local_e0 = 0;
            local_e8 = 0x10000004;
            local_f0 = 0x10;
            local_f8 = 0x9cd0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          }
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
          goto LAB_144124301;
          if ((char)puVar3[2] == '\x01') {
            uVar2 = *(uint *)(lVar10 + 0xc);
            uVar5 = (ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              local_a8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              local_a8 = 0;
            }
            uVar2 = *(uint *)(local_a8 + 0x10);
            if (*(uint *)(local_a8 + 0x10) == 0) {
              LOCK();
              iVar13 = DAT_14c964868 + 1;
              UNLOCK();
              uVar1 = DAT_14c964868 + 1;
              bVar16 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar13;
              if (bVar16) {
                local_a0 = CONCAT44(local_a0._4_4_,uVar1);
                local_98 = uVar5;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                             );
                uVar5 = local_98;
                uVar1 = (uint)local_a0;
              }
              LOCK();
              uVar2 = *(uint *)(local_a8 + 0x10);
              bVar16 = uVar2 == 0;
              if (bVar16) {
                *(uint *)(local_a8 + 0x10) = uVar1;
                uVar2 = 0;
              }
              UNLOCK();
              if (bVar16) {
                uVar2 = uVar1;
              }
            }
            local_a8 = (ulonglong)(int)uStack_60;
            uVar1 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
            uVar4 = (ulonglong)uVar2;
            if (uStack_60._4_4_ < uVar1) {
              local_a0 = (ulonglong)uVar2;
              local_98 = uVar5;
              FUN_140155462(&local_68,local_a8);
              uVar4 = local_a0;
              uVar5 = local_98;
            }
            uVar5 = uVar4 << 0x20 | uVar5;
            *(ulonglong *)(local_68 + local_a8 * 8) = uVar5;
            local_a8 = CONCAT71((int7)(uVar5 >> 8),1);
          }
        }
        FUN_148dbbc6e(param_2,lVar10,*(undefined1 *)((longlong)puVar3 + 10));
        FUN_148dbbc32(param_2,lVar10,*(undefined1 *)((longlong)puVar3 + 9));
        uVar15 = uVar15 & ~(uint)uVar12;
        puVar3 = *(uint **)(param_1 + 0x7f0);
        if (*(uint **)(param_1 + 0x7f0) == (uint *)0x0) {
          puVar3 = local_88;
        }
        uVar2 = *(uint *)(param_1 + 0x7f8);
        iVar13 = (int)uVar14;
        lVar10 = (longlong)iVar13;
        uVar1 = puVar3[lVar10] & uVar15;
        if (uVar1 == 0) {
          iVar6 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar6 = uVar2 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar13) {
            iVar7 = iVar13;
          }
          if (iVar13 < iVar6) {
            lVar11 = 0;
            do {
              uVar1 = puVar3[lVar10 + lVar11 + 1];
              if (uVar1 != 0) {
                uVar14 = (ulonglong)(iVar13 + (int)lVar11 + 1);
                uVar15 = 0xffffffff;
                goto LAB_1441243ac;
              }
              iVar9 = iVar9 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar7 - lVar10 != lVar11);
            uVar15 = 0xffffffff;
            iVar13 = iVar7;
          }
          uVar14 = (ulonglong)(iVar13 + 1);
          uVar1 = uVar2;
        }
        else {
LAB_1441243ac:
          uVar12 = (ulonglong)(-uVar1 & uVar1);
          uVar5 = uVar12 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar1 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar1) {
            uVar1 = uVar2;
          }
        }
      } while (uVar1 != (uint)local_90);
      if ((local_a8 & 1) != 0) {
        FUN_144123f92(param_1,param_2,&local_80,&local_68);
      }
    }
LAB_144124533:
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441245a6 FUN_1441245a6 body=979 status=ok
// SIG undefined FUN_1441245a6(void)

void FUN_1441245a6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  uint local_88;
  int local_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar12 = 0;
  FUN_148d2ea82(param_1 + 2000,0);
  uVar6 = 0;
  if (param_2 != 0) {
    uVar12 = *(uint *)(param_2 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar5 = *(uint *)(lVar13 + 0x10);
      bVar14 = uVar5 == 0;
      if (bVar14) {
        *(uint *)(lVar13 + 0x10) = uVar9;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar5 = uVar9;
      }
      uVar6 = (ulonglong)uVar5;
    }
  }
  FUN_148d2ea82(param_1 + 2000,(ulonglong)uVar12 | uVar6 << 0x20);
  iVar1 = *(int *)(param_1 + 0x7c8);
  if ((longlong)iVar1 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x7c0);
    lVar8 = 0;
    do {
      iVar4 = *(int *)(lVar13 + 4 + lVar8);
      if (((((iVar4 != 0) && (uVar12 = *(uint *)(lVar13 + lVar8), -1 < (int)uVar12)) &&
           ((int)uVar12 < DAT_14c9647dc)) &&
          ((plVar7 = (longlong *)
                     ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar4)))) &&
         (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
          ((lVar2 = *plVar7, lVar2 != 0 && (*(char *)(param_1 + 0x178) == '\x03')))))) {
        local_68 = (void *)0x0;
        local_60 = *(int *)(lVar2 + 0x3d28);
        lVar11 = (longlong)local_60;
        pvVar3 = *(void **)(lVar2 + 0x3d20);
        if (lVar11 == 0) {
          local_5c = 0;
        }
        else {
          FUN_140bf0c0e(&local_68,local_60,0);
          memcpy(local_68,pvVar3,lVar11 << 3);
        }
        local_58 = *(longlong *)(lVar2 + 0x3d30);
        if ((DAT_14c950c29 == 1) && (local_58 != 0)) {
          FUN_1456cec3c();
        }
        pvVar3 = local_68;
        local_80 = (void *)0x0;
        lVar11 = (longlong)local_60;
        local_78 = local_60;
        if (lVar11 == 0) {
          local_74 = 0;
        }
        else {
          FUN_140bf0c0e(&local_80,local_60,0);
          memcpy(local_80,pvVar3,lVar11 << 3);
        }
        local_70 = local_58;
        if ((local_58 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(param_1);
        }
        local_84 = 0;
        local_70 = param_1;
        if (param_2 == 0) {
          local_88 = 0;
          iVar4 = 0;
        }
        else {
          local_88 = *(uint *)(param_2 + 0xc);
          if ((int)local_88 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((local_88 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_88 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          iVar4 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar4 = *(int *)(lVar11 + 0x10);
            bVar14 = iVar4 == 0;
            if (bVar14) {
              *(int *)(lVar11 + 0x10) = iVar10;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar4 = iVar10;
            }
          }
        }
        local_50 = &local_88;
        local_84 = iVar4;
        FUN_140bf0ae6(&local_80,&local_50);
        FUN_144123f92(param_1,lVar2,&local_68,&local_80);
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  if (param_2 != 0) {
    FUN_148d21c5c(&local_90);
    FUN_1410ccfa4(param_2 + 0x20e,param_1,local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14412497a FUN_14412497a body=233 status=ok
// SIG undefined FUN_14412497a(void)

void FUN_14412497a(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = FUN_140cf8aa6(param_2);
  if (local_30 != 0) {
    if (*(longlong *)(param_3 + 0x20) == 0) {
      local_48 = FUN_148d2266a;
      local_40 = 0;
      local_58 = &local_30;
      FUN_148d22708(param_2 + 0x4e80,&local_38,param_1);
      *(undefined8 *)(param_3 + 0x20) = local_38;
    }
    if (*(longlong *)(param_3 + 0x28) == 0) {
      local_48 = FUN_144124e6e;
      local_40 = 0;
      local_58 = &local_30;
      FUN_148d22708(param_2 + 0x9948,&local_38,param_1);
      *(undefined8 *)(param_3 + 0x28) = local_38;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144124a64 FUN_144124a64 body=225 status=ok
// SIG undefined FUN_144124a64(void)

undefined4 * FUN_144124a64(undefined4 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar7 = FUN_1447210f0(param_2);
  FUN_1410d53f0(&local_38,uVar7);
  plVar8 = (longlong *)CONCAT44(uStack_2c,uStack_30);
  if (plVar8 != (longlong *)0x0) {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar9 = iVar6 == iVar3;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_2c,uStack_30) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_2c,uStack_30) + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if ((CONCAT44(uStack_34,local_38) == 0) ||
         (cVar5 = FUN_148e0b804(CONCAT44(uStack_34,local_38),param_2,&local_38), cVar5 == '\0')) {
        uVar4 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 4) = local_28;
        *param_1 = local_38;
        param_1[1] = uStack_34;
        param_1[2] = uStack_30;
        param_1[3] = uStack_2c;
        uVar4 = 1;
      }
      *(undefined1 *)(param_1 + 6) = uVar4;
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_144124afe;
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
LAB_144124afe:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144124b46 FUN_144124b46 body=261 status=ok
// SIG undefined FUN_144124b46(void)

void FUN_144124b46(longlong param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_48 = (void *)0x0;
    local_40 = *(int *)(param_2 + 0x3d28);
    lVar1 = (longlong)local_40;
    _Src = *(void **)(param_2 + 0x3d20);
    if (lVar1 == 0) {
      local_3c = 0;
    }
    else {
      FUN_140bf0c0e(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar1 << 3);
    }
    local_38 = *(longlong *)(param_2 + 0x3d30);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_40 = 0;
    if (local_3c != 0) {
      FUN_140373bdc(&local_48,0);
    }
    FUN_144123f92(param_1,param_2,param_2 + 0x3d20,&local_48);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144124c4c FUN_144124c4c body=544 status=ok
// SIG undefined FUN_144124c4c(void)

void FUN_144124c4c(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x7c8) != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x7c0);
    lVar6 = (longlong)*(int *)(param_1 + 0x7c8) << 3;
    do {
      cVar2 = FUN_14088ccfe(lVar5,param_2);
      if (cVar2 != '\0') {
        if (*(longlong *)(param_2 + 0xf48) != 0) {
          FUN_148d223b6(param_1);
        }
        uVar1 = *(uint *)(param_2 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar4 = DAT_14c964868 + 1;
          bVar7 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar7) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar4);
          }
          LOCK();
          iVar3 = *(int *)(lVar5 + 0x10);
          bVar7 = iVar3 == 0;
          if (bVar7) {
            *(int *)(lVar5 + 0x10) = iVar4;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar7) {
            iVar3 = iVar4;
          }
        }
        FUN_148d2e632(param_1 + 0x760,CONCAT44(iVar3,uVar1));
        FUN_144124b46(param_1,param_2);
        local_4c = 0;
        local_50 = *(uint *)(param_2 + 0xc);
        if ((int)local_50 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((local_50 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar4 = DAT_14c964868 + 1;
          bVar7 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar7) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar4);
          }
          LOCK();
          iVar3 = *(int *)(lVar5 + 0x10);
          bVar7 = iVar3 == 0;
          if (bVar7) {
            *(int *)(lVar5 + 0x10) = iVar4;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar7) {
            iVar3 = iVar4;
          }
        }
        local_48 = &local_50;
        local_4c = iVar3;
        FUN_145ac1ff8(param_1 + 0x7c0);
        FUN_148d224f2(param_1,param_2);
        FUN_148d22592(param_1,param_2);
        if ((*(int *)(param_1 + 0x7b8) == 0) && (*(char *)(param_1 + 0x848) == '\x02')) {
          FUN_148d216d8(param_1);
        }
        break;
      }
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144124e6e FUN_144124e6e body=984 status=ok
// SIG undefined FUN_144124e6e(void)

void FUN_144124e6e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_108 [36];
  uint local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  float local_9c;
  undefined1 local_98 [24];
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    plVar1 = (longlong *)(param_1 + 0x760);
    uVar5 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar5 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar5 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar7;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar5 = uVar7;
      }
    }
    local_80 = CONCAT44(uVar5,uVar2);
    iVar4 = FUN_148d2e292(plVar1,uVar2 ^ uVar5);
    if ((iVar4 == -1) || ((*plVar1 + (longlong)iVar4 * 0x48 + 8U & 0xfffffffffffffff7) == 0)) {
LAB_144124f6d:
      cVar3 = '\0';
    }
    else {
      uVar2 = *(uint *)(param_2 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar5 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar5 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar5 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar7;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar5 = uVar7;
        }
      }
      local_80 = CONCAT44(uVar5,uVar2);
      iVar4 = FUN_148d2e292(plVar1,uVar2 ^ uVar5);
      if (iVar4 == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (longlong)iVar4 * 0x48 + *plVar1;
      }
      if (*(char *)(lVar9 + 0x38) != '\x01') goto LAB_144124f6d;
      cVar3 = *(char *)(param_1 + 0x579);
    }
    if (((*(char *)(param_1 + 0x578) != '\0') || (cVar3 != '\0')) &&
       (FUN_144124a64(&local_80,param_2), local_68 == '\x01')) {
      local_e0 = *(undefined8 *)(param_2 + 0xf48);
      iVar4 = *(int *)(param_1 + 0x560);
      if ((longlong)iVar4 == 0) {
        local_e4 = 0;
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x558);
        lVar8 = 0;
        local_e4 = 0;
        do {
          FUN_141118f36(*(undefined8 *)(lVar9 + lVar8));
          if (*(longlong *)(lVar9 + lVar8) != 0) {
            local_a8 = local_70;
            local_b8 = (undefined4)local_80;
            uStack_b4 = local_80._4_4_;
            uStack_b0 = uStack_78;
            uStack_ac = uStack_74;
            plVar1 = *(longlong **)(*(longlong *)(lVar9 + lVar8) + 0x3a8);
            if (((plVar1 != (longlong *)0x0) &&
                (cVar3 = (**(code **)(*plVar1 + 0x7c0))(plVar1,&local_b8,&local_9c,local_98),
                cVar3 != '\0')) && ((0.0 <= local_9c && (local_9c <= 0.0)))) {
              uVar6 = FUN_148d217da(param_1,*(undefined8 *)(lVar9 + lVar8),local_e0);
              local_e4 = (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            }
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar4 * 8 != lVar8);
      }
      iVar4 = *(int *)(param_1 + 0x570);
      if ((longlong)iVar4 != 0) {
        lVar9 = *(longlong *)(param_1 + 0x568);
        lVar8 = 0;
        do {
          FUN_141118f36(*(undefined8 *)(lVar9 + lVar8));
          if (*(longlong *)(lVar9 + lVar8) != 0) {
            local_c8 = local_70;
            local_d8 = (undefined4)local_80;
            uStack_d4 = local_80._4_4_;
            uStack_d0 = uStack_78;
            uStack_cc = uStack_74;
            plVar1 = *(longlong **)(*(longlong *)(lVar9 + lVar8) + 0x3a8);
            if (((plVar1 != (longlong *)0x0) &&
                (cVar3 = (**(code **)(*plVar1 + 0x7c0))(plVar1,&local_d8,&local_9c,local_98),
                cVar3 != '\0')) && ((0.0 <= local_9c && (local_9c <= 0.0)))) {
              uVar6 = FUN_145c7f2d6(param_1,*(undefined8 *)(lVar9 + lVar8),local_e0);
              local_e4 = (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            }
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar4 * 8 != lVar8);
      }
      if ((local_e4 & 1) != 0) goto LAB_144124eb1;
    }
  }
  FUN_144124c4c(param_1,param_2);
LAB_144124eb1:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144125248 FUN_144125248 body=370 status=ok
// SIG undefined FUN_144125248(void)

void FUN_144125248(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x7c8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x7c0);
    lVar4 = (longlong)*(int *)(param_1 + 0x7c8) << 3;
    plVar1 = (longlong *)(param_1 + 0x760);
    do {
      lVar3 = FUN_14479d2ce(lVar5);
      if (lVar3 != 0) {
        local_58 = 0;
        FUN_14485c47a(&local_58,lVar3);
        local_50 = local_58;
        iVar2 = FUN_148d2e292(plVar1,(uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58,&local_50)
        ;
        if ((iVar2 != -1) && ((*plVar1 + (longlong)iVar2 * 0x48 + 8U & 0xfffffffffffffff7) != 0)) {
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar3);
          local_50 = local_60;
          iVar2 = FUN_148d2e292(plVar1,(uint)((ulonglong)local_60 >> 0x20) ^ (uint)local_60);
          if (iVar2 == -1) {
            lVar6 = 0;
          }
          else {
            lVar6 = (longlong)iVar2 * 0x48 + *plVar1;
          }
          *(undefined4 *)(lVar6 + 0x10) = 0;
          if (*(int *)(lVar6 + 0x14) != 0) {
            FUN_148d2e4f6(lVar6 + 8);
          }
          *(undefined4 *)(lVar6 + 0x20) = 0;
          if (*(int *)(lVar6 + 0x24) != 0) {
            FUN_148d2e4f6(lVar6 + 0x18);
          }
          *(undefined1 *)(lVar6 + 0x38) = 0;
          FUN_144124b46(param_1,lVar3);
        }
      }
      lVar5 = lVar5 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441253bc FUN_1441253bc body=375 status=ok
// SIG undefined FUN_1441253bc(void)

void FUN_1441253bc(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_80 [5];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x410) == 0) {
      local_98 = 0;
      uStack_90 = 0;
    }
    else {
      FUN_1412b3ab6(*(longlong *)(param_2 + 0x410),&local_98,2,1);
      lVar2 = local_98;
      lVar8 = (longlong)(int)uStack_90;
      if (lVar8 != 0) {
        lVar7 = 0;
        do {
          lVar1 = *(longlong *)(lVar2 + lVar7);
          if (lVar1 != 0) {
            lVar4 = FUN_1400b1372();
            if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) && (lVar1 + 0xc20 != 0)) {
              FUN_1406f1bc8(lVar1 + 0xc20,local_80);
              cVar3 = FUN_1401144ce(local_80);
              if (cVar3 != '\0') {
                uVar5 = FUN_1447210f0(param_1);
                plVar6 = (longlong *)FUN_14007a5e6(uVar5);
                if (plVar6 != (longlong *)0x0) {
                  (**(code **)(*plVar6 + 0x60))(plVar6,local_80);
                }
              }
              if (local_58 != 0) {
                FUN_1400020a8();
              }
            }
          }
          lVar7 = lVar7 + 8;
        } while (lVar8 * 8 != lVar7);
      }
      if (*(longlong *)(param_2 + 0x410) != 0) {
        FUN_140af95c6(*(longlong *)(param_2 + 0x410),1);
      }
    }
    if (((param_3 != '\0') && (plVar6 = *(longlong **)(param_2 + 0x410), plVar6 != (longlong *)0x0))
       && ((char)plVar6[0x109] != '\0')) {
      *(undefined1 *)(plVar6 + 0x109) = 0;
      (**(code **)(*plVar6 + 0xa98))(plVar6,0);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144125534 FUN_144125534 body=49 status=ok
// SIG undefined FUN_144125534(void)

void FUN_144125534(void)

{
  FUN_144760e21(DAT_14cbc94b8,DAT_14cbc94c0);
  if (DAT_14cbc94b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144125565 FUN_144125565 body=91 status=ok
// SIG undefined FUN_144125565(void)

void FUN_144125565(void)

{
  if (DAT_14cbc9920 != 0) {
    if (DAT_14cbc9918 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbc9918)(DAT_14cbc9918,0);
    FUN_1446efa72(&DAT_14cbc9918,0,0,0x10);
    DAT_14cbc9920 = 0;
  }
  if (DAT_14cbc9918 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1441255c0 FUN_1441255c0 body=29 status=ok
// SIG undefined FUN_1441255c0(void)

undefined8 FUN_1441255c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412575c FUN_14412575c body=99 status=ok
// SIG undefined FUN_14412575c(void)

void FUN_14412575c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b96b6f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441257c0 FUN_1441257c0 body=99 status=ok
// SIG undefined FUN_1441257c0(void)

void FUN_1441257c0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b96b6f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144125824 FUN_144125824 body=132 status=ok
// SIG undefined FUN_144125824(void)

void FUN_144125824(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b96b6f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144125899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441258b2 FUN_1441258b2 body=269 status=ok
// SIG undefined FUN_1441258b2(void)

undefined8 FUN_1441258b2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441259b9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441259b9;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441259b9:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412596d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441259c0(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14412596d;
    }
  }
  uVar6 = 0;
LAB_14412596d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441259c0 FUN_1441259c0 body=139 status=ok
// SIG undefined FUN_1441259c0(void)

void FUN_1441259c0(uint *param_1)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)param_1[2]);
      FUN_140cd8846(lVar3 + 0x70d0,uVar2 & 0xffffffff,0);
      FUN_140cd93e0(lVar3 + 0x70d0,uVar2 & 0xffffffff,0);
      return;
    }
  }
  return;
}



// FUNCTION 144125a4c FUN_144125a4c body=29 status=ok
// SIG undefined FUN_144125a4c(void)

undefined8 FUN_144125a4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144125be8 FUN_144125be8 body=99 status=ok
// SIG undefined FUN_144125be8(void)

void FUN_144125be8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96b760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144125c4c FUN_144125c4c body=99 status=ok
// SIG undefined FUN_144125c4c(void)

void FUN_144125c4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96b760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144125cb0 FUN_144125cb0 body=132 status=ok
// SIG undefined FUN_144125cb0(void)

void FUN_144125cb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96b7d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96b760;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144125d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144125d34 FUN_144125d34 body=69 status=ok
// SIG undefined FUN_144125d34(void)

void FUN_144125d34(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144125e9c(param_1 + 0x20,&local_10,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144125d7a FUN_144125d7a body=288 status=ok
// SIG undefined FUN_144125d7a(void)

undefined8 FUN_144125d7a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144125e94;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144125e94;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144125e94:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144125e47;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144125e9c(param_1 + 0x20,&local_38,param_4);
      uVar6 = 1;
      goto LAB_144125e47;
    }
  }
  uVar6 = 0;
LAB_144125e47:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144125e9c FUN_144125e9c body=240 status=ok
// SIG undefined FUN_144125e9c(void)

void FUN_144125e9c(uint *param_1,undefined8 *param_2,float *param_3)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  float *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((plVar4 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar4 != (longlong *)0x0 && (*(uint *)(plVar4 + 2) == param_1[1])) &&
         ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
    local_30 = 0;
    local_40 = &PTR_FUN_14b693fe8;
    local_2f = *param_3 <= 0.0;
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar4;
    }
    else {
      lVar3 = 0;
    }
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)param_1[2]);
    local_38 = *param_2;
    local_28 = param_3;
    FUN_140cd8846(lVar3 + 0x70d0,uVar2 & 0xffffffff,&local_40);
    FUN_140cd93e0(lVar3 + 0x70d0,uVar2 & 0xffffffff,&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144125f8e FUN_144125f8e body=29 status=ok
// SIG undefined FUN_144125f8e(void)

undefined8 FUN_144125f8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412612a FUN_14412612a body=99 status=ok
// SIG undefined FUN_14412612a(void)

void FUN_14412612a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b8b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96b840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412618e FUN_14412618e body=99 status=ok
// SIG undefined FUN_14412618e(void)

void FUN_14412618e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b8b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96b840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441261f2 FUN_1441261f2 body=132 status=ok
// SIG undefined FUN_1441261f2(void)

void FUN_1441261f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96b8b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96b840;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144126267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144126276 FUN_144126276 body=66 status=ok
// SIG undefined FUN_144126276(void)

void FUN_144126276(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441263dc(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441262ba FUN_1441262ba body=288 status=ok
// SIG undefined FUN_1441262ba(void)

undefined8 FUN_1441262ba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441263d4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441263d4;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441263d4:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144126387;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441263dc(param_1 + 0x20,&local_38,param_3);
      uVar6 = 1;
      goto LAB_144126387;
    }
  }
  uVar6 = 0;
LAB_144126387:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441263dc FUN_1441263dc body=248 status=ok
// SIG undefined FUN_1441263dc(void)

void FUN_1441263dc(uint *param_1,undefined8 *param_2,float *param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  float *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((plVar2 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar2 != (longlong *)0x0 && (*(uint *)(plVar2 + 2) == param_1[1])))) {
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      local_40 = &PTR_FUN_14b693fe8;
      local_2f = *param_3 <= 0.0;
      local_30 = *(undefined1 *)((longlong)param_3 + 0x121);
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar2;
      }
      else {
        lVar4 = 0;
      }
      uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)param_1[2]);
      local_38 = *param_2;
      local_28 = param_3;
      FUN_140cd8846(lVar4 + 0x70d0,uVar3 & 0xffffffff,&local_40);
      FUN_140cd93e0(lVar4 + 0x70d0,uVar3 & 0xffffffff,&local_40);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441264d6 FUN_1441264d6 body=29 status=ok
// SIG undefined FUN_1441264d6(void)

undefined8 FUN_1441264d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144126672 FUN_144126672 body=99 status=ok
// SIG undefined FUN_144126672(void)

void FUN_144126672(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96b920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441266d6 FUN_1441266d6 body=99 status=ok
// SIG undefined FUN_1441266d6(void)

void FUN_1441266d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96b920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412673a FUN_14412673a body=132 status=ok
// SIG undefined FUN_14412673a(void)

void FUN_14412673a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96b990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96b920;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441267af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441267c8 FUN_1441267c8 body=278 status=ok
// SIG undefined FUN_1441267c8(void)

undefined8 FUN_1441267c8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441268d8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441268d8;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441268d8:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412688b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441268e0(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_14412688b;
    }
  }
  uVar6 = 0;
LAB_14412688b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441268e0 FUN_1441268e0 body=241 status=ok
// SIG undefined FUN_1441268e0(void)

void FUN_1441268e0(uint *param_1,float *param_2)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  short local_30;
  float *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      local_38 = 0;
      local_40 = &PTR_FUN_14b693ff8;
      local_30 = (ushort)(*param_2 <= 0.0) << 8;
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)param_1[2]);
      local_28 = param_2;
      FUN_140cd8846(lVar3 + 0x70d0,uVar2 & 0xffffffff,&local_40);
      FUN_140cd93e0(lVar3 + 0x70d0,uVar2 & 0xffffffff,&local_40);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441269d2 FUN_1441269d2 body=29 status=ok
// SIG undefined FUN_1441269d2(void)

undefined8 FUN_1441269d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144126b6e FUN_144126b6e body=99 status=ok
// SIG undefined FUN_144126b6e(void)

void FUN_144126b6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ba70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96ba00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144126bd2 FUN_144126bd2 body=99 status=ok
// SIG undefined FUN_144126bd2(void)

void FUN_144126bd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ba70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96ba00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144126c36 FUN_144126c36 body=132 status=ok
// SIG undefined FUN_144126c36(void)

void FUN_144126c36(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96ba70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96ba00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144126cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144126cc4 FUN_144126cc4 body=269 status=ok
// SIG undefined FUN_144126cc4(void)

undefined8 FUN_144126cc4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144126dcb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144126dcb;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144126dcb:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144126d7f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144126dd2(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144126d7f;
    }
  }
  uVar6 = 0;
LAB_144126d7f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144126dd2 FUN_144126dd2 body=139 status=ok
// SIG undefined FUN_144126dd2(void)

void FUN_144126dd2(uint *param_1)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)param_1[2]);
      FUN_140cd8846(lVar3 + 0x70d0,uVar2 & 0xffffffff,0);
      FUN_140cd93e0(lVar3 + 0x70d0,uVar2 & 0xffffffff,0);
      return;
    }
  }
  return;
}



// FUNCTION 144126e5e FUN_144126e5e body=29 status=ok
// SIG undefined FUN_144126e5e(void)

undefined8 FUN_144126e5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144126ffa FUN_144126ffa body=99 status=ok
// SIG undefined FUN_144126ffa(void)

void FUN_144126ffa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b96bae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412705e FUN_14412705e body=99 status=ok
// SIG undefined FUN_14412705e(void)

void FUN_14412705e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b96bae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441270c2 FUN_1441270c2 body=132 status=ok
// SIG undefined FUN_1441270c2(void)

void FUN_1441270c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b96bae0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144127137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144127150 FUN_144127150 body=269 status=ok
// SIG undefined FUN_144127150(void)

undefined8 FUN_144127150(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144127257;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144127257;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144127257:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412720b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412725e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14412720b;
    }
  }
  uVar6 = 0;
LAB_14412720b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412725e FUN_14412725e body=139 status=ok
// SIG undefined FUN_14412725e(void)

void FUN_14412725e(uint *param_1)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)param_1[2]);
      FUN_140cd8846(lVar3 + 0x70d0,uVar2 & 0xffffffff,0);
      FUN_140cd93e0(lVar3 + 0x70d0,uVar2 & 0xffffffff,0);
      return;
    }
  }
  return;
}



// FUNCTION 1441272ea FUN_1441272ea body=29 status=ok
// SIG undefined FUN_1441272ea(void)

undefined8 FUN_1441272ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144127486 FUN_144127486 body=99 status=ok
// SIG undefined FUN_144127486(void)

void FUN_144127486(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96bbc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96bb50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441274ea FUN_1441274ea body=99 status=ok
// SIG undefined FUN_1441274ea(void)

void FUN_1441274ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96bbc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96bb50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412754e FUN_14412754e body=132 status=ok
// SIG undefined FUN_14412754e(void)

void FUN_14412754e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96bbc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96bb50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441275c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441275d2 FUN_1441275d2 body=66 status=ok
// SIG undefined FUN_1441275d2(void)

void FUN_1441275d2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14412772e(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144127616 FUN_144127616 body=279 status=ok
// SIG undefined FUN_144127616(void)

undefined8 FUN_144127616(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144127727;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144127727;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144127727:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441276db;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412772e(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_1441276db;
    }
  }
  uVar6 = 0;
LAB_1441276db:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412772e FUN_14412772e body=221 status=ok
// SIG undefined FUN_14412772e(void)

void FUN_14412772e(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined8 local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      local_38 = &PTR_FUN_14b694078;
      local_28 = 0;
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)param_1[2]);
      local_30 = *param_2;
      FUN_140cd8846(lVar3 + 0x70d0,uVar2 & 0xffffffff,&local_38);
      FUN_140cd93e0(lVar3 + 0x70d0,uVar2 & 0xffffffff,&local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412780c FUN_14412780c body=29 status=ok
// SIG undefined FUN_14412780c(void)

undefined8 FUN_14412780c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441279a8 FUN_1441279a8 body=99 status=ok
// SIG undefined FUN_1441279a8(void)

void FUN_1441279a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96bbc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96bc30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144127a0c FUN_144127a0c body=99 status=ok
// SIG undefined FUN_144127a0c(void)

void FUN_144127a0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96bbc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96bc30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144127a70 FUN_144127a70 body=132 status=ok
// SIG undefined FUN_144127a70(void)

void FUN_144127a70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96bbc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96bc30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144127ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144127afe FUN_144127afe body=269 status=ok
// SIG undefined FUN_144127afe(void)

undefined8 FUN_144127afe(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144127c05;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144127c05;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144127c05:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144127bb9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144127c0c(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144127bb9;
    }
  }
  uVar6 = 0;
LAB_144127bb9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144127c0c FUN_144127c0c body=828 status=ok
// SIG undefined FUN_144127c0c(void)

void FUN_144127c0c(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_368 [32];
  undefined1 local_348 [4];
  undefined4 local_344;
  undefined1 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined **local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined2 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      local_344 = 0xbf800000;
      uVar4 = 0;
      local_340 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_328 = 0;
      local_2c0 = 0;
      local_2b8 = 0x200000000;
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      FUN_1405c5fa2();
      local_2a8 = &DAT_14cb769e8;
      local_2a0 = 0;
      uStack_298 = 0;
      local_2b0 = &PTR_FUN_14b0394b0;
      local_290 = 0;
      uStack_288 = 0;
      local_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      local_244 = 0;
      uStack_23c = 0;
      local_234 = 0;
      uStack_22c = 0;
      local_224 = 0;
      uStack_21c = 0;
      local_214 = 0;
      local_208 = FUN_140938dea();
      local_200 = 0xffffffff;
      local_198 = 0;
      local_190 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_18c = 0xffffffff00000080;
      local_184 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      local_140 = 0xf;
      local_138 = 1;
      local_134 = 0;
      uStack_12c = 0;
      local_120 = 0x100000000;
      local_118 = 1;
      local_110 = 0;
      local_10c = 0;
      local_108 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_d4 = 0xffffffff00000080;
      local_cc = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_a4 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0x100000000;
      local_38 = 0;
      local_348[0] = (undefined1)param_1[2];
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar3 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
          {
            uVar4 = 0;
          }
          else {
            uVar4 = *puVar3;
          }
        }
      }
      FUN_1408964e4(uVar4,local_348);
      FUN_140d17bd8(local_348);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144127f4a FUN_144127f4a body=29 status=ok
// SIG undefined FUN_144127f4a(void)

undefined8 FUN_144127f4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441280e6 FUN_1441280e6 body=99 status=ok
// SIG undefined FUN_1441280e6(void)

void FUN_1441280e6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b96bca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412814a FUN_14412814a body=99 status=ok
// SIG undefined FUN_14412814a(void)

void FUN_14412814a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b96bca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441281ae FUN_1441281ae body=132 status=ok
// SIG undefined FUN_1441281ae(void)

void FUN_1441281ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b96bca0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144128223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412823c FUN_14412823c body=269 status=ok
// SIG undefined FUN_14412823c(void)

undefined8 FUN_14412823c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144128343;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144128343;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144128343:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441282f7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412834a(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1441282f7;
    }
  }
  uVar6 = 0;
LAB_1441282f7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412834a FUN_14412834a body=828 status=ok
// SIG undefined FUN_14412834a(void)

void FUN_14412834a(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_368 [32];
  undefined1 local_348 [4];
  undefined4 local_344;
  undefined1 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined **local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined2 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      local_344 = 0xbf800000;
      uVar4 = 0;
      local_340 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_328 = 0;
      local_2c0 = 0;
      local_2b8 = 0x200000000;
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      FUN_1405c5fa2();
      local_2a8 = &DAT_14cb769e8;
      local_2a0 = 0;
      uStack_298 = 0;
      local_2b0 = &PTR_FUN_14b0394b0;
      local_290 = 0;
      uStack_288 = 0;
      local_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      local_244 = 0;
      uStack_23c = 0;
      local_234 = 0;
      uStack_22c = 0;
      local_224 = 0;
      uStack_21c = 0;
      local_214 = 0;
      local_208 = FUN_140938dea();
      local_200 = 0xffffffff;
      local_198 = 0;
      local_190 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_18c = 0xffffffff00000080;
      local_184 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      local_140 = 0xf;
      local_138 = 1;
      local_134 = 0;
      uStack_12c = 0;
      local_120 = 0x100000000;
      local_118 = 1;
      local_110 = 0;
      local_10c = 0;
      local_108 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_d4 = 0xffffffff00000080;
      local_cc = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_a4 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0x100000000;
      local_38 = 0;
      local_348[0] = (undefined1)param_1[2];
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar3 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
          {
            uVar4 = 0;
          }
          else {
            uVar4 = *puVar3;
          }
        }
      }
      FUN_1408964e4(uVar4,local_348);
      FUN_140d17bd8(local_348);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144128688 FUN_144128688 body=45 status=ok
// SIG undefined FUN_144128688(void)

longlong FUN_144128688(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145e1f350(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441286bc FUN_1441286bc body=31 status=ok
// SIG undefined FUN_1441286bc(void)

undefined8 FUN_1441286bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441286dc FUN_1441286dc body=31 status=ok
// SIG undefined FUN_1441286dc(void)

undefined8 FUN_1441286dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412874a FUN_14412874a body=31 status=ok
// SIG undefined FUN_14412874a(void)

undefined8 FUN_14412874a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441287b8 FUN_1441287b8 body=29 status=ok
// SIG undefined FUN_1441287b8(void)

undefined8 FUN_1441287b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144128954 FUN_144128954 body=93 status=ok
// SIG undefined FUN_144128954(void)

void FUN_144128954(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c3a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441289b2 FUN_1441289b2 body=93 status=ok
// SIG undefined FUN_1441289b2(void)

void FUN_1441289b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c3a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144128a10 FUN_144128a10 body=126 status=ok
// SIG undefined FUN_144128a10(void)

void FUN_144128a10(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b507390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c3a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144128a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144128a8e FUN_144128a8e body=67 status=ok
// SIG undefined FUN_144128a8e(void)

void FUN_144128a8e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
    if ((cVar2 != '\0') && (plVar1[0x43b] != 0)) {
      FUN_145ca427a(plVar1[0x43b],param_2);
      return;
    }
  }
  return;
}



// FUNCTION 144128ad2 FUN_144128ad2 body=308 status=ok
// SIG undefined FUN_144128ad2(void)

undefined8 FUN_144128ad2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144128c00;
    if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_144128c00;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar9 = local_30;
  }
  else {
LAB_144128c00:
    lVar9 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144128b81;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      uVar8 = 1;
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x6c8))(plVar3);
        if ((cVar4 != '\0') && (plVar3[0x43b] != 0)) {
          FUN_145ca427a(plVar3[0x43b],param_2);
        }
      }
      goto LAB_144128b81;
    }
  }
  uVar8 = 0;
LAB_144128b81:
  if ((lVar9 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar9);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144128c08 FUN_144128c08 body=29 status=ok
// SIG undefined FUN_144128c08(void)

undefined8 FUN_144128c08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144128da4 FUN_144128da4 body=93 status=ok
// SIG undefined FUN_144128da4(void)

void FUN_144128da4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144128e02 FUN_144128e02 body=93 status=ok
// SIG undefined FUN_144128e02(void)

void FUN_144128e02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144128e60 FUN_144128e60 body=126 status=ok
// SIG undefined FUN_144128e60(void)

void FUN_144128e60(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c410;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144128ecf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144128ee8 FUN_144128ee8 body=269 status=ok
// SIG undefined FUN_144128ee8(void)

undefined8 FUN_144128ee8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144128fef;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144128fef;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144128fef:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144128fa3;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144128ff6(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144128fa3;
    }
  }
  uVar6 = 0;
LAB_144128fa3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144128ff6 FUN_144128ff6 body=102 status=ok
// SIG undefined FUN_144128ff6(void)

void FUN_144128ff6(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if ((cVar1 != '\0') && (param_1[0x43b] != 0)) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_14581becc();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412905e FUN_14412905e body=29 status=ok
// SIG undefined FUN_14412905e(void)

undefined8 FUN_14412905e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144129090 FUN_144129090 body=85 status=ok
// SIG undefined FUN_144129090(void)

void FUN_144129090(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c4f0;
  return;
}



// FUNCTION 1441290e6 FUN_1441290e6 body=85 status=ok
// SIG undefined FUN_1441290e6(void)

void FUN_1441290e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c4f0;
  return;
}



// FUNCTION 14412913c FUN_14412913c body=118 status=ok
// SIG undefined FUN_14412913c(void)

void FUN_14412913c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96eac0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c4f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441291a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441291b8 FUN_1441291b8 body=59 status=ok
// SIG undefined FUN_1441291b8(void)

undefined8 * FUN_1441291b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b96c560;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144129372 FUN_144129372 body=116 status=ok
// SIG undefined FUN_144129372(void)

void FUN_144129372(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c560;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  FUN_1447a97f4(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1441293e6 FUN_1441293e6 body=116 status=ok
// SIG undefined FUN_1441293e6(void)

void FUN_1441293e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c560;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  FUN_1447a97f4(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 14412945a FUN_14412945a body=150 status=ok
// SIG undefined FUN_14412945a(void)

void FUN_14412945a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4daf00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c560;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  FUN_1447a97f4(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441294e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441294f0 FUN_1441294f0 body=81 status=ok
// SIG undefined FUN_1441294f0(void)

void FUN_1441294f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
    if ((cVar2 != '\0') && (plVar1[0x43b] != 0)) {
      FUN_14411daf0(plVar1[0x43b],param_1 + 0x28,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 144129542 FUN_144129542 body=319 status=ok
// SIG undefined FUN_144129542(void)

undefined8 FUN_144129542(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412967b;
    if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_14412967b;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar9 = local_38;
  }
  else {
LAB_14412967b:
    lVar9 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441295f3;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      uVar8 = 1;
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x6c8))(plVar3);
        if ((cVar4 != '\0') && (plVar3[0x43b] != 0)) {
          FUN_14411daf0(plVar3[0x43b],param_1 + 0x28,param_3);
        }
      }
      goto LAB_1441295f3;
    }
  }
  uVar8 = 0;
LAB_1441295f3:
  if ((lVar9 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar9);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144129682 FUN_144129682 body=29 status=ok
// SIG undefined FUN_144129682(void)

undefined8 FUN_144129682(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412981e FUN_14412981e body=93 status=ok
// SIG undefined FUN_14412981e(void)

void FUN_14412981e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b96c5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14412987c FUN_14412987c body=93 status=ok
// SIG undefined FUN_14412987c(void)

void FUN_14412987c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b96c5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441298da FUN_1441298da body=126 status=ok
// SIG undefined FUN_1441298da(void)

void FUN_1441298da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c5d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144129949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144129958 FUN_144129958 body=68 status=ok
// SIG undefined FUN_144129958(void)

undefined8 FUN_144129958(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  FUN_14581becc(*(undefined8 *)(param_1 + 0x20));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412999e FUN_14412999e body=277 status=ok
// SIG undefined FUN_14412999e(void)

undefined8 FUN_14412999e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144129aad;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144129aad;
    }
    FUN_140192332(param_1 + 0x18,local_38,0);
    lVar7 = local_38[0];
  }
  else {
LAB_144129aad:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144129a49;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_14581becc(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144129a49;
    }
  }
  uVar6 = 0;
LAB_144129a49:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144129ab4 FUN_144129ab4 body=29 status=ok
// SIG undefined FUN_144129ab4(void)

undefined8 FUN_144129ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144129ae6 FUN_144129ae6 body=85 status=ok
// SIG undefined FUN_144129ae6(void)

void FUN_144129ae6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c640;
  return;
}



// FUNCTION 144129b3c FUN_144129b3c body=85 status=ok
// SIG undefined FUN_144129b3c(void)

void FUN_144129b3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c640;
  return;
}



// FUNCTION 144129b92 FUN_144129b92 body=118 status=ok
// SIG undefined FUN_144129b92(void)

void FUN_144129b92(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96eac0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c640;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144129bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144129c0e FUN_144129c0e body=29 status=ok
// SIG undefined FUN_144129c0e(void)

undefined8 FUN_144129c0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144129daa FUN_144129daa body=101 status=ok
// SIG undefined FUN_144129daa(void)

void FUN_144129daa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b96c6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144129e10 FUN_144129e10 body=101 status=ok
// SIG undefined FUN_144129e10(void)

void FUN_144129e10(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b96c6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144129e76 FUN_144129e76 body=134 status=ok
// SIG undefined FUN_144129e76(void)

void FUN_144129e76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c6b0;
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
                    /* WARNING: Could not recover jumptable at 0x000144129eed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144129f06 FUN_144129f06 body=269 status=ok
// SIG undefined FUN_144129f06(void)

undefined8 FUN_144129f06(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412a00d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412a00d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14412a00d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144129fc1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412a014(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144129fc1;
    }
  }
  uVar6 = 0;
LAB_144129fc1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412a014 FUN_14412a014 body=125 status=ok
// SIG undefined FUN_14412a014(void)

void FUN_14412a014(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar5 != (undefined8 *)0x0) && (*(uint *)(puVar5 + 2) == param_1[1])) &&
       (lVar2 = *(longlong *)(param_1 + 2), (*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar5;
      }
      else {
        uVar4 = 0;
      }
      lVar3 = FUN_1447210f0(uVar4);
      if (lVar3 != 0) {
        *(float *)(lVar2 + 0xcc0) = (float)*(double *)(lVar3 + 0x6d0);
      }
    }
  }
  return;
}



// FUNCTION 14412a092 FUN_14412a092 body=29 status=ok
// SIG undefined FUN_14412a092(void)

undefined8 FUN_14412a092(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412a22e FUN_14412a22e body=99 status=ok
// SIG undefined FUN_14412a22e(void)

void FUN_14412a22e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96c790;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412a292 FUN_14412a292 body=99 status=ok
// SIG undefined FUN_14412a292(void)

void FUN_14412a292(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96c790;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412a2f6 FUN_14412a2f6 body=132 status=ok
// SIG undefined FUN_14412a2f6(void)

void FUN_14412a2f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96c790;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c720;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014412a36b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412a384 FUN_14412a384 body=278 status=ok
// SIG undefined FUN_14412a384(void)

undefined8 FUN_14412a384(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412a494;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412a494;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14412a494:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412a447;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412a49c(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_14412a447;
    }
  }
  uVar6 = 0;
LAB_14412a447:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412a49c FUN_14412a49c body=1197 status=ok
// SIG undefined FUN_14412a49c(void)

void FUN_14412a49c(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined1 auStack_388 [40];
  undefined8 local_360;
  undefined1 local_358 [4];
  undefined4 local_354;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 local_300 [48];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
  goto LAB_14412a8ef;
  lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (((lVar5 == 0) || (*(uint *)(lVar5 + 0x10) != param_1[1])) ||
     ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) goto LAB_14412a8ef;
  local_354 = 0xbf800000;
  local_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  local_2d0 = 0;
  local_2c8 = 0x200000000;
  local_330 = 0;
  uStack_328 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_310 = 0;
  uStack_308 = 0;
  FUN_1405c5fa2();
  local_2b8 = &DAT_14cb769e8;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2c0 = &PTR_FUN_14b0394b0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  uStack_23c = 0;
  local_234 = 0;
  uStack_22c = 0;
  local_224 = 0;
  local_218 = FUN_140938dea();
  local_210 = 0xffffffff;
  local_1a8 = 0;
  local_1a0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0xf;
  local_148 = 1;
  local_144 = 0;
  uStack_13c = 0;
  local_130 = 0x100000000;
  local_128 = 1;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x100000000;
  local_48 = 0;
  local_358[0] = (undefined1)param_1[2];
  lVar5 = FUN_1405faa04(param_2 + 0x18);
  if (lVar5 != 0) {
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar5 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_360,puVar7,1);
    local_254 = local_360;
  }
  lVar5 = FUN_1418e44c5(param_2 + 8);
  lVar2 = FUN_1418e44c5(param_2);
  if (lVar2 != 0) {
    if (lVar5 != 0) {
      local_258 = lVar5 == lVar2;
    }
    lVar5 = (**(code **)(*(longlong *)(lVar2 + 0x10a0) + 0x10))(lVar2 + 0x10a0);
    if (lVar5 != 0) {
      if (local_300 != (undefined1 *)(param_2 + 0x30)) {
        puVar6 = (undefined1 *)(param_2 + 0x30);
        if (*(undefined1 **)(param_2 + 0x60) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_2 + 0x60);
        }
        FUN_1400709d4(local_300,puVar6,*(undefined4 *)(param_2 + 0x68),local_2c8._4_4_);
      }
      (*(code *)local_2c0[4])(&local_2c0,0);
      local_2b8 = *(undefined **)(param_2 + 0x78);
      FUN_1406022fe(&local_2b0,param_2 + 0x80);
      if (*(int *)(lVar5 + 0x40) < 1) {
        fVar8 = -1.0;
      }
      else {
        fVar8 = (float)FUN_14055830e(*(undefined8 *)(lVar5 + 0x38));
      }
      fVar8 = fVar8 - *(float *)(param_2 + 0x14);
      uVar1 = (uint)ROUND(fVar8 + fVar8 + 0.5);
      uStack_298 = CONCAT44(uStack_298._4_4_,(int)uVar1 >> 1);
      if (1 < uVar1) {
        if (param_1[1] == 0) {
LAB_14412a920:
          uVar3 = 0;
        }
        else {
          uVar1 = *param_1;
          uVar3 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar4 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar4 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))
               )) goto LAB_14412a920;
            uVar3 = *puVar4;
          }
        }
        FUN_1408964e4(uVar3,local_358);
      }
    }
  }
  FUN_140d17bd8(local_358);
LAB_14412a8ef:
  if ((local_40 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412a94a FUN_14412a94a body=29 status=ok
// SIG undefined FUN_14412a94a(void)

undefined8 FUN_14412a94a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412aae6 FUN_14412aae6 body=99 status=ok
// SIG undefined FUN_14412aae6(void)

void FUN_14412aae6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ba70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412ab4a FUN_14412ab4a body=99 status=ok
// SIG undefined FUN_14412ab4a(void)

void FUN_14412ab4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ba70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412abae FUN_14412abae body=132 status=ok
// SIG undefined FUN_14412abae(void)

void FUN_14412abae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96ba70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c800;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014412ac23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412ac32 FUN_14412ac32 body=66 status=ok
// SIG undefined FUN_14412ac32(void)

void FUN_14412ac32(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14412ad8e(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412ac76 FUN_14412ac76 body=279 status=ok
// SIG undefined FUN_14412ac76(void)

undefined8 FUN_14412ac76(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412ad87;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412ad87;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14412ad87:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412ad3b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412ad8e(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_14412ad3b;
    }
  }
  uVar6 = 0;
LAB_14412ad3b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412ad8e FUN_14412ad8e body=2116 status=ok
// SIG undefined FUN_14412ad8e(void)

void FUN_14412ad8e(uint *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_3f8 [32];
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  wchar_t *local_3b8;
  code *local_3b0;
  undefined1 *local_3a8;
  code **local_3a0;
  code *local_398;
  code *local_390;
  code *local_380;
  undefined1 local_378 [4];
  undefined4 local_374;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  code *pcStack_26c;
  code *local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 local_148;
  byte local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if (((param_1[1] == 0) || (uVar11 = *param_1, (int)uVar11 < 0)) || (DAT_14c9647dc <= (int)uVar11))
  goto LAB_14412b485;
  lVar10 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
  if (((lVar10 == 0) || (*(uint *)(lVar10 + 0x10) != param_1[1])) ||
     (uVar2 = *param_2, (*(uint *)(lVar10 + 8) & 0x10200000) != 0)) goto LAB_14412b485;
  local_374 = 0xbf800000;
  local_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_2f0 = 0;
  local_2e8 = 0x200000000;
  local_350 = 0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  FUN_1405c5fa2();
  local_2d8 = &DAT_14cb769e8;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = &PTR_FUN_14b0394b0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  local_274 = 0;
  pcStack_26c = (code *)0x0;
  local_264 = (code *)0x0;
  uStack_25c = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  local_238 = FUN_140938dea();
  local_230 = 0xffffffff;
  local_1c8 = 0;
  local_1c0 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
  local_168 = 1;
  local_164 = 0;
  uStack_15c = 0;
  local_150 = 0x100000000;
  local_148 = 1;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d4 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x100000000;
  local_68 = 0;
  local_378[0] = (undefined1)param_1[2];
  if (((uVar2 >> 0x20 != 0) && (uVar11 = (uint)uVar2, -1 < (int)uVar11)) &&
     ((int)uVar11 < DAT_14c9647dc)) {
    uVar7 = (ulonglong)((uint)(uVar2 >> 0x10) & 0x7fff);
    plVar4 = (longlong *)
             ((ulonglong)((uVar11 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar7 * 8));
    if (((plVar4 != (longlong *)0x0) && (iVar12 = (int)(uVar2 >> 0x20), (int)plVar4[2] == iVar12))
       && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar10 = *plVar4;
      }
      else {
        lVar10 = 0;
      }
      if (*(longlong *)(lVar10 + 0x3f0) != 0) {
        lVar10 = FUN_140a2d0dc();
        if (lVar10 != 0) {
          puVar8 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
            puVar8 = *(undefined4 **)(lVar10 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar10 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar10);
            DAT_14c947fe0 = lVar10;
          }
          FUN_140045924(DAT_14c947fe0,&local_380,puVar8,1);
          local_264 = local_380;
        }
      }
      if ((((int)uVar11 < DAT_14c9647dc) &&
          (plVar4 = (longlong *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + uVar7 * 8)), plVar4 != (longlong *)0x0)) &&
         (((int)plVar4[2] == iVar12 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
        lVar10 = *plVar4;
      }
      else {
        lVar10 = 0;
      }
      if (*(longlong *)(lVar10 + 0x4e8) != 0) {
        puVar8 = *(undefined4 **)(*(longlong *)(lVar10 + 0x4e8) + 8);
        puVar9 = &DAT_14c9485f0;
        if (puVar8 != (undefined4 *)0x0) {
          puVar9 = puVar8;
        }
        if (DAT_14c947fe0 == 0) {
          lVar10 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar10);
          DAT_14c947fe0 = lVar10;
        }
        FUN_140045924(DAT_14c947fe0,&local_380,puVar9,1);
        pcStack_26c = local_380;
      }
    }
  }
  if (param_1[1] == 0) {
LAB_14412b4bb:
    lVar10 = 0;
  }
  else {
    uVar11 = *param_1;
    lVar10 = 0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14412b4bb;
      lVar10 = *plVar4;
    }
  }
  if (*(longlong **)(lVar10 + 0x11e8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(lVar10 + 0x11e8) + 0xeb8))();
    if (cVar3 != '\0') {
      local_140 = local_140 | 1;
    }
  }
  if (param_1[1] == 0) {
LAB_14412b4c2:
    lVar10 = 0;
  }
  else {
    uVar11 = *param_1;
    lVar10 = 0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14412b4c2;
      lVar10 = *plVar4;
    }
  }
  cVar3 = (**(code **)(*(longlong *)(*(longlong *)(lVar10 + 0x430) + 0x178) + 0xd8))();
  if (cVar3 != '\0') {
    local_140 = local_140 | 2;
  }
  uVar11 = param_1[1];
  if (uVar11 == 0) {
LAB_14412b4c9:
    lVar10 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar10 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != uVar11 || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14412b4c9;
      lVar10 = *plVar4;
    }
  }
  if (*(char *)(lVar10 + 0x73eb) != '\0') {
    local_140 = local_140 | 4;
  }
  if (((((uVar11 != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && (*(uint *)(plVar4 + 2) == uVar11)))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar10 = *plVar4, lVar10 != 0)))) {
    if (DAT_14cb6fd70 == 0) {
      local_3a0 = &local_380;
      local_380 = FUN_1449e2820;
      local_390 = FUN_14081d0ea;
      local_398 = FUN_1427b09ee;
      local_3a8 = &LAB_1487a9cc9;
      local_3b0 = FUN_1465433f8;
      local_3b8 = L"Engine";
      local_3c0 = 0;
      local_3c8 = 0x10004001;
      local_3d0 = 8;
      local_3d8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
    }
    plVar4 = (longlong *)FUN_144718840(lVar10,DAT_14cb6fd70);
    if (plVar4 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar4 + 0x50))();
      if (cVar3 != '\0') {
        local_140 = local_140 | 8;
      }
    }
  }
  if (param_1[1] == 0) {
LAB_14412b4d0:
    lVar10 = 0;
  }
  else {
    uVar11 = *param_1;
    lVar10 = 0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14412b4d0;
      lVar10 = *plVar4;
    }
  }
  lVar10 = *(longlong *)(&DAT_00006850 + lVar10);
  if (lVar10 != 0) {
    cVar3 = (**(code **)(*(longlong *)(lVar10 + 0x178) + 0xd0))(lVar10 + 0x178);
    if (cVar3 != '\0') {
      local_140 = local_140 | 0x20;
    }
    if ((&DAT_00001100)[lVar10] == '\r') {
      local_140 = local_140 | 0x80;
    }
  }
  if (param_1[1] == 0) {
LAB_14412b4d7:
    uVar5 = 0;
  }
  else {
    uVar11 = *param_1;
    uVar5 = 0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_14412b4d7;
      uVar5 = *puVar6;
    }
  }
  FUN_1408964e4(uVar5,local_378);
  FUN_140d17bd8(local_378);
LAB_14412b485:
  if ((local_60 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412b5d4 FUN_14412b5d4 body=29 status=ok
// SIG undefined FUN_14412b5d4(void)

undefined8 FUN_14412b5d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412b770 FUN_14412b770 body=99 status=ok
// SIG undefined FUN_14412b770(void)

void FUN_14412b770(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412b7d4 FUN_14412b7d4 body=99 status=ok
// SIG undefined FUN_14412b7d4(void)

void FUN_14412b7d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412b838 FUN_14412b838 body=132 status=ok
// SIG undefined FUN_14412b838(void)

void FUN_14412b838(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c870;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014412b8ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412b8bc FUN_14412b8bc body=77 status=ok
// SIG undefined FUN_14412b8bc(void)

void FUN_14412b8bc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_3;
  local_10 = param_4;
  FUN_14412ba36(param_1 + 0x20,param_2,&local_18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412b90a FUN_14412b90a body=298 status=ok
// SIG undefined FUN_14412b90a(void)

undefined8 FUN_14412b90a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  local_38 = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412ba2e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412ba2e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14412ba2e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412b9e1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412ba36(param_1 + 0x20,param_2,&local_40,&local_38);
      uVar6 = 1;
      goto LAB_14412b9e1;
    }
  }
  uVar6 = 0;
LAB_14412b9e1:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412ba36 FUN_14412ba36 body=939 status=ok
// SIG undefined FUN_14412ba36(void)

void FUN_14412ba36(uint *param_1,undefined8 param_2,ulonglong *param_3,ulonglong *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_388 [40];
  undefined8 local_360;
  undefined1 local_358 [4];
  undefined4 local_354;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_130;
  ulonglong local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  uVar2 = *param_4;
  uVar3 = *param_3;
  if (DAT_14c947fe0 == 0) {
    lVar6 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar6);
    DAT_14c947fe0 = lVar6;
  }
  FUN_140045924(DAT_14c947fe0,&local_360,param_2,1);
  if (((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
  goto LAB_14412bd87;
  lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (((lVar6 == 0) || (*(uint *)(lVar6 + 0x10) != param_1[1])) ||
     ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) goto LAB_14412bd87;
  local_358[0] = 0;
  local_354 = 0xbf800000;
  local_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  local_2d0 = 0;
  local_2c8 = 0x200000000;
  local_330 = 0;
  uStack_328 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_310 = 0;
  uStack_308 = 0;
  FUN_1405c5fa2();
  local_2b8 = &DAT_14cb769e8;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2c0 = &PTR_FUN_14b0394b0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  uStack_23c = 0;
  local_234 = 0;
  uStack_22c = 0;
  local_224 = 0;
  local_218 = FUN_140938dea();
  local_210 = 0xffffffff;
  local_1a8 = 0;
  local_1a0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0xf;
  local_148 = 1;
  local_144 = 0;
  uStack_13c = 0;
  local_130 = 0x100000000;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x100000000;
  local_48 = 0;
  local_358[0] = (undefined1)param_1[2];
  local_234 = local_360;
  local_128 = uVar3;
  if (uVar2 < uVar3) {
    if (param_1[1] == 0) {
LAB_14412bdb8:
      uVar4 = 0;
    }
    else {
      uVar1 = *param_1;
      uVar4 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
        goto LAB_14412bdb8;
        uVar4 = *puVar5;
      }
    }
    FUN_1408964e4(uVar4,local_358);
  }
  FUN_140d17bd8(local_358);
LAB_14412bd87:
  if ((local_40 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412bde2 FUN_14412bde2 body=29 status=ok
// SIG undefined FUN_14412bde2(void)

undefined8 FUN_14412bde2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412bf7e FUN_14412bf7e body=99 status=ok
// SIG undefined FUN_14412bf7e(void)

void FUN_14412bf7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96c950;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412bfe2 FUN_14412bfe2 body=99 status=ok
// SIG undefined FUN_14412bfe2(void)

void FUN_14412bfe2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96c950;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412c046 FUN_14412c046 body=132 status=ok
// SIG undefined FUN_14412c046(void)

void FUN_14412c046(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96c950;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c8e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014412c0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412c0ca FUN_14412c0ca body=66 status=ok
// SIG undefined FUN_14412c0ca(void)

void FUN_14412c0ca(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_14412c230(param_1 + 0x20,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412c10e FUN_14412c10e body=288 status=ok
// SIG undefined FUN_14412c10e(void)

undefined8 FUN_14412c10e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412c228;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412c228;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14412c228:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412c1db;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412c230(param_1 + 0x20,param_2,&local_38);
      uVar6 = 1;
      goto LAB_14412c1db;
    }
  }
  uVar6 = 0;
LAB_14412c1db:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412c230 FUN_14412c230 body=852 status=ok
// SIG undefined FUN_14412c230(void)

void FUN_14412c230(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_378 [32];
  undefined1 local_358 [4];
  undefined4 local_354;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
       (uVar2 = *param_3, (*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      local_354 = 0xbf800000;
      uVar5 = 0;
      local_350 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_338 = 0;
      local_2d0 = 0;
      local_2c8 = 0x200000000;
      local_330 = 0;
      uStack_328 = 0;
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      FUN_1405c5fa2();
      local_2b8 = &DAT_14cb769e8;
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_2c0 = &PTR_FUN_14b0394b0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_290 = 0;
      local_288 = 0;
      uStack_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      local_254 = 0;
      uStack_24c = 0;
      local_244 = 0;
      uStack_23c = 0;
      local_234 = 0;
      uStack_22c = 0;
      local_224 = 0;
      local_218 = FUN_140938dea();
      local_210 = 0xffffffff;
      local_1a8 = 0;
      local_1a0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_19c = 0xffffffff00000080;
      local_194 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      local_150 = 0xf;
      local_148 = 1;
      local_144 = 0;
      uStack_13c = 0;
      local_130 = 0;
      local_128 = 1;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_e4 = 0xffffffff00000080;
      local_dc = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_b4 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0x100000000;
      local_48 = 0;
      local_358[0] = (undefined1)param_1[2];
      local_234 = *param_2;
      local_12c = (undefined4)uVar2;
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar5 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar4 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar4 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
          {
            uVar5 = 0;
          }
          else {
            uVar5 = *puVar4;
          }
        }
      }
      FUN_1408964e4(uVar5,local_358);
      FUN_140d17bd8(local_358);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412c586 FUN_14412c586 body=29 status=ok
// SIG undefined FUN_14412c586(void)

undefined8 FUN_14412c586(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412c722 FUN_14412c722 body=101 status=ok
// SIG undefined FUN_14412c722(void)

void FUN_14412c722(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c9c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14412c788 FUN_14412c788 body=101 status=ok
// SIG undefined FUN_14412c788(void)

void FUN_14412c788(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c9c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14412c7ee FUN_14412c7ee body=134 status=ok
// SIG undefined FUN_14412c7ee(void)

void FUN_14412c7ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b405fd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c9c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014412c865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412c87e FUN_14412c87e body=278 status=ok
// SIG undefined FUN_14412c87e(void)

undefined8 FUN_14412c87e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412c98e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412c98e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14412c98e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412c941;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412c996(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_14412c941;
    }
  }
  uVar6 = 0;
LAB_14412c941:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412c996 FUN_14412c996 body=1769 status=ok
// SIG undefined FUN_14412c996(void)

void FUN_14412c996(uint *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_3c8 [40];
  uint *local_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  uint local_380;
  undefined1 local_378 [4];
  undefined4 local_374;
  undefined1 local_370;
  undefined8 local_368;
  longlong lStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined **local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if ((((param_1[1] != 0) && (uVar7 = *param_1, -1 < (int)uVar7)) && ((int)uVar7 < DAT_14c9647dc))
     && (((lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar15 != 0 &&
          (*(uint *)(lVar15 + 0x10) == param_1[1])) &&
         (((*(uint *)(lVar15 + 8) & 0x10200000) == 0 && ((longlong)*(int *)(param_2 + 1) != 0))))))
  {
    puVar11 = (uint *)*param_2;
    lVar16 = *(longlong *)(param_1 + 4) + 0xbc8;
    lVar15 = (longlong)*(int *)(param_2 + 1) * 0xc;
    local_3a0 = param_1;
    local_398 = lVar16;
    do {
      uVar7 = *puVar11;
      uVar8 = puVar11[2];
      if (uVar8 != 0) {
        uVar7 = uVar8 >> 0xd ^ uVar7 - uVar8;
        uVar10 = uVar7 << 8 ^ (-0x61c88647 - uVar8) - uVar7;
        uVar14 = uVar10 >> 0xd ^ (uVar8 - uVar7) - uVar10;
        uVar7 = uVar14 >> 0xc ^ (uVar7 - uVar10) - uVar14;
        uVar8 = uVar7 << 0x10 ^ (uVar10 - uVar14) - uVar7;
        uVar14 = uVar8 >> 5 ^ (uVar14 - uVar7) - uVar8;
        uVar10 = uVar14 >> 3 ^ (uVar7 - uVar8) - uVar14;
        uVar7 = uVar10 << 10 ^ (uVar8 - uVar14) - uVar10;
        uVar7 = uVar7 >> 0xf ^ uVar14 - (uVar10 + uVar7);
      }
      iVar3 = FUN_1407a7398(lVar16,uVar7,puVar11);
      if (iVar3 == -1) {
        FUN_1411d2c14(lVar16,local_378,puVar11,0);
        local_388 = *(undefined8 *)puVar11;
        local_380 = puVar11[2];
        FUN_1448075d0(local_378,&local_388);
        lVar4 = FUN_140fa5e12(local_378);
        if (lStack_360 != 0) {
          FUN_1400020a8();
        }
        if (lVar4 != 0) {
          local_378[0] = 0;
          local_374 = 0xbf800000;
          local_370 = 0;
          local_358 = 0;
          local_368 = 0;
          lStack_360 = 0;
          local_2f0 = 0;
          local_2e8 = 0;
          local_330 = 0;
          uStack_328 = 0;
          local_340 = 0;
          uStack_338 = 0;
          local_350 = 0;
          uStack_348 = 0;
          local_2e4 = 2;
          FUN_1405c5fa2();
          local_2d8 = &DAT_14cb769e8;
          local_2d0 = 0;
          uStack_2c8 = 0;
          local_2e0 = &PTR_FUN_14b0394b0;
          local_2b0 = 0;
          local_2c0 = 0;
          uStack_2b8 = 0;
          local_278 = 0;
          local_288 = 0;
          uStack_280 = 0;
          local_298 = 0;
          uStack_290 = 0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_244 = 0;
          local_254 = 0;
          uStack_24c = 0;
          local_264 = 0;
          uStack_25c = 0;
          local_274 = 0;
          uStack_26c = 0;
          FUN_140938dea();
          local_1c8 = 0;
          local_1c0 = 0;
          local_228 = 0;
          uStack_220 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1bc = 0xffffffff00000080;
          local_1b4 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          local_178 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_170 = 0xf;
          local_168 = 1;
          local_164 = 0;
          uStack_15c = 0;
          local_150 = 0x100000000;
          local_148 = 1;
          local_140 = 0;
          local_13c = 0;
          local_138 = 0;
          local_110 = 0;
          local_108 = 0;
          local_130 = 0;
          uStack_128 = 0;
          local_104 = 0xffffffff00000080;
          local_fc = 0;
          local_f0 = 0;
          local_e8 = 0;
          local_d4 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_70 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_6c = 1;
          local_68 = 0;
          local_378[0] = (undefined1)param_1[2];
          local_238 = *(undefined8 *)(lVar4 + 0x4f0);
          local_230 = *(undefined4 *)(lVar4 + 0x4f8);
          puVar12 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
            puVar12 = *(undefined4 **)(lVar4 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar16 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar16);
            DAT_14c947fe0 = lVar16;
          }
          FUN_140045924(DAT_14c947fe0,&local_390,puVar12);
          uStack_24c = local_390;
          lVar16 = *(longlong *)(lVar4 + 0x7a8);
          if (lVar16 == 0) {
            uVar5 = FUN_14086ad12();
            lVar16 = FUN_14477b664(uVar5);
            *(longlong *)(lVar4 + 0x7a8) = lVar16;
          }
          plVar13 = (longlong *)(lVar4 + 0x7a0);
          lVar6 = *(longlong *)(lVar4 + 0x7b0);
          if (lVar6 == 0) {
            param_1 = local_3a0;
            if ((lVar16 != 0) && (*plVar13 != 0)) {
              plVar1 = *(longlong **)(lVar16 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                *(undefined8 *)(lVar4 + 0x7b0) = 0;
                param_1 = local_3a0;
              }
              else {
                uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar6 = FUN_144aff482(uVar5,plVar13);
                *(longlong *)(lVar4 + 0x7b0) = lVar6;
                param_1 = local_3a0;
                if (lVar6 != 0) {
                  lVar16 = *(longlong *)(lVar4 + 0x7a8);
                  goto LAB_14412ce4a;
                }
              }
            }
          }
          else {
LAB_14412ce4a:
            param_1 = local_3a0;
            if (lVar16 == 0) {
              uVar5 = FUN_14086ad12();
              lVar16 = FUN_14477b664(uVar5);
              *(longlong *)(lVar4 + 0x7a8) = lVar16;
              lVar6 = *(longlong *)(lVar4 + 0x7b0);
              if (lVar6 == 0) {
                if (lVar16 == 0) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = 0;
                  if (*plVar13 != 0) {
                    plVar1 = *(longlong **)(lVar16 + 0xb8);
                    if ((plVar1 == (longlong *)0x0) ||
                       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                      lVar6 = 0;
                    }
                    else {
                      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
                      lVar6 = FUN_144aff482(uVar5,plVar13);
                    }
                    *(longlong *)(lVar4 + 0x7b0) = lVar6;
                  }
                }
              }
            }
            puVar12 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
              puVar12 = *(undefined4 **)(lVar6 + 8);
            }
            if (DAT_14c947fe0 == 0) {
              lVar16 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar16);
              DAT_14c947fe0 = lVar16;
            }
            FUN_140045924(DAT_14c947fe0,&local_390,puVar12);
            local_244 = local_390;
          }
          lVar16 = local_398;
          if (param_1[1] == 0) {
            uVar5 = 0;
          }
          else {
            uVar7 = *param_1;
            if ((int)uVar7 < 0) {
LAB_14412d014:
              uVar5 = 0;
            }
            else {
              uVar5 = 0;
              if ((int)uVar7 < DAT_14c9647dc) {
                puVar9 = (undefined8 *)
                         ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                if (((puVar9 == (undefined8 *)0x0) || (*(uint *)(puVar9 + 2) != param_1[1])) ||
                   ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_14412d014;
                uVar5 = *puVar9;
              }
            }
          }
          FUN_1408964e4(uVar5,local_378);
          FUN_140d17bd8(local_378);
        }
      }
      puVar11 = puVar11 + 3;
      lVar15 = lVar15 + -0xc;
    } while (lVar15 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14412d080 FUN_14412d080 body=29 status=ok
// SIG undefined FUN_14412d080(void)

undefined8 FUN_14412d080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412d21c FUN_14412d21c body=101 status=ok
// SIG undefined FUN_14412d21c(void)

void FUN_14412d21c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96caa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96ca30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14412d282 FUN_14412d282 body=101 status=ok
// SIG undefined FUN_14412d282(void)

void FUN_14412d282(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96caa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96ca30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14412d2e8 FUN_14412d2e8 body=134 status=ok
// SIG undefined FUN_14412d2e8(void)

void FUN_14412d2e8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96caa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96ca30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014412d35f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412d36e FUN_14412d36e body=66 status=ok
// SIG undefined FUN_14412d36e(void)

void FUN_14412d36e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_14412d4d4(param_1 + 0x20,param_2,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412d3b2 FUN_14412d3b2 body=288 status=ok
// SIG undefined FUN_14412d3b2(void)

undefined8 FUN_14412d3b2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412d4cc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412d4cc;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14412d4cc:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412d47f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412d4d4(param_1 + 0x20,param_2,&local_34);
      uVar6 = 1;
      goto LAB_14412d47f;
    }
  }
  uVar6 = 0;
LAB_14412d47f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412d4d4 FUN_14412d4d4 body=858 status=ok
// SIG undefined FUN_14412d4d4(void)

void FUN_14412d4d4(uint *param_1,longlong *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_378 [32];
  undefined1 local_358 [4];
  undefined4 local_354;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
       ((uVar2 = *param_3, (*(uint *)(lVar3 + 8) & 0x10200000) == 0 && (*param_2 != 0)))) {
      if ((longlong)(int)param_2[3] != 0) {
        lVar3 = 0;
        do {
          if (*(longlong *)(param_2[2] + lVar3) == 0) goto LAB_14412d7fb;
          lVar3 = lVar3 + 8;
        } while ((longlong)(int)param_2[3] * 8 != lVar3);
      }
      local_354 = 0xbf800000;
      uVar5 = 0;
      local_350 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_338 = 0;
      local_2d0 = 0;
      local_2c8 = 0x200000000;
      local_330 = 0;
      uStack_328 = 0;
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      FUN_1405c5fa2();
      local_2b8 = &DAT_14cb769e8;
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_2c0 = &PTR_FUN_14b0394b0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_290 = 0;
      local_288 = 0;
      uStack_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      local_254 = 0;
      uStack_24c = 0;
      local_244 = 0;
      uStack_23c = 0;
      local_234 = 0;
      uStack_22c = 0;
      local_224 = 0;
      local_218 = FUN_140938dea();
      local_210 = 0xffffffff;
      local_1a8 = 0;
      local_1a0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_19c = 0xffffffff00000080;
      local_194 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      local_150 = 0xf;
      local_148 = 1;
      local_144 = 0;
      uStack_13c = 0;
      local_130 = 0x100000000;
      local_128 = 1;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_e4 = 0xffffffff00000080;
      local_dc = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_b4 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0x100000000;
      local_48 = 0;
      local_358[0] = (undefined1)param_1[2];
      FUN_1407b25f0(&local_208,param_2);
      local_130 = CONCAT44(local_130._4_4_,uVar2);
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar5 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar4 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar4 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
          {
            uVar5 = 0;
          }
          else {
            uVar5 = *puVar4;
          }
        }
      }
      FUN_1408964e4(uVar5,local_358);
      FUN_140d17bd8(local_358);
    }
  }
LAB_14412d7fb:
  if ((local_40 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412d830 FUN_14412d830 body=29 status=ok
// SIG undefined FUN_14412d830(void)

undefined8 FUN_14412d830(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412d9cc FUN_14412d9cc body=101 status=ok
// SIG undefined FUN_14412d9cc(void)

void FUN_14412d9cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cb10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14412da32 FUN_14412da32 body=101 status=ok
// SIG undefined FUN_14412da32(void)

void FUN_14412da32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cb10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14412da98 FUN_14412da98 body=134 status=ok
// SIG undefined FUN_14412da98(void)

void FUN_14412da98(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96b990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96cb10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014412db0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412db28 FUN_14412db28 body=278 status=ok
// SIG undefined FUN_14412db28(void)

undefined8 FUN_14412db28(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412dc38;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412dc38;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14412dc38:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412dbeb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412dc40(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_14412dbeb;
    }
  }
  uVar6 = 0;
LAB_14412dbeb:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412dc40 FUN_14412dc40 body=1603 status=ok
// SIG undefined FUN_14412dc40(void)

void FUN_14412dc40(uint *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_3a8 [32];
  int local_388 [2];
  longlong *local_380;
  undefined1 local_378 [4];
  undefined4 local_374;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  longlong local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  int local_fc;
  undefined1 local_f8 [8];
  undefined1 *local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (param_1[1] == 0) {
LAB_14412e272:
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar11 = *param_1;
    plVar10 = (longlong *)0x0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_14412e272;
      plVar10 = (longlong *)*puVar6;
    }
  }
  lVar4 = (**(code **)(*plVar10 + 0x5d8))();
  if (((((param_1[1] == 0) || (uVar11 = *param_1, (int)uVar11 < 0)) ||
       (DAT_14c9647dc <= (int)uVar11)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || (*(uint *)(plVar10 + 2) != param_1[1])))) ||
     ((lVar4 == 0 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_14412e23c;
  if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
    lVar4 = *plVar10;
  }
  else {
    lVar4 = 0;
  }
  lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x10a0) + 0x10))(lVar4 + 0x10a0);
  if (lVar4 == 0) goto LAB_14412e23c;
  local_374 = 0xbf800000;
  local_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_2f0 = 0;
  local_2e8 = 0x200000000;
  local_350 = 0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  FUN_1405c5fa2();
  local_2d8 = &DAT_14cb769e8;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = &PTR_FUN_14b0394b0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  local_274 = 0;
  uStack_26c = 0;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  local_238 = FUN_140938dea();
  local_230 = 0xffffffff;
  local_1c8 = 0;
  local_1c0 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
  local_168 = 1;
  local_164 = 0;
  uStack_15c = 0;
  local_150 = 0x100000000;
  local_148 = 1;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = (undefined1 *)0x0;
  local_e8 = 0;
  local_d4 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x100000000;
  local_68 = 0;
  local_378[0] = (undefined1)param_1[2];
  if ((longlong)*(int *)(param_2 + 0xf0) != 0) {
    plVar10 = *(longlong **)(param_2 + 0xe8);
    plVar13 = plVar10 + (longlong)*(int *)(param_2 + 0xf0) * 4;
    do {
      lVar3 = plVar10[3];
      lVar4 = *plVar10;
      uVar11 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar9 = (uint)lVar4 & 0xffff;
      uVar11 = ((uint)lVar4 << 0x10 | uVar9) + (int)((ulonglong)lVar4 >> 0x20) +
               (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar9 >> 4);
      if ((int)uStack_128 != local_fc) {
        puVar5 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar5 = local_f8;
        }
        iVar2 = *(int *)(puVar5 + (ulonglong)(local_e8 - 1U & uVar11) * 4);
        while (iVar2 != -1) {
          plVar1 = (longlong *)(local_130 + (longlong)iVar2 * 0x14);
          if (*plVar1 == lVar4) {
            if (plVar1 != (longlong *)0x0) goto LAB_14412e0dc;
            break;
          }
          iVar2 = *(int *)((longlong)plVar1 + 0xc);
        }
      }
      FUN_1408cb62c(&local_130,local_388);
      iVar2 = local_388[0];
      *local_380 = lVar4;
      local_380[1] = -0x100000000;
      uVar9 = (int)uStack_128 - local_fc;
      if ((uVar9 != 0) && (uVar9 != 1)) {
        puVar5 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar5 = local_f8;
        }
        iVar12 = *(int *)(puVar5 + (ulonglong)(local_e8 - 1U & uVar11) * 4);
        while (iVar12 != -1) {
          plVar1 = (longlong *)(local_130 + (longlong)iVar12 * 0x14);
          if (*plVar1 == lVar4) {
            lVar4 = *local_380;
            *(int *)(plVar1 + 1) = (int)local_380[1];
            *plVar1 = lVar4;
            FUN_14064cf78(&local_130,local_388[0],1);
            goto LAB_14412e0c5;
          }
          iVar12 = *(int *)((longlong)plVar1 + 0xc);
        }
      }
      iVar12 = 1;
      if (3 < uVar9) {
        uVar7 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((int)uVar9 < 1) || (iVar12 <= local_e8)) {
        uVar11 = local_e8 - 1U & uVar11;
        *(uint *)(local_380 + 2) = uVar11;
        puVar5 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar5 = local_f8;
        }
        *(undefined4 *)((longlong)local_380 + 0xc) =
             *(undefined4 *)(puVar5 + ((longlong)local_e8 - 1U & (longlong)(int)uVar11) * 4);
        puVar5 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar5 = local_f8;
        }
        *(int *)(puVar5 + ((longlong)local_e8 - 1U & (longlong)(int)uVar11) * 4) = local_388[0];
      }
      else {
        local_e8 = iVar12;
        FUN_1408cb1a2(&local_130);
      }
LAB_14412e0c5:
      plVar1 = (longlong *)(local_130 + (longlong)iVar2 * 0x14);
LAB_14412e0dc:
      *(int *)(plVar1 + 1) = (int)lVar3;
      plVar10 = plVar10 + 4;
    } while (plVar10 != plVar13);
  }
  if (param_1[1] == 0) {
LAB_14412e279:
    uVar8 = 0;
  }
  else {
    uVar11 = *param_1;
    uVar8 = 0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_14412e279;
      uVar8 = *puVar6;
    }
  }
  FUN_1408964e4(uVar8,local_378);
  FUN_140d17bd8(local_378);
LAB_14412e23c:
  if ((local_60 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14412e284 FUN_14412e284 body=29 status=ok
// SIG undefined FUN_14412e284(void)

undefined8 FUN_14412e284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412e420 FUN_14412e420 body=101 status=ok
// SIG undefined FUN_14412e420(void)

void FUN_14412e420(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96cbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cb80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14412e486 FUN_14412e486 body=101 status=ok
// SIG undefined FUN_14412e486(void)

void FUN_14412e486(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96cbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cb80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14412e4ec FUN_14412e4ec body=134 status=ok
// SIG undefined FUN_14412e4ec(void)

void FUN_14412e4ec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96cbf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96cb80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014412e563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412e572 FUN_14412e572 body=77 status=ok
// SIG undefined FUN_14412e572(void)

void FUN_14412e572(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  FUN_14412e6e2(param_1 + 0x20,&local_10,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412e5c0 FUN_14412e5c0 body=288 status=ok
// SIG undefined FUN_14412e5c0(void)

undefined8 FUN_14412e5c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_2c = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412e6da;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412e6da;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14412e6da:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412e68e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412e6e2(param_1 + 0x20,&local_30,&local_2c);
      uVar6 = 1;
      goto LAB_14412e68e;
    }
  }
  uVar6 = 0;
LAB_14412e68e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412e6e2 FUN_14412e6e2 body=955 status=ok
// SIG undefined FUN_14412e6e2(void)

void FUN_14412e6e2(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_378 [32];
  undefined1 local_358 [4];
  undefined4 local_354;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) && (*(uint *)(puVar6 + 2) == param_1[1])) {
      uVar2 = *param_3;
      uVar1 = *param_2;
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
          plVar8 = (longlong *)*puVar6;
        }
        else {
          plVar8 = (longlong *)0x0;
        }
        lVar5 = (**(code **)(*plVar8 + 0x5d8))();
        local_354 = 0xbf800000;
        local_350 = 0;
        local_348 = 0;
        uStack_340 = 0;
        local_338 = 0;
        local_2d0 = 0;
        local_2c8 = 0x200000000;
        local_330 = 0;
        uStack_328 = 0;
        local_320 = 0;
        uStack_318 = 0;
        local_310 = 0;
        uStack_308 = 0;
        FUN_1405c5fa2();
        local_2b8 = &DAT_14cb769e8;
        local_2b0 = 0;
        uStack_2a8 = 0;
        local_2c0 = &PTR_FUN_14b0394b0;
        local_2a0 = 0;
        uStack_298 = 0;
        local_290 = 0;
        local_288 = 0;
        uStack_280 = 0;
        local_278 = 0;
        uStack_270 = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_258 = 0;
        local_254 = 0;
        uStack_24c = 0;
        local_244 = 0;
        uStack_23c = 0;
        local_234 = 0;
        uStack_22c = 0;
        local_224 = 0;
        local_218 = FUN_140938dea();
        local_210 = 0xffffffff;
        local_1a8 = 0;
        local_1a0 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_19c = 0xffffffff00000080;
        local_194 = 0;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        local_150 = 0xf;
        local_148 = 1;
        local_144 = 0;
        uStack_13c = 0;
        local_130 = 0x100000000;
        local_128 = 1;
        local_120 = 0;
        local_11c = 0;
        local_118 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_e4 = 0xffffffff00000080;
        local_dc = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_b4 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0x100000000;
        local_48 = 0;
        local_358[0] = (undefined1)param_1[2];
        uVar3 = param_1[1];
        if (((uVar3 != 0) && (uVar4 = *param_1, -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) {
          lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          if ((((lVar9 != 0) && (*(uint *)(lVar9 + 0x10) == uVar3)) && (lVar5 != 0)) &&
             ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
            local_c0 = (ulonglong)uVar1;
            local_50 = CONCAT44(1,uVar2);
            if (0 < (int)uVar1) {
              local_130 = (ulonglong)uVar1 << 0x20;
              puVar6 = (undefined8 *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
              if (((puVar6 == (undefined8 *)0x0) || (*(uint *)(puVar6 + 2) != uVar3)) ||
                 ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) {
                uVar7 = 0;
              }
              else {
                uVar7 = *puVar6;
              }
              FUN_1408964e4(uVar7,local_358);
            }
          }
        }
        FUN_140d17bd8(local_358);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412ea9e FUN_14412ea9e body=29 status=ok
// SIG undefined FUN_14412ea9e(void)

undefined8 FUN_14412ea9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412ec3a FUN_14412ec3a body=101 status=ok
// SIG undefined FUN_14412ec3a(void)

void FUN_14412ec3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14412eca0 FUN_14412eca0 body=101 status=ok
// SIG undefined FUN_14412eca0(void)

void FUN_14412eca0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14412ed06 FUN_14412ed06 body=134 status=ok
// SIG undefined FUN_14412ed06(void)

void FUN_14412ed06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96cc60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014412ed7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412ed96 FUN_14412ed96 body=269 status=ok
// SIG undefined FUN_14412ed96(void)

undefined8 FUN_14412ed96(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412ee9d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412ee9d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14412ee9d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412ee51;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412eea4(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14412ee51;
    }
  }
  uVar6 = 0;
LAB_14412ee51:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412eea4 FUN_14412eea4 body=1015 status=ok
// SIG undefined FUN_14412eea4(void)

void FUN_14412eea4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_388 [32];
  undefined1 local_368 [4];
  undefined4 local_364;
  undefined1 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined **local_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  undefined2 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0 &&
          (*(uint *)(lVar6 + 0x10) == param_1[1])) &&
         (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 && (DAT_14c872bd8 == '\0')))))) {
    local_364 = 0xbf800000;
    lVar6 = 0;
    local_360 = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_348 = 0;
    local_2e0 = 0;
    local_2d8 = 0x200000000;
    local_340 = 0;
    uStack_338 = 0;
    local_330 = 0;
    uStack_328 = 0;
    local_320 = 0;
    uStack_318 = 0;
    FUN_1405c5fa2();
    local_2c8 = &DAT_14cb769e8;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2d0 = &PTR_FUN_14b0394b0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2a0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    local_264 = 0;
    uStack_25c = 0;
    local_254 = 0;
    uStack_24c = 0;
    local_244 = 0;
    uStack_23c = 0;
    local_234 = 0;
    local_228 = FUN_140938dea();
    local_220 = 0xffffffff;
    local_1b8 = 0;
    local_1b0 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1ac = 0xffffffff00000080;
    local_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0xf;
    local_158 = 1;
    local_154 = 0;
    uStack_14c = 0;
    local_140 = 0x100000000;
    local_138 = 1;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_f4 = 0xffffffff00000080;
    local_ec = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_c4 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0x100000000;
    local_58 = 0;
    local_368[0] = (undefined1)param_1[2];
    if (param_1[1] != 0) {
      uVar1 = *param_1;
      lVar6 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar7 == (longlong *)0x0) ||
           ((*(uint *)(plVar7 + 2) != param_1[1] || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) {
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar7;
        }
      }
    }
    lVar3 = FUN_1407e8892();
    iVar2 = *(int *)(lVar6 + 0x60c8);
    if ((longlong)iVar2 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x60c0);
      lVar8 = 0;
      do {
        if (*(int *)(lVar3 + 0x128) <= (int)(uint)*(byte *)(lVar6 + 0x28 + lVar8)) {
          local_d0 = local_d0 & 0xffffffff;
          if ((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) {
LAB_14412f254:
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            if ((int)uVar1 < DAT_14c9647dc) {
              puVar5 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if (((puVar5 == (undefined8 *)0x0) || (*(uint *)(puVar5 + 2) != param_1[1])) ||
                 ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_14412f254;
              uVar4 = *puVar5;
            }
          }
          FUN_1408964e4(uVar4,local_368);
        }
        lVar8 = lVar8 + 0x30;
      } while ((longlong)iVar2 * 0x30 != lVar8);
    }
    FUN_140d17bd8(local_368);
  }
  if ((local_50 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14412f29c FUN_14412f29c body=29 status=ok
// SIG undefined FUN_14412f29c(void)

undefined8 FUN_14412f29c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14412f438 FUN_14412f438 body=99 status=ok
// SIG undefined FUN_14412f438(void)

void FUN_14412f438(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ec30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96ccd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412f49c FUN_14412f49c body=99 status=ok
// SIG undefined FUN_14412f49c(void)

void FUN_14412f49c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ec30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96ccd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14412f500 FUN_14412f500 body=132 status=ok
// SIG undefined FUN_14412f500(void)

void FUN_14412f500(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96ec30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96ccd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014412f575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14412f58e FUN_14412f58e body=269 status=ok
// SIG undefined FUN_14412f58e(void)

undefined8 FUN_14412f58e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14412f695;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14412f695;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14412f695:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14412f649;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14412f69c(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14412f649;
    }
  }
  uVar6 = 0;
LAB_14412f649:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412f69c FUN_14412f69c body=2256 status=ok
// SIG undefined FUN_14412f69c(void)

void FUN_14412f69c(uint *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_3b8 [40];
  longlong local_390;
  longlong local_388;
  undefined8 uStack_380;
  undefined1 local_378 [4];
  undefined4 local_374;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
  goto LAB_14412ff2f;
  lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (((lVar11 == 0) || (*(uint *)(lVar11 + 0x10) != param_1[1])) ||
     (((*(uint *)(lVar11 + 8) & 0x10200000) != 0 || (DAT_14c872bd8 != '\0')))) goto LAB_14412ff2f;
  local_374 = 0xbf800000;
  uVar8 = 0;
  local_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_2f0 = 0;
  local_2e8 = 0x200000000;
  local_350 = 0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  FUN_1405c5fa2();
  local_2d8 = &DAT_14cb769e8;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = &PTR_FUN_14b0394b0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  local_274 = 0;
  uStack_26c = 0;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  local_238 = FUN_140938dea();
  local_230 = 0xffffffff;
  local_1c8 = 0;
  local_1c0 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
  local_168 = 1;
  local_164 = 0;
  uStack_15c = 0;
  local_150 = 0x100000000;
  local_148 = 1;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d4 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x100000000;
  local_68 = 0;
  local_378[0] = (undefined1)param_1[2];
  if (param_1[1] != 0) {
    uVar3 = *param_1;
    uVar8 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar12 + 2) != param_1[1] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar12;
      }
    }
  }
  lVar11 = FUN_1407afa82(uVar8);
  if (param_1[1] == 0) {
LAB_14412fee9:
    lVar4 = 0;
  }
  else {
    uVar3 = *param_1;
    lVar4 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         ((*(uint *)(plVar13 + 2) != param_1[1] || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
      goto LAB_14412fee9;
      lVar4 = *plVar13;
    }
  }
  uVar3 = FUN_1403ae46b();
  if ((((int)uVar3 < 0) || (*(int *)(lVar4 + 0x78f0) <= (int)uVar3)) ||
     (lVar4 = (ulonglong)uVar3 * 0x48 + *(longlong *)(lVar4 + 0x78e8), lVar4 == 0)) {
LAB_14412fa4f:
    local_390 = 0;
  }
  else {
    if (*(longlong **)(lVar4 + 0x28) == (longlong *)0x0 || *(longlong *)(lVar4 + 0x20) == 0)
    goto LAB_14412fa4f;
    local_390 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))();
  }
  if (param_1[1] == 0) {
LAB_14412fef0:
    uVar8 = 0;
  }
  else {
    uVar3 = *param_1;
    uVar8 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar12 + 2) != param_1[1] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0))))
      goto LAB_14412fef0;
      uVar8 = *puVar12;
    }
  }
  lVar4 = FUN_14018ffce(uVar8);
  if (param_1[1] == 0) {
LAB_14412fef7:
    lVar5 = 0;
  }
  else {
    uVar3 = *param_1;
    lVar5 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         ((*(uint *)(plVar13 + 2) != param_1[1] || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
      goto LAB_14412fef7;
      lVar5 = *plVar13;
    }
  }
  uVar3 = FUN_1415ef101();
  if ((((int)uVar3 < 0) || (*(int *)(lVar5 + 0x78f0) <= (int)uVar3)) ||
     (lVar5 = (ulonglong)uVar3 * 0x48 + *(longlong *)(lVar5 + 0x78e8), lVar5 == 0)) {
LAB_14412fb4d:
    lVar5 = 0;
  }
  else {
    if (*(longlong **)(lVar5 + 0x28) == (longlong *)0x0 || *(longlong *)(lVar5 + 0x20) == 0)
    goto LAB_14412fb4d;
    lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x28) + 8))();
  }
  if (param_1[1] == 0) {
LAB_14412fefe:
    lVar6 = 0;
  }
  else {
    uVar3 = *param_1;
    lVar6 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         ((*(uint *)(plVar13 + 2) != param_1[1] || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
      goto LAB_14412fefe;
      lVar6 = *plVar13;
    }
  }
  uVar3 = FUN_141526213();
  if ((((int)uVar3 < 0) || (*(int *)(lVar6 + 0x78f0) <= (int)uVar3)) ||
     (lVar6 = (ulonglong)uVar3 * 0x48 + *(longlong *)(lVar6 + 0x78e8), lVar6 == 0)) {
LAB_14412fbe8:
    lVar6 = 0;
  }
  else {
    if (*(longlong **)(lVar6 + 0x28) == (longlong *)0x0 || *(longlong *)(lVar6 + 0x20) == 0)
    goto LAB_14412fbe8;
    lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x28) + 8))();
  }
  if (((lVar11 != 0) && (local_390 != 0)) && ((lVar4 != 0 && ((lVar5 != 0 && (lVar6 != 0)))))) {
    lVar7 = FUN_1407e8892();
    lVar9 = *(longlong *)(lVar7 + 0x88);
    if (lVar9 == 0) {
      uVar8 = FUN_141227ea0();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(lVar7 + 0x88) = lVar9;
    }
    plVar13 = (longlong *)(lVar7 + 0x80);
    lVar10 = *(longlong *)(lVar7 + 0x90);
    if (lVar10 == 0) {
      if ((lVar9 != 0) && (*plVar13 != 0)) {
        plVar1 = *(longlong **)(lVar9 + 0xb8);
        if (plVar1 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 != '\0') {
            uVar8 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar10 = FUN_144aff482(uVar8,plVar13);
            *(longlong *)(lVar7 + 0x90) = lVar10;
            if (lVar10 != 0) {
              lVar9 = *(longlong *)(lVar7 + 0x88);
              goto LAB_14412fc68;
            }
            goto LAB_14412ff25;
          }
        }
        *(undefined8 *)(lVar7 + 0x90) = 0;
      }
    }
    else {
LAB_14412fc68:
      if (lVar9 == 0) {
        uVar8 = FUN_141227ea0();
        lVar9 = FUN_14477b664(uVar8);
        *(longlong *)(lVar7 + 0x88) = lVar9;
        lVar10 = *(longlong *)(lVar7 + 0x90);
        if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*plVar13 != 0)) {
          plVar1 = *(longlong **)(lVar9 + 0xb8);
          if (plVar1 == (longlong *)0x0) {
LAB_14412ff65:
            lVar10 = 0;
          }
          else {
            cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
            if (cVar2 == '\0') goto LAB_14412ff65;
            uVar8 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar10 = FUN_144aff482(uVar8,plVar13);
          }
          *(longlong *)(lVar7 + 0x90) = lVar10;
        }
      }
      if ((((((*(longlong *)(lVar11 + 0x4e8) == 0) || (lVar10 == *(longlong *)(lVar11 + 0x4e8))) &&
            ((*(longlong *)(local_390 + 0x4e8) == 0 || (lVar10 == *(longlong *)(local_390 + 0x4e8)))
            )) && ((*(longlong *)(lVar4 + 0x4e8) == 0 || (lVar10 == *(longlong *)(lVar4 + 0x4e8)))))
          && ((*(longlong *)(lVar5 + 0x4e8) == 0 || (lVar10 == *(longlong *)(lVar5 + 0x4e8))))) &&
         ((*(longlong *)(lVar6 + 0x4e8) == 0 || (lVar10 == *(longlong *)(lVar6 + 0x4e8))))) {
        local_388 = 0;
        uStack_380 = 0;
        if (param_1[1] == 0) {
LAB_14412ff0c:
          uVar8 = 0;
        }
        else {
          uVar3 = *param_1;
          uVar8 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((puVar12 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar12 + 2) != param_1[1] ||
                ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_14412ff0c;
            uVar8 = *puVar12;
          }
        }
        FUN_145f8e47e(uVar8);
        if ((longlong)(int)uStack_380 != 0) {
          lVar11 = 0;
          uVar3 = 0;
          do {
            lVar4 = *(longlong *)(*(longlong *)(local_388 + lVar11) + 0x4e8);
            uVar3 = uVar3 + (lVar10 == lVar4 && lVar4 != 0);
            lVar11 = lVar11 + 8;
          } while ((longlong)(int)uStack_380 * 8 != lVar11);
          if (3 < uVar3) {
            local_e0 = CONCAT44(1,(undefined4)local_e0);
            if (param_1[1] == 0) {
LAB_14412ff13:
              uVar8 = 0;
            }
            else {
              uVar3 = *param_1;
              uVar8 = 0;
              if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
                puVar12 = (undefined8 *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                if ((puVar12 == (undefined8 *)0x0) ||
                   ((*(uint *)(puVar12 + 2) != param_1[1] ||
                    ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_14412ff13;
                uVar8 = *puVar12;
              }
            }
            FUN_1408964e4(uVar8,local_378);
          }
        }
        if (local_388 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_14412ff25:
  FUN_140d17bd8(local_378);
LAB_14412ff2f:
  if ((local_60 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14412ff6e FUN_14412ff6e body=29 status=ok
// SIG undefined FUN_14412ff6e(void)

undefined8 FUN_14412ff6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14413010a FUN_14413010a body=99 status=ok
// SIG undefined FUN_14413010a(void)

void FUN_14413010a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96cdb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cd40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14413016e FUN_14413016e body=99 status=ok
// SIG undefined FUN_14413016e(void)

void FUN_14413016e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96cdb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cd40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441301d2 FUN_1441301d2 body=132 status=ok
// SIG undefined FUN_1441301d2(void)

void FUN_1441301d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96cdb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96cd40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144130247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144130256 FUN_144130256 body=77 status=ok
// SIG undefined FUN_144130256(void)

void FUN_144130256(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1441303c6(param_1 + 0x20,&local_18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441302a4 FUN_1441302a4 body=289 status=ok
// SIG undefined FUN_1441302a4(void)

undefined8 FUN_1441302a4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  local_30 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441303bf;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441303bf;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441303bf:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144130373;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441303c6(param_1 + 0x20,&local_38,&local_30);
      uVar6 = 1;
      goto LAB_144130373;
    }
  }
  uVar6 = 0;
LAB_144130373:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441303c6 FUN_1441303c6 body=1098 status=ok
// SIG undefined FUN_1441303c6(void)

void FUN_1441303c6(uint *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_388 [40];
  undefined8 local_360;
  undefined1 local_358 [4];
  undefined4 local_354;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
  goto LAB_1441307b1;
  lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if ((lVar9 == 0) || (*(uint *)(lVar9 + 0x10) != param_1[1])) goto LAB_1441307b1;
  lVar2 = *param_3;
  lVar6 = *param_2;
  if ((lVar2 == 0) || ((lVar6 == 0 || ((*(uint *)(lVar9 + 8) & 0x10200000) != 0))))
  goto LAB_1441307b1;
  local_354 = 0xbf800000;
  local_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  local_2d0 = 0;
  local_2c8 = 0x200000000;
  local_330 = 0;
  uStack_328 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_310 = 0;
  uStack_308 = 0;
  FUN_1405c5fa2();
  local_2b8 = &DAT_14cb769e8;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2c0 = &PTR_FUN_14b0394b0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  uStack_23c = 0;
  local_234 = 0;
  uStack_22c = 0;
  local_224 = 0;
  local_218 = FUN_140938dea();
  local_210 = 0xffffffff;
  local_1a8 = 0;
  local_1a0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0xf;
  local_148 = 1;
  local_144 = 0;
  uStack_13c = 0;
  local_130 = 0x100000000;
  local_128 = 1;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x100000000;
  local_48 = 0;
  local_358[0] = (undefined1)param_1[2];
  lVar9 = *(longlong *)(lVar6 + 0x28c0);
  if (lVar9 != 0) {
    if (param_1[1] == 0) {
LAB_1441307e0:
      lVar6 = 0;
    }
    else {
      uVar1 = *param_1;
      lVar6 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar7 == (longlong *)0x0) ||
           ((*(uint *)(plVar7 + 2) != param_1[1] || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
        goto LAB_1441307e0;
        lVar6 = *plVar7;
      }
    }
    if (lVar6 == lVar2) {
      puVar3 = *(undefined4 **)(lVar9 + 8);
      puVar8 = &DAT_14c9485f0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar8 = puVar3;
      }
      if (DAT_14c947fe0 == 0) {
        lVar9 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar9);
        DAT_14c947fe0 = lVar9;
      }
      FUN_140045924(DAT_14c947fe0,&local_360,puVar8,1);
      uStack_78 = local_360;
      if (param_1[1] == 0) {
LAB_1441307e7:
        uVar4 = 0;
      }
      else {
        uVar1 = *param_1;
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar5 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
          goto LAB_1441307e7;
          uVar4 = *puVar5;
        }
      }
      FUN_1408964e4(uVar4,local_358);
    }
  }
  FUN_140d17bd8(local_358);
LAB_1441307b1:
  if ((local_40 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144130812 FUN_144130812 body=29 status=ok
// SIG undefined FUN_144130812(void)

undefined8 FUN_144130812(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441309ae FUN_1441309ae body=99 status=ok
// SIG undefined FUN_1441309ae(void)

void FUN_1441309ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b421670;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96ce20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144130a12 FUN_144130a12 body=99 status=ok
// SIG undefined FUN_144130a12(void)

void FUN_144130a12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b421670;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96ce20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144130a76 FUN_144130a76 body=132 status=ok
// SIG undefined FUN_144130a76(void)

void FUN_144130a76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b421670;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96ce20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144130aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144130b06 FUN_144130b06 body=278 status=ok
// SIG undefined FUN_144130b06(void)

undefined8 FUN_144130b06(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144130c16;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144130c16;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144130c16:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144130bc9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144130c1e(param_1 + 0x20,param_3);
      uVar6 = 1;
      goto LAB_144130bc9;
    }
  }
  uVar6 = 0;
LAB_144130bc9:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144130c1e FUN_144130c1e body=1339 status=ok
// SIG undefined FUN_144130c1e(void)

void FUN_144130c1e(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_398 [40];
  longlong local_370;
  undefined1 local_368 [4];
  undefined4 local_364;
  undefined1 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined **local_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar10 == 0 ||
          (*(uint *)(lVar10 + 0x10) != param_1[1])))) || ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)
     ) goto LAB_144131114;
  local_364 = 0xbf800000;
  local_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  local_2e0 = 0;
  local_2d8 = 0x200000000;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  local_320 = 0;
  uStack_318 = 0;
  FUN_1405c5fa2();
  local_2c8 = &DAT_14cb769e8;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2d0 = &PTR_FUN_14b0394b0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  uStack_23c = 0;
  local_234 = 0;
  local_228 = FUN_140938dea();
  local_220 = 0xffffffff;
  local_1b8 = 0;
  local_1b0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1ac = 0xffffffff00000080;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0xf;
  local_158 = 1;
  local_154 = 0;
  uStack_14c = 0;
  local_140 = 0x100000000;
  local_138 = 1;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_f4 = 0xffffffff00000080;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c4 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0x100000000;
  local_58 = 0;
  local_368[0] = 0x14;
  lVar10 = FUN_1407e8892();
  lVar5 = FUN_140a489cc(param_2);
  if (lVar5 != 0) {
    piVar6 = &DAT_14c9485f0;
    if (*(int **)(lVar5 + 8) != (int *)0x0) {
      piVar6 = *(int **)(lVar5 + 8);
    }
    if (*piVar6 == DAT_14cbc9490) {
      if ((longlong)*(int *)(param_2 + 0x150) != 0) {
        lVar5 = *(longlong *)(param_2 + 0x148);
        lVar13 = (longlong)*(int *)(param_2 + 0x150) * 0x88;
        iVar11 = 0;
        do {
          iVar2 = *(int *)(lVar5 + 0x68);
          iVar4 = FUN_1413d6430(lVar5);
          iVar11 = iVar11 + (uint)(iVar2 <= iVar4);
          lVar5 = lVar5 + 0x88;
          lVar13 = lVar13 + -0x88;
        } while (lVar13 != 0);
        if (iVar11 != 0) {
          local_80 = CONCAT44(local_80._4_4_,2);
          if (param_1[1] == 0) {
LAB_144131148:
            uVar7 = 0;
          }
          else {
            uVar1 = *param_1;
            uVar7 = 0;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((puVar8 == (undefined8 *)0x0) ||
                 ((*(uint *)(puVar8 + 2) != param_1[1] ||
                  ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144131148;
              uVar7 = *puVar8;
            }
          }
          FUN_1408964e4(uVar7,local_368);
          if (iVar11 == *(int *)(param_2 + 0x150)) {
            local_80 = CONCAT44(local_80._4_4_,3);
            if (param_1[1] == 0) {
LAB_14413114f:
              uVar7 = 0;
            }
            else {
              uVar1 = *param_1;
              uVar7 = 0;
              if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                puVar8 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((puVar8 == (undefined8 *)0x0) ||
                   ((*(uint *)(puVar8 + 2) != param_1[1] ||
                    ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_14413114f;
                uVar7 = *puVar8;
              }
            }
            FUN_1408964e4(uVar7,local_368);
          }
        }
      }
      if ((longlong)*(int *)(param_2 + 0x140) != 0) {
        plVar9 = (longlong *)(*(longlong *)(param_2 + 0x138) + 0x48);
        lVar5 = (longlong)*(int *)(param_2 + 0x140) * 0xa8;
        do {
          if ((longlong *)plVar9[1] == (longlong *)0x0) {
            local_370 = 0;
          }
          else {
            local_370 = *(longlong *)plVar9[1];
          }
          plVar12 = &local_370;
          if (local_370 == 0) {
            plVar12 = plVar9;
          }
          if (*plVar12 == *(longlong *)(lVar10 + 0x60)) {
            cVar3 = FUN_1410862f0(plVar9 + -9);
            if (cVar3 != '\0') {
              local_80 = CONCAT44(local_80._4_4_,1);
              if (param_1[1] == 0) {
LAB_144131156:
                uVar7 = 0;
              }
              else {
                uVar1 = *param_1;
                uVar7 = 0;
                if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                  puVar8 = (undefined8 *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                  if ((puVar8 == (undefined8 *)0x0) ||
                     ((*(uint *)(puVar8 + 2) != param_1[1] ||
                      ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144131156;
                  uVar7 = *puVar8;
                }
              }
              FUN_1408964e4(uVar7,local_368);
            }
            break;
          }
          plVar9 = plVar9 + 0x15;
          lVar5 = lVar5 + -0xa8;
        } while (lVar5 != 0);
      }
    }
  }
  FUN_140d17bd8(local_368);
LAB_144131114:
  if ((local_50 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14413115a FUN_14413115a body=29 status=ok
// SIG undefined FUN_14413115a(void)

undefined8 FUN_14413115a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441312f6 FUN_1441312f6 body=99 status=ok
// SIG undefined FUN_1441312f6(void)

void FUN_1441312f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96cf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96ce90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14413135a FUN_14413135a body=99 status=ok
// SIG undefined FUN_14413135a(void)

void FUN_14413135a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96cf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96ce90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441313be FUN_1441313be body=132 status=ok
// SIG undefined FUN_1441313be(void)

void FUN_1441313be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96cf00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96ce90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144131433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144131442 FUN_144131442 body=65 status=ok
// SIG undefined FUN_144131442(void)

void FUN_144131442(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_14413159c(param_1 + 0x20,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144131484 FUN_144131484 body=278 status=ok
// SIG undefined FUN_144131484(void)

undefined8 FUN_144131484(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144131594;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144131594;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144131594:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144131548;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14413159c(param_1 + 0x20,&local_2c);
      uVar6 = 1;
      goto LAB_144131548;
    }
  }
  uVar6 = 0;
LAB_144131548:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413159c FUN_14413159c body=836 status=ok
// SIG undefined FUN_14413159c(void)

void FUN_14413159c(uint *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_368 [32];
  undefined1 local_348 [4];
  undefined4 local_344;
  undefined1 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined **local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined2 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      local_344 = 0xbf800000;
      uVar4 = 0;
      local_340 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_328 = 0;
      local_2c0 = 0;
      local_2b8 = 0x200000000;
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      FUN_1405c5fa2();
      local_2a8 = &DAT_14cb769e8;
      local_2a0 = 0;
      uStack_298 = 0;
      local_2b0 = &PTR_FUN_14b0394b0;
      local_290 = 0;
      uStack_288 = 0;
      local_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      local_244 = 0;
      uStack_23c = 0;
      local_234 = 0;
      uStack_22c = 0;
      local_224 = 0;
      uStack_21c = 0;
      local_214 = 0;
      local_208 = FUN_140938dea();
      local_200 = 0xffffffff;
      local_198 = 0;
      local_190 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_18c = 0xffffffff00000080;
      local_184 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      local_140 = 0xf;
      local_138 = 1;
      local_134 = 0;
      uStack_12c = 0;
      local_120 = 0x100000000;
      local_118 = 1;
      local_110 = 0;
      local_10c = 0;
      local_108 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_d4 = 0xffffffff00000080;
      local_cc = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_a4 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0x100000000;
      local_38 = 0;
      local_348[0] = (undefined1)param_1[2];
      local_60 = (ulonglong)*param_2 << 0x20;
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar3 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
          {
            uVar4 = 0;
          }
          else {
            uVar4 = *puVar3;
          }
        }
      }
      FUN_1408964e4(uVar4,local_348);
      FUN_140d17bd8(local_348);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441318e2 FUN_1441318e2 body=29 status=ok
// SIG undefined FUN_1441318e2(void)

undefined8 FUN_1441318e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


