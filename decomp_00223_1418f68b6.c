// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1418f68b6 FUN_1418f68b6 body=583 status=ok
// SIG undefined FUN_1418f68b6(void)

void FUN_1418f68b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
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
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_14026506e();
  if (lVar5 == 0) goto LAB_1418f69e5;
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
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_1418f69e5;
  if (0 < *(int *)(lVar5 + 0x6190)) {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x6188) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
      FUN_1456cec3c(lVar5);
    }
    else if (lVar5 == 0) goto LAB_1418f69e5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  }
  FUN_1449027d0(param_1 + -0x30,&local_30);
  pcVar3 = *(char **)local_30;
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x70));
  *(int *)(pcVar3 + 0x68) = *(int *)(pcVar3 + 0x68) + 1;
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
  if (*pcVar3 == '\0') {
    if (*(int *)(pcVar3 + 4) == 0) {
      iVar4 = 1;
      goto LAB_1418f6a0f;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 4) + 1;
LAB_1418f6a0f:
    *pcVar3 = '\0';
    *(int *)(pcVar3 + 4) = iVar4;
  }
  if (pcVar3[0x28] == '\0') {
    if (*(int *)(pcVar3 + 0x2c) == 0) {
      iVar4 = 1;
      goto LAB_1418f6a1c;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x2c) + 1;
LAB_1418f6a1c:
    pcVar3[0x28] = '\0';
    *(int *)(pcVar3 + 0x2c) = iVar4;
  }
  if (pcVar3[0x48] == '\0') {
    if (*(int *)(pcVar3 + 0x4c) == 0) {
      iVar4 = 1;
      goto LAB_1418f6a2a;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x4c) + 1;
LAB_1418f6a2a:
    pcVar3[0x48] = '\0';
    *(int *)(pcVar3 + 0x4c) = iVar4;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x70));
LAB_1418f69e5:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f6b14 FUN_1418f6b14 body=299 status=ok
// SIG undefined FUN_1418f6b14(void)

undefined8 FUN_1418f6b14(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (*(longlong **)(param_2 + 0x3f70) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_2 + 0x3f70) + 0x80))();
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f6c50 FUN_1418f6c50 body=295 status=ok
// SIG undefined FUN_1418f6c50(void)

undefined8 FUN_1418f6c50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      lVar2 = (**(code **)(*plVar1 + 0x5f8))(plVar1);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f6d88 FUN_1418f6d88 body=311 status=ok
// SIG undefined FUN_1418f6d88(void)

ulonglong FUN_1418f6d88(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar5;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  local_24 = (uint)uVar3;
  uVar5 = *param_1;
  uVar2 = param_1[1];
  if ((uVar5 == local_28) && (uVar2 == local_24)) {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else if (((uVar2 == 0) ||
           ((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
            (lVar4 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar4 == 0))))
          || ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) {
    uVar3 = FUN_144729dda(&local_28);
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1418f6ec0 FUN_1418f6ec0 body=179 status=ok
// SIG undefined FUN_1418f6ec0(void)

void FUN_1418f6ec0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = (ulonglong)*(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    if (0 < (int)*(uint *)(param_1 + 1)) {
      lVar4 = uVar3 * 0x1b8 + -0xe8;
      do {
        if (*(longlong *)(*param_1 + lVar4) != 0) {
          cVar2 = FUN_14118a1ae(*param_1 + lVar4,local_38);
          if (cVar2 == '\0') {
            FUN_148e41d12(param_1,(int)uVar3 + -1);
            FUN_148e41d82(param_1);
          }
        }
        lVar4 = lVar4 + -0x1b8;
        bVar1 = 1 < uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar1);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f6f74 FUN_1418f6f74 body=392 status=ok
// SIG undefined FUN_1418f6f74(void)

ulonglong FUN_1418f6f74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
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
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1400d7050();
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar3 = FUN_140e06fb1(lVar3);
      if (lVar3 != 0) {
        FUN_1405f62be(lVar3,&local_28);
        if (local_28 == (code *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(int *)(param_1 + 0x14) != 0);
        }
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)local_20 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_20 + 0x10))(local_20);
            }
          }
        }
        goto LAB_1418f7009;
      }
    }
  }
  uVar4 = 0;
LAB_1418f7009:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f70fe FUN_1418f70fe body=293 status=ok
// SIG undefined FUN_1418f70fe(void)

undefined8 * FUN_1418f70fe(undefined8 *param_1,undefined8 *param_2)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_14b9a7070;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined8 *)((longlong)param_1 + 0x5c) = *param_2;
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 1);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_1400b22c2(param_1 + 0x14,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x16) = 8;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  return param_1;
}



// FUNCTION 1418f7224 FUN_1418f7224 body=239 status=ok
// SIG undefined FUN_1418f7224(void)

undefined8 * FUN_1418f7224(undefined8 *param_1,undefined8 *param_2)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_14b9b0a08;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = *param_2;
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffffffffffff;
  FUN_140056680(param_1 + 0xf,&DAT_149dfb77a);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 1418f7314 FUN_1418f7314 body=101 status=ok
// SIG undefined FUN_1418f7314(void)

void FUN_1418f7314(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f737a FUN_1418f737a body=101 status=ok
// SIG undefined FUN_1418f737a(void)

void FUN_1418f737a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad8a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f73e0 FUN_1418f73e0 body=248 status=ok
// SIG undefined FUN_1418f73e0(void)

void FUN_1418f73e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418f74da FUN_1418f74da body=201 status=ok
// SIG undefined FUN_1418f74da(void)

void FUN_1418f74da(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x20;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[((longlong)param_2 & 0x7ffffffffffffffU) * 2]
                        ];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1418f75a4 FUN_1418f75a4 body=101 status=ok
// SIG undefined FUN_1418f75a4(void)

void FUN_1418f75a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ae2d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f760a FUN_1418f760a body=101 status=ok
// SIG undefined FUN_1418f760a(void)

void FUN_1418f760a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ae950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f7670 FUN_1418f7670 body=101 status=ok
// SIG undefined FUN_1418f7670(void)

void FUN_1418f7670(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f76d6 FUN_1418f76d6 body=101 status=ok
// SIG undefined FUN_1418f76d6(void)

void FUN_1418f76d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9af280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f773c FUN_1418f773c body=101 status=ok
// SIG undefined FUN_1418f773c(void)

void FUN_1418f773c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9afbd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f77a1 FUN_1418f77a1 body=215 status=ok
// SIG undefined FUN_1418f77a1(void)

void FUN_1418f77a1(undefined8 *param_1)

{
  longlong *plVar1;
  
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
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 1418f7878 FUN_1418f7878 body=255 status=ok
// SIG undefined FUN_1418f7878(void)

void FUN_1418f7878(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418f7978 FUN_1418f7978 body=101 status=ok
// SIG undefined FUN_1418f7978(void)

void FUN_1418f7978(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9afcb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f79de FUN_1418f79de body=101 status=ok
// SIG undefined FUN_1418f79de(void)

void FUN_1418f79de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9aff50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f7a44 FUN_1418f7a44 body=29 status=ok
// SIG undefined FUN_1418f7a44(void)

undefined8 FUN_1418f7a44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f7a62 FUN_1418f7a62 body=29 status=ok
// SIG undefined FUN_1418f7a62(void)

undefined8 FUN_1418f7a62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f7a80 FUN_1418f7a80 body=345 status=ok
// SIG undefined FUN_1418f7a80(void)

undefined4 * FUN_1418f7a80(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140e73ce4(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_40[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  *(undefined8 *)(local_40 + 3) = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  if (local_40[2] == 0) {
    uVar5 = *local_40;
  }
  else {
    uVar5 = FUN_144a78877(*local_40,local_40[2]);
  }
  local_58 = 0;
  cVar3 = FUN_140e73c68(param_1,uVar5,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar4 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[6] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[5] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_140e73edc(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418f7bda FUN_1418f7bda body=29 status=ok
// SIG undefined FUN_1418f7bda(void)

undefined8 FUN_1418f7bda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418f7bf8 FUN_1418f7bf8 body=101 status=ok
// SIG undefined FUN_1418f7bf8(void)

void FUN_1418f7bf8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b0180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f7c5e FUN_1418f7c5e body=320 status=ok
// SIG undefined FUN_1418f7c5e(void)

ulonglong FUN_1418f7c5e(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      param_2 = DAT_14c9647c8;
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        param_2 = 0x23d;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar6;
      }
    }
  }
  uVar6 = *param_1;
  uVar1 = param_1[1];
  local_24 = uVar3;
  if ((uVar6 != local_28) || (uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1), uVar1 != uVar3))
  {
    if (((uVar1 == 0) ||
        ((((int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
         (lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar5 == 0)))) ||
       ((*(uint *)(lVar5 + 0x10) != uVar1 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
      uVar3 = FUN_144729dda(&local_28);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1418f7da0 FUN_1418f7da0 body=254 status=ok
// SIG undefined FUN_1418f7da0(void)

void FUN_1418f7da0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = param_2;
  FUN_1449027d0(param_1,&local_40);
  lVar2 = *(longlong *)(local_40 + 0x140);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
  *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar3 = FUN_148e1d29e(lVar2,&local_2c);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x94) == '\x01')) {
      plVar4 = (longlong *)FUN_1400d7050(param_1 + 0x30);
      if ((plVar4 != (longlong *)0x0) && (*(char *)(param_1 + 0x49) == '\x01')) {
        (**(code **)(*plVar4 + 0x308))(plVar4,plVar4);
      }
      *(undefined2 *)(param_1 + 0x48) = 0;
    }
  }
  FUN_140e8d7da(lVar2,&local_2c);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f7ea0 FUN_1418f7ea0 body=23 status=ok
// SIG undefined FUN_1418f7ea0(void)

undefined8 FUN_1418f7ea0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x180))(param_2);
  return 1;
}



// FUNCTION 1418f7eb8 FUN_1418f7eb8 body=101 status=ok
// SIG undefined FUN_1418f7eb8(void)

void FUN_1418f7eb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b33f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f7f1e FUN_1418f7f1e body=628 status=ok
// SIG undefined FUN_1418f7f1e(void)

void FUN_1418f7f1e(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar3 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar13;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar14 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_78 = plVar13;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar5 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar9 = local_60;
    plVar13 = local_78;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x1d0);
        iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar11 * 0x1d0);
        local_70 = uVar5;
        if (iVar4 == 0) {
          iVar4 = *piVar1;
        }
        else {
          iVar4 = FUN_144a78877(*piVar1,iVar4);
          plVar13 = local_78;
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        piVar1[0x73] = iVar4;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        piVar1[0x72] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar8 = (longlong *)plVar9[2];
        if ((longlong *)plVar9[2] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar4 = (int)plVar9[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar3 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar14;
        uVar5 = local_70;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar6 <= iVar11) break;
          lVar10 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar3 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar12 == lVar10) goto LAB_1418f8114;
          }
          uVar5 = (ulonglong)(iVar11 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar4);
    }
  }
LAB_1418f8114:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f8194 FUN_1418f8194 body=311 status=ok
// SIG undefined FUN_1418f8194(void)

undefined8 FUN_1418f8194(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1418f82c4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1418f82c4;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1418f82c4:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418f826d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1418f826d;
    }
  }
  uVar6 = 0;
LAB_1418f826d:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f82cc FUN_1418f82cc body=101 status=ok
// SIG undefined FUN_1418f82cc(void)

void FUN_1418f82cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3930;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f8332 FUN_1418f8332 body=101 status=ok
// SIG undefined FUN_1418f8332(void)

void FUN_1418f8332(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b3af0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f8398 FUN_1418f8398 body=101 status=ok
// SIG undefined FUN_1418f8398(void)

void FUN_1418f8398(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f83fe FUN_1418f83fe body=101 status=ok
// SIG undefined FUN_1418f83fe(void)

void FUN_1418f83fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b4d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f8464 FUN_1418f8464 body=101 status=ok
// SIG undefined FUN_1418f8464(void)

void FUN_1418f8464(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b5460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f84ca FUN_1418f84ca body=101 status=ok
// SIG undefined FUN_1418f84ca(void)

void FUN_1418f84ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b5b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f8530 FUN_1418f8530 body=648 status=ok
// SIG undefined FUN_1418f8530(void)

void FUN_1418f8530(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  longlong local_50;
  longlong *local_48;
  code *local_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_1400d7050(param_1 + -8);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_40;
      local_40 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (plVar3 = *(longlong **)(lVar5 + 0x2500), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x730))(plVar3,&local_40);
      FUN_1449027d0(param_1 + -0x38,&local_50);
      lVar4 = *(longlong *)(local_50 + 0x50);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x200));
      *(int *)(lVar4 + 0x1f8) = *(int *)(lVar4 + 0x1f8) + 1;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_48 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      if (*(longlong *)(lVar5 + 0x2210) == 0) {
        bVar7 = false;
      }
      else {
        bVar7 = *(char *)(*(longlong *)(lVar5 + 0x2210) + 0x7e) == '\x02';
      }
      lVar5 = *(longlong *)(lVar4 + 0x30);
      *(int *)(lVar4 + 0x40) = *(int *)(lVar4 + 0x40) + 2;
      iVar2 = *(int *)(lVar4 + 0x38);
      if ((longlong)iVar2 != 0) {
        lVar6 = 0;
        do {
          *(bool *)(lVar5 + 0x81 + lVar6) = bVar7;
          *(undefined1 *)(lVar5 + 0x83 + lVar6) = 1;
          dVar8 = *(double *)(lVar5 + 0x18 + lVar6) - (double)local_40;
          dVar9 = *(double *)(lVar5 + 0x20 + lVar6) - local_38;
          dVar8 = SQRT(dVar9 * dVar9 + dVar8 * dVar8) / 100.0;
          *(float *)(lVar5 + 0x58 + lVar6) =
               (float)(int)((ulonglong)(longlong)ROUND(dVar8 + dVar8 + 0.5) >> 1);
          lVar6 = lVar6 + 0xb8;
        } while ((longlong)iVar2 * 0xb8 - lVar6 != 0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x200));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f87ba FUN_1418f87ba body=58 status=ok
// SIG undefined FUN_1418f87ba(void)

void FUN_1418f87ba(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140dca418(*(longlong *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418f87f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418f87f4 FUN_1418f87f4 body=58 status=ok
// SIG undefined FUN_1418f87f4(void)

void FUN_1418f87f4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140bf9354(*(longlong *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418f882a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418f882e FUN_1418f882e body=128 status=ok
// SIG undefined FUN_1418f882e(void)

void FUN_1418f882e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_140eaf26f();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x60) = lVar1;
    if (lVar1 == 0) goto LAB_1418f888d;
  }
  else {
    FUN_1456cec3c(lVar1);
    *(longlong *)(param_1 + 0x60) = lVar1;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
LAB_1418f889c:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_14071731e();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1418f889c;
  }
  FUN_140eafca4(lVar1,1,lVar3);
LAB_1418f888d:
  FUN_140ebe1b0(param_1);
  return;
}



// FUNCTION 1418f88bc FUN_1418f88bc body=43 status=ok
// SIG undefined FUN_1418f88bc(void)

void FUN_1418f88bc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_140d9144c();
    FUN_140d914a6(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



// FUNCTION 1418f88e8 FUN_1418f88e8 body=474 status=ok
// SIG undefined FUN_1418f88e8(void)

bool FUN_1418f88e8(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(param_1 + 0x14) != 0) &&
     (lVar4 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30), lVar4 != 0)) {
    plVar5 = *(longlong **)(lVar4 + 0x1f0);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14cb5e538 == 0) {
        local_40 = &local_20;
        local_20 = &LAB_1417c5d06;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1417ad04a;
        local_48 = &LAB_1486a7af7;
        local_50 = &LAB_1464e1631;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x1000000c;
        local_70 = 8;
        local_78 = 0x420;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
        plVar5 = *(longlong **)(lVar4 + 0x1f0);
        if (plVar5 == (longlong *)0x0) goto LAB_1418f8a77;
      }
      if ((((DAT_14cb5e538 != 0) && (lVar1 = plVar5[2], lVar1 != 0)) &&
          (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
          == DAT_14cb5e538 + 0x30)) {
        if (*(code **)(*plVar5 + 0x498) == (code *)&LAB_14015c36e) {
          cVar2 = (char)plVar5[0x42];
        }
        else {
          cVar2 = (**(code **)(*plVar5 + 0x498))();
        }
        if (cVar2 != '\b') goto LAB_1418f89a5;
      }
    }
LAB_1418f8a77:
    bVar6 = false;
    lVar4 = FUN_140149a73(lVar4,0);
    if (lVar4 == 0) goto LAB_1418f89a7;
    iVar3 = FUN_14574753c(lVar4);
    local_20 = (undefined1 *)CONCAT44(local_20._4_4_,iVar3);
    if (-1 < iVar3) {
      lVar4 = FUN_140d17acc(lVar4,&local_20);
      bVar6 = lVar4 != 0;
      goto LAB_1418f89a7;
    }
  }
LAB_1418f89a5:
  bVar6 = false;
LAB_1418f89a7:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 1418f8ac4 FUN_1418f8ac4 body=697 status=ok
// SIG undefined FUN_1418f8ac4(void)

void FUN_1418f8ac4(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_138 [40];
  uint local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined2 local_7f;
  undefined1 local_7d;
  undefined4 local_7c;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar4 != 0) {
    lVar5 = FUN_1402735c8();
    local_78 = 0;
    uStack_70 = 0;
    FUN_140f8d196(lVar5 + 0x720);
    plVar1 = (longlong *)(param_1 + 0x18);
    if (((*(int *)(param_1 + 0x20) == 0) || ((longlong *)*plVar1 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*(longlong *)*plVar1 + 0x30))(), cVar3 == '\0')) {
      local_110 = 0;
      uStack_10c = 0;
      local_108 = 0;
      FUN_1446efa72(&local_110,0,3,0x10);
      local_108 = 3;
      puVar2 = (undefined8 *)CONCAT44(uStack_10c,local_110);
      *puVar2 = &PTR_LAB_14b3e6310;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      puVar2[2] = lVar7;
      *puVar2 = &PTR_FUN_14b9b91e0;
      puVar2[3] = 0;
      FUN_14485c47a(puVar2 + 3,param_1 + -0x30);
      puVar2[4] = FUN_145d2f73e;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_144a450dc(plVar1,&local_110);
      FUN_1449db362(&local_110);
    }
    if ((longlong)(int)uStack_70 == 0) {
      uVar8 = 0;
    }
    else {
      lVar7 = (longlong)(int)uStack_70 * 0x38;
      lVar5 = local_78;
      do {
        local_110 = local_110 & 0xffffff00;
        uStack_10c = 0;
        local_108 = 0;
        local_104 = 0;
        local_100 = 0;
        local_ec = 0;
        local_fc = 0;
        uStack_f4 = 0;
        local_e0 = 0xc69c4000;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_98 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_7f = 1;
        local_7d = 0;
        local_7c = 0;
        FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar1);
        cVar3 = FUN_140114204(lVar5);
        if (cVar3 != '\0') {
          lVar6 = FUN_140149a73(lVar4,0);
          if (lVar6 == 0) {
            local_7c = 2;
          }
          else {
            FUN_140983ba6(lVar5,lVar6,&local_110);
          }
        }
        FUN_1409838b8(&local_110);
        lVar5 = lVar5 + 0x38;
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
      uVar8 = uStack_70 & 0xffffffff;
    }
    FUN_1405d7ab2(local_78,uVar8);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418f8d7e FUN_1418f8d7e body=27 status=ok
// SIG undefined FUN_1418f8d7e(void)

undefined1 FUN_1418f8d7e(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_140f7e331();
    uVar1 = *(undefined1 *)(lVar2 + 0x32);
  }
  return uVar1;
}



// FUNCTION 1418f8d9a FUN_1418f8d9a body=521 status=ok
// SIG undefined FUN_1418f8d9a(void)

void FUN_1418f8d9a(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x14) == 0) || (uVar2 = *(uint *)(param_1 + 0x10), (int)uVar2 < 0)) ||
     (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418f8df6;
  plVar7 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(param_1 + 0x14))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
      (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar3 = *plVar7, lVar3 == 0))))))
  goto LAB_1418f8df6;
  FUN_1449027d0(param_1 + -0x38,&local_38);
  lVar4 = *(longlong *)(local_38 + 0x2a0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x68));
  *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  plVar7 = *(longlong **)(lVar3 + 0x1700);
  if (plVar7 != (longlong *)0x0) {
    dVar9 = SQRT((double)plVar7[0x397] * (double)plVar7[0x397] +
                 (double)plVar7[0x398] * (double)plVar7[0x398]);
    auVar10._0_4_ = ((float)dVar9 * 3600.0) / 100000.0;
    auVar10._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar10._8_8_ = 0;
    auVar10 = roundps(auVar10,ZEXT416((uint)auVar10._0_4_),1);
    fVar8 = auVar10._0_4_;
    if ((fVar8 != *(float *)(lVar4 + 0x30)) || (NAN(fVar8) || NAN(*(float *)(lVar4 + 0x30)))) {
      iVar6 = *(int *)(lVar4 + 0x34) + 1;
LAB_1418f8ec6:
      *(float *)(lVar4 + 0x30) = fVar8;
      *(int *)(lVar4 + 0x34) = iVar6;
    }
    else if (*(int *)(lVar4 + 0x34) == 0) {
      iVar6 = 1;
      goto LAB_1418f8ec6;
    }
    fVar8 = (float)(**(code **)(*plVar7 + 0x480))(plVar7);
    if (fVar8 <= 0.0) {
      if ((*(float *)(lVar4 + 0x38) != 0.0) || (NAN(*(float *)(lVar4 + 0x38)))) {
        iVar6 = *(int *)(lVar4 + 0x3c) + 1;
      }
      else {
        if (*(int *)(lVar4 + 0x3c) != 0) goto LAB_1418f8f0e;
        iVar6 = 1;
      }
      *(undefined4 *)(lVar4 + 0x38) = 0;
LAB_1418f8f42:
      *(int *)(lVar4 + 0x3c) = iVar6;
    }
    else {
      fVar8 = *(float *)(lVar4 + 0x30) / 65.0;
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if ((fVar8 != *(float *)(lVar4 + 0x38)) || (NAN(fVar8) || NAN(*(float *)(lVar4 + 0x38)))) {
        iVar6 = *(int *)(lVar4 + 0x3c) + 1;
LAB_1418f8f3d:
        *(float *)(lVar4 + 0x38) = fVar8;
        goto LAB_1418f8f42;
      }
      if (*(int *)(lVar4 + 0x3c) == 0) {
        iVar6 = 1;
        goto LAB_1418f8f3d;
      }
    }
LAB_1418f8f0e:
    cVar5 = FUN_1402096b0(plVar7);
    if (*(char *)(lVar4 + 0x48) == cVar5) {
      if (*(int *)(lVar4 + 0x4c) != 0) goto LAB_1418f8f22;
      iVar6 = 1;
    }
    else {
      iVar6 = *(int *)(lVar4 + 0x4c) + 1;
    }
    *(char *)(lVar4 + 0x48) = cVar5;
    *(int *)(lVar4 + 0x4c) = iVar6;
  }
LAB_1418f8f22:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x68));
LAB_1418f8df6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f8fa4 FUN_1418f8fa4 body=253 status=ok
// SIG undefined FUN_1418f8fa4(void)

void FUN_1418f8fa4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
    lVar4 = FUN_1400d6ce6();
    if (lVar4 != 0) {
      FUN_1449027d0(param_1,&local_38);
      plVar3 = *(longlong **)(local_38 + 0x230);
      AcquireSRWLockShared((PSRWLOCK)(plVar3 + 4));
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      if ((longlong)(int)plVar3[1] != 0) {
        lVar6 = (longlong)(int)plVar3[1] * 0x118;
        lVar5 = *plVar3 + 0xe0;
        do {
          if (1 < *(int *)(lVar5 + 8)) {
            FUN_140c3e4c2(lVar4,lVar5);
          }
          lVar5 = lVar5 + 0x118;
          lVar6 = lVar6 + -0x118;
        } while (lVar6 != 0);
      }
      ReleaseSRWLockShared((PSRWLOCK)(plVar3 + 4));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f90a2 FUN_1418f90a2 body=402 status=ok
// SIG undefined FUN_1418f90a2(void)

void FUN_1418f90a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar10 = (longlong *)(param_1 + -0x38);
  FUN_1449027d0(plVar10,&local_60);
  lVar4 = *(longlong *)(local_60 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b8));
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  lVar5 = *(longlong *)(lVar4 + 0x188);
  *(int *)(lVar4 + 0x198) = *(int *)(lVar4 + 0x198) + 2;
  iVar3 = *(int *)(lVar4 + 400);
  if ((longlong)iVar3 != 0) {
    lVar11 = 0;
    uVar9 = 0;
    do {
      lVar7 = (**(code **)(*plVar10 + 0x180))(plVar10);
      dVar6 = (double)*(float *)(lVar5 + 0x114 + lVar11);
      if (*(double *)(lVar7 + 0x6d0) <= dVar6) {
        lVar7 = (**(code **)(*plVar10 + 0x180))(plVar10);
        fVar12 = (float)(dVar6 - *(double *)(lVar7 + 0x6d0));
        *(float *)(lVar5 + 0x110 + lVar11) = fVar12;
        if (uVar9 == *(byte *)(lVar4 + 0xc0)) {
          iVar8 = (int)((1.0 - fVar12 / *(float *)(lVar5 + 0x118 + lVar11)) * 100.0);
          if ((iVar8 != *(int *)(lVar4 + 0x98)) || (*(int *)(lVar4 + 0x9c) == 0)) {
            *(int *)(lVar4 + 0x98) = iVar8;
            *(int *)(lVar4 + 0x9c) = *(int *)(lVar4 + 0x9c) + 1;
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x120;
    } while ((longlong)iVar3 * 0x120 != lVar11);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b8));
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f9236 FUN_1418f9236 body=694 status=ok
// SIG undefined FUN_1418f9236(void)

void FUN_1418f9236(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  char *pcVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1449027d0(param_1,&local_58);
  lVar4 = *(longlong *)(local_58 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b8));
  plVar7 = plStack_50;
  *(int *)(lVar4 + 0x1b0) = *(int *)(lVar4 + 0x1b0) + 1;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_50 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_1418f949b:
    lVar8 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x50);
    lVar8 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1418f949b;
      lVar8 = *plVar7;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x90);
  if (((int)(uint)bVar2 < *(int *)(lVar8 + 0xbf0)) &&
     (plVar7 = *(longlong **)
                (*(longlong *)(lVar8 + 0xbe8) + 8 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8),
     plVar7 != (longlong *)0x0)) {
    lVar8 = FUN_140086c3a();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30)) {
      plVar9 = (longlong *)(**(code **)(*plVar7 + 0x328))(plVar7);
      plVar10 = (longlong *)*plVar9;
      if (*(code **)(*plVar10 + 0x50) != FUN_144828418) {
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))();
      }
      FUN_1447a1fc0(plVar10);
      plVar10 = (longlong *)*plVar9;
      pcVar5 = *(code **)(*plVar10 + 0x28);
      if (pcVar5 == FUN_14482841c) {
        plVar11 = plVar10 + 3;
        if (plVar10[5] != 0) {
          plVar11 = (longlong *)(plVar10[5] + 8);
        }
      }
      else if (pcVar5 == (code *)&LAB_14010c34c) {
        plVar11 = plVar10 + 2;
      }
      else {
        plVar11 = (longlong *)(*pcVar5)(plVar10);
      }
      if ((int)plVar11[1] < 2) {
        iVar6 = (**(code **)(*plVar7 + 0x3c8))(plVar7);
        *(int *)(lVar4 + 0x180) = *(int *)(lVar4 + 0x180) + 1;
        if (iVar6 == 0) {
          pcVar12 = "FiringMode_FullAuto";
        }
        else {
          pcVar12 = "FiringMode_SingleShot";
          if (1 < iVar6) {
            pcVar12 = "FiringMode_Burst";
          }
        }
        uStack_38 = 0;
        local_40 = 0;
        local_48 = 0;
        plStack_50 = (longlong *)0x0;
        local_58 = 0;
        FUN_1446ddda2(&local_58,pcVar12,0);
        FUN_140ac6c96(&local_58,lVar4 + 0x170);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_1410e88ee(lVar4 + 0x170,plVar9);
      }
      if (*(char *)(lVar4 + 0x58) == '\0') {
        iVar6 = *(int *)(lVar4 + 0x5c) + 1;
      }
      else {
        if (*(int *)(lVar4 + 0x5c) != 0) goto LAB_1418f942c;
        iVar6 = 1;
      }
      *(undefined1 *)(lVar4 + 0x58) = 1;
      *(int *)(lVar4 + 0x5c) = iVar6;
    }
  }
LAB_1418f942c:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b8));
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418f94ee FUN_1418f94ee body=408 status=ok
// SIG undefined FUN_1418f94ee(void)

void FUN_1418f94ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar4 = *(longlong *)(local_38 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b8));
  *(int *)(lVar4 + 0x1b0) = *(int *)(lVar4 + 0x1b0) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  cVar5 = FUN_1410f362a(param_1);
  if (*(char *)(lVar4 + 8) == cVar5) {
    if (*(int *)(lVar4 + 0xc) == 0) {
      iVar6 = 1;
      goto LAB_1418f9625;
    }
  }
  else {
    iVar6 = *(int *)(lVar4 + 0xc) + 1;
LAB_1418f9625:
    *(char *)(lVar4 + 8) = cVar5;
    *(int *)(lVar4 + 0xc) = iVar6;
  }
  if (cVar5 == '\0') {
    if (*(char *)(lVar4 + 0x30) == '\0') {
      if (*(int *)(lVar4 + 0x34) != 0) goto LAB_1418f9583;
      iVar6 = 1;
    }
    else {
      iVar6 = *(int *)(lVar4 + 0x34) + 1;
    }
    *(undefined1 *)(lVar4 + 0x30) = 0;
    lVar7 = 0x34;
  }
  else {
    lVar7 = FUN_14479d2ce(param_1 + 0x50);
    bVar3 = *(byte *)(lVar7 + 0xbd8);
    if ((*(int *)(lVar7 + 0xbf0) <= (int)(uint)bVar3) ||
       (lVar7 = *(longlong *)
                 (*(longlong *)(lVar7 + 0xbe8) + 0x40 +
                 (ulonglong)bVar3 * 0x80 + (ulonglong)bVar3 * 8), lVar7 == 0)) goto LAB_1418f9583;
    fVar8 = *(float *)(lVar7 + 0xa0) * 100.0;
    if (100.0 <= fVar8) {
      fVar8 = 100.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if ((fVar8 != *(float *)(lVar4 + 200)) || (NAN(fVar8) || NAN(*(float *)(lVar4 + 200)))) {
      iVar6 = *(int *)(lVar4 + 0xcc) + 1;
    }
    else {
      if (*(int *)(lVar4 + 0xcc) != 0) goto LAB_1418f9583;
      iVar6 = 1;
    }
    *(float *)(lVar4 + 200) = fVar8;
    lVar7 = 0xcc;
  }
  *(int *)(lVar4 + lVar7) = iVar6;
LAB_1418f9583:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b8));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f9688 FUN_1418f9688 body=932 status=ok
// SIG undefined FUN_1418f9688(void)

void FUN_1418f9688(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_1418f99b7:
    lVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x50);
    lVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1418f99b7;
      lVar6 = *plVar7;
    }
  }
  FUN_140c65c56(lVar6 + 0x3f0,&local_48);
  lVar6 = local_48;
  if (local_48 == 0) goto LAB_1418f994e;
  uVar4 = FUN_140082ff6();
  cVar3 = FUN_1448093f4(lVar6,uVar4);
  plVar7 = local_40;
  if (cVar3 == '\0') goto LAB_1418f994e;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  if (local_48 != 0) {
    FUN_1449027d0(param_1,&local_58);
    lVar6 = *(longlong *)(local_58 + 0x220);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x1b8));
    *(int *)(lVar6 + 0x1b0) = *(int *)(lVar6 + 0x1b0) + 1;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_50)();
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
    }
    if (*(int *)(param_1 + 0x54) == 0) {
LAB_1418f99be:
      lVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x50);
      lVar5 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar8 == (longlong *)0x0) ||
           (((int)plVar8[2] != *(int *)(param_1 + 0x54) ||
            ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_1418f99be;
        lVar5 = *plVar8;
      }
    }
    if ((int)(uint)*(byte *)(lVar5 + 0xbd8) < *(int *)(local_48 + 0x280)) {
      lVar9 = local_48 + 0x208;
      if (*(longlong *)(local_48 + 0x278) != 0) {
        lVar9 = *(longlong *)(local_48 + 0x278);
      }
      lVar5 = (ulonglong)*(byte *)(lVar5 + 0xbd8) * 0x38;
      if ((*(char *)(lVar9 + lVar5) != '\x01') ||
         (lVar5 = *(longlong *)(lVar9 + 0x28 + lVar5), lVar5 == 0)) goto LAB_1418f999f;
      FUN_144a2b0a4(lVar5 + 0x28,&local_58);
      FUN_140775538(lVar6 + 0x128,&local_58);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
LAB_1418f999f:
      FUN_1449a0272(lVar6 + 0x128,&DAT_14cbd8c10);
    }
    if (*(int *)(param_1 + 0x54) == 0) {
LAB_1418f99c5:
      lVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x50);
      lVar5 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar8 == (longlong *)0x0) ||
           (((int)plVar8[2] != *(int *)(param_1 + 0x54) ||
            ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_1418f99c5;
        lVar5 = *plVar8;
      }
    }
    if ((int)(uint)(*(char *)(lVar5 + 0xbd8) == '\0') < *(int *)(local_48 + 0x280)) {
      lVar9 = local_48 + 0x208;
      if (*(longlong *)(local_48 + 0x278) != 0) {
        lVar9 = *(longlong *)(local_48 + 0x278);
      }
      lVar5 = (ulonglong)(*(char *)(lVar5 + 0xbd8) == '\0') * 0x38;
      if ((*(char *)(lVar9 + lVar5) != '\x01') ||
         (lVar5 = *(longlong *)(lVar9 + 0x28 + lVar5), lVar5 == 0)) goto LAB_1418f9987;
      FUN_144a2b0a4(lVar5 + 0x28,&local_58);
      FUN_140775538(lVar6 + 0x140,&local_58);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
LAB_1418f9987:
      FUN_1449a0272(lVar6 + 0x140,&DAT_14cbd8c10);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x1b8));
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_1418f994e:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f9a2e FUN_1418f9a2e body=182 status=ok
// SIG undefined FUN_1418f9a2e(void)

longlong * FUN_1418f9a2e(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(param_1,"noelement");
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_144a2b0a4(param_2,&local_38);
  if (&local_38 == param_1) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 1) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  }
  *(undefined1 *)(param_1 + 2) = param_3;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f9ae6 FUN_1418f9ae6 body=542 status=ok
// SIG undefined FUN_1418f9ae6(void)

void FUN_1418f9ae6(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_140495e96();
  lVar5 = FUN_1404960a8(uVar4);
  if (lVar5 != 0) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar2 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_58[2] = lVar6;
    *local_58 = &PTR_FUN_14b9ba6f0;
    local_58[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_58 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_14623a098;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_48 = "FOakUIEvent_SwitchWeapon";
    local_40 = 0x18;
    local_3c = 0;
    uVar3 = FUN_14001a6c0(&local_48,1);
    FUN_140391af6(lVar5,&local_48,uVar3,&local_58);
    *(char **)(param_1 + 0x48) = local_48;
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_1418f9c43;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1418f9c43:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418f9d06 FUN_1418f9d06 body=127 status=ok
// SIG undefined FUN_1418f9d06(void)

void FUN_1418f9d06(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_140495e96();
  lVar3 = FUN_1404960a8(uVar2);
  if (lVar3 != 0) {
    local_28 = "FOakUIEvent_SwitchWeapon";
    local_20 = 0x18;
    local_1c = 0;
    uVar1 = FUN_14001a6c0(&local_28,1);
    FUN_1401cd85c(lVar3,uVar1,param_1 + 0x48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f9d86 FUN_1418f9d86 body=33 status=ok
// SIG undefined FUN_1418f9d86(void)

void FUN_1418f9d86(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  FUN_1400b22c2(param_1 + 3,&DAT_149e02088);
  return;
}



// FUNCTION 1418f9da8 FUN_1418f9da8 body=108 status=ok
// SIG undefined FUN_1418f9da8(void)

bool FUN_1418f9da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1407156ca(param_1,local_30,param_2,param_3);
  local_20 = local_30;
  iVar1 = FUN_140c8411c(param_1);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418f9e16 FUN_1418f9e16 body=101 status=ok
// SIG undefined FUN_1418f9e16(void)

void FUN_1418f9e16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b75c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f9e7c FUN_1418f9e7c body=101 status=ok
// SIG undefined FUN_1418f9e7c(void)

void FUN_1418f9e7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f9ee2 FUN_1418f9ee2 body=101 status=ok
// SIG undefined FUN_1418f9ee2(void)

void FUN_1418f9ee2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f9f48 FUN_1418f9f48 body=101 status=ok
// SIG undefined FUN_1418f9f48(void)

void FUN_1418f9f48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418f9fae FUN_1418f9fae body=101 status=ok
// SIG undefined FUN_1418f9fae(void)

void FUN_1418f9fae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418fa014 FUN_1418fa014 body=101 status=ok
// SIG undefined FUN_1418fa014(void)

void FUN_1418fa014(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b91e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418fa07a FUN_1418fa07a body=101 status=ok
// SIG undefined FUN_1418fa07a(void)

void FUN_1418fa07a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b96b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418fa0e0 FUN_1418fa0e0 body=101 status=ok
// SIG undefined FUN_1418fa0e0(void)

void FUN_1418fa0e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b9790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418fa145 FUN_1418fa145 body=822 status=ok
// SIG undefined FUN_1418fa145(void)

void FUN_1418fa145(undefined8 *param_1)

{
  longlong *plVar1;
  
  *(undefined2 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0xb] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0xe] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0x14] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_1400b22c2(param_1 + 0x18,&DAT_14b5f8c90);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return;
}



// FUNCTION 1418fa47c FUN_1418fa47c body=101 status=ok
// SIG undefined FUN_1418fa47c(void)

void FUN_1418fa47c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ba530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418fa4e2 FUN_1418fa4e2 body=101 status=ok
// SIG undefined FUN_1418fa4e2(void)

void FUN_1418fa4e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ba6f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418fa548 FUN_1418fa548 body=101 status=ok
// SIG undefined FUN_1418fa548(void)

void FUN_1418fa548(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418fa5ae FUN_1418fa5ae body=93 status=ok
// SIG undefined FUN_1418fa5ae(void)

void FUN_1418fa5ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41bb90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bce50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418fa60c FUN_1418fa60c body=93 status=ok
// SIG undefined FUN_1418fa60c(void)

void FUN_1418fa60c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9bcec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418fa66a FUN_1418fa66a body=369 status=ok
// SIG undefined FUN_1418fa66a(void)

void FUN_1418fa66a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_38,param_1 + 0x208);
    lVar4 = local_38[0x18];
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x50));
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (*(int *)(lVar3 + 0xac) != *(int *)(lVar4 + 0x48)) {
      *(int *)(lVar3 + 0xac) = *(int *)(lVar4 + 0x48);
      puVar5 = *(ushort **)(lVar3 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
      FUN_140009b9a(&local_38,lVar4);
      FUN_14003c038(lVar3 + 0xb0,&local_38);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
      FUN_140009b9a(&local_38,lVar4 + 0x18);
      FUN_14003c038(lVar3 + 200,&local_38);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
      FUN_140009b9a(&local_38,lVar4 + 0x30);
      FUN_14003c038(lVar3 + 0xe0,&local_38);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x50));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fa7dc FUN_1418fa7dc body=262 status=ok
// SIG undefined FUN_1418fa7dc(void)

void FUN_1418fa7dc(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  if ((((*(float *)(param_1 + 0x55) <= 0.0) || (*(int *)((longlong)param_1 + 0x34) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 6), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
    return;
  }
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar4[2] != *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
    return;
  }
  plVar4 = (longlong *)*plVar4;
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  lVar3 = (**(code **)(*plVar4 + 0x180))(plVar4);
  if (lVar3 == 0) {
    return;
  }
  lVar3 = (**(code **)(*plVar4 + 0x180))(plVar4);
  if (*(double *)(lVar3 + 0x6d0) <= (double)*(float *)(param_1 + 0x55)) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x33c) == '\0') {
    if ((int)param_1[0x68] != 0) goto LAB_1418fa8bf;
    iVar2 = 1;
  }
  else {
    iVar2 = (int)param_1[0x68] + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  *(int *)(param_1 + 0x68) = iVar2;
LAB_1418fa8bf:
  *(undefined4 *)(param_1 + 0x55) = 0xbf800000;
  FUN_141328aca(param_1);
  return;
}



// FUNCTION 1418fa8e2 FUN_1418fa8e2 body=873 status=ok
// SIG undefined FUN_1418fa8e2(void)

void FUN_1418fa8e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  byte *pbVar5;
  ushort *puVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x208) == 0)) goto LAB_1418fa969;
  FUN_1448d5e3c(&local_48,param_1 + 0x208);
  pbVar5 = *(byte **)(local_48 + 0x460);
  AcquireSRWLockShared((PSRWLOCK)(pbVar5 + 0x58));
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (*(int *)(lVar4 + 0xac) != *(int *)(pbVar5 + 0x50)) {
    *(int *)(lVar4 + 0xac) = *(int *)(pbVar5 + 0x50);
    lVar9 = FUN_14479d2ce(param_1 + 0x30);
    bVar7 = FUN_140426394(lVar9 + 0x3c0,&DAT_14cbd9540);
    lVar9 = FUN_14479d2ce(param_1 + 0x30);
    bVar8 = FUN_140426394(lVar9 + 0x3c0,&DAT_14cbd9548);
    bVar7 = ((bVar8 | bVar7) ^ 1) & *pbVar5;
    if (*(byte *)(lVar4 + 0xb0) == bVar7) {
      iVar10 = 1;
      if (*(int *)(lVar4 + 0xb4) != 0) goto LAB_1418fa9ff;
    }
    else {
      iVar10 = *(int *)(lVar4 + 0xb4) + 1;
    }
    *(byte *)(lVar4 + 0xb0) = bVar7;
    *(int *)(lVar4 + 0xb4) = iVar10;
LAB_1418fa9ff:
    if (*(int *)(lVar4 + 200) != *(int *)(pbVar5 + 0x18)) {
      FUN_144a787a6(lVar4 + 0xb8,pbVar5 + 8);
      *(undefined4 *)(lVar4 + 200) = *(undefined4 *)(pbVar5 + 0x18);
    }
    if (*(int *)(lVar4 + 0xe0) != *(int *)(pbVar5 + 0x30)) {
      FUN_144a787a6(lVar4 + 0xd0,pbVar5 + 0x20);
      *(undefined4 *)(lVar4 + 0xe0) = *(undefined4 *)(pbVar5 + 0x30);
    }
    iVar10 = *(int *)(pbVar5 + 0x40);
    if (iVar10 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    else {
      puVar11 = *(undefined2 **)(pbVar5 + 0x38);
    }
    lVar9 = 0;
    do {
      uVar3 = puVar11[lVar9];
      bVar7 = (&DAT_14b9b0300)[lVar9];
      iVar12 = (uint)uVar3 - (uint)bVar7;
      if (iVar12 == 0) {
        iVar12 = 0;
        if (uVar3 == 0) goto LAB_1418faaac;
      }
      else {
        if (0x7f < ((uint)bVar7 | (uint)uVar3)) goto LAB_1418faaac;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar7]) goto code_r0x0001418faaa9;
      }
      lVar9 = lVar9 + 1;
    } while( true );
  }
  goto LAB_1418fa960;
code_r0x0001418faaa9:
  iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar7];
LAB_1418faaac:
  if ((bool)*(char *)(lVar4 + 0xe8) == (iVar12 == 0)) {
    if (*(int *)(lVar4 + 0xec) != 0) goto LAB_1418faacf;
    iVar10 = 1;
  }
  else {
    iVar10 = *(int *)(lVar4 + 0xec) + 1;
  }
  *(bool *)(lVar4 + 0xe8) = iVar12 == 0;
  *(int *)(lVar4 + 0xec) = iVar10;
  iVar10 = *(int *)(pbVar5 + 0x40);
LAB_1418faacf:
  if (iVar10 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = *(undefined2 **)(pbVar5 + 0x38);
  }
  lVar9 = 0;
  do {
    uVar3 = puVar11[lVar9];
    bVar7 = (&DAT_14b9b0304)[lVar9];
    iVar10 = (uint)uVar3 - (uint)bVar7;
    if (iVar10 == 0) {
      iVar10 = 0;
      if (uVar3 == 0) goto LAB_1418fab21;
    }
    else {
      if (0x7f < ((uint)bVar7 | (uint)uVar3)) goto LAB_1418fab21;
      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar7]) break;
    }
    lVar9 = lVar9 + 1;
  } while( true );
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar7];
LAB_1418fab21:
  if ((bool)*(char *)(lVar4 + 0xf0) == (iVar10 == 0)) {
    if (*(int *)(lVar4 + 0xf4) == 0) {
      iVar12 = 1;
      goto LAB_1418fabc1;
    }
  }
  else {
    iVar12 = *(int *)(lVar4 + 0xf4) + 1;
LAB_1418fabc1:
    *(bool *)(lVar4 + 0xf0) = iVar10 == 0;
    *(int *)(lVar4 + 0xf4) = iVar12;
  }
  if ((bool)*(char *)(lVar4 + 0xf8) == *(int *)(pbVar5 + 0x10) < 2) {
    iVar10 = 1;
    if (*(int *)(lVar4 + 0xfc) == 0) goto LAB_1418fab5b;
  }
  else {
    iVar10 = *(int *)(lVar4 + 0xfc) + 1;
LAB_1418fab5b:
    *(bool *)(lVar4 + 0xf8) = *(int *)(pbVar5 + 0x10) < 2;
    *(int *)(lVar4 + 0xfc) = iVar10;
  }
  puVar6 = *(ushort **)(lVar4 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
  }
LAB_1418fa960:
  ReleaseSRWLockShared((PSRWLOCK)(pbVar5 + 0x58));
LAB_1418fa969:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418fac4c FUN_1418fac4c body=455 status=ok
// SIG undefined FUN_1418fac4c(void)

void FUN_1418fac4c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  
  FUN_1407cbe30();
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    pbVar3 = *(byte **)(param_1 + 0x160);
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar6 = &DAT_14c9a1288;
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
        plVar7 = plVar6 + 8;
        if ((longlong *)plVar6[9] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar6[9];
        }
        iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar6[10] - 1U & DAT_14cbdaf48) * 4);
        if (iVar8 != -1) {
          do {
            lVar1 = *plVar6 + (longlong)iVar8 * 0x40;
            if (*(uint *)(*plVar6 + (longlong)iVar8 * 0x40) == DAT_14cbdaf48) {
              if ((((lVar1 != 0) && (plVar6 = (longlong *)(lVar1 + 0x28), plVar6 != (longlong *)0x0)
                   ) && ((byte *)*plVar6 != (byte *)0x0)) && ((*(byte *)*plVar6 & 0x40) == 0))
              goto LAB_1418face4;
              break;
            }
            iVar8 = *(int *)(lVar1 + 0x38);
          } while (iVar8 != -1);
        }
      }
    }
    plVar6 = &DAT_14c9a1308;
LAB_1418face4:
    if (*plVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_14000584e(*plVar6,0);
    }
    *(undefined1 *)(lVar2 + 0xb4) = uVar5;
    pbVar3 = *(byte **)(param_1 + 0x160);
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar6 = &DAT_14c9a1288;
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
        plVar7 = plVar6 + 8;
        if ((longlong *)plVar6[9] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar6[9];
        }
        iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar6[10] - 1U & DAT_14cbdaf70) * 4);
        if (iVar8 != -1) {
          do {
            lVar1 = *plVar6 + (longlong)iVar8 * 0x40;
            if (*(uint *)(*plVar6 + (longlong)iVar8 * 0x40) == DAT_14cbdaf70) {
              if (((lVar1 != 0) && (plVar6 = (longlong *)(lVar1 + 0x28), plVar6 != (longlong *)0x0))
                 && (((byte *)*plVar6 != (byte *)0x0 && ((*(byte *)*plVar6 & 0x40) == 0))))
              goto LAB_1418fad73;
              break;
            }
            iVar8 = *(int *)(lVar1 + 0x38);
          } while (iVar8 != -1);
        }
      }
    }
    plVar6 = &DAT_14c9a1308;
LAB_1418fad73:
    if (*plVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_14000584e(*plVar6,0);
    }
    *(undefined1 *)(lVar2 + 0xb5) = uVar5;
    puVar4 = *(ushort **)(lVar2 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 1418fae14 FUN_1418fae14 body=602 status=ok
// SIG undefined FUN_1418fae14(void)

void FUN_1418fae14(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1448d5e3c(&local_58,param_1 + 0x208);
  plVar2 = *(longlong **)(local_58 + 0x2b0);
  AcquireSRWLockShared((PSRWLOCK)(plVar2 + 4));
  plVar9 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar5 = plVar2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *plVar2;
    lVar8 = 0;
    do {
      plVar9 = *(longlong **)(lVar3 + 0x10 + lVar8);
      if (plVar9 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar9 + 8))(plVar9);
        lVar7 = FUN_14020fa9c();
        if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
            lVar7 + 0x30)) {
          plVar9 = *(longlong **)(lVar3 + 0x10 + lVar8);
          if (plVar9 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar9 + 8))(plVar9);
            lVar7 = FUN_1407f4b3c();
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              FUN_1407f4b76(param_1,plVar9 + 5);
              plVar9 = plVar9 + 0xc;
              goto LAB_1418faf40;
            }
          }
        }
        else {
          FUN_1407f4b76(param_1,plVar9 + 0x14);
          if ((*(char *)((longlong)plVar9 + 0x11b) == '\x01') &&
             (*(char *)((longlong)plVar9 + 0x1bd) == '\x01')) {
            plVar9 = plVar9 + 0x38;
LAB_1418faf40:
            FUN_1407f4b76(param_1,plVar9);
          }
        }
      }
      lVar8 = lVar8 + 0x50;
    } while ((longlong)(int)lVar5 * 0x50 != lVar8);
  }
  FUN_1448d5e3c(&local_58,param_1 + 0x208);
  plVar9 = *(longlong **)(local_58 + 0x70);
  AcquireSRWLockShared((PSRWLOCK)(plVar9 + 4));
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  lVar5 = plVar9[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *plVar9;
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + 0x10 + lVar8);
      if (plVar4 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar4 + 8))(plVar4);
        lVar7 = FUN_1407f4a68();
        if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
          FUN_1407f4b76(param_1,plVar4 + 9);
        }
      }
      lVar8 = lVar8 + 0x50;
    } while ((longlong)(int)lVar5 * 0x50 != lVar8);
  }
  ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 4));
  ReleaseSRWLockShared((PSRWLOCK)(plVar2 + 4));
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418fb070 FUN_1418fb070 body=112 status=ok
// SIG undefined FUN_1418fb070(void)

void FUN_1418fb070(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if (*(int *)(param_1 + 700) != 0) {
    FUN_1402191ca(param_1 + 0x2b0,0);
  }
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 1418fb0e0 FUN_1418fb0e0 body=77 status=ok
// SIG undefined FUN_1418fb0e0(void)

void FUN_1418fb0e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 1418fb12e FUN_1418fb12e body=195 status=ok
// SIG undefined FUN_1418fb12e(void)

void FUN_1418fb12e(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  FUN_1410ea50c();
  *(undefined1 *)(param_1 + 0x390) = 0;
  if ((*(char *)(param_1 + 0x2b0) == '\0') && (lVar1 = *(longlong *)(param_1 + 0x288), lVar1 != 0))
  {
    plVar4 = (longlong *)FUN_1407559f6(param_1);
    lVar2 = *plVar4;
    SRWLock = (PSRWLOCK)(lVar2 + 0x638);
    AcquireSRWLockShared(SRWLock);
    puVar5 = (undefined8 *)(lVar2 + 0x440);
    if (*(char *)(param_1 + 0x2b1) != '\0') {
      puVar5 = (undefined8 *)(param_1 + 0x2b8);
    }
    uVar3 = puVar5[1];
    *(undefined8 *)(param_1 + 0x298) = *puVar5;
    *(undefined8 *)(param_1 + 0x2a0) = uVar3;
    *(undefined8 *)(param_1 + 0x2a8) = puVar5[2];
    *(float *)(lVar1 + 0x5c8) = (float)*(double *)(param_1 + 0x298);
    *(float *)(lVar1 + 0x5cc) = (float)*(double *)(param_1 + 0x2a0);
                    /* WARNING: Could not recover jumptable at 0x0001418fb1df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared(SRWLock);
    return;
  }
  return;
}



// FUNCTION 1418fb1f2 FUN_1418fb1f2 body=480 status=ok
// SIG undefined FUN_1418fb1f2(void)

undefined4 FUN_1418fb1f2(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(bool *)(param_1 + 0x23) =
       *(float *)(param_1 + 0x10) <= *(float *)(param_2 + 5) &&
       *(float *)(param_2 + 5) != *(float *)(param_1 + 0x10);
  fVar9 = (float)(-(uint)(0.0 < *(float *)(param_2 + 7)) &
                 (uint)((*(float *)(param_2 + 5) / *(float *)(param_2 + 7)) * 100.0));
  if (100.0 <= fVar9) {
    fVar9 = 100.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  *(float *)(param_1 + 0x18) = fVar9;
  fVar9 = *(float *)(param_2 + 5);
  *(bool *)(param_1 + 0x21) = 1e-08 >= fVar9;
  *(bool *)(param_1 + 0x20) = 0.0 < *(float *)(param_2 + 7) && 1e-08 < fVar9;
  if (*param_2 != 0) {
    bVar1 = *(byte *)(*param_2 + 0x18);
    plVar5 = (longlong *)FUN_14077538e();
    uVar7 = 0xffffffff;
    if (0 < (longlong)(int)plVar5[9]) {
      puVar6 = (ulonglong *)(plVar5[8] + 8);
      uVar8 = 0;
      do {
        if (*puVar6 == (ulonglong)bVar1) {
          uVar7 = uVar8 & 0xffffffff;
          break;
        }
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 2;
      } while ((longlong)(int)plVar5[9] != uVar8);
    }
    (**(code **)(*plVar5 + 0x2b0))(plVar5,local_40,uVar7);
    plVar5 = local_40[0];
    if (*(code **)(*local_40[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_40[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar4 = *(code **)(*local_40[0] + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar5 = local_40[0] + 3;
      if (local_40[0][5] != 0) {
        plVar5 = (longlong *)(local_40[0][5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar5 = local_40[0] + 2;
    }
    else {
      plVar5 = (longlong *)(*pcVar4)();
    }
    FUN_144a2b0a4(plVar5,&local_30);
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    FUN_1407753c8(&local_30);
    iVar2 = local_28 + -1;
    if (local_28 == 0) {
      iVar2 = 0;
    }
    FUN_1402980a2(param_1,local_30,iVar2);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)((longlong)param_2 + 0x2c);
  if (iVar2 != iVar3) {
    *(int *)(param_1 + 0x10) = (int)param_2[5];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x2c);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != iVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fb3d4 FUN_1418fb3d4 body=1120 status=ok
// SIG undefined FUN_1418fb3d4(void)

void FUN_1418fb3d4(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  PSRWLOCK SRWLock;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x208) == 0)) goto LAB_1418fb462;
  FUN_1448d5e3c(&local_48,param_1 + 0x208);
  lVar5 = *(longlong *)(local_48 + 0x130);
  SRWLock = (PSRWLOCK)(lVar5 + 0x60);
  AcquireSRWLockShared(SRWLock);
  plVar2 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (*(int *)(lVar4 + 0xac) == *(int *)(lVar5 + 0x58)) {
    ReleaseSRWLockShared(SRWLock);
    goto LAB_1418fb462;
  }
  *(int *)(lVar4 + 0xac) = *(int *)(lVar5 + 0x58);
  puVar6 = *(ushort **)(lVar4 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
  }
  if (*(int *)(lVar4 + 0xb4) != *(int *)(lVar5 + 0x34)) {
    *(undefined4 *)(lVar4 + 0xb0) = *(undefined4 *)(lVar5 + 0x30);
    *(undefined4 *)(lVar4 + 0xb4) = *(undefined4 *)(lVar5 + 0x34);
  }
  if (*(char *)(lVar5 + 0x28) == '\x01') {
    if (*(char *)(param_1 + 0x298) == '\x02') {
      iVar7 = *(int *)(lVar4 + 0xe4);
      if (*(char *)(lVar4 + 0xe0) == '\0') {
        if (iVar7 != 0) goto LAB_1418fb4eb;
        iVar7 = 0;
      }
      *(undefined1 *)(lVar4 + 0xe0) = 0;
      goto LAB_1418fb625;
    }
  }
  else if ((*(char *)(lVar5 + 0x28) == '\x02') && (*(char *)(param_1 + 0x298) == '\x01')) {
    iVar7 = *(int *)(lVar4 + 0xe4);
    if (*(char *)(lVar4 + 0xe0) != '\0') {
      if (iVar7 != 0) goto LAB_1418fb4eb;
      iVar7 = 0;
    }
    *(undefined1 *)(lVar4 + 0xe0) = 1;
LAB_1418fb625:
    *(int *)(lVar4 + 0xe4) = iVar7 + 1;
  }
LAB_1418fb4eb:
  if ((0.0 < *(float *)(lVar5 + 0x38)) && (*(int *)(lVar4 + 0xbc) != *(int *)(lVar5 + 0x3c))) {
    *(float *)(lVar4 + 0xb8) = *(float *)(lVar5 + 0x38);
    *(undefined4 *)(lVar4 + 0xbc) = *(undefined4 *)(lVar5 + 0x3c);
  }
  if (*(float *)(lVar5 + 0x30) <= *(float *)(param_1 + 0x29c)) {
    if (*(char *)(lVar4 + 0xd0) == '\0') {
      if (*(int *)(lVar4 + 0xd4) == 0) {
        iVar7 = 1;
        goto LAB_1418fb795;
      }
    }
    else {
      iVar7 = *(int *)(lVar4 + 0xd4) + 1;
LAB_1418fb795:
      *(undefined1 *)(lVar4 + 0xd0) = 0;
      *(int *)(lVar4 + 0xd4) = iVar7;
    }
    if (*(char *)(lVar4 + 0xd8) == '\0') {
      iVar7 = *(int *)(lVar4 + 0xdc) + 1;
LAB_1418fb773:
      *(undefined1 *)(lVar4 + 0xd8) = 1;
      goto LAB_1418fb787;
    }
    if (*(int *)(lVar4 + 0xdc) == 0) {
      iVar7 = 1;
      goto LAB_1418fb773;
    }
  }
  else {
    iVar7 = *(int *)(lVar4 + 0xd4);
    if (*(float *)(lVar5 + 0x30) <= *(float *)(param_1 + 0x2a0)) {
      if (*(char *)(lVar4 + 0xd0) == '\0') {
        iVar7 = iVar7 + 1;
      }
      else {
        if (iVar7 != 0) goto LAB_1418fb545;
        iVar7 = 1;
      }
      *(undefined1 *)(lVar4 + 0xd0) = 1;
LAB_1418fb759:
      *(int *)(lVar4 + 0xd4) = iVar7;
    }
    else {
      if (*(char *)(lVar4 + 0xd0) != '\0') {
        iVar7 = iVar7 + 1;
LAB_1418fb767:
        *(undefined1 *)(lVar4 + 0xd0) = 0;
        goto LAB_1418fb759;
      }
      if (iVar7 == 0) {
        iVar7 = 1;
        goto LAB_1418fb767;
      }
    }
LAB_1418fb545:
    if (*(char *)(lVar4 + 0xd8) == '\0') {
      if (*(int *)(lVar4 + 0xdc) != 0) goto LAB_1418fb562;
      iVar7 = 1;
    }
    else {
      iVar7 = *(int *)(lVar4 + 0xdc) + 1;
    }
    *(undefined1 *)(lVar4 + 0xd8) = 0;
LAB_1418fb787:
    *(int *)(lVar4 + 0xdc) = iVar7;
  }
LAB_1418fb562:
  *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(lVar5 + 0x28);
  ReleaseSRWLockShared(SRWLock);
  FUN_1448d5e3c(&local_48,param_1 + 0x208);
  lVar5 = *(longlong *)(local_48 + 0x130);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x60));
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)local_40 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (*(char *)(lVar5 + 0x50) == '\x01') {
    FUN_1400b22c2(&local_48,"NotEnoughFuelError");
    FUN_140de1078(param_1,&local_48,0,0);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(lVar4 + 0xe8) == '\0') {
      iVar7 = *(int *)(lVar4 + 0xec) + 1;
LAB_1418fb706:
      *(undefined1 *)(lVar4 + 0xe8) = 1;
      *(int *)(lVar4 + 0xec) = iVar7;
    }
    else if (*(int *)(lVar4 + 0xec) == 0) {
      iVar7 = 1;
      goto LAB_1418fb706;
    }
    puVar6 = *(ushort **)(lVar4 + 0x80);
    if (puVar6 != (ushort *)0x0) {
      *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
    }
    if (*(char *)(lVar5 + 0x50) == '\0') {
      if (*(int *)(lVar5 + 0x54) != 0) goto LAB_1418fb5bb;
      iVar7 = 1;
    }
    else {
      iVar7 = *(int *)(lVar5 + 0x54) + 1;
    }
    *(undefined1 *)(lVar5 + 0x50) = 0;
    *(int *)(lVar5 + 0x54) = iVar7;
  }
LAB_1418fb5bb:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x60));
LAB_1418fb462:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fb836 FUN_1418fb836 body=95 status=ok
// SIG undefined FUN_1418fb836(void)

ulonglong * FUN_1418fb836(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_CrosshairActionSkillUpdate";
  local_18 = 0x26;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fb896 FUN_1418fb896 body=218 status=ok
// SIG undefined FUN_1418fb896(void)

undefined8 FUN_1418fb896(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = (longlong)param_2 * 0xa0;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
      }
      else {
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar5 & (uVar3 + uVar5) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 / 0xa0)) {
    uVar5 = uVar3 / 0xa0 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_1446f8d3c(param_1,0,uVar5,0xa0,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar2;
}



// FUNCTION 1418fb970 FUN_1418fb970 body=95 status=ok
// SIG undefined FUN_1418fb970(void)

ulonglong * FUN_1418fb970(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "RemoveMessage";
  local_18 = 0xd;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fb9d0 FUN_1418fb9d0 body=29 status=ok
// SIG undefined FUN_1418fb9d0(void)

undefined8 FUN_1418fb9d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418fb9ee FUN_1418fb9ee body=95 status=ok
// SIG undefined FUN_1418fb9ee(void)

ulonglong * FUN_1418fb9ee(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_RefreshTrackedMissions";
  local_18 = 0x22;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fba4e FUN_1418fba4e body=440 status=ok
// SIG undefined FUN_1418fba4e(void)

longlong FUN_1418fba4e(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar5 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar5 != '\0') {
    plVar9 = (longlong *)(*(int *)(param_1 + 0x18) + param_3);
    iVar10 = 0;
    local_60 = 0;
    local_68 = (ulonglong *)0x0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_68,&local_60);
    uVar3 = local_60;
    puVar2 = local_68;
    local_4c = (uint)local_60;
    local_58 = local_68;
    if (0 < (int)(uint)local_60) {
      iVar10 = 0;
      uVar8 = 0x7fffffff;
      uVar6 = (uint)local_60;
      do {
        if (uVar8 == 0) {
          iVar10 = -1;
          break;
        }
        iVar4 = iVar10;
        if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar6, 7 < uVar6)) &&
           (uVar7 = uVar8, 7 < (int)uVar8)) {
          while (uVar8 = uVar7, iVar4 = iVar10, local_4c = uVar6,
                (*local_58 & 0x8080808080808080) == 0) {
            local_58 = local_58 + 1;
            iVar10 = iVar10 + 8;
            local_4c = uVar6 - 8;
            uVar8 = uVar7 - 8;
            bVar1 = (int)uVar6 < 0x10;
            uVar6 = local_4c;
            iVar4 = iVar10;
            if ((bVar1) || (bVar1 = uVar7 < 0x10, uVar7 = uVar8, bVar1)) break;
          }
        }
LAB_1418fbb48:
        do {
          iVar10 = iVar4;
          if (((int)uVar6 < 1) || ((int)uVar8 < 1)) break;
          uVar7 = FUN_14003e942(&local_58,&local_4c);
          uVar6 = local_4c;
          if (uVar7 < 0x10000) {
            uVar8 = uVar8 - 1;
            iVar4 = iVar10 + 1;
            if (0x7f < uVar7) goto LAB_1418fbb48;
          }
          else {
            if (1 < uVar8) {
              uVar8 = uVar8 - 2;
              iVar4 = iVar10 + 2;
              goto LAB_1418fbb48;
            }
            uVar8 = 0;
          }
          iVar10 = iVar10 + 1;
          iVar4 = iVar10;
        } while (((ulonglong)local_58 & 7) != 0);
      } while (0 < (int)uVar6);
    }
    FUN_1409ee492(plVar9,iVar10 + 1,1);
    *(undefined2 *)(*plVar9 + (longlong)iVar10 * 2) = 0;
    FUN_1446e71a3(*plVar9,(longlong)iVar10,puVar2,uVar3 & 0xffffffff);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fbc08 FUN_1418fbc08 body=118 status=ok
// SIG undefined FUN_1418fbc08(void)

void FUN_1418fbc08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0a90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1418fbc7e FUN_1418fbc7e body=179 status=ok
// SIG undefined FUN_1418fbc7e(void)

longlong FUN_1418fbc7e(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x18);
  plVar3 = *(longlong **)(param_3 + iVar1);
  if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
  }
  FUN_1447a1fc0(plVar3);
  plVar3 = *(longlong **)(param_3 + iVar1);
  pcVar2 = *(code **)(*plVar3 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar4 = plVar3 + 3;
    if (plVar3[5] != 0) {
      plVar4 = (longlong *)(plVar3[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar4 = plVar3 + 2;
  }
  else {
    plVar4 = (longlong *)(*pcVar2)(plVar3);
  }
  if ((int)plVar4[1] == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*plVar4;
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar5);
  return param_3;
}



// FUNCTION 1418fbd32 FUN_1418fbd32 body=255 status=ok
// SIG undefined FUN_1418fbd32(void)

void FUN_1418fbd32(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418fbe32 FUN_1418fbe32 body=418 status=ok
// SIG undefined FUN_1418fbe32(void)

/* WARNING: Removing unreachable block (ram,0x0001418fbfb7) */
/* WARNING: Removing unreachable block (ram,0x0001418fbfc6) */
/* WARNING: Removing unreachable block (ram,0x0001418fbfca) */

undefined8 FUN_1418fbe32(longlong param_1,char *param_2,undefined1 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_1a8,local_88);
  local_198 = CONCAT31(local_198._1_3_,*param_3);
  uStack_194 = *param_4;
  local_58 = &PTR_FUN_14b9c5370;
  uStack_50 = local_1a8;
  uStack_48 = uStack_1a0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_40 = local_198;
  uStack_3c = uStack_194;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = FUN_1418fc934;
  puVar3[4] = 0;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_58._4_4_;
  *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_50._4_4_;
  *(undefined4 *)(puVar3 + 8) = (undefined4)uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_48._4_4_;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  local_78 = 0;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = puVar3;
    UNLOCK();
  }
  if (local_1a8 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1418fbfd6 FUN_1418fbfd6 body=794 status=ok
// SIG undefined FUN_1418fbfd6(void)

void FUN_1418fbfd6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  ushort uVar10;
  int iVar11;
  longlong lVar12;
  ushort uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [40];
  longlong *local_90 [2];
  longlong local_80 [2];
  longlong local_70;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 == 0) goto LAB_1418fc055;
  FUN_1448d5e3c(&local_70,param_1 + 0x208);
  puVar6 = *(undefined1 **)(local_70 + 0x440);
  AcquireSRWLockShared((PSRWLOCK)(puVar6 + 0x38));
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if (*(int *)(lVar5 + 0xac) != *(int *)(puVar6 + 0x30)) {
    *(int *)(lVar5 + 0xac) = *(int *)(puVar6 + 0x30);
    *(undefined1 *)(lVar5 + 0xb0) = *puVar6;
    *(undefined4 *)(lVar5 + 0xb4) = *(undefined4 *)(puVar6 + 8);
    FUN_144a787a6((longlong *)(lVar5 + 0xc0),puVar6 + 0x10);
    FUN_140474144(local_80,puVar6 + 0x10,&DAT_14cbdbd30);
    FUN_14000bbd8(&local_70,local_80,0);
    FUN_1410d1eba(local_90,&local_70);
    uVar8 = FUN_1447a1f4a(local_90);
    FUN_144a787a6(lVar5 + 0xd0,uVar8);
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    *(bool *)(lVar5 + 0xb1) = 3 < *(int *)(puVar6 + 8);
    *(undefined4 *)(lVar5 + 0xb8) = *(undefined4 *)(puVar6 + 0x28);
    plVar2 = (longlong *)(param_1 + 0x298);
    iVar14 = *(int *)(param_1 + 0x2a0);
    iVar4 = *(int *)(lVar5 + 200);
    if (iVar14 == iVar4) {
      iVar11 = iVar14;
      if (1 < iVar14) {
        lVar12 = 0;
        while( true ) {
          uVar13 = *(ushort *)(*plVar2 + lVar12);
          uVar15 = (ulonglong)uVar13;
          uVar10 = *(ushort *)(*(longlong *)(lVar5 + 0xc0) + lVar12);
          if (uVar13 != uVar10) break;
          if (uVar13 == 0) goto LAB_1418fc1d0;
LAB_1418fc19d:
          lVar12 = lVar12 + 2;
        }
        if ((uVar10 | uVar13) < 0x80) {
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          uVar16 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar16]) goto LAB_1418fc19d;
        }
        if (uVar13 != uVar10) goto LAB_1418fc25c;
      }
    }
    else {
      iVar11 = iVar4;
      if (iVar4 + iVar14 != 1) {
LAB_1418fc25c:
        if (iVar14 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        else {
          puVar9 = (undefined2 *)*plVar2;
        }
        lVar12 = 0;
        do {
          uVar13 = puVar9[lVar12];
          bVar3 = (&DAT_149e02088)[lVar12];
          iVar14 = (uint)uVar13 - (uint)bVar3;
          if (iVar14 == 0) {
            iVar11 = iVar4;
            if (uVar13 == 0) break;
          }
          else {
            if (0x7f < ((uint)bVar3 | (uint)uVar13)) goto LAB_1418fc2a5;
            if ((&DAT_149e05da0)[uVar13] != (&DAT_149e05da0)[bVar3]) goto code_r0x0001418fc2a2;
          }
          lVar12 = lVar12 + 1;
        } while( true );
      }
    }
    goto LAB_1418fc1d0;
  }
  goto LAB_1418fc04c;
code_r0x0001418fc2a2:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar13] - (uint)(byte)(&DAT_149e05da0)[bVar3];
LAB_1418fc2a5:
  iVar11 = iVar4;
  if (iVar14 != 0) {
    FUN_140de1078(param_1,&DAT_14cbdbd70,0,0);
    iVar11 = *(int *)(lVar5 + 200);
  }
LAB_1418fc1d0:
  iVar14 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar14 = 0;
  }
  FUN_1402980a2(plVar2,*(undefined8 *)(lVar5 + 0xc0),iVar14);
  if ((*(char *)(lVar5 + 0xb1) == '\x01') && (*(char *)(param_1 + 0x2a8) == '\0')) {
    *(undefined1 *)(param_1 + 0x2a8) = 1;
    FUN_140de1078(param_1,&DAT_14cbdbd50,0,0);
  }
  puVar7 = *(ushort **)(lVar5 + 0x80);
  if (puVar7 != (ushort *)0x0) {
    *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
LAB_1418fc04c:
  ReleaseSRWLockShared((PSRWLOCK)(puVar6 + 0x38));
LAB_1418fc055:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418fc2f2 FUN_1418fc2f2 body=257 status=ok
// SIG undefined FUN_1418fc2f2(void)

void FUN_1418fc2f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_38,param_1 + 0x208);
    lVar4 = *(longlong *)(local_38 + 0x170);
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x18));
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if ((*(int *)(lVar3 + 0xac) != *(int *)(lVar4 + 0x10)) &&
       (*(int *)(lVar3 + 0xac) = *(int *)(lVar4 + 0x10),
       *(int *)(lVar3 + 0xb4) != *(int *)(lVar4 + 0xc))) {
      *(undefined1 *)(lVar3 + 0xb0) = *(undefined1 *)(lVar4 + 8);
      *(undefined4 *)(lVar3 + 0xb4) = *(undefined4 *)(lVar4 + 0xc);
      puVar5 = *(ushort **)(lVar3 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fc3f4 FUN_1418fc3f4 body=403 status=ok
// SIG undefined FUN_1418fc3f4(void)

void FUN_1418fc3f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1402e0ee2();
  FUN_1448d5e3c(&local_78,param_1 + 0x208);
  lVar3 = *(longlong *)(local_78 + 0x340);
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x28));
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if (*(int *)(param_1 + 0x2b8) != *(int *)(lVar3 + 0x20)) {
    *(int *)(param_1 + 0x2b8) = *(int *)(lVar3 + 0x20);
    FUN_148e90a3e(param_1,lVar3);
    if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
      plVar4 = *(longlong **)(param_1 + 0x10);
      local_40 = param_1;
      if (plVar4 == (longlong *)0x0) {
LAB_1418fc54e:
        local_58 = 0;
        local_48 = &PTR_LAB_14b9c6440;
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        local_68 = FUN_1442da93e;
        FUN_1403911de(param_1);
      }
      else {
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_1418fc54e;
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
        local_38 = *(undefined8 *)(param_1 + 8);
        local_58 = 0;
        local_48 = &PTR_LAB_14b9c6440;
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_68 = FUN_1442da93e;
        plStack_30 = plVar4;
        FUN_1403911de(param_1);
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
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x28));
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418fc588 FUN_1418fc588 body=716 status=ok
// SIG undefined FUN_1418fc588(void)

void FUN_1418fc588(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  PSRWLOCK SRWLock;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  PSRWLOCK pRVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x208) != 0) && (lVar6 = *(longlong *)(param_1 + 0x288), lVar6 != 0)) {
    piVar4 = (int *)(param_1 + 0x208);
    FUN_1448d5e3c(&local_48,piVar4);
    lVar7 = *(longlong *)(local_48 + 0x270);
    SRWLock = (PSRWLOCK)(lVar7 + 0x98);
    AcquireSRWLockShared(SRWLock);
    plVar2 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    iVar5 = *(int *)(lVar7 + 0x90);
    if (((*(int *)(lVar6 + 0xac) != iVar5) && (*(int *)(lVar6 + 0xac) = iVar5, *piVar4 != 0)) &&
       (lVar6 = *(longlong *)(param_1 + 0x288), lVar6 != 0)) {
      FUN_1448d5e3c(&local_48,piVar4);
      pRVar9 = (PSRWLOCK)(*(longlong *)(local_48 + 0x270) + 0x98);
      AcquireSRWLockShared(pRVar9);
      plVar2 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      puVar8 = *(ushort **)(lVar6 + 0x80);
      if (puVar8 != (ushort *)0x0) {
        *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
      }
      ReleaseSRWLockShared(pRVar9);
    }
    FUN_1448d5e3c(&local_48,piVar4);
    lVar6 = *(longlong *)(local_48 + 0x280);
    pRVar9 = (PSRWLOCK)(lVar6 + 0x20);
    AcquireSRWLockShared(pRVar9);
    plVar2 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    iVar5 = *(int *)(lVar6 + 0x18);
    if (((*(int *)(param_1 + 0x2d8) != iVar5) &&
        (*(int *)(param_1 + 0x2d8) = iVar5, *(int *)(param_1 + 0x208) != 0)) &&
       (lVar6 = *(longlong *)(param_1 + 0x288), lVar6 != 0)) {
      FUN_1448d5e3c(&local_48,piVar4);
      lVar7 = *(longlong *)(local_48 + 0x280);
      AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0x20));
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar4 = (int *)((longlong)local_40 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      if ((*(int *)(lVar6 + 200) == 0) || (*(int *)(lVar6 + 200) != *(int *)(lVar7 + 0x10))) {
        *(int *)(lVar6 + 200) = *(int *)(lVar7 + 0x10);
        FUN_140bee9ec(lVar6 + 0xb8,lVar7);
      }
      puVar8 = *(ushort **)(lVar6 + 0x80);
      if (puVar8 != (ushort *)0x0) {
        *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0x20));
    }
    ReleaseSRWLockShared(pRVar9);
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fc856 FUN_1418fc856 body=95 status=ok
// SIG undefined FUN_1418fc856(void)

ulonglong * FUN_1418fc856(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "SetVisible";
  local_18 = 10;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fc8b6 FUN_1418fc8b6 body=29 status=ok
// SIG undefined FUN_1418fc8b6(void)

undefined8 FUN_1418fc8b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418fc8d4 FUN_1418fc8d4 body=95 status=ok
// SIG undefined FUN_1418fc8d4(void)

ulonglong * FUN_1418fc8d4(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_CinematicSkip";
  local_18 = 0x19;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fc934 FUN_1418fc934 body=408 status=ok
// SIG undefined FUN_1418fc934(void)

void FUN_1418fc934(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1418fc9e7;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar4 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar4) {
    FUN_1446efa72(&local_58,0,uVar4,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar4,_Str,(int)sVar2 + 1);
LAB_1418fc9e7:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,2);
    (**(code **)(*plVar3 + 0x140))(plVar3,(char)param_1[2]);
    (**(code **)(*plVar3 + 0xe8))(plVar3,*(undefined4 *)((longlong)param_1 + 0x14));
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418fcace FUN_1418fcace body=436 status=ok
// SIG undefined FUN_1418fcace(void)

void FUN_1418fcace(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1418fcb81;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar4 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar4) {
    FUN_1446efa72(&local_58,0,uVar4,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar4,_Str,(int)sVar2 + 1);
LAB_1418fcb81:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,4);
    (**(code **)(*plVar3 + 0x128))(plVar3,(int)param_1[2]);
    (**(code **)(*plVar3 + 0x128))(plVar3,*(undefined4 *)((longlong)param_1 + 0x14));
    (**(code **)(*plVar3 + 0x140))(plVar3,(char)param_1[3]);
    (**(code **)(*plVar3 + 0x140))(plVar3,*(undefined1 *)((longlong)param_1 + 0x19));
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418fcc84 FUN_1418fcc84 body=406 status=ok
// SIG undefined FUN_1418fcc84(void)

void FUN_1418fcc84(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1418fcd37;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar4 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar4) {
    FUN_1446efa72(&local_58,0,uVar4,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar4,_Str,(int)sVar2 + 1);
LAB_1418fcd37:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,2);
    (**(code **)(*plVar3 + 0x140))(plVar3,(char)param_1[2]);
    (**(code **)(*plVar3 + 0x140))(plVar3,*(undefined1 *)((longlong)param_1 + 0x11));
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418fce1c FUN_1418fce1c body=406 status=ok
// SIG undefined FUN_1418fce1c(void)

void FUN_1418fce1c(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1418fcecf;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar4 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar4) {
    FUN_1446efa72(&local_58,0,uVar4,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar4,_Str,(int)sVar2 + 1);
LAB_1418fcecf:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,2);
    (**(code **)(*plVar3 + 0x128))(plVar3,(int)param_1[2]);
    (**(code **)(*plVar3 + 0x140))(plVar3,*(undefined1 *)((longlong)param_1 + 0x14));
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418fcfb4 FUN_1418fcfb4 body=68 status=ok
// SIG undefined FUN_1418fcfb4(void)

undefined8 * FUN_1418fcfb4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c54f0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 1418fcff8 FUN_1418fcff8 body=118 status=ok
// SIG undefined FUN_1418fcff8(void)

void FUN_1418fcff8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c62c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1418fd06e FUN_1418fd06e body=735 status=ok
// SIG undefined FUN_1418fd06e(void)

void FUN_1418fd06e(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x208) == 0)) goto LAB_1418fd0fe;
  FUN_1448d5e3c(&local_50,param_1 + 0x208);
  lVar5 = *(longlong *)(local_50 + 0x430);
  AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0xf0));
  plVar7 = (longlong *)CONCAT44(uStack_44,local_48);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if (*(int *)(param_1 + 0x2c4) != *(int *)(lVar5 + 0xe8)) {
    *(int *)(param_1 + 0x2c4) = *(int *)(lVar5 + 0xe8);
    iVar11 = *(int *)(param_1 + 0x2c0);
    if (((-1 < (longlong)iVar11) && (iVar11 < *(int *)(lVar5 + 0x38))) &&
       (puVar12 = (undefined8 *)((longlong)iVar11 * 0x70 + *(longlong *)(lVar5 + 0x30)),
       puVar12 != (undefined8 *)0x0)) {
      *(undefined8 *)(lVar4 + 0xb0) = *puVar12;
      plVar7 = (longlong *)puVar12[5];
      plVar8 = *(longlong **)(lVar4 + 200);
      if (plVar8 != plVar7) {
        *(longlong **)(lVar4 + 200) = plVar7;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      *(undefined4 *)(lVar4 + 0xd0) = *(undefined4 *)(puVar12 + 6);
      plVar7 = (longlong *)puVar12[8];
      plVar8 = *(longlong **)(lVar4 + 0xd8);
      if (plVar8 != plVar7) {
        *(longlong **)(lVar4 + 0xd8) = plVar7;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      *(undefined4 *)(lVar4 + 0xe0) = *(undefined4 *)(puVar12 + 9);
      FUN_144a787a6(lVar4 + 0xb8,puVar12 + 2);
      FUN_144a2b0a4(puVar12 + 0xb,&local_50);
      if ((longlong *)(lVar4 + 0xe8) == &local_50) {
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar4 + 0xe8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar4 + 0xe8) = local_50;
        local_50 = 0;
        *(undefined4 *)(lVar4 + 0xf0) = local_48;
        *(undefined4 *)(lVar4 + 0xf4) = uStack_44;
      }
      if (*(int *)(lVar4 + 0xf0) == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar4 + 0xe8);
      }
      lVar10 = 0;
      do {
        uVar3 = puVar9[lVar10];
        bVar2 = "warning"[lVar10];
        iVar11 = (uint)uVar3 - (uint)bVar2;
        if (iVar11 == 0) {
          iVar11 = 0;
          if (uVar3 == 0) goto LAB_1418fd2d4;
        }
        else {
          if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1418fd2d4;
          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto code_r0x0001418fd2d1;
        }
        lVar10 = lVar10 + 1;
      } while( true );
    }
    goto LAB_1418fd13d;
  }
  goto LAB_1418fd0f5;
code_r0x0001418fd2d1:
  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1418fd2d4:
  *(bool *)(lVar4 + 0x110) = iVar11 != 0;
LAB_1418fd13d:
  *(undefined4 *)(lVar4 + 0xf8) = *(undefined4 *)(lVar5 + 0x38);
  if (*(int *)(lVar4 + 0xfc) != *(int *)(param_1 + 0x2c0)) {
    *(int *)(lVar4 + 0xfc) = *(int *)(param_1 + 0x2c0);
  }
  puVar6 = *(ushort **)(lVar4 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
  }
LAB_1418fd0f5:
  ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0xf0));
LAB_1418fd0fe:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fd34e FUN_1418fd34e body=708 status=ok
// SIG undefined FUN_1418fd34e(void)

void FUN_1418fd34e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ushort *puVar7;
  undefined1 auStack_108 [32];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  ulonglong local_40 [3];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 != 0) {
    FUN_1448d5e3c(&local_88,param_1 + 0x208);
    lVar6 = *(longlong *)(local_88 + 0x360);
    AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0x20));
    plVar2 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if ((*(int *)(lVar5 + 0xac) != *(int *)(lVar6 + 0x18)) &&
       (*(int *)(lVar5 + 0xac) = *(int *)(lVar6 + 0x18),
       *(int *)(lVar5 + 0xb4) != *(int *)(lVar6 + 0x14))) {
      cVar4 = *(char *)(lVar6 + 0x10);
      *(char *)(lVar5 + 0xb0) = cVar4;
      *(undefined4 *)(lVar5 + 0xb4) = *(undefined4 *)(lVar6 + 0x14);
      if (cVar4 == '\x01') {
        local_78 = 0;
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        local_70 = 0;
        uStack_68 = 0;
        FUN_1446ddda2(&local_88,"PopupRebindingGamepadText",0);
        FUN_1410d1eba(local_e8,&local_88);
        FUN_14023409e(&local_d8,local_e8,1);
        local_a8 = &local_60;
        local_60 = 0;
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        local_48 = 0;
        local_a0 = local_40;
        FUN_14010d304(&local_98);
        local_b8 = local_d8;
        local_b0 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_c8,&local_b8,&local_98);
        FUN_14007f2db(local_98,local_90);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (plStack_50 != (longlong *)0x0) {
          (**(code **)(*plStack_50 + 0x10))();
        }
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_d0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar3 = (int *)((longlong)local_d0 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_d0 + 0x10))(local_d0);
            }
          }
        }
        FUN_140008f88(lVar5 + 0xb8,local_c8);
        if (local_c8[0] != (longlong *)0x0) {
          (**(code **)(*local_c8[0] + 0x10))();
        }
      }
      else {
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        local_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        FUN_1446ddda2(&local_88,"PopupRebindingText",0);
        FUN_1410d1eba(&local_60,&local_88);
        FUN_140008f88(lVar5 + 0xb8,&local_60);
        local_e8[0] = (longlong *)CONCAT44(uStack_5c,local_60);
      }
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      puVar7 = *(ushort **)(lVar5 + 0x80);
      if (puVar7 != (ushort *)0x0) {
        *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0x20));
  }
  if ((local_40[0] ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418fd614 FUN_1418fd614 body=59 status=ok
// SIG undefined FUN_1418fd614(void)

longlong FUN_1418fd614(longlong param_1,int param_2)

{
  FUN_140e027f0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418fd650 FUN_1418fd650 body=95 status=ok
// SIG undefined FUN_1418fd650(void)

ulonglong * FUN_1418fd650(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_HintBarSetActions";
  local_18 = 0x1d;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fd6b0 FUN_1418fd6b0 body=95 status=ok
// SIG undefined FUN_1418fd6b0(void)

ulonglong * FUN_1418fd6b0(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_MenuActiveChanged";
  local_18 = 0x1d;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fd710 FUN_1418fd710 body=95 status=ok
// SIG undefined FUN_1418fd710(void)

ulonglong * FUN_1418fd710(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_PlayerHovered";
  local_18 = 0x19;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fd770 FUN_1418fd770 body=95 status=ok
// SIG undefined FUN_1418fd770(void)

ulonglong * FUN_1418fd770(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_MenuExpandedChanged";
  local_18 = 0x1f;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fd7d0 FUN_1418fd7d0 body=118 status=ok
// SIG undefined FUN_1418fd7d0(void)

void FUN_1418fd7d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cc880;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1418fd846 FUN_1418fd846 body=118 status=ok
// SIG undefined FUN_1418fd846(void)

void FUN_1418fd846(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ccb00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1418fd8bc FUN_1418fd8bc body=118 status=ok
// SIG undefined FUN_1418fd8bc(void)

void FUN_1418fd8bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ccdb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1418fd932 FUN_1418fd932 body=464 status=ok
// SIG undefined FUN_1418fd932(void)

void FUN_1418fd932(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 == 0) goto LAB_1418fd9af;
  FUN_1448d5e3c(&local_40,param_1 + 0x208);
  plVar5 = *(longlong **)(local_40 + 0x300);
  SRWLock = (PSRWLOCK)(plVar5 + 9);
  AcquireSRWLockShared(SRWLock);
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
  if (*(int *)(lVar4 + 0xac) == (int)plVar5[8]) {
    ReleaseSRWLockShared(SRWLock);
    goto LAB_1418fd9af;
  }
  *(int *)(lVar4 + 0xac) = (int)plVar5[8];
  iVar7 = (int)plVar5[1];
  if ((bool)*(char *)(lVar4 + 0xb0) == 0 < iVar7) {
    if (*(int *)(lVar4 + 0xb4) == 0) {
      iVar9 = 1;
      goto LAB_1418fd9ff;
    }
  }
  else {
    iVar9 = *(int *)(lVar4 + 0xb4) + 1;
LAB_1418fd9ff:
    *(bool *)(lVar4 + 0xb0) = 0 < iVar7;
    *(int *)(lVar4 + 0xb4) = iVar9;
    iVar7 = (int)plVar5[1];
  }
  *(int *)(lVar4 + 0xec) = *(int *)(lVar4 + 0xec) + 1;
  *(int *)(lVar4 + 0xe8) = iVar7;
  if (*(int *)(lVar4 + 0xf0) == 0) {
    iVar7 = 1;
    if (*(int *)(lVar4 + 0xf4) == 0) goto LAB_1418fda38;
  }
  else {
    iVar7 = *(int *)(lVar4 + 0xf4) + 1;
LAB_1418fda38:
    *(undefined4 *)(lVar4 + 0xf0) = 0;
    *(int *)(lVar4 + 0xf4) = iVar7;
  }
  if (0 < (int)plVar5[1]) {
    lVar6 = 1;
    uVar8 = 0;
    do {
      uVar3 = *(undefined1 *)(*plVar5 + lVar6);
      *(int *)(lVar4 + 0xd8) = *(int *)(lVar4 + 0xd8) + 1;
      *(undefined1 *)(*(longlong *)(lVar4 + 200) + uVar8) = uVar3;
      if (*(char *)(*plVar5 + lVar6) == '\x01') {
        *(int *)(lVar4 + 0xf4) = *(int *)(lVar4 + 0xf4) + 1;
        *(int *)(lVar4 + 0xf0) = *(int *)(lVar4 + 0xf0) + 1;
      }
      if (3 < uVar8) break;
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x168;
    } while ((longlong)uVar8 < (longlong)(int)plVar5[1]);
  }
  ReleaseSRWLockShared(SRWLock);
  FUN_141223910(param_1,*(undefined4 *)(lVar4 + 0xf8));
  if (*(int *)(param_1 + 0x2a0) < 0) {
    FUN_141331aa8(param_1);
  }
LAB_1418fd9af:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418fdb04 FUN_1418fdb04 body=141 status=ok
// SIG undefined FUN_1418fdb04(void)

void FUN_1418fdb04(longlong *param_1)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  if (((*(byte *)((longlong)param_1 + 0x8c) & 0x80) != 0) && (lVar1 = param_1[0x51], lVar1 != 0)) {
    iVar3 = FUN_140635a7c();
    if ((bool)*(char *)(lVar1 + 0xfc) != (iVar3 != 0)) {
      *(bool *)(lVar1 + 0xfc) = iVar3 != 0;
      *(bool *)(lVar1 + 0xfa) = iVar3 == 0;
      if (iVar3 != 0) {
        *(undefined1 *)(lVar1 + 0xfb) = 0;
      }
      puVar2 = *(ushort **)(lVar1 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
      }
    }
  }
  return;
}



// FUNCTION 1418fdb92 FUN_1418fdb92 body=366 status=ok
// SIG undefined FUN_1418fdb92(void)

void FUN_1418fdb92(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1410c2540();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    uVar2 = FUN_141292688();
    plVar3 = (longlong *)FUN_141292680(uVar2);
    if (DAT_14cb9ad40 != 0) {
      if ((longlong)(int)plVar3[1] != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*plVar3 + lVar4) == DAT_14cb9ad40) goto LAB_1418fdc51;
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)plVar3[1] * 8 != lVar4);
      }
      if ((longlong)(int)plVar3[3] != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(plVar3[2] + lVar4) == DAT_14cb9ad40) goto LAB_1418fdc51;
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)plVar3[3] * 8 != lVar4);
      }
    }
    FUN_140056680(local_30,L"controls_mouse_keyboard");
    FUN_140baf0c4(lVar1 + 0x188,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
LAB_1418fdc51:
    uVar2 = FUN_141292688();
    plVar3 = (longlong *)FUN_141292680(uVar2);
    if (DAT_14cb9acd0 != 0) {
      if ((longlong)(int)plVar3[1] != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*plVar3 + lVar4) == DAT_14cb9acd0) goto LAB_1418fdce2;
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)plVar3[1] * 8 != lVar4);
      }
      if ((longlong)(int)plVar3[3] != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(plVar3[2] + lVar4) == DAT_14cb9acd0) goto LAB_1418fdce2;
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)plVar3[3] * 8 != lVar4);
      }
    }
    FUN_140056680(local_30,L"visuals_advanced");
    FUN_140baf0c4(lVar1 + 0x188,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_1418fdce2:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fdd02 FUN_1418fdd02 body=203 status=ok
// SIG undefined FUN_1418fdd02(void)

void FUN_1418fdd02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar3 = *(longlong *)(local_38 + 0x360);
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x20));
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((*(int *)(param_1 + 0x350) != *(int *)(lVar3 + 0x18)) &&
     (*(int *)(param_1 + 0x350) = *(int *)(lVar3 + 0x18),
     *(int *)(param_1 + 0x358) != *(int *)(lVar3 + 0xc))) {
    *(undefined1 *)(param_1 + 0x354) = *(undefined1 *)(lVar3 + 8);
    *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(lVar3 + 0xc);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fddce FUN_1418fddce body=475 status=ok
// SIG undefined FUN_1418fddce(void)

void FUN_1418fddce(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_140f9bb7c(lVar1 + 0x1d0);
    *(undefined8 *)(lVar1 + 0x1e4) = 0;
    *(undefined4 *)(lVar1 + 0x1ec) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x1f0) = 0xffffffff;
    *(undefined4 *)(lVar1 + 500) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x1f8) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x1fc) = 0;
    *(undefined2 *)(lVar1 + 0x200) = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844850) {
      FUN_144b3d300(&DAT_14c844850);
      if (DAT_14c844850 == -1) {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        *(undefined1 (*) [16])(DAT_14c844840 + 3) = (undefined1  [16])0x0;
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
    plVar4 = DAT_14c844840;
    plVar2 = *(longlong **)(lVar1 + 0x288);
    if (plVar2 != DAT_14c844840) {
      *(longlong **)(lVar1 + 0x288) = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(lVar1 + 0x290) = DAT_14c844848;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar6 = &PTR_FUN_14b9c7210;
  local_40 = "SetVisible";
  local_38 = 10;
  local_34 = 0;
  uVar5 = FUN_14001a6c0(&local_40,1);
  FUN_14039176c(puVar6,uVar3,uVar5,1);
  *puVar6 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar6 + 7) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
  FUN_140391314(param_1,puVar6);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fdfaa FUN_1418fdfaa body=824 status=ok
// SIG undefined FUN_1418fdfaa(void)

void FUN_1418fdfaa(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 *local_a8;
  undefined1 *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88 [4];
  longlong *local_78;
  longlong local_70;
  undefined1 local_68 [8];
  int local_60;
  int iStack_5c;
  longlong *local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_60,param_1 + 0x208);
    lVar4 = *(longlong *)(CONCAT44(iStack_5c,local_60) + 0x30);
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x40));
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_58 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    if (*(int *)(lVar3 + 0xac) != *(int *)(lVar4 + 0x38)) {
      *(int *)(lVar3 + 0xac) = *(int *)(lVar4 + 0x38);
      if (*(int *)(lVar3 + 0xe4) != *(int *)(lVar4 + 0x34)) {
        *(undefined1 *)(lVar3 + 0xe0) = *(undefined1 *)(lVar4 + 0x30);
        *(undefined4 *)(lVar3 + 0xe4) = *(undefined4 *)(lVar4 + 0x34);
      }
      FUN_14000bbd8(&local_60,lVar4,0);
      if (((local_60 == 0) || (iStack_5c == 0)) || (local_60 == DAT_14c948000)) {
        plVar8 = (longlong *)FUN_140e82300();
        plVar6 = (longlong *)*plVar8;
        plVar7 = *(longlong **)(lVar3 + 0xc0);
        if (plVar7 != plVar6) {
          *(longlong **)(lVar3 + 0xc0) = plVar6;
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 8))();
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        *(int *)(lVar3 + 200) = (int)plVar8[1];
      }
      else {
        lVar2 = lVar3 + 0xc0;
        FUN_14000bbd8(local_88,lVar4,0);
        FUN_140ac6c96(local_88,lVar2);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (*(int *)(lVar4 + 0x20) - 2U < 0x7fffffff) {
          FUN_140009b9a(local_d8,lVar4 + 0x18);
          FUN_14023409e(&local_e8,lVar2,1);
          local_88[0] = 4;
          FUN_14023423e(&local_78,local_d8);
          local_a0 = local_68;
          local_a8 = local_88;
          FUN_14010d304(&local_98);
          local_b8 = local_e8;
          local_b0 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_c8,&local_b8,&local_98);
          FUN_14007f2db(local_98,local_90);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 0x10))();
          }
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_e0 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar1 = (int *)((longlong)local_e0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_e0 + 0x10))(local_e0);
              }
            }
          }
          if (local_d8[0] != (longlong *)0x0) {
            (**(code **)(*local_d8[0] + 0x10))();
          }
          FUN_140008f88(lVar2,local_c8);
          if (local_c8[0] != (longlong *)0x0) {
            (**(code **)(*local_c8[0] + 0x10))();
          }
        }
      }
      puVar5 = *(ushort **)(lVar3 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x40));
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fe2e4 FUN_1418fe2e4 body=123 status=ok
// SIG undefined FUN_1418fe2e4(void)

longlong FUN_1418fe2e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x650;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fe360 FUN_1418fe360 body=95 status=ok
// SIG undefined FUN_1418fe360(void)

ulonglong * FUN_1418fe360(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_StartMenuActiveStatusChanged";
  local_18 = 0x28;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fe3c0 FUN_1418fe3c0 body=95 status=ok
// SIG undefined FUN_1418fe3c0(void)

ulonglong * FUN_1418fe3c0(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "SetCanAddSplitscreenPlayer";
  local_18 = 0x1a;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fe420 FUN_1418fe420 body=95 status=ok
// SIG undefined FUN_1418fe420(void)

ulonglong * FUN_1418fe420(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "SplitScreenMenuStatusChanged";
  local_18 = 0x1c;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fe480 FUN_1418fe480 body=118 status=ok
// SIG undefined FUN_1418fe480(void)

void FUN_1418fe480(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d2a10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1418fe4f6 FUN_1418fe4f6 body=118 status=ok
// SIG undefined FUN_1418fe4f6(void)

void FUN_1418fe4f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1418fe56c FUN_1418fe56c body=118 status=ok
// SIG undefined FUN_1418fe56c(void)

void FUN_1418fe56c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1418fe5e2 FUN_1418fe5e2 body=118 status=ok
// SIG undefined FUN_1418fe5e2(void)

void FUN_1418fe5e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3d70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1418fe658 FUN_1418fe658 body=120 status=ok
// SIG undefined FUN_1418fe658(void)

longlong FUN_1418fe658(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x70);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fe6d1 FUN_1418fe6d1 body=926 status=ok
// SIG undefined FUN_1418fe6d1(void)

longlong * FUN_1418fe6d1(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong *local_c0 [2];
  longlong *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  longlong *plStack_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a0[0] = 0x100;
  local_9c = 0x100000000;
  uStack_94 = 0x144;
  local_8c = 3;
  local_58 = (wchar_t *)0x0;
  plStack_50 = (longlong *)0x0;
  FUN_1413a454c(&local_b0,param_2,local_a0,&local_58);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
  plVar3 = DAT_14c844840;
  *param_1 = (longlong)DAT_14c844840;
  if (plVar3 != (longlong *)0x0) {
    if (*(code **)(*plVar3 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_3 == '\0') {
    plVar3 = (longlong *)*param_1;
    if (plVar3 != local_b0) {
      *param_1 = (longlong)local_b0;
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)(param_1 + 1) = local_a8;
  }
  else {
    local_d0 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 8))();
    }
    local_c8 = local_a8;
    local_58 = L"CashCurrencySymbolWithAmount";
    plStack_50._0_4_ = 0x1c;
    FUN_1446e940c(local_f4,&local_58);
    local_58 = L"CashCurrency";
    plStack_50 = (longlong *)CONCAT44(plStack_50._4_4_,0xc);
    FUN_1446e940c(local_f8,&local_58);
    FUN_140208bae(local_f0,local_f8,local_f4,L"[cashicon]{0}");
    FUN_14023409e(&local_e0,local_f0,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,&local_d0);
    local_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_e0;
    local_80 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c0,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)local_d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x10))();
    }
    FUN_140008f88(param_1,local_c0);
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
  }
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fea70 FUN_1418fea70 body=30 status=ok
// SIG undefined FUN_1418fea70(void)

undefined4 FUN_1418fea70(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  return *(undefined4 *)(lVar1 + 0x150 + (ulonglong)(param_2 & 0xff) * 4);
}



// FUNCTION 1418fea8e FUN_1418fea8e body=95 status=ok
// SIG undefined FUN_1418fea8e(void)

ulonglong * FUN_1418fea8e(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "QueueThumbnailRender";
  local_18 = 0x14;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418feaee FUN_1418feaee body=95 status=ok
// SIG undefined FUN_1418feaee(void)

ulonglong * FUN_1418feaee(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_Progression_Point";
  local_18 = 0x1d;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418feb4e FUN_1418feb4e body=346 status=ok
// SIG undefined FUN_1418feb4e(void)

void FUN_1418feb4e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418febe0;
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
LAB_1418febe0:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418fecaa FUN_1418fecaa body=151 status=ok
// SIG undefined FUN_1418fecaa(void)

void FUN_1418fecaa(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x38)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x38,8);
      uVar3 = uVar3 / 0x38;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x38,8);
    }
  }
  return;
}



// FUNCTION 1418fed42 FUN_1418fed42 body=620 status=ok
// SIG undefined FUN_1418fed42(void)

undefined8
FUN_1418fed42(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4,longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *plStack_50;
  code *local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_3 == 0) {
    lVar4 = (**(code **)(*param_1 + 0x180))();
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
      lVar4 = FUN_1400f6f32(lVar4);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x68) != 0)) {
        lVar4 = FUN_140d1732e(*(longlong *)(lVar4 + 0x68),param_2 + 0x18);
        if (lVar4 != 0) {
          if (DAT_14cbadd90 == 0) {
            local_80 = local_48;
            local_48[0] = FUN_141030f22;
            local_70 = FUN_14081d0ea;
            local_78 = &LAB_1459f2e4c;
            local_88 = &LAB_148c39de3;
            local_90 = &LAB_1457a9eb2;
            local_98 = &DAT_149e063b2;
            local_a0 = 0;
            local_a8 = 0x10000004;
            local_b0 = 0x10;
            local_b8 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
            if (((byte *)*param_5 == (byte *)0x0) || ((*(byte *)*param_5 & 3) == 0)) {
              FUN_14009b010(param_5,3,0);
            }
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
            FUN_14009b010(&local_58,1,0);
            if (local_58 != 0) {
              FUN_1401269d0(local_58,lVar4 + 0x3c30);
            }
            local_68 = DAT_14cbe54e8;
            local_60 = DAT_14cbe54f0;
            FUN_1448075d0(local_48);
            if (*param_5 != 0) {
              local_b8 = local_b8 & 0xffffff00;
              FUN_14014191c(*param_5,local_48,&local_58,0);
            }
            if (local_30 != 0) {
              FUN_1400020a8();
            }
            plVar3 = plStack_50;
            if (plStack_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_50 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_50)(plStack_50);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            uVar5 = 1;
            goto LAB_1418feebe;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_1418feebe:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418fefb0 FUN_1418fefb0 body=767 status=ok
// SIG undefined FUN_1418fefb0(void)

void FUN_1418fefb0(longlong *param_1,double *param_2,double *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_228 [40];
  double local_200;
  double local_1f8;
  undefined **local_1f0;
  undefined2 local_1e8;
  undefined1 local_1e6;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined7 local_188;
  undefined4 uStack_181;
  undefined1 local_178 [184];
  float local_c0;
  float local_bc;
  float local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined8 local_94;
  byte local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  plVar3 = DAT_14c966ea8;
  uVar4 = DAT_14c966ea0;
  uVar6 = DAT_14c966e98;
  if (lVar5 != 0) {
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    local_1c4 = (float)param_2[1];
    local_1c8 = (float)*param_2;
    local_1cc = (float)param_3[1];
    local_1d0 = (float)*param_3;
    local_1e8 = 0;
    local_1e6 = 0;
    local_1d8 = 0;
    local_1f0 = &PTR_FUN_149eda650;
    local_1bc = local_1cc - local_1c4;
    local_1c0 = local_1d0 - local_1c8;
    local_1b8 = &local_88;
    local_1b0 = uVar6;
    local_1a8 = uVar4;
    local_1a0 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_198 = 10;
    local_190 = 0x3f800000;
    local_18c = 0;
    local_188 = 0;
    uStack_181 = 0;
    local_1e4 = param_4;
    local_1e0 = param_4;
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
    uVar6 = FUN_1449baec6(lVar5);
    FUN_14039c14e(uVar6,&local_200);
    plVar3 = (longlong *)param_1[5];
    local_b8 = *(float *)(plVar3 + 0x1b);
    local_bc = (float)local_1f8;
    local_c0 = (float)local_200;
    local_a4 = local_b8 + 0.0;
    local_a0 = local_b8 * 0.0 + 0.0;
    local_94 = 0;
    local_8c = local_8c & 0xfe;
    local_b4 = 0;
    uStack_ac = 0;
    local_9c = local_a0;
    local_98 = local_a4;
    (**(code **)(*plVar3 + 0x70))(plVar3,local_178,&local_c0,&local_1f0);
    FUN_14493db24(local_178);
    plVar3 = local_1a0;
    local_1f0 = &PTR_FUN_149eda650;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_1405535a6(&local_88);
  }
  if ((local_38 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ff2b0 FUN_1418ff2b0 body=968 status=ok
// SIG undefined FUN_1418ff2b0(void)

void FUN_1418ff2b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  ushort *puVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  PSRWLOCK local_78;
  int local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 != 0) {
    FUN_1448d5e3c(&local_d8,param_1 + 0x208);
    plVar11 = (longlong *)local_d8[0x7e];
    local_78 = (PSRWLOCK)(plVar11 + 6);
    local_70 = 0;
    AcquireSRWLockShared(local_78);
    plVar2 = (longlong *)CONCAT44(uStack_cc,local_d0);
    local_68 = plVar11;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar2 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    plVar11 = local_68;
    if (*(int *)(lVar6 + 0xac) != (int)local_68[5]) {
      FUN_148ef3e92(param_1,&local_78);
      *(int *)(lVar6 + 0xac) = (int)plVar11[5];
      plVar2 = (longlong *)(lVar6 + 0xc0);
      iVar4 = *(int *)(lVar6 + 0xcc);
      FUN_145cee4a4(*(undefined8 *)(lVar6 + 0xc0),*(undefined4 *)(lVar6 + 200));
      *(undefined4 *)(lVar6 + 200) = 0;
      if ((iVar4 < 0) && (*(int *)(lVar6 + 0xcc) != 0)) {
        FUN_148efcaf8(plVar2);
      }
      if ((int)plVar11[1] == 0) {
        bVar3 = *(byte *)(plVar11 + 3);
        *(byte *)(lVar6 + 0x218) = bVar3;
        *(byte *)(lVar6 + 0x219) = bVar3 ^ 1;
        *(undefined1 *)(lVar6 + 0x168) = 1;
      }
      else {
        *(undefined2 *)(lVar6 + 0x218) = 0;
        *(undefined1 *)(lVar6 + 0x168) = 0;
        if ((longlong)(int)plVar11[1] != 0) {
          plVar12 = (longlong *)*plVar11;
          plVar11 = plVar12 + (longlong)(int)plVar11[1] * 0xc;
          do {
            FUN_148c7d6e2(&local_d8);
            plVar9 = local_d8;
            plVar7 = (longlong *)*plVar12;
            if (local_d8 != plVar7) {
              local_d8 = plVar7;
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 8))();
              }
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
            local_d0 = (undefined4)plVar12[1];
            FUN_140002266(local_f8,L"%d/%d",(int)plVar12[4],(int)plVar12[5]);
            FUN_140233b1a(local_e8,local_f8);
            FUN_140008f88(local_c8,local_e8);
            if (local_e8[0] != (longlong *)0x0) {
              (**(code **)(*local_e8[0] + 0x10))();
            }
            if (local_f8[0] != 0) {
              FUN_1400020a8();
            }
            local_f8[0] = 0;
            local_f8[1] = 0;
            FUN_144a83b10(local_f8,(int)plVar12[3]);
            FUN_140233b1a(local_e8,local_f8);
            FUN_140008f88(local_b8,local_e8);
            if (local_e8[0] != (longlong *)0x0) {
              (**(code **)(*local_e8[0] + 0x10))();
            }
            if (local_f8[0] != 0) {
              FUN_1400020a8();
            }
            FUN_144a787a6(local_98,plVar12 + 6);
            FUN_144a787a6(local_88,plVar12 + 9);
            uVar5 = *(uint *)(plVar12 + 3);
            pwVar10 = L"none";
            if (((-1 < (int)uVar5 && uVar5 != 9999) && (pwVar10 = L"high", 100 < uVar5)) &&
               (pwVar10 = L"low", uVar5 < 0xb0)) {
              pwVar10 = L"medium";
            }
            FUN_14020fad6(local_a8,pwVar10);
            iVar4 = *(int *)(lVar6 + 200);
            *(uint *)(lVar6 + 200) = iVar4 + 1U;
            if (*(uint *)(lVar6 + 0xcc) < iVar4 + 1U) {
              FUN_148efcb28(plVar2,iVar4);
            }
            FUN_148c7dbc0((longlong)iVar4 * 0x60 + *plVar2,&local_d8);
            FUN_148c7d71a(&local_d8);
            plVar12 = plVar12 + 0xc;
          } while (plVar12 != plVar11);
        }
      }
      puVar8 = *(ushort **)(lVar6 + 0x80);
      if (puVar8 != (ushort *)0x0) {
        *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
      }
    }
    if (local_70 == 0) {
      ReleaseSRWLockShared(local_78);
    }
    else {
      ReleaseSRWLockExclusive(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ff67a FUN_1418ff67a body=790 status=ok
// SIG undefined FUN_1418ff67a(void)

void FUN_1418ff67a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 == 0) goto LAB_1418ff6fd;
  FUN_1448d5e3c(&local_40,param_1 + 0x208);
  lVar5 = *(longlong *)(local_40 + 0x520);
  AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0x168));
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
  if (*(int *)(lVar4 + 0xac) != *(int *)(lVar5 + 0x118)) {
    *(int *)(lVar4 + 0xac) = *(int *)(lVar5 + 0x118);
    *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(lVar5 + 0xe0);
    *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(lVar5 + 0xe8);
    fVar3 = *(float *)(lVar5 + 0xf0);
    *(float *)(param_1 + 0x2a0) = fVar3;
    *(uint *)(param_1 + 0x2a4) =
         ~-(uint)(0.0 < fVar3) & 0x3f800000 | (uint)(1.0 / fVar3) & -(uint)(0.0 < fVar3);
    if (*(int *)(lVar4 + 0xe4) != *(int *)(lVar5 + 0xd4)) {
      *(undefined4 *)(lVar4 + 0xe0) = *(undefined4 *)(lVar5 + 0xd0);
      *(undefined4 *)(lVar4 + 0xe4) = *(undefined4 *)(lVar5 + 0xd4);
    }
    if (*(int *)(lVar4 + 0xb4) != *(int *)(lVar5 + 0x10c)) {
      *(undefined1 *)(lVar4 + 0xb0) = *(undefined1 *)(lVar5 + 0x108);
      *(undefined4 *)(lVar4 + 0xb4) = *(undefined4 *)(lVar5 + 0x10c);
    }
    cVar8 = *(char *)(lVar5 + 0x108);
    if ((bool)*(char *)(lVar4 + 0xd0) == (cVar8 == '\x02')) {
      if (*(int *)(lVar4 + 0xd4) == 0) {
        iVar9 = 1;
        goto LAB_1418ff8a4;
      }
    }
    else {
      iVar9 = *(int *)(lVar4 + 0xd4) + 1;
LAB_1418ff8a4:
      *(bool *)(lVar4 + 0xd0) = cVar8 == '\x02';
      *(int *)(lVar4 + 0xd4) = iVar9;
      cVar8 = *(char *)(lVar5 + 0x108);
    }
    if ((bool)*(char *)(lVar4 + 0xd8) == (cVar8 == '\0')) {
      if (*(int *)(lVar4 + 0xdc) == 0) {
        iVar9 = 1;
        goto LAB_1418ff8c0;
      }
    }
    else {
      iVar9 = *(int *)(lVar4 + 0xdc) + 1;
LAB_1418ff8c0:
      *(bool *)(lVar4 + 0xd8) = cVar8 == '\0';
      *(int *)(lVar4 + 0xdc) = iVar9;
    }
    if (*(int *)(lVar4 + 0xc4) != *(int *)(lVar5 + 0xdc)) {
      *(undefined4 *)(lVar4 + 0xc0) = *(undefined4 *)(lVar5 + 0xd8);
      *(undefined4 *)(lVar4 + 0xc4) = *(undefined4 *)(lVar5 + 0xdc);
    }
    if (*(int *)(lVar4 + 0xcc) != *(int *)(lVar5 + 0x114)) {
      *(undefined1 *)(lVar4 + 200) = *(undefined1 *)(lVar5 + 0x110);
      *(undefined4 *)(lVar4 + 0xcc) = *(undefined4 *)(lVar5 + 0x114);
    }
    puVar6 = *(ushort **)(lVar4 + 0x80);
    if (puVar6 != (ushort *)0x0) {
      *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
    }
    if (*(int *)(param_1 + 0x2a8) != *(int *)(lVar5 + 0xd0)) {
      FUN_140de1078(param_1,&DAT_14cbe5b50,0);
      *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(lVar5 + 0xd0);
    }
    iVar9 = *(int *)(param_1 + 0x2ac);
    iVar7 = *(int *)(lVar5 + 0xd8);
    if (iVar9 != iVar7) {
      if ((iVar9 != 0) && (iVar9 < iVar7)) {
        FUN_140de1078(param_1,&DAT_14cbe5bb0,0);
        iVar7 = *(int *)(lVar5 + 0xd8);
      }
      *(int *)(param_1 + 0x2ac) = iVar7;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0x168));
LAB_1418ff6fd:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ff992 FUN_1418ff992 body=1075 status=ok
// SIG undefined FUN_1418ff992(void)

void FUN_1418ff992(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *_Str;
  size_t sVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  char local_1d0;
  undefined1 local_1c8 [256];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (param_1[0x51] == 0) goto LAB_1418ffaed;
  *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
  (**(code **)(*param_1 + 0x60))(param_1);
  lVar3 = param_1[0x51];
  if (lVar3 == 0) goto LAB_1418ffaed;
  if ((((*(int *)((longlong)param_1 + 0x34) != 0) &&
       (uVar1 = *(uint *)(param_1 + 6), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)((longlong)param_1 + 0x34))) &&
      (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && ((longlong *)*plVar10 != (longlong *)0x0))))))
  {
    iVar2 = *(int *)(lVar3 + 0xbc);
    if (0.0 < *(float *)(param_1 + 0x53)) {
      lVar7 = (**(code **)(*(longlong *)*plVar10 + 0x180))();
      fVar11 = (float)*(double *)(lVar7 + 0x6d0) - *(float *)(param_1 + 0x53);
      if (*(float *)((longlong)param_1 + 0x2a4) <= fVar11) {
        fVar11 = *(float *)((longlong)param_1 + 0x2a4);
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar11 = 1.0 - (fVar11 * *(float *)(param_1 + 0x54) + *(float *)((longlong)param_1 + 0x29c));
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      iVar6 = *(int *)(lVar3 + 0xbc);
      if (((fVar11 != *(float *)(lVar3 + 0xb8)) || (NAN(fVar11) || NAN(*(float *)(lVar3 + 0xb8))))
         || (iVar6 == 0)) {
        *(float *)(lVar3 + 0xb8) = fVar11;
        iVar6 = iVar6 + 1;
        *(int *)(lVar3 + 0xbc) = iVar6;
      }
      if (iVar2 != iVar6) goto LAB_1418ffb93;
    }
    else if (((*(float *)(lVar3 + 0xb8) != 0.0) || (NAN(*(float *)(lVar3 + 0xb8)))) || (iVar2 == 0))
    {
      *(undefined4 *)(lVar3 + 0xb8) = 0;
      *(int *)(lVar3 + 0xbc) = iVar2 + 1;
LAB_1418ffb93:
      puVar4 = *(ushort **)(lVar3 + 0x80);
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
  }
  lVar3 = param_1[0x51];
  if (lVar3 != 0) {
    cVar5 = *(char *)(lVar3 + 0xb0);
    iVar2 = (int)param_1[0x56];
    if (cVar5 == '\0' && iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x56) = 0;
      FUN_140de1078(param_1,&DAT_14cbe5ba0,0,0);
      cVar5 = FUN_144729dda(param_1 + 6);
      if (cVar5 != '\0') {
        uVar8 = FUN_14479d2ce(param_1 + 6);
        local_1e8 = local_1c8;
        local_1d0 = '\0';
        local_1d8 = local_c8;
        local_1e0 = local_1e8;
        _Str = (wchar_t *)FUN_140c7f682(param_1,L"ResetRepKit",&local_1e8);
        local_48 = 0;
        if (_Str == (wchar_t *)0x0) {
          local_40 = 0;
          local_38 = 0;
        }
        else {
          sVar9 = wcslen(_Str);
          FUN_1446fe5a4(local_c8,_Str,sVar9 & 0xffffffff,1);
        }
        FUN_1412a486e(uVar8,local_40);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        if (local_1d0 == '\x01') {
          FUN_1400020a8(local_1e8);
        }
      }
    }
    else {
      if (cVar5 == '\x01' && iVar2 != 1) {
        *(undefined4 *)(param_1 + 0x56) = 1;
        goto LAB_1418ffc9f;
      }
      if (iVar2 != 2) {
        if (cVar5 == '\x02' && 2 < iVar2 - 3U) {
          *(undefined4 *)(param_1 + 0x56) = 2;
          goto LAB_1418ffaed;
        }
        if (2 < iVar2 - 2U) goto LAB_1418ffaed;
      }
      fVar11 = *(float *)(param_1 + 0x54);
      if ((fVar11 != 0.0) || (NAN(fVar11))) {
        fVar11 = *(float *)((longlong)param_1 + 0x2a4) - (1.0 - *(float *)(lVar3 + 0xb8)) / fVar11;
        if (iVar2 == 2) {
          if (fVar11 < 3.0) {
            *(undefined4 *)(param_1 + 0x56) = 3;
            FUN_140de1078(param_1,&DAT_14cbe5b60,0,0);
            goto LAB_1418ffc9f;
          }
        }
        else if (iVar2 == 3) {
          if (fVar11 < 2.0) {
            *(undefined4 *)(param_1 + 0x56) = 4;
            goto LAB_1418ffc9f;
          }
        }
        else if (fVar11 < 1.0) {
          *(undefined4 *)(param_1 + 0x56) = 5;
LAB_1418ffc9f:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_208);
        }
      }
    }
  }
LAB_1418ffaed:
  if ((local_30 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418ffdea FUN_1418ffdea body=1320 status=ok
// SIG undefined FUN_1418ffdea(void)

bool FUN_1418ffdea(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  int local_ac;
  longlong *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *plStack_80;
  byte *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  FUN_14009b010(&local_88,3,0);
  local_78 = (byte *)0x0;
  plStack_70 = (longlong *)0x0;
  FUN_14009b010(&local_78,2,0);
  puVar13 = &DAT_14c9a1270;
  if ((local_78 != (byte *)0x0) && ((*local_78 & 2) != 0)) {
    puVar13 = *(undefined8 **)(local_78 + 8);
  }
  iVar16 = (int)param_1[1];
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  local_98 = param_3;
  local_90 = param_2;
  if (*(int *)((longlong)puVar13 + 0x14) < iVar16) {
    FUN_14009b4be();
    iVar16 = (int)param_1[1];
  }
  local_a8 = param_1;
  if (iVar16 != 0) {
    lVar17 = *param_1;
    lVar18 = 0;
    do {
      if ((local_78 != (byte *)0x0) && ((*local_78 & 3) == 2)) {
        uVar6 = *(undefined4 *)(lVar17 + lVar18);
        plVar22 = *(longlong **)(local_78 + 8);
        iVar14 = (int)plVar22[2];
        *(uint *)(plVar22 + 2) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar22 + 0x14) < iVar14 + 1U) {
          FUN_14000961e(plVar22,iVar14);
        }
        lVar7 = *plVar22;
        lVar21 = (longlong)iVar14 * 0x10;
        *(undefined8 *)(lVar7 + lVar21) = 0;
        ((undefined8 *)(lVar7 + lVar21))[1] = 0;
        FUN_14009b010(lVar7 + lVar21,1,0);
        if (*(longlong *)(lVar7 + lVar21) != 0) {
          FUN_1404a8912(*(longlong *)(lVar7 + lVar21),uVar6);
        }
      }
      lVar18 = lVar18 + 4;
    } while ((longlong)iVar16 * 4 != lVar18);
  }
  plVar22 = local_a8;
  puVar13 = &DAT_14c9a1270;
  if ((local_78 != (byte *)0x0) && ((*local_78 & 2) != 0)) {
    puVar13 = *(undefined8 **)(local_78 + 8);
  }
  iVar16 = *(int *)(puVar13 + 2);
  if ((iVar16 != 0) && (local_88 != 0)) {
    local_b8 = 0;
    FUN_14014191c(local_88,&DAT_14cbe6078,&local_78,0);
  }
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_78 = (byte *)0x0;
  plStack_70 = (longlong *)0x0;
  FUN_14009b010(&local_78,2,0);
  puVar13 = &DAT_14c9a1270;
  if ((local_78 != (byte *)0x0) && ((*local_78 & 2) != 0)) {
    puVar13 = *(undefined8 **)(local_78 + 8);
  }
  iVar14 = (int)plVar22[3] - *(int *)((longlong)plVar22 + 0x44);
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (*(int *)((longlong)puVar13 + 0x14) < iVar14) {
    FUN_14009b4be();
  }
  puVar2 = (uint *)(plVar22 + 4);
  uVar8 = *(uint *)(plVar22 + 7);
  local_ac = iVar16;
  if (uVar8 == 0) {
    uVar20 = 1;
    uVar19 = 0;
    uVar10 = 0;
    iVar16 = 0;
  }
  else {
    puVar9 = (uint *)plVar22[6];
    if ((uint *)plVar22[6] == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar10 = *puVar9;
    if (uVar10 == 0) {
      iVar16 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar16 = uVar8 - 1;
      }
      uVar19 = 0;
      uVar20 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar20 = uVar19;
      }
      iVar16 = 0;
      do {
        if (uVar20 == uVar19) goto LAB_14190015f;
        iVar16 = iVar16 + 0x20;
        uVar10 = puVar9[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar19 = 0;
      iVar16 = 0;
    }
    uVar20 = (ulonglong)(-uVar10 & uVar10);
    uVar5 = uVar20 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar10 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar8 <= (int)uVar10) {
      uVar10 = uVar8;
    }
  }
  if (uVar10 != uVar8) {
    uVar15 = 0xffffffff;
    local_a0 = (ulonglong)uVar8;
    do {
      if ((local_78 != (byte *)0x0) && ((*local_78 & 3) == 2)) {
        uVar6 = *(undefined4 *)(plVar22[2] + (longlong)(int)uVar10 * 0xc);
        plVar22 = *(longlong **)(local_78 + 8);
        iVar14 = (int)plVar22[2];
        *(uint *)(plVar22 + 2) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar22 + 0x14) < iVar14 + 1U) {
          FUN_14000961e(plVar22,iVar14);
        }
        lVar17 = *plVar22;
        lVar18 = (longlong)iVar14 * 0x10;
        *(undefined8 *)(lVar17 + lVar18) = 0;
        ((undefined8 *)(lVar17 + lVar18))[1] = 0;
        FUN_14009b010(lVar17 + lVar18,1,0);
        if (*(longlong *)(lVar17 + lVar18) != 0) {
          FUN_1404a8912(*(longlong *)(lVar17 + lVar18),uVar6);
        }
        uVar8 = *(uint *)(local_a8 + 7);
        plVar22 = local_a8;
      }
      uVar15 = uVar15 & ~(uint)uVar20;
      puVar9 = (uint *)plVar22[6];
      if ((uint *)plVar22[6] == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar14 = (int)uVar19;
      lVar17 = (longlong)iVar14;
      uVar10 = puVar9[lVar17] & uVar15;
      if (uVar10 == 0) {
        iVar11 = uVar8 + 0x1e;
        if (-1 < (int)(uVar8 - 1)) {
          iVar11 = uVar8 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar14) {
          iVar12 = iVar14;
        }
        if (iVar14 < iVar11) {
          lVar18 = 0;
          do {
            uVar10 = puVar9[lVar17 + lVar18 + 1];
            if (uVar10 != 0) {
              uVar19 = (ulonglong)(iVar14 + (int)lVar18 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14190012d;
            }
            iVar16 = iVar16 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar12 - lVar17 != lVar18);
          uVar15 = 0xffffffff;
          iVar14 = iVar12;
        }
        uVar19 = (ulonglong)(iVar14 + 1);
        plVar22 = local_a8;
        uVar10 = uVar8;
      }
      else {
LAB_14190012d:
        uVar20 = (ulonglong)(-uVar10 & uVar10);
        uVar5 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar10 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar8 <= (int)uVar10) {
          uVar10 = uVar8;
        }
      }
    } while (uVar10 != (uint)local_a0);
  }
LAB_14190015f:
  iVar16 = local_ac;
  puVar13 = &DAT_14c9a1270;
  if ((local_78 != (byte *)0x0) && ((*local_78 & 2) != 0)) {
    puVar13 = *(undefined8 **)(local_78 + 8);
  }
  iVar14 = *(int *)(puVar13 + 2);
  if ((iVar14 != 0) && (local_88 != 0)) {
    local_b8 = 0;
    FUN_14014191c(local_88,&DAT_14cbe60a0,&local_78,0);
  }
  plVar22 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar4 = (int *)((longlong)plVar22 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if ((iVar14 != 0 || iVar16 != 0) && (*local_98 != 0)) {
    local_b8 = 0;
    FUN_14014191c(*local_98,local_90,&local_88,0);
  }
  plVar22 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar4 = (int *)((longlong)plVar22 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar14 != 0 || iVar16 != 0;
}



// FUNCTION 141900314 FUN_141900314 body=386 status=ok
// SIG undefined FUN_141900314(void)

ulonglong FUN_141900314(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  undefined1 auStack_a8 [40];
  float local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  float local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pfVar5 = &local_80;
  FUN_1448729ea(param_1 + 0xa0,pfVar5,param_2);
  if (local_60 == 3) {
    uVar2 = 3;
    fVar6 = local_80;
  }
  else {
    pfVar4 = &local_58;
    FUN_1400b56fe(pfVar4,&local_80,3);
    fVar6 = 0.0;
    if (local_38 != 0) {
      fVar6 = local_58;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        pfVar4 = (float *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(pfVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar2 = (uint)local_60;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_68) {
      pfVar5 = (float *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar1)(pfVar5);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  uVar3 = (ulonglong)(fVar6 * (float)param_3);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return (longlong)(fVar6 * (float)param_3 - 9.223372e+18) & (longlong)uVar3 >> 0x3f | uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141900498 FUN_141900498 body=324 status=ok
// SIG undefined FUN_141900498(void)

longlong FUN_141900498(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) && (-1 < *(short *)(param_2 + 0x18))) {
      lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
      if (lVar1 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_30 = &local_18;
          local_18 = FUN_141030f22;
          local_20 = FUN_14081d0ea;
          local_28 = &LAB_1459f2e4c;
          local_38 = &LAB_148c39de3;
          local_40 = &LAB_1457a9eb2;
          local_48 = &DAT_149e063b2;
          local_50 = 0;
          local_58 = 0x10000004;
          local_60 = 0x10;
          local_68 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30))
        goto LAB_141900518;
      }
    }
  }
  lVar1 = 0;
LAB_141900518:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1419005de FUN_1419005de body=132 status=ok
// SIG undefined FUN_1419005de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1419005de(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141900662 FUN_141900662 body=29 status=ok
// SIG undefined FUN_141900662(void)

undefined8 FUN_141900662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141900680 FUN_141900680 body=118 status=ok
// SIG undefined FUN_141900680(void)

void FUN_141900680(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9daed0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1419006f6 FUN_1419006f6 body=29 status=ok
// SIG undefined FUN_1419006f6(void)

undefined8 FUN_1419006f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141900714 FUN_141900714 body=93 status=ok
// SIG undefined FUN_141900714(void)

void FUN_141900714(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 141900771 FUN_141900771 body=244 status=ok
// SIG undefined FUN_141900771(void)

longlong * FUN_141900771(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbe6548 == (longlong *)0x0) {
    memset(&DAT_14cbe6550,0,0x148);
    FUN_145cb2390(&DAT_14cbe6550);
    DAT_14cbe6548 = (longlong *)&DAT_14cbe6550;
  }
  plVar1 = DAT_14cbe6548;
  plVar3 = DAT_14cbe6548 + 1;
  if ((char)DAT_14cbe6548[2] == '\0') {
LAB_14190079e:
    if (*plVar3 == 0) goto LAB_14190080b;
    cVar2 = FUN_1449e3c20(DAT_14cbe6548);
    if (cVar2 == '\0') goto LAB_1419007b4;
  }
  else {
    if ((char)DAT_14cbe6548[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_14190079e;
    }
LAB_14190080b:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_1419007b4;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_vault_tracker",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_1419007b4:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141900866 FUN_141900866 body=323 status=ok
// SIG undefined FUN_141900866(void)

void FUN_141900866(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  
  FUN_140d6119a();
  lVar2 = FUN_1447210f0(param_1);
  if ((((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) &&
        (*(longlong *)(param_1 + 0x4f0) != 0)) &&
       ((*(int *)(param_1 + 0x4ec) != 0 && (uVar1 = *(uint *)(param_1 + 0x4e8), -1 < (int)uVar1))))
      && (((int)uVar1 < DAT_14c9647dc &&
          ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
           (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x4ec))))))) &&
     ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
    uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
    uVar4 = (undefined4)CONCAT71(uVar5,1);
    if ((DAT_14cbe7058 != 0) && ((longlong)*(int *)(param_1 + 0x4e0) != 0)) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x68 + lVar2) == DAT_14cbe7058) {
          iVar3 = (int)(lVar2 >> 3) * -0xf0f0f0f;
          if ((iVar3 != -1) &&
             (lVar2 = *(longlong *)(param_1 + 0x4d8) + (longlong)iVar3 * 0x88, lVar2 != 0)) {
            uVar4 = (undefined4)CONCAT71(uVar5,0 < *(int *)(lVar2 + 0x80));
          }
          break;
        }
        lVar2 = lVar2 + 0x88;
      } while ((longlong)*(int *)(param_1 + 0x4e0) * 0x88 != lVar2);
    }
    lVar2 = FUN_140fb8258();
    if (lVar2 != 0) {
      FUN_140fb83f4(lVar2,param_1 + 0x25f8,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1419009b0 FUN_1419009b0 body=133 status=ok
// SIG undefined FUN_1419009b0(void)

void FUN_1419009b0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1401b2056();
  FUN_140491244(param_1 + 0x988);
  FUN_1406c9b82(param_1);
  if ((*(longlong *)(param_1 + 0x2648) != 0) && (*(int *)(param_1 + 0x2650) - 1U < 0xfffffffe)) {
    lVar2 = FUN_140fb84c8(param_1 + 0x2648);
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x2660) = *(undefined4 *)(lVar2 + 0xa0);
      *(undefined1 *)(param_1 + 0x2664) = *(undefined1 *)(lVar2 + 0x40);
      uVar1 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(param_1 + 0x26a0) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(param_1 + 0x26a8) = uVar1;
      *(undefined8 *)(param_1 + 0x26b0) = *(undefined8 *)(lVar2 + 0x28);
      uVar1 = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(param_1 + 0x26b8) = *(undefined8 *)(lVar2 + 0x30);
      *(undefined8 *)(param_1 + 0x26c0) = uVar1;
    }
  }
  return;
}



// FUNCTION 141900a36 FUN_141900a36 body=51 status=ok
// SIG undefined FUN_141900a36(void)

undefined8 * FUN_141900a36(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140a68038(1);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 141900a6a FUN_141900a6a body=76 status=ok
// SIG undefined FUN_141900a6a(void)

undefined8 FUN_141900a6a(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140f0f97c(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000141900aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 141900ad2 FUN_141900ad2 body=662 status=ok
// SIG undefined FUN_141900ad2(void)

void FUN_141900ad2(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  double dVar12;
  
  FUN_1400cad74();
  FUN_1400cae04();
  lVar8 = *(longlong *)(param_1 + 0x6a8);
  if ((lVar8 == 0) || (lVar9 = *(longlong *)(lVar8 + 0x1700), lVar9 == 0)) {
    *(undefined1 *)(param_1 + 0x630) = 0;
    uVar5 = DAT_14c8463f8;
    *(undefined8 *)(param_1 + 0x638) = DAT_14c8463f0;
    *(undefined8 *)(param_1 + 0x640) = uVar5;
    *(undefined8 *)(param_1 + 0x648) = 0;
    *(undefined4 *)(param_1 + 0x650) = 0;
    uVar5 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x658) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x660) = uVar5;
    *(undefined8 *)(param_1 + 0x668) = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x670) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x678) = uVar5;
    *(undefined8 *)(param_1 + 0x680) = DAT_14c8464f0;
    *(undefined2 *)(param_1 + 0x688) = 0;
    *(undefined1 *)(param_1 + 0x68c) = 0;
    *(undefined1 *)(param_1 + 0x68a) = 0;
    *(undefined4 *)(param_1 + 0x690) = 0;
    uVar10 = 0;
LAB_141900c3a:
    *(undefined4 *)(param_1 + 0x694) = uVar10;
    if ((((lVar8 != 0) && (*(longlong *)(lVar8 + 0x1710) != 0)) &&
        (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x1710) + 0x32b8), lVar8 != 0)) &&
       (lVar8 = FUN_1404dcd0c(lVar8 + 0x1288,param_1 + 0x6a0), lVar8 != 0)) {
      lVar9 = FUN_1402576f0();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar8);
        }
        goto LAB_141900c7d;
      }
    }
  }
  else if (*(longlong *)(lVar8 + 0x1710) != 0) {
    *(undefined1 *)(param_1 + 0x630) = 1;
    uVar6 = FUN_1402096b0();
    *(undefined1 *)(param_1 + 0x688) = uVar6;
    *(undefined1 *)(param_1 + 0x689) = *(undefined1 *)(lVar9 + 0x1cd9);
    uVar5 = *(undefined8 *)(lVar9 + 0x1bf0);
    *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(lVar9 + 0x1be8);
    *(undefined8 *)(param_1 + 0x640) = uVar5;
    *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(lVar9 + 0x1c00);
    *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(lVar9 + 0x1c04);
    bVar4 = *(byte *)(lVar9 + 0x1d09);
    *(byte *)(param_1 + 0x68b) = bVar4;
    uVar11 = 0;
    if (bVar4 == 0) {
      uVar11 = 0x3ff00000;
    }
    dVar12 = *(double *)(lVar9 + 0x870) * (double)((ulonglong)uVar11 << 0x20);
    dVar1 = *(double *)(lVar9 + 0x860);
    dVar2 = *(double *)(lVar9 + 0x868);
    *(double *)(param_1 + 0x658) = dVar1;
    *(double *)(param_1 + 0x660) = dVar2;
    *(double *)(param_1 + 0x668) = dVar12;
    dVar3 = *(double *)(lVar9 + 0x888);
    uVar5 = *(undefined8 *)(lVar9 + 0x880);
    *(undefined8 *)(param_1 + 0x670) = *(undefined8 *)(lVar9 + 0x878);
    *(undefined8 *)(param_1 + 0x678) = uVar5;
    *(double *)(param_1 + 0x680) = (double)((ulonglong)uVar11 << 0x20) * dVar3;
    *(float *)(param_1 + 0x650) = (float)SQRT(dVar12 * dVar12 + dVar1 * dVar1 + dVar2 * dVar2);
    bVar7 = 0;
    if ((*(char *)(param_1 + 0x68a) == '\x01') &&
       (bVar7 = bVar4 ^ 1, *(char *)(lVar9 + 0x1cda) != '\0')) {
      bVar7 = 0;
    }
    *(byte *)(param_1 + 0x68c) = bVar7;
    *(undefined1 *)(param_1 + 0x68a) = *(undefined1 *)(lVar9 + 0x1cda);
    *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(lVar9 + 0x1cf8);
    uVar10 = *(undefined4 *)(lVar9 + 0x1cfc);
    lVar8 = *(longlong *)(param_1 + 0x6a8);
    goto LAB_141900c3a;
  }
  lVar8 = 0;
LAB_141900c7d:
  *(longlong *)(param_1 + 0x698) = lVar8;
  return;
}



// FUNCTION 141900d68 FUN_141900d68 body=40 status=ok
// SIG undefined FUN_141900d68(void)

void FUN_141900d68(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x428,param_1 + 0x3c8);
  return;
}



// FUNCTION 141900d90 FUN_141900d90 body=129 status=ok
// SIG undefined FUN_141900d90(void)

void FUN_141900d90(longlong param_1,longlong *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe6db8);
  *(undefined2 *)(param_1 + 0xe14) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe6dc0);
  *(undefined2 *)(param_1 + 0x124a) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe6dc8);
  *(undefined2 *)(param_1 + 0x1248) = uVar1;
  if (*param_2 == 0) {
    puVar2 = &DAT_14c9a1308;
  }
  else {
    puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cbe6dd0);
  }
  uVar1 = FUN_140653402(puVar2);
  *(undefined2 *)(param_1 + 0xe12) = uVar1;
  return;
}



// FUNCTION 141900e12 FUN_141900e12 body=249 status=ok
// SIG undefined FUN_141900e12(void)

void FUN_141900e12(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998000) {
    FUN_144b3d300(&DAT_14c998000);
    if (DAT_14c998000 == -1) {
      FUN_145984cc0(&DAT_14c997f90);
      atexit((_func_5014 *)&LAB_142a64008);
      _Init_thread_footer(&DAT_14c998000);
    }
  }
  FUN_1448ef1fe(&DAT_14c997f90,param_1,7,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998000) {
    FUN_144b3d300(&DAT_14c998000);
    if (DAT_14c998000 == -1) {
      FUN_145984cc0(&DAT_14c997f90);
      atexit((_func_5014 *)&LAB_142a64008);
      _Init_thread_footer(&DAT_14c998000);
    }
  }
  FUN_1448ef1fe(&DAT_14c997f90,param_1,6,0);
  return;
}



// FUNCTION 141900f0c FUN_141900f0c body=143 status=ok
// SIG undefined FUN_141900f0c(void)

undefined8 * FUN_141900f0c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb40);
  memset(_Dst,0,0xb40);
  FUN_140b1ac70(_Dst);
  _Dst[0x161] = 0;
  *(undefined4 *)(_Dst + 0x162) = 0;
  _Dst[0x15a] = 0;
  _Dst[0x15b] = 0;
  _Dst[0x15c] = 0;
  _Dst[0x15d] = 0;
  _Dst[0x15e] = 0;
  *(undefined8 *)((longlong)_Dst + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0xb1c) = 0;
  _Dst[0x165] = 0;
  *(undefined4 *)(_Dst + 0x166) = 0;
  *_Dst = &PTR_FUN_14b8ef220;
  return _Dst;
}



// FUNCTION 141900f9c FUN_141900f9c body=348 status=ok
// SIG undefined FUN_141900f9c(void)

void FUN_141900f9c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400cad74();
  FUN_1400cae04(param_1);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cbbd498 == 0) {
      local_40 = &local_28;
      local_28 = FUN_140940982;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146572ba2;
      local_48 = &LAB_148ca13ba;
      local_50 = &LAB_140e51436;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if (((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) &&
       (lVar2 = *(longlong *)(lVar1 + 0x1b0), lVar2 != 0)) {
      lVar4 = FUN_1402095ca();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        uVar3 = FUN_140aff210(lVar2,lVar1);
        *(undefined1 *)(param_1 + 0x638) = uVar3;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1419010fa FUN_1419010fa body=538 status=ok
// SIG undefined FUN_1419010fa(void)

undefined8 * FUN_1419010fa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *_Dst;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x340);
  memset(_Dst,0,0x340);
  _Dst[2] = &PTR_FUN_14b520c50;
  _Dst[3] = 0;
  _Dst[4] = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  *_Dst = &PTR_FUN_14b9dd198;
  uVar1 = DAT_14c8462c8;
  _Dst[9] = DAT_14c8462c0;
  _Dst[10] = uVar1;
  _Dst[0xb] = DAT_14c8462d0;
  uVar1 = DAT_14c8462c8;
  _Dst[0xc] = DAT_14c8462c0;
  _Dst[0xd] = uVar1;
  _Dst[0xe] = DAT_14c8462d0;
  memset(_Dst + 0xf,0,0x100);
  *(undefined4 *)(_Dst + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)_Dst + 0x11c) = 0xffffffff;
  *(undefined4 *)((longlong)_Dst + 0x7c) = 0x3f800000;
  uVar1 = DAT_14c8464e8;
  _Dst[0x2f] = DAT_14c8464e0;
  _Dst[0x30] = uVar1;
  _Dst[0x31] = DAT_14c8464f0;
  puVar3 = &DAT_14c846480;
  puVar4 = _Dst + 0x34;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _Dst[0x42] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  _Dst[0x40] = DAT_14c8464e0;
  _Dst[0x41] = uVar1;
  _Dst[0x45] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  _Dst[0x43] = DAT_14c8464e0;
  _Dst[0x44] = uVar1;
  _Dst[0x48] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  _Dst[0x46] = DAT_14c8464e0;
  _Dst[0x47] = uVar1;
  uVar1 = DAT_14c8464e8;
  _Dst[0x49] = DAT_14c8464e0;
  _Dst[0x4a] = uVar1;
  _Dst[0x4b] = DAT_14c8464f0;
  *(undefined1 *)(_Dst + 0x5a) = 0;
  _Dst[0x4c] = 0;
  *(undefined4 *)((longlong)_Dst + 0x267) = 0;
  *(undefined8 *)((longlong)_Dst + 0x26c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x274) = 0;
  *(undefined8 *)((longlong)_Dst + 0x27c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x284) = 0;
  *(undefined8 *)((longlong)_Dst + 0x285) = 0;
  *(undefined8 *)((longlong)_Dst + 0x28d) = 0;
  *(undefined1 *)((longlong)_Dst + 0x2ac) = 0;
  *(undefined8 *)((longlong)_Dst + 0x29c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2a4) = 0;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  *(undefined8 *)((longlong)_Dst + 700) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2c4) = 0;
  uVar1 = DAT_14c8464e8;
  _Dst[0x5b] = DAT_14c8464e0;
  _Dst[0x5c] = uVar1;
  _Dst[0x5d] = DAT_14c8464f0;
  *(undefined4 *)(_Dst + 0x5e) = 0x3f800000;
  *(undefined8 *)((longlong)_Dst + 0x2f4) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2fc) = 0;
  *(undefined4 *)((longlong)_Dst + 0x317) = 0;
  _Dst[0x62] = 0;
  uVar1 = DAT_14c8464e8;
  _Dst[100] = DAT_14c8464e0;
  _Dst[0x65] = uVar1;
  _Dst[0x66] = DAT_14c8464f0;
  *param_2 = _Dst;
  return param_2;
}



// FUNCTION 141901314 FUN_141901314 body=476 status=ok
// SIG undefined FUN_141901314(void)

int * FUN_141901314(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1419014f0 FUN_1419014f0 body=617 status=ok
// SIG undefined FUN_1419014f0(void)

void FUN_1419014f0(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0x90;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x8c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x88 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_1419016f3;
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
LAB_1419016f3:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14190175a FUN_14190175a body=101 status=ok
// SIG undefined FUN_14190175a(void)

void FUN_14190175a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1419017c0 FUN_1419017c0 body=68 status=ok
// SIG undefined FUN_1419017c0(void)

undefined8 * FUN_1419017c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b520c48;
  param_1[2] = &PTR_FUN_14b520c50;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141901804 FUN_141901804 body=45 status=ok
// SIG undefined FUN_141901804(void)

undefined8 * FUN_141901804(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b9dd200;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 141901832 FUN_141901832 body=138 status=ok
// SIG undefined FUN_141901832(void)

undefined8 * FUN_141901832(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  *(undefined8 *)((longlong)puVar2 + 0x25) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2d) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined1 *)((longlong)puVar2 + 0x35) = 1;
  *(undefined8 *)((longlong)puVar2 + 0x36) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0;
  *puVar2 = &PTR_FUN_14b8fbe20;
  puVar2[9] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x4f) = 0;
  puVar2[0xd] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  puVar2[0xb] = DAT_14c8464e0;
  puVar2[0xc] = uVar1;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 1419018bc FUN_1419018bc body=105 status=ok
// SIG undefined FUN_1419018bc(void)

undefined8 * FUN_1419018bc(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_14b9dd360;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xffffffff;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = param_3;
  FUN_140bed800(puVar1 + 2,param_3,1);
  *puVar1 = &PTR_FUN_14b9dd220;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 141901926 FUN_141901926 body=396 status=ok
// SIG undefined FUN_141901926(void)

undefined8 FUN_141901926(longlong param_1,longlong *param_2,byte param_3,byte param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined4 local_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined4 local_a8;
  undefined1 local_a4;
  byte bStack_a3;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined4 uStack_88;
  undefined1 local_84;
  undefined1 uStack_83;
  undefined2 uStack_82;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = 0xffffffff;
  uStack_ac = 0xffff;
  uStack_aa = 0xffff;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  bStack_a3 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_83 = 1;
  uVar9 = 0;
  uStack_82 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_78 = 0;
  local_b8 = &PTR_FUN_14b8fbe20;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = uStack_68 & 0xff000000;
  local_50 = DAT_14c8464f0;
  local_60 = (undefined4)DAT_14c8464e0;
  uStack_5c = DAT_14c8464e0._4_4_;
  uStack_58 = (undefined4)DAT_14c8464e8;
  uStack_54 = DAT_14c8464e8._4_4_;
  iVar10 = *(int *)(param_1 + 0x2c);
  if (0 < iVar10) {
    lVar12 = 0x48;
    lVar11 = 0;
    uVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x10);
      uVar5 = *(undefined8 *)(lVar4 + -0x40 + lVar12);
      uVar6 = *(undefined8 *)(lVar4 + -0x3a + lVar12);
      local_a8 = (undefined4)((ulonglong)uVar6 >> 0x10);
      local_a4 = (undefined1)((ulonglong)uVar6 >> 0x30);
      bStack_a3 = (byte)((ulonglong)uVar6 >> 0x38);
      local_b0 = (undefined4)uVar5;
      uStack_ac = (undefined2)((ulonglong)uVar5 >> 0x20);
      uStack_aa = (undefined2)((ulonglong)uVar5 >> 0x30);
      puVar2 = (undefined8 *)(lVar4 + -0x30 + lVar12);
      local_a0 = *puVar2;
      uVar6 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + -0x20 + lVar12);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      lVar3 = lVar4 + -0x14 + lVar12;
      uStack_80 = *(undefined4 *)(lVar3 + 4);
      uStack_78 = *(undefined4 *)(lVar3 + 0xc);
      uStack_7c = (undefined2)*(undefined4 *)(lVar3 + 8);
      uStack_7a = (undefined2)((uint)*(undefined4 *)(lVar3 + 8) >> 0x10);
      uStack_90 = (undefined5)uVar7;
      uStack_8b = (undefined3)((ulonglong)uVar7 >> 0x28);
      uStack_88 = (undefined4)uVar8;
      local_84 = (undefined1)((ulonglong)uVar8 >> 0x20);
      uStack_83 = (undefined1)((ulonglong)uVar8 >> 0x28);
      uStack_82 = (undefined2)((ulonglong)uVar8 >> 0x30);
      uStack_98 = (undefined5)uVar6;
      uStack_93 = (undefined3)((ulonglong)uVar6 >> 0x28);
      local_50 = *(undefined8 *)(lVar4 + 0x20 + lVar12);
      puVar1 = (undefined4 *)(lVar4 + lVar12);
      local_70 = *puVar1;
      uStack_6c = puVar1[1];
      uStack_68 = puVar1[2];
      uStack_64 = puVar1[3];
      puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar12);
      local_60 = *puVar1;
      uStack_5c = puVar1[1];
      uStack_58 = puVar1[2];
      uStack_54 = puVar1[3];
      if (((byte)(param_3 ^ 1 | bStack_a3) != 1) || ((bStack_a3 & param_4) == 1)) {
        (**(code **)(*param_2 + 0x68))(param_2,(int)((ulonglong)uVar5 >> 0x20),&local_b8);
        iVar10 = *(int *)(param_1 + 0x2c);
        uVar9 = 1;
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0x70;
    } while (lVar11 < iVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 141901ab4 FUN_141901ab4 body=54 status=ok
// SIG undefined FUN_141901ab4(void)

void FUN_141901ab4(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((0 < param_2) && (*(int *)(param_1 + 0x2c) != param_2)) {
    *(int *)(param_1 + 0x2c) = param_2;
    FUN_140bed800(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x24) % *(int *)(param_1 + 0x2c);
    iVar1 = -iVar2;
    if (iVar1 < 0) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0x28) = iVar1;
  }
  return;
}



// FUNCTION 141901aea FUN_141901aea body=193 status=ok
// SIG undefined FUN_141901aea(void)

int FUN_141901aea(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe7048) {
    FUN_144b3d300(&DAT_14cbe7048);
    if (DAT_14cbe7048 == -1) {
      lVar2 = FUN_144800528();
      lVar3 = *(longlong *)(lVar2 + 0x110);
      if (lVar3 == 0) {
        FUN_140aa6c08(lVar2);
        lVar3 = *(longlong *)(lVar2 + 0x110);
      }
      fVar5 = (*(float *)(lVar3 + 0xf4) * 0.001) / *(float *)(lVar3 + 0x168);
      iVar1 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
      iVar4 = 1;
      if (1 < iVar1) {
        iVar4 = iVar1;
      }
      DAT_14cbe7044 = iVar4 << 2;
      _Init_thread_footer(&DAT_14cbe7048);
    }
  }
  return DAT_14cbe7044;
}



// FUNCTION 141901bac FUN_141901bac body=45 status=ok
// SIG undefined FUN_141901bac(void)

undefined8 * FUN_141901bac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b9dd490;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 141901bda FUN_141901bda body=456 status=ok
// SIG undefined FUN_141901bda(void)

undefined8 FUN_141901bda(longlong param_1,longlong *param_2,byte param_3,byte param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_128 [47];
  byte local_f9;
  undefined **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e0 [24];
  longlong local_c8;
  longlong local_b8;
  longlong local_a8;
  longlong local_98;
  longlong local_88;
  longlong local_78;
  longlong local_68;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f0 = 0xffffffffffffffff;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  memset(local_e0,0,0x8c);
  local_f8 = &PTR_FUN_14b8fbe80;
  local_50 = 0;
  if (*(int *)(param_1 + 0x2c) < 1) {
    local_f8 = &PTR_FUN_14b517f90;
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    lVar2 = 0;
    uVar3 = 0;
    local_f9 = param_4;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      FUN_14098bcca(&local_f8,lVar1 + lVar4);
      local_50 = *(undefined2 *)(lVar1 + 0xa8 + lVar4);
      if (((byte)(param_3 ^ 1 | local_e4._1_1_) != 1) || ((local_e4._1_1_ & local_f9) == 1)) {
        (**(code **)(*param_2 + 0x68))(param_2,local_f0._4_4_,&local_f8);
        uVar3 = 1;
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0xb0;
    } while (lVar2 < *(int *)(param_1 + 0x2c));
    local_f8 = &PTR_FUN_14b517f90;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 141901da4 FUN_141901da4 body=54 status=ok
// SIG undefined FUN_141901da4(void)

void FUN_141901da4(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((0 < param_2) && (*(int *)(param_1 + 0x2c) != param_2)) {
    *(int *)(param_1 + 0x2c) = param_2;
    FUN_140df7f36(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x24) % *(int *)(param_1 + 0x2c);
    iVar1 = -iVar2;
    if (iVar1 < 0) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0x28) = iVar1;
  }
  return;
}



// FUNCTION 141901dda FUN_141901dda body=193 status=ok
// SIG undefined FUN_141901dda(void)

int FUN_141901dda(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe7050) {
    FUN_144b3d300(&DAT_14cbe7050);
    if (DAT_14cbe7050 == -1) {
      lVar2 = FUN_144800528();
      lVar3 = *(longlong *)(lVar2 + 0x110);
      if (lVar3 == 0) {
        FUN_140aa6c08(lVar2);
        lVar3 = *(longlong *)(lVar2 + 0x110);
      }
      fVar5 = (*(float *)(lVar3 + 0xf4) * 0.001) / *(float *)(lVar3 + 0x168);
      iVar1 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
      iVar4 = 1;
      if (1 < iVar1) {
        iVar4 = iVar1;
      }
      DAT_14cbe704c = iVar4 << 2;
      _Init_thread_footer(&DAT_14cbe7050);
    }
  }
  return DAT_14cbe704c;
}



// FUNCTION 141901e9c FUN_141901e9c body=98 status=ok
// SIG undefined FUN_141901e9c(void)

undefined8 * FUN_141901e9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b520c60;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141901efe FUN_141901efe body=337 status=ok
// SIG undefined FUN_141901efe(void)

undefined4 FUN_141901efe(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48)) &&
     (*(longlong *)(param_1 + 0x58) == *(longlong *)(param_2 + 0x58))) {
    if (*(int *)(param_1 + 0x48) == 0x1ea5d050) {
      local_48 = *(undefined8 *)(param_1 + 0x40);
      FUN_1446dcdd4(local_40);
      if (DAT_14cbe8050 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_144837462(DAT_14cbe8050,local_40);
      }
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      local_48 = *(undefined8 *)(param_2 + 0x40);
      FUN_1446dcdd4(local_40);
      if (DAT_14cbe8050 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_144837462(DAT_14cbe8050,local_40);
      }
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      if ((lVar2 != 0) && (lVar3 != 0)) {
        if (*(int *)(lVar2 + 0x18) == 0) {
          if (*(int *)(lVar3 + 0x18) == 0) {
            uVar1 = 1;
            goto LAB_141901f1d;
          }
        }
        else if ((*(int *)(lVar2 + 0x18) == 3) && (uVar1 = 1, *(int *)(lVar3 + 0x18) == 3))
        goto LAB_141901f1d;
      }
    }
    else if (*(longlong *)(param_1 + 0x34) == *(longlong *)(param_2 + 0x34)) {
      uVar1 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x30) >> 8),
                       *(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30));
      goto LAB_141901f1d;
    }
  }
  uVar1 = 0;
LAB_141901f1d:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 141902050 FUN_141902050 body=281 status=ok
// SIG undefined FUN_141902050(void)

void FUN_141902050(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  FUN_140daa89c();
  uVar1 = FUN_14026189c(param_2,&DAT_14cbe7648,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x35c) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe7668);
  *(undefined2 *)(param_1 + 0x3f4) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe7670);
  *(undefined2 *)(param_1 + 0x3f6) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe7678);
  *(undefined2 *)(param_1 + 0x3f8) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe7680);
  *(undefined2 *)(param_1 + 0x3fa) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe7688);
  *(undefined2 *)(param_1 + 0x3fc) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe7690);
  *(undefined2 *)(param_1 + 0x3fe) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe7698);
  *(undefined2 *)(param_1 + 0x400) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cbe76a0,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x402) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe76a8);
  *(undefined2 *)(param_1 + 0x404) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe76b0);
  *(undefined2 *)(param_1 + 0x406) = uVar1;
  return;
}



// FUNCTION 14190216a FUN_14190216a body=173 status=ok
// SIG undefined FUN_14190216a(void)

uint FUN_14190216a(longlong *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float fVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (iVar1 < 1) {
    iVar1 = (**(code **)(*param_1 + 0x2e0))(param_1);
    if (iVar1 < 1) {
      fVar5 = 1.0;
      goto LAB_1419021b9;
    }
    puVar3 = (undefined8 *)(*param_1 + 0x2d8);
    lVar4 = 0x2e0;
  }
  else {
    puVar3 = (undefined8 *)(*param_1 + 0x2c0);
    lVar4 = 0x2b8;
  }
  iVar1 = (*(code *)*puVar3)(param_1);
  iVar2 = (**(code **)(*param_1 + lVar4))(param_1);
  fVar5 = (float)iVar1 / (float)iVar2;
LAB_1419021b9:
  return -(uint)(fVar5 < param_2 || ABS(fVar5 - param_2) <= 1e-08) & 0xffffff01;
}



// FUNCTION 141902218 FUN_141902218 body=197 status=ok
// SIG undefined FUN_141902218(void)

void FUN_141902218(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined1 *)(param_1 + 0x2f9) = 0;
  lVar1 = *(longlong *)(param_1 + 0x358);
  lVar6 = *(longlong *)(lVar1 + 800);
  if (lVar6 == 0) {
    uVar4 = FUN_14120b6b4();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 800) = lVar6;
  }
  lVar5 = *(longlong *)(lVar1 + 0x328);
  if (lVar5 == 0) {
    if (*(longlong *)(lVar1 + 0x318) == 0) {
      return;
    }
    if (lVar6 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(lVar1 + 0x328) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x318));
    *(longlong *)(lVar1 + 0x328) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  if (*(char *)(lVar5 + 0x29) == '\x01') {
    *(undefined1 *)(param_1 + 0x390) = 0;
  }
  return;
}



// FUNCTION 1419022de FUN_1419022de body=93 status=ok
// SIG undefined FUN_1419022de(void)

void FUN_1419022de(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ded60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14190233c FUN_14190233c body=260 status=ok
// SIG undefined FUN_14190233c(void)

void FUN_14190233c(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  
  bVar1 = *(byte *)(param_1 + 7);
  if ((int)(uint)bVar1 < *(int *)(param_1[6] + 0xbf0)) {
    plVar6 = *(longlong **)
              (*(longlong *)(param_1[6] + 0xbe8) + 0x10 +
              (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (*(int *)((longlong)param_1 + 0x2dc) != 1) goto LAB_1419023d7;
    if (plVar6 == (longlong *)0x0) goto LAB_141902431;
    iVar2 = (**(code **)(*plVar6 + 0x2b8))(plVar6);
    lVar5 = 0x2d8;
    if (0 < iVar2) {
      lVar5 = 0x2c0;
    }
    uVar3 = (**(code **)(*plVar6 + lVar5))(plVar6);
    *(undefined4 *)((longlong)param_1 + 0x3ac) = uVar3;
  }
  else {
    if (*(int *)((longlong)param_1 + 0x2dc) != 1) {
      return;
    }
LAB_141902431:
    plVar6 = (longlong *)0x0;
  }
  if ((int)param_1[0x75] < 1) {
    iVar2 = FUN_14119091a(param_1);
    fVar7 = (float)iVar2;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x76);
  }
  *(float *)(param_1 + 0x76) = fVar7;
  uVar3 = FUN_140ced466(param_1);
  *(undefined4 *)(param_1 + 0x75) = uVar3;
LAB_1419023d7:
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0x310))(param_1);
  if (*(int *)((longlong)param_1 + 0x3d4) == 0) {
    iVar4 = FUN_14119091a(param_1);
    iVar2 = iVar2 * (iVar4 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014190240c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x358))(plVar6,iVar2,0);
  return;
}



// FUNCTION 141902440 FUN_141902440 body=37 status=ok
// SIG undefined FUN_141902440(void)

undefined8 FUN_141902440(longlong param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Db;
  
  if (*(int *)(param_1 + 0x3a8) < 1) {
    iVar1 = FUN_14119091a();
    fVar2 = (float)iVar1;
    uVar3 = extraout_XMM0_Db;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x3b0);
    uVar3 = 0;
  }
  return CONCAT44(uVar3,fVar2);
}



// FUNCTION 141902480 FUN_141902480 body=106 status=ok
// SIG undefined FUN_141902480(void)

float FUN_141902480(longlong param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x200);
  fVar1 = *(float *)(param_1 + 0x3c0);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (*(int *)(param_1 + 0x3a8) < 1) {
      iVar2 = FUN_14119091a();
      fVar3 = (float)iVar2;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x3b0);
    }
    fVar4 = fVar1 * fVar4 * fVar3 + fVar4;
  }
  return fVar4;
}



// FUNCTION 1419024ea FUN_1419024ea body=106 status=ok
// SIG undefined FUN_1419024ea(void)

float FUN_1419024ea(longlong param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 600);
  fVar1 = *(float *)(param_1 + 0x3cc);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (*(int *)(param_1 + 0x3a8) < 1) {
      iVar2 = FUN_14119091a();
      fVar3 = (float)iVar2;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x3b0);
    }
    fVar4 = fVar1 * fVar4 * fVar3 + fVar4;
  }
  return fVar4;
}



// FUNCTION 141902554 FUN_141902554 body=2576 status=ok
// SIG undefined FUN_141902554(void)

void FUN_141902554(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar10 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = uVar10;
    plVar13 = *(longlong **)(param_1 + 0xa8);
    if (plVar13 == (longlong *)0x0) goto LAB_1419025d9;
    *(undefined8 *)(param_1 + 0xa8) = 0;
LAB_141902cea:
    LOCK();
    plVar2 = plVar13 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    if (plVar4 == (longlong *)0x0) goto LAB_1419025d9;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xa0) = uVar10;
    plVar13 = *(longlong **)(param_1 + 0xa8);
    if (plVar4 == plVar13) {
      LOCK();
      plVar13 = plVar4 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    else {
      *(longlong **)(param_1 + 0xa8) = plVar4;
      if (plVar13 != (longlong *)0x0) goto LAB_141902cea;
    }
  }
  LOCK();
  plVar13 = plVar4 + 1;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)*plVar13 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1419025d9:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar4 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  lVar5 = *param_3;
  uVar10 = FUN_1408f543e();
  lVar16 = *(longlong *)(lVar5 + 0x200);
  if (lVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar16,uVar10,0);
  }
  puVar14 = &local_b0;
  FUN_140ccc900(lVar5,puVar14,uVar10,param_4);
  uVar8 = local_b0;
  if (local_90 != 3) {
    FUN_1400b56fe(&local_88,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = (uint)local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      puVar11 = &local_88;
      if (0x18 < local_70) {
        puVar11 = local_88;
      }
      (*pcVar6)(puVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
  }
  *(undefined4 *)(param_1 + 0x90) = uVar8;
  FUN_14020a6cc(param_1 + 0x88,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar14 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar6)(puVar14);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar5 = *param_3;
  uVar10 = FUN_14110f6ac();
  lVar16 = *(longlong *)(lVar5 + 0x200);
  if (lVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar16,uVar10,0);
  }
  FUN_140ccc900(lVar5,&local_88,uVar10,param_4);
  uVar8 = FUN_1405d5f74(&local_88);
  *(undefined4 *)(param_1 + 0xb8) = uVar8;
  FUN_140841e14(param_1 + 0xb0,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar6 != (code *)0x0) {
    puVar11 = &local_88;
    if (0x18 < local_70) {
      puVar11 = local_88;
    }
    (*pcVar6)(puVar11);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88);
  }
  lVar5 = *param_3;
  uVar10 = FUN_14110f6ac();
  lVar16 = *(longlong *)(lVar5 + 0x200);
  if (lVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar16,uVar10,1);
  }
  FUN_140ccc900(lVar5,&local_88,uVar10,param_4);
  uVar8 = FUN_1405d5f74(&local_88);
  *(undefined4 *)(param_1 + 0xc4) = uVar8;
  FUN_140841e14(param_1 + 0xbc,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar6 != (code *)0x0) {
    puVar11 = &local_88;
    if (0x18 < local_70) {
      puVar11 = local_88;
    }
    (*pcVar6)(puVar11);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88);
  }
  lVar5 = *param_3;
  uVar10 = FUN_14110f6ac();
  lVar16 = *(longlong *)(lVar5 + 0x200);
  if (lVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar16,uVar10,2);
  }
  puVar14 = &local_b0;
  FUN_140ccc900(lVar5,puVar14,uVar10,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0;
    bVar7 = 3;
  }
  else {
    FUN_1400b56fe(&local_88,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = (uint)local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      puVar11 = &local_88;
      if (0x18 < local_70) {
        puVar11 = local_88;
      }
      (*pcVar6)(puVar11);
    }
    bVar7 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
      bVar7 = local_90;
    }
  }
  *(undefined4 *)(param_1 + 200) = uVar8;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar14 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar6)(puVar14);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar5 = *param_3;
  uVar10 = FUN_14110f6ac();
  lVar16 = *(longlong *)(lVar5 + 0x200);
  if (lVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar16,uVar10,3);
  }
  puVar14 = &local_b0;
  FUN_140ccc900(lVar5,puVar14,uVar10,param_4);
  if (local_90 == 3) {
    local_90 = 3;
    uVar8 = local_b0;
  }
  else {
    FUN_1400b56fe(&local_88,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = (uint)local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      puVar11 = &local_88;
      if (0x18 < local_70) {
        puVar11 = local_88;
      }
      (*pcVar6)(puVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
  }
  *(undefined4 *)(param_1 + 0xe8) = uVar8;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar14 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar6)(puVar14);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_141131d4c(param_1);
  lVar5 = *(longlong *)(param_1 + 0x30);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbe81e8) && (FUN_144b3d300(&DAT_14cbe81e8), DAT_14cbe81e8 == -1)) {
    local_88 = (undefined8 *)0x650042006e004f;
    lStack_80 = 0x50006e00750067;
    local_78 = 0x790061006c;
    FUN_1446f470e(&DAT_14cbe81e0,&local_88,1);
    _Init_thread_footer(&DAT_14cbe81e8);
  }
  lVar16 = DAT_14cbe81e0;
  local_88._0_4_ = 0;
  lStack_80 = 0;
  if (param_1 == 0) {
    iVar9 = 0;
    uVar3 = (uint)local_88;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_88 = (undefined8 *)(ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar9 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar9 = *(int *)(lVar15 + 0x10);
      bVar17 = iVar9 == 0;
      if (bVar17) {
        *(int *)(lVar15 + 0x10) = iVar12;
        iVar9 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar17) {
        iVar9 = iVar12;
      }
    }
  }
  local_88._0_4_ = uVar3;
  local_88 = (undefined8 *)CONCAT44(iVar9,(uint)local_88);
  lStack_80 = lVar16;
  if ((lVar16 != 0) && (lVar15 = FUN_14479d2ce(&local_88), lVar15 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar15 + 0x10),lVar16,1);
  }
  FUN_14053c012(lVar5 + 0x950,&local_88);
  FUN_141103af8(&local_b8);
  local_88._0_4_ = 0;
  lStack_80 = 0;
  if (param_1 == 0) {
    iVar9 = 0;
    uVar3 = (uint)local_88;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_88 = (undefined8 *)(ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar9 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar9 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar9 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar12;
        iVar9 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar17) {
        iVar9 = iVar12;
      }
    }
  }
  local_88._0_4_ = uVar3;
  local_88 = (undefined8 *)CONCAT44(iVar9,(uint)local_88);
  lStack_80 = local_b8;
  if ((local_b8 != 0) && (lVar16 = FUN_14479d2ce(&local_88), lVar16 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar16 + 0x10),local_b8,1);
  }
  FUN_14053c012(lVar5 + 0x988,&local_88);
  FUN_14114569c(&local_c0);
  local_88._0_4_ = 0;
  lStack_80 = 0;
  if (param_1 == 0) {
    iVar9 = 0;
    uVar3 = (uint)local_88;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_88 = (undefined8 *)(ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar9 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar9 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar9 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar12;
        iVar9 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar17) {
        iVar9 = iVar12;
      }
    }
  }
  local_88._0_4_ = uVar3;
  local_88 = (undefined8 *)CONCAT44(iVar9,(uint)local_88);
  lStack_80 = local_c0;
  if ((local_c0 != 0) && (lVar16 = FUN_14479d2ce(&local_88), lVar16 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar16 + 0x10),local_c0,1);
  }
  FUN_14053c012(lVar5 + 0x998,&local_88);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar4 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141902f66 FUN_141902f66 body=195 status=ok
// SIG undefined FUN_141902f66(void)

void FUN_141902f66(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0xa0) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_140115c12(param_1 + 0xb0,0);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14190302a FUN_14190302a body=86 status=ok
// SIG undefined FUN_14190302a(void)

void FUN_14190302a(longlong *param_1,char param_2)

{
  if ((param_2 == '\0') && (*(char *)(param_1[7] + 0x90) == '\x01')) {
    (**(code **)(*param_1 + 0x2f0))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x66) = 1;
  if ((*(byte *)(param_1 + 0x17) & 3) == 1) {
    FUN_14120b744(param_1,1);
  }
  FUN_140d94a62(param_1,0x3f800000);
  return;
}



// FUNCTION 141903080 FUN_141903080 body=56 status=ok
// SIG undefined FUN_141903080(void)

void FUN_141903080(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2f8))();
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  if ((*(byte *)(param_1 + 0x17) & 2) != 0) {
    FUN_14120b744(param_1,0);
  }
  FUN_140d94a62(param_1,0);
  return;
}



// FUNCTION 1419030b8 FUN_1419030b8 body=346 status=ok
// SIG undefined FUN_1419030b8(void)

uint * FUN_1419030b8(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_14063909e(param_4);
  if (lVar2 == 0) {
    lVar2 = FUN_1447262c2(param_4);
    if (lVar2 != 0) {
      if (DAT_14cb939a8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_140940982;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146522c26;
        local_48 = &LAB_148a0db91;
        local_50 = &LAB_146572ba7;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0xdd8;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
      }
      if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
        lVar2 = FUN_1406390dc(lVar2);
        if (lVar2 != 0) goto LAB_141903164;
      }
    }
    bVar3 = false;
  }
  else {
LAB_141903164:
    bVar3 = (*(uint *)(param_1 + 0xc) >> (*(uint *)(lVar2 + 0xc0) & 0x1f) & 1) != 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = (uint)(bVar3 ^ bVar1);
  *(undefined1 *)(param_2 + 8) = 1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141903214 FUN_141903214 body=904 status=ok
// SIG undefined FUN_141903214(void)

ulonglong FUN_141903214(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  undefined7 uVar11;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  undefined8 ***local_80 [3];
  ushort local_68;
  byte local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_140070894(param_3);
  uVar11 = (undefined7)((ulonglong)param_1 >> 8);
  if (lVar6 != 0) {
    if ((ulonglong)*(byte *)(param_1 + 0x10) == 0x11) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(lVar6 + 0xe3c + (ulonglong)*(byte *)(param_1 + 0x10) * 4);
    }
    uVar7 = CONCAT71(uVar11,iVar5 == *(int *)(param_1 + 0x14));
    goto LAB_141903266;
  }
  FUN_140082e80(param_3,&local_90);
  if (local_90 == 0) {
    uVar7 = 0;
  }
  else {
    FUN_140ccc900(local_90,local_58,param_2,0);
    if (local_38 == 0) {
      lVar6 = FUN_14011c349();
      lVar6 = lVar6 + (ulonglong)*(byte *)(param_1 + 0x10) * 0x18;
      lVar9 = *(longlong *)(lVar6 + 0x2c8);
      if (lVar9 == 0) {
        uVar8 = FUN_14016979c();
        lVar9 = FUN_14477b664(uVar8);
        *(longlong *)(lVar6 + 0x2c8) = lVar9;
      }
      if (((*(longlong *)(lVar6 + 0x2d0) == 0) && (lVar9 != 0)) &&
         (*(longlong *)(lVar6 + 0x2c0) != 0)) {
        plVar3 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
          uVar8 = FUN_144aff482(uVar8,(longlong *)(lVar6 + 0x2c0));
        }
        *(undefined8 *)(lVar6 + 0x2d0) = uVar8;
      }
      FUN_140d4c8ba(local_90,local_80);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar10 = (undefined8 ****)local_58[0];
        if (local_40 < 0x19) {
          ppppuVar10 = local_58;
        }
        (*pcVar2)(ppppuVar10);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
      local_40 = local_68;
      if (local_68 < 0x19) {
        uVar7 = (ulonglong)((uint)local_60 * 0x120);
        if (*(code **)((longlong)&DAT_14c9a85b8 + uVar7) == (code *)0x0) {
          if (*(code **)((longlong)&DAT_14c9a85b0 + uVar7) == (code *)0x0) {
            memcpy(local_58,local_80,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b0 + uVar7))(local_58,local_80);
          }
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b8 + uVar7))(local_58,local_80);
        }
      }
      else {
        local_58[0] = local_80[0];
        local_80[0] = (undefined8 ****)0x0;
        local_68 = 0;
      }
      local_38 = local_60;
      local_60 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppuVar10 = local_80;
        if (0x18 < local_68) {
          ppppuVar10 = (undefined8 ****)local_80[0];
        }
        (*DAT_14c9a85d0)(ppppuVar10);
      }
      if (0x18 < local_68) {
        FUN_1400020a8(local_80[0]);
      }
      if (local_38 != 0) goto LAB_1419033d4;
LAB_1419033e3:
      uVar7 = 0;
    }
    else {
LAB_1419033d4:
      iVar5 = FUN_1405d5f74(local_58);
      if (iVar5 != *(int *)(param_1 + 0x14)) goto LAB_1419033e3;
      uVar7 = CONCAT71(uVar11,1);
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar10 = local_58;
      if (0x18 < local_40) {
        ppppuVar10 = (undefined8 ****)local_58[0];
      }
      (*pcVar2)(ppppuVar10);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_88 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
LAB_141903266:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14190359e FUN_14190359e body=141 status=ok
// SIG undefined FUN_14190359e(void)

longlong FUN_14190359e(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                      longlong *param_5,undefined4 param_6,undefined1 param_7)

{
  longlong *plVar1;
  
  FUN_140056680();
  plVar1 = (longlong *)*param_3;
  *(longlong **)(param_1 + 0x10) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)param_3[1];
  FUN_1446f470e(param_1 + 0x20,param_4,1);
  plVar1 = (longlong *)*param_5;
  *(longlong **)(param_1 + 0x28) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x30) = (int)param_5[1];
  *(undefined4 *)(param_1 + 0x38) = param_6;
  *(undefined1 *)(param_1 + 0x3c) = param_7;
  return param_1;
}



// FUNCTION 14190362c FUN_14190362c body=275 status=ok
// SIG undefined FUN_14190362c(void)

void FUN_14190362c(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_28 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
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
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141903740 FUN_141903740 body=1450 status=ok
// SIG undefined FUN_141903740(void)

void FUN_141903740(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c998000) && (FUN_144b3d300(&DAT_14c998000), DAT_14c998000 == -1)) {
    FUN_145984cc0(&DAT_14c997f90);
    atexit((_func_5014 *)&LAB_142a64008);
    _Init_thread_footer(&DAT_14c998000);
  }
  uVar10 = CONCAT71((int7)((ulonglong)param_4 >> 8),*(undefined1 *)(param_1 + 0x60)) &
           0xffffffffffffff10;
  FUN_1448ef1fe(&DAT_14c997f90,param_1,7,CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 >> 4));
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c998000) && (FUN_144b3d300(&DAT_14c998000), DAT_14c998000 == -1)) {
    FUN_145984cc0(&DAT_14c997f90);
    atexit((_func_5014 *)&LAB_142a64008);
    _Init_thread_footer(&DAT_14c998000);
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    bVar11 = false;
  }
  else {
    bVar11 = -1 < *(char *)(*(longlong *)(param_1 + 0x1c8) + 0x9c);
  }
  FUN_1448ef1fe(&DAT_14c997f90,param_1,6,bVar11);
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  uVar12 = 0;
  uVar13 = 0;
  if ((lVar3 == 0) || (lVar8 = *(longlong *)(lVar3 + 0x120), lVar8 == 0)) {
    lVar8 = 0;
    lVar3 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    lVar4 = 0;
    goto LAB_1419038d3;
  }
  lVar4 = lVar8;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar8);
    lVar3 = *(longlong *)(param_1 + 0x1c8);
    lVar4 = *(longlong *)(lVar3 + 0x120);
    if (lVar4 != 0) goto LAB_141903864;
    lVar4 = 0;
  }
  else {
LAB_141903864:
    lVar4 = *(longlong *)(lVar4 + 0xa8);
    if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_1 + 0x1c8);
    }
  }
  uVar28 = (undefined4)*(undefined8 *)(lVar3 + 0x198);
  uVar29 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x198) >> 0x20);
  uVar26 = (undefined4)*(undefined8 *)(lVar3 + 0x1a0);
  uVar27 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x1a0) >> 0x20);
  uVar22 = (undefined4)*(undefined8 *)(lVar3 + 0x1a8);
  uVar23 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x1a8) >> 0x20);
  uVar16 = (undefined4)*(undefined8 *)(lVar3 + 0x1b0);
  uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x1b0) >> 0x20);
  uVar14 = (undefined4)*(undefined8 *)(lVar3 + 0x1b8);
  uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x1b8) >> 0x20);
  uVar12 = (undefined4)*(undefined8 *)(lVar3 + 0x1c0);
  uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x1c0) >> 0x20);
  uVar24 = (undefined4)*(undefined8 *)(lVar3 + 0x1c8);
  uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x1c8) >> 0x20);
  uVar20 = (undefined4)*(undefined8 *)(lVar3 + 0x1d0);
  uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x1d0) >> 0x20);
  uVar18 = (undefined4)*(undefined8 *)(lVar3 + 0x1d8);
  uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x1d8) >> 0x20);
  lVar3 = *(longlong *)(lVar3 + 0x128);
LAB_1419038d3:
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if (lVar8 == lVar1) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    if (lVar4 == lVar1) {
      if (((double)CONCAT44(uVar29,uVar28) == *(double *)(param_1 + 0x88)) &&
         (!NAN((double)CONCAT44(uVar29,uVar28)) && !NAN(*(double *)(param_1 + 0x88)))) {
        if (((double)CONCAT44(uVar27,uVar26) == *(double *)(param_1 + 0x90)) &&
           (!NAN((double)CONCAT44(uVar27,uVar26)) && !NAN(*(double *)(param_1 + 0x90)))) {
          if (((double)CONCAT44(uVar23,uVar22) == *(double *)(param_1 + 0x98)) &&
             (!NAN((double)CONCAT44(uVar23,uVar22)) && !NAN(*(double *)(param_1 + 0x98)))) {
            if (((double)CONCAT44(uVar17,uVar16) == *(double *)(param_1 + 0xb8)) &&
               (!NAN((double)CONCAT44(uVar17,uVar16)) && !NAN(*(double *)(param_1 + 0xb8)))) {
              if (((double)CONCAT44(uVar15,uVar14) == *(double *)(param_1 + 0xc0)) &&
                 (!NAN((double)CONCAT44(uVar15,uVar14)) && !NAN(*(double *)(param_1 + 0xc0)))) {
                if (((double)CONCAT44(uVar13,uVar12) == *(double *)(param_1 + 200)) &&
                   (!NAN((double)CONCAT44(uVar13,uVar12)) && !NAN(*(double *)(param_1 + 200)))) {
                  if (((double)CONCAT44(uVar25,uVar24) == *(double *)(param_1 + 0xa0)) &&
                     (!NAN((double)CONCAT44(uVar25,uVar24)) && !NAN(*(double *)(param_1 + 0xa0)))) {
                    if (((double)CONCAT44(uVar21,uVar20) == *(double *)(param_1 + 0xa8)) &&
                       (!NAN((double)CONCAT44(uVar21,uVar20)) && !NAN(*(double *)(param_1 + 0xa8))))
                    {
                      if ((((double)CONCAT44(uVar19,uVar18) == *(double *)(param_1 + 0xb0)) &&
                          (!NAN((double)CONCAT44(uVar19,uVar18)) &&
                           !NAN(*(double *)(param_1 + 0xb0)))) &&
                         (lVar3 == *(longlong *)(param_1 + 0xd0))) {
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x80) = lVar4;
  *(ulonglong *)(param_1 + 0x88) = CONCAT44(uVar29,uVar28);
  *(ulonglong *)(param_1 + 0x90) = CONCAT44(uVar27,uVar26);
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(uVar23,uVar22);
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uVar25,uVar24);
  *(ulonglong *)(param_1 + 0xa8) = CONCAT44(uVar21,uVar20);
  *(ulonglong *)(param_1 + 0xb0) = CONCAT44(uVar19,uVar18);
  *(ulonglong *)(param_1 + 0xb8) = CONCAT44(uVar17,uVar16);
  *(ulonglong *)(param_1 + 0xc0) = CONCAT44(uVar15,uVar14);
  *(ulonglong *)(param_1 + 200) = CONCAT44(uVar13,uVar12);
  *(longlong *)(param_1 + 0xd0) = lVar3;
  if (((bVar2 & 1) != 0) && (lVar8 != 0)) {
    FUN_1456cec3c();
  }
  *(longlong *)(param_1 + 0xd8) = lVar8;
  uVar10 = *(ulonglong *)(param_1 + 0x28);
  if (0xfffffffeffffffff < uVar10) {
    uVar9 = (uint)uVar10;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
      puVar5 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar5 = DAT_14c998080;
      }
      if ((*(uint *)(puVar5 + ((uint)(uVar10 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
        lVar3 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
        puVar6 = *(uint **)(lVar3 + 0x18);
        if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
          puVar6 = (uint *)(lVar3 + 8);
        }
        *puVar6 = *puVar6 | 0x40;
        *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
      }
    }
    return;
  }
  plVar7 = DAT_14c9980d0;
  if (DAT_14c9980d8 == 0) {
    plVar7 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141903ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar10,6);
  return;
}



// FUNCTION 141903cea FUN_141903cea body=66 status=ok
// SIG undefined FUN_141903cea(void)

undefined4 * FUN_141903cea(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_140070894();
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = 0, (ulonglong)*(byte *)(param_1 + 8) != 0x11)) {
    uVar2 = *(undefined4 *)(lVar1 + 0xe3c + (ulonglong)*(byte *)(param_1 + 8) * 4);
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar2;
  *(undefined1 *)(param_2 + 8) = 2;
  return param_2;
}



// FUNCTION 141903d2c FUN_141903d2c body=678 status=ok
// SIG undefined FUN_141903d2c(void)

longlong * FUN_141903d2c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x178);
  if (lVar5 == 0) {
    uVar6 = FUN_1465d584e();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x178) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x170);
  lVar7 = *(longlong *)(param_1 + 0x180);
  if (lVar7 == 0) {
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_141903fab;
    plVar4 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x180) = 0;
      goto LAB_141903fab;
    }
    uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar7 = FUN_144aff482(uVar6,plVar1);
    *(longlong *)(param_1 + 0x180) = lVar7;
    if (lVar7 == 0) goto LAB_141903fab;
    lVar5 = *(longlong *)(param_1 + 0x178);
  }
  if (lVar5 == 0) {
    uVar6 = FUN_1465d584e();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x178) = lVar5;
    lVar7 = *(longlong *)(param_1 + 0x180);
    if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar7 = FUN_144aff482(uVar6,plVar1);
      }
      *(longlong *)(param_1 + 0x180) = lVar7;
    }
  }
  plVar4 = *(longlong **)(lVar7 + 0x18);
  if (*(code **)(*plVar4 + 0x50) != FUN_144828418) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))();
  }
  FUN_1447a1fc0(plVar4);
  plVar4 = *(longlong **)(lVar7 + 0x18);
  pcVar2 = *(code **)(*plVar4 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar8 = plVar4 + 3;
    if (plVar4[5] != 0) {
      plVar8 = (longlong *)(plVar4[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar8 = plVar4 + 2;
  }
  else {
    plVar8 = (longlong *)(*pcVar2)(plVar4);
  }
  if (1 < (int)plVar8[1]) {
    lVar5 = *(longlong *)(param_1 + 0x178);
    if (lVar5 == 0) {
      uVar6 = FUN_1465d584e();
      lVar5 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x178) = lVar5;
    }
    lVar7 = *(longlong *)(param_1 + 0x180);
    if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar7 = FUN_144aff482(uVar6,plVar1);
      }
      *(longlong *)(param_1 + 0x180) = lVar7;
    }
    plVar1 = *(longlong **)(lVar7 + 0x18);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar7 + 0x20);
    return param_2;
  }
LAB_141903fab:
  FUN_1489b464a(param_1,param_2);
  return param_2;
}



// FUNCTION 141903fd2 FUN_141903fd2 body=788 status=ok
// SIG undefined FUN_141903fd2(void)

undefined8 * FUN_141903fd2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = param_1[0x2f];
  if (lVar6 == 0) {
    uVar7 = FUN_1465d584e();
    lVar6 = FUN_14477b664(uVar7);
    param_1[0x2f] = lVar6;
  }
  plVar1 = param_1 + 0x2e;
  lVar8 = param_1[0x30];
  if (lVar8 == 0) {
    if ((lVar6 != 0) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar6 + 0xb8);
      if (plVar4 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
        if (cVar5 != '\0') {
          uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar8 = FUN_144aff482(uVar7,plVar1);
          param_1[0x30] = lVar8;
          if (lVar8 != 0) {
            lVar6 = param_1[0x2f];
            goto LAB_141904013;
          }
          goto LAB_141904256;
        }
      }
      param_1[0x30] = 0;
    }
  }
  else {
LAB_141904013:
    if (lVar6 == 0) {
      uVar7 = FUN_1465d584e();
      lVar6 = FUN_14477b664(uVar7);
      param_1[0x2f] = lVar6;
      lVar8 = param_1[0x30];
      if (((lVar8 == 0) && (lVar8 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
        plVar4 = *(longlong **)(lVar6 + 0xb8);
        if (plVar4 == (longlong *)0x0) {
LAB_1419042d9:
          lVar8 = 0;
        }
        else {
          cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
          if (cVar5 == '\0') goto LAB_1419042d9;
          uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar8 = FUN_144aff482(uVar7,plVar1);
        }
        param_1[0x30] = lVar8;
      }
    }
    if (1 < *(int *)(lVar8 + 0x30)) {
      lVar6 = param_1[0x2f];
      if (lVar6 == 0) {
        uVar7 = FUN_1465d584e();
        lVar6 = FUN_14477b664(uVar7);
        param_1[0x2f] = lVar6;
        lVar8 = param_1[0x30];
      }
      if (lVar8 == 0) {
        param_1[0x30] = 0;
        lVar8 = 0;
        if ((lVar6 != 0) && (param_1[0x2e] != 0)) {
          plVar4 = *(longlong **)(lVar6 + 0xb8);
          if (plVar4 == (longlong *)0x0) {
LAB_1419042e0:
            lVar8 = 0;
          }
          else {
            cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
            if (cVar5 == '\0') goto LAB_1419042e0;
            uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar8 = FUN_144aff482(uVar7,plVar1);
          }
          param_1[0x30] = lVar8;
        }
      }
      *param_2 = 0;
      iVar2 = *(int *)(lVar8 + 0x30);
      pvVar3 = *(void **)(lVar8 + 0x28);
      *(int *)(param_2 + 1) = iVar2;
      if ((longlong)iVar2 != 0) {
        FUN_1446dd670(param_2,iVar2,0);
        memcpy((void *)*param_2,pvVar3,(longlong)iVar2 * 2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_141904230;
    }
  }
LAB_141904256:
  (**(code **)(*param_1 + 0x18))(param_1,local_38);
  cVar5 = FUN_144a7c5f6(local_38);
  if (cVar5 == '\0') {
    puVar9 = (undefined8 *)FUN_1447a1f4a(local_38);
    *param_2 = 0;
    iVar2 = *(int *)(puVar9 + 1);
    pvVar3 = (void *)*puVar9;
    *(int *)(param_2 + 1) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar2,0);
      memcpy((void *)*param_2,pvVar3,(longlong)iVar2 * 2);
    }
  }
  else {
    FUN_1489b4678(param_1,param_2);
  }
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
LAB_141904230:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1419042e8 FUN_1419042e8 body=922 status=ok
// SIG undefined FUN_1419042e8(void)

longlong FUN_1419042e8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x130) + 0x10))(param_1 + -0x130);
  if (0 < *(int *)(lVar1 + 0xa8)) {
    plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (plVar3 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar3);
    }
    else if (plVar3 == (longlong *)0x0) goto LAB_1419043b0;
    if (DAT_14cb6fd58 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1487a9cc5;
      local_50 = FUN_14654339c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
    }
    lVar1 = (**(code **)(*plVar3 + 0x288))(plVar3,DAT_14cb6fd58);
    if (lVar1 != 0) {
      if (DAT_14cb6fd58 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1487a9cc5;
        local_50 = FUN_14654339c;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb6fd58);
      if ((lVar1 != lVar2) && (lVar2 != 0)) goto LAB_14190438c;
    }
  }
LAB_1419043b0:
  plVar3 = (longlong *)(param_1 + -0x3b60);
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cb6fd58 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1487a9cc5;
      local_50 = FUN_14654339c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
    }
    lVar1 = (**(code **)(*plVar3 + 0x288))(plVar3,DAT_14cb6fd58);
    if (lVar1 != 0) {
      if (DAT_14cb6fd58 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1487a9cc5;
        local_50 = FUN_14654339c;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb6fd58);
      if (lVar1 != lVar2) goto LAB_14190438c;
    }
  }
  lVar2 = 0;
LAB_14190438c:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141904684 FUN_141904684 body=40 status=ok
// SIG undefined FUN_141904684(void)

undefined8 FUN_141904684(undefined8 param_1,int param_2)

{
  FUN_140adedd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1419046ac FUN_1419046ac body=173 status=ok
// SIG undefined FUN_1419046ac(void)

undefined8 * FUN_1419046ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9e0f70;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1448fc38a(param_1 + 2,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(param_1 + 4,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14190475a FUN_14190475a body=93 status=ok
// SIG undefined FUN_14190475a(void)

void FUN_14190475a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1090;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1419047b8 FUN_1419047b8 body=93 status=ok
// SIG undefined FUN_1419047b8(void)

void FUN_1419047b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 141904816 FUN_141904816 body=93 status=ok
// SIG undefined FUN_141904816(void)

void FUN_141904816(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 141904874 FUN_141904874 body=93 status=ok
// SIG undefined FUN_141904874(void)

void FUN_141904874(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e15d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1419048d1 FUN_1419048d1 body=49 status=ok
// SIG undefined FUN_1419048d1(void)

longlong FUN_1419048d1(void)

{
  if (DAT_14cbf25e0 == 0) {
    FUN_14073dd9a(&DAT_14cbf25e0,&PTR_LAB_14b9e7d30);
  }
  return DAT_14cbf25e0;
}



// FUNCTION 141904902 FUN_141904902 body=49 status=ok
// SIG undefined FUN_141904902(void)

longlong FUN_141904902(void)

{
  if (DAT_14cbf2790 == 0) {
    FUN_14073dd9a(&DAT_14cbf2790,&PTR_LAB_14b9ec040);
  }
  return DAT_14cbf2790;
}



// FUNCTION 141904933 FUN_141904933 body=49 status=ok
// SIG undefined FUN_141904933(void)

longlong FUN_141904933(void)

{
  if (DAT_14cbf2a48 == 0) {
    FUN_14086a14e(&DAT_14cbf2a48,&PTR_FUN_14b9f19d0);
  }
  return DAT_14cbf2a48;
}



// FUNCTION 141904964 FUN_141904964 body=49 status=ok
// SIG undefined FUN_141904964(void)

longlong FUN_141904964(void)

{
  if (DAT_14cbf2b30 == 0) {
    FUN_14073dd9a(&DAT_14cbf2b30,&PTR_LAB_14b9f3ac0);
  }
  return DAT_14cbf2b30;
}



// FUNCTION 141904995 FUN_141904995 body=49 status=ok
// SIG undefined FUN_141904995(void)

longlong FUN_141904995(void)

{
  if (DAT_14cbf2d80 == 0) {
    FUN_14073dd9a(&DAT_14cbf2d80,&PTR_LAB_14b9f9b20);
  }
  return DAT_14cbf2d80;
}



// FUNCTION 1419049c6 FUN_1419049c6 body=49 status=ok
// SIG undefined FUN_1419049c6(void)

longlong FUN_1419049c6(void)

{
  if (DAT_14cbf2fe0 == 0) {
    FUN_14073dd9a(&DAT_14cbf2fe0,&PTR_LAB_14b9ffe80);
  }
  return DAT_14cbf2fe0;
}



// FUNCTION 1419049f7 FUN_1419049f7 body=49 status=ok
// SIG undefined FUN_1419049f7(void)

longlong FUN_1419049f7(void)

{
  if (DAT_14cbf3190 == 0) {
    FUN_140f50038(&DAT_14cbf3190,&PTR_s__Script_MeshModelingTools_14ba059ad_3_14ba05990);
  }
  return DAT_14cbf3190;
}



// FUNCTION 141904a28 FUN_141904a28 body=49 status=ok
// SIG undefined FUN_141904a28(void)

longlong FUN_141904a28(void)

{
  if (DAT_14cbf3948 == 0) {
    FUN_14073dd9a(&DAT_14cbf3948,&PTR_LAB_14ba1ab40);
  }
  return DAT_14cbf3948;
}



// FUNCTION 141904a5a FUN_141904a5a body=68 status=ok
// SIG undefined FUN_141904a5a(void)

undefined8 FUN_141904a5a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  FUN_140002266(param_2,L"%s%s%u.%u",&DAT_14ba3c4b8,&DAT_14ba3be86,(int)param_1[1],uVar1);
  return param_2;
}



// FUNCTION 141904a9e FUN_141904a9e body=294 status=ok
// SIG undefined FUN_141904a9e(void)

void FUN_141904a9e(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (*(float *)(param_1 + 0x137) <= 0.0) {
    FUN_147bd544c(param_1);
    return;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x9bc);
  cVar2 = (**(code **)(*param_1 + 0x3c0))();
  if (cVar2 == '\0') {
    if (param_1[0x1e] == 0) {
      uVar6 = *(uint *)((longlong)param_1 + 0x9bc);
      goto LAB_141904b49;
    }
    bVar3 = (double)*(float *)(param_1 + 0x137) <
            (double)param_1[0x60] - *(double *)(param_1[0x1e] + 0x1d8);
  }
  else {
    if ((longlong)(int)param_1[0x20] == 0) {
      iVar4 = 0;
      iVar5 = 0;
    }
    else {
      lVar7 = 0;
      iVar5 = 0;
      iVar4 = 0;
      do {
        if (*(longlong *)(param_1[0x1f] + lVar7) != 0) {
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + (uint)((double)*(float *)(param_1 + 0x137) <
                                (double)param_1[0x60] -
                                *(double *)(*(longlong *)(param_1[0x1f] + lVar7) + 0x1d8));
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)param_1[0x20] * 8 != lVar7);
    }
    bVar3 = iVar5 == iVar4 && 1 < iVar5;
  }
  uVar6 = (uint)bVar3;
  *(uint *)((longlong)param_1 + 0x9bc) = (uint)bVar3;
LAB_141904b49:
  if (uVar1 == uVar6) {
    return;
  }
  FUN_147bddd30(DAT_14cb0d2b0 + 0xee0,param_1[0x35],param_1);
  return;
}



// FUNCTION 141904bc4 FUN_141904bc4 body=136 status=ok
// SIG undefined FUN_141904bc4(void)

longlong * FUN_141904bc4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ba3c350;
  plVar3[2] = (longlong)&PTR_FUN_14ba3c280;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(undefined2 *)((longlong)plVar3 + 0x1c) = 0;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 141904c4c FUN_141904c4c body=29 status=ok
// SIG undefined FUN_141904c4c(void)

undefined8 FUN_141904c4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141904c69 FUN_141904c69 body=352 status=ok
// SIG undefined FUN_141904c69(void)

longlong * FUN_141904c69(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e8ce9a(&local_48,param_2 + 8);
  plVar2 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  uVar5 = 0;
  if ((ulonglong)*(byte *)(param_2 + 0x38) < 5) {
    uVar5 = *(undefined4 *)(&DAT_14ba41858 + (ulonglong)*(byte *)(param_2 + 0x38) * 4);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_FUN_14ba3d990;
  puVar4[2] = &PTR_FUN_14ba3d370;
  puVar4[3] = local_48;
  puVar4[4] = plVar2;
  if (plVar2 == (longlong *)0x0) {
    puVar4[5] = param_3;
    *(undefined4 *)(puVar4 + 6) = uVar5;
    *param_1 = (longlong)(puVar4 + 2);
    param_1[1] = (longlong)puVar4;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    puVar4[5] = param_3;
    *(undefined4 *)(puVar4 + 6) = uVar5;
    *param_1 = (longlong)(puVar4 + 2);
    param_1[1] = (longlong)puVar4;
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)local_40 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141904dca FUN_141904dca body=184 status=ok
// SIG undefined FUN_141904dca(void)

void FUN_141904dca(byte param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  
  *(uint *)(*param_3 + 0x10) = *(uint *)(*param_3 + 0x10) & 0xfffffffe | (uint)param_1;
  uVar2 = *(uint *)(*param_3 + 0x10);
  *(uint *)(*param_3 + 0x10) = (uVar2 & 0xfffffffd) + (uVar2 & 1) * 2;
  uVar2 = *(uint *)(*param_3 + 0x10);
  *(uint *)(*param_3 + 0x10) = (uVar2 & 0xfffffffb) + (uVar2 & 1) * 4;
  lVar4 = *param_3;
  puVar1 = (undefined8 *)(lVar4 + 0x20);
  if (puVar1 != param_2) {
    iVar3 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(lVar4 + 0x28) = iVar3;
    if (iVar3 == 0 && *(int *)(lVar4 + 0x2c) == 0) {
      *(undefined4 *)(lVar4 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  *(undefined1 *)(lVar4 + 0x30) = *(undefined1 *)(param_2 + 2);
  FUN_140c39ec6(lVar4 + 0x38,param_2 + 3);
  return;
}



// FUNCTION 141904e82 FUN_141904e82 body=83 status=ok
// SIG undefined FUN_141904e82(void)

undefined8 * FUN_141904e82(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
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



// FUNCTION 141904ed6 FUN_141904ed6 body=55 status=ok
// SIG undefined FUN_141904ed6(void)

void FUN_141904ed6(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 0x20);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 141904f0e FUN_141904f0e body=55 status=ok
// SIG undefined FUN_141904f0e(void)

void FUN_141904f0e(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 8);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 141904f46 FUN_141904f46 body=29 status=ok
// SIG undefined FUN_141904f46(void)

undefined8 FUN_141904f46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141904f64 FUN_141904f64 body=29 status=ok
// SIG undefined FUN_141904f64(void)

undefined8 FUN_141904f64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141904f82 FUN_141904f82 body=29 status=ok
// SIG undefined FUN_141904f82(void)

undefined8 FUN_141904f82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141904fa0 FUN_141904fa0 body=29 status=ok
// SIG undefined FUN_141904fa0(void)

undefined8 FUN_141904fa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141904fbe FUN_141904fbe body=211 status=ok
// SIG undefined FUN_141904fbe(void)

undefined8 * FUN_141904fbe(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar2 = *param_2;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ba46f50;
  puVar4[3] = uVar2;
  *param_1 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba46fb0;
  plVar5[2] = (longlong)puVar4;
  param_1[1] = plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar3 = (longlong *)puVar4[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        puVar4[2] = plVar5;
      }
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  return param_1;
}



// FUNCTION 141905092 FUN_141905092 body=29 status=ok
// SIG undefined FUN_141905092(void)

undefined8 FUN_141905092(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1419050b0 FUN_1419050b0 body=196 status=ok
// SIG undefined FUN_1419050b0(void)

undefined8 *
FUN_1419050b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_14b438dd0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 5) = param_4;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 141905174 FUN_141905174 body=29 status=ok
// SIG undefined FUN_141905174(void)

undefined8 FUN_141905174(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141905192 FUN_141905192 body=83 status=ok
// SIG undefined FUN_141905192(void)

undefined8 * FUN_141905192(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
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



// FUNCTION 1419051e6 FUN_1419051e6 body=405 status=ok
// SIG undefined FUN_1419051e6(void)

undefined8 FUN_1419051e6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_3;
  cVar4 = FUN_140988638(&local_30,&DAT_14ba4e8a0,1);
  if (cVar4 == '\0') {
LAB_14190521f:
    uVar5 = 0;
  }
  else {
    param_1 = param_1 + -8;
    cVar4 = FUN_140988638(&local_30,L"Ping",1);
    if (cVar4 == '\0') {
      cVar4 = FUN_140988638(&local_30,L"DumpRegions",1);
      if (cVar4 == '\0') goto LAB_14190521f;
      FUN_148fc6cea(param_1,&local_40);
      FUN_1443ba262(*(undefined8 *)(local_40 + 0x20));
    }
    else {
      FUN_148fc6cea(param_1,&local_40);
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,2,0x10);
      local_48 = 2;
      *local_50 = &PTR_LAB_149e020b0;
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
      local_50[2] = lVar6;
      *local_50 = &PTR_FUN_14ba50e70;
      local_50[3] = param_1;
      local_68 = 0;
      uStack_60 = 0;
      FUN_1443b9018(*(undefined8 *)(local_40 + 0x20),param_2,&local_68,&local_50);
      FUN_1449db362(&local_50);
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
    uVar5 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14190537c FUN_14190537c body=370 status=ok
// SIG undefined FUN_14190537c(void)

undefined8 * FUN_14190537c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1419054ef FUN_1419054ef body=341 status=ok
// SIG undefined FUN_1419054ef(void)

void FUN_1419054ef(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba723e0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  uVar2 = DAT_14cad2370;
  if (DAT_14cac7648 == 0) {
    local_40 = &local_20;
    local_20 = FUN_144a7958c;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_143242436;
    local_48 = &LAB_14789ef1f;
    local_50 = &LAB_1417b008f;
    local_58 = L"Engine";
    local_60 = 0x8000000000;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = CONCAT31(local_78._1_3_,1);
  plVar3 = (longlong *)FUN_14048696c(puVar1,uVar2,DAT_14cac7648,DAT_14cac7648);
  (**(code **)(*plVar3 + 0x588))(plVar3,0);
  FUN_14092e51e(puVar1,plVar3);
  FUN_1403121a6(puVar1,0);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141905645 FUN_141905645 body=113 status=ok
// SIG undefined FUN_141905645(void)

void FUN_141905645(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14090bcbc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba72af0;
  puVar1[5] = &PTR_FUN_14ba736e0;
  puVar1[6] = &PTR_FUN_14ba73720;
  puVar1[0x55] = &PTR_FUN_14ba73770;
  puVar1[0x56] = &PTR_FUN_14ba737f0;
  puVar1[0x57] = &PTR_FUN_14ba73800;
  puVar1[0xe3] = &PTR_FUN_14ba73830;
  return;
}



// FUNCTION 1419056b6 FUN_1419056b6 body=845 status=ok
// SIG undefined FUN_1419056b6(void)

void FUN_1419056b6(void)

{
  float fVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [40];
  void *local_a0;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  void *local_88;
  uint local_80;
  uint local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf6720) && (FUN_144b3d300(&DAT_14cbf6720), DAT_14cbf6720 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cbf6718 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"grass.CullDistanceScale",1)
    ;
    _Init_thread_footer(&DAT_14cbf6720);
  }
  if (DAT_14cbf6718 == (longlong *)0x0) {
    fVar7 = 1.0;
  }
  else {
    fVar7 = (float)(**(code **)(*DAT_14cbf6718 + 0xb8))();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf6728) && (FUN_144b3d300(&DAT_14cbf6728), DAT_14cbf6728 == -1)) {
    DAT_14cbf6724 = DAT_14cbf6710;
    _Init_thread_footer(&DAT_14cbf6728);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf6730) && (FUN_144b3d300(&DAT_14cbf6730), DAT_14cbf6730 == -1)) {
    DAT_14cbf672c = fVar7;
    _Init_thread_footer(&DAT_14cbf6730);
  }
  if ((DAT_14cbf6724 != DAT_14cbf6710) || ((DAT_14cbf6724 & DAT_14cbf672c != fVar7) != 0)) {
    FUN_14905f00e();
    pvVar2 = local_88;
    local_a0 = (void *)0x0;
    lVar4 = (longlong)(int)local_80;
    local_98 = local_80;
    if (lVar4 == 0) {
      local_94 = 0;
      local_80 = 0;
    }
    else {
      FUN_14010590e(&local_a0,local_80,0);
      memcpy(local_a0,pvVar2,lVar4 << 3);
    }
    uVar3 = (ulonglong)local_78;
    fVar1 = DAT_14cbf672c;
    pvVar2 = local_a0;
    local_90 = local_78;
joined_r0x000141905900:
    DAT_14cbf672c = fVar1;
    if (local_90 != local_80) {
      fVar8 = fVar7;
      if (DAT_14cbf6710 == 0) {
        fVar8 = 1.0;
      }
      uVar3 = (ulonglong)(int)uVar3;
      lVar4 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
      lVar5 = (longlong)*(int *)(lVar4 + 0x398);
      if (lVar5 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x390);
        lVar6 = 0;
        do {
          FUN_14905ed5c(*(undefined8 *)(lVar4 + lVar6),fVar1,fVar8);
          lVar6 = lVar6 + 8;
        } while (lVar5 * 8 != lVar6);
        uVar3 = (ulonglong)(int)local_90;
        pvVar2 = local_a0;
      }
      do {
        uVar3 = uVar3 + 1;
        local_90 = (uint)uVar3;
        fVar1 = DAT_14cbf672c;
        if ((longlong)(int)local_98 <= (longlong)uVar3) break;
      } while (*(longlong *)((longlong)pvVar2 + uVar3 * 8) == 0);
      goto joined_r0x000141905900;
    }
    if (pvVar2 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
    DAT_14cbf6724 = DAT_14cbf6710;
    DAT_14cbf672c = fVar7;
    if (DAT_14cbf6710 == 0) {
      DAT_14cbf672c = 1.0;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141905a04 FUN_141905a04 body=324 status=ok
// SIG undefined FUN_141905a04(void)

void FUN_141905a04(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  FUN_1401b2056();
  if (DAT_14cbf6710 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbf6758) && (FUN_144b3d300(&DAT_14cbf6758), DAT_14cbf6758 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cbf6750 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"grass.CullDistanceScale",1);
      _Init_thread_footer(&DAT_14cbf6758);
    }
    if (DAT_14cbf6750 == (longlong *)0x0) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = (float)(**(code **)(*DAT_14cbf6750 + 0xb8))();
    }
    iVar1 = *(int *)(param_1 + 0x398);
    if ((longlong)iVar1 != 0) {
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      lVar2 = *(longlong *)(param_1 + 0x390);
      lVar4 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar4);
        if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
          FUN_1400337aa(lVar3);
          FUN_14905ed5c(lVar3,0x3f800000,fVar5);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 141905b48 FUN_141905b48 body=70 status=ok
// SIG undefined FUN_141905b48(void)

undefined8 * FUN_141905b48(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba723e0;
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141905b8e FUN_141905b8e body=40 status=ok
// SIG undefined FUN_141905b8e(void)

undefined8 FUN_141905b8e(undefined8 param_1,int param_2)

{
  FUN_140899b20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141905bb6 FUN_141905bb6 body=60 status=ok
// SIG undefined FUN_141905bb6(void)

void FUN_141905bb6(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_1405e4c36(uVar1);
  if (lVar2 != 0) {
    FUN_140042148(lVar2 + 0x40,param_1);
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 141905bf2 FUN_141905bf2 body=72 status=ok
// SIG undefined FUN_141905bf2(void)

undefined8 * FUN_141905bf2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba77af0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_1402d9b92(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141905c3a FUN_141905c3a body=46 status=ok
// SIG undefined FUN_141905c3a(void)

void FUN_141905c3a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406eddc8(puVar1);
  *puVar1 = &PTR_FUN_14ba7f1d0;
  puVar1[0x72] = &PTR_FUN_14ba7f810;
  return;
}



// FUNCTION 141905c68 FUN_141905c68 body=40 status=ok
// SIG undefined FUN_141905c68(void)

undefined8 FUN_141905c68(undefined8 param_1,int param_2)

{
  FUN_14034d9a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141905c90 FUN_141905c90 body=49 status=ok
// SIG undefined FUN_141905c90(void)

longlong FUN_141905c90(void)

{
  if (DAT_14cbf70b0 == 0) {
    FUN_14073dd9a(&DAT_14cbf70b0,&PTR_LAB_14ba865b0);
  }
  return DAT_14cbf70b0;
}



// FUNCTION 141905cc1 FUN_141905cc1 body=49 status=ok
// SIG undefined FUN_141905cc1(void)

longlong FUN_141905cc1(void)

{
  if (DAT_14cbf7638 == 0) {
    FUN_14073dd9a(&DAT_14cbf7638,&PTR_LAB_14ba8f9c0);
  }
  return DAT_14cbf7638;
}



// FUNCTION 141905cf2 FUN_141905cf2 body=49 status=ok
// SIG undefined FUN_141905cf2(void)

longlong FUN_141905cf2(void)

{
  if (DAT_14cbf7bf8 == 0) {
    FUN_14073dd9a(&DAT_14cbf7bf8,&PTR_LAB_14ba96bb0);
  }
  return DAT_14cbf7bf8;
}



// FUNCTION 141905d24 FUN_141905d24 body=57 status=ok
// SIG undefined FUN_141905d24(void)

byte FUN_141905d24(longlong param_1)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0x10) == 0) && ((*(byte *)(param_1 + 0x3d) & 1) != 0)) &&
     (cVar1 = FUN_140919df9(1,*(undefined2 *)(param_1 + 0x48)), cVar1 != '\0')) {
    return 1;
  }
  return (*(byte *)(param_1 + 0x38) & 2) >> 1;
}



// FUNCTION 141905dc8 FUN_141905dc8 body=54 status=ok
// SIG undefined FUN_141905dc8(void)

byte FUN_141905dc8(longlong param_1)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0x10) == 0) && ((*(byte *)(param_1 + 0x3d) & 1) != 0)) &&
     (cVar1 = FUN_140919df9(0,*(undefined2 *)(param_1 + 0x48)), cVar1 != '\0')) {
    return 1;
  }
  return (*(byte *)(param_1 + 0x38) & 2) >> 1;
}



// FUNCTION 141905dfe FUN_141905dfe body=49 status=ok
// SIG undefined FUN_141905dfe(void)

longlong FUN_141905dfe(void)

{
  if (DAT_14cbfe330 == 0) {
    FUN_14073dd9a(&DAT_14cbfe330,&PTR_LAB_14bab64c0);
  }
  return DAT_14cbfe330;
}



// FUNCTION 141905e2f FUN_141905e2f body=49 status=ok
// SIG undefined FUN_141905e2f(void)

longlong FUN_141905e2f(void)

{
  if (DAT_14cbfe3e8 == 0) {
    FUN_14073dd9a(&DAT_14cbfe3e8,&PTR_LAB_14bab81d0);
  }
  return DAT_14cbfe3e8;
}



// FUNCTION 141905e60 FUN_141905e60 body=49 status=ok
// SIG undefined FUN_141905e60(void)

longlong FUN_141905e60(void)

{
  if (DAT_14cc000c0 == 0) {
    FUN_1409ce572(&DAT_14cc000c0,&PTR_FUN_14bac4ce0);
  }
  return DAT_14cc000c0;
}



// FUNCTION 141905e91 FUN_141905e91 body=49 status=ok
// SIG undefined FUN_141905e91(void)

longlong FUN_141905e91(void)

{
  if (DAT_14cc00150 == 0) {
    FUN_14086a14e(&DAT_14cc00150,&PTR_FUN_14bac51c8);
  }
  return DAT_14cc00150;
}


