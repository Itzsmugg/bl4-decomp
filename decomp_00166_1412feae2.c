// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412feae2 FUN_1412feae2 body=186 status=ok
// SIG undefined FUN_1412feae2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412feae2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacddf0) {
    FUN_144b3d300(&DAT_14cacddf0);
    if (DAT_14cacddf0 == -1) {
      DAT_14cacdd90 = &PTR_FUN_14a7ec080;
      InitializeSRWLock((PSRWLOCK)&DAT_14cacdd98);
      _DAT_14cacddc0 = 0;
      _DAT_14cacddc8 = 0;
      _DAT_14cacdda0 = 0;
      uRam000000014cacdda8 = 0;
      _DAT_14cacddcc = 0xffffffff00000080;
      _DAT_14cacddd4 = 0;
      DAT_14cacdde0 = 0;
      _DAT_14cacdde8 = 0;
      atexit(FUN_1433fdf64);
      _Init_thread_footer(&DAT_14cacddf0);
    }
  }
  return &DAT_14cacdd90;
}



// FUNCTION 1412feb9c FUN_1412feb9c body=147 status=ok
// SIG undefined FUN_1412feb9c(void)

void FUN_1412feb9c(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001412febfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c8))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412fec30 FUN_1412fec30 body=65 status=ok
// SIG undefined FUN_1412fec30(void)

void FUN_1412fec30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144757f48(param_1,8);
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar3 = 0;
    do {
      FUN_1400337aa(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1412fec72 FUN_1412fec72 body=278 status=ok
// SIG undefined FUN_1412fec72(void)

void FUN_1412fec72(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144757f48(param_1,8);
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar3 = 0;
    do {
      FUN_1400337aa(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((*(longlong *)(param_1 + 0x128) != 0) && (*(longlong *)(param_1 + 0x130) == 0)) {
    lVar2 = FUN_1494a0283(param_1);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x130) = lVar2;
    FUN_144757f48(lVar2,8);
  }
  local_58 = 0x10ca737593ede1aa;
  uStack_50 = 0x49b157a04df98a28;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 5) {
    FUN_1494a0334(param_1);
  }
  local_68 = 0x10ca737593ede1aa;
  uStack_60 = 0x49b157a04df98a28;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 0xc) {
    FUN_1494a04ea(param_1,*(undefined8 *)(param_1 + 0x130),0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412fed8a FUN_1412fed8a body=781 status=ok
// SIG undefined FUN_1412fed8a(void)

undefined8 * FUN_1412fed8a(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14a79d330;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14bd1d580;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_1412fef38;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_1412fef22;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_1412fef22:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1412fef38:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412ff0e6 FUN_1412ff0e6 body=115 status=ok
// SIG undefined FUN_1412ff0e6(void)

void FUN_1412ff0e6(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if ((*(int *)(param_1 + 0x388) != param_2) &&
     (*(int *)(param_1 + 0x388) = param_2, (~*(byte *)(param_1 + 0x9c) & 3) == 0)) {
    bVar2 = *(byte *)(param_1 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_1412ff135:
      *(byte *)(param_1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar1 = FUN_1448abda6(param_1);
      if (lVar1 == 0) {
        bVar2 = *(byte *)(param_1 + 0x9d);
        goto LAB_1412ff135;
      }
    }
  }
  return;
}



// FUNCTION 1412ff15a FUN_1412ff15a body=798 status=ok
// SIG undefined FUN_1412ff15a(void)

void FUN_1412ff15a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (undefined4)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412ff47a(param_1,local_1c,local_28);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ff47a FUN_1412ff47a body=161 status=ok
// SIG undefined FUN_1412ff47a(void)

void FUN_1412ff47a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_18;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  local_18 = param_3;
  FUN_140f71c20(0,param_2,&local_68,1);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_68);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ff51c FUN_1412ff51c body=486 status=ok
// SIG undefined FUN_1412ff51c(void)

void FUN_1412ff51c(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_78[1] = 0;
  iVar10 = 0;
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_60 = 0;
  local_68 = (ulonglong *)0x0;
  (**(code **)(*plVar8 + 0x1c8))(plVar8,&local_68,&local_60);
  uVar3 = local_60;
  puVar2 = local_68;
  local_4c = (uint)local_60;
  local_58 = local_68;
  if (0 < (int)(uint)local_60) {
    iVar10 = 0;
    uVar9 = 0x7fffffff;
    uVar6 = (uint)local_60;
    do {
      if (uVar9 == 0) {
        iVar10 = -1;
        break;
      }
      iVar4 = iVar10;
      if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar6, 7 < uVar6)) &&
         (uVar7 = uVar9, 7 < (int)uVar9)) {
        while (uVar9 = uVar7, iVar4 = iVar10, local_4c = uVar6,
              (*local_58 & 0x8080808080808080) == 0) {
          local_58 = local_58 + 1;
          iVar10 = iVar10 + 8;
          local_4c = uVar6 - 8;
          uVar9 = uVar7 - 8;
          bVar1 = (int)uVar6 < 0x10;
          uVar6 = local_4c;
          iVar4 = iVar10;
          if ((bVar1) || (bVar1 = uVar7 < 0x10, uVar7 = uVar9, bVar1)) break;
        }
      }
LAB_1412ff607:
      do {
        iVar10 = iVar4;
        if (((int)uVar6 < 1) || ((int)uVar9 < 1)) break;
        uVar7 = FUN_14003e942(&local_58,&local_4c);
        uVar6 = local_4c;
        if (uVar7 < 0x10000) {
          uVar9 = uVar9 - 1;
          iVar4 = iVar10 + 1;
          if (0x7f < uVar7) goto LAB_1412ff607;
        }
        else {
          if (1 < uVar9) {
            uVar9 = uVar9 - 2;
            iVar4 = iVar10 + 2;
            goto LAB_1412ff607;
          }
          uVar9 = 0;
        }
        iVar10 = iVar10 + 1;
        iVar4 = iVar10;
      } while (((ulonglong)local_58 & 7) != 0);
    } while (0 < (int)uVar6);
  }
  FUN_1409ee492(local_78,iVar10 + 1,1);
  *(undefined2 *)(local_78[0] + (longlong)iVar10 * 2) = 0;
  FUN_1446e71a3(local_78[0],(longlong)iVar10,puVar2,uVar3 & 0xffffffff);
  cVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar5 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_78);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ff704 FUN_1412ff704 body=432 status=ok
// SIG undefined FUN_1412ff704(void)

void FUN_1412ff704(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  
  iVar1 = (int)param_2[1];
  if (iVar1 == DAT_14cbdb590) {
    puVar2 = &DAT_14cbdb3e8;
    if (1 < iVar1) {
      lVar6 = 0;
      while( true ) {
        uVar7 = *(ushort *)(*param_2 + lVar6);
        uVar5 = (ulonglong)uVar7;
        uVar4 = *(ushort *)(DAT_14cbdb588 + lVar6);
        if (uVar7 != uVar4) break;
        if (uVar7 == 0) goto LAB_1412ff825;
LAB_1412ff7f4:
        lVar6 = lVar6 + 2;
      }
      if ((uVar4 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar3 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1412ff7f4;
      }
      if (uVar7 != uVar4) goto LAB_1412ff72a;
    }
  }
  else if (DAT_14cbdb590 + iVar1 == 1) {
    puVar2 = &DAT_14cbdb3e8;
  }
  else {
LAB_1412ff72a:
    if (iVar1 == DAT_14cbdb5a0) {
      puVar2 = &DAT_14cbdb468;
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar6);
          uVar5 = (ulonglong)uVar7;
          uVar4 = *(ushort *)(DAT_14cbdb598 + lVar6);
          if (uVar7 != uVar4) break;
          if (uVar7 == 0) goto LAB_1412ff825;
LAB_1412ff868:
          lVar6 = lVar6 + 2;
        }
        if ((uVar4 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1412ff868;
        }
        if (uVar7 != uVar4) goto LAB_1412ff745;
      }
    }
    else if (DAT_14cbdb5a0 + iVar1 == 1) {
      puVar2 = &DAT_14cbdb468;
    }
    else {
LAB_1412ff745:
      if (iVar1 == DAT_14cbdb5b0) {
        puVar2 = &DAT_14cbdb4e8;
        if (1 < iVar1) {
          lVar6 = 0;
          while( true ) {
            uVar7 = *(ushort *)(*param_2 + lVar6);
            uVar5 = (ulonglong)uVar7;
            uVar4 = *(ushort *)(DAT_14cbdb5a8 + lVar6);
            if (uVar7 != uVar4) break;
            if (uVar7 == 0) goto LAB_1412ff825;
LAB_1412ff792:
            lVar6 = lVar6 + 2;
          }
          if ((uVar4 | uVar7) < 0x80) {
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            uVar3 = (ulonglong)uVar4;
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1412ff792;
          }
          if (uVar7 != uVar4) {
            return;
          }
        }
      }
      else {
        if (DAT_14cbdb5b0 + iVar1 != 1) {
          return;
        }
        puVar2 = &DAT_14cbdb4e8;
      }
    }
  }
LAB_1412ff825:
  FUN_140de1078(param_1,puVar2,0,0);
  return;
}



// FUNCTION 1412ff8b4 FUN_1412ff8b4 body=1026 status=ok
// SIG undefined FUN_1412ff8b4(void)

undefined8 FUN_1412ff8b4(longlong *param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  longlong *local_f0;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  undefined4 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *param_1 + (longlong)(int)param_1[1];
  if ((ulonglong)(longlong)(int)param_1[1] < 4) {
    lVar15 = 0;
  }
  else {
    lVar15 = (longlong)*(int *)(lVar5 + -4);
  }
  lVar15 = -lVar15;
  do {
    lVar8 = lVar15;
    if (-5 < lVar8) goto LAB_1412ffc4c;
    uVar10 = (ulonglong)*(uint *)(lVar5 + 1 + lVar8);
    bVar19 = *(char *)(lVar5 + lVar8) != 'p';
    uVar18 = uVar10;
    if (!bVar19 && uVar10 == 5) {
      uVar18 = 0;
    }
    lVar15 = uVar18 + 5 + lVar8;
  } while (bVar19 || uVar10 != 5);
  puVar6 = (undefined4 *)(lVar5 + lVar8 + 5);
  if (puVar6 == (undefined4 *)0x0) {
LAB_1412ffc4c:
    uVar14 = 0;
  }
  else {
    *(undefined1 *)(param_3 + 0xb4) = *(undefined1 *)(puVar6 + 1);
    *(undefined4 *)(param_3 + 0xb0) = *puVar6;
    lVar15 = *param_1;
    uVar7 = *(uint *)(param_1 + 1);
    uVar18 = (ulonglong)(int)uVar7;
    lVar5 = lVar15 + uVar18;
    if (uVar18 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(lVar5 + -4);
    }
    lVar8 = -lVar8;
    do {
      lVar9 = lVar8;
      if (-5 < lVar9) goto LAB_1412ffa36;
      uVar2 = *(uint *)(lVar5 + 1 + lVar9);
      bVar19 = *(char *)(lVar5 + lVar9) != 'v';
      uVar10 = (ulonglong)uVar2;
      if (!bVar19) {
        uVar10 = 0;
      }
      lVar8 = uVar10 + 5 + lVar9;
    } while (bVar19);
    puVar6 = (undefined4 *)(lVar5 + lVar9 + 5);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar2)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = (ulonglong)uVar2;
      FUN_14736909a(&local_f8,param_3 + 0xc0);
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42(&local_f8);
      lVar15 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
      uVar18 = (ulonglong)(int)uVar7;
    }
LAB_1412ffa36:
    lVar5 = lVar15 + uVar18;
    if (uVar7 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(lVar5 + -4);
    }
    lVar8 = -lVar8;
    do {
      lVar9 = lVar8;
      if (-5 < lVar9) goto LAB_1412ffa96;
      uVar16 = (ulonglong)*(uint *)(lVar5 + 1 + lVar9);
      bVar19 = *(char *)(lVar5 + lVar9) != 'x';
      uVar10 = uVar16;
      if (!bVar19 && uVar16 == 2) {
        uVar10 = 0;
      }
      lVar8 = uVar10 + 5 + lVar9;
    } while (bVar19 || uVar16 != 2);
    puVar12 = (undefined2 *)(lVar5 + lVar9 + 5);
    if (puVar12 != (undefined2 *)0x0) {
      *(undefined2 *)(param_3 + 0xd0) = *puVar12;
      lVar15 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
      uVar18 = (ulonglong)(int)uVar7;
    }
LAB_1412ffa96:
    lVar15 = uVar18 + lVar15;
    if (uVar7 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)*(int *)(lVar15 + -4);
    }
    lVar5 = -lVar5;
    do {
      lVar8 = lVar5;
      if (-5 < lVar8) goto LAB_1412ffb78;
      uVar7 = *(uint *)(lVar15 + 1 + lVar8);
      uVar10 = (ulonglong)uVar7;
      bVar19 = *(char *)(lVar15 + lVar8) != 's';
      uVar18 = uVar10;
      if (!bVar19) {
        uVar18 = 0;
      }
      lVar5 = uVar18 + 5 + lVar8;
    } while (bVar19);
    puVar6 = (undefined4 *)(lVar15 + lVar8 + 5);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar7)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = uVar10;
      if ((undefined4 *)local_f0[1] < (undefined4 *)*local_f0 + 1) {
        if ((local_ce & 2) == 0) {
          *(undefined4 *)(param_3 + 0xb8) = *puVar6;
          local_60 = 4;
        }
        else {
          thunk_FUN_14572512c(&local_f8);
        }
      }
      else {
        *(undefined4 *)(param_3 + 0xb8) = *(undefined4 *)*local_f0;
        *local_f0 = *local_f0 + 4;
      }
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42(&local_f8);
    }
LAB_1412ffb78:
    FUN_1402eeba3(param_3,param_1);
    puVar1 = (undefined8 *)(param_3 + 0xa0);
    puVar11 = puVar1;
    if (param_3 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    cVar4 = FUN_1402ee923(puVar11,*(undefined1 *)(param_3 + 0x9c));
    uVar14 = 0;
    iVar13 = 0;
    if (cVar4 != '\0') {
      iVar3 = (int)param_1[1];
      lVar5 = *param_1;
      if (3 < (ulonglong)(longlong)iVar3) {
        iVar13 = *(int *)(lVar5 + -4 + (longlong)iVar3);
      }
      iVar13 = iVar13 + param_2;
      iVar17 = iVar3 - iVar13;
      *(int *)(param_3 + 0xa8) = iVar17;
      if (iVar17 == 0 && *(int *)(param_3 + 0xac) == 0) {
        *(undefined4 *)(param_3 + 0xac) = 0;
      }
      else {
        FUN_1447a127e(puVar1,iVar17);
        if (iVar3 != iVar13) {
          memcpy((void *)*puVar1,(void *)(lVar5 + param_2),(longlong)iVar17);
        }
      }
      *(byte *)(param_3 + 0x9d) =
           *(byte *)(param_3 + 0x9d) & 0xfd | *(byte *)(param_3 + 0xb0) >> 4 & 2;
      uVar14 = CONCAT71((uint7)(uint3)((uint)iVar13 >> 8),1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 1412ffcb8 FUN_1412ffcb8 body=404 status=ok
// SIG undefined FUN_1412ffcb8(void)

void FUN_1412ffcb8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(uint *)(param_1 + 0x100) >> 0x16 & 1) == 0) &&
     (lVar2 = *(longlong *)(param_1 + 400), lVar2 != 0)) {
    *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 0x400000;
    if (DAT_14cb56270 == 0) {
      local_60 = &local_38;
      local_38 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_148630fef;
      local_70 = FUN_1464b6a91;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)FUN_144718840(lVar2,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if (lVar2 != 0) {
        local_38 = FUN_1414bed5c;
        local_30 = 0;
        FUN_1412fffd4(lVar2 + 400,local_28,param_1);
      }
    }
    lVar2 = *(longlong *)(param_1 + 400);
    FUN_14111a5b4(&local_40);
    FUN_1412ffe4e(lVar2 + 0x20e,param_1,local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ffe4e FUN_1412ffe4e body=389 status=ok
// SIG undefined FUN_1412ffe4e(void)

void FUN_1412ffe4e(byte *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar3 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_3,1);
    }
  }
  FUN_14111abfe(param_1,&local_50);
  local_48 = (ulonglong)uVar7 | uVar5 << 0x20;
  local_40 = param_3;
  bVar2 = FUN_140a28ca8(param_1 + -0x20e,local_50);
  *param_1 = *param_1 | bVar2;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412fffd4 FUN_1412fffd4 body=772 status=ok
// SIG undefined FUN_1412fffd4(void)

undefined8 * FUN_1412fffd4(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b414d60;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_141300188;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_141300172;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_141300172:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141300188:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413002f0 FUN_1413002f0 body=609 status=ok
// SIG undefined FUN_1413002f0(void)

void FUN_1413002f0(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x138);
  iVar6 = *(int *)(param_1 + 0x140);
  uVar7 = (ulonglong)iVar6;
  uVar8 = uVar7;
  if (1 < (longlong)uVar7) {
    do {
      iVar6 = (int)uVar7;
      lVar2 = *plVar1;
      lVar10 = *(longlong *)(lVar2 + -8 + uVar8 * 8);
      if (lVar10 != 0) {
        _Src = (void *)(lVar2 + uVar8 * 8);
        uVar9 = (int)uVar8 - 2;
        do {
          if (*(longlong *)(lVar2 + (ulonglong)uVar9 * 8) == lVar10) {
            if (uVar8 != (uVar7 & 0xffffffff)) {
              memmove((void *)((longlong)_Src + -8),_Src,(longlong)(iVar6 - (int)uVar8) << 3);
              iVar6 = *(int *)(param_1 + 0x140);
            }
            uVar7 = (ulonglong)(iVar6 - 1U);
            *(uint *)(param_1 + 0x140) = iVar6 - 1U;
            break;
          }
          bVar5 = 0 < (int)uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar5);
      }
      iVar6 = (int)uVar7;
      bVar5 = 2 < (longlong)uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar5);
  }
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    if (iVar6 == 0) {
      plVar11 = *(longlong **)(param_1 + 0x148);
      plVar12 = plVar11 + *(int *)(param_1 + 0x150);
    }
    else {
      lVar2 = *plVar1;
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar10);
        if (((lVar3 != 0) && (*(char *)(lVar3 + 0x9c) < '\0')) &&
           ((*(longlong *)(lVar3 + 0xa8) == 0 ||
            (*(char *)(*(longlong *)(lVar3 + 0xa8) + 0x178) != '\x03')))) {
          local_48 = lVar3;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c();
          }
          local_40 = &local_48;
          FUN_1448c4ed6((undefined8 *)(param_1 + 0x148));
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar6 * 8 != lVar10);
      if ((longlong)*(int *)(param_1 + 0x150) == 0) goto LAB_14130040d;
      plVar11 = *(longlong **)(param_1 + 0x148);
      plVar12 = plVar11 + *(int *)(param_1 + 0x150);
    }
    do {
      plVar4 = (longlong *)*plVar11;
      if (plVar4 != (longlong *)0x0) {
        local_40 = plVar4;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c();
        }
        FUN_141300552(plVar1,&local_40);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar12);
  }
LAB_14130040d:
  iVar6 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar6 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar10 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar10);
      if (((lVar3 != 0) &&
          ((((DAT_14c761428 != '\x01' || (*(longlong *)(lVar3 + 0xa8) == 0)) ||
            (*(longlong *)(*(longlong *)(lVar3 + 0xa8) + 0x1c8) != lVar3)) ||
           (*(char *)(lVar3 + 0x9c) < '\0')))) && (*(longlong *)(lVar3 + 0x120) != param_1)) {
        if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_1);
        }
        *(longlong *)(lVar3 + 0x120) = param_1;
        FUN_144a62f0c(lVar3,*(undefined8 *)(lVar3 + 0x38),2);
        FUN_1447a91cc(lVar3,0,0);
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar6 * 8 != lVar10);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141300552 FUN_141300552 body=188 status=ok
// SIG undefined FUN_141300552(void)

void FUN_141300552(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140f41d82(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 14130060e FUN_14130060e body=18 status=ok
// SIG undefined FUN_14130060e(void)

longlong FUN_14130060e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1405e677a();
  return lVar1 + 8;
}



// FUNCTION 141300620 FUN_141300620 body=1350 status=ok
// SIG undefined FUN_141300620(void)

void FUN_141300620(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *_Dst;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  int local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141300c42(&DAT_14cad0f38,&local_68,param_1,FUN_1483e0ad2);
  *(longlong **)(param_1 + 0x440) = local_68;
  FUN_141300c42(&DAT_14cad0f50,&local_68,param_1,FUN_1483e0eb0);
  *(longlong **)(param_1 + 0x448) = local_68;
  lVar6 = FUN_1447210f0(param_1);
  if (lVar6 == 0) goto LAB_141300989;
  lVar6 = *(longlong *)(lVar6 + 0x260);
  if (lVar6 != 0) {
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,3,0x10);
    plVar1 = local_68;
    local_60 = 3;
    *local_68 = (longlong)&PTR_LAB_14ac988f0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_68[2] = lVar8;
    *local_68 = (longlong)&PTR_FUN_14ae8c030;
    local_68[3] = 0;
    iVar10 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_68 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar10 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar10 = *(int *)(lVar11 + 0x10);
        bVar13 = iVar10 == 0;
        if (bVar13) {
          *(int *)(lVar11 + 0x10) = iVar5;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar10 = iVar5;
        }
      }
    }
    *(int *)((longlong)plVar1 + 0x1c) = iVar10;
    plVar1[4] = (longlong)FUN_1447ae4de;
    if (((local_60 == 0) || (local_68 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*local_68 + 0x30))(), cVar4 == '\0')) {
      if (local_60 == 0) {
        uVar12 = 0;
        goto LAB_141300847;
      }
      if (local_68 != (longlong *)0x0) {
        uVar12 = 0;
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        goto LAB_14130083a;
      }
      uVar12 = 0;
    }
    else {
      plVar1 = (longlong *)(lVar6 + 0x88);
      if (*(int *)(lVar6 + 0x9c) < 1) {
        iVar10 = *(int *)(lVar6 + 0x90);
        iVar5 = *(int *)(lVar6 + 0x98) + -1;
        *(int *)(lVar6 + 0x98) = iVar5;
        if (iVar5 <= iVar10) {
          iVar5 = iVar10;
          if (0 < iVar10) {
            iVar9 = 0;
            do {
              if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                  (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10),
                  plVar3 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(plVar1,iVar9);
                FUN_14005b248(plVar1);
              }
              else {
                iVar9 = iVar9 + 1;
              }
              iVar5 = *(int *)(lVar6 + 0x90);
            } while (iVar9 < iVar5);
          }
          iVar9 = 2;
          if (2 < iVar5 * 2) {
            iVar9 = iVar5 * 2;
          }
          *(int *)(lVar6 + 0x98) = iVar9;
          if ((iVar9 < iVar10) && (*(int *)(lVar6 + 0x94) != iVar5)) {
            FUN_14045812c();
          }
        }
      }
      uVar12 = 0;
      if ((local_60 != 0) && (local_68 != (longlong *)0x0)) {
        (**(code **)(*local_68 + 0x38))(local_68,&local_58);
        uVar12 = local_58;
      }
      iVar10 = *(int *)(lVar6 + 0x90);
      *(uint *)(lVar6 + 0x90) = iVar10 + 1U;
      if (*(uint *)(lVar6 + 0x94) < iVar10 + 1U) {
        FUN_1447a71f6(plVar1,iVar10);
      }
      lVar11 = *plVar1;
      lVar8 = (longlong)iVar10 * 0x10;
      *(undefined8 *)(lVar11 + lVar8) = 0;
      *(undefined4 *)(lVar11 + 8 + lVar8) = 0;
      *(longlong **)(lVar11 + lVar8) = local_68;
      local_68 = (longlong *)0x0;
      *(int *)(lVar11 + 8 + lVar8) = local_60;
LAB_14130083a:
      local_60 = 0;
LAB_141300847:
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x450) = uVar12;
    lVar6 = *(longlong *)(lVar6 + 0x38);
    _Dst = (undefined8 *)FUN_14001cc68(0x100);
    memset(_Dst,0,0x100);
    *(undefined2 *)(_Dst + 8) = 1;
    *_Dst = &PTR_FUN_14ae8c170;
    puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar7 = 0;
    _Dst[0xb] = puVar7;
    _Dst[10] = puVar7;
    _Dst[0xc] = 0;
    _Dst[0xd] = 0;
    puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar7 = 0;
    _Dst[0xf] = puVar7;
    _Dst[0xe] = puVar7;
    _Dst[0x10] = 0;
    _Dst[0x11] = 0;
    puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar7 = 0;
    _Dst[0x13] = puVar7;
    _Dst[0x12] = puVar7;
    _Dst[0x14] = 0;
    *_Dst = &PTR_FUN_14ae8c0a0;
    _Dst[0x19] = 0;
    *(undefined4 *)(_Dst + 0x1a) = 0;
    _Dst[0x15] = 0;
    _Dst[0x16] = 0;
    *(undefined8 *)((longlong)_Dst + 0xd4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)_Dst + 0xdc) = 0;
    _Dst[0x1d] = 0;
    *(undefined4 *)(_Dst + 0x1e) = 0;
    if ((*(byte *)((longlong)_Dst + 0x41) & 1) != 0) {
      *(undefined1 *)(lVar6 + 0x1e8) = 1;
    }
    _Dst[3] = lVar6;
    FUN_141300b68(lVar6 + 0x70,_Dst);
    *(undefined8 **)(param_1 + 0x410) = _Dst;
  }
  if ((longlong)*(int *)(param_1 + 0x408) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x400);
    lVar11 = (longlong)*(int *)(param_1 + 0x408) << 3;
    do {
      lVar8 = FUN_14479d2ce(lVar6);
      if (lVar8 != 0) {
        FUN_1483e0d40(param_1,lVar8);
      }
      lVar6 = lVar6 + 8;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(int *)(param_1 + 0x40c) != 0) {
    FUN_1483ef63c(param_1 + 0x400);
  }
LAB_141300989:
  FUN_1405f1eac(param_1);
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141300b68 FUN_141300b68 body=139 status=ok
// SIG undefined FUN_141300b68(void)

void FUN_141300b68(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)0x0;
  if (DAT_14c992a90 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 0xb8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  iVar1 = *(int *)(lVar2 + 0x2a8);
  *(uint *)(lVar2 + 0x2a8) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x2ac) < iVar1 + 1U) {
    FUN_1411dc85a((longlong *)(lVar2 + 0x2a0),iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x2a0) + (longlong)iVar1 * 8) = param_2;
  if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141300bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
  return;
}



// FUNCTION 141300c42 FUN_141300c42 body=765 status=ok
// SIG undefined FUN_141300c42(void)

undefined8 * FUN_141300c42(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar2 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14a3ea270;
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
  *local_58 = (longlong)&PTR_FUN_14ae8bfc0;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
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
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar8;
  plVar2[4] = param_4;
  *param_2 = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_141300dee;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_141300dd8;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar8 = (int)param_1[1];
      iVar4 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)param_1[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar8) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar5 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar5 = local_48;
    }
    *param_2 = uVar5;
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_1447a71f6(param_1,iVar8);
    }
    lVar9 = *param_1;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_50;
LAB_141300dd8:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141300dee:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141300f8e FUN_141300f8e body=50 status=ok
// SIG undefined FUN_141300f8e(void)

int FUN_141300f8e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[2] + -1;
  *(int *)(param_1 + 2) = iVar1;
  if (param_1 != (longlong *)0x0 && iVar1 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1,1);
  }
  return iVar1;
}



// FUNCTION 141300fc0 FUN_141300fc0 body=99 status=ok
// SIG undefined FUN_141300fc0(void)

void FUN_141300fc0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14aede560;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = 0x3d4ccccd3f733333;
  param_1[3] = 0x3f8000003d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x3d4ccccd3f733333;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f8000003d4ccccd;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x18;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 141301024 FUN_141301024 body=1164 status=ok
// SIG undefined FUN_141301024(void)

void FUN_141301024(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_14130110f;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_14130110f:
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_34);
            goto LAB_1413011db;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_34) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_34,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_34,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_34,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_34,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
LAB_1413011db:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_30,local_34);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413014b2 FUN_1413014b2 body=516 status=ok
// SIG undefined FUN_1413014b2(void)

void FUN_1413014b2(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined5 uStack_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  undefined1 local_a0;
  char local_9f;
  undefined2 local_9e;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined1 local_60;
  char local_5f;
  undefined2 local_5e;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_1402d76c0();
  if (cVar1 == '\0') {
    if ((param_1[0x53] != 0) && ((char)param_1[0x7e] == '\0')) {
      if (*(int *)((longlong)param_1 + 900) < 0) {
        *(undefined4 *)(param_1 + 0x70) = 0;
        FUN_14571f40c(param_1 + 0x6f);
      }
      else {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
      cVar1 = FUN_1402d76c0(param_1);
      if ((cVar1 == '\0') && ((int)param_1[0x56] <= param_3)) {
        *(int *)(param_1 + 0x56) = param_3;
      }
      cVar1 = ((char)param_1[0x52] == '\x02') + '\x01';
      if ((char)param_1[0x52] == '\x01') {
        cVar1 = '\0';
      }
      iVar2 = (int)param_1[0x73] - *(int *)((longlong)param_1 + 0x2ac);
      if ((*(byte *)((longlong)param_1 + 0x294) & 1) == 0) {
        (**(code **)(*param_1 + 0x2c8))(param_1,&local_58);
      }
      else {
        local_58 = (undefined4)param_1[0x54];
        uStack_54 = 0;
      }
      if (0 < iVar2) {
        do {
          local_98 = CONCAT44(uStack_54,local_58);
          local_90 = 0;
          local_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          uStack_6b = 0;
          uStack_68 = 0;
          local_5e = 0x100;
          local_5f = cVar1;
          FUN_1405244c0(param_1,&local_98);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (int)*(undefined8 *)((longlong)param_1 + 0x31c);
      if ((iVar2 < (int)param_2) ||
         ((iVar2 == (int)param_2 &&
          ((float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x31c) >> 0x20) <
           (float)((ulonglong)param_2 >> 0x20))))) {
        local_d0 = 0;
        local_a0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        uStack_ab = 0;
        uStack_a8 = 0;
        local_9e = 0x100;
        local_d8 = param_2;
        local_9f = cVar1;
        FUN_1405244c0(param_1);
      }
      FUN_140c7df7a(param_1,param_2);
    }
  }
  else {
    *(int *)(param_1 + 0x56) = param_3;
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413016b8 FUN_1413016b8 body=1104 status=ok
// SIG undefined FUN_1413016b8(void)

void FUN_1413016b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  int local_48;
  undefined4 uStack_44;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(param_1 + 0x660);
  FUN_1448aa298();
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar4 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14a1ca6c0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_14a544760;
  local_50[3] = 0;
  iVar9 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar9 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar9 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar9 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar8;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar9 = iVar8;
      }
    }
  }
  *(int *)((longlong)plVar4 + 0x1c) = iVar9;
  plVar4[4] = (longlong)FUN_1406e3394;
  *(undefined4 *)(plVar4 + 5) = 0;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_50 + 0x30))(), uVar3 = DAT_14cb10a98, cVar5 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_141301878;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_141301862;
    }
  }
  else {
    if ((DAT_14cb10aa4 < 1) &&
       (DAT_14cb10aa0 = DAT_14cb10aa0 + -1, DAT_14cb10aa0 <= (int)DAT_14cb10a98)) {
      if (0 < (int)DAT_14cb10a98) {
        iVar9 = 0;
        do {
          if (((*(int *)(DAT_14cb10a90 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar4 = *(longlong **)(DAT_14cb10a90 + (longlong)iVar9 * 0x10),
              plVar4 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(&DAT_14cb10a90,iVar9);
            FUN_14005b248(&DAT_14cb10a90);
          }
          else {
            iVar9 = iVar9 + 1;
          }
        } while (iVar9 < (int)DAT_14cb10a98);
      }
      DAT_14cb10aa0 = 2;
      if (2 < (int)(DAT_14cb10a98 * 2)) {
        DAT_14cb10aa0 = DAT_14cb10a98 * 2;
      }
      if ((DAT_14cb10aa0 < (int)uVar3) && (DAT_14cb10a9c != DAT_14cb10a98)) {
        FUN_14045812c();
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    uVar3 = DAT_14cb10a98;
    lVar10 = (longlong)(int)DAT_14cb10a98;
    DAT_14cb10a98 = DAT_14cb10a98 + 1;
    if (DAT_14cb10a9c < DAT_14cb10a98) {
      FUN_1447a71f6(&DAT_14cb10a90,uVar3);
    }
    lVar7 = DAT_14cb10a90;
    lVar10 = lVar10 * 0x10;
    *(undefined8 *)(DAT_14cb10a90 + lVar10) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar10) = 0;
    *(longlong **)(lVar7 + lVar10) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar7 + 8 + lVar10) = local_48;
LAB_141301862:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141301878:
  lVar10 = *(longlong *)(param_1 + 0xb0);
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6(param_1);
  }
  if (*(char *)(param_1 + 0x650) != '\x01') {
    if ((*(char *)(param_1 + 0x698) == '\x01') &&
       ((*(byte *)(lVar10 + 0x152) < 7 & 0x6aU >> (*(byte *)(lVar10 + 0x152) & 0x1f)) == 1 &&
        *(char *)(param_1 + 0x728) == '\0')) {
      (**(code **)(*DAT_14cb0d2b0 + 0x3d0))(DAT_14cb0d2b0,&local_50);
      local_58 = CONCAT44(uStack_44,local_48);
      local_60 = local_50;
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      FUN_147760680(param_1,&local_60);
      plVar4 = (longlong *)CONCAT44(uStack_44,local_48);
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
    if ((*(longlong *)(param_1 + 0x760) == 0) && (DAT_14ca84e78 == '\0')) {
      uVar6 = FUN_14001cc68(0x40,0x10);
      FUN_141301b58(uVar6,*(undefined1 *)(param_1 + 0x69b),1);
      *(undefined8 *)(param_1 + 0x760) = uVar6;
    }
  }
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141301b58 FUN_141301b58 body=766 status=ok
// SIG undefined FUN_141301b58(void)

undefined8 * FUN_141301b58(undefined8 *param_1,undefined1 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  uint uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a54d860;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x2a) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x2b) = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar6 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar6,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar3 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_141301cbc;
    bVar3 = DAT_14c8442b8 & 1;
  }
  if (bVar3 != 0) goto LAB_141301cbc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  local_30 = "SlateRHIRenderer";
  local_28 = 0x10;
  uStack_24 = uStack_24 & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_30,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  plVar5 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4,&local_30,1);
  (**(code **)(*plVar5 + 0x48))(plVar5,&local_30,*(undefined1 *)((longlong)param_1 + 0x2a));
  plVar5 = (longlong *)CONCAT44(uStack_24,local_28);
  if (plVar5 == (longlong *)0x0) {
    param_1[3] = local_30;
    plVar7 = (longlong *)param_1[4];
    if (plVar7 != (longlong *)0x0) {
      param_1[4] = 0;
LAB_141301dec:
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000141301e23:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[3] = local_30;
    plVar7 = (longlong *)param_1[4];
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar5;
        goto joined_r0x000141301e23;
      }
    }
    else {
      param_1[4] = plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_141301dec;
    }
  }
  plVar5 = (longlong *)CONCAT44(uStack_24,local_28);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_141301cbc:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141301e58 FUN_141301e58 body=140 status=ok
// SIG undefined FUN_141301e58(void)

void FUN_141301e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_848 [32];
  undefined1 local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_848;
  FUN_141301ee6(local_828,&DAT_149e25cfc,param_4);
  lVar1 = FUN_14052bcbc(param_1,param_5);
  if (lVar1 != 0) {
    FUN_1410abc54(lVar1,param_2,param_3,local_828);
  }
  if ((local_28 ^ (ulonglong)auStack_848) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141301ee6 FUN_141301ee6 body=141 status=ok
// SIG undefined FUN_141301ee6(void)

int FUN_141301ee6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  puVar3 = (undefined8 *)FUN_144737586();
  local_38 = 0;
  local_30 = &local_res18;
  iVar1 = __stdio_common_vswprintf(*puVar3,param_1,0x400,param_2);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (0x3ff < iVar1) {
    iVar2 = -1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141301f74 FUN_141301f74 body=1218 status=ok
// SIG undefined FUN_141301f74(void)

void FUN_141301f74(longlong param_1,longlong *param_2,ulonglong *param_3,int param_4)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  longlong **local_168;
  undefined8 *local_160;
  undefined1 local_158;
  undefined1 local_150;
  float local_148;
  undefined1 local_140;
  longlong local_130;
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *local_110;
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  ulonglong *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong local_c8 [2];
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong local_98 [2];
  undefined4 local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar5 = FUN_141302540();
  if (((param_2 != (longlong *)0x0) && (iVar5 != -1)) && (iVar5 == param_4)) {
    plVar6 = (longlong *)FUN_1408d71e4(param_1);
    lVar7 = *plVar6;
    SRWLock = (PSRWLOCK)(lVar7 + 0x220);
    AcquireSRWLockShared(SRWLock);
    FUN_140ff3baa(param_2,&local_a0);
    lVar7 = FUN_141302438(lVar7,&local_a0);
    ReleaseSRWLockShared(SRWLock);
    if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x62) & 2) == 0)) {
      FUN_148e26a0c(param_1,param_2);
    }
    cVar4 = FUN_1458d35ca(param_2);
    if ((cVar4 != '\0') && (lVar7 = *(longlong *)(param_1 + 0x20), lVar7 != 0)) {
      lVar8 = FUN_144a5dd5e();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) {
        local_130 = lVar7;
        FUN_1458d35be(param_2,&local_a0);
        if ((CONCAT44(local_a0._4_4_,(undefined4)local_a0) == DAT_14cbd5ab8) &&
           (lVar7 = FUN_145c37124(local_130), lVar7 != 0)) {
          FUN_148e261d8(lVar7,&local_a0,param_2);
        }
        uVar2 = *param_3;
        uVar3 = param_3[1];
        local_b8 = 0;
        local_c8[0] = 0;
        local_c8[1] = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        FUN_1446ddda2(local_c8,"ChallengesProgressTextFormat",0);
        FUN_1410d1eba(local_128,local_c8);
        FUN_14023409e(&local_118,local_128,1);
        local_e0 = local_60;
        local_a0._0_4_ = 1;
        local_98[1] = 0;
        local_88 = 0;
        local_80 = 1;
        local_70 = 0;
        local_68 = 0;
        local_e8 = &local_a0;
        local_98[0] = uVar2;
        local_78 = uVar3;
        FUN_14010d304(&local_d8);
        local_f8 = local_118;
        local_f0 = local_110;
        if (local_110 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_110 + 1) = (int)local_110[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_108,&local_f8,&local_d8);
        FUN_14007f2db(local_d8,local_d0);
        if (local_d8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar7 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_a0 + lVar7) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_a0 + lVar7) + 0x10))();
            *(undefined8 *)((longlong)&local_a0 + lVar7) = 0;
            *(undefined4 *)((longlong)local_98 + lVar7) = 0;
          }
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != -0x10);
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_110 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_110 + 0x10))(local_110);
            }
          }
        }
        lVar7 = local_130;
        if (local_128[0] != (longlong *)0x0) {
          (**(code **)(*local_128[0] + 0x10))();
        }
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
        lVar7 = FUN_140e4494e(lVar7);
        if (lVar7 != 0) {
          uVar2 = *param_3;
          uVar3 = param_3[1];
          local_150 = FUN_1412f7d10(param_2);
          local_158 = (undefined1)param_3[2];
          if (*param_2 == 0) {
            local_f8 = 0;
          }
          else {
            local_f8 = *(undefined8 *)(*param_2 + 0x3c);
          }
          FUN_1458d35da(param_2,local_c8);
          FUN_140233b1a(&local_a0,local_c8);
          FUN_141302464(param_2,&local_e8);
          FUN_140233b1a(&local_d8,&local_e8);
          local_140 = 2;
          local_168 = local_108;
          local_160 = &local_f8;
          local_148 = ((float)uVar2 / (float)uVar3) * 100.0;
          FUN_14130267c(lVar7,local_128,&local_d8,&local_a0);
          if (local_d8 != (longlong *)0x0) {
            (**(code **)(*local_d8 + 0x10))();
          }
          if (local_e8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if ((longlong *)CONCAT44(local_a0._4_4_,(undefined4)local_a0) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT44(local_a0._4_4_,(undefined4)local_a0) + 0x10))();
          }
          if (local_c8[0] != 0) {
            FUN_1400020a8();
          }
        }
        if (local_108[0] != (longlong *)0x0) {
          (**(code **)(*local_108[0] + 0x10))();
        }
      }
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141302438 FUN_141302438 body=44 status=ok
// SIG undefined FUN_141302438(void)

longlong * FUN_141302438(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x1f0) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x1e8);
    lVar2 = (longlong)*(int *)(param_1 + 0x1f0) * 0x70;
    do {
      if (*plVar1 == *param_2) {
        return plVar1;
      }
      plVar1 = plVar1 + 0xe;
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 141302464 FUN_141302464 body=220 status=ok
// SIG undefined FUN_141302464(void)

undefined8 * FUN_141302464(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  void *_Src;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    FUN_1400b22c2(param_2,&DAT_149e02088);
  }
  else {
    plVar4 = *(longlong **)(lVar2 + 0x18);
    if (*(code **)(*plVar4 + 0x50) != FUN_144828418) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))();
    }
    FUN_1447a1fc0(plVar4);
    plVar4 = *(longlong **)(lVar2 + 0x18);
    pcVar3 = *(code **)(*plVar4 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar5 = plVar4 + 3;
      if (plVar4[5] != 0) {
        plVar5 = (longlong *)(plVar4[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar5 = plVar4 + 2;
    }
    else {
      plVar5 = (longlong *)(*pcVar3)(plVar4);
    }
    *param_2 = 0;
    iVar1 = (int)plVar5[1];
    _Src = (void *)*plVar5;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 141302540 FUN_141302540 body=298 status=ok
// SIG undefined FUN_141302540(void)

undefined8 FUN_141302540(longlong param_1)

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
  lVar1 = FUN_1400d7050(param_1 + 0x30);
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
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130267c FUN_14130267c body=651 status=ok
// SIG undefined FUN_14130267c(void)

undefined4 *
FUN_14130267c(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,undefined8 *param_6,char param_7,char param_8,float param_9)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190 [4];
  undefined8 local_18c;
  longlong *local_180;
  undefined4 local_178;
  longlong *local_170;
  undefined4 local_168;
  undefined8 local_104;
  float local_f8;
  undefined1 local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  longlong local_d0;
  uint local_c8;
  uint local_c4;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar4 = FUN_140495e96(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar5 = FUN_14030d4a0();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && (*(char *)(lVar4 + 0x458) == '\0')) {
      *param_2 = 0xffffffff;
      goto LAB_1413028bf;
    }
  }
  FUN_1412099d2(param_1,&DAT_14cbd63c0);
  FUN_14125b7f0(local_190);
  plVar2 = local_180;
  local_18c = DAT_14cbd6350;
  plVar1 = (longlong *)*param_3;
  if (local_180 != plVar1) {
    local_180 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_e0;
  local_178 = (undefined4)param_3[1];
  plVar1 = (longlong *)*param_4;
  local_198 = param_2;
  if (local_e0 != plVar1) {
    local_e0 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_170;
  local_d8 = (undefined4)param_4[1];
  plVar1 = (longlong *)*param_5;
  if (local_170 != plVar1) {
    local_170 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_168 = (undefined4)param_5[1];
  local_104 = *param_6;
  local_f8 = param_9;
  local_e8 = 1;
  if ('\0' < param_8) {
    iVar7 = 0;
    do {
      uVar3 = local_c8;
      bVar6 = iVar7 < param_7;
      if (100.0 < param_9) {
        bVar6 = iVar7 <= param_7;
      }
      lVar4 = (longlong)(int)local_c8;
      local_c8 = local_c8 + 1;
      if (local_c4 < local_c8) {
        FUN_146641960(&local_d0,uVar3);
      }
      lVar4 = lVar4 * 3;
      *(bool *)(local_d0 + lVar4) = bVar6;
      *(undefined1 *)(local_d0 + 1 + lVar4) = 0;
      *(bool *)(local_d0 + 2 + lVar4) = 99.9 <= param_9;
      iVar7 = iVar7 + 1;
    } while (param_8 != iVar7);
  }
  param_2 = local_198;
  FUN_14120969a(param_1,local_198,local_190);
  FUN_140989dc4(local_190);
LAB_1413028bf:
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141302908 FUN_141302908 body=108 status=ok
// SIG undefined FUN_141302908(void)

void FUN_141302908(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
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
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-8] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-8] + 0x10))();
      }
      plVar1 = plVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141302974 FUN_141302974 body=20 status=ok
// SIG undefined FUN_141302974(void)

longlong * FUN_141302974(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x108) = *(int *)(param_2 + 0x108) + 1;
  }
  return param_1;
}



// FUNCTION 141302988 FUN_141302988 body=129 status=ok
// SIG undefined FUN_141302988(void)

void FUN_141302988(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = param_2;
  FUN_1458d389c(param_1 + 0x2c0,&local_21);
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c8)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_141302a0a(*(undefined1 *)(*(longlong *)(param_1 + 0x2c0) + lVar2));
      uVar1 = (uint)uVar3 | 1 << (uVar1 & 0x1f);
      uVar3 = (ulonglong)uVar1;
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x2c8));
    uVar3 = (ulonglong)uVar1;
  }
  *(ulonglong *)(param_1 + 0x2d0) = uVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141302a0a FUN_141302a0a body=334 status=ok
// SIG undefined FUN_141302a0a(void)

undefined4 FUN_141302a0a(uint param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
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
  if (DAT_14cacfd48 == (longlong *)0x0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_140eca530;
    local_48 = &LAB_1479b02e7;
    local_50 = &LAB_146063820;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x170;
    FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
  }
  plVar1 = DAT_14cacfd48;
  lVar3 = DAT_14cacfd48[0x22];
  if (lVar3 == 0) {
    (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
    lVar3 = plVar1[0x22];
  }
  if (DAT_14cacfd78 == '\0') {
    FUN_1416bf7d6(lVar3,0);
    DAT_14cacfd78 = '\x01';
  }
  uVar2 = 0x21;
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)(lVar3 + 0x158))) {
    uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x150) + (ulonglong)param_1 * 4);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141302b5a FUN_141302b5a body=361 status=ok
// SIG undefined FUN_141302b5a(void)

ulonglong FUN_141302b5a(int param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
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
  if (DAT_14cacfd48 == (longlong *)0x0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_140eca530;
    local_48 = &LAB_1479b02e7;
    local_50 = &LAB_146063820;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x170;
    FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
  }
  plVar1 = DAT_14cacfd48;
  lVar4 = DAT_14cacfd48[0x22];
  if (lVar4 == 0) {
    (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
    lVar4 = plVar1[0x22];
  }
  if (DAT_14cacfd78 == '\0') {
    FUN_1416bf7d6(lVar4,0);
    DAT_14cacfd78 = '\x01';
  }
  uVar2 = 0x20;
  if ((param_1 < 0x21) && ((longlong)*(int *)(lVar4 + 0x158) != 0)) {
    lVar3 = (longlong)*(int *)(lVar4 + 0x158) << 2;
    uVar5 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar4 + 0x150) + uVar5 * 4) == param_1) {
        uVar2 = uVar5 & 0xffffffff;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 141302cc4 FUN_141302cc4 body=423 status=ok
// SIG undefined FUN_141302cc4(void)

longlong * FUN_141302cc4(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  size_t sVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  basic_ostream<char,std::char_traits<char>_> *local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  sVar3 = strlen(param_2);
  lVar4 = *(longlong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  FUN_141302e6c(&local_48,param_1);
  if (local_40 != '\x01') {
    uVar6 = 4;
    goto LAB_141302d89;
  }
  lVar8 = lVar4 - sVar3;
  lVar7 = 0;
  if (lVar8 != 0 && (longlong)sVar3 <= lVar4) {
    lVar7 = lVar8;
  }
  if (lVar4 < 1) {
    lVar7 = 0;
  }
  lVar4 = (longlong)*(int *)(*param_1 + 4);
  if (((*(uint *)((longlong)param_1 + lVar4 + 0x18) & 0x1c0) != 0x40) && (0 < lVar7)) {
    lVar8 = lVar8 + 1;
    do {
      iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48),
                         *(char *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58));
      if (iVar2 == -1) goto LAB_141302e62;
      lVar8 = lVar8 + -1;
    } while (1 < lVar8);
    lVar4 = (longlong)*(int *)(*param_1 + 4);
    lVar7 = 0;
  }
  plVar1 = *(longlong **)((longlong)param_1 + lVar4 + 0x48);
  sVar5 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  uVar6 = (uint)(sVar5 != sVar3) << 2;
  if ((sVar5 == sVar3) && (0 < lVar7)) {
    lVar7 = lVar7 + 1;
    do {
      iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48),
                         *(char *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58));
      if (iVar2 == -1) goto LAB_141302e62;
      lVar7 = lVar7 + -1;
    } while (1 < lVar7);
  }
  goto LAB_141302d79;
LAB_141302e62:
  uVar6 = 4;
LAB_141302d79:
  *(undefined8 *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28) = 0;
LAB_141302d89:
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),
             uVar6 | *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10),false);
  std::basic_ostream<char,std::char_traits<char>_>::_Osfx(local_48);
  if (*(longlong **)(local_48 + (longlong)*(int *)(*(longlong *)local_48 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(local_48 + (longlong)*(int *)(*(longlong *)local_48 + 4) + 0x48) +
                0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141302e6c FUN_141302e6c body=136 status=ok
// SIG undefined FUN_141302e6c(void)

undefined8 * FUN_141302e6c(undefined8 *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  longlong *plVar1;
  basic_ostream<char,std::char_traits<char>_> *this;
  bool bVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  lVar3 = (longlong)*(int *)(*(longlong *)param_2 + 4);
  plVar1 = *(longlong **)(param_2 + lVar3 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = (longlong)*(int *)(*(longlong *)param_2 + 4);
  }
  bVar2 = std::ios_base::good((ios_base *)(param_2 + lVar3));
  if (bVar2) {
    this = *(basic_ostream<char,std::char_traits<char>_> **)
            (param_2 + (longlong)*(int *)(*(longlong *)param_2 + 4) + 0x50);
    if (this == (basic_ostream<char,std::char_traits<char>_> *)0x0 || this == param_2) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar2 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
      *(bool *)(param_1 + 1) = bVar2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 141302ef4 FUN_141302ef4 body=8 status=ok
// SIG undefined FUN_141302ef4(void)

void FUN_141302ef4(longlong param_1)

{
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) & 0xfb;
  return;
}



// FUNCTION 141302efc FUN_141302efc body=228 status=ok
// SIG undefined FUN_141302efc(void)

longlong FUN_141302efc(void)

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
  if (DAT_14cab2c80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147547f15;
    local_40 = FUN_14633c4e2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieScenePreAnimatedStateSystemInterface",&DAT_14cab2c80,
                  &DAT_147547f14);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2c80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141302fe2 FUN_141302fe2 body=228 status=ok
// SIG undefined FUN_141302fe2(void)

longlong FUN_141302fe2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabf220 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14785cea7;
    local_40 = &LAB_1459be287;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"BlendableInterface",&DAT_14cabf220,&DAT_14785cea6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf220;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413030c8 FUN_1413030c8 body=36 status=ok
// SIG undefined FUN_1413030c8(void)

undefined8 * FUN_1413030c8(undefined8 *param_1)

{
  FUN_143c2f32e();
  *param_1 = &PTR_FUN_14afde8a0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  return param_1;
}



// FUNCTION 1413030ec FUN_1413030ec body=53 status=ok
// SIG undefined FUN_1413030ec(void)

undefined8 FUN_1413030ec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    lVar2 = (longlong)*(int *)(param_1 + 0x30) * 0x48;
    do {
      if (*(longlong *)(lVar1 + 0x18) == *param_2) {
        if (lVar1 == 0) {
          return 0;
        }
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x20));
      }
      lVar1 = lVar1 + 0x48;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 141303122 FUN_141303122 body=186 status=ok
// SIG undefined FUN_141303122(void)

int FUN_141303122(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_1407052fc(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1413031a2;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1413031a2:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413031de FUN_1413031de body=243 status=ok
// SIG undefined FUN_1413031de(void)

void FUN_1413031de(longlong param_1,longlong param_2,longlong param_3,int param_4,uint *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(int *)(param_2 + 0x998) != 0) && ((*param_5 & 0x2000) != 0)) {
    lVar5 = (longlong)param_4;
    puVar2 = (undefined8 *)(lVar5 * 8 + *(longlong *)(param_3 + 0xd0));
    if (puVar2 != (undefined8 *)0x0) {
      lVar1 = *(longlong *)(param_2 + 0x9c8);
      lVar3 = FUN_1407fc8fc(*puVar2);
      if (lVar3 != 0) {
        puVar2 = (undefined8 *)FUN_14005b71c(lVar3);
        if (puVar2 != (undefined8 *)0x0) {
          lVar3 = lVar5 * 0x88 + *(longlong *)(param_3 + 0xa0);
          if ((*param_5 >> 10 & 1) == 0) {
            lVar3 = 0;
          }
          lVar5 = lVar5 * 0x18 + *(longlong *)(param_3 + 0xc0);
          if ((*param_5 >> 0xc & 1) == 0) {
            lVar5 = 0;
          }
          if ((lVar3 != 0) && (lVar5 != 0)) {
            uVar4 = FUN_1413032d2(lVar1 + 0xa60,puVar2);
            *(undefined8 *)(param_1 + 0x48) = uVar4;
            FUN_1407fc8b2(*puVar2,puVar2 + 1,uVar4);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1413032d2 FUN_1413032d2 body=894 status=ok
// SIG undefined FUN_1413032d2(void)

undefined8 FUN_1413032d2(longlong param_1,undefined8 param_2,undefined4 *param_3,void *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  iVar3 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
    FUN_140125d6e(param_1 + 0x28,iVar3);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 8) = param_2;
  iVar4 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar4 + 1U) {
    FUN_14026a4e8(param_1 + 0x38,iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar4 * 0x18) = *(undefined8 *)(param_3 + 4);
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  iVar4 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar4 + 1U) {
    FUN_1456fe37e(param_1 + 0x48,iVar4);
  }
  memcpy((void *)((longlong)iVar4 * 0x88 + *(longlong *)(param_1 + 0x48)),param_4,0x88);
  iVar4 = *(int *)(param_1 + 0x60);
  uVar9 = iVar4 + 1;
  *(uint *)(param_1 + 0x60) = uVar9;
  if (*(uint *)(param_1 + 100) < uVar9) {
    FUN_1458d7230(param_1 + 0x58);
  }
  FUN_141303650((longlong)iVar4 * 0x50 + *(longlong *)(param_1 + 0x58));
  iVar4 = *(int *)(param_1 + 0x70);
  uVar9 = iVar4 + 1;
  *(uint *)(param_1 + 0x70) = uVar9;
  if (*(uint *)(param_1 + 0x74) < uVar9) {
    FUN_1401c3474(param_1 + 0x68);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4) = 1;
  iVar4 = *(int *)(param_1 + 0x80);
  uVar9 = iVar4 + 1;
  *(uint *)(param_1 + 0x80) = uVar9;
  if (*(uint *)(param_1 + 0x84) < uVar9) {
    FUN_1458d6ffc(param_1 + 0x78);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 8) = 0;
  iVar4 = *(int *)(param_1 + 200);
  uVar9 = iVar4 + 1;
  *(uint *)(param_1 + 200) = uVar9;
  if (*(uint *)(param_1 + 0xcc) < uVar9) {
    FUN_1458d7108(param_1 + 0xc0);
  }
  lVar5 = *(longlong *)(param_1 + 0xc0);
  lVar11 = (longlong)iVar4 * 0x160;
  *(undefined8 *)(lVar5 + lVar11) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar11) = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar11) = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar11) = 0;
  *(undefined8 *)(lVar5 + 0x20 + lVar11) = 0;
  *(undefined4 *)(lVar5 + 0x28 + lVar11) = 0;
  *(undefined8 *)(lVar5 + 0x30 + lVar11) = 0;
  *(undefined4 *)(lVar5 + 0x38 + lVar11) = 0;
  puVar10 = (undefined8 *)(lVar5 + 0x40 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar5 + 0x50 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar5 + 0x60 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar5 + 0x6c + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined4 *)(lVar5 + 0x7c + lVar11) = 0x3f800000;
  puVar10 = (undefined8 *)(lVar5 + 0x80 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 *)(lVar5 + 0x90 + lVar11) = 0;
  *(undefined8 *)(lVar5 + 0x98 + lVar11) = 0x3ff0000000000000;
  puVar10 = (undefined8 *)(lVar5 + 0xa0 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 *)(lVar5 + 0xb0 + lVar11) = 0;
  *(undefined8 *)(lVar5 + 0xb8 + lVar11) = 0x3ff0000000000000;
  puVar10 = (undefined8 *)(lVar5 + 0xc0 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 *)(lVar5 + 0xd0 + lVar11) = 0;
  *(undefined8 *)(lVar5 + 0xd8 + lVar11) = 0x3ff0000000000000;
  puVar10 = (undefined8 *)(lVar5 + 0xe0 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar5 + 0xf0 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar5 + 0x100 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar5 + 0x110 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar5 + 0x120 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar5 + 0x130 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar5 + 0x140 + lVar11);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined4 *)(lVar5 + 0x150 + lVar11) = 0;
  iVar4 = *(int *)(param_1 + 0xa8);
  uVar9 = iVar4 + 1;
  *(uint *)(param_1 + 0xa8) = uVar9;
  if (*(uint *)(param_1 + 0xac) < uVar9) {
    FUN_1458d72c4(param_1 + 0xa0);
  }
  lVar5 = *(longlong *)(param_1 + 0xa0);
  lVar11 = (longlong)iVar4 * 0x60;
  *(undefined8 *)(lVar5 + 0x18 + lVar11) = 0;
  *(undefined8 *)(lVar5 + 0x30 + lVar11) = 0;
  iVar4 = *(int *)(param_1 + 0xb8);
  uVar9 = iVar4 + 1;
  *(uint *)(param_1 + 0xb8) = uVar9;
  if (*(uint *)(param_1 + 0xbc) < uVar9) {
    FUN_1458d719c(param_1 + 0xb0);
  }
  memset((void *)((longlong)iVar4 * 0x10c + *(longlong *)(param_1 + 0xb0)),0,0x10c);
  plVar1 = (longlong *)(param_1 + 0x88);
  puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar10[1] = param_1;
  puVar10[2] = 0;
  *(int *)(puVar10 + 3) = iVar3;
  *puVar10 = &PTR_FUN_149f5d510;
  iVar4 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar4 + 1U) {
    FUN_1458d7082(plVar1,iVar4);
  }
  *(undefined8 **)(*plVar1 + (longlong)iVar4 * 8) = puVar10;
  return *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8);
}



// FUNCTION 141303650 FUN_141303650 body=17 status=ok
// SIG undefined FUN_141303650(void)

void FUN_141303650(undefined8 *param_1)

{
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 141303662 FUN_141303662 body=727 status=ok
// SIG undefined FUN_141303662(void)

void FUN_141303662(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined8 unaff_RBP;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = param_1 + -0xa2;
  if (param_2 != (longlong *)0x0) {
    FUN_1401073f6(param_2 + 0x13b,plVar1);
    if ((char)param_1[-0x73] == '\x03') {
      (**(code **)(*param_2 + 0x330))(param_2,0);
      FUN_1401073f6(param_2 + 0x142,plVar1);
    }
    lVar4 = FUN_144a7a5f4();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      FUN_14435b7bc();
    }
  }
  if (param_3 != 0) {
    uVar9 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),0xff);
    if (0 < (int)*(uint *)(param_1 + 0x3c7)) {
      plVar8 = (longlong *)(param_1[0x3c6] + 0x28);
      uVar6 = 0;
      do {
        if ((plVar8[-1] == param_3) || (*plVar8 == param_3)) {
          uVar9 = (undefined4)uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 0x2e;
      } while (*(uint *)(param_1 + 0x3c7) != uVar6);
    }
    FUN_140ee91e4(&local_a0);
    FUN_1413039a0(param_3 + 0x9d8,plVar1,local_a0);
    FUN_140eeb26e(param_3,plVar1,uVar9,*(undefined1 *)(param_3 + 0xd35));
    FUN_140ee9296(&local_a8);
    FUN_1413039a0(param_3 + 0x9a8,plVar1,local_a8);
    FUN_141303942(param_3,0);
    lVar4 = FUN_1447210f0(plVar1);
    if (lVar4 != 0) {
      local_b0 = 0;
      FUN_14485c47a(&local_b0,param_3);
      uVar3 = local_b0;
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      local_c0 = (undefined8 *)0x0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,3,0x10);
      puVar5 = local_c0;
      local_b8 = 3;
      *local_c0 = &PTR_LAB_14a1c8830;
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
      local_c0[2] = lVar7;
      *local_c0 = &PTR_FUN_14b95f820;
      local_c0[3] = 0;
      FUN_14485c47a(local_c0 + 3,plVar1);
      puVar5[4] = uVar3;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_c0);
      local_58 = 1;
      FUN_14016fdb0(uVar2,local_c8,&local_98);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_c0);
    }
  }
  lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  FUN_140ee8fd0(lVar4 + 0x88,param_3,param_2);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141303942 FUN_141303942 body=93 status=ok
// SIG undefined FUN_141303942(void)

void FUN_141303942(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      *(byte *)(lVar3 + 0x78) = *(byte *)(lVar3 + 0x78) & 0xf7 | param_2 << 3;
      FUN_140cf5864(lVar3);
      FUN_140cf57c4(lVar3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1413039a0 FUN_1413039a0 body=535 status=ok
// SIG undefined FUN_1413039a0(void)

void FUN_1413039a0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  int iVar3;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar6 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar1 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar1 = *(uint *)(lVar11 + 0x10);
      bVar12 = uVar1 == 0;
      if (bVar12) {
        *(uint *)(lVar11 + 0x10) = uVar9;
        uVar1 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar1 = uVar9;
      }
    }
    uVar6 = (ulonglong)uVar1;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else if (uVar1 == 0) {
      uVar6 = 0;
    }
    else if ((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar1 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_3,1);
    }
  }
  local_48 = (ulonglong)uVar2 | uVar6 << 0x20;
  local_40 = param_3;
  FUN_1403350f6(param_1);
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    lVar11 = 0;
    bVar12 = false;
LAB_141303a95:
    lVar8 = lVar11 * 0x10;
    do {
      iVar3 = (int)uVar6;
      if (*(longlong *)(*param_1 + 8 + lVar8) != 0) {
        lVar5 = FUN_144a34e94(*param_1 + lVar8,1);
        if (lVar5 != 0) goto code_r0x000141303aba;
        iVar3 = (int)param_1[1];
      }
      iVar7 = ~(uint)lVar11 + iVar3;
      if (iVar7 != 0) {
        iVar10 = 1;
        if (iVar7 < 1) {
          iVar10 = iVar7;
        }
        memmove((void *)(*param_1 + lVar8),(void *)((longlong)(iVar3 - iVar10) * 0x10 + *param_1),
                (longlong)iVar10 << 4);
        iVar3 = (int)param_1[1];
      }
      uVar2 = iVar3 - 1;
      uVar6 = (ulonglong)uVar2;
      *(uint *)(param_1 + 1) = uVar2;
      bVar12 = true;
      if ((int)uVar2 <= lVar11) goto LAB_141303b7c;
    } while( true );
  }
LAB_141303ad0:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000141303aba:
  lVar11 = lVar11 + 1;
  uVar6 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar6 <= lVar11) goto code_r0x000141303ac6;
  goto LAB_141303a95;
code_r0x000141303ac6:
  if (bVar12) {
LAB_141303b7c:
    FUN_1400bbcfc(param_1);
  }
  goto LAB_141303ad0;
}



// FUNCTION 141303bb8 FUN_141303bb8 body=1152 status=ok
// SIG undefined FUN_141303bb8(void)

void FUN_141303bb8(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14130403a(local_18,CONCAT44(uStack_1c,uStack_20),local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130403a FUN_14130403a body=154 status=ok
// SIG undefined FUN_14130403a(void)

void FUN_14130403a(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14069ce7c();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14069ce7c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          FUN_140a82c6c(lVar4,&local_20,param_3,1);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413040d6 FUN_1413040d6 body=365 status=ok
// SIG undefined FUN_1413040d6(void)

void FUN_1413040d6(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)(param_1 + 0x2c50) + 0x18))(param_1 + 0x2c50);
  FUN_140790e84(param_1 + 0x2cb8);
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      lVar2 = FUN_14479d2ce(lVar1 + 0x4ef0);
      if (lVar2 == param_1) {
        FUN_1458d7bd4(lVar1);
      }
    }
  }
  FUN_141304244(param_1,param_2);
  *(undefined8 *)(param_1 + 0x2c80) = 0;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1406398aa(param_1 + 0x2c98,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141304244 FUN_141304244 body=284 status=ok
// SIG undefined FUN_141304244(void)

void FUN_141304244(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  
  FUN_140c2cd38();
  FUN_140cfa53a(param_1 + 0x1f10);
  uVar1 = FUN_1447210f0(param_1);
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x1560) + 0x10))(param_1 + 0x1560);
  FUN_140d0d88c(uVar1,uVar2);
  FUN_14035cf04(param_1 + 0x1e08);
  if (*(longlong *)(param_1 + 0x1d10) != 0) {
    FUN_140a19d0e(param_1 + 0x1d00,0);
    *(undefined8 *)(&DAT_00001ce8 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x1cf0) = 0;
    *(undefined8 *)(param_1 + 0x1cf8) = 0;
  }
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  uVar1 = FUN_1401b4c98(param_1);
  lVar3 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0x1830));
  if (lVar3 != 0) {
    FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0x1830));
  }
  *(undefined8 *)(param_1 + 0x1830) = 0;
  uVar1 = FUN_14479d2ce(param_1 + 0x16d4);
  uVar4 = FUN_141304360(extraout_XMM0_Da,uVar1,param_1 + 0x1828,param_1 + 0x1820);
  FUN_141304360(uVar4,*(undefined8 *)(param_1 + 0x1b0),param_1 + 0x1818,param_1 + 0x1810);
  FUN_1458d7bec(param_1,0);
  return;
}



// FUNCTION 141304360 FUN_141304360 body=328 status=ok
// SIG undefined FUN_141304360(void)

void FUN_141304360(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if (lVar2 != 0) {
        if (*param_3 != 0) {
          FUN_14480f766(lVar2 + 400);
        }
        *param_3 = 0;
      }
    }
    if (*param_4 != 0) {
      FUN_14480f766(param_2 + 0x2b8);
    }
    *param_4 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413044aa FUN_1413044aa body=168 status=ok
// SIG undefined FUN_1413044aa(void)

longlong FUN_1413044aa(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar1 + 0x998);
  if (lVar5 == 0) {
    uVar4 = FUN_140358896();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x998) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x9a0) != 0) {
    return *(longlong *)(lVar1 + 0x9a0);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x990) != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x990));
    }
    *(longlong *)(lVar1 + 0x9a0) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 141304552 FUN_141304552 body=157 status=ok
// SIG undefined FUN_141304552(void)

longlong FUN_141304552(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar5 = *(longlong *)(lVar1 + 0x410);
    if (lVar5 == 0) {
      uVar4 = FUN_140358896();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar1 + 0x410) = lVar5;
    }
    if (*(longlong *)(lVar1 + 0x418) != 0) {
      return *(longlong *)(lVar1 + 0x418);
    }
    if ((*(longlong *)(lVar1 + 0x408) != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x408));
      }
      *(longlong *)(lVar1 + 0x418) = lVar5;
      return lVar5;
    }
  }
  return 0;
}



// FUNCTION 1413045ef FUN_1413045ef body=73 status=ok
// SIG undefined FUN_1413045ef(void)

void FUN_1413045ef(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141304638 FUN_141304638 body=642 status=ok
// SIG undefined FUN_141304638(void)

undefined8 * FUN_141304638(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  local_48 = param_2;
  if ((((param_2 != (longlong *)0x0) && (DAT_14c75f420 != '\0')) && (*param_2 != 0)) &&
     (lVar5 = *(longlong *)(*param_2 + 8), lVar5 != 0)) {
    puVar11 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
    *(undefined4 *)(puVar11 + 1) = 3;
    puVar11[2] = 0;
    *(undefined4 *)(puVar11 + 3) = 0;
    *puVar11 = &PTR_FUN_149f5cec8;
    *(undefined1 *)(puVar11 + 4) = 0;
    puVar11[5] = 0x3ff0000000000000;
    puVar11[6] = 0x3ff0000000000000;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0x3ff0000000000000;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    puVar11[0x14] = 0;
    uVar10 = DAT_14c8464e8._4_4_;
    uVar9 = (undefined4)DAT_14c8464e8;
    uVar8 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(puVar11 + 0x15) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)puVar11 + 0xac) = uVar8;
    *(undefined4 *)(puVar11 + 0x16) = uVar9;
    *(undefined4 *)((longlong)puVar11 + 0xb4) = uVar10;
    puVar11[0x17] = DAT_14c8464f0;
    puVar11[0x18] = 0;
    puVar11[0x19] = 0;
    *param_1 = puVar11;
    FUN_1429d649c(puVar11,&local_48);
    lVar6 = puVar11[2];
    uVar8 = param_3[1];
    uVar9 = param_3[2];
    uVar10 = param_3[3];
    *(undefined4 *)(puVar11 + 0x15) = *param_3;
    *(undefined4 *)((longlong)puVar11 + 0xac) = uVar8;
    *(undefined4 *)(puVar11 + 0x16) = uVar9;
    *(undefined4 *)((longlong)puVar11 + 0xb4) = uVar10;
    puVar11[0x17] = *(undefined8 *)(param_3 + 4);
    *(byte *)((longlong)puVar11 + 0x19) = *(byte *)((longlong)puVar11 + 0x19) | 0x10;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar12 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar12 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar12 + 0x194) = *(int *)(lVar12 + 0x194) + 1;
          lVar12 = lVar12 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar12 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar12 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar12 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar12 + 0x198),iVar4);
          }
          lVar12 = *(longlong *)(lVar12 + 0x198);
          lVar13 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar12 + lVar13) = lVar6;
          *(undefined4 *)(lVar12 + 8 + lVar13) = 0;
          puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else if (*(int *)(lVar6 + 0x18) == -1) {
        lVar7 = *(longlong *)(lVar7 + 0x98);
        uVar3 = *(uint *)(lVar6 + 0x1c);
        piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
        lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
        iVar4 = *(int *)(lVar7 + 0x1a0);
        *(int *)(lVar6 + 0x18) = iVar4;
        *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
        if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
          FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
        }
        lVar7 = *(longlong *)(lVar7 + 0x198);
        lVar12 = (longlong)iVar4 * 0x20;
        *(longlong *)(lVar7 + lVar12) = lVar6;
        *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
    }
    FUN_142a0aeca(lVar5,puVar11);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413048be FUN_1413048be body=498 status=ok
// SIG undefined FUN_1413048be(void)

void FUN_1413048be(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) goto LAB_141304942;
  FUN_1448d5e3c(&local_48,param_1 + 0x208);
  lVar4 = *(longlong *)(local_48 + 0x3b0);
  AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0xd8));
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_40 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (*(int *)(lVar3 + 0xac) != *(int *)(lVar4 + 0xd0)) {
    *(int *)(lVar3 + 0xac) = *(int *)(lVar4 + 0xd0);
    cVar2 = *(char *)(lVar3 + 0xb1);
    *(undefined1 *)(lVar3 + 0xb0) = *(undefined1 *)(lVar4 + 0xb0);
    if (*(char *)(lVar4 + 0xb1) == '\x01') {
      bVar7 = *(byte *)(lVar3 + 0xb5) ^ 1;
    }
    else {
      bVar7 = 0;
    }
    *(byte *)(lVar3 + 0xb1) = bVar7;
    *(undefined1 *)(lVar3 + 0xb2) = *(undefined1 *)(lVar4 + 0xb2);
    *(undefined1 *)(lVar3 + 0xb3) = *(undefined1 *)(lVar4 + 0xb3);
    FUN_144a787a6(lVar3 + 0xc0,lVar4 + 0xc0);
    cVar6 = FUN_141304ab2(param_1);
    if (cVar6 != '\0') {
      uVar9 = FUN_14479d2ce(param_1 + 0x30);
      plVar10 = (longlong *)FUN_14101baae(uVar9);
      if (plVar10 != (longlong *)0x0) {
        iVar8 = (**(code **)(*plVar10 + 0x328))(plVar10);
        if (0 < iVar8) {
          *(undefined1 *)(lVar3 + 0xb0) = 0;
          *(undefined1 *)(lVar3 + 0xb2) = 0;
        }
      }
    }
    if (*(char *)(lVar3 + 0xb1) == '\x01') {
      FUN_140de1078(param_1,&DAT_14cbdaf18,0,0);
      puVar11 = &DAT_14cbdaf28;
LAB_141304a9e:
      FUN_140de1078(param_1,puVar11,0,0);
    }
    else if (cVar2 != '\0') {
      puVar11 = &DAT_14cbdaf38;
      goto LAB_141304a9e;
    }
    puVar5 = *(ushort **)(lVar3 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0xd8));
LAB_141304942:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141304ab2 FUN_141304ab2 body=63 status=ok
// SIG undefined FUN_141304ab2(void)

undefined8 FUN_141304ab2(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar1 = &DAT_14c9a1308;
  }
  else {
    plVar1 = (longlong *)FUN_1408db3b0(*(longlong *)(param_1 + 0x160),"is_splitscreen");
  }
  if (*plVar1 != 0) {
    uVar2 = FUN_14000584e(*plVar1,0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141304af2 FUN_141304af2 body=1282 status=ok
// SIG undefined FUN_141304af2(void)

ulonglong FUN_141304af2(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  code ****ppppcVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code ***local_d0;
  code *local_c8;
  code *local_c0;
  code ***local_b0;
  code ***local_a8;
  longlong lStack_a0;
  longlong *local_98;
  ushort local_90;
  byte local_88;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    uVar5 = FUN_140490c9a();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x30) = lVar6;
  }
  plVar8 = (longlong *)(param_1 + 0x28);
  plVar10 = *(longlong **)(param_1 + 0x38);
  if (plVar10 == (longlong *)0x0) {
    if ((lVar6 != 0) && (*plVar8 != 0)) {
      plVar10 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
        plVar9 = (longlong *)FUN_144aff482(uVar5,plVar8);
        *(longlong **)(param_1 + 0x38) = plVar9;
        if (plVar9 != (longlong *)0x0) {
          lVar6 = *(longlong *)(param_1 + 0x30);
          plVar10 = plVar9;
          goto LAB_141304b35;
        }
      }
    }
  }
  else {
LAB_141304b35:
    if (lVar6 == 0) {
      uVar5 = FUN_140490c9a();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x30) = lVar6;
      plVar10 = *(longlong **)(param_1 + 0x38);
      if (((plVar10 == (longlong *)0x0) && (plVar10 = (longlong *)0x0, lVar6 != 0)) &&
         (*plVar8 != 0)) {
        plVar10 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar10 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
          plVar10 = (longlong *)0x0;
        }
        else {
          uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
          plVar10 = (longlong *)FUN_144aff482(uVar5,plVar8);
        }
        *(longlong **)(param_1 + 0x38) = plVar10;
      }
    }
    if ((char)plVar10[3] == '\x01') {
      local_40 = 0;
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      local_68 = 0;
      lVar6 = *(longlong *)(param_1 + 0x30);
      if (lVar6 == 0) {
        uVar5 = FUN_140490c9a();
        lVar6 = FUN_14477b664(uVar5);
        *(longlong *)(param_1 + 0x30) = lVar6;
        plVar10 = *(longlong **)(param_1 + 0x38);
      }
      if (plVar10 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
        plVar10 = (longlong *)0x0;
        if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
          plVar10 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar10 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
            plVar10 = (longlong *)0x0;
          }
          else {
            uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
            plVar10 = (longlong *)FUN_144aff482(uVar5,plVar8);
          }
          *(longlong **)(param_1 + 0x38) = plVar10;
        }
      }
      local_a8 = (code ***)0x0;
      lStack_a0 = 0;
      local_98 = (longlong *)0x0;
      uVar5 = FUN_140490c9a();
      lStack_a0 = FUN_14477b664(uVar5);
      lVar6 = FUN_140490c9a();
      uVar5 = FUN_140490c9a();
      FUN_1402d1bfa(&local_b0,uVar5,plVar10);
      if (local_a8 != local_b0) {
        local_98 = (longlong *)0x0;
      }
      local_a8 = local_b0;
      lVar7 = FUN_140490c9a();
      if (lVar6 == 0) {
LAB_141304c17:
        lVar7 = lVar6;
      }
      else if (lVar7 == 0) {
        lVar7 = 0;
      }
      else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)) goto LAB_141304c17;
      if (lStack_a0 != lVar7) {
        local_98 = (longlong *)0x0;
      }
      uVar5 = FUN_14477b664(lVar7);
      lStack_a0 = FUN_14477b664(uVar5);
      if (((code ****)local_b0 != (code ****)0x0) && (lStack_a0 != 0)) {
        local_98 = plVar10;
      }
      cVar3 = FUN_140490d6e(param_2,&local_a8,&local_78);
      plVar8 = local_78;
      bVar2 = true;
      if (((cVar3 != '\0') && (local_40 == 1)) && (local_78 != (longlong *)0x0)) {
        if (DAT_14c9a4e08 == 0) {
          local_a8 = (code ***)FUN_1449e2820;
          local_c0 = FUN_14081d0ea;
          local_c8 = FUN_1427b09ee;
          local_d8 = &LAB_1470c76a3;
          local_e0 = FUN_1462ab034;
          local_e8 = L"Engine";
          local_f0 = 0;
          local_f8 = 0x10004001;
          local_100 = 8;
          local_108 = 0x28;
          local_d0 = (code ***)&local_a8;
          FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
        }
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14c9a4e08);
        if (plVar8 != (longlong *)0x0) {
          uVar5 = FUN_144a7fd54();
          plVar9 = (longlong *)FUN_144718840(plVar8,uVar5);
          if ((plVar8 != plVar9) && (plVar9 != (longlong *)0x0)) {
            uVar5 = (**(code **)(*plVar9 + 0x28))(plVar9);
            lVar6 = FUN_140316ff8();
            FUN_144a7fe3a(uVar5,&local_a8,lVar6 + 0x618);
            uVar4 = FUN_144a7fca4(&local_a8);
            pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
            if (pcVar1 != (code *)0x0) {
              ppppcVar11 = &local_a8;
              if (0x18 < local_90) {
                ppppcVar11 = (code ****)local_a8;
              }
              (*pcVar1)(ppppcVar11);
            }
            if (0x18 < local_90) {
              FUN_1400020a8(local_a8);
            }
            plVar10 = (longlong *)((ulonglong)uVar4 ^ 1);
            bVar2 = false;
          }
        }
      }
      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_40])();
      if (!bVar2) goto LAB_141304d66;
    }
  }
  plVar10 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),2);
LAB_141304d66:
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar10 & 0xffffffff;
}



// FUNCTION 141304ff6 FUN_141304ff6 body=377 status=ok
// SIG undefined FUN_141304ff6(void)

undefined4 * FUN_141304ff6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
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
  FUN_140f4c7d4(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar3 = ((undefined8 *)*param_3)[1];
  *(undefined8 *)local_40 = *(undefined8 *)*param_3;
  *(undefined8 *)(local_40 + 2) = uVar3;
  uVar7 = puVar1[1];
  uVar6 = puVar1[2];
  uVar2 = puVar1[3];
  local_40[4] = *puVar1;
  local_40[5] = uVar7;
  local_40[6] = uVar6;
  local_40[7] = uVar2;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = *local_40;
  uVar6 = ((uint)(*(ulonglong *)(local_40 + 2) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)(local_40 + 2) >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar7 = (uVar6 >> 0x10 ^ uVar6) + (uVar7 >> 2) + uVar7 * 0x40 + 0x9e3779b9 ^ uVar7;
  local_58 = 0;
  cVar4 = FUN_140f4c72e(param_1,uVar7,local_40);
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[9] = uVar7;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar7) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_141305170(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141305170 FUN_141305170 body=717 status=ok
// SIG undefined FUN_141305170(void)

void FUN_141305170(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_1413051d4;
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
  } while (uVar8 != uVar2);
LAB_1413051d4:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar3 = 0;
    uVar12 = 1;
    iVar14 = 0;
    iVar4 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar14 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar14 = iVar15 + -1;
      }
      uVar3 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar12 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar8 = puVar11[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar16 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = (iVar4 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar14) {
      iVar14 = iVar15;
    }
  }
  if (iVar14 < iVar15) {
    uVar8 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar13 = (longlong)iVar14;
      uVar2 = *(uint *)(lVar7 + lVar13 * 0x28);
      uVar16 = *(ulonglong *)(lVar7 + 8 + lVar13 * 0x28);
      uVar6 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar16 = (longlong)
               (int)((uVar6 >> 0x10 ^ uVar6) + (uVar2 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x24 + lVar13 * 0x28) = iVar15;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0x20 + lVar13 * 0x28) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar14 = (int)uVar3;
      lVar7 = (longlong)iVar14;
      uVar2 = puVar11[lVar7] & uVar8;
      if (uVar2 == 0) {
        iVar9 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar9 = iVar15 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar9 <= iVar14) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar11[lVar7 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar7 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar14 + (int)lVar13 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar2 & uVar2);
      uVar16 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = (iVar4 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar15);
  }
  return;
}



// FUNCTION 14130543e FUN_14130543e body=265 status=ok
// SIG undefined FUN_14130543e(void)

undefined * FUN_14130543e(void)

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
              0x110) < DAT_14c9c0848) {
    FUN_144b3d300(&DAT_14c9c0848);
    if (DAT_14c9c0848 == -1) {
      FUN_1458d8334(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSceneTextureShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x50;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c07c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8f6c2);
      _Init_thread_footer(&DAT_14c9c0848);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c07c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141305548 FUN_141305548 body=173 status=ok
// SIG undefined FUN_141305548(void)

undefined8 FUN_141305548(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
LAB_1413055bd:
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    FUN_1413055f8(param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1413055bd;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_28 = *(undefined8 *)(param_1 + 0x28);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plStack_20 = plVar3;
    FUN_1413055f8(param_2);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413055f8 FUN_1413055f8 body=386 status=ok
// SIG undefined FUN_1413055f8(void)

undefined8 * FUN_1413055f8(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  plVar6 = DAT_14c98e618;
  lVar3 = *param_2;
  if (lVar3 == 0) goto LAB_141305731;
  plVar4 = (longlong *)param_2[1];
  local_48 = lVar3;
  if (plVar4 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
    (**(code **)(*DAT_14c98e618 + 0x28))(DAT_14c98e618,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_40 = plVar4;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_38);
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (local_38 == 0) {
    uVar5 = 0;
LAB_1413056b6:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar5 = *(undefined8 *)(local_38 + 0x510);
    plVar6 = *(longlong **)(local_38 + 0x518);
    if (plVar6 == (longlong *)0x0) goto LAB_1413056b6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  *param_1 = uVar5;
  plVar4 = (longlong *)param_1[1];
  if (plVar6 == plVar4) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar6;
        goto joined_r0x0001413056ff;
      }
    }
  }
  else {
    param_1[1] = plVar6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001413056ff:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_141305731:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130577c thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141305782 FUN_141305782 body=1193 status=ok
// SIG undefined FUN_141305782(void)

void FUN_141305782(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_d8 [40];
  int local_b0;
  uint local_ac;
  longlong *local_a8;
  int local_9c;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  uint *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = param_1 + 0x2f8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_a8 = param_2;
  local_60 = local_90;
  if (*(int *)(param_1 + 0x310) == 0) {
    uVar9 = 1;
    local_ac = 0xffffffff;
    iVar8 = 0;
    local_58._4_4_ = 0;
    local_88 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    local_88 = local_68 & 0xffffffff;
    uVar9 = local_68 >> 0x20;
    local_ac = (uint)local_58;
    iVar8 = *(int *)(param_1 + 0x310);
  }
  iVar3 = local_58._4_4_;
  iVar16 = local_50;
  lVar12 = param_1;
  lVar10 = local_60;
  if (local_58._4_4_ != iVar8 || local_60 != local_90) {
    do {
      local_80 = lVar10;
      local_98 = lVar12;
      local_b0 = iVar8;
      lVar12 = *(longlong *)(param_1 + 0x2e8);
      lVar10 = *(longlong *)(lVar12 + 0x10 + (longlong)iVar3 * 0x20);
      local_9c = iVar16;
      local_78 = uVar9;
      if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x30) != 0)) {
        iVar8 = (int)local_a8[1];
        *(uint *)(local_a8 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)local_a8 + 0xc) < iVar8 + 1U) {
          FUN_141305c2c(local_a8,iVar8);
          param_1 = local_98;
        }
        *(undefined8 *)(*local_a8 + (longlong)iVar8 * 8) = *(undefined8 *)(lVar10 + 0x30);
        lVar12 = *(longlong *)(lVar12 + (longlong)iVar3 * 0x20 + 0x10);
        puVar13 = (uint *)(lVar12 + 0x80);
        iVar8 = *(int *)(lVar12 + 0x98);
        if (iVar8 == 0) {
          uVar15 = 1;
          uVar9 = 0;
          iVar3 = 0;
          iVar16 = 0;
        }
        else {
          puVar2 = *(uint **)(lVar12 + 0x90);
          if (*(uint **)(lVar12 + 0x90) == (uint *)0x0) {
            puVar2 = puVar13;
          }
          uVar14 = *puVar2;
          if (uVar14 == 0) {
            iVar3 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar3 = iVar8 + -1;
            }
            uVar9 = 0;
            uVar15 = (ulonglong)(uint)(iVar3 >> 5);
            if (iVar3 >> 5 < 1) {
              uVar15 = uVar9;
            }
            iVar16 = 0;
            do {
              if (uVar15 == uVar9) goto LAB_141305a39;
              iVar16 = iVar16 + 0x20;
              uVar14 = puVar2[uVar9 + 1];
              uVar9 = uVar9 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar9 = 0;
            iVar16 = 0;
          }
          uVar15 = (ulonglong)(-uVar14 & uVar14);
          uVar1 = uVar15 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar3 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar3) {
            iVar3 = iVar8;
          }
        }
        if (iVar3 != iVar8) {
          uVar14 = 0xffffffff;
          iVar7 = iVar8;
          do {
            lVar10 = *(longlong *)(*(longlong *)(lVar12 + 0x70) + 0x10 + (longlong)iVar3 * 0x20);
            if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x30) != 0)) {
              iVar3 = (int)local_a8[1];
              *(uint *)(local_a8 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)local_a8 + 0xc) < iVar3 + 1U) {
                local_70 = puVar13;
                FUN_141305c2c(local_a8,iVar3);
                puVar13 = local_70;
                param_1 = local_98;
              }
              *(undefined8 *)(*local_a8 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar10 + 0x30);
              iVar7 = *(int *)(lVar12 + 0x98);
            }
            uVar14 = uVar14 & ~(uint)uVar15;
            puVar2 = *(uint **)(lVar12 + 0x90);
            if (*(uint **)(lVar12 + 0x90) == (uint *)0x0) {
              puVar2 = puVar13;
            }
            iVar3 = (int)uVar9;
            lVar10 = (longlong)iVar3;
            uVar4 = puVar2[lVar10] & uVar14;
            if (uVar4 == 0) {
              iVar5 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar5 = iVar7 + -1;
              }
              iVar5 = iVar5 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar6 = iVar5;
              if (iVar5 < iVar3) {
                iVar6 = iVar3;
              }
              if (iVar3 < iVar5) {
                lVar11 = 0;
                do {
                  uVar4 = puVar2[lVar10 + lVar11 + 1];
                  if (uVar4 != 0) {
                    uVar9 = (ulonglong)(iVar3 + (int)lVar11 + 1);
                    uVar14 = 0xffffffff;
                    goto LAB_141305a04;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar6 - lVar10 != lVar11);
                uVar14 = 0xffffffff;
                iVar3 = iVar6;
              }
              uVar9 = (ulonglong)(iVar3 + 1);
              param_1 = local_98;
              iVar3 = iVar7;
            }
            else {
LAB_141305a04:
              uVar15 = (ulonglong)(-uVar4 & uVar4);
              uVar1 = uVar15 * 2 + 1;
              lVar10 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              iVar3 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
              if (iVar7 <= iVar3) {
                iVar3 = iVar7;
              }
            }
          } while (iVar3 != iVar8);
        }
      }
LAB_141305a39:
      local_ac = local_ac & ~(uint)local_78;
      lVar12 = *(longlong *)(local_80 + 0x10);
      if (*(longlong *)(local_80 + 0x10) == 0) {
        lVar12 = local_80;
      }
      iVar8 = *(int *)(local_80 + 0x18);
      iVar3 = (int)local_88;
      lVar10 = (longlong)iVar3;
      uVar14 = *(uint *)(lVar12 + lVar10 * 4) & local_ac;
      iVar16 = local_9c;
      if (uVar14 == 0) {
        iVar7 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar7 = iVar8 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar16 = local_9c + 0x20;
        iVar5 = iVar7;
        if (iVar7 < iVar3) {
          iVar5 = iVar3;
        }
        if (iVar3 < iVar7) {
          lVar11 = 0;
          do {
            uVar14 = *(uint *)(lVar12 + lVar10 * 4 + 4 + lVar11 * 4);
            if (uVar14 != 0) {
              local_88 = (ulonglong)(iVar3 + (int)lVar11 + 1);
              local_ac = 0xffffffff;
              goto LAB_141305ac1;
            }
            iVar16 = iVar16 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar5 - lVar10 != lVar11);
          local_ac = 0xffffffff;
          iVar3 = iVar5;
        }
        local_88 = (ulonglong)(iVar3 + 1);
        uVar9 = local_78;
        param_1 = local_98;
        iVar3 = iVar8;
      }
      else {
LAB_141305ac1:
        uVar9 = (ulonglong)(-uVar14 & uVar14);
        uVar15 = uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar3 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar3) {
          iVar3 = iVar8;
        }
      }
      iVar8 = local_b0;
      lVar12 = local_98;
      lVar10 = local_80;
    } while (iVar3 != local_b0 || local_80 != local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141305c2c FUN_141305c2c body=353 status=ok
// SIG undefined FUN_141305c2c(void)

void FUN_141305c2c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141305cb3;
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
LAB_141305cb3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141305d8e FUN_141305d8e body=281 status=ok
// SIG undefined FUN_141305d8e(void)

void FUN_141305d8e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  uStack_18 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_48);
  uStack_11 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_48) >> 0x38);
  local_19 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_19);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_19);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_19 = (undefined1)uVar2;
      uStack_18 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_19);
    }
  }
  puVar4 = &local_19;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141305ea8(param_1,puVar4);
  if ((CONCAT17(uStack_11,uStack_18) ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141305ea8 FUN_141305ea8 body=1817 status=ok
// SIG undefined FUN_141305ea8(void)

void FUN_141305ea8(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  code *local_80;
  undefined1 *local_70;
  longlong local_68;
  uint *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  lVar4 = FUN_1447210f0();
  if (lVar4 != 0) {
    lVar19 = param_1 + 0x2b48;
    iVar3 = *(int *)(param_1 + 0x2b90);
    local_68 = param_1;
    local_58 = lVar19;
    if (iVar3 < 2) {
      lVar21 = param_1 + 0x2b80;
      if (*(longlong *)(param_1 + 0x2b88) != 0) {
        lVar21 = *(longlong *)(param_1 + 0x2b88);
      }
      iVar10 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar10 = iVar3;
      }
      if (*(int *)(param_1 + 0x2b50) - *(int *)(param_1 + 0x2b7c) < iVar10 >> 2) {
        iVar3 = *(int *)(param_1 + 0x2b70);
        if (iVar3 != 0) {
          local_60 = (uint *)(param_1 + 0x2b58);
          puVar12 = *(uint **)(param_1 + 0x2b68);
          if (*(uint **)(param_1 + 0x2b68) == (uint *)0x0) {
            puVar12 = local_60;
          }
          uVar9 = *puVar12;
          local_70 = param_2;
          if (uVar9 == 0) {
            iVar10 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar10 = iVar3 + -1;
            }
            uVar11 = 0;
            uVar15 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar15 = uVar11;
            }
            iVar10 = 0;
            do {
              if (uVar15 == uVar11) goto LAB_141305f62;
              iVar10 = iVar10 + 0x20;
              uVar9 = puVar12[uVar11 + 1];
              uVar11 = uVar11 + 1;
            } while (uVar9 == 0);
          }
          else {
            uVar11 = 0;
            iVar10 = 0;
          }
          uVar13 = (ulonglong)(-uVar9 & uVar9);
          uVar15 = uVar13 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar14 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar14 < iVar3) {
            uVar9 = 0xffffffff;
            do {
              *(undefined4 *)
               (lVar21 + (longlong)
                         *(int *)(*(longlong *)(param_1 + 0x2b48) + 0x10 + (longlong)iVar14 * 0x14)
                         * 4) = 0xffffffff;
              uVar9 = ~(uint)uVar13 & uVar9;
              puVar12 = *(uint **)(param_1 + 0x2b68);
              if (*(uint **)(param_1 + 0x2b68) == (uint *)0x0) {
                puVar12 = local_60;
              }
              iVar1 = *(int *)(param_1 + 0x2b70);
              iVar14 = (int)uVar11;
              lVar6 = (longlong)iVar14;
              uVar20 = puVar12[lVar6] & uVar9;
              if (uVar20 == 0) {
                iVar17 = iVar1 + 0x1e;
                if (-1 < iVar1 + -1) {
                  iVar17 = iVar1 + -1;
                }
                iVar17 = iVar17 >> 5;
                iVar10 = iVar10 + 0x20;
                iVar18 = iVar17;
                if (iVar17 < iVar14) {
                  iVar18 = iVar14;
                }
                if (iVar14 < iVar17) {
                  lVar16 = 0;
                  do {
                    uVar20 = puVar12[lVar6 + lVar16 + 1];
                    if (uVar20 != 0) {
                      uVar11 = (ulonglong)(iVar14 + (int)lVar16 + 1);
                      uVar9 = 0xffffffff;
                      goto LAB_141306560;
                    }
                    iVar10 = iVar10 + 0x20;
                    lVar16 = lVar16 + 1;
                  } while (iVar18 - lVar6 != lVar16);
                  uVar9 = 0xffffffff;
                  lVar6 = (longlong)iVar18;
                }
                uVar11 = lVar6 + 1U & 0xffffffff;
                iVar14 = iVar1;
              }
              else {
LAB_141306560:
                uVar13 = (ulonglong)(-uVar20 & uVar20);
                uVar15 = uVar13 * 2 + 1;
                lVar6 = 0x3f;
                if (uVar15 != 0) {
                  for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                  }
                }
                iVar14 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
                if (iVar1 <= iVar14) {
                  iVar14 = iVar1;
                }
              }
            } while (iVar14 != iVar3);
          }
        }
      }
      else if (iVar3 == 1) {
        lVar6 = 0;
        do {
          *(undefined4 *)(lVar21 + lVar6 * 4) = 0xffffffff;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_1 + 0x2b90));
      }
LAB_141305f62:
      FUN_140f8e568(lVar19,0);
    }
    else {
      FUN_140f8e568(lVar19,0);
      *(undefined4 *)(param_1 + 0x2b90) = 1;
      FUN_141121a6c(lVar19);
    }
    if (0 < *(int *)(lVar4 + 0x238)) {
      local_70 = (undefined1 *)(param_1 + 0x2918);
      lVar19 = 0;
      do {
        iVar3 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar19 * 8);
        if (((((iVar3 != 0) &&
              (uVar9 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar19 * 8), -1 < (int)uVar9)) &&
             ((int)uVar9 < DAT_14c9647dc)) &&
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar3)))) &&
           (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
            (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)))) {
          if (DAT_14cbadd90 == 0) {
            local_50 = FUN_141030f22;
            local_80 = FUN_14081d0ea;
            local_88 = &LAB_1459f2e4c;
            local_98 = &LAB_148c39de3;
            local_a0 = &LAB_1457a9eb2;
            local_a8 = &DAT_149e063b2;
            local_b0 = 0;
            local_b8 = 0x10000004;
            local_c0 = 0x10;
            local_c8 = 0x3de0;
            local_90 = &local_50;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
              DAT_14cbadd90 + 0x30)) {
            if (*(char *)(param_1 + 0x2910) == '\0') {
              FUN_1412ea1b8(param_1,plVar7);
            }
            else {
              cVar2 = (**(code **)(*plVar7 + 0x6c8))(plVar7);
              uVar9 = *(uint *)((longlong)plVar7 + 0xc);
              if ((int)uVar9 < DAT_14c9647dc) {
                lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
              }
              else {
                lVar21 = 0;
              }
              uVar20 = *(uint *)(lVar21 + 0x10);
              if (*(uint *)(lVar21 + 0x10) == 0) {
                LOCK();
                iVar3 = DAT_14c964868 + 1;
                UNLOCK();
                uVar8 = DAT_14c964868 + 1;
                bVar22 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar3;
                if (bVar22) {
                  local_60 = (uint *)CONCAT44(local_60._4_4_,uVar8);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar8);
                  uVar8 = (uint)local_60;
                }
                LOCK();
                uVar20 = *(uint *)(lVar21 + 0x10);
                bVar22 = uVar20 == 0;
                if (bVar22) {
                  *(uint *)(lVar21 + 0x10) = uVar8;
                  uVar20 = 0;
                }
                UNLOCK();
                if (bVar22) {
                  uVar20 = uVar8;
                }
              }
              local_50 = (code *)CONCAT44(uVar20,uVar9);
              iVar3 = FUN_14088c3be(local_70,uVar9 ^ uVar20,&local_50);
              param_1 = local_68;
              if (iVar3 == -1) {
                if (cVar2 != '\0') {
                  uVar9 = *(uint *)((longlong)plVar7 + 0xc);
                  local_50 = (code *)(ulonglong)uVar9;
                  if ((int)uVar9 < DAT_14c9647dc) {
                    lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                  }
                  else {
                    lVar21 = 0;
                  }
                  uVar20 = *(uint *)(lVar21 + 0x10);
                  if (*(uint *)(lVar21 + 0x10) == 0) {
                    LOCK();
                    iVar3 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar8 = DAT_14c964868 + 1;
                    bVar22 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar3;
                    if (bVar22) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar8);
                    }
                    LOCK();
                    uVar20 = *(uint *)(lVar21 + 0x10);
                    bVar22 = uVar20 == 0;
                    if (bVar22) {
                      *(uint *)(lVar21 + 0x10) = uVar8;
                      uVar20 = 0;
                    }
                    UNLOCK();
                    uVar9 = (uint)local_50;
                    if (bVar22) {
                      uVar20 = uVar8;
                    }
                  }
                  local_50._0_4_ = uVar9;
                  local_50 = (code *)CONCAT44(uVar20,(uint)local_50);
                  puVar5 = (undefined1 *)FUN_141121064(local_58,uVar20 ^ (uint)local_50,&local_50);
                  *puVar5 = 0;
                }
              }
              else {
                if (cVar2 != '\0') {
                  uVar9 = *(uint *)((longlong)plVar7 + 0xc);
                  local_50 = (code *)(ulonglong)uVar9;
                  if ((int)uVar9 < DAT_14c9647dc) {
                    lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                  }
                  else {
                    lVar21 = 0;
                  }
                  uVar20 = *(uint *)(lVar21 + 0x10);
                  if (*(uint *)(lVar21 + 0x10) == 0) {
                    LOCK();
                    iVar3 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar8 = DAT_14c964868 + 1;
                    bVar22 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar3;
                    if (bVar22) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar8);
                    }
                    LOCK();
                    uVar20 = *(uint *)(lVar21 + 0x10);
                    bVar22 = uVar20 == 0;
                    if (bVar22) {
                      *(uint *)(lVar21 + 0x10) = uVar8;
                      uVar20 = 0;
                    }
                    UNLOCK();
                    uVar9 = (uint)local_50;
                    if (bVar22) {
                      uVar20 = uVar8;
                    }
                  }
                  local_50._0_4_ = uVar9;
                  local_50 = (code *)CONCAT44(uVar20,(uint)local_50);
                  puVar5 = (undefined1 *)FUN_141121064(local_58,uVar20 ^ (uint)local_50,&local_50);
                  *puVar5 = 1;
                }
                *param_2 = 1;
              }
            }
          }
        }
        lVar19 = lVar19 + 1;
      } while ((int)lVar19 < *(int *)(lVar4 + 0x238));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413065c2 FUN_1413065c2 body=463 status=ok
// SIG undefined FUN_1413065c2(void)

undefined8 * FUN_1413065c2(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar6 = (uint *)(param_1 + 0x1a);
  if (((((param_1[0x1b] == 0) || (*(int *)((longlong)param_1 + 0xd4) == 0)) ||
       (uVar1 = *puVar6, (int)uVar1 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar1 ||
       (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0)))) ||
     ((*(int *)(lVar5 + 0x10) != *(int *)((longlong)param_1 + 0xd4) ||
      ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
    uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    plVar4 = (longlong *)FUN_14007a5e6(uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x78))(plVar4,(int)param_1[0x19]);
      FUN_1458d9134(&local_98,uVar3);
      *puVar6 = local_98;
      *(undefined4 *)((longlong)param_1 + 0xd4) = uStack_94;
      *(undefined4 *)(param_1 + 0x1b) = uStack_90;
      *(undefined4 *)((longlong)param_1 + 0xdc) = uStack_8c;
    }
  }
  if (((((longlong *)param_1[0x1b] == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0xd4) == 0))
      || ((uVar1 = *puVar6, (int)uVar1 < 0 ||
          (((DAT_14c9647dc <= (int)uVar1 ||
            (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0)) ||
           (*(int *)(lVar5 + 0x10) != *(int *)((longlong)param_1 + 0xd4))))))) ||
     (((*(uint *)(lVar5 + 8) & 0x10200000) != 0 ||
      (cVar2 = (**(code **)(*(longlong *)param_1[0x1b] + 0x28))(), cVar2 == '\0')))) {
    uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    plVar4 = (longlong *)FUN_14007a5e6(uVar3);
    if ((plVar4 == (longlong *)0x0) ||
       ((**(code **)(*plVar4 + 0x80))(plVar4,&local_98,(int)param_1[0x19]), local_38 == '\0')) {
      puVar6 = (uint *)&DAT_14c846480;
    }
    else {
      puVar6 = &local_98;
    }
    puVar7 = param_2;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *(undefined8 *)puVar6;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x30))((longlong *)param_1[0x1b],param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141306792 FUN_141306792 body=103 status=ok
// SIG undefined FUN_141306792(void)

undefined8 * FUN_141306792(undefined8 *param_1,undefined8 param_2)

{
  FUN_140724c88();
  param_1[0x1a] = param_2;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = &PTR_FUN_14b4310a0;
  param_1[0x24] = param_2;
  param_1[0x25] = 0;
  return param_1;
}



// FUNCTION 1413067fa FUN_1413067fa body=153 status=ok
// SIG undefined FUN_1413067fa(void)

void FUN_1413067fa(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_141306894(param_1,(ulonglong)uVar1);
  }
  memmove((void *)((longlong)*param_1 + 0x38),(void *)*param_1,(ulonglong)uVar1 * 0x38);
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}



// FUNCTION 141306894 FUN_141306894 body=369 status=ok
// SIG undefined FUN_141306894(void)

void FUN_141306894(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_141306919;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_141306919:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 141306a06 FUN_141306a06 body=96 status=ok
// SIG undefined FUN_141306a06(void)

void FUN_141306a06(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_18 = param_2;
    FUN_1487c4cec(param_1 + 0xb40,param_3,&local_18);
    FUN_14125a962(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141306a67 FUN_141306a67 body=316 status=ok
// SIG undefined FUN_141306a67(void)

longlong FUN_141306a67(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    FUN_140002266(&local_30,L"%s: Player was nullptr!",param_1);
    puVar3 = local_30;
    if (local_28 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar3,3,0);
    local_40 = local_30;
LAB_141306b79:
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar2 = FUN_1447210f0(param_2);
    if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x155) & 0x20) == 0)) &&
       (iVar1 = FUN_14490d72a(lVar2), iVar1 != 3)) {
      lVar2 = FUN_140d8fbfc(param_2);
      if (lVar2 != 0) goto LAB_141306b85;
      local_30 = *(undefined2 **)(param_2 + 0x18);
      FUN_1400021e4(&local_30,&local_40);
      puVar3 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar3 = local_40;
      }
      FUN_140002266(&local_30,L"%s: Player \'%ls\' has no associated GbxPlayerController!",param_1,
                    puVar3);
      puVar3 = &DAT_149dfb77a;
      if (local_28 != 0) {
        puVar3 = local_30;
      }
      FUN_1415b7ec4(puVar3,3,0);
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_141306b79;
    }
  }
  lVar2 = 0;
LAB_141306b85:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 141306ba4 FUN_141306ba4 body=269 status=ok
// SIG undefined FUN_141306ba4(void)

longlong FUN_141306ba4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 0) {
    FUN_140002266(&local_30,L"%s: CinematicMode was not specified!",param_1);
    puVar2 = local_30;
    if (local_28 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar2,3,0);
  }
  else {
    lVar1 = FUN_140c16b86(param_2);
    if (lVar1 != 0) goto LAB_141306c93;
    local_48 = *param_2;
    FUN_1400021e4(&local_48,&local_40);
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_140002266(&local_30,L"%s: CinematicMode \'%s\' was not found!",param_1,puVar2);
    puVar2 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar2 = local_30;
    }
    FUN_1415b7ec4(puVar2,3,0);
    bVar3 = local_30 != (undefined2 *)0x0;
    local_30 = local_40;
    if (bVar3) {
      FUN_1400020a8();
      local_30 = local_40;
    }
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
LAB_141306c93:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 141306cb2 FUN_141306cb2 body=397 status=ok
// SIG undefined FUN_141306cb2(void)

void FUN_141306cb2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x98) & 0x20) != 0) {
    *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xdf;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x40),0);
    lVar4 = *(longlong *)(param_1 + 0x30);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x178) == '\x03')) {
      lVar4 = *(longlong *)(lVar4 + 0x1b0);
      if (lVar4 != 0) {
        uVar2 = FUN_144a7b040();
        plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
        if (plVar3 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
          if (lVar4 != 0) {
            local_28 = 0;
            uStack_20 = 0;
            FUN_14592b5f4(lVar4);
          }
        }
      }
      lVar4 = param_1 + 0xa0;
      cVar1 = FUN_1403ae288(lVar4);
      if (cVar1 != '\0') {
        lVar5 = FUN_14008e0ae(lVar4);
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          FUN_14480f766(lVar5 + 0x198);
        }
        lVar5 = FUN_14008e0ae(lVar4);
        if (*(longlong *)(param_1 + 0xd8) != 0) {
          FUN_14480f766(lVar5 + 0x240);
        }
        lVar5 = FUN_14008e0ae(lVar4);
        if (*(longlong *)(param_1 + 0xe0) != 0) {
          FUN_14480f766(lVar5 + 0x168);
        }
        lVar4 = FUN_14008e0ae(lVar4);
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          FUN_14480f766(lVar4 + 0x138);
        }
      }
      if (((*(byte *)(param_1 + 0x98) & 8) != 0) &&
         ((*(char *)(*(longlong *)(param_1 + 0x60) + 0x144) != '\0' ||
          (*(char *)(param_1 + 0x99) == '\x01')))) {
        FUN_148f1516c(param_1);
      }
    }
    if (*(char *)(param_1 + 0x99) != '\x01') {
      FUN_1458d9b9a(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141306e40 FUN_141306e40 body=443 status=ok
// SIG undefined FUN_141306e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141306e40(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1;
  if ((ulonglong)(lVar2 >> 3) < param_2) {
    lVar2 = FUN_1458da366(param_2);
    lVar1 = *param_1;
    if (param_1[2] != lVar1) {
      lVar5 = lVar1;
      if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
         (lVar5 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_1400020a8(lVar5);
    }
    *param_1 = lVar2;
    lVar1 = lVar2 + param_2 * 8;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
    auVar7 = _DAT_149931e80;
    uVar3 = param_2 + 0x1fffffffffffffff & 0x1fffffffffffffff;
    auVar6._8_4_ = (int)uVar3;
    auVar6._0_8_ = uVar3;
    auVar6._12_4_ = (int)(uVar3 >> 0x20);
    uVar4 = 0;
    auVar8 = pmovsxbq(in_XMM1,0x100);
    auVar6 = auVar6 | _DAT_149931e80;
    do {
      if ((bool)(~(auVar6._0_8_ < (longlong)(uVar4 ^ auVar7._0_8_)) & 1)) {
        *(undefined8 *)(lVar2 + uVar4 * 8) = param_3;
      }
      auVar9._8_4_ = (int)uVar4;
      auVar9._0_8_ = uVar4;
      auVar9._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar9._8_8_ | auVar8._8_8_) ^ auVar7._8_8_) <= auVar6._8_8_) {
        *(undefined8 *)(lVar2 + 8 + uVar4 * 8) = param_3;
      }
      uVar4 = uVar4 + 2;
    } while ((uVar3 - ((uint)(param_2 + 0x1fffffffffffffff) & 1)) + 2 != uVar4);
  }
  else if (lVar1 != param_1[1]) {
    uVar3 = lVar2 - 8;
    auVar7._8_4_ = (int)uVar3;
    auVar7._0_8_ = uVar3;
    auVar7._12_4_ = (int)(uVar3 >> 0x20);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    do {
      if ((bool)(~((longlong)(uVar3 >> 3 | 0x8000000000000000) <
                  (longlong)(uVar4 ^ 0x8000000000000000)) & 1)) {
        *(undefined8 *)(lVar1 + uVar4 * 8) = param_3;
      }
      auVar8._8_4_ = (int)uVar4;
      auVar8._0_8_ = uVar4;
      auVar8._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar8._8_8_ | auVar6._8_8_) ^ 0x8000000000000000) <=
          (longlong)(auVar7._8_8_ >> 3 | 0x8000000000000000)) {
        *(undefined8 *)(lVar1 + 8 + uVar4 * 8) = param_3;
      }
      uVar4 = uVar4 + 2;
    } while (((uVar3 >> 3) + 2 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 141306ffc FUN_141306ffc body=245 status=ok
// SIG undefined FUN_141306ffc(void)

undefined8 * FUN_141306ffc(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_58 = &DAT_149e3579e;
  local_50 = 3;
  local_68 = (undefined4)*param_2;
  uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_60 = (undefined4)param_2[1];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  cVar1 = FUN_1413070f2(&local_68,&local_58,local_38);
  if (cVar1 == '\0') {
    local_48 = *param_2;
    uStack_40 = param_2[1];
  }
  uVar3 = uStack_40 & 0xffffffff;
  if (0 < (int)uStack_40) {
    uVar2 = 0;
    do {
      uVar4 = (ulonglong)*(ushort *)(local_48 + uVar2 * 2);
      if ((uVar4 < 0x40) && ((0x8400800800000000U >> (uVar4 & 0x3f) & 1) != 0)) {
        uVar3 = uVar2 & 0xffffffff;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar3 != uVar2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_28,local_48,uVar3);
  if ((undefined8 *)&local_28 == param_1) {
    if (CONCAT44(uStack_24,local_28) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_1 = local_28;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_24;
    *(undefined4 *)(param_1 + 1) = uStack_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1413070f2 FUN_1413070f2 body=185 status=ok
// SIG undefined FUN_1413070f2(void)

undefined8 FUN_1413070f2(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = (int)param_1[1];
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = 0;
    iVar4 = 0;
    if ((int)uVar1 <= iVar5 && uVar1 != 0) {
      if ((int)uVar1 < 1) {
LAB_14130715e:
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        *param_3 = *param_1;
        *(int *)(param_3 + 1) = iVar5;
        iVar5 = (int)param_1[1];
        iVar4 = iVar5 - (iVar4 + (int)param_2[1]);
        if (iVar5 <= iVar4) {
          iVar4 = iVar5;
        }
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        *param_4 = ((longlong)iVar5 * 2 + *param_1) - (ulonglong)(uint)(iVar4 * 2);
        *(int *)(param_4 + 1) = iVar4;
        uVar3 = CONCAT71((uint7)(uint3)((uint)(iVar4 * 2) >> 8),1);
      }
      else {
        iVar4 = 0;
        lVar6 = *param_1;
        do {
          uVar2 = 0;
          while (*(short *)(lVar6 + uVar2 * 2) == *(short *)(*param_2 + uVar2 * 2)) {
            uVar2 = uVar2 + 1;
            if (uVar1 == uVar2) goto LAB_14130715e;
          }
          iVar4 = iVar4 + 1;
          lVar6 = lVar6 + 2;
          uVar3 = 0;
        } while ((int)(iVar4 + uVar1) <= iVar5);
      }
    }
  }
  return uVar3;
}



// FUNCTION 1413071ac FUN_1413071ac body=86 status=ok
// SIG undefined FUN_1413071ac(void)

void FUN_1413071ac(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x69) & 2) == 0) {
    (**(code **)(*param_1 + 0x5c8))(param_1,0);
    lVar2 = param_1[0x38];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = param_1[0x37];
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar3) != 0) {
          FUN_1413071ac();
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar3);
    }
  }
  return;
}



// FUNCTION 141307202 FUN_141307202 body=187 status=ok
// SIG undefined FUN_141307202(void)

void FUN_141307202(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    lVar6 = 0;
    do {
      iVar2 = *(int *)(lVar4 + 4 + lVar6);
      if (((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + lVar6), -1 < (int)uVar3)) &&
         ((int)uVar3 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == iVar2)) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
            (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
          (**(code **)(*plVar5 + 0x5c8))(plVar5,0);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (-1 < *(int *)(param_1 + 0xe4)) {
    return;
  }
  FUN_146620cca(param_1 + 0xd8,0);
  return;
}



// FUNCTION 1413072be FUN_1413072be body=801 status=ok
// SIG undefined FUN_1413072be(void)

void FUN_1413072be(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_d8 [36];
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x60);
  local_78 = 0;
  uStack_70 = 0;
  lVar9 = param_1 + 0x70;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  local_b0 = param_1;
  lStack_60 = lVar9;
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = *(uint *)(param_1 + 0x88);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88._0_4_ = local_58;
  local_88._4_4_ = uStack_54;
  local_98._0_4_ = (undefined4)local_68;
  local_98._4_4_ = local_68._4_4_;
  uStack_90 = lStack_60;
  local_a0 = plVar1;
  if ((uStack_54 != uVar11) || (lStack_60 != lVar9)) {
    do {
      FUN_1413075e6(&local_78,*local_a0 + (longlong)(int)local_88._4_4_ * 0x28 + 0x10);
      local_88._0_4_ = (uint)local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (uStack_90 != lVar9 || local_88._4_4_ != uVar11));
  }
  lVar9 = local_b0;
  local_a8 = local_b0 + 0xc0;
  local_a0 = (longlong *)0x100000000;
  uStack_90 = 0xffffffff;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  local_98 = local_a8;
  if (*(int *)(local_b0 + 0xd8) == 0) {
    uVar14 = 1;
    uStack_90._0_4_ = 0xffffffff;
    iVar13 = 0;
    iVar15 = 0;
    uStack_90._4_4_ = 0;
    local_a0._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_a0);
    uVar14 = (ulonglong)local_a0 >> 0x20;
    iVar13 = *(int *)(lVar9 + 0xd8);
    iVar15 = (uint)local_88;
  }
  lVar4 = local_98;
  iVar7 = (int)local_a0;
  uVar11 = (uint)uStack_90;
  iVar6 = uStack_90._4_4_;
  if (uStack_90._4_4_ != iVar13 || local_98 != local_a8) {
    do {
      local_b4 = iVar13;
      lVar12 = (longlong)*(int *)(*(longlong *)(lVar9 + 0xb0) + 0x18 + (longlong)iVar6 * 0x28);
      if (lVar12 != 0) {
        lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xb0) + 0x10 + (longlong)iVar6 * 0x28);
        lVar10 = 0;
        do {
          uVar5 = (**(code **)(**(longlong **)(lVar9 + lVar10) + 0x20))();
          FUN_1413075e6(&local_78,uVar5);
          lVar10 = lVar10 + 0x10;
        } while (lVar12 * 0x10 != lVar10);
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      lVar9 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) == 0) {
        lVar9 = lVar4;
      }
      iVar13 = *(int *)(lVar4 + 0x18);
      lVar12 = (longlong)iVar7;
      uVar8 = *(uint *)(lVar9 + lVar12 * 4) & uVar11;
      if (uVar8 == 0) {
        iVar6 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar6 = iVar13 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar3 = iVar6;
        if (iVar6 < iVar7) {
          iVar3 = iVar7;
        }
        if (iVar7 < iVar6) {
          lVar10 = 0;
          do {
            uVar8 = *(uint *)(lVar9 + lVar12 * 4 + 4 + lVar10 * 4);
            if (uVar8 != 0) {
              iVar7 = iVar7 + (int)lVar10 + 1;
              uVar11 = 0xffffffff;
              goto LAB_1413074fc;
            }
            iVar15 = iVar15 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar3 - lVar12 != lVar10);
          uVar11 = 0xffffffff;
          iVar7 = iVar3;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar13;
      }
      else {
LAB_1413074fc:
        uVar14 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar14 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar6 = (iVar15 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar6) {
          iVar6 = iVar13;
        }
      }
      lVar9 = local_b0;
      iVar13 = local_b4;
    } while (iVar6 != local_b4 || lVar4 != local_a8);
  }
  FUN_1458da614(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413075e6 FUN_1413075e6 body=322 status=ok
// SIG undefined FUN_1413075e6(void)

void FUN_1413075e6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    plVar3 = (longlong *)*param_1;
    plVar11 = plVar3;
    do {
      plVar8 = (longlong *)plVar11[1];
      if (plVar8 == (longlong *)0x0) {
LAB_141307679:
        plVar8 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar8[1];
        do {
          if (iVar7 == 0) goto LAB_141307679;
          LOCK();
          iVar6 = (int)plVar8[1];
          bVar12 = iVar7 == iVar6;
          if (bVar12) {
            *(int *)(plVar8 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar12);
      }
      lVar9 = *plVar11;
      plVar4 = (longlong *)param_2[1];
      if (plVar4 == (longlong *)0x0) {
LAB_14130765c:
        lVar10 = 0;
      }
      else {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_14130765c;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar12 = iVar7 == iVar6;
          if (bVar12) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar12);
        lVar10 = *param_2;
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
      if (plVar8 == (longlong *)0x0) {
        lVar9 = 0;
      }
      else {
        LOCK();
        plVar4 = plVar8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (lVar9 == lVar10) {
        if ((int)((ulonglong)~((longlong)plVar11 - (longlong)plVar3) >> 4) != 0) {
          return;
        }
        break;
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar3 + (longlong)(int)lVar5 * 2);
  }
  iVar7 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_1458da64c(param_1,iVar7);
  }
  lVar5 = *param_1;
  *(longlong *)(lVar5 + (longlong)iVar7 * 0x10) = *param_2;
  lVar9 = param_2[1];
  *(longlong *)(lVar5 + 8 + (longlong)iVar7 * 0x10) = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141307728 FUN_141307728 body=35 status=ok
// SIG undefined FUN_141307728(void)

void FUN_141307728(longlong param_1)

{
  if (*(char *)(param_1 + 0xa1) == '\0') {
    FUN_14130774c();
    *(undefined1 *)(param_1 + 0xa1) = 1;
  }
  return;
}



// FUNCTION 14130774c FUN_14130774c body=2811 status=ok
// SIG undefined FUN_14130774c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14130774c(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  undefined4 local_180;
  undefined8 local_178;
  wchar_t *local_170;
  wchar_t *local_168;
  code *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  code *local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  undefined8 local_f8;
  undefined **local_e8;
  longlong local_e0;
  code *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  byte local_96;
  undefined1 local_95;
  uint local_94;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_110 = *(code **)(param_1 + 0x18);
  FUN_1446dcdd4(&local_c8,&local_110);
  lVar4 = FUN_140a4bd48(&local_c8);
  if (lStack_b0 != 0) {
    FUN_1400020a8();
  }
  if (lVar4 == 0) goto LAB_141307ad8;
  if ((((*(int *)(lVar4 + 0x94) == 0) || (uVar1 = *(uint *)(lVar4 + 0x90), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(lVar4 + 0x94))) ||
      (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar6 = *plVar8, lVar6 == 0)))))) {
    if (*(longlong *)(lVar4 + 0x98) == 0) goto LAB_141307ad8;
    lVar6 = FUN_140007850(lVar4 + 0x98);
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    lVar5 = DAT_14c9647c8;
    if ((lVar6 == 0) || (cVar2 == '\0')) {
      if (lVar6 == 0) {
        *(undefined8 *)(lVar4 + 0x90) = 0;
        goto LAB_141307ad8;
      }
      uVar1 = *(uint *)(lVar6 + 0xc);
      *(uint *)(lVar4 + 0x90) = uVar1;
      if (DAT_14c9647dc <= (int)uVar1) goto LAB_141307b0c;
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_141307a9c:
      iVar3 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar3 = *(int *)(lVar5 + 0x10);
        bVar12 = iVar3 == 0;
        if (bVar12) {
          *(int *)(lVar5 + 0x10) = iVar10;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar3 = iVar10;
        }
      }
      *(int *)(lVar4 + 0x94) = iVar3;
    }
    else {
      uVar1 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                      (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
          *(uint *)(lVar4 + 0x90) = uVar1;
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_141307a9c;
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        *(uint *)(lVar4 + 0x90) = uVar1;
LAB_141307b0c:
        lVar5 = 0;
        goto LAB_141307a9c;
      }
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0) goto LAB_141307ad8;
  }
  if (DAT_14c949118 == 0) {
    local_118 = FUN_140631fbe;
    lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar5;
    FUN_1446f470e(&local_110,L"Class",1);
    local_158 = &LAB_146891e90;
    local_160 = (code *)&LAB_146273097;
    local_170 = L"Engine";
    local_168 = (wchar_t *)CONCAT44(local_168._4_4_,199);
    local_178 = 0x20;
    local_180 = 0x10000000;
    local_188._0_4_ = 8;
    local_150 = &local_118;
    FUN_14574b4b2(lVar5);
    DAT_14c949118 = lVar5;
    if (DAT_14c951858 == 0) {
      local_c8 = FUN_1449e2820;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_14081d0ea;
      local_158 = &LAB_1468c5283;
      local_160 = FUN_142809da0;
      local_168 = L"Engine";
      local_170 = (wchar_t *)0x400000000;
      local_178 = CONCAT44(local_178._4_4_,0x10000000);
      local_180 = 8;
      local_188._0_4_ = 0x50;
      local_150 = &local_c8;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar9 = DAT_14c951858;
    lVar5 = DAT_14c949118;
    uVar7 = FUN_1449e2fb2();
    local_188 = L"Class";
    FUN_14574b446(uVar7,lVar5,lVar9,L"/Script/CoreUObject");
  }
  if ((((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
      (lVar5 = FUN_140d12354(), lVar5 == 0)) ||
     ((*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
       lVar5 + 0x30)))) goto LAB_141307ad8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = (code *)0x0;
  uStack_c0 = 0;
  local_98 = 0x100;
  local_95 = 0;
  local_94 = 8;
  lVar6 = 0;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_96 = local_96 & 0xe0 | 6;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0x34) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)
          ))) {
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar8;
      }
    }
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_141307e37:
    lStack_b0 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38);
    lStack_b0 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0x3c) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)
          ))) goto LAB_141307e37;
      lStack_b0 = *plVar8;
    }
  }
  puVar11 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
    puVar11 = *(undefined4 **)(lVar4 + 8);
  }
  local_b8 = lVar6;
  if (DAT_14c947fe0 == 0) {
    lVar5 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar5);
    DAT_14c947fe0 = lVar5;
  }
  FUN_140045924(DAT_14c947fe0,&local_c8,puVar11,1);
  local_95 = 3;
  local_98 = CONCAT11(local_98._1_1_,1);
  if (lVar6 == 0) {
    local_94 = 0x40;
  }
  else {
    local_94 = *(uint *)(lVar6 + 8) & 0x69;
  }
  if ((((*(int *)(lVar4 + 0x94) == 0) || (uVar1 = *(uint *)(lVar4 + 0x90), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(lVar4 + 0x94))) ||
      (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar6 = *plVar8, lVar6 == 0)))))) {
    if (*(longlong *)(lVar4 + 0x98) != 0) {
      lVar6 = FUN_140007850(lVar4 + 0x98);
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      lVar5 = DAT_14c9647c8;
      if ((lVar6 == 0) || (cVar2 == '\0')) {
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar6 + 0xc);
          *(uint *)(lVar4 + 0x90) = uVar1;
          if (DAT_14c9647dc <= (int)uVar1) goto LAB_141307e44;
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_141307ca3;
        }
        *(undefined8 *)(lVar4 + 0x90) = 0;
      }
      else {
        uVar1 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(lVar4 + 0x90) = uVar1;
            lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_141307ca3:
            iVar3 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar12 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar12) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar3 = *(int *)(lVar5 + 0x10);
              bVar12 = iVar3 == 0;
              if (bVar12) {
                *(int *)(lVar5 + 0x10) = iVar10;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar12) {
                iVar3 = iVar10;
              }
            }
            *(int *)(lVar4 + 0x94) = iVar3;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar4 + 0x90) = uVar1;
LAB_141307e44:
          lVar5 = 0;
          goto LAB_141307ca3;
        }
        if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_141307b8b;
      }
    }
LAB_141307cd9:
    lVar9 = 0;
  }
  else {
LAB_141307b8b:
    if (DAT_14c949118 == 0) {
      local_120 = FUN_140631fbe;
      lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar5;
      FUN_1446f470e(&local_118,L"Class",1);
      local_158 = &LAB_146891e90;
      local_160 = (code *)&LAB_146273097;
      local_170 = L"Engine";
      local_168 = (wchar_t *)CONCAT44(local_168._4_4_,199);
      local_178 = 0x20;
      local_180 = 0x10000000;
      local_188._0_4_ = 8;
      local_150 = &local_120;
      FUN_14574b4b2(lVar5);
      DAT_14c949118 = lVar5;
      if (DAT_14c951858 == 0) {
        local_110 = FUN_1449e2820;
        local_140 = FUN_14081d0ea;
        local_148 = FUN_14081d0ea;
        local_158 = &LAB_1468c5283;
        local_160 = FUN_142809da0;
        local_168 = L"Engine";
        local_170 = (wchar_t *)0x400000000;
        local_178 = CONCAT44(local_178._4_4_,0x10000000);
        local_180 = 8;
        local_188._0_4_ = 0x50;
        local_150 = &local_110;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar9 = DAT_14c951858;
      lVar5 = DAT_14c949118;
      uVar7 = FUN_1449e2fb2();
      local_188 = L"Class";
      FUN_14574b446(uVar7,lVar5,lVar9,L"/Script/CoreUObject");
    }
    if ((((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
        (lVar5 = FUN_140d12354(), lVar5 == 0)) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38)))
    goto LAB_141307cd9;
    lVar9 = 0;
    if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      lVar9 = lVar6;
    }
  }
  lVar6 = FUN_141037e38(param_2,lVar9,param_1 + 0x40,&local_c8);
  if (lVar6 == 0) {
    DAT_14cb89f80 = DAT_14cb89f80 + 1;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    iVar3 = 0;
  }
  else {
    FUN_143e0f118(lVar6,CONCAT71((int7)((ulonglong)lVar9 >> 8),*(undefined1 *)(param_1 + 0xa0)) ^ 1)
    ;
    local_138 = 0;
    uStack_130 = 0;
    local_f8 = 0;
    local_e8 = &PTR_LAB_14b4100d0;
    local_108 = FUN_143d99a86;
    local_e0 = lVar6;
    FUN_1410672ce(lVar6,lVar4);
    DAT_14cb89f80 = DAT_14cb89f80 + 1;
    uVar1 = *(uint *)(lVar6 + 0xc);
    *(uint *)(param_1 + 0xa4) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar12 = iVar3 == 0;
      if (bVar12) {
        *(int *)(lVar4 + 0x10) = iVar10;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar3 = iVar10;
      }
    }
  }
  *(int *)(param_1 + 0xa8) = iVar3;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (plVar8 = *(longlong **)(param_1 + 8), plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x60))(plVar8,lVar6);
  }
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_141307ad8:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141308248 FUN_141308248 body=67 status=ok
// SIG undefined FUN_141308248(void)

void FUN_141308248(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x58);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1458daa20(puVar1 + -0x12);
      puVar1 = puVar1 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14130828c FUN_14130828c body=15 status=ok
// SIG undefined FUN_14130828c(void)

undefined4 * FUN_14130828c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 14130829c FUN_14130829c body=228 status=ok
// SIG undefined FUN_14130829c(void)

longlong FUN_14130829c(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caba9c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14635ee46;
    local_38 = &LAB_1477aef9f;
    local_40 = &LAB_14635ee4b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xd50;
    FUN_14081cfa3(L"/Script/CinematicCamera",L"CineCameraComponent",&DAT_14caba9c0,FUN_14635ee1e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caba9c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130838a FUN_14130838a body=3749 status=ok
// SIG undefined FUN_14130838a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14130838a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
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
  uint local_94;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined1 *local_68;
  undefined4 local_60;
  code *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar15 = *(uint *)(param_1 + 0x14);
  local_90 = param_2;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar6 == 0) {
LAB_141308e6d:
    bVar16 = false;
    lVar6 = 0;
    lVar9 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_b0 = &local_58;
      local_58 = FUN_141864c34;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1464cee30;
      local_b8 = &LAB_148bfac22;
      local_c0 = &LAB_140f21842;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_141308e6d;
    lVar9 = *(longlong *)(&DAT_00006850 + lVar6);
    bVar16 = true;
  }
  lVar7 = (**(code **)(*(longlong *)*param_3 + 0x20))();
  if (lVar7 == 0 || (uVar15 & 0x10) == 0) {
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
  }
  else {
    FUN_1458db884(lVar7,&local_78);
  }
  local_94 = uVar15;
  if (!bVar16 || lVar9 == 0) {
    *local_90 = 0;
    local_90[1] = 0;
    plVar12 = local_90;
    goto LAB_1413089f9;
  }
  cVar2 = FUN_1408a66ea(param_1,lVar6,&local_78);
  lVar7 = param_3[1];
  plVar12 = (longlong *)param_3[2];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)FUN_14001cc68(0x70,0x10);
  uVar15 = local_94;
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b99f330;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  plVar13 = plVar8 + 2;
  *(undefined8 *)((longlong)plVar8 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar8 + 0x2c) = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  *(byte *)(plVar8 + 7) = *(byte *)(plVar8 + 7) & 0xf0 | cVar2 * '\x02';
  plVar8[2] = (longlong)&PTR_FUN_14b99f370;
  plVar8[8] = lVar7;
  plVar8[9] = (longlong)plVar12;
  if (plVar12 == (longlong *)0x0) {
    plVar8[2] = (longlong)&PTR_FUN_14b99f350;
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    plVar8[2] = (longlong)&PTR_FUN_14b99f350;
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    LOCK();
    plVar10 = plVar12 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  local_88 = plVar13;
  local_80 = plVar8;
  if ((plVar13 != (longlong *)0x0) &&
     (((plVar8[3] == 0 || (plVar8[4] == 0)) || (*(int *)(plVar8[4] + 8) < 1)))) {
    if (plVar8 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar13 = (longlong *)&DAT_00000020;
      plVar10 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_141308efc:
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        *plVar13 = (longlong)plVar8;
        uVar15 = local_94;
        if (plVar8 != (longlong *)0x0) goto LAB_141308566;
      }
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8[3] = (longlong)plVar13;
      if ((longlong *)plVar8[4] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar8[4] != (longlong *)0x0) {
          plVar13 = plVar8 + 4;
          plVar10 = (longlong *)plVar8[4];
          goto LAB_141308efc;
        }
        plVar8[4] = (longlong)plVar8;
      }
LAB_141308566:
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar12 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  plVar12 = local_88;
  if (lVar6 == 0) {
    *(undefined4 *)(local_88 + 8) = 0;
    iVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(lVar6 + 0xc);
    *(uint *)(local_88 + 8) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar16 = iVar3 == 0;
      if (bVar16) {
        *(int *)(lVar7 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar12 + 0x44) = iVar3;
  uVar5 = *(uint *)(param_1 + 0x14);
  if ((uVar5 & 7) != 0) {
    local_58 = (code *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,4,0x10);
    plVar12 = local_80;
    local_50 = 4;
    if (local_80 == (longlong *)0x0) {
      *(undefined ***)local_58 = &PTR_LAB_14b99f400;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      *(longlong *)(local_58 + 0x10) = lVar14;
      *(undefined ***)local_58 = &PTR_FUN_14b99f390;
      *(longlong **)(local_58 + 0x18) = local_88;
      *(longlong *)(local_58 + 0x20) = 0;
      *(undefined1 **)(local_58 + 0x28) = &LAB_1408a6672;
      *(undefined4 *)(local_58 + 0x30) = 0;
      uVar15 = local_94;
    }
    else {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      *(undefined ***)local_58 = &PTR_LAB_14b99f400;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      *(longlong *)(local_58 + 0x10) = lVar14;
      *(undefined ***)local_58 = &PTR_FUN_14b99f390;
      *(longlong **)(local_58 + 0x18) = local_88;
      *(longlong **)(local_58 + 0x20) = local_80;
      LOCK();
      *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
      UNLOCK();
      *(undefined1 **)(local_58 + 0x28) = &LAB_1408a6672;
      *(undefined4 *)(local_58 + 0x30) = 0;
      LOCK();
      plVar8 = local_80 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (((local_50 == 0) || (local_58 == (code *)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)local_58 + 0x30))(), cVar2 == '\0')) {
      uVar15 = local_94;
      if (local_50 == 0) goto LAB_141308778;
      if (local_58 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        goto LAB_141308765;
      }
    }
    else {
      plVar12 = (longlong *)(lVar9 + 18000);
      if (*(int *)(lVar9 + 0x4664) < 1) {
        iVar3 = *(int *)(lVar9 + 0x4658);
        iVar4 = *(int *)(lVar9 + 0x4660) + -1;
        *(int *)(lVar9 + 0x4660) = iVar4;
        if (iVar4 <= iVar3) {
          iVar4 = iVar3;
          if (0 < iVar3) {
            iVar11 = 0;
            do {
              if (((*(int *)(*plVar12 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                  (plVar8 = *(longlong **)(*plVar12 + (longlong)iVar11 * 0x10),
                  plVar8 == (longlong *)0x0)) ||
                 (cVar2 = (**(code **)(*plVar8 + 0x28))(), cVar2 != '\0')) {
                FUN_14005b288(plVar12,iVar11);
                FUN_14005b248(plVar12);
              }
              else {
                iVar11 = iVar11 + 1;
              }
              iVar4 = *(int *)(lVar9 + 0x4658);
            } while (iVar11 < iVar4);
          }
          iVar11 = 2;
          if (2 < iVar4 * 2) {
            iVar11 = iVar4 * 2;
          }
          *(int *)(lVar9 + 0x4660) = iVar11;
          if ((iVar11 < iVar3) && (*(int *)(lVar9 + 0x465c) != iVar4)) {
            FUN_14045812c();
          }
        }
      }
      if ((local_50 != 0) && (local_58 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_58 + 0x38))(local_58,&local_68);
      }
      iVar3 = *(int *)(lVar9 + 0x4658);
      *(uint *)(lVar9 + 0x4658) = iVar3 + 1U;
      if (*(uint *)(lVar9 + 0x465c) < iVar3 + 1U) {
        FUN_1447a71f6(plVar12,iVar3);
      }
      lVar9 = *plVar12;
      lVar7 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar9 + lVar7) = 0;
      *(undefined4 *)(lVar9 + 8 + lVar7) = 0;
      *(code **)(lVar9 + lVar7) = local_58;
      local_58 = (code *)0x0;
      *(int *)(lVar9 + 8 + lVar7) = local_50;
LAB_141308765:
      local_50 = 0;
LAB_141308778:
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar5 & 8) != 0) {
    lVar9 = (**(code **)(*(longlong *)(lVar6 + 0x3b60) + 0x20))(lVar6 + 0x3b60);
    local_68 = &LAB_140de91ac;
    local_60 = 0;
    FUN_1458db53c(&local_58,&local_88);
    FUN_14582df42(lVar9 + 0x30,&local_68,&local_58);
    FUN_1449db362(&local_58);
  }
  if (((uVar15 & 0x10) != 0) && (local_78 != 0)) {
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    plVar12 = (longlong *)local_88[10];
    local_88[9] = local_78;
    local_88[10] = (longlong)plStack_70;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar12 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    lVar9 = local_78;
    local_68 = &LAB_140dddae0;
    local_60 = 0;
    FUN_1458db978(&local_58,&local_88);
    FUN_1458db794(lVar9,&local_68,&local_58);
    local_88[0xb] = (longlong)local_68;
    FUN_1449db362(&local_58);
  }
  uVar15 = *(uint *)(param_1 + 0x14);
  if ((uVar15 & 0x20) != 0) {
    plVar12 = (longlong *)(lVar6 + 0x3b38);
    lVar9 = (**(code **)(*(longlong *)(lVar6 + 0x3b38) + 0x18))(plVar12);
    local_58 = (code *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,4,0x10);
    plVar8 = local_80;
    local_50 = 4;
    if (local_80 == (longlong *)0x0) {
      *(undefined ***)local_58 = &PTR_LAB_14b9a0b10;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      *(longlong *)(local_58 + 0x10) = lVar14;
      *(undefined ***)local_58 = &PTR_FUN_14b99f550;
      *(longlong **)(local_58 + 0x18) = local_88;
      *(undefined8 *)(local_58 + 0x20) = 0;
      *(undefined1 **)(local_58 + 0x28) = &LAB_140db34e2;
      *(undefined4 *)(local_58 + 0x30) = 0;
    }
    else {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      *(undefined ***)local_58 = &PTR_LAB_14b9a0b10;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      *(longlong *)(local_58 + 0x10) = lVar14;
      *(undefined ***)local_58 = &PTR_FUN_14b99f550;
      *(longlong **)(local_58 + 0x18) = local_88;
      *(longlong **)(local_58 + 0x20) = local_80;
      LOCK();
      *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
      UNLOCK();
      *(undefined1 **)(local_58 + 0x28) = &LAB_140db34e2;
      *(undefined4 *)(local_58 + 0x30) = 0;
      LOCK();
      plVar13 = local_80 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    FUN_141309258(lVar9 + 0x300,&local_68,&local_58);
    if (local_50 == 0) {
LAB_1413088a2:
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_1413088a2;
    }
    lVar9 = (**(code **)(*plVar12 + 0x18))(plVar12);
    local_58 = (code *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,4,0x10);
    plVar12 = local_80;
    local_50 = 4;
    if (local_80 == (longlong *)0x0) {
      *(undefined ***)local_58 = &PTR_LAB_14b9a0b10;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      *(longlong *)(local_58 + 0x10) = lVar14;
      *(undefined ***)local_58 = &PTR_FUN_14b99f550;
      *(longlong **)(local_58 + 0x18) = local_88;
      *(longlong *)(local_58 + 0x20) = 0;
      *(undefined1 **)(local_58 + 0x28) = &LAB_140db34e2;
      *(undefined4 *)(local_58 + 0x30) = 0;
    }
    else {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      *(undefined ***)local_58 = &PTR_LAB_14b9a0b10;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      *(longlong *)(local_58 + 0x10) = lVar14;
      *(undefined ***)local_58 = &PTR_FUN_14b99f550;
      *(longlong **)(local_58 + 0x18) = local_88;
      *(longlong **)(local_58 + 0x20) = local_80;
      LOCK();
      *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
      UNLOCK();
      *(undefined1 **)(local_58 + 0x28) = &LAB_140db34e2;
      *(undefined4 *)(local_58 + 0x30) = 0;
      LOCK();
      plVar8 = local_80 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    FUN_141309258(lVar9 + 0x378,&local_68,&local_58);
    if (local_50 == 0) {
LAB_1413089a1:
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_1413089a1;
    }
    uVar15 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar15 & 0x40) != 0) {
    local_68 = &LAB_145934dde;
    local_60 = 0;
    FUN_1458db668(&local_58,&local_88);
    FUN_14490d954(lVar6 + 0x8868,&local_68,&local_58);
    FUN_1449db362(&local_58);
    local_68 = &LAB_145934dde;
    local_60 = 0;
    FUN_1458db668(&local_58,&local_88,&local_68);
    FUN_14490d954(lVar6 + 0x8890,&local_68,&local_58);
    FUN_1449db362(&local_58);
    local_68 = &LAB_145934dde;
    local_60 = 0;
    FUN_1458db668(&local_58,&local_88,&local_68);
    FUN_14490d954(lVar6 + 35000,&local_68,&local_58);
    FUN_1449db362(&local_58);
  }
  plVar8 = local_80;
  plVar12 = local_90;
  *local_90 = (longlong)local_88;
  local_90[1] = (longlong)local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_80 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
LAB_1413089f9:
  plVar8 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_70 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar12;
}



// FUNCTION 141309258 FUN_141309258 body=368 status=ok
// SIG undefined FUN_141309258(void)

undefined8 * FUN_141309258(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1413093f2 FUN_1413093f2 body=21 status=ok
// SIG undefined FUN_1413093f2(void)

undefined8 * FUN_1413093f2(void)

{
  FUN_141309408();
  return &DAT_14c990460;
}



// FUNCTION 141309408 FUN_141309408 body=254 status=ok
// SIG undefined FUN_141309408(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141309408(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990498) {
    FUN_144b3d300(&DAT_14c990498);
    if (DAT_14c990498 == -1) {
      FUN_1446ddc76(&local_28,"SCanvas",1);
      DAT_14c990480 = 0;
      _DAT_14c990488 = 0x100000000;
      DAT_14c990460 = 0;
      _DAT_14c990468 = 0;
      _DAT_14c990490 = local_28;
      uVar1 = FUN_140a580e4();
      FUN_145b26348(local_20,&DAT_14c990460,uVar1);
      FUN_1458dbaa4(local_20);
      FUN_140a5f69a(local_20);
      atexit(FUN_14290b828);
      _Init_thread_footer(&DAT_14c990498);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141309508 FUN_141309508 body=304 status=ok
// SIG undefined FUN_141309508(void)

undefined8 *
FUN_141309508(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             int param_5,undefined1 *param_6)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  lVar7 = (longlong)iVar6;
  if (lVar7 != 0) {
    lVar3 = lVar7 * 0x58;
    plVar4 = plVar2;
    do {
      if (*plVar4 == param_4) {
        if (plVar4 != (longlong *)0x0) {
          iVar6 = -1;
          goto LAB_1413095e8;
        }
        break;
      }
      plVar4 = plVar4 + 0xb;
      lVar3 = lVar3 + -0x58;
    } while (lVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_14134bc14(param_1,iVar6);
    plVar2 = (longlong *)*param_1;
  }
  lVar5 = lVar7 * 0x58;
  local_58 = *param_6;
  lVar3 = *(longlong *)(param_6 + 8);
  *(undefined8 *)(param_6 + 8) = 0;
  uVar1 = *(undefined4 *)(param_6 + 0x10);
  *(undefined4 *)(param_6 + 0x10) = 0;
  plVar2[lVar7 * 0xb] = param_4;
  *(int *)(plVar2 + lVar7 * 0xb + 1) = param_5;
  *(undefined8 *)((longlong)plVar2 + lVar5 + 0xc) = 0;
  *(undefined8 *)((longlong)plVar2 + lVar5 + 0x14) = param_3;
  *(int *)((longlong)plVar2 + lVar5 + 0x1c) = param_5 * 100;
  *(undefined1 *)(plVar2 + lVar7 * 0xb + 5) = local_58;
  plVar2[lVar7 * 0xb + 6] = lVar3;
  local_50 = 0;
  *(undefined4 *)(plVar2 + lVar7 * 0xb + 7) = uVar1;
  local_48 = 0;
  plVar2[lVar7 * 0xb + 8] = 0;
  (plVar2 + lVar7 * 0xb + 8)[1] = 0;
  *(undefined2 *)(plVar2 + lVar7 * 0xb + 10) = 2;
  FUN_1449db362();
LAB_1413095e8:
  *param_2 = param_1;
  param_2[1] = param_3;
  *(int *)(param_2 + 2) = iVar6;
  FUN_1449db362(param_6 + 8);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130963a FUN_14130963a body=52 status=ok
// SIG undefined FUN_14130963a(void)

undefined8 * FUN_14130963a(undefined8 *param_1)

{
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = &PTR_FUN_14add8560;
  return param_1;
}



// FUNCTION 14130966e FUN_14130966e body=165 status=ok
// SIG undefined FUN_14130966e(void)

undefined8 * FUN_14130966e(undefined8 *param_1)

{
  FUN_140b4884c();
  *param_1 = &PTR_FUN_14a1aaf20;
  param_1[0x115] = 0;
  param_1[0x116] = 0xffffffff7fffffff;
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 0x122) = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x119) = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x914) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 0;
  param_1[0x125] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  return param_1;
}



// FUNCTION 141309714 FUN_141309714 body=790 status=ok
// SIG undefined FUN_141309714(void)

void FUN_141309714(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 auStack_d8 [44];
  int local_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c895fc0);
  local_a0 = param_1 + 2;
  local_70 = (undefined4 *)&DAT_100000000;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = local_a0;
  if ((int)param_1[5] == 0) {
    uVar17 = 1;
    local_60._0_4_ = 0xffffffff;
    iVar5 = 0;
    local_60._4_4_ = 0;
    uVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    uVar13 = (ulonglong)local_70 & 0xffffffff;
    uVar17 = (ulonglong)local_70 >> 0x20;
    iVar5 = (int)param_1[5];
  }
  uVar16 = (uint)local_60;
  iVar14 = local_60._4_4_;
  iVar18 = local_58;
  plVar15 = param_1;
  plVar4 = local_68;
  if (local_60._4_4_ != iVar5 || local_68 != local_a0) {
    do {
      local_98 = plVar4;
      local_a8 = plVar15;
      local_ac = iVar5;
      lVar11 = *local_a8;
      lVar6 = (longlong)iVar14;
      uVar12 = *(uint *)(lVar11 + 0x10 + lVar6 * 0x28);
      uVar1 = *(uint *)(lVar11 + 0x14 + lVar6 * 0x28);
      uVar2 = *(uint *)(lVar11 + 0x18 + lVar6 * 0x28);
      uVar3 = *(uint *)(lVar11 + 0x1c + lVar6 * 0x28);
      plVar15 = (longlong *)(lVar11 + lVar6 * 0x28);
      local_88 = (undefined4)*plVar15;
      uStack_84 = *(undefined4 *)((longlong)plVar15 + 4);
      uStack_80 = (undefined4)plVar15[1];
      uStack_7c = *(undefined4 *)((longlong)plVar15 + 0xc);
      uVar10 = plVar15[1];
      uVar7 = *plVar15 + 0x9ae16a3b2f90404f;
      uVar7 = ((uVar7 << 0x27 | uVar7 >> 0x19) + uVar10) * -0x651e95c4d06fbf91;
      uVar10 = ((uVar10 << 0x1b | uVar10 >> 0x25) * -0x651e95c4d06fbf91 + *plVar15 +
                0x9ae16a3b2f90404f ^ uVar7) * -0x651e95c4d06fbf91;
      lVar11 = (uVar10 >> 0x2f ^ uVar7 ^ uVar10) * -0x651e95c4d06fbf91;
      iVar14 = ((uint)((ulonglong)lVar11 >> 0x2f) ^ (uint)lVar11) * 0x2f90406f;
      local_90 = uVar13;
      iVar5 = FUN_141309a2c(iVar14,&local_88);
      if ((iVar5 == -1) || (lVar11 = (longlong)iVar5 * 0x2c, DAT_14c895fe8 + lVar11 == 0)) {
        local_70 = &local_88;
        FUN_1458dc48c(&local_4c,iVar14,&local_70);
        lVar11 = (longlong)local_4c * 0x2c;
      }
      lVar11 = lVar11 + DAT_14c895fe8;
      *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) ^ uVar12;
      *(uint *)(lVar11 + 0x14) = *(uint *)(lVar11 + 0x14) ^ uVar1;
      *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) ^ uVar2;
      *(uint *)(lVar11 + 0x1c) = *(uint *)(lVar11 + 0x1c) ^ uVar3;
      uVar16 = uVar16 & ~(uint)uVar17;
      plVar15 = (longlong *)local_98[2];
      if ((longlong *)local_98[2] == (longlong *)0x0) {
        plVar15 = local_98;
      }
      iVar5 = (int)local_98[3];
      iVar14 = (int)local_90;
      lVar11 = (longlong)iVar14;
      uVar12 = *(uint *)((longlong)plVar15 + lVar11 * 4) & uVar16;
      uVar13 = local_90;
      if (uVar12 == 0) {
        iVar8 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar8 = iVar5 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar14) {
          iVar9 = iVar14;
        }
        if (iVar14 < iVar8) {
          lVar6 = 0;
          do {
            uVar12 = *(uint *)((longlong)plVar15 + lVar6 * 4 + lVar11 * 4 + 4);
            if (uVar12 != 0) {
              uVar16 = 0xffffffff;
              uVar13 = (ulonglong)(iVar14 + (int)lVar6 + 1);
              goto LAB_141309918;
            }
            iVar18 = iVar18 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar9 - lVar11 != lVar6);
          uVar16 = 0xffffffff;
          iVar14 = iVar9;
        }
        uVar13 = (ulonglong)(iVar14 + 1);
        iVar14 = iVar5;
      }
      else {
LAB_141309918:
        uVar17 = (ulonglong)(-uVar12 & uVar12);
        uVar10 = uVar17 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar14 = (iVar18 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar14) {
          iVar14 = iVar5;
        }
      }
      iVar5 = local_ac;
      plVar15 = local_a8;
      plVar4 = local_98;
    } while (iVar14 != local_ac || local_98 != local_a0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c895fc0);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141309a2c FUN_141309a2c body=127 status=ok
// SIG undefined FUN_141309a2c(void)

int FUN_141309a2c(uint param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (DAT_14c895ff0 != DAT_14c89601c) {
    puVar2 = &DAT_14c896020;
    if (DAT_14c896028 != (undefined *)0x0) {
      puVar2 = DAT_14c896028;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14c896030 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = (longlong)iVar1 * 0x2c;
        if ((((*(int *)(DAT_14c895fe8 + lVar3) == *param_2) &&
             (*(int *)(DAT_14c895fe8 + 4 + lVar3) == param_2[1])) &&
            (*(int *)(DAT_14c895fe8 + 8 + lVar3) == param_2[2])) &&
           (*(int *)(DAT_14c895fe8 + 0xc + lVar3) == param_2[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + DAT_14c895fe8 + 0x24);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 141309aac FUN_141309aac body=491 status=ok
// SIG undefined FUN_141309aac(void)

void FUN_141309aac(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c896028 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c896028,0,0,4);
  }
  uVar2 = DAT_14c896030;
  uVar3 = local_60;
  if (DAT_14c896030 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14c896020,0,DAT_14c896030,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14c896028;
        if (DAT_14c896028 == (undefined *)0x0) {
          puVar7 = &DAT_14c896020;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c896030 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14c895ff8;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14c896010 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14c895fe8;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar1 = *local_78;
        lVar9 = (longlong)iVar4 * 0x2c;
        iVar5 = FUN_1447addd0(lVar1 + lVar9,0x10);
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14c896030 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x28 + lVar9) = iVar5;
        puVar7 = DAT_14c896028;
        if (DAT_14c896028 == (undefined *)0x0) {
          puVar7 = &DAT_14c896020;
        }
        *(undefined4 *)(lVar1 + 0x24 + lVar9) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14c896030 - 1U & uVar6) * 4);
        puVar7 = DAT_14c896028;
        if (DAT_14c896028 == (undefined *)0x0) {
          puVar7 = &DAT_14c896020;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14c896030 - 1U) * 4) = iVar4;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141309c98 FUN_141309c98 body=40 status=ok
// SIG undefined FUN_141309c98(void)

undefined8 FUN_141309c98(undefined8 param_1,int param_2)

{
  FUN_141309cc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141309cc0 FUN_141309cc0 body=643 status=ok
// SIG undefined FUN_141309cc0(void)

void FUN_141309cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8d1990;
  param_1[0x72] = &PTR_FUN_14b8d2000;
  param_1[0x73] = &PTR_FUN_14b8d2020;
  param_1[0x74] = &PTR_FUN_14b8d2050;
  param_1[0x75] = &PTR_FUN_14b8d2060;
  param_1[0x76] = &PTR_FUN_14b8d20d0;
  param_1[0x77] = &PTR_FUN_14b8d2100;
  param_1[0x78] = &PTR_FUN_14b8d2130;
  param_1[0x7f] = &PTR_FUN_14b8d21e0;
  param_1[0x80] = &PTR_FUN_14b8d2250;
  param_1[0x81] = &PTR_FUN_14b8d22c0;
  param_1[0x82] = &PTR_FUN_14b8d22f0;
  param_1[0x83] = &PTR_FUN_14b8d2330;
  param_1[0x84] = &PTR_FUN_14b8d23d0;
  param_1[0x85] = &PTR_FUN_14b8d23f0;
  param_1[0x89] = &PTR_FUN_14b8d2410;
  param_1[0x8a] = &PTR_FUN_14b8d24d0;
  param_1[0x8b] = &PTR_FUN_14b8d2550;
  param_1[0x8c] = &PTR_FUN_14b8d25a0;
  param_1[0x8d] = &PTR_FUN_14b8d25e0;
  param_1[0x8e] = &PTR_FUN_14b8d2600;
  param_1[0x8f] = &PTR_FUN_14b8d2620;
  param_1[0x90] = &PTR_FUN_14b8d2640;
  param_1[0x91] = &PTR_FUN_14b8d2660;
  param_1[0x92] = &PTR_FUN_14b8d2680;
  param_1[0x93] = &PTR_FUN_14b8d26a0;
  param_1[0x94] = &PTR_FUN_14b8d26c0;
  param_1[0x95] = &PTR_FUN_14b8d26e0;
  param_1[0x96] = &PTR_FUN_14b8d2700;
  param_1[0x34b] = &PTR_FUN_14b8d2720;
  param_1[0x352] = &PTR_FUN_14b8d2730;
  param_1[0x353] = &PTR_FUN_14b8d2770;
  param_1[0x354] = &PTR_FUN_14b8d27b0;
  param_1[0x355] = &PTR_FUN_14b8d2800;
  param_1[0x356] = &PTR_FUN_14b8d2830;
  param_1[0x359] = &PTR_FUN_14b8d2870;
  param_1[0x35a] = &PTR_FUN_14b8d2880;
  param_1[0x35b] = &PTR_FUN_14b8d28b0;
  param_1[0x35c] = &PTR_FUN_14b8d2950;
  param_1[0x4bf] = &PTR_FUN_14b8d2970;
  param_1[0x4c8] = &PTR_FUN_14b8d2998;
  if (param_1[0x4d2] != 0) {
    FUN_1400020a8();
  }
  param_1[0x4bf] = &PTR_LAB_14b693f40;
  if (param_1[0x4c5] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 141309f44 FUN_141309f44 body=204 status=ok
// SIG undefined FUN_141309f44(void)

uint * FUN_141309f44(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
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
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 14130a010 FUN_14130a010 body=113 status=ok
// SIG undefined FUN_14130a010(void)

longlong * FUN_14130a010(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  plVar3 = param_2 + 2;
  plVar4 = param_1 + 2;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  return param_1;
}



// FUNCTION 14130a082 FUN_14130a082 body=39 status=ok
// SIG undefined FUN_14130a082(void)

undefined8 * FUN_14130a082(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aed3ef0;
  *(undefined4 *)(param_1 + 5) = 100;
  return param_1;
}



// FUNCTION 14130a0aa FUN_14130a0aa body=2004 status=ok
// SIG undefined FUN_14130a0aa(void)

void FUN_14130a0aa(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_141710108;
      local_a0 = 0x1000000000000000;
      local_a8 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_58 = (undefined4)uVar2;
      uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
  uStack_5c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1408a629c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_5c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_5c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_5c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_5c = (undefined4)uVar2;
      local_58 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_5c);
    }
  }
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1408a629c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_60 = (undefined4)uVar2;
      uStack_5c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_60);
    }
  }
  local_68 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1468d96f0;
      local_a0 = 0;
      local_a8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_68);
    }
  }
  local_70 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1409e12a0;
      local_a0 = 0;
      local_a8 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_70);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_70);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_70 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_70);
    }
  }
  uVar6 = uStack_5c;
  uVar5 = local_60;
  uVar4 = local_68;
  uVar2 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = CONCAT44(uStack_54,local_58);
  uVar7 = FUN_14477b664(uStack_50);
  local_80 = FUN_14477b664(uVar7);
  local_78 = local_48;
  local_a8 = uVar2;
  FUN_14130a880(&local_88,uVar6,uVar5,uVar4);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130a880 FUN_14130a880 body=522 status=ok
// SIG undefined FUN_14130a880(void)

void FUN_14130a880(longlong *param_1,undefined4 param_2,float param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == 0) goto LAB_14130a9b5;
  FUN_14026e798(&local_60,param_4);
  if (local_60 != 0) {
    FUN_1403c747e(local_60,&local_68,param_5);
    plVar1 = local_68;
    if (local_68 != (longlong *)0x0) {
      lVar7 = param_1[1];
      if (lVar7 == 0) {
        if (DAT_14cb256c8 == 0) {
          uVar5 = FUN_140cd185c();
          DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar5,L"WwiseGameParameterDef");
        }
        lVar7 = FUN_14477b664(DAT_14cb256c8);
        param_1[1] = lVar7;
      }
      lVar6 = param_1[2];
      if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*param_1 != 0)) {
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_14130aa22:
          lVar6 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar4 == '\0') goto LAB_14130aa22;
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar6 = FUN_144aff482(uVar5,param_1);
        }
        param_1[2] = lVar6;
      }
      local_78 = 0;
      FUN_1447997cc(plVar1,lVar6,param_2,(int)(param_3 * 1000.0));
      if ((local_68 != (longlong *)0x0) &&
         (*(int *)(local_68 + 0x21) = (int)local_68[0x21] + -1, (int)local_68[0x26] < 1)) {
        FUN_1400847bc(local_68 + 0x17,0);
        if ((int)local_68[0x21] == 0) {
          FUN_140087e46(local_68);
          if (*local_68 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_14130a9a5;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_68);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_68);
          }
        }
      }
    }
  }
LAB_14130a9a5:
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
LAB_14130a9b5:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130aa8c FUN_14130aa8c body=138 status=ok
// SIG undefined FUN_14130aa8c(void)

void FUN_14130aa8c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140da334e();
  FUN_14130ab18(param_1);
  FUN_1407f65cc(&local_28,param_1);
  if (local_28 != 0) {
    FUN_1458de456();
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130ab18 FUN_14130ab18 body=376 status=ok
// SIG undefined FUN_14130ab18(void)

void FUN_14130ab18(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x2d90) != 0) {
    if ((longlong)*(int *)(param_1 + 0x2da8) != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x2da0) + lVar5) == 0) goto LAB_14130ac6c;
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(param_1 + 0x2da8) * 8 != lVar5);
    }
    if (*(longlong *)(param_1 + 0x2c70) != 0) {
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14b95ea80;
      local_68[0] = &LAB_1440c2460;
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      local_40 = param_1;
      FUN_140255853(param_1 + 0x2d90,1,local_68,&local_78);
      if ((longlong)(int)uStack_70 == 0) {
        uVar6 = 0;
      }
      else {
        puVar8 = local_78 + (longlong)(int)uStack_70 * 2;
        puVar7 = local_78;
        do {
          plVar2 = (longlong *)*puVar7;
          plVar3 = (longlong *)puVar7[1];
          if (plVar3 == (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x30))(plVar2,param_1,3);
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            (**(code **)(*plVar2 + 0x30))(plVar2,param_1,3);
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
          puVar7 = puVar7 + 2;
        } while (puVar7 != puVar8);
        uVar6 = uStack_70 & 0xffffffff;
      }
      FUN_140255aed(local_78,uVar6);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar4 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar4 = &local_48;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
  }
LAB_14130ac6c:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130ac92 FUN_14130ac92 body=52 status=ok
// SIG undefined FUN_14130ac92(void)

ulonglong FUN_14130ac92(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 0x178) != '\x03') {
    if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x700))();
      if (cVar1 != '\0') goto LAB_14130acbe;
    }
    uVar2 = 0;
  }
LAB_14130acbe:
  return uVar2 & 0xffffffff;
}



// FUNCTION 14130acc6 FUN_14130acc6 body=505 status=ok
// SIG undefined FUN_14130acc6(void)

void FUN_14130acc6(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar10 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar5 = (int)local_60[3];
  iVar14 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar11 = local_50;
  if (local_58._4_4_ < iVar5) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + 8 + (longlong)iVar7 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
        iVar5 = (int)plVar4[3];
      }
      uVar13 = uVar13 & ~(uint)uVar10;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_14130ae00;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar13 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_14130ae00:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar13) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar13) {
      uVar6 = uVar13;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130aec2 FUN_14130aec2 body=523 status=ok
// SIG undefined FUN_14130aec2(void)

void FUN_14130aec2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c966e30 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c966e30,0,0,4);
  }
  uVar3 = DAT_14c966e38;
  uVar2 = local_50;
  if (DAT_14c966e38 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c966e28,0,DAT_14c966e38,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c966e30;
        if (DAT_14c966e30 == (undefined *)0x0) {
          puVar6 = &DAT_14c966e28;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c966e38 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c966e00;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c966e18 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c966df0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x28);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c966e38 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x24 + lVar5 * 0x28) = iVar8;
        puVar6 = DAT_14c966e30;
        if (DAT_14c966e30 == (undefined *)0x0) {
          puVar6 = &DAT_14c966e28;
        }
        *(undefined4 *)(lVar1 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c966e38 - 1U & uVar9) * 4);
        puVar6 = DAT_14c966e30;
        if (DAT_14c966e30 == (undefined *)0x0) {
          puVar6 = &DAT_14c966e28;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c966e38 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14130b0ce FUN_14130b0ce body=843 status=ok
// SIG undefined FUN_14130b0ce(void)

void FUN_14130b0ce(longlong *param_1,uint param_2,char param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 uVar10;
  undefined1 auStack_b8 [32];
  int local_98;
  uint local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((int)param_2 < 0) || (uVar8 = (ulonglong)param_2, (int)param_1[0xf1e] <= (int)param_2)) ||
     (uVar3 = FUN_14042831e(param_1), (int)param_1[0xf1e] <= (int)param_2)) {
LAB_14130b228:
    if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar7 = param_1[0xf1d];
  lVar9 = uVar8 * 0x48 + lVar7;
  if (lVar9 == 0) goto LAB_14130b228;
  if (*(int *)(lVar9 + 0xc) == -1) {
    if (param_3 == '\0') goto LAB_14130b228;
    uVar4 = FUN_1459b76c0(0);
    iVar5 = FUN_1459b76c0(3);
    param_2 = uVar4;
    if ((int)uVar4 <= iVar5) {
      do {
        uVar8 = (ulonglong)param_2;
        if (((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0xf1e])) &&
           (lVar7 = param_1[0xf1d], *(int *)(lVar7 + 0xc + uVar8 * 0x48) != -1)) goto LAB_14130b148;
        iVar5 = FUN_1459b76c0(3);
        bVar1 = (int)param_2 < iVar5;
        param_2 = param_2 + 1;
      } while (bVar1);
    }
    if (uVar4 != uVar3) {
      FUN_141020220(param_1,uVar4);
      cVar2 = (**(code **)(*param_1 + 0x700))(param_1);
      if (cVar2 == '\0') {
        uVar6 = FUN_14042831e(param_1);
        FUN_1461bbcca(param_1,uVar6);
      }
    }
    if ((char)param_1[0x2f] != '\x03') {
      local_98 = (uint)local_98._1_3_ << 8;
      lVar7 = 0;
      local_90 = uVar4;
      goto LAB_14130b35a;
    }
    local_98 = (uint)local_98._1_3_ << 8;
    lVar7 = 0;
  }
  else {
LAB_14130b148:
    lVar7 = *(longlong *)(lVar7 + 0x20 + uVar8 * 0x48);
    if (lVar7 == 0) goto LAB_14130b228;
    if (DAT_14cb939a8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_140940982;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_146522c26;
      local_68 = &LAB_148a0db91;
      local_70 = &LAB_146572ba7;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0xdd8;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if ((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cb939a8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) != DAT_14cb939a8 + 0x30)) ||
        ((*(longlong *)(lVar7 + 0xd60) != DAT_14cb95120 &&
         ((*(longlong *)(lVar7 + 0xd60) != DAT_14cb94e38 && (*(longlong *)(lVar7 + 0xba0) == 0))))))
       || (((char)param_1[0x2f] == '\x03' && ((*(byte *)(lVar7 + 0x3e0) & 2) == 0))))
    goto LAB_14130b228;
    if (param_2 != uVar3) {
      FUN_141020220(param_1,param_2);
      cVar2 = (**(code **)(*param_1 + 0x700))(param_1);
      if (cVar2 == '\0') {
        uVar6 = FUN_14042831e(param_1);
        FUN_1461bbcca(param_1,uVar6);
      }
    }
    if ((char)param_4 == '\0') {
      uVar10 = 0;
    }
    else {
      lVar9 = FUN_1407afa82(param_1);
      if ((lVar9 == 0) || (lVar9 = FUN_1407afa82(param_1), *(char *)(lVar9 + 0x9a0) == '\0')) {
        uVar10 = 0;
        cVar2 = FUN_1403ae2fa(param_1 + 0xc1d,3,0);
        if (cVar2 != '\0') goto LAB_14130b254;
      }
      uVar10 = 1;
    }
LAB_14130b254:
    if ((char)param_1[0x2f] != '\x03') {
      local_98 = CONCAT31(local_98._1_3_,uVar10);
      local_90 = param_2;
LAB_14130b35a:
      FUN_1465cf5d6(param_1,lVar7,0,param_4);
      goto LAB_14130b2cd;
    }
    local_98 = CONCAT31(local_98._1_3_,uVar10);
  }
  FUN_141145750(param_1,lVar7,0,param_4);
LAB_14130b2cd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14130b420 FUN_14130b420 body=55 status=ok
// SIG undefined FUN_14130b420(void)

void FUN_14130b420(longlong *param_1)

{
  FUN_14130b458(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14130b458 FUN_14130b458 body=121 status=ok
// SIG undefined FUN_14130b458(void)

void FUN_14130b458(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140957390(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14130b4d2 FUN_14130b4d2 body=504 status=ok
// SIG undefined FUN_14130b4d2(void)

void FUN_14130b4d2(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._4_4_ = 0;
    plVar13 = local_60;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    local_70 = local_60;
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
    plVar13 = local_70;
    uVar12 = (uint)local_58;
    iVar14 = (int)local_68;
  }
  plVar3 = local_60;
  iVar4 = (int)local_60[3];
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar4 = (int)plVar3[3];
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar14;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar14) {
          iVar2 = iVar14;
        }
        if (iVar6 <= iVar14) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_14130b5f3;
        }
        iVar14 = iVar14 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_14130b5f3:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar13,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130b6cc FUN_14130b6cc body=14 status=ok
// SIG undefined FUN_14130b6cc(void)

undefined4 * FUN_14130b6cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x1000001;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// FUNCTION 14130b6da FUN_14130b6da body=82 status=ok
// SIG undefined FUN_14130b6da(void)

void FUN_14130b6da(longlong param_1)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_18 = &LAB_1436221ea;
  FUN_144966906(param_1 + 0x138);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130b72e FUN_14130b72e body=582 status=ok
// SIG undefined FUN_14130b72e(void)

void FUN_14130b72e(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_4a8 [32];
  undefined4 local_488;
  undefined1 local_480 [416];
  undefined8 auStack_2e0 [6];
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined4 auStack_2a4 [3];
  undefined8 uStack_298;
  undefined4 auStack_290 [2];
  undefined8 auStack_288 [2];
  undefined4 uStack_278;
  undefined2 auStack_274 [2];
  undefined8 local_270;
  uint local_268 [28];
  undefined4 local_1f8;
  undefined4 local_178;
  undefined4 local_f8;
  undefined4 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if ((param_2 < 2) &&
     (((param_6 != '\0' || ((char)param_1[(ulonglong)param_2 * 0x42 + 6] != '\x01')) ||
      ((param_3 != (undefined8 *)0x0 && (*(char *)(param_3 + 1) == '\x01')))))) {
    local_270 = 0;
    local_268[0] = local_268[0] & 0xffffff00;
    lVar2 = 0x80;
    do {
      *(undefined8 *)((longlong)auStack_2e0 + lVar2 + 0x28) = 0;
      *(undefined4 *)((longlong)&uStack_2b0 + lVar2) = 0;
      *(undefined8 *)((longlong)auStack_2e0 + lVar2 + 8) = 0;
      *(undefined8 *)((longlong)auStack_2e0 + lVar2 + 0x10) = 0;
      *(undefined8 *)((longlong)&uStack_2ac + lVar2) = 0xffffffff00000080;
      *(undefined4 *)((longlong)auStack_2a4 + lVar2) = 0;
      *(undefined8 *)((longlong)&uStack_298 + lVar2) = 0;
      *(undefined4 *)((longlong)auStack_290 + lVar2) = 0;
      *(undefined8 *)((longlong)auStack_288 + lVar2) = 0;
      *(undefined8 *)((longlong)auStack_288 + lVar2 + 8) = 0;
      *(undefined4 *)((longlong)&uStack_278 + lVar2) = 0x7f7fffff;
      *(undefined2 *)((longlong)auStack_274 + lVar2) = 0x404;
      *(undefined **)((longlong)auStack_2e0 + lVar2) = &DAT_14a176f00;
      *(undefined8 *)((longlong)local_268 + lVar2 + -8) = 0;
      *(undefined8 *)((longlong)local_268 + lVar2) = 0;
      lVar2 = lVar2 + 0x80;
    } while (lVar2 != 0x280);
    if (param_3 == (undefined8 *)0x0) {
      local_1f8 = (undefined4)param_1[3];
      local_178 = *(undefined4 *)((longlong)param_1 + 0x1c);
      local_f8 = (undefined4)param_1[4];
      local_78 = *(undefined4 *)((longlong)param_1 + 0x24);
    }
    else {
      local_268[0] = *(uint *)(param_3 + 1);
      local_270 = *param_3;
      lVar2 = 4;
      puVar1 = &local_270;
      do {
        *(undefined2 *)((longlong)puVar1 + 0x7c) = *(undefined2 *)((longlong)param_3 + 0x7c);
        *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(param_3 + 0xf);
        FUN_14093c00e(puVar1 + 0x10,param_3 + 0x10);
        lVar2 = lVar2 + -1;
        param_3 = param_3 + 0x10;
        puVar1 = puVar1 + 0x10;
      } while (lVar2 != 0);
    }
    local_488 = param_5;
    FUN_14130b975(local_480,param_1 + (ulonglong)param_2 * 0x42 + 5,&local_270,param_4);
    (**(code **)(*param_1 + 0x28))(param_1,param_2,local_480);
    FUN_140b623da(local_480);
    FUN_140b623da(&local_270);
  }
  if ((local_60 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14130b975 FUN_14130b975 body=888 status=ok
// SIG undefined FUN_14130b975(void)

undefined8 *
FUN_14130b975(undefined8 *param_1,longlong param_2,undefined8 *param_3,float param_4,float param_5)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  int local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *param_1 = *param_3;
  local_d0 = param_1 + 2;
  local_d8 = param_3 + 2;
  lVar4 = 0;
  local_e8 = param_2;
  local_e0 = param_1;
  do {
    *(undefined8 *)((longlong)param_1 + lVar4 + 0x38) = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + 0x40) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar4 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar4 + 0x44) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar4 + 0x4c) = 0;
    *(undefined8 *)((longlong)param_1 + lVar4 + 0x58) = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + 0x60) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar4 + 0x68);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + 0x78) =
         *(undefined4 *)((longlong)param_3 + lVar4 + 0x78);
    *(undefined2 *)((longlong)param_1 + lVar4 + 0x7c) =
         *(undefined2 *)((longlong)param_3 + lVar4 + 0x7c);
    *(undefined **)((longlong)param_1 + lVar4 + 0x10) = &DAT_14a176f00;
    *(undefined8 *)((longlong)param_1 + lVar4 + 0x80) = 0;
    iVar2 = *(int *)((longlong)param_3 + lVar4 + 0x88);
    _Src = *(void **)((longlong)param_3 + lVar4 + 0x80);
    *(int *)((longlong)param_1 + lVar4 + 0x88) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + lVar4 + 0x8c) = 0;
    }
    else {
      FUN_140501c24((longlong)param_1 + lVar4 + 0x80,iVar2,0);
      memcpy(*(void **)((longlong)param_1 + lVar4 + 0x80),_Src,(longlong)iVar2 * 0x1c);
    }
    lVar4 = lVar4 + 0x80;
  } while (lVar4 != 0x200);
  lVar4 = local_e8 + 0x10;
  param_5 = param_5 + param_4;
  lVar5 = 0;
  do {
    uVar6 = FUN_1448c9f94(lVar4 + lVar5 * 0x80,param_4,0);
    puVar1 = local_d0 + lVar5 * 0x10;
    LOCK();
    UNLOCK();
    local_f0 = DAT_14c761474 + 1;
    local_f8 = 0;
    DAT_14c761474 = DAT_14c761474 + 1;
    FUN_1406507bc(puVar1,&local_b4,param_4,uVar6);
    uVar7 = FUN_1448c9f94(local_d8 + lVar5 * 0x10,param_5,0);
    LOCK();
    UNLOCK();
    local_f0 = DAT_14c761474 + 1;
    local_f8 = 0;
    DAT_14c761474 = DAT_14c761474 + 1;
    FUN_1406507bc(puVar1,&local_b8,param_5,uVar7);
    iVar3 = local_b4;
    iVar2 = local_b8;
    if (local_b4 != local_b8) {
      while (FUN_140f40076(puVar1,&local_bc,iVar3), local_bc != iVar2) {
        FUN_147a41244(puVar1);
      }
    }
    if (1.0 < param_5) {
      LOCK();
      UNLOCK();
      local_f0 = DAT_14c761474 + 1;
      local_f8 = 0;
      DAT_14c761474 = DAT_14c761474 + 1;
      local_e8 = lVar4;
      FUN_1406507bc(puVar1,&local_bc,param_4 + -1.0,uVar6);
      LOCK();
      UNLOCK();
      local_f0 = DAT_14c761474 + 1;
      local_f8 = 0;
      DAT_14c761474 = DAT_14c761474 + 1;
      FUN_1406507bc(puVar1,&local_c0,param_5 + -1.0,uVar7);
      iVar3 = local_bc;
      iVar2 = local_c0;
      lVar4 = local_e8;
      if ((local_bc != local_c0) &&
         (FUN_140f40076(puVar1,&local_c4,local_bc), lVar4 = local_e8, local_c4 != iVar2)) {
        do {
          FUN_147a41244(puVar1);
          FUN_140f40076(puVar1,&local_c4,iVar3);
          lVar4 = local_e8;
        } while (local_c4 != iVar2);
      }
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_e0;
}



// FUNCTION 14130bcee FUN_14130bcee body=434 status=ok
// SIG undefined FUN_14130bcee(void)

void FUN_14130bcee(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(int *)(param_1 + 0x29c) < 0) {
    FUN_147501f64(param_1 + 0x290);
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  if (*(int *)(param_1 + 0x28c) < 0) {
    FUN_1447a8aa0(param_1 + 0x280);
  }
  uVar1 = *(uint *)(param_1 + 0x150);
  if (1 < (longlong)(int)uVar1) {
    iVar2 = *(int *)(param_1 + 0x298);
    *(uint *)(param_1 + 0x298) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x29c) - iVar2) < uVar1) {
      FUN_14130bea0(param_1 + 0x290);
    }
    memset((void *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x290)),0,
           (longlong)(int)uVar1 << 2);
    uVar1 = *(uint *)(param_1 + 0x150);
    iVar2 = *(int *)(param_1 + 0x288);
    *(uint *)(param_1 + 0x288) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x28c) - iVar2) < uVar1) {
      FUN_1403e3958(param_1 + 0x280);
    }
    memset((void *)((longlong)iVar2 * 0x18 + *(longlong *)(param_1 + 0x280)),0,
           (longlong)(int)uVar1 * 0x18);
    iVar2 = *(int *)(param_1 + 0x150);
    if (iVar2 < 2) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = 1.0 / (float)(iVar2 + -1);
    }
    lVar4 = *(longlong *)(param_1 + 0x1e0) + 0x30;
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      lVar4 = param_1 + 0x160;
    }
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        uVar5 = FUN_1448c9f94(lVar4,(float)(int)lVar3 * fVar6,0);
        *(undefined4 *)(*(longlong *)(param_1 + 0x290) + lVar3 * 4) = uVar5;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x150));
    }
  }
  *(undefined1 *)(param_1 + 0x1eb) = 0;
  return;
}



// FUNCTION 14130bea0 FUN_14130bea0 body=353 status=ok
// SIG undefined FUN_14130bea0(void)

void FUN_14130bea0(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14130bf25;
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
LAB_14130bf25:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14130c001 FUN_14130c001 body=49 status=ok
// SIG undefined FUN_14130c001(void)

void FUN_14130c001(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14130c032 FUN_14130c032 body=144 status=ok
// SIG undefined FUN_14130c032(void)

undefined8 * FUN_14130c032(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0xff;
  *param_1 = &PTR_FUN_14abe6c20;
  param_1[5] = &PTR_LAB_14abe6f50;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0x47;
  return param_1;
}



// FUNCTION 14130c0c2 FUN_14130c0c2 body=310 status=ok
// SIG undefined FUN_14130c0c2(void)

longlong * FUN_14130c0c2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb72610;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130c340 FUN_14130c340 body=228 status=ok
// SIG undefined FUN_14130c340(void)

longlong FUN_14130c340(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1b8b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1433d5220;
    local_20 = FUN_142b32f24;
    local_28 = &LAB_1462ac430;
    local_38 = &LAB_147e2d843;
    local_40 = &LAB_14575c78a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x570;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavAnimInstance",&DAT_14cb1b8b8,&DAT_147e2d842);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b8b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130c426 FUN_14130c426 body=417 status=ok
// SIG undefined FUN_14130c426(void)

void FUN_14130c426(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee34c0;
  param_1[0x70] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x84];
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
  param_1[0x5a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x6e];
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
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x00014130c5c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14130c5c8 FUN_14130c5c8 body=228 status=ok
// SIG undefined FUN_14130c5c8(void)

longlong FUN_14130c5c8(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbae5a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14594bf7e;
    local_38 = &LAB_148c3dd6f;
    local_40 = &LAB_145a0ae5c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3a8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakProfileProgressVault",&DAT_14cbae5a8,&DAT_148c3dd6e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae5a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130c6ae FUN_14130c6ae body=228 status=ok
// SIG undefined FUN_14130c6ae(void)

longlong FUN_14130c6ae(void)

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
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba6460 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465c6c9a;
    local_28 = &LAB_145978afe;
    local_38 = &LAB_148be6841;
    local_40 = FUN_145ae598f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1b0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakActiveProfile",&DAT_14cba6460,&DAT_148be6840);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba6460;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130c794 FUN_14130c794 body=756 status=ok
// SIG undefined FUN_14130c794(void)

void FUN_14130c794(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x278) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x270);
    lVar6 = (longlong)*(int *)(param_1 + 0x278) << 3;
    do {
      if (((*(char *)(*plVar7 + 0x40) == '\x04') &&
          (cVar2 = FUN_143e66a42(*plVar7 + 0xc,param_2), cVar2 != '\0')) &&
         (puVar4 = (undefined8 *)*plVar7, *(char *)(puVar4 + 0xc) == param_4)) {
        if (plVar7 != (longlong *)0x0) goto LAB_14130c99f;
        break;
      }
      plVar7 = plVar7 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x268) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x260);
    lVar6 = (longlong)*(int *)(param_1 + 0x268) << 3;
    do {
      if (((*(char *)(*plVar7 + 0x40) == '\x04') &&
          (cVar2 = FUN_143e66a42(*plVar7 + 0xc,param_2), cVar2 != '\0')) &&
         (puVar4 = (undefined8 *)*plVar7, *(char *)(puVar4 + 0xc) == param_4)) {
        if (plVar7 != (longlong *)0x0) goto LAB_14130c99f;
        break;
      }
      plVar7 = plVar7 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
LAB_14130c851:
  puVar4 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  iVar3 = *(int *)(param_1 + 0x25c);
  *(int *)(param_1 + 0x25c) = iVar3 + 1;
  *puVar4 = &PTR_FUN_14b433f68;
  *(int *)(puVar4 + 1) = iVar3;
  *(undefined4 *)(puVar4 + 2) = 0;
  if (param_2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)((longlong)puVar4 + 0xc) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
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
  *(int *)(puVar4 + 2) = iVar3;
  FUN_1447a97f4(puVar4 + 3,&DAT_14c9485f0);
  *(undefined1 *)(puVar4 + 8) = 4;
  *puVar4 = &PTR_FUN_14b434010;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 2;
  *(char *)(puVar4 + 0xc) = param_4;
  iVar3 = *(int *)(param_1 + 0x268);
  *(uint *)(param_1 + 0x268) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x26c) < iVar3 + 1U) {
    FUN_145840b16((longlong *)(param_1 + 0x260),iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x260) + (longlong)iVar3 * 8) = puVar4;
LAB_14130c92f:
  if (((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) &&
     (cVar2 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar2 != '\0')) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_145a21d22(&local_58,param_3);
    FUN_1458f82a8(puVar4 + 9,local_60,&local_58);
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_14130c94d;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14130c94d:
  FUN_140f1049c(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14130c99f:
  if (puVar4 == (undefined8 *)0x0) goto LAB_14130c851;
  goto LAB_14130c92f;
}



// FUNCTION 14130ca8a FUN_14130ca8a body=48 status=ok
// SIG undefined FUN_14130ca8a(void)

void FUN_14130ca8a(longlong param_1,undefined8 *param_2,byte param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((int)(uint)param_3 < *(int *)(param_1 + 0x30)) {
    puVar2 = (undefined8 *)((ulonglong)param_3 * 0x170 + *(longlong *)(param_1 + 0x28));
  }
  else {
    if (param_4 == '\0') {
      uVar1 = 0;
      goto LAB_14130caa7;
    }
    puVar2 = (undefined8 *)(param_1 + 0x38);
  }
  uVar1 = *puVar2;
LAB_14130caa7:
  *param_2 = uVar1;
  return;
}



// FUNCTION 14130caba FUN_14130caba body=3741 status=ok
// SIG undefined FUN_14130caba(void)

/* WARNING: Removing unreachable block (ram,0x00014130d622) */

void FUN_14130caba(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  bool bVar22;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  longlong *local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  longlong *local_210;
  longlong *local_208;
  undefined4 local_200;
  longlong *local_1f8;
  undefined4 local_1f0;
  longlong *local_1e8 [2];
  longlong *local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  ulonglong *local_198;
  undefined1 *local_190;
  longlong *local_188;
  undefined8 local_180;
  code *local_178 [2];
  undefined8 local_168;
  undefined **local_158;
  longlong local_150;
  longlong local_138;
  int local_130;
  undefined1 local_128 [24];
  longlong local_110;
  longlong *local_f8;
  undefined4 local_f0;
  int local_e8;
  longlong *local_e0 [2];
  int local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  int local_b8;
  char local_b0;
  int local_ac;
  ulonglong local_a8;
  undefined8 uStack_a0;
  longlong *local_98 [2];
  undefined4 local_88;
  int local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar18 = *(longlong *)(param_2 + 0x10);
  iVar2 = *(int *)(lVar18 + 0x6c);
  FUN_140dd8e91(*(undefined8 *)(lVar18 + 0x60),*(undefined4 *)(lVar18 + 0x68));
  *(undefined4 *)(lVar18 + 0x68) = 0;
  if ((iVar2 < 0) && (*(int *)(lVar18 + 0x6c) != 0)) {
    FUN_148e536da(lVar18 + 0x60,0);
  }
  *(int *)(lVar18 + 0x70) = *(int *)(lVar18 + 0x70) + 1;
  lVar18 = *(longlong *)(param_2 + 0x10);
  iVar2 = *(int *)(lVar18 + 0x94);
  FUN_140dd8e91(*(undefined8 *)(lVar18 + 0x88),*(undefined4 *)(lVar18 + 0x90));
  *(undefined4 *)(lVar18 + 0x90) = 0;
  if ((iVar2 < 0) && (*(int *)(lVar18 + 0x94) != 0)) {
    FUN_148e536da(lVar18 + 0x88,0);
  }
  *(int *)(lVar18 + 0x98) = *(int *)(lVar18 + 0x98) + 1;
  if (0 < *(int *)(param_3 + 0x30)) {
    local_220 = param_1 + 0x44;
    lVar18 = 0;
    local_248 = param_1;
    local_240 = param_3;
    local_230 = param_2;
    do {
      local_228 = 0x60;
      if (*(char *)(*(longlong *)(param_3 + 0x28) + 0x28 + lVar18 * 0x170) == '\x01') {
        uVar10 = (int)lVar18 - *(int *)(param_3 + 0x20);
        if ((int)uVar10 < 0) {
          bVar22 = false;
        }
        else {
          bVar22 = uVar10 < **(uint **)(param_2 + 0x10);
          local_228 = 0x88;
        }
      }
      else {
        bVar22 = true;
      }
      plVar21 = (longlong *)(*(longlong *)(param_3 + 0x28) + lVar18 * 0x170);
      FUN_14130dac8(&local_138);
      if (local_130 == 0 || *plVar21 != local_138) {
        local_130 = local_130 + 1;
        local_138 = *plVar21;
      }
      if (local_ac == 0 || bVar22 != (bool)local_b0) {
        local_ac = local_ac + 1;
        local_b0 = bVar22;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
        param_2 = local_230;
        param_3 = local_240;
        param_1 = local_248;
      }
      local_1b8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      local_1b0 = DAT_14c844848;
      FUN_140ac6c96(&DAT_14cbd88a0,&local_1b8);
      lVar12 = plVar21[10];
      if (lVar12 == 0) {
        uVar7 = FUN_1465f8f8a();
        lVar12 = FUN_14477b664(uVar7);
        plVar21[10] = lVar12;
      }
      local_238 = plVar21 + 9;
      lVar17 = plVar21[0xb];
      if (lVar17 == 0) {
        if ((lVar12 != 0) && (*local_238 != 0)) {
          plVar3 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
            plVar21[0xb] = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar17 = FUN_144aff482(uVar7,local_238);
            plVar21[0xb] = lVar17;
            if (lVar17 != 0) {
              lVar12 = plVar21[10];
              goto LAB_14130ccb1;
            }
          }
        }
      }
      else {
LAB_14130ccb1:
        if (lVar12 == 0) {
          uVar7 = FUN_1465f8f8a();
          lVar12 = FUN_14477b664(uVar7);
          plVar21[10] = lVar12;
          lVar17 = plVar21[0xb];
          if (((lVar17 == 0) && (lVar17 = 0, param_3 = local_240, param_1 = local_248, lVar12 != 0))
             && (*local_238 != 0)) {
            plVar3 = *(longlong **)(lVar12 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
              lVar17 = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar17 = FUN_144aff482(uVar7,local_238);
            }
            plVar21[0xb] = lVar17;
            param_3 = local_240;
            param_1 = local_248;
          }
        }
        if (local_e8 == 0) {
LAB_14130d298:
          plVar5 = local_f8;
          plVar3 = *(longlong **)(lVar17 + 0x18);
          if (local_f8 != plVar3) {
            local_f8 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          local_f0 = *(undefined4 *)(lVar17 + 0x20);
          local_e8 = local_e8 + 1;
        }
        else {
          cVar6 = FUN_144722c14(&local_f8,(undefined8 *)(lVar17 + 0x18),0);
          if (cVar6 == '\0') goto LAB_14130d298;
        }
        FUN_14130d958(local_128,&DAT_14c9485f0);
        lVar12 = plVar21[10];
        if (lVar12 == 0) {
          uVar7 = FUN_1465f8f8a();
          lVar12 = FUN_14477b664(uVar7);
          plVar21[10] = lVar12;
        }
        lVar17 = plVar21[0xb];
        if (((lVar17 == 0) && (lVar17 = 0, param_3 = local_240, param_1 = local_248, lVar12 != 0))
           && (*local_238 != 0)) {
          plVar3 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
            lVar17 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar17 = FUN_144aff482(uVar7,local_238);
          }
          plVar21[0xb] = lVar17;
          param_3 = local_240;
          param_1 = local_248;
        }
        if (local_b8 == 0) {
LAB_14130d2df:
          plVar5 = local_c8;
          plVar3 = *(longlong **)(lVar17 + 0x38);
          if (local_c8 != plVar3) {
            local_c8 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          local_c0 = *(undefined4 *)(lVar17 + 0x40);
          local_b8 = local_b8 + 1;
        }
        else {
          cVar6 = FUN_144722c14(&local_c8,(undefined8 *)(lVar17 + 0x38),0);
          if (cVar6 == '\0') goto LAB_14130d2df;
        }
        local_1c8 = 0;
        uStack_1c0 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
          param_3 = local_240;
          param_1 = local_248;
        }
        local_1d8 = DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          (**(code **)(*DAT_14c844840 + 8))();
        }
        local_1d0 = DAT_14c844848;
        lVar12 = plVar21[10];
        if (lVar12 == 0) {
          uVar7 = FUN_1465f8f8a();
          lVar12 = FUN_14477b664(uVar7);
          plVar21[10] = lVar12;
        }
        lVar17 = plVar21[0xb];
        if (((lVar17 == 0) && (lVar17 = 0, param_3 = local_240, param_1 = local_248, lVar12 != 0))
           && (*local_238 != 0)) {
          plVar3 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
            lVar17 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar17 = FUN_144aff482(uVar7,local_238);
          }
          plVar21[0xb] = lVar17;
          param_3 = local_240;
          param_1 = local_248;
        }
        iVar2 = *(int *)(lVar17 + 0x50);
        if ((longlong)iVar2 != 0) {
          lVar12 = *(longlong *)(lVar17 + 0x48);
          lVar17 = 0;
          do {
            if (*(longlong *)(lVar12 + lVar17) != 0) {
              local_a8 = local_a8 & 0xffffffffffffff00;
              local_80 = 0;
              uVar7 = FUN_140059518(local_220);
              FUN_1456bb102(&local_a8,uVar7);
              plVar3 = *(longlong **)(lVar12 + lVar17);
              local_168 = 0;
              local_158 = &PTR_LAB_14b9b8900;
              local_178[0] = FUN_1442a9b14;
              local_150 = param_1;
              (**(code **)(*plVar3 + 0x10))(plVar3,&local_188,&local_a8,local_178);
              lVar14 = (longlong)(int)uStack_1c0;
              uVar10 = (int)uStack_1c0 + 1;
              uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar10);
              if (uStack_1c0._4_4_ < uVar10) {
                FUN_1447a1bd6(&local_1c8);
              }
              lVar14 = lVar14 * 0x10;
              *(undefined8 *)(local_1c8 + lVar14) = 0;
              *(longlong **)(local_1c8 + lVar14) = local_188;
              *(undefined4 *)(local_1c8 + 8 + lVar14) = (undefined4)local_180;
              *(undefined4 *)(local_1c8 + 0xc + lVar14) = local_180._4_4_;
              lVar14 = DAT_14c9a3da0;
              local_180 = 0;
              local_188 = (longlong *)0x0;
              if ((longlong)local_80 != 0) {
                lVar15 = (longlong)local_80 + -1;
                lVar20 = lVar15 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
                if (*(longlong *)(lVar14 + lVar20) != 0) {
                  FUN_1400020a8();
                }
                lVar14 = DAT_14c9a3da0;
                iVar13 = (int)lVar15;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
                }
                *(undefined4 *)(lVar14 + lVar20) = 0xffffffff;
                iVar11 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar11 = DAT_14c9a3dd0;
                }
                *(int *)(lVar14 + 4 + lVar20) = iVar11;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar8 = DAT_14c9a3dc0;
                if (DAT_14c9a3dc0 == (undefined *)0x0) {
                  puVar8 = &DAT_14c9a3db0;
                }
                iVar11 = iVar13 + 0x1f;
                if (-1 < iVar13) {
                  iVar11 = iVar13;
                }
                bVar4 = (byte)lVar15 & 0x1f;
                DAT_14c9a3dd0 = iVar13;
                *(uint *)(puVar8 + (longlong)(iVar11 >> 5) * 4) =
                     *(uint *)(puVar8 + (longlong)(iVar11 >> 5) * 4) &
                     (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
                local_80 = 0;
                param_3 = local_240;
                param_1 = local_248;
              }
              if (((char)local_a8 == '\x03') && (local_98[0] != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_98[0] + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_98[0] + 0x10))();
                }
              }
            }
            lVar17 = lVar17 + 0x18;
          } while ((longlong)iVar2 * 0x18 != lVar17);
        }
        lVar12 = local_1c8;
        lVar17 = (longlong)(int)uStack_1c0;
        if (lVar17 == 0) {
          puVar9 = (undefined8 *)FUN_140e82300();
          plVar5 = local_1d8;
          plVar3 = (longlong *)*puVar9;
          if (local_1d8 != plVar3) {
            local_1d8 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
            param_3 = local_240;
            param_1 = local_248;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          local_1d0 = *(undefined4 *)(puVar9 + 1);
          param_2 = local_230;
        }
        else {
          local_a8 = 0;
          uStack_a0 = 0;
          puVar19 = &DAT_00000001;
          lVar14 = 0;
          do {
            if ((char)puVar19 == '\0') {
              FUN_1400020e8(&local_a8,L"[newline]",9);
            }
            iVar2 = *(int *)(lVar12 + 8 + lVar14);
            puVar19 = (undefined1 *)0x0;
            puVar16 = (undefined1 *)(ulonglong)(iVar2 - 1);
            if (iVar2 == 0) {
              puVar16 = puVar19;
            }
            FUN_1400020e8(&local_a8,*(undefined8 *)(lVar12 + lVar14),puVar16);
            lVar14 = lVar14 + 0x10;
          } while (lVar17 * 0x10 != lVar14);
          FUN_140009b9a(&local_188,&local_a8);
          FUN_140008f88(&local_1d8,&local_188);
          if (local_188 != (longlong *)0x0) {
            (**(code **)(*local_188 + 0x10))();
          }
          param_2 = local_230;
          param_1 = local_248;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
        }
        local_1f8 = local_1d8;
        if (local_1d8 != (longlong *)0x0) {
          (**(code **)(*local_1d8 + 8))();
        }
        local_1f0 = local_1d0;
        lVar12 = plVar21[10];
        if (lVar12 == 0) {
          uVar7 = FUN_1465f8f8a();
          lVar12 = FUN_14477b664(uVar7);
          plVar21[10] = lVar12;
        }
        lVar17 = plVar21[0xb];
        if (((lVar17 == 0) &&
            (lVar17 = 0, param_2 = local_230, param_3 = local_240, param_1 = local_248, lVar12 != 0)
            ) && (*local_238 != 0)) {
          plVar3 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
            lVar17 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar17 = FUN_144aff482(uVar7,local_238);
          }
          plVar21[0xb] = lVar17;
          param_2 = local_230;
          param_3 = local_240;
          param_1 = local_248;
        }
        local_208 = *(longlong **)(lVar17 + 0x38);
        if (local_208 != (longlong *)0x0) {
          (**(code **)(*local_208 + 8))();
        }
        local_200 = *(undefined4 *)(lVar17 + 0x40);
        FUN_14023409e(&local_218,&local_1b8,1);
        local_a8 = CONCAT44(local_a8._4_4_,4);
        FUN_14023423e(local_98,&local_208);
        local_88 = 4;
        FUN_14023423e(local_78,&local_1f8);
        local_198 = &local_a8;
        local_190 = local_68;
        FUN_14010d304(&local_188,&local_198);
        local_1a8 = local_218;
        local_1a0 = local_210;
        if (local_210 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_210 + 1) = (int)local_210[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_1e8,&local_1a8,&local_188);
        FUN_14007f2db(local_188,local_180 & 0xffffffff);
        if (local_188 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar12 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_a8 + lVar12) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_a8 + lVar12) + 0x10))();
            *(undefined8 *)((longlong)&local_a8 + lVar12) = 0;
            *(undefined4 *)((longlong)local_98 + lVar12 + -8) = 0;
          }
          plVar21 = local_210;
          lVar12 = lVar12 + -0x20;
        } while (lVar12 != -0x10);
        if (local_210 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_210 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_210)(local_210);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        if (local_208 != (longlong *)0x0) {
          (**(code **)(*local_208 + 0x10))();
        }
        if (local_1f8 != (longlong *)0x0) {
          (**(code **)(*local_1f8 + 0x10))();
        }
        if (local_d0 == 0) {
LAB_14130d45e:
          FUN_140008f88(local_e0,local_1e8);
          local_d0 = local_d0 + 1;
        }
        else {
          cVar6 = FUN_144722c14(local_e0,local_1e8,0);
          if (cVar6 == '\0') goto LAB_14130d45e;
        }
        if (local_1e8[0] != (longlong *)0x0) {
          (**(code **)(*local_1e8[0] + 0x10))();
        }
        if (local_1d8 != (longlong *)0x0) {
          (**(code **)(*local_1d8 + 0x10))();
        }
        FUN_1447a1747(local_1c8,uStack_1c0 & 0xffffffff);
        if (local_1c8 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_14130d9cc(local_228 + *(longlong *)(param_2 + 0x10),&local_138);
      if (local_1b8 != (longlong *)0x0) {
        (**(code **)(*local_1b8 + 0x10))();
      }
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x10))();
      }
      if (local_e0[0] != (longlong *)0x0) {
        (**(code **)(*local_e0[0] + 0x10))();
      }
      if (local_f8 != (longlong *)0x0) {
        (**(code **)(*local_f8 + 0x10))();
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_3 + 0x30));
  }
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130d958 FUN_14130d958 body=114 status=ok
// SIG undefined FUN_14130d958(void)

int * FUN_14130d958(int *param_1)

{
  undefined1 auStack_68 [40];
  int local_40 [6];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447a97f4(local_40);
  if ((local_40[0] != *param_1) || (param_1[10] == 0)) {
    FUN_1404e49fa(param_1,local_40);
    param_1[10] = param_1[10] + 1;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130d9cc FUN_14130d9cc body=252 status=ok
// SIG undefined FUN_14130d9cc(void)

undefined4 FUN_14130d9cc(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1458e20f2(param_1,iVar2);
  }
  lVar4 = *param_1;
  lVar5 = (longlong)iVar2 * 0x90;
  puVar1 = (undefined8 *)(lVar4 + lVar5);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_1447715ec(puVar1 + 2,param_2 + 2);
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 7);
  FUN_140dd90de(lVar4 + lVar5 + 0x40,param_2 + 8);
  FUN_140dd90de(lVar4 + lVar5 + 0x58,param_2 + 0xb);
  lVar4 = lVar4 + lVar5;
  FUN_140dd90de(lVar4 + 0x70,param_2 + 0xe);
  *(undefined1 *)(lVar4 + 0x88) = 0;
  *(undefined4 *)(lVar4 + 0x8c) = 0;
  *(undefined1 *)(lVar4 + 0x88) = *(undefined1 *)(param_2 + 0x11);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(lVar4 + 0x8c) = uVar3;
  if (iVar2 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),iVar2 != -1);
}



// FUNCTION 14130dac8 FUN_14130dac8 body=776 status=ok
// SIG undefined FUN_14130dac8(void)

undefined8 * FUN_14130dac8(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1447a97f4(local_50,&DAT_14c9485f0);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1404e49fa(param_1 + 2,local_50);
  *(undefined4 *)(param_1 + 7) = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
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
  plVar1 = DAT_14c844840;
  param_1[8] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 9) = DAT_14c844848;
  *(undefined4 *)(param_1 + 10) = 0;
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
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0xc) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0xd) = 0;
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
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0xf) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130dde0 FUN_14130dde0 body=705 status=ok
// SIG undefined FUN_14130dde0(void)

void FUN_14130dde0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  undefined1 auStack_218 [32];
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_7c;
  undefined1 local_74;
  undefined8 local_70;
  undefined **local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined4 uStack_39;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1f8 = &PTR_FUN_14b32b680;
  local_1f0 = 0;
  local_1e8 = 0x34001;
  local_1e0 = 0;
  local_1d8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_1d0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_1c8 = DAT_14c8464f0;
  local_1b0 = DAT_14c8464f0;
  local_198 = DAT_14c8464f0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_168 = 0x3002;
  local_160 = 0;
  local_128 = 0;
  local_120 = 0x200000000;
  local_118 = 0;
  local_110 = 0;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0xf00000d0;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_98 = (undefined4)DAT_14c8464e0;
  uStack_94 = DAT_14c8464e0._4_4_;
  uStack_90 = (undefined4)DAT_14c8464e8;
  uStack_8c = DAT_14c8464e8._4_4_;
  local_88 = DAT_14c8464f0;
  local_80 = 0;
  local_7c = 0xbf80000000000000;
  local_74 = 0;
  local_70 = 0;
  local_1c0 = local_1d8;
  uStack_1b8 = uStack_1d0;
  local_1a8 = local_1d8;
  uStack_1a0 = uStack_1d0;
  FUN_1405c5fa2();
  local_60 = &DAT_14cb769e8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = &PTR_FUN_14b0394b0;
  local_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1f8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1f8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1f8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_1f8 = *(undefined ***)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1f8);
    }
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_1f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14130e0a2(pppuVar4);
  FUN_140bba396(&local_1f8);
  if ((local_30 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130e0a2 FUN_14130e0a2 body=126 status=ok
// SIG undefined FUN_14130e0a2(void)

void FUN_14130e0a2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_1403d77ae(param_1 + 8);
  if (lVar2 != 0) {
    if ((((*(int *)(param_1 + 0x78) == 0) || (uVar1 = *(uint *)(param_1 + 0x74), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       (((plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar3 == (longlong *)0x0 || ((int)plVar3[2] != *(int *)(param_1 + 0x78))) ||
        (((*(uint *)(plVar3 + 1) & 0x10200000) != 0 || (lVar2 = *plVar3, lVar2 == 0)))))) {
      lVar2 = FUN_14479d2ce(param_1 + 0x6c);
    }
    FUN_141142006(lVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 14130e120 FUN_14130e120 body=155 status=ok
// SIG undefined FUN_14130e120(void)

void FUN_14130e120(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x4c)) {
    if ((*(longlong *)(param_1 + 0x90) != 0) && ((longlong)*(int *)(param_1 + 0xa0) != 0)) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x98) + lVar2) != 0) {
          cVar1 = FUN_144a8028a(param_1 + 0x68,param_1 + 0x88);
          if (cVar1 == '\0') goto LAB_14130e190;
          break;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(param_1 + 0xa0) * 8 != lVar2);
    }
    local_11 = *(undefined1 *)(param_1 + 0x11);
    *(undefined1 *)(param_1 + 0x11) = 0;
    FUN_14130e1bc(param_1);
  }
LAB_14130e190:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14130e1bc FUN_14130e1bc body=256 status=ok
// SIG undefined FUN_14130e1bc(void)

undefined8 FUN_14130e1bc(undefined2 *param_1,char *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 4) != 0) {
    cVar2 = *(char *)(param_1 + 8);
    uVar4 = (undefined7)((ulonglong)param_1 >> 8);
    if (cVar2 != *param_2) {
      puVar1 = param_1 + 8;
      *param_1 = 1;
      *(char *)(param_1 + 8) = *param_2;
      local_48 = 0;
      uStack_40 = 0;
      local_31 = cVar2;
      FUN_1414243c2();
      local_58 = 0;
      uStack_50 = 0;
      FUN_1414243c2(CONCAT71(uVar4,*(undefined1 *)(param_1 + 8)));
      (**(code **)(**(longlong **)(param_1 + 4) + 0x508))
                (*(longlong **)(param_1 + 4),&local_31,puVar1);
      FUN_141886540(param_1 + 0x54,*(undefined8 *)(param_1 + 4),&local_31,puVar1);
      FUN_145aa9e12(*(undefined8 *)(param_1 + 4),&local_31,puVar1);
      *(undefined1 *)param_1 = 0;
      cVar2 = *(char *)((longlong)param_1 + 1);
      if (cVar2 != '\0') {
        *(undefined1 *)((longlong)param_1 + 1) = 0;
        local_31 = cVar2;
        FUN_140627eda(param_1);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      uVar3 = 1;
      goto LAB_14130e1ea;
    }
  }
  uVar3 = 0;
LAB_14130e1ea:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14130e2bd FUN_14130e2bd body=11359 status=ok
// SIG undefined FUN_14130e2bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14130e2bd(double param_1,double *param_2,double param_3,double *param_4,undefined8 param_5,
                  longlong param_6)

{
  double *pdVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  byte bVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double **ppdVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double *pdVar34;
  double dVar35;
  double *pdVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double **ppdVar42;
  undefined8 *puVar43;
  double dVar44;
  double dVar45;
  double *pdVar46;
  double dVar47;
  double *pdVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double **ppdVar52;
  double **ppdVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auStack_ba8 [32];
  double **local_b88;
  double ***local_b80;
  double **local_b78;
  double **local_b70;
  double **local_b68;
  int *local_b60;
  double **local_b58;
  double **local_b50;
  double **local_b48;
  double **local_b40;
  float local_b2c;
  double **local_b28;
  undefined8 uStack_b20;
  undefined1 local_b18 [16];
  double local_b08;
  double local_b00;
  undefined1 local_af8 [24];
  double local_ae0;
  double **local_ad8;
  double dStack_ad0;
  double local_ac8;
  double dStack_ac0;
  double local_ab8;
  double dStack_ab0;
  double local_aa8;
  double *local_aa0;
  double local_a98;
  double dStack_a90;
  double local_a88;
  undefined8 uStack_a80;
  double local_a78;
  double dStack_a70;
  undefined1 local_a68 [16];
  double *local_a58;
  ulonglong uStack_a50;
  double *local_a48;
  ulonglong uStack_a40;
  double *local_a30;
  double local_a28;
  double local_a20;
  double local_a18;
  double dStack_a10;
  double local_a08;
  double dStack_a00;
  undefined4 local_9f8;
  uint uStack_9f4;
  double dStack_9f0;
  double local_9e8;
  undefined8 uStack_9e0;
  double local_9d8;
  double dStack_9d0;
  undefined8 local_9c8;
  double dStack_9c0;
  undefined1 local_9b8 [16];
  double local_9a8;
  double dStack_9a0;
  double local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  double *local_968;
  double **ppdStack_960;
  int *local_958;
  double local_950;
  ulonglong uStack_948;
  double **local_940;
  undefined8 local_938;
  undefined8 uStack_930;
  double local_928;
  double local_920;
  double dStack_918;
  double *local_910;
  int local_908;
  undefined1 local_904 [4];
  double *local_900;
  double local_8f8 [2];
  undefined1 local_8e8 [16];
  double local_8d8;
  double dStack_8d0;
  double local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  double local_898;
  double local_890;
  double local_888;
  double local_880;
  double *local_878;
  double **ppdStack_870;
  int *local_868;
  double *local_858;
  double **ppdStack_850;
  double local_848;
  double *local_838;
  double *pdStack_830;
  double *local_828;
  double *local_820;
  longlong local_818;
  undefined8 uStack_810;
  longlong local_808;
  undefined8 uStack_800;
  double *local_7f8;
  double *pdStack_7f0;
  double local_7e8;
  double *local_7d8;
  double *pdStack_7d0;
  double local_7c8;
  double **local_7b8;
  double local_7b0;
  double dStack_7a8;
  double dStack_7a0;
  double *local_798;
  double *local_790;
  double *local_788;
  double **ppdStack_780;
  int *local_778;
  double dStack_770;
  double *local_768;
  double *local_760;
  undefined8 *local_758;
  double **local_750;
  int *local_748;
  double *local_468;
  double adStack_460 [95];
  undefined1 local_168 [16];
  double local_158;
  double *local_150;
  double **ppdStack_148;
  int *local_140;
  double local_138;
  double dStack_130;
  double *local_128;
  double dStack_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_ba8;
  dVar30 = -*param_2;
  dVar39 = -param_2[1];
  dVar24 = param_2[2] * -1.0;
  dVar25 = param_2[3] * 1.0;
  dVar28 = *param_4;
  dVar32 = param_4[1];
  dVar38 = param_4[2];
  dVar40 = param_4[3];
  dVar22 = param_2[1];
  dVar55 = param_2[1];
  local_8f8[0] = dVar32 * dVar24 * -1.0 +
                 ((dVar28 * dVar25 - *param_2 * dVar40 * 1.0) - dVar38 * dVar22);
  local_8f8[1] = dVar28 * dVar24 * 1.0 +
                 ((dVar32 * dVar25 - *param_2 * dVar38 * -1.0) - dVar40 * dVar55);
  dVar22 = dVar40 * dVar24 * 1.0 + dVar22 * dVar28 + (dVar25 * dVar38 - *param_2 * dVar32 * 1.0);
  dVar55 = dVar38 * dVar24 * -1.0 + dVar55 * dVar32 + (dVar25 * dVar40 - *param_2 * dVar28 * -1.0);
  dVar40 = param_4[6] - param_2[6];
  dVar28 = param_4[4] - param_2[4];
  dVar32 = param_4[5] - param_2[5];
  dVar49 = dVar39 * dVar40 - dVar32 * dVar24;
  dVar49 = dVar49 + dVar49;
  dVar51 = dVar30 * dVar32 - dVar28 * dVar39;
  dVar51 = dVar51 + dVar51;
  dVar38 = dVar24 * dVar28 - dVar40 * dVar30;
  dVar38 = dVar38 + dVar38;
  local_a98 = (double)CONCAT71(local_a98._1_7_,*(undefined1 *)((longlong)param_1 + 0x1c));
  local_8c8 = (dVar30 * dVar38 - dVar49 * dVar39) + dVar25 * dVar51 + dVar40;
  dStack_8d0 = (dVar24 * dVar49 - dVar51 * dVar30) + dVar25 * dVar38 + dVar32;
  local_b2c = *(float *)(param_6 + 0x1c);
  local_8d8 = (dVar39 * dVar51 - dVar38 * dVar24) + dVar25 * dVar49 + dVar28;
  local_aa0 = (double *)CONCAT44(local_aa0._4_4_,*(float *)(param_6 + 0x18));
  local_aa8 = (double)*(float *)(param_6 + 0x18);
  local_b08 = (double)local_b2c;
  local_8e8._8_4_ = SUB84(dVar55,0);
  local_8e8._0_8_ = dVar22;
  local_8e8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
  uStack_8c0 = 0;
  local_8b8 = 0x3ff0000000000000;
  uStack_8b0 = 0x3ff0000000000000;
  local_8a8 = 0x3ff0000000000000;
  uStack_8a0 = 0;
  if (DAT_14c75f015 == '\0') {
    *(undefined4 *)(param_6 + 0x330) = 0;
  }
  local_900 = (double *)0x0;
  local_904 = (undefined1  [4])0xffffffff;
  local_908 = -1;
  ppdVar53 = (double **)(param_6 + 0x250);
  dStack_120 = 1.79769313486232e+308;
  local_118 = 0xffffffff;
  local_114 = 0;
  ppdVar29 = (double **)(double)_DAT_14c75f068;
  local_ad8 = (double **)(double)DAT_14c75f06c;
  local_af8._0_8_ = param_1;
  local_b00 = param_3;
  local_a58 = param_2;
  local_a48 = param_4;
  local_898 = param_3;
  local_890 = local_b08;
  local_888 = param_1;
  local_880 = local_aa8;
  if (DAT_14c992dd0 != '\x01') {
    ppdStack_780 = &local_790;
    local_790 = (double *)0x0;
    local_798 = (double *)0x0;
    local_788 = &local_888;
    local_778 = (int *)local_904;
    local_9c8 = -local_8f8[0];
    dStack_9c0 = -local_8f8[1];
    local_9b8._8_4_ = SUB84(dVar55 * 1.0,0);
    local_9b8._0_8_ = dVar22 * -1.0;
    local_9b8._12_4_ = (int)((ulonglong)(dVar55 * 1.0) >> 0x20);
    local_7b0 = -1.0;
    dStack_7a8 = 0.0;
    dStack_7a0 = 0.0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    local_b80 = &local_7b8;
    local_7b8 = (double **)0x47efffffe0000000;
    local_b88 = (double **)&local_7b0;
    local_b78 = ppdVar29;
    local_b28 = ppdVar29;
    FUN_144917018(ppdVar53,local_8f8,&local_108,&local_468);
    dVar55 = -dStack_7a0;
    pdVar34 = (double *)((ulonglong)local_7b0 ^ 0x8000000000000000);
    pdVar36 = (double *)((ulonglong)dStack_7a8 ^ 0x8000000000000000);
    local_ac8 = local_880;
    local_ab8 = local_890;
    dStack_ab0 = 0.0;
    local_ae0 = local_880 + local_890;
    local_b18._0_8_ = param_6 + 0x310;
    iVar5 = 1;
    ppdVar29 = local_7b8;
LAB_14130e780:
    local_b80 = (double ***)ppdStack_780;
    dVar38 = dStack_7a0;
    dVar32 = dStack_7a8;
    dVar28 = local_7b0;
    dVar22 = *local_788;
    lVar8 = *(longlong *)((longlong)dVar22 + 0x88);
    if ((longlong)*(int *)(lVar8 + 0x38) < 1) {
      *local_778 = -1;
LAB_141310c5c:
      local_7d8 = (double *)0x0;
      pdStack_7d0 = (double *)0x0;
      local_7c8 = 0.0;
    }
    else {
      dVar40 = local_788[1];
      local_b88 = (double **)((longlong)dVar22 + 0x20);
      pfVar12 = (float *)(*(longlong *)(lVar8 + 0x30) + 8);
      uVar15 = 0xffffffff;
      uVar17 = 0;
      fVar19 = -3.4028235e+38;
      do {
        fVar26 = *pfVar12 * (float)(-dStack_7a0 * *(double *)((longlong)dVar22 + 0x30)) +
                 pfVar12[-2] * (float)(-local_7b0 * *(double *)((longlong)dVar22 + 0x20)) +
                 pfVar12[-1] * (float)(-dStack_7a8 * *(double *)((longlong)dVar22 + 0x28));
        if (fVar19 < fVar26) {
          uVar15 = uVar17 & 0xffffffff;
          fVar19 = fVar26;
        }
        uVar17 = uVar17 + 1;
        pfVar12 = pfVar12 + 3;
      } while ((longlong)*(int *)(lVar8 + 0x38) != uVar17);
      iVar6 = (int)uVar15;
      *local_778 = iVar6;
      if (iVar6 == -1) goto LAB_141310c5c;
      if ((dVar40 != 0.0) || (NAN(dVar40))) {
        FUN_14068b0c6(lVar8,&local_7d8);
      }
      else {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        lVar11 = (longlong)iVar6;
        local_7c8 = (double)*(float *)(lVar8 + 8 + lVar11 * 0xc) *
                    *(double *)((longlong)dVar22 + 0x30);
        pdStack_7d0 = (double *)
                      ((double)*(float *)(lVar8 + 4 + lVar11 * 0xc) *
                      *(double *)((longlong)dVar22 + 0x28));
        local_7d8 = (double *)
                    ((double)*(float *)(lVar8 + lVar11 * 0xc) * *(double *)((longlong)dVar22 + 0x20)
                    );
      }
    }
    dVar22 = local_9c8 * dVar32 - dVar28 * dStack_9c0;
    dVar40 = (double)local_9b8._0_8_ * dVar28 - dVar38 * local_9c8;
    dVar30 = dStack_9c0 * dVar38 - dVar32 * (double)local_9b8._0_8_;
    dVar22 = dVar22 + dVar22;
    dVar40 = dVar40 + dVar40;
    dVar30 = dVar30 + dVar30;
    local_758 = (undefined8 *)
                ((local_9c8 * dVar40 - dVar30 * dStack_9c0) +
                (double)local_9b8._8_8_ * dVar22 + dVar38);
    local_760 = (double *)
                (((double)local_9b8._0_8_ * dVar30 - dVar22 * local_9c8) +
                (double)local_9b8._8_8_ * dVar40 + dVar32);
    local_768 = (double *)
                ((dStack_9c0 * dVar22 - dVar40 * (double)local_9b8._0_8_) +
                dVar30 * (double)local_9b8._8_8_ + dVar28);
    local_b80 = (double ***)&local_908;
    local_b88 = &local_798;
    FUN_144916780(*(undefined8 *)((longlong)local_898 + 0x28),&local_7f8,&local_768,local_890);
    ppdVar42 = (double **)local_790;
    pdVar46 = local_798;
    dVar22 = (double)pdStack_7f0 * local_8f8[0] - (double)local_7f8 * local_8f8[1];
    dVar28 = local_7e8 * local_8f8[1] - (double)pdStack_7f0 * (double)local_8e8._0_8_;
    dVar32 = (double)local_7f8 * (double)local_8e8._0_8_ - local_8f8[0] * local_7e8;
    dVar28 = dVar28 + dVar28;
    dVar32 = dVar32 + dVar32;
    dVar22 = dVar22 + dVar22;
    lVar8 = (longlong)(int)(uint)local_108;
    *(double *)(param_6 + 0x260 + lVar8 * 0x18) = local_7c8;
    ppdVar53[lVar8 * 3] = local_7d8;
    (ppdVar53 + lVar8 * 3)[1] = pdStack_7d0;
    *(double *)(param_6 + 0x2c0 + lVar8 * 0x18) = local_7e8;
    ppdVar52 = (double **)(param_6 + 0x2b0) + lVar8 * 3;
    *ppdVar52 = local_7f8;
    ppdVar52[1] = pdStack_7f0;
    *(uint *)((longlong)&local_108 + lVar8 * 4 + 4) = (uint)local_108;
    local_108 = CONCAT44(local_108._4_4_,(uint)local_108 + 1);
    (&local_468)[lVar8 * 3] =
         (double *)
         ((double)local_7d8 -
         ((dVar22 * local_8f8[1] - dVar32 * (double)local_8e8._0_8_) +
          (double)local_8e8._8_8_ * dVar28 + (double)local_7f8 + local_8d8));
    adStack_460[lVar8 * 3] =
         (double)pdStack_7d0 -
         (((double)local_8e8._0_8_ * dVar28 - local_8f8[0] * dVar22) +
          (double)local_8e8._8_8_ * dVar32 + (double)pdStack_7f0 + dStack_8d0);
    adStack_460[lVar8 * 3 + 1] =
         local_7c8 -
         (dVar22 * (double)local_8e8._8_8_ + local_7e8 +
          (dVar32 * local_8f8[0] - dVar28 * local_8f8[1]) + local_8c8);
    local_b88 = ppdVar53;
    local_b80 = (double ***)(param_6 + 0x2b0);
    FUN_1449162b1(&local_7b0,&local_468,&local_108,local_b18._0_8_);
    ppdVar52 = (double **)
               SQRT(dStack_7a0 * dStack_7a0 + local_7b0 * local_7b0 + dStack_7a8 * dStack_7a8);
    dVar22 = 0.0;
    if ((double)local_b28 <= (double)ppdVar52) goto code_r0x00014130ec13;
    *(uint *)(param_6 + 0x330) = (uint)local_108;
    local_808 = 0;
    uStack_800 = 0;
    local_818 = 0;
    uStack_810 = 0;
    FUN_140268ec4(&local_808,8);
    FUN_140268ec4(&local_818,8);
    if (0 < (int)(uint)local_108) {
      pdVar48 = (double *)(param_6 + 0x2c0);
      lVar8 = 0;
      do {
        uVar15 = uStack_800;
        lVar11 = (longlong)(int)uStack_800;
        uVar7 = (int)uStack_800 + 1;
        uStack_800 = CONCAT44(uStack_800._4_4_,uVar7);
        if (uStack_800._4_4_ < uVar7) {
          FUN_14026a4e8(&local_808,uVar15 & 0xffffffff);
        }
        uVar15 = uStack_810;
        *(double *)(local_808 + 0x10 + lVar11 * 0x18) = pdVar48[-0xc];
        dVar28 = pdVar48[-0xd];
        pdVar1 = (double *)(local_808 + lVar11 * 0x18);
        *pdVar1 = pdVar48[-0xe];
        pdVar1[1] = dVar28;
        dVar28 = pdVar48[-2];
        dVar32 = pdVar48[-1];
        dVar38 = dVar32 * local_8f8[0] - dVar28 * local_8f8[1];
        dVar40 = *pdVar48 * local_8f8[1] - dVar32 * (double)local_8e8._0_8_;
        dVar30 = dVar28 * (double)local_8e8._0_8_ - local_8f8[0] * *pdVar48;
        dVar40 = dVar40 + dVar40;
        dVar30 = dVar30 + dVar30;
        dVar38 = dVar38 + dVar38;
        dVar39 = (dVar38 * local_8f8[1] - dVar30 * (double)local_8e8._0_8_) +
                 (double)local_8e8._8_8_ * dVar40 + dVar28 + local_8d8;
        dVar32 = ((double)local_8e8._0_8_ * dVar40 - local_8f8[0] * dVar38) +
                 (double)local_8e8._8_8_ * dVar30 + dVar32 + dStack_8d0;
        dVar28 = dVar38 * (double)local_8e8._8_8_ + *pdVar48 +
                 (dVar30 * local_8f8[0] - dVar40 * local_8f8[1]) + local_8c8;
        lVar11 = (longlong)(int)uStack_810;
        uVar7 = (int)uStack_810 + 1;
        uStack_810 = CONCAT44(uStack_810._4_4_,uVar7);
        if (uStack_810._4_4_ < uVar7) {
          FUN_14026a4e8(&local_818,uVar15 & 0xffffffff);
        }
        pdVar1 = (double *)(local_818 + lVar11 * 0x18);
        *pdVar1 = dVar39;
        pdVar1[1] = dVar32;
        *(double *)(local_818 + 0x10 + lVar11 * 0x18) = dVar28;
        lVar8 = lVar8 + 1;
        pdVar48 = pdVar48 + 3;
      } while (lVar8 < (int)(uint)local_108);
    }
    local_b28 = ppdVar42;
    if ((double)ppdVar42 <= (double)pdVar46) {
      local_b28 = (double **)pdVar46;
    }
    local_768 = &local_898;
    local_760 = local_8f8;
    local_758 = &local_9c8;
    local_750 = &local_798;
    local_748 = &local_908;
    ppdStack_850 = &local_788;
    local_858 = (double *)FUN_141726ec8;
    ppdStack_870 = &local_768;
    local_878 = (double *)FUN_141727014;
    local_b68 = local_ad8;
    local_b70 = &local_838;
    local_b78 = &local_7f8;
    local_b80 = (double ***)&local_7d8;
    local_b88 = &local_820;
    uVar7 = FUN_144918d86(&local_808);
    dVar32 = local_7c8;
    dVar28 = local_ab8;
    ppdVar42 = local_b28;
    if (1 < uVar7) {
      if (uVar7 == 3) {
        dVar22 = -0.0;
        ppdVar52 = (double **)((ulonglong)local_820 ^ 0x8000000000000000);
        dVar55 = local_7c8;
        pdVar34 = local_7d8;
        pdVar36 = pdStack_7d0;
      }
      if (local_818 != 0) {
        FUN_1400020a8();
      }
      if (local_808 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14130ec9b;
    }
    dVar38 = -local_8f8[0];
    dVar40 = -local_8f8[1];
    dVar55 = (double)local_8e8._0_8_ * -1.0;
    dVar22 = (double)local_8e8._8_8_ * 1.0;
    dVar39 = (double)pdStack_7d0 * dVar38 - (double)local_7d8 * dVar40;
    dVar25 = local_7c8 * dVar40 - (double)pdStack_7d0 * dVar55;
    dVar24 = (double)local_7d8 * dVar55 - local_7c8 * dVar38;
    dVar25 = dVar25 + dVar25;
    dVar24 = dVar24 + dVar24;
    dVar39 = dVar39 + dVar39;
    dVar49 = dVar22 * dVar25 + (double)local_7d8;
    dVar51 = dVar22 * dVar24 + (double)pdStack_7d0;
    dVar33 = local_8f8[0] * dVar39;
    local_b18._0_8_ = (double)local_820 + local_ac8;
    local_858 = (double *)(local_ac8 * (double)local_7d8 + (double)local_7f8);
    local_848 = local_ac8 * local_7c8 + local_7e8;
    ppdStack_850 = (double **)(local_ac8 * (double)pdStack_7d0 + (double)pdStack_7f0);
    dVar35 = ((double)local_838 - (double)local_7d8 * local_ab8) - local_8d8;
    dVar37 = ((double)pdStack_830 - (double)pdStack_7d0 * local_ab8) - dStack_8d0;
    dVar31 = ((double)local_828 - local_ab8 * local_7c8) - local_8c8;
    dVar30 = dVar37 * dVar38 - dVar40 * dVar35;
    dVar50 = dVar31 * dVar40 - dVar55 * dVar37;
    dVar54 = dVar35 * dVar55 - dVar31 * dVar38;
    dVar50 = dVar50 + dVar50;
    dVar54 = dVar54 + dVar54;
    dVar30 = dVar30 + dVar30;
    local_868 = (int *)(dVar30 * dVar22 + dVar31 + (dVar54 * dVar38 - dVar50 * dVar40));
    local_878 = (double *)((dVar30 * dVar40 - dVar54 * dVar55) + dVar22 * dVar50 + dVar35);
    ppdStack_870 = (double **)(local_8f8[0] * dVar30 + dVar55 * dVar50 + dVar22 * dVar54 + dVar37);
    local_900 = (double *)local_b28;
    uVar14 = local_af8._0_8_;
    if (local_818 != 0) {
      FUN_1400020a8();
    }
    if (local_808 != 0) {
      FUN_1400020a8();
    }
    dStack_120 = dVar28 + (double)local_b18._0_8_;
    puVar43 = (undefined8 *)(dVar32 + dVar39 * dVar22 + (dVar24 * dVar38 - dVar25 * dVar40));
    pdVar46 = (double *)((dVar39 * dVar40 - dVar24 * dVar55) + dVar49);
    pdVar48 = (double *)(dVar33 + dVar55 * dVar25 + dVar51);
    goto LAB_14130ef0f;
  }
  local_b50 = &local_900;
  local_b60 = &local_908;
  local_b68 = (double **)local_904;
  local_b70 = &local_768;
  local_b78 = &local_468;
  local_b80 = (double ***)&local_878;
  local_b88 = &local_858;
  local_b58 = ppdVar53;
  local_b48 = ppdVar29;
  local_b40 = local_ad8;
  FUN_146cfd589(&local_888,&local_898,local_8f8,&local_9c8);
  uVar14 = local_af8._0_8_;
  dStack_120 = local_9c8;
  puVar43 = local_758;
  pdVar46 = local_768;
  pdVar48 = local_760;
LAB_14130ef0f:
  auVar3 = _DAT_149931e80;
  local_158 = local_848;
  local_168._8_8_ = ppdStack_850;
  local_168._0_8_ = local_858;
  local_150 = local_878;
  ppdStack_148 = ppdStack_870;
  local_140 = local_868;
  uVar15 = DAT_149931e80;
  dVar55 = DAT_149931e80._8_8_;
  local_138 = (double)((ulonglong)pdVar46 ^ uVar15);
  dVar22 = (double)((ulonglong)pdVar48 ^ (ulonglong)dVar55);
  local_128 = (double *)((ulonglong)puVar43 ^ uVar15);
  dStack_120 = (double)((ulonglong)dStack_120 ^ (ulonglong)dVar55);
  dStack_130 = dVar22;
  if (((local_904 != (undefined1  [4])0xffffffff) && (local_908 != -1)) &&
     ((DAT_14c992bf8 != '\x01' || (cVar4 = FUN_146d68bdc(param_6,local_168), cVar4 == '\0')))) {
    *(undefined4 *)(param_6 + 0x16c) = 0xffffffff;
    if (*(int *)(param_6 + 0x5b4) < 0) {
      *(undefined4 *)(param_6 + 0x5b0) = 0;
      FUN_1404b2356(param_6 + 0x3f8,0);
    }
    else {
      *(undefined4 *)(param_6 + 0x5b0) = 0;
    }
    if (*(int *)(param_6 + 0x634) < 0) {
      *(undefined4 *)(param_6 + 0x630) = 0;
      FUN_146d72a40(param_6 + 0x5b8,0);
    }
    else {
      *(undefined4 *)(param_6 + 0x630) = 0;
    }
    *(undefined4 *)(param_6 + 0x230) = 0;
    *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) & 0xcf;
    if (dStack_120 <= (double)*(float *)(param_6 + 300) + (double)local_900) {
      dVar32 = dStack_130 * local_8f8[0] - local_138 * local_8f8[1];
      dVar38 = (double)local_128 * local_8f8[1] - dStack_130 * (double)local_8e8._0_8_;
      dVar40 = local_138 * (double)local_8e8._0_8_ - local_8f8[0] * (double)local_128;
      dVar30 = (double)local_8e8._8_8_ * 0.0 - (double)local_8e8._8_8_ * 0.0;
      dVar38 = dVar38 + dVar38;
      dVar40 = dVar40 + dVar40;
      dVar32 = dVar32 + dVar32;
      pdVar34 = (double *)
                (dVar32 * (double)local_8e8._8_8_ + (double)local_128 +
                (dVar40 * local_8f8[0] - dVar38 * local_8f8[1]));
      dVar28 = (dVar32 * local_8f8[1] - dVar40 * (double)local_8e8._0_8_) +
               (double)local_8e8._8_8_ * dVar38 + local_138;
      dVar32 = ((double)local_8e8._0_8_ * dVar38 - local_8f8[0] * dVar32) +
               (double)local_8e8._8_8_ * dVar40 + dStack_130;
      local_938 = local_168._0_8_;
      uStack_930 = local_168._8_8_;
      local_928 = local_158;
      local_b88 = (double **)CONCAT44(local_b88._4_4_,local_904);
      local_920 = dVar28;
      dStack_918 = dVar32;
      local_910 = pdVar34;
      iVar5 = FUN_1409cb266(uVar14,&local_938,&local_920,local_aa8);
      if (iVar5 != -1) {
        bVar13 = local_a98._0_1_ & 0x3f;
        FUN_1404c21ca(uVar14,iVar5,&local_7d8,&local_7b0);
        ppdVar53 = (double **)local_128;
        dVar39 = dStack_130;
        dVar40 = local_138;
        dVar38 = local_b00;
        if (bVar13 == 3) {
          local_b18 = ZEXT816(0xc7efffffe0000000);
        }
        else {
          local_b18._8_4_ = SUB84(ABS(-dVar32),0);
          local_b18._0_8_ =
               ABS((-dVar28 * (double)local_7d8 - (double)pdStack_7d0 * dVar32) -
                   local_7c8 * (double)pdVar34);
          local_b18._12_4_ = (int)((ulonglong)ABS(-dVar32) >> 0x20);
        }
        local_ad8 = (double **)((ulonglong)local_128 ^ uVar15);
        uStack_948 = (ulonglong)dStack_130 ^ uVar15;
        local_a78 = (double)((ulonglong)local_138 ^ uVar15);
        local_a68._8_4_ = auVar3._8_4_;
        local_a68._0_8_ = uStack_948;
        local_a68._12_4_ = auVar3._12_4_;
        local_968 = local_150;
        ppdStack_960 = ppdStack_148;
        local_958 = local_140;
        local_b88 = (double **)CONCAT44(local_b88._4_4_,local_908);
        dStack_ad0 = dVar55;
        dStack_a70 = dVar55;
        local_950 = local_a78;
        local_940 = local_ad8;
        iVar6 = FUN_140a05dc3(local_b00,&local_968,&local_950,local_b08);
        if (iVar6 != -1) {
          lVar8 = *(longlong *)(*(longlong *)((longlong)dVar38 + 0x28) + 0x20);
          lVar11 = (longlong)iVar6;
          local_7e8 = (double)*(float *)(lVar8 + 0x14 + lVar11 * 0x18);
          pdStack_7f0 = (double *)(double)*(float *)(lVar8 + 0x10 + lVar11 * 0x18);
          local_7f8 = (double *)(double)*(float *)(lVar8 + 0xc + lVar11 * 0x18);
          local_b00 = (double)*(float *)(lVar8 + 8 + lVar11 * 0x18);
          local_ae0 = (double)*(float *)(lVar8 + 4 + lVar11 * 0x18);
          local_b08 = (double)*(float *)(lVar8 + lVar11 * 0x18);
          dVar55 = ABS(local_7e8 * (double)ppdVar53 +
                       (double)local_7f8 * dVar40 + (double)pdStack_7f0 * dVar39);
          if ((ABS((double)local_b18._0_8_ + -1.0) <= (double)_DAT_14c75f018) ||
             (ABS(dVar55 + -1.0) <= (double)_DAT_14c75f018)) {
            dVar55 = dVar55 + 0.0020000000949949026;
            ppdVar29 = &local_7f8;
            local_a28 = dVar39;
            local_a20 = dVar40;
            local_a30 = (double *)ppdVar53;
            if (dVar55 <= (double)local_b18._0_8_) {
              ppdVar29 = &local_7d8;
              local_a28 = dVar32;
              local_a20 = dVar28;
              local_a30 = pdVar34;
            }
            local_828 = ppdVar29[2];
            local_838 = *ppdVar29;
            pdStack_830 = ppdVar29[1];
            if (dVar55 <= (double)local_b18._0_8_) {
              local_b00 = dStack_7a0;
              local_b08 = local_7b0;
              local_ae0 = dStack_7a8;
            }
            local_878 = (double *)((ulonglong)local_878 & 0xffffffff00000000);
            local_af8._8_8_ = 0;
            local_af8._0_8_ = dVar39;
            local_b28 = ppdVar53;
            uStack_b20 = 0;
            local_a88 = dVar40;
            uStack_a80 = 0;
            local_ab8 = dVar28;
            dStack_ab0 = dVar32;
            local_ac8 = dVar32;
            dStack_ac0 = dVar32;
            local_a98 = dVar55;
            dStack_a90 = ABS(dVar22);
            if (dVar55 <= (double)local_b18._0_8_) {
              pdVar36 = local_8f8;
              pdVar46 = (double *)&local_9c8;
              for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                *pdVar46 = *pdVar36;
                pdVar36 = pdVar36 + 1;
                pdVar46 = pdVar46 + 1;
              }
              local_b68 = &local_878;
              local_b70 = &local_768;
              local_b78 = &local_468;
              local_b80 = (double ***)&local_838;
              local_b88 = (double **)CONCAT44(local_b88._4_4_,iVar6);
              lVar8 = FUN_141311719(uVar14,dVar38,&local_9c8,iVar5);
            }
            else {
              dVar44 = -*local_a48;
              dVar45 = -local_a48[1];
              dVar35 = local_a48[2] * -1.0;
              dVar37 = local_a48[3] * 1.0;
              dVar25 = *local_a58;
              dVar49 = local_a58[1];
              dVar51 = local_a58[2];
              dVar50 = local_a58[3];
              dVar24 = local_a48[1];
              dVar22 = local_a48[1];
              local_9c8 = dVar49 * dVar35 * -1.0 +
                          ((dVar25 * dVar37 - *local_a48 * dVar50 * 1.0) - dVar51 * dVar24);
              dStack_9c0 = dVar25 * dVar35 * 1.0 +
                           ((dVar49 * dVar37 - *local_a48 * dVar51 * -1.0) - dVar50 * dVar22);
              dVar47 = local_a58[6] - local_a48[6];
              dVar31 = local_a58[4] - local_a48[4];
              dVar33 = local_a58[5] - local_a48[5];
              dVar56 = dVar45 * dVar47 - dVar33 * dVar35;
              dVar56 = dVar56 + dVar56;
              dVar54 = dVar44 * dVar33 - dVar31 * dVar45;
              dVar54 = dVar54 + dVar54;
              dVar41 = dVar35 * dVar31 - dVar47 * dVar44;
              dVar41 = dVar41 + dVar41;
              local_998 = (dVar44 * dVar41 - dVar56 * dVar45) + dVar37 * dVar54 + dVar47;
              dStack_9a0 = (dVar35 * dVar56 - dVar54 * dVar44) + dVar37 * dVar41 + dVar33;
              local_9a8 = (dVar45 * dVar54 - dVar41 * dVar35) + dVar37 * dVar56 + dVar31;
              local_9b8._8_8_ =
                   dVar51 * dVar35 * -1.0 +
                   dVar22 * dVar49 + (dVar37 * dVar50 - *local_a48 * dVar25 * -1.0);
              local_9b8._0_8_ =
                   dVar50 * dVar35 * 1.0 +
                   dVar24 * dVar25 + (dVar37 * dVar51 - *local_a48 * dVar49 * 1.0);
              uStack_990 = 0;
              local_988 = 0x3ff0000000000000;
              uStack_980 = 0x3ff0000000000000;
              local_978 = 0x3ff0000000000000;
              uStack_970 = 0;
              local_b68 = &local_878;
              local_b70 = &local_768;
              local_b78 = &local_468;
              local_b80 = (double ***)&local_838;
              local_b88 = (double **)CONCAT44(local_b88._4_4_,iVar5);
              lVar8 = FUN_141310f1d(dVar38,uVar14,&local_9c8,iVar6);
            }
            pdVar36 = local_878;
            uVar17 = (ulonglong)local_878 & 0xffffffff;
            dVar22 = dVar32;
            dVar38 = dVar32;
            if (uVar17 == 4) {
              bVar2 = dVar55 <= (double)local_b18._0_8_;
              local_778 = *(int **)(lVar8 + 0x28);
              local_788 = *(double **)(lVar8 + 0x18);
              ppdStack_780 = *(double ***)(lVar8 + 0x20);
              *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar8 + 0x30);
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x38);
              *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar8 + 0x40);
              *(double **)(lVar8 + 0x30) = local_788;
              *(double ***)(lVar8 + 0x38) = ppdStack_780;
              *(int **)(lVar8 + 0x40) = local_778;
              uVar17 = 4;
            }
            else {
              if (4 < (uint)local_878) {
                local_858 = (double *)0x0;
                ppdStack_850 = (double **)0x0;
                local_848 = 1.0;
                FUN_140269010(&local_788,&local_838);
                lVar11 = 0;
                do {
                  dVar55 = *(double *)(lVar8 + lVar11);
                  dVar22 = *(double *)(lVar8 + 8 + lVar11);
                  dVar28 = *(double *)(lVar8 + 0x10 + lVar11);
                  dVar32 = (double)ppdStack_780 * dVar28 +
                           dVar22 * (double)(uVar15 ^ (ulonglong)local_778);
                  dVar32 = dVar32 + dVar32;
                  dVar40 = (double)local_788 * dVar22 +
                           dVar55 * (double)((ulonglong)ppdStack_780 ^ uVar15);
                  dVar40 = dVar40 + dVar40;
                  dVar38 = (double)local_778 * dVar55 +
                           dVar28 * (double)((ulonglong)local_788 ^ uVar15);
                  dVar38 = dVar38 + dVar38;
                  *(double *)(lVar8 + lVar11) =
                       dVar38 * (double)(uVar15 ^ (ulonglong)local_778) +
                       (double)ppdStack_780 * dVar40 + dStack_770 * dVar32 + dVar55;
                  *(double *)(lVar8 + 8 + lVar11) =
                       dVar40 * (double)((ulonglong)local_788 ^ uVar15) + (double)local_778 * dVar32
                       + dStack_770 * dVar38 + dVar22;
                  *(double *)(lVar8 + 0x10 + lVar11) =
                       (double)local_788 * dVar38 +
                       dVar32 * (double)((ulonglong)ppdStack_780 ^ uVar15) +
                       dStack_770 * dVar40 + dVar28;
                  lVar11 = lVar11 + 0x18;
                } while (uVar17 * 0x18 != lVar11);
                uVar7 = FUN_1402695a1(lVar8,(ulonglong)pdVar36 & 0xffffffff);
                uVar17 = (ulonglong)uVar7;
                if (uVar7 != 0) {
                  dVar22 = -(double)ppdStack_780;
                  dVar55 = (double)local_778 * -1.0;
                  dStack_770 = dStack_770 * 1.0;
                  lVar11 = 0;
                  do {
                    dVar28 = *(double *)(lVar8 + lVar11);
                    dVar32 = *(double *)(lVar8 + 8 + lVar11);
                    dVar38 = *(double *)(lVar8 + 0x10 + lVar11);
                    dVar40 = dVar22 * dVar38 + dVar32 * -dVar55;
                    dVar40 = dVar40 + dVar40;
                    dVar24 = -(double)local_788 * dVar32 + dVar28 * -dVar22;
                    dVar24 = dVar24 + dVar24;
                    dVar39 = dVar55 * dVar28 + dVar38 * (double)local_788;
                    dVar39 = dVar39 + dVar39;
                    *(double *)(lVar8 + lVar11) =
                         dVar39 * -dVar55 + dVar22 * dVar24 + dStack_770 * dVar40 + dVar28;
                    *(double *)(lVar8 + 8 + lVar11) =
                         dVar24 * (double)local_788 + dVar55 * dVar40 + dStack_770 * dVar39 + dVar32
                    ;
                    *(double *)(lVar8 + 0x10 + lVar11) =
                         -(double)local_788 * dVar39 + dVar40 * -dVar22 +
                         dStack_770 * dVar24 + dVar38;
                    lVar11 = lVar11 + 0x18;
                  } while ((ulonglong)(uVar7 * 8) * 3 != lVar11);
                }
                dVar40 = local_a88;
                dVar55 = local_a98;
                ppdVar53 = local_b28;
                dVar39 = (double)local_af8._0_8_;
                dVar28 = local_ab8;
                dVar32 = dStack_ab0;
                dVar22 = local_ac8;
                dVar38 = dStack_ac0;
              }
              bVar2 = dVar55 <= (double)local_b18._0_8_;
              if ((int)uVar17 == 0) goto LAB_14130fc23;
            }
            local_a48 = (double *)-(ulonglong)(dVar55 <= (double)local_b18._0_8_);
            uStack_a40 = local_b18._8_8_;
            local_a58 = (double *)
                        (~(ulonglong)local_a48 & (ulonglong)local_ad8 |
                        (ulonglong)pdVar34 & (ulonglong)local_a48);
            uStack_a50 = ~local_b18._8_8_ & (ulonglong)dStack_ad0 |
                         (ulonglong)(dVar30 + dVar30) & local_b18._8_8_;
            local_ab8 = dVar28;
            dStack_ab0 = dVar32;
            local_ac8 = dVar22;
            dStack_ac0 = dVar38;
            if ((double)local_b18._0_8_ < dVar55) {
              local_ab8 = local_a78;
              dStack_ab0 = dStack_a70;
              local_ac8 = (double)local_a68._0_8_;
              dStack_ac0 = (double)local_a68._8_8_;
            }
            lVar11 = param_6 + 0x3f8;
            local_ad8 = (double **)CONCAT44(local_ad8._4_4_,(float)(double)ppdVar53);
            local_b2c = (float)dVar39;
            local_a88 = (double)CONCAT44(local_a88._4_4_,(float)dVar40);
            local_aa0 = local_838;
            local_b28 = (double **)local_828;
            uStack_9f4 = local_9c8._4_4_ ^ 0x80000000;
            dStack_a70 = -dStack_9c0;
            local_9d8 = local_9a8;
            dStack_9d0 = dStack_9a0;
            local_a18 = (double)local_9b8._0_8_ * -1.0;
            dStack_a10 = (double)local_9b8._8_8_ * 1.0;
            local_9e8 = local_998;
            uStack_9e0 = uStack_990;
            local_af8._8_4_ = SUB84(dStack_a10,0);
            local_af8._0_8_ = dStack_a10;
            local_af8._12_4_ = (int)((ulonglong)dStack_a10 >> 0x20);
            local_9f8 = (undefined4)local_9c8;
            local_a78 = -local_9c8;
            lVar16 = 0;
            local_a68._0_8_ = pdStack_830;
            pdVar34 = pdStack_830;
            local_a08 = dStack_a70;
            dStack_a00 = local_a18;
            dStack_9f0 = dStack_a10;
            do {
              dVar22 = *(double *)(lVar8 + lVar16);
              dVar28 = ((double *)(lVar8 + lVar16))[1];
              dVar55 = *(double *)(lVar8 + 0x10 + lVar16);
              if (bVar13 == 3) {
                dVar22 = dVar22 - local_a20 * local_aa8;
                dVar28 = dVar28 - local_a28 * local_aa8;
                dVar55 = dVar55 - (double)local_a30 * local_aa8;
              }
              dVar49 = (dVar55 - local_b00) * (double)local_b28 +
                       (dVar22 - local_b08) * (double)local_aa0 +
                       (dVar28 - local_ae0) * (double)pdVar34;
              dVar25 = dVar22 - (double)local_aa0 * dVar49;
              dVar32 = dVar22 - local_9d8;
              dVar38 = dVar28 - dStack_9d0;
              dVar51 = dVar55 - local_9e8;
              dVar30 = dVar38 * local_a78 - dVar32 * local_a08;
              dVar39 = dVar51 * dStack_a70 - dVar38 * dStack_a00;
              dVar24 = dVar32 * local_a18 - dVar51 * (double)CONCAT44(uStack_9f4,local_9f8);
              dVar39 = dVar39 + dVar39;
              dVar24 = dVar24 + dVar24;
              dVar30 = dVar30 + dVar30;
              dVar40 = (dVar30 * dStack_a70 - dVar24 * dStack_a00) +
                       (double)local_af8._0_8_ * dVar39 + dVar32;
              dVar32 = (local_a18 * dVar39 - (double)CONCAT44(uStack_9f4,local_9f8) * dVar30) +
                       (double)local_af8._8_8_ * dVar24 + dVar38;
              dVar38 = dVar25;
              if ((double)local_b18._0_8_ < local_a98) {
                dVar38 = dVar40;
              }
              dVar54 = dVar28 - (double)pdVar34 * dVar49;
              dVar50 = dVar54;
              if ((double)local_b18._0_8_ < local_a98) {
                dVar50 = dVar32;
              }
              dVar49 = dVar55 - dVar49 * (double)local_b28;
              dVar39 = dVar51 + dVar30 * (double)local_af8._0_8_ +
                       (dVar24 * local_a78 - dVar39 * local_a08);
              dVar30 = dVar39;
              if ((double)local_b18._0_8_ < local_a98) {
                dVar32 = dVar54;
                dVar30 = dVar49;
                dVar40 = dVar25;
              }
              dVar55 = (dVar49 - dVar55) * (double)local_a58 +
                       (dVar25 - dVar22) * local_ab8 + (dVar54 - dVar28) * local_ac8;
              if ((dVar55 != 1.79769313486232e+308) || (NAN(dVar55))) {
                iVar5 = *(int *)(param_6 + 0x5b0);
                *(uint *)(param_6 + 0x5b0) = iVar5 + 1U;
                if (*(uint *)(param_6 + 0x5b4) < iVar5 + 1U) {
                  FUN_146ce5792(lVar11,iVar5);
                }
                lVar9 = *(longlong *)(param_6 + 0x5a8);
                if (*(longlong *)(param_6 + 0x5a8) == 0) {
                  lVar9 = lVar11;
                }
                lVar10 = (longlong)iVar5 * 0x6c;
                fVar19 = (float)(double)((ulonglong)dVar49 & (ulonglong)local_a48 |
                                        ~(ulonglong)local_a48 & (ulonglong)dVar39);
                fVar26 = (float)dVar50;
                fVar20 = (float)dVar38;
                fVar21 = (float)dVar30;
                fVar23 = (float)dVar32;
                fVar27 = (float)dVar40;
                *(float *)(lVar9 + lVar10) = fVar20;
                *(float *)(lVar9 + 4 + lVar10) = fVar26;
                *(float *)(lVar9 + 8 + lVar10) = fVar19;
                *(float *)(lVar9 + 0xc + lVar10) = fVar27;
                *(float *)(lVar9 + 0x10 + lVar10) = fVar23;
                *(float *)(lVar9 + 0x14 + lVar10) = fVar21;
                *(undefined4 *)(lVar9 + 0x18 + lVar10) = local_a88._0_4_;
                *(float *)(lVar9 + 0x1c + lVar10) = local_b2c;
                *(undefined4 *)(lVar9 + 0x20 + lVar10) = local_ad8._0_4_;
                *(float *)(lVar9 + 0x24 + lVar10) = (float)dVar55;
                *(undefined4 *)(lVar9 + 0x28 + lVar10) = 0xffffffff;
                *(char *)(lVar9 + 0x2c + lVar10) = bVar2 * '\x02' + '\x01';
                *(float *)(lVar9 + 0x3c + lVar10) = fVar20;
                *(float *)(lVar9 + 0x40 + lVar10) = fVar26;
                *(float *)(lVar9 + 0x44 + lVar10) = fVar19;
                *(float *)(lVar9 + 0x48 + lVar10) = fVar27;
                *(float *)(lVar9 + 0x4c + lVar10) = fVar23;
                *(float *)(lVar9 + 0x50 + lVar10) = fVar21;
                *(float *)(lVar9 + 0x54 + lVar10) = fVar20;
                *(float *)(lVar9 + 0x58 + lVar10) = fVar26;
                *(float *)(lVar9 + 0x5c + lVar10) = fVar19;
                *(float *)(lVar9 + 0x60 + lVar10) = fVar27;
                *(float *)(lVar9 + 100 + lVar10) = fVar23;
                *(float *)(lVar9 + 0x68 + lVar10) = fVar21;
                *(undefined8 *)(lVar9 + 0x34 + lVar10) = 0;
                *(undefined1 *)(lVar9 + 0x30 + lVar10) = 0;
                lVar9 = *(longlong *)(param_6 + 0x5a8);
                if (*(longlong *)(param_6 + 0x5a8) == 0) {
                  lVar9 = lVar11;
                }
                fVar19 = INFINITY;
                if ((longlong)*(int *)(param_6 + 0x16c) != -1) {
                  fVar19 = *(float *)(lVar9 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
                }
                if (*(float *)(lVar9 + 0x24 + lVar10) < fVar19) {
                  *(int *)(param_6 + 0x16c) = iVar5;
                }
              }
              lVar16 = lVar16 + 0x18;
              pdVar34 = (double *)local_a68._0_8_;
            } while (uVar17 * 0x18 != lVar16);
          }
          else if ((DAT_14c992bf9 != '\x01') || (dStack_120 <= 0.0)) {
            local_114 = 2;
            if ((0.0 < local_aa0._0_4_ && (*(ushort *)(param_6 + 0x374) & 0x40) == 0) ||
               (0.0 < local_b2c && -1 < (char)*(ushort *)(param_6 + 0x374))) {
              FUN_1409cc048(uVar14,&local_9c8,iVar5,local_168);
              local_b80 = (double ***)&local_768;
              local_b88 = &local_468;
              FUN_1402691ae(*(undefined8 *)((longlong)dVar38 + 0x28),&local_788,iVar6,&local_150);
              dVar55 = (double)local_9b8._0_8_;
              if (bVar13 == 3) {
                local_9c8 = local_9c8 - dVar28 * local_aa8;
                dStack_9c0 = dStack_9c0 - dVar32 * local_aa8;
                dVar55 = (double)local_9b8._0_8_ - (double)pdVar34 * local_aa8;
              }
              dVar32 = local_9c8 - local_8d8;
              dVar38 = dStack_9c0 - dStack_8d0;
              dVar55 = dVar55 - local_8c8;
              dVar40 = -local_8f8[0];
              dVar30 = -local_8f8[1];
              dVar22 = (double)local_8e8._0_8_ * -1.0;
              dVar28 = (double)local_8e8._8_8_ * 1.0;
              dVar25 = dVar32 * dVar22 - dVar40 * dVar55;
              dVar39 = dVar38 * dVar40 - dVar32 * dVar30;
              dVar24 = dVar55 * dVar30 - dVar38 * dVar22;
              dVar24 = dVar24 + dVar24;
              dVar25 = dVar25 + dVar25;
              dVar39 = dVar39 + dVar39;
              dVar55 = ((dVar28 * dVar39 + dVar55 + (dVar25 * dVar40 - dVar24 * dVar30)) -
                       (double)local_778) * (double)local_128 +
                       (((dVar39 * dVar30 - dVar25 * dVar22) + dVar28 * dVar24 + dVar32) -
                       (double)local_788) * local_138 +
                       ((local_8f8[0] * dVar39 + dVar22 * dVar24 + dVar28 * dVar25 + dVar38) -
                       (double)ppdStack_780) * dStack_130;
              if ((double)*(float *)(param_6 + 300) < dVar55) goto LAB_14130fc23;
              dVar28 = (double)local_128 * dVar55 + (double)local_778;
              dVar22 = dStack_130 * dVar55 + (double)ppdStack_780;
              dVar32 = local_138 * dVar55 + (double)local_788;
              local_b28 = (double **)local_128;
              uStack_b20 = 0;
              dVar30 = dVar32 * (double)local_8e8._0_8_ - local_8f8[0] * dVar28;
              dVar38 = dVar22 * local_8f8[0] - local_8f8[1] * dVar32;
              dVar40 = dVar28 * local_8f8[1] - (double)local_8e8._0_8_ * dVar22;
              dVar40 = dVar40 + dVar40;
              dVar30 = dVar30 + dVar30;
              dVar38 = dVar38 + dVar38;
              dVar22 = dStack_8d0 +
                       ((double)local_8e8._0_8_ * dVar40 - local_8f8[0] * dVar38) +
                       (double)local_8e8._8_8_ * dVar30 + dVar22;
              local_158 = local_8c8 +
                          (double)local_8e8._8_8_ * dVar38 + dVar28 +
                          (dVar30 * local_8f8[0] - dVar40 * local_8f8[1]);
              local_168._8_4_ = SUB84(dVar22,0);
              local_168._0_8_ =
                   local_8d8 +
                   (dVar38 * local_8f8[1] - dVar30 * (double)local_8e8._0_8_) +
                   (double)local_8e8._8_8_ * dVar40 + dVar32;
              local_168._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
              local_150 = local_788;
              ppdStack_148 = ppdStack_780;
              local_140 = local_778;
              ppdVar53 = (double **)local_128;
              dVar39 = dStack_130;
              dStack_120 = dVar55;
            }
            if ((dStack_120 != 1.79769313486232e+308) || (NAN(dStack_120))) {
              iVar5 = *(int *)(param_6 + 0x5b0);
              *(uint *)(param_6 + 0x5b0) = iVar5 + 1U;
              if (*(uint *)(param_6 + 0x5b4) < iVar5 + 1U) {
                FUN_146ce5792(param_6 + 0x3f8,iVar5);
                ppdVar53 = (double **)local_128;
                dVar39 = dStack_130;
              }
              lVar8 = *(longlong *)(param_6 + 0x5a8);
              if (*(longlong *)(param_6 + 0x5a8) == 0) {
                lVar8 = param_6 + 0x3f8;
              }
              lVar11 = (longlong)iVar5 * 0x6c;
              *(float *)(lVar8 + lVar11) = (float)(double)local_168._0_8_;
              *(float *)(lVar8 + 4 + lVar11) = (float)(double)local_168._8_8_;
              *(float *)(lVar8 + 8 + lVar11) = (float)local_158;
              *(float *)(lVar8 + 0xc + lVar11) = (float)(double)local_150;
              *(float *)(lVar8 + 0x10 + lVar11) = (float)(double)ppdStack_148;
              *(float *)(lVar8 + 0x14 + lVar11) = (float)(double)local_140;
              *(float *)(lVar8 + 0x18 + lVar11) = (float)local_138;
              *(float *)(lVar8 + 0x1c + lVar11) = (float)dVar39;
              *(float *)(lVar8 + 0x20 + lVar11) = (float)(double)ppdVar53;
              *(float *)(lVar8 + 0x24 + lVar11) = (float)dStack_120;
              *(undefined4 *)(lVar8 + 0x28 + lVar11) = local_118;
              *(undefined1 *)(lVar8 + 0x2c + lVar11) = local_114;
              *(float *)(lVar8 + 0x3c + lVar11) = (float)(double)local_168._0_8_;
              *(float *)(lVar8 + 0x40 + lVar11) = (float)(double)local_168._8_8_;
              *(float *)(lVar8 + 0x44 + lVar11) = (float)local_158;
              *(float *)(lVar8 + 0x48 + lVar11) = (float)(double)local_150;
              *(float *)(lVar8 + 0x4c + lVar11) = (float)(double)ppdStack_148;
              *(float *)(lVar8 + 0x50 + lVar11) = (float)(double)local_140;
              *(float *)(lVar8 + 0x54 + lVar11) = (float)(double)local_168._0_8_;
              *(float *)(lVar8 + 0x58 + lVar11) = (float)(double)local_168._8_8_;
              *(float *)(lVar8 + 0x5c + lVar11) = (float)local_158;
              *(float *)(lVar8 + 0x60 + lVar11) = (float)(double)local_150;
              *(float *)(lVar8 + 100 + lVar11) = (float)(double)ppdStack_148;
              *(float *)(lVar8 + 0x68 + lVar11) = (float)(double)local_140;
              *(undefined8 *)(lVar8 + 0x34 + lVar11) = 0;
              *(undefined1 *)(lVar8 + 0x30 + lVar11) = 0;
              lVar8 = *(longlong *)(param_6 + 0x5a8);
              if (*(longlong *)(param_6 + 0x5a8) == 0) {
                lVar8 = param_6 + 0x3f8;
              }
              if ((longlong)*(int *)(param_6 + 0x16c) == -1) {
                fVar19 = INFINITY;
              }
              else {
                fVar19 = *(float *)(lVar8 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
              }
              if (*(float *)(lVar8 + 0x24 + lVar11) < fVar19) {
                *(int *)(param_6 + 0x16c) = iVar5;
              }
            }
          }
        }
      }
    }
  }
LAB_14130fc23:
  if ((local_f0 ^ (ulonglong)auStack_ba8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014130ec13:
  bVar2 = (double)ppdVar29 <= (double)ppdVar52;
  dVar55 = 1.0 / (double)ppdVar52;
  local_7b0 = local_7b0 * dVar55;
  dStack_7a8 = dStack_7a8 * dVar55;
  dStack_7a0 = dStack_7a0 * dVar55;
  dVar55 = -dStack_7a0;
  pdVar34 = (double *)-local_7b0;
  pdVar36 = (double *)-dStack_7a8;
  bVar18 = iVar5 == 0x1f;
  iVar5 = iVar5 + 1;
  ppdVar29 = ppdVar52;
  if (bVar18 || bVar2) goto code_r0x00014130ec88;
  goto LAB_14130e780;
code_r0x00014130ec88:
  if ((double)ppdVar42 <= (double)pdVar46) {
    ppdVar42 = (double **)pdVar46;
  }
  *(uint *)(param_6 + 0x330) = (uint)local_108;
LAB_14130ec9b:
  if ((int)(uint)local_108 < 1) {
    dVar28 = 0.0;
    dVar38 = 0.0;
    dVar32 = 0.0;
    dVar40 = 0.0;
    dVar30 = 0.0;
    local_848 = 0.0;
  }
  else {
    pdVar46 = (double *)(param_6 + 0x2c0);
    local_848 = 0.0;
    uVar15 = 0;
    dVar30 = 0.0;
    dVar40 = 0.0;
    dVar32 = 0.0;
    dVar38 = 0.0;
    dVar28 = 0.0;
    do {
      dVar39 = *(double *)(local_b18._0_8_ + uVar15 * 8);
      local_848 = local_848 + pdVar46[-0xc] * dVar39;
      dVar30 = dVar30 + pdVar46[-0xd] * dVar39;
      dVar40 = dVar40 + pdVar46[-0xe] * dVar39;
      dVar32 = dVar32 + *pdVar46 * dVar39;
      dVar38 = dVar38 + pdVar46[-1] * dVar39;
      dVar28 = dVar28 + dVar39 * pdVar46[-2];
      uVar15 = uVar15 + 1;
      pdVar46 = pdVar46 + 3;
    } while ((uint)local_108 != uVar15);
  }
  dVar25 = (double)local_8e8._0_8_ * -1.0;
  dVar49 = (double)local_8e8._8_8_ * 1.0;
  dVar39 = -local_8f8[0];
  dVar24 = -local_8f8[1];
  dVar54 = (double)pdVar34 * dVar25 - dVar39 * dVar55;
  dVar51 = (double)pdVar36 * dVar39 - (double)pdVar34 * dVar24;
  dVar50 = dVar55 * dVar24 - (double)pdVar36 * dVar25;
  dVar50 = dVar50 + dVar50;
  dVar54 = dVar54 + dVar54;
  dVar51 = dVar51 + dVar51;
  puVar43 = (undefined8 *)(dVar49 * dVar51 + dVar55 + (dVar54 * dVar39 - dVar50 * dVar24));
  pdVar46 = (double *)((dVar51 * dVar24 - dVar54 * dVar25) + dVar49 * dVar50 + (double)pdVar34);
  pdVar48 = (double *)(local_8f8[0] * dVar51 + dVar25 * dVar50 + dVar49 * dVar54 + (double)pdVar36);
  local_848 = dVar55 * local_ac8 + local_848;
  ppdStack_850 = (double **)((double)pdVar36 * local_ac8 + dVar30);
  local_858 = (double *)(local_ac8 * (double)pdVar34 + dVar40);
  local_868 = (int *)(dVar32 - local_ab8 * (double)puVar43);
  ppdStack_870 = (double **)(dVar38 - (double)pdVar48 * local_ab8);
  local_878 = (double *)(dVar28 - (double)pdVar46 * local_ab8);
  uVar14 = local_af8._0_8_;
  dStack_120 = local_ae0 - (double)ppdVar52;
  local_b28 = ppdVar42;
  local_ad8 = ppdVar52;
  dStack_ad0 = dVar22;
  local_900 = (double *)ppdVar42;
  goto LAB_14130ef0f;
}



// FUNCTION 141310f1d FUN_141310f1d body=2044 status=ok
// SIG undefined FUN_141310f1d(void)

longlong FUN_141310f1d(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                      double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  double *pdVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  bool bVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x58);
  if (plVar6 == (longlong *)0x0) {
LAB_141311671:
    *param_9 = 0;
    uVar17 = 0;
  }
  else {
    cVar5 = *(char *)(*(longlong *)(param_2 + 0x88) + 0x60);
    if (cVar5 == '\x01') {
      uVar16 = (uint)*(byte *)(*plVar6 + 1 + (longlong)param_5 * 2);
    }
    else if (cVar5 == '\x02') {
      uVar16 = (uint)*(short *)(*plVar6 + 2 + (longlong)param_5 * 4);
    }
    else {
      if (cVar5 != '\x03') goto LAB_141311671;
      uVar16 = *(uint *)(*plVar6 + 4 + (longlong)param_5 * 8);
    }
    uVar17 = 0x20;
    if ((int)uVar16 < 0x20) {
      uVar17 = (ulonglong)uVar16;
    }
    *param_9 = (uint)uVar17;
    if (0 < (int)uVar16) {
      lVar12 = (longlong)param_5;
      pdVar19 = (double *)(param_7 + 0x10);
      lVar14 = 0;
      do {
        lVar21 = *(longlong *)(param_2 + 0x88);
        plVar6 = *(longlong **)(lVar21 + 0x58);
        uVar16 = 0xffffffff;
        if (plVar6 != (longlong *)0x0) {
          cVar5 = *(char *)(lVar21 + 0x60);
          if (cVar5 == '\x01') {
            uVar16 = (uint)*(byte *)(plVar6[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar6 + lVar12 * 2) + lVar14) * 3);
          }
          else if (cVar5 == '\x02') {
            uVar16 = (uint)*(short *)(plVar6[2] + 2 +
                                     (longlong)((int)*(short *)(*plVar6 + lVar12 * 4) + (int)lVar14)
                                     * 6);
          }
          else if (cVar5 == '\x03') {
            uVar16 = *(uint *)(plVar6[2] + 4 + (*(int *)(*plVar6 + lVar12 * 8) + lVar14) * 0xc);
          }
        }
        lVar21 = *(longlong *)(lVar21 + 0x30);
        lVar22 = (longlong)(int)uVar16;
        dVar25 = (double)*(float *)(lVar21 + 8 + lVar22 * 0xc) * *(double *)(param_2 + 0x30);
        dVar7 = (double)*(float *)(lVar21 + 4 + lVar22 * 0xc) * *(double *)(param_2 + 0x28);
        dVar29 = (double)*(float *)(lVar21 + lVar22 * 0xc) * *(double *)(param_2 + 0x20);
        dVar27 = *param_3;
        dVar33 = param_3[1];
        dVar31 = param_3[2];
        dVar26 = param_3[3];
        dVar1 = param_3[3];
        dVar34 = dVar29 * dVar31 - dVar27 * dVar25;
        dVar32 = dVar7 * dVar27 - dVar33 * dVar29;
        dVar8 = dVar25 * dVar33 - dVar31 * dVar7;
        dVar8 = dVar8 + dVar8;
        dVar34 = dVar34 + dVar34;
        dVar32 = dVar32 + dVar32;
        dVar4 = param_3[5];
        dVar30 = param_3[6];
        pdVar19[-2] = (dVar32 * dVar33 - dVar34 * dVar31) + dVar26 * dVar8 + dVar29 + param_3[4];
        pdVar19[-1] = (dVar31 * dVar8 - dVar27 * dVar32) + dVar1 * dVar34 + dVar7 + dVar4;
        *pdVar19 = dVar32 * dVar26 + dVar25 + (dVar34 * dVar27 - dVar8 * dVar33) + dVar30;
        lVar14 = lVar14 + 1;
        uVar17 = (ulonglong)(int)*param_9;
        pdVar19 = pdVar19 + 3;
      } while (lVar14 < (longlong)uVar17);
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x28);
  plVar6 = *(longlong **)(lVar12 + 0x58);
  if (plVar6 != (longlong *)0x0) {
    cVar5 = *(char *)(lVar12 + 0x60);
    if (cVar5 == '\x01') {
      uVar13 = (ulonglong)*(byte *)(*plVar6 + 1 + (longlong)param_4 * 2);
      uVar16 = (uint)*(byte *)(plVar6[2] + -2 +
                              (*(byte *)(*plVar6 + (longlong)param_4 * 2) + uVar13) * 3);
    }
    else if (cVar5 == '\x02') {
      uVar13 = (ulonglong)*(short *)(*plVar6 + 2 + (longlong)param_4 * 4);
      uVar16 = (uint)*(short *)(plVar6[2] + -4 +
                               ((longlong)*(short *)(*plVar6 + (longlong)param_4 * 4) + uVar13) * 6)
      ;
    }
    else {
      if (cVar5 != '\x03') {
        return param_7;
      }
      uVar13 = (ulonglong)*(int *)(*plVar6 + 4 + (longlong)param_4 * 8);
      uVar16 = *(uint *)(plVar6[2] + -8 +
                        ((longlong)*(int *)(*plVar6 + (longlong)param_4 * 8) + uVar13) * 0xc);
    }
    if ((1 < (uint)uVar17) && (0 < (int)uVar13)) {
      lVar22 = (longlong)(int)uVar16;
      lVar12 = *(longlong *)(lVar12 + 0x30);
      lVar20 = (longlong)param_4;
      iVar18 = 0;
      lVar14 = param_8;
      lVar21 = param_7;
      dVar26 = (double)*(float *)(lVar12 + 4 + lVar22 * 0xc);
      dVar30 = (double)*(float *)(lVar12 + 8 + lVar22 * 0xc);
      dVar1 = (double)*(float *)(lVar12 + lVar22 * 0xc);
      do {
        param_7 = lVar14;
        lVar12 = *(longlong *)(param_1 + 0x28);
        plVar6 = *(longlong **)(lVar12 + 0x58);
        uVar16 = 0xffffffff;
        if (plVar6 != (longlong *)0x0) {
          cVar5 = *(char *)(lVar12 + 0x60);
          if (cVar5 == '\x01') {
            uVar16 = (uint)*(byte *)(plVar6[2] + 1 +
                                    (ulonglong)((uint)*(byte *)(*plVar6 + lVar20 * 2) + iVar18) * 3)
            ;
          }
          else if (cVar5 == '\x02') {
            uVar16 = (uint)*(short *)(plVar6[2] + 2 +
                                     ((longlong)iVar18 + (longlong)*(short *)(*plVar6 + lVar20 * 4))
                                     * 6);
          }
          else if (cVar5 == '\x03') {
            uVar16 = *(uint *)(plVar6[2] + 4 +
                              ((longlong)iVar18 + (longlong)*(int *)(*plVar6 + lVar20 * 8)) * 0xc);
          }
        }
        lVar12 = *(longlong *)(lVar12 + 0x30);
        lVar14 = (longlong)(int)uVar16;
        dVar7 = (double)*(float *)(lVar12 + 8 + lVar14 * 0xc);
        dVar32 = (double)*(float *)(lVar12 + 4 + lVar14 * 0xc);
        dVar8 = (double)*(float *)(lVar12 + lVar14 * 0xc);
        dVar4 = *param_6 * (dVar26 - dVar32) - (dVar1 - dVar8) * param_6[1];
        dVar1 = (dVar1 - dVar8) * param_6[2] - (dVar30 - dVar7) * *param_6;
        dVar34 = param_6[1] * (dVar30 - dVar7) - (dVar26 - dVar32) * param_6[2];
        dVar33 = dVar4 * dVar4 + dVar34 * dVar34 + dVar1 * dVar1;
        dVar27 = SQRT(dVar33);
        dVar26 = 0.0;
        dVar30 = 0.0;
        if (9.999999747378752e-05 <= dVar33) {
          dVar30 = dVar4 / dVar27;
          dVar26 = dVar1 / dVar27;
        }
        dVar25 = (double)(-(ulonglong)(dVar33 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar33 < 9.999999747378752e-05) &
                         (ulonglong)(dVar34 / dVar27));
        dVar27 = dVar7 * dVar30 + dVar8 * dVar25 + dVar26 * dVar32;
        dVar33 = dVar27 * 9.99999993922529e-09 + dVar27;
        uVar15 = (ulonglong)((int)uVar17 - 1);
        dVar1 = *(double *)(lVar21 + 0x10 + uVar15 * 0x18);
        dVar4 = *(double *)(lVar21 + uVar15 * 0x18);
        dVar34 = *(double *)(lVar21 + 8 + uVar15 * 0x18);
        uVar15 = uVar17 & 0xffffffff;
        uVar17 = 0;
        lVar12 = 0;
        dVar31 = dVar1 * dVar30 + dVar25 * dVar4 + dVar34 * dVar26;
LAB_141311383:
        uVar16 = (uint)uVar17;
        dVar29 = *(double *)(lVar21 + lVar12);
        dVar2 = *(double *)(lVar21 + 8 + lVar12);
        dVar3 = *(double *)(lVar21 + 0x10 + lVar12);
        dVar28 = dVar3 * dVar30 + dVar29 * dVar25 + dVar26 * dVar2;
        if (dVar33 < dVar28) {
          if (dVar31 < dVar33) {
            dVar9 = dVar1;
            dVar10 = dVar4;
            dVar11 = dVar34;
            if (9.99999993922529e-09 <= ABS(dVar28 - dVar31)) {
              dVar31 = (dVar27 - dVar31) / (dVar28 - dVar31);
              dVar9 = dVar1 + (dVar3 - dVar1) * dVar31;
              dVar10 = dVar4 + (dVar29 - dVar4) * dVar31;
              dVar11 = dVar34 + (dVar2 - dVar34) * dVar31;
            }
            goto LAB_1413113db;
          }
          goto LAB_1413113f8;
        }
        dVar9 = dVar3;
        dVar10 = dVar29;
        dVar11 = dVar2;
        if (dVar31 <= dVar33) {
LAB_1413113db:
          uVar23 = (ulonglong)uVar16;
          uVar17 = (ulonglong)(uVar16 + 1);
          *(double *)(param_7 + uVar23 * 0x18) = dVar10;
          *(double *)(param_7 + 8 + uVar23 * 0x18) = dVar11;
          *(double *)(param_7 + 0x10 + uVar23 * 0x18) = dVar9;
LAB_1413113f8:
          if ((0x1f < (uint)uVar17) ||
             (bVar24 = uVar15 * 0x18 + -0x18 == lVar12, lVar12 = lVar12 + 0x18, dVar31 = dVar28,
             dVar4 = dVar29, dVar34 = dVar2, dVar1 = dVar3, bVar24)) goto LAB_141311543;
          goto LAB_141311383;
        }
        if (9.99999993922529e-09 <= ABS(dVar28 - dVar31)) {
          dVar31 = (dVar27 - dVar31) / (dVar28 - dVar31);
          dVar1 = dVar1 + (dVar3 - dVar1) * dVar31;
          dVar34 = dVar34 + (dVar2 - dVar34) * dVar31;
          dVar4 = dVar4 + (dVar29 - dVar4) * dVar31;
        }
        *(double *)(param_7 + uVar17 * 0x18) = dVar4;
        *(double *)(param_7 + 8 + uVar17 * 0x18) = dVar34;
        *(double *)(param_7 + 0x10 + uVar17 * 0x18) = dVar1;
        if (uVar16 < 0x1f) {
          uVar16 = uVar16 + 1;
          goto LAB_1413113db;
        }
        uVar17 = 0x20;
LAB_141311543:
        *param_9 = (uint)uVar17;
        iVar18 = iVar18 + 1;
      } while ((iVar18 < (int)uVar13) &&
              (lVar14 = lVar21, lVar21 = param_7, dVar26 = dVar32, dVar30 = dVar7, dVar1 = dVar8,
              1 < (uint)uVar17));
    }
  }
  return param_7;
}



// FUNCTION 141311719 FUN_141311719 body=2191 status=ok
// SIG undefined FUN_141311719(void)

longlong FUN_141311719(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                      double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  double *pdVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar2;
  
  plVar7 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x58);
  if (plVar7 == (longlong *)0x0) {
LAB_141311f4b:
    *param_9 = 0;
    uVar18 = 0;
  }
  else {
    cVar6 = *(char *)(*(longlong *)(param_2 + 0x28) + 0x60);
    if (cVar6 == '\x01') {
      uVar15 = (ulonglong)*(byte *)(*plVar7 + 1 + (longlong)param_5 * 2);
    }
    else if (cVar6 == '\x02') {
      uVar15 = (ulonglong)(uint)(int)*(short *)(*plVar7 + 2 + (longlong)param_5 * 4);
    }
    else {
      if (cVar6 != '\x03') goto LAB_141311f4b;
      uVar15 = (ulonglong)*(uint *)(*plVar7 + 4 + (longlong)param_5 * 8);
    }
    uVar18 = 0x20;
    if ((int)uVar15 < 0x20) {
      uVar18 = uVar15;
    }
    *param_9 = (uint)uVar18;
    if (0 < (int)uVar15) {
      lVar14 = (longlong)param_5;
      pdVar20 = (double *)(param_7 + 0x10);
      lVar16 = 0;
      do {
        lVar22 = *(longlong *)(param_2 + 0x28);
        plVar7 = *(longlong **)(lVar22 + 0x58);
        uVar17 = 0xffffffff;
        if (plVar7 != (longlong *)0x0) {
          cVar6 = *(char *)(lVar22 + 0x60);
          if (cVar6 == '\x01') {
            uVar17 = (uint)*(byte *)(plVar7[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar7 + lVar14 * 2) + lVar16) * 3);
          }
          else if (cVar6 == '\x02') {
            uVar17 = (uint)*(short *)(plVar7[2] + 2 +
                                     (longlong)((int)*(short *)(*plVar7 + lVar14 * 4) + (int)lVar16)
                                     * 6);
          }
          else if (cVar6 == '\x03') {
            uVar17 = *(uint *)(plVar7[2] + 4 + (*(int *)(*plVar7 + lVar14 * 8) + lVar16) * 0xc);
          }
        }
        lVar22 = *(longlong *)(lVar22 + 0x30);
        lVar23 = (longlong)(int)uVar17;
        dVar27 = (double)*(float *)(lVar22 + 8 + lVar23 * 0xc);
        dVar28 = (double)*(float *)(lVar22 + 4 + lVar23 * 0xc);
        dVar32 = (double)*(float *)(lVar22 + lVar23 * 0xc);
        dVar9 = *param_3;
        dVar10 = param_3[1];
        dVar30 = param_3[2];
        dVar1 = param_3[3];
        dVar2 = param_3[3];
        dVar34 = dVar32 * dVar30 - dVar9 * dVar27;
        dVar29 = dVar28 * dVar9 - dVar10 * dVar32;
        dVar31 = dVar27 * dVar10 - dVar30 * dVar28;
        dVar31 = dVar31 + dVar31;
        dVar34 = dVar34 + dVar34;
        dVar29 = dVar29 + dVar29;
        dVar33 = param_3[5];
        dVar35 = param_3[6];
        pdVar20[-2] = (dVar29 * dVar10 - dVar34 * dVar30) + dVar1 * dVar31 + dVar32 + param_3[4];
        pdVar20[-1] = (dVar30 * dVar31 - dVar9 * dVar29) + dVar2 * dVar34 + dVar28 + dVar33;
        *pdVar20 = dVar29 * dVar1 + dVar27 + (dVar34 * dVar9 - dVar31 * dVar10) + dVar35;
        lVar16 = lVar16 + 1;
        uVar18 = (ulonglong)(int)*param_9;
        pdVar20 = pdVar20 + 3;
      } while (lVar16 < (longlong)uVar18);
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x88);
  plVar7 = *(longlong **)(lVar14 + 0x58);
  if (plVar7 != (longlong *)0x0) {
    cVar6 = *(char *)(lVar14 + 0x60);
    if (cVar6 == '\x01') {
      uVar15 = (ulonglong)*(byte *)(*plVar7 + 1 + (longlong)param_4 * 2);
      uVar17 = (uint)*(byte *)(plVar7[2] + -2 +
                              (*(byte *)(*plVar7 + (longlong)param_4 * 2) + uVar15) * 3);
    }
    else if (cVar6 == '\x02') {
      uVar15 = (ulonglong)*(short *)(*plVar7 + 2 + (longlong)param_4 * 4);
      uVar17 = (uint)*(short *)(plVar7[2] + -4 +
                               ((longlong)*(short *)(*plVar7 + (longlong)param_4 * 4) + uVar15) * 6)
      ;
    }
    else {
      if (cVar6 != '\x03') {
        return param_7;
      }
      uVar15 = (ulonglong)*(int *)(*plVar7 + 4 + (longlong)param_4 * 8);
      uVar17 = *(uint *)(plVar7[2] + -8 +
                        ((longlong)*(int *)(*plVar7 + (longlong)param_4 * 8) + uVar15) * 0xc);
    }
    if ((1 < (uint)uVar18) && (0 < (int)uVar15)) {
      uVar26 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x20));
      uVar24 = ~uVar26 & ((&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)] ^ 0x8000000000000000)
               | uVar26 & (&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)];
      uVar26 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x30));
      dVar33 = (double)(~uVar26 & (uVar24 ^ 0x8000000000000000) | uVar24 & uVar26);
      lVar23 = (longlong)(int)uVar17;
      lVar14 = *(longlong *)(lVar14 + 0x30);
      lVar21 = (longlong)param_4;
      iVar19 = 0;
      lVar16 = param_7;
      lVar22 = param_8;
      dVar35 = *(double *)(param_1 + 0x28) * (double)*(float *)(lVar14 + 4 + lVar23 * 0xc);
      dVar2 = (double)*(float *)(lVar14 + lVar23 * 0xc) * *(double *)(param_1 + 0x20);
      dVar1 = (double)*(float *)(lVar14 + 8 + lVar23 * 0xc) * *(double *)(param_1 + 0x30);
      do {
        param_7 = lVar22;
        lVar22 = lVar16;
        lVar14 = *(longlong *)(param_1 + 0x88);
        plVar7 = *(longlong **)(lVar14 + 0x58);
        uVar17 = 0xffffffff;
        if (plVar7 != (longlong *)0x0) {
          cVar6 = *(char *)(lVar14 + 0x60);
          if (cVar6 == '\x01') {
            uVar17 = (uint)*(byte *)(plVar7[2] + 1 +
                                    (ulonglong)((uint)*(byte *)(*plVar7 + lVar21 * 2) + iVar19) * 3)
            ;
          }
          else if (cVar6 == '\x02') {
            uVar17 = (uint)*(short *)(plVar7[2] + 2 +
                                     ((longlong)iVar19 + (longlong)*(short *)(*plVar7 + lVar21 * 4))
                                     * 6);
          }
          else if (cVar6 == '\x03') {
            uVar17 = *(uint *)(plVar7[2] + 4 +
                              ((longlong)iVar19 + (longlong)*(int *)(*plVar7 + lVar21 * 8)) * 0xc);
          }
        }
        lVar14 = *(longlong *)(lVar14 + 0x30);
        lVar16 = (longlong)(int)uVar17;
        dVar29 = (double)*(float *)(lVar14 + 8 + lVar16 * 0xc) * *(double *)(param_1 + 0x30);
        dVar9 = (double)*(float *)(lVar14 + 4 + lVar16 * 0xc) * *(double *)(param_1 + 0x28);
        dVar10 = (double)*(float *)(lVar14 + lVar16 * 0xc) * *(double *)(param_1 + 0x20);
        dVar27 = (param_6[1] * (dVar1 - dVar29) - (dVar35 - dVar9) * param_6[2]) * dVar33;
        dVar1 = ((dVar2 - dVar10) * param_6[2] - (dVar1 - dVar29) * *param_6) * dVar33;
        dVar28 = (*param_6 * (dVar35 - dVar9) - (dVar2 - dVar10) * param_6[1]) * dVar33;
        dVar31 = dVar28 * dVar28 + dVar27 * dVar27 + dVar1 * dVar1;
        dVar2 = SQRT(dVar31);
        dVar35 = 0.0;
        dVar30 = 0.0;
        if (9.999999747378752e-05 <= dVar31) {
          dVar30 = dVar28 / dVar2;
          dVar35 = dVar1 / dVar2;
        }
        dVar34 = (double)(-(ulonglong)(dVar31 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar31 < 9.999999747378752e-05) & (ulonglong)(dVar27 / dVar2)
                         );
        dVar28 = dVar29 * dVar30 + dVar10 * dVar34 + dVar9 * dVar35;
        dVar31 = dVar28 * 9.99999993922529e-09 + dVar28;
        uVar26 = (ulonglong)((int)uVar18 - 1);
        dVar2 = *(double *)(lVar22 + 0x10 + uVar26 * 0x18);
        dVar1 = *(double *)(lVar22 + uVar26 * 0x18);
        dVar27 = *(double *)(lVar22 + 8 + uVar26 * 0x18);
        uVar26 = uVar18 & 0xffffffff;
        uVar18 = 0;
        lVar14 = 0;
        dVar32 = dVar2 * dVar30 + dVar34 * dVar1 + dVar27 * dVar35;
LAB_141311c0d:
        uVar17 = (uint)uVar18;
        dVar3 = *(double *)(lVar22 + lVar14);
        dVar4 = *(double *)(lVar22 + 8 + lVar14);
        dVar5 = *(double *)(lVar22 + 0x10 + lVar14);
        dVar8 = dVar5 * dVar30 + dVar3 * dVar34 + dVar35 * dVar4;
        if (dVar31 < dVar8) {
          if (dVar32 < dVar31) {
            dVar11 = dVar2;
            dVar12 = dVar1;
            dVar13 = dVar27;
            if (9.99999993922529e-09 <= ABS(dVar8 - dVar32)) {
              dVar32 = (dVar28 - dVar32) / (dVar8 - dVar32);
              dVar11 = dVar2 + (dVar5 - dVar2) * dVar32;
              dVar12 = dVar1 + (dVar3 - dVar1) * dVar32;
              dVar13 = dVar27 + (dVar4 - dVar27) * dVar32;
            }
            goto LAB_141311c65;
          }
          goto LAB_141311c82;
        }
        dVar11 = dVar5;
        dVar12 = dVar3;
        dVar13 = dVar4;
        if (dVar32 <= dVar31) {
LAB_141311c65:
          uVar24 = (ulonglong)uVar17;
          uVar18 = (ulonglong)(uVar17 + 1);
          *(double *)(param_7 + uVar24 * 0x18) = dVar12;
          *(double *)(param_7 + 8 + uVar24 * 0x18) = dVar13;
          *(double *)(param_7 + 0x10 + uVar24 * 0x18) = dVar11;
LAB_141311c82:
          if ((0x1f < (uint)uVar18) ||
             (bVar25 = uVar26 * 0x18 + -0x18 == lVar14, lVar14 = lVar14 + 0x18, dVar32 = dVar8,
             dVar1 = dVar3, dVar27 = dVar4, dVar2 = dVar5, bVar25)) goto LAB_141311dd5;
          goto LAB_141311c0d;
        }
        if (9.99999993922529e-09 <= ABS(dVar8 - dVar32)) {
          dVar32 = (dVar28 - dVar32) / (dVar8 - dVar32);
          dVar2 = dVar2 + (dVar5 - dVar2) * dVar32;
          dVar27 = dVar27 + (dVar4 - dVar27) * dVar32;
          dVar1 = dVar1 + (dVar3 - dVar1) * dVar32;
        }
        *(double *)(param_7 + uVar18 * 0x18) = dVar1;
        *(double *)(param_7 + 8 + uVar18 * 0x18) = dVar27;
        *(double *)(param_7 + 0x10 + uVar18 * 0x18) = dVar2;
        if (uVar17 < 0x1f) {
          uVar17 = uVar17 + 1;
          goto LAB_141311c65;
        }
        uVar18 = 0x20;
LAB_141311dd5:
        *param_9 = (uint)uVar18;
        iVar19 = iVar19 + 1;
      } while ((iVar19 < (int)uVar15) &&
              (lVar16 = param_7, dVar35 = dVar9, dVar2 = dVar10, dVar1 = dVar29, 1 < (uint)uVar18));
    }
  }
  return param_7;
}



// FUNCTION 141311fa8 FUN_141311fa8 body=422 status=ok
// SIG undefined FUN_141311fa8(void)

void FUN_141311fa8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_141312164();
  FUN_140c7d22e(param_1 + 0x2c80,param_1);
  if (*(char *)(param_1 + 0x2d88) == '\0') {
    FUN_14036c39e(param_1 + 0x2cb8,param_1);
    *(undefined1 *)(param_1 + 0x2d88) = 1;
  }
  (**(code **)(*(longlong *)(param_1 + 0x2c50) + 0x10))(param_1 + 0x2c50);
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      lVar2 = FUN_140d4a0e8(param_1);
      if (lVar2 != 0) {
        uVar3 = FUN_140d4a22a();
        lVar2 = FUN_140d4a0a6(lVar2,uVar3);
        if (lVar2 != 0) {
          if (*(char *)(param_1 + 0x178) != '\x03') {
            FUN_1458e3386(lVar1,param_1);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141312164 FUN_141312164 body=429 status=ok
// SIG undefined FUN_141312164(void)

void FUN_141312164(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140c7c830();
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar3 = FUN_1401b4c98(param_1);
    uVar5 = FUN_14085b07e(param_1 + 0x170c);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar1 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_b0[2] = lVar4;
    *local_b0 = &PTR_FUN_14b3e8f80;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_145be6cc0;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar3,param_1 + 0x1830,&local_98,uVar5);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
  }
  FUN_1447f69b6(param_1 + 0x1578);
  FUN_1447cd2ec(param_1 + 0x1568,0);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141312312 FUN_141312312 body=286 status=ok
// SIG undefined FUN_141312312(void)

undefined8 FUN_141312312(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14131242a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14131242a;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14131242a:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1413123d7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1413123d7;
    }
  }
  uVar6 = 0;
LAB_1413123d7:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141312432 FUN_141312432 body=666 status=ok
// SIG undefined FUN_141312432(void)

void FUN_141312432(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  byte bVar8;
  longlong lVar9;
  byte bVar10;
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
  code *local_58;
  longlong *local_50;
  undefined1 local_45;
  undefined1 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = FUN_14011be0c(param_1 + 0x30);
  if (lVar6 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_1403adc5e(&local_58,lVar6);
      plVar2 = *(longlong **)(local_58 + 0x70);
      AcquireSRWLockExclusive((PSRWLOCK)(plVar2 + 4));
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar7 = (int *)((longlong)local_50 + 0xc);
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
      if (0 < (int)plVar2[1]) {
        *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
        lVar6 = *plVar2;
        bVar10 = 0;
        cVar3 = FUN_140083514(param_1 + 0xb0,0);
        bVar8 = 1;
        if (cVar3 == '\0') {
          *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
          if ((longlong)*(int *)(lVar6 + 0x28) != 0) {
            piVar7 = *(int **)(lVar6 + 0x20);
            lVar9 = (longlong)*(int *)(lVar6 + 0x28) * 0x1c;
            do {
              if ((*piVar7 == (int)DAT_14cbd69a8) &&
                 (piVar7[1] == (int)((ulonglong)DAT_14cbd69a8 >> 0x20))) {
                if (piVar7 != (int *)0x0) {
                  bVar10 = *(byte *)(piVar7 + 3);
                  bVar8 = bVar10 ^ 1;
                  goto LAB_14131255c;
                }
                break;
              }
              piVar7 = piVar7 + 7;
              lVar9 = lVar9 + -0x1c;
            } while (lVar9 != 0);
          }
          bVar10 = 0;
        }
LAB_14131255c:
        local_41 = 0;
        cVar3 = FUN_1403adb6e(lVar6,bVar8,DAT_14cbd6990);
        local_43 = 0;
        cVar4 = FUN_1403adb6e(lVar6,bVar10,DAT_14cbd69a8);
        local_45 = 0;
        cVar5 = FUN_1403adb6e(lVar6,0,DAT_14cbd69c0);
        if (((cVar3 != '\0') || (cVar4 != '\0')) || (cVar5 != '\0')) {
          *(int *)(plVar2 + 3) = (int)plVar2[3] + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413126e8 FUN_1413126e8 body=2049 status=ok
// SIG undefined FUN_1413126e8(void)

void FUN_1413126e8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  bool bVar24;
  
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    return;
  }
  plVar11 = *(longlong **)(param_1 + 0xe8);
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar11[1] < 1) {
    return;
  }
  lVar15 = 0;
  iVar22 = (int)plVar11[1];
  do {
    iVar7 = iVar22;
    if (iVar7 == 0) {
      plVar11 = (longlong *)0x0;
      goto LAB_14131274b;
    }
    LOCK();
    iVar22 = (int)plVar11[1];
    bVar24 = iVar7 == iVar22;
    if (bVar24) {
      *(int *)(plVar11 + 1) = iVar7 + 1;
      iVar22 = iVar7;
    }
    UNLOCK();
  } while (!bVar24);
  lVar15 = *(longlong *)(param_1 + 0xe0);
LAB_14131274b:
  lVar12 = *(longlong *)(lVar15 + 0x20);
  if (lVar12 == 0) {
    uVar9 = FUN_145cd2a6e();
    lVar12 = FUN_14477b664(uVar9);
    *(longlong *)(lVar15 + 0x20) = lVar12;
  }
  lVar14 = *(longlong *)(lVar15 + 0x28);
  if (((lVar14 == 0) && (lVar14 = 0, lVar12 != 0)) && (*(longlong *)(lVar15 + 0x18) != 0)) {
    plVar2 = *(longlong **)(lVar12 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 == '\0')) {
      lVar14 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar14 = FUN_144aff482(uVar9,(longlong *)(lVar15 + 0x18));
    }
    *(longlong *)(lVar15 + 0x28) = lVar14;
  }
  if (iVar7 != 0) {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (lVar14 == 0) {
    return;
  }
  iVar22 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar22 < 0) {
    return;
  }
  if (*(int *)(lVar14 + 0x20) <= iVar22) {
    return;
  }
  uVar17 = *(uint *)(param_2 + 0xf88);
  lVar15 = (longlong)(int)uVar17;
  if (lVar15 == 0) {
    return;
  }
  lVar14 = *(longlong *)(lVar14 + 0x18) + (longlong)iVar22 * 0xb8 + 0x90;
  lVar12 = *(longlong *)(param_2 + 0xf80);
  if (*(longlong *)(param_2 + 0xf80) == 0) {
    lVar12 = param_2;
  }
  lVar8 = FUN_1400d690e(lVar12);
  if (lVar8 == 0) {
    bVar4 = 1;
  }
  else {
    uVar9 = FUN_140edfc58(lVar8);
    bVar4 = FUN_141312eea(lVar14,uVar9);
    bVar4 = bVar4 ^ 1;
  }
  uVar13 = 0;
  uVar18 = 0;
LAB_14131281c:
  do {
    if ((int)(uVar18 + 1) < (int)uVar17) {
      lVar20 = (longlong)(int)uVar18;
      lVar21 = lVar20 + 2;
      lVar8 = lVar20 * 0xf8 + lVar12 + 0xf8;
      bVar24 = true;
      lVar23 = -1;
      do {
        lVar10 = FUN_1400d690e(lVar8);
        iVar22 = (int)lVar23;
        if (lVar10 == 0) {
          if ((bVar4 & 1) == 0) {
            uVar19 = uVar18 - iVar22;
            iVar22 = -iVar22;
            goto LAB_1413128d1;
          }
        }
        else {
          uVar9 = FUN_140edfc58(lVar10);
          bVar5 = FUN_141312eea(lVar14,uVar9);
          if ((bVar4 & 1) == bVar5) {
            uVar19 = uVar18 - iVar22;
            break;
          }
        }
        bVar24 = lVar21 < lVar15;
        lVar23 = lVar23 + -1;
        lVar21 = lVar21 + 1;
        lVar8 = lVar8 + 0xf8;
        uVar19 = uVar17;
      } while (lVar20 - lVar15 != lVar23);
    }
    else {
      bVar24 = false;
      uVar19 = uVar18 + 1;
    }
    iVar22 = uVar19 - uVar18;
    if ((bVar4 & 1) == 0) {
LAB_1413128d1:
      if (uVar13 != uVar18) {
        memmove((void *)((longlong)(int)uVar13 * 0xf8 + lVar12),
                (void *)((longlong)(int)uVar18 * 0xf8 + lVar12),(longlong)iVar22 * 0xf8);
      }
      uVar13 = uVar13 + iVar22;
      bVar4 = 1;
      uVar18 = uVar19;
      if (!bVar24) break;
      goto LAB_14131281c;
    }
    FUN_14034c5df((longlong)(int)uVar18 * 0xf8 + lVar12,iVar22);
    bVar4 = 0;
    uVar18 = uVar19;
  } while (bVar24);
  *(uint *)(param_2 + 0xf88) = uVar13;
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x30)) goto LAB_141312908;
  if (uVar13 == 0) {
    return;
  }
  lVar15 = *(longlong *)(param_2 + 0xf80);
  if (*(longlong *)(param_2 + 0xf80) == 0) {
    lVar15 = param_2;
  }
  plVar11 = (longlong *)FUN_1400d690e();
  if (plVar11 == (longlong *)0x0) {
LAB_141312e9d:
    bVar24 = false;
  }
  else {
    lVar12 = (**(code **)(*plVar11 + 8))(plVar11);
    lVar14 = FUN_140da1732();
    if ((lVar14 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar14 + 0x38))) goto LAB_141312e9d;
    bVar24 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
             lVar14 + 0x30;
  }
  uVar17 = 0;
  uVar18 = 0;
  do {
    uVar16 = (ulonglong)uVar18;
LAB_141312b7f:
    uVar19 = (uint)uVar16;
    if ((int)(uVar19 + 1) < (int)uVar13) {
      lVar14 = (longlong)(int)uVar19;
      lVar8 = lVar14 + 2;
      lVar12 = lVar15 + 0xf8 + lVar14 * 0xf8;
      bVar3 = true;
      lVar20 = -1;
      do {
        plVar11 = (longlong *)FUN_1400d690e(lVar12);
        if (plVar11 == (longlong *)0x0) {
LAB_141312d2c:
          if (bVar24) {
            FUN_14034c5df(lVar14 * 0xf8 + lVar15,-(int)lVar20);
            if (!bVar3) goto LAB_141312c92;
            uVar16 = (uVar16 & 0xffffffff) - lVar20;
            bVar24 = false;
            goto LAB_141312b7f;
          }
        }
        else {
          lVar21 = (**(code **)(*plVar11 + 8))(plVar11);
          lVar23 = FUN_140da1732();
          if ((lVar23 == 0) || (*(int *)(lVar21 + 0x38) < *(int *)(lVar23 + 0x38)))
          goto LAB_141312d2c;
          if ((bool)(*(longlong *)
                      (*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(lVar23 + 0x38) * 8) ==
                     lVar23 + 0x30 ^ bVar24)) {
            uVar18 = uVar19 - (int)lVar20;
            break;
          }
        }
        bVar3 = lVar8 < (int)uVar13;
        lVar20 = lVar20 + -1;
        lVar8 = lVar8 + 1;
        lVar12 = lVar12 + 0xf8;
        uVar18 = uVar13;
      } while (lVar14 - (int)uVar13 != lVar20);
    }
    else {
      bVar3 = false;
      uVar18 = uVar19 + 1;
    }
    iVar22 = uVar18 - uVar19;
    if (bVar24) {
      FUN_14034c5df((longlong)(int)uVar19 * 0xf8 + lVar15,iVar22);
      bVar24 = false;
      uVar16 = (ulonglong)uVar18;
      if (!bVar3) break;
      goto LAB_141312b7f;
    }
    if (uVar17 != uVar19) {
      memmove((void *)((longlong)(int)uVar17 * 0xf8 + lVar15),
              (void *)((longlong)(int)uVar19 * 0xf8 + lVar15),(longlong)iVar22 * 0xf8);
    }
    uVar17 = uVar17 + iVar22;
    bVar24 = true;
  } while (bVar3);
LAB_141312c92:
  uVar13 = uVar17;
  *(uint *)(param_2 + 0xf88) = uVar13;
LAB_141312908:
  if ((*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x2c)) && (uVar13 != 0)) {
    lVar15 = *(longlong *)(param_2 + 0xf80);
    if (*(longlong *)(param_2 + 0xf80) == 0) {
      lVar15 = param_2;
    }
    plVar11 = (longlong *)FUN_1400d690e(lVar15);
    bVar24 = true;
    if (plVar11 != (longlong *)0x0) {
      lVar12 = (**(code **)(*plVar11 + 8))(plVar11);
      lVar14 = FUN_140da1732();
      if ((lVar14 != 0) && (*(int *)(lVar14 + 0x38) <= *(int *)(lVar12 + 0x38))) {
        bVar24 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
                 != lVar14 + 0x30;
      }
    }
    uVar18 = 0;
    uVar17 = 0;
LAB_14131299e:
    do {
      lVar12 = (longlong)(int)uVar17;
      if ((int)(uVar17 + 1) < (int)uVar13) {
        lVar14 = lVar12 + 2;
        lVar20 = lVar12 * 0xf8 + lVar15 + 0xf8;
        bVar3 = true;
        lVar8 = -1;
        do {
          plVar11 = (longlong *)FUN_1400d690e(lVar20);
          iVar22 = (int)lVar8;
          if (plVar11 == (longlong *)0x0) {
LAB_141312cc0:
            if (bVar24 == false) {
              uVar19 = uVar17 - iVar22;
              iVar22 = -iVar22;
              goto LAB_141312a8a;
            }
          }
          else {
            lVar21 = (**(code **)(*plVar11 + 8))(plVar11);
            lVar23 = FUN_140da1732();
            if ((lVar23 == 0) || (*(int *)(lVar21 + 0x38) < *(int *)(lVar23 + 0x38)))
            goto LAB_141312cc0;
            if ((*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(lVar23 + 0x38) * 8)
                != lVar23 + 0x30) != bVar24) {
              uVar19 = uVar17 - iVar22;
              break;
            }
          }
          bVar3 = lVar14 < (int)uVar13;
          lVar8 = lVar8 + -1;
          lVar14 = lVar14 + 1;
          lVar20 = lVar20 + 0xf8;
          uVar19 = uVar13;
        } while (lVar12 - (int)uVar13 != lVar8);
      }
      else {
        bVar3 = false;
        uVar19 = uVar17 + 1;
      }
      iVar22 = uVar19 - uVar17;
      if (bVar24 == false) {
LAB_141312a8a:
        if (uVar18 != uVar17) {
          memmove((void *)((longlong)(int)uVar18 * 0xf8 + lVar15),(void *)(lVar12 * 0xf8 + lVar15),
                  (longlong)iVar22 * 0xf8);
        }
        uVar18 = uVar18 + iVar22;
        bVar24 = true;
        uVar17 = uVar19;
        if (!bVar3) break;
        goto LAB_14131299e;
      }
      FUN_14034c5df(lVar12 * 0xf8 + lVar15,iVar22);
      bVar24 = false;
      uVar17 = uVar19;
    } while (bVar3);
    *(uint *)(param_2 + 0xf88) = uVar18;
  }
  return;
}



// FUNCTION 141312eea FUN_141312eea body=271 status=ok
// SIG undefined FUN_141312eea(void)

byte FUN_141312eea(byte *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  
  bVar2 = *param_1;
  if (bVar2 == 0) {
    return 1;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x10);
  if (lVar5 == 0) {
    return 1;
  }
  if ((bVar2 | 2) == 3) {
    plVar3 = *(longlong **)(param_1 + 8);
    plVar1 = plVar3 + lVar5;
    do {
      if ((int)param_2[1] != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*param_2 + lVar5) == *plVar3) goto LAB_141312f8d;
          lVar5 = lVar5 + 8;
        } while ((longlong)(int)param_2[1] << 3 != lVar5);
      }
      if ((int)param_2[3] != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(param_2[2] + lVar5) == *plVar3) goto LAB_141312f8d;
          lVar5 = lVar5 + 8;
        } while ((longlong)(int)param_2[3] << 3 != lVar5);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
LAB_141312f75:
    bVar4 = 0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 8);
    plVar1 = plVar3 + lVar5;
    do {
      if ((int)param_2[1] != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*param_2 + lVar5) == *plVar3) goto LAB_141312feb;
          lVar5 = lVar5 + 8;
        } while ((longlong)(int)param_2[1] << 3 != lVar5);
      }
      if ((longlong)(int)param_2[3] == 0) goto LAB_141312f75;
      lVar5 = 0;
      while (*(longlong *)(param_2[2] + lVar5) != *plVar3) {
        lVar5 = lVar5 + 8;
        bVar4 = 0;
        if ((longlong)(int)param_2[3] * 8 == lVar5) goto LAB_141312f77;
      }
LAB_141312feb:
      plVar3 = plVar3 + 1;
      bVar4 = 1;
    } while (plVar3 != plVar1);
  }
LAB_141312f77:
  return (byte)(bVar2 - 3) < 2 ^ bVar4;
LAB_141312f8d:
  bVar4 = 1;
  goto LAB_141312f77;
}



// FUNCTION 141312ffa FUN_141312ffa body=794 status=ok
// SIG undefined FUN_141312ffa(void)

void FUN_141312ffa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined1 local_21;
  undefined7 uStack_20;
  undefined1 uStack_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_20 = 0;
  uStack_19 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined7)uVar2;
      uStack_19 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_21 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_140a4831c;
      local_48 = 0x1000000008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_21 = (undefined1)uVar2;
      uStack_20 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_21);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_141313316(CONCAT17(uStack_19,uStack_20),local_21);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141313316 FUN_141313316 body=111 status=ok
// SIG undefined FUN_141313316(void)

undefined8 FUN_141313316(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140da3b08();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140da3b08();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar1 = FUN_14145876a(uVar1,param_2);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 141313386 FUN_141313386 body=630 status=ok
// SIG undefined FUN_141313386(void)

undefined8 FUN_141313386(longlong param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_128 [44];
  float local_fc;
  undefined1 local_f8 [4];
  undefined1 local_f4 [44];
  longlong local_c8;
  longlong **local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 *local_a8;
  undefined4 local_9c;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  longlong *local_68;
  longlong local_60;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_68 = param_2;
  if (param_2 != (longlong *)0x0) {
    uVar3 = FUN_144a78ab8();
    lVar4 = (**(code **)(*param_2 + 0x288))(param_2,uVar3);
    if (lVar4 != 0) {
      uVar3 = FUN_144a78ab8();
      lVar5 = FUN_144718840(lVar4,uVar3);
      uVar3 = 0;
      if ((lVar4 == lVar5) || (lVar5 == 0)) goto LAB_141313580;
      FUN_141313b0e(param_2,local_80,local_98);
      if (param_2[0x23d] == 0) {
        lVar4 = 0x38;
      }
      else {
        lVar4 = 200;
        if ((&DAT_00001100)[param_2[0x23d]] == '\x01') {
          lVar4 = 0x38;
        }
      }
      local_9c = FUN_141313966(lVar4 + param_1,param_2);
      local_a8 = &local_9c;
      local_c0 = &local_68;
      local_c8 = param_1;
      local_b8 = local_80;
      local_b0 = local_98;
      uVar3 = FUN_14069fc26(lVar5);
      FUN_14069fc2e(uVar3,local_f8);
      uVar3 = FUN_14479d2ce(local_f4);
      cVar2 = FUN_1413135fe(&local_c8,uVar3,0,0);
      if (cVar2 != '\0') {
        uVar3 = FUN_14479d2ce(local_f4);
        goto LAB_141313580;
      }
      FUN_1458e3efa(&local_60,local_68,local_80,local_9c);
      if (local_54 != -1) {
        if ((longlong)local_58 == 0) {
          uVar3 = 0;
        }
        else {
          lVar4 = (longlong)local_58 * 0x48;
          fVar7 = -3.4028235e+38;
          uVar3 = 0;
          lVar5 = local_60;
          do {
            local_fc = 0.0;
            uVar6 = FUN_14485cccc(lVar5);
            cVar2 = FUN_1413135fe(&local_c8,uVar6,1,&local_fc);
            fVar1 = local_fc;
            if ((cVar2 != '\0') && (fVar7 < local_fc)) {
              uVar3 = FUN_14485cccc(lVar5);
              fVar7 = fVar1;
            }
            lVar5 = lVar5 + 0x48;
            lVar4 = lVar4 + -0x48;
          } while (lVar4 != 0);
          if (local_54 == -1) goto LAB_141313580;
        }
        if (local_60 != 0) {
          FUN_1400020a8(local_60);
        }
        goto LAB_141313580;
      }
    }
  }
  uVar3 = 0;
LAB_141313580:
  if ((local_50 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1413135fe FUN_1413135fe body=870 status=ok
// SIG undefined FUN_1413135fe(void)

ulonglong FUN_1413135fe(undefined8 *param_1,longlong *param_2,char param_3,undefined4 *param_4)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined1 local_1e0 [16];
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined1 local_128 [72];
  char local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  char local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (param_2 != (longlong *)0x0) {
    plVar10 = (longlong *)*param_1;
    cVar6 = FUN_14189bc40(plVar10,param_2,*(undefined8 *)param_1[1]);
    if (cVar6 != '\0') {
      uVar7 = FUN_14069ce7c();
      plVar8 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar7);
      if (plVar8 != (longlong *)0x0) {
        uVar7 = FUN_14069ce7c();
        plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
        puVar11 = (undefined8 *)0x0;
        if ((plVar8 == plVar9) || (plVar9 == (longlong *)0x0)) goto LAB_14131373b;
        pcVar2 = *(code **)(*plVar9 + 0x10);
        if (pcVar2 == (code *)&LAB_144a13144) {
          plVar9 = plVar9 + 0x25d;
        }
        else if (pcVar2 == (code *)&LAB_144a1313c) {
          plVar9 = plVar9 + 0x13;
        }
        else {
          plVar9 = (longlong *)(*pcVar2)(plVar9);
        }
        if ((plVar9 != (longlong *)0x0) && ((char)plVar9[0x31] == '\x01')) {
          if (param_3 == '\0') {
            lVar3 = param_2[0x39];
            if (lVar3 == 0) {
              local_c8 = DAT_14c8464f0;
              local_d8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_d0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            }
            else {
              local_d8 = *(undefined8 *)(lVar3 + 0x260);
              uStack_d0 = *(undefined8 *)(lVar3 + 0x268);
              local_c8 = *(undefined8 *)(lVar3 + 0x270);
            }
            local_1e8 = &local_d8;
            puVar11 = (undefined8 *)0x0;
            FUN_145b03366(local_1e0,0,*(undefined8 *)param_1[1],param_1[2]);
            if (local_e0 != '\x01') goto LAB_14131373b;
            pdVar4 = (double *)param_1[2];
            dVar5 = pdVar4[2];
            dVar16 = *pdVar4;
            dVar1 = pdVar4[1];
            plVar10 = (longlong *)FUN_14485cccc();
            if (plVar10 == param_2) {
              fVar14 = (float)((local_1c0 - dVar5) * (local_1c0 - dVar5) +
                              (local_1d0 - dVar16) * (local_1d0 - dVar16) +
                              (local_1c8 - dVar1) * (local_1c8 - dVar1));
              fVar15 = *(float *)param_1[4] * *(float *)param_1[4];
              bVar13 = fVar15 == fVar14;
              bVar12 = fVar15 < fVar14;
LAB_14131395c:
              puVar11 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar11 >> 8),!bVar12 && !bVar13);
              goto LAB_14131373b;
            }
          }
          else {
            puVar11 = &local_d8;
            (**(code **)(*plVar10 + 0x18))(plVar10,puVar11,param_2,*(undefined8 *)param_1[1]);
            if (local_b0 == '\x01') {
              local_1e8 = &uStack_d0;
              FUN_145b03366(local_1e0,0,*(undefined8 *)param_1[1],param_1[2]);
              if (param_4 != (undefined4 *)0x0) {
                *param_4 = local_b8;
              }
              if (local_e0 == '\x01') {
                plVar10 = (longlong *)FUN_14485cccc(local_128);
                if (plVar10 == param_2) {
                  pdVar4 = (double *)param_1[2];
                  dVar5 = (local_1c0 - pdVar4[2]) * (local_1c0 - pdVar4[2]) +
                          (local_1d0 - *pdVar4) * (local_1d0 - *pdVar4) +
                          (local_1c8 - pdVar4[1]) * (local_1c8 - pdVar4[1]);
                  dVar16 = (double)(*(float *)param_1[4] * *(float *)param_1[4]);
                  bVar13 = dVar16 == dVar5;
                  bVar12 = dVar16 < dVar5;
                  goto LAB_14131395c;
                }
              }
            }
          }
        }
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_14131373b:
  if ((local_a0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return (ulonglong)puVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141313966 FUN_141313966 body=423 status=ok
// SIG undefined FUN_141313966(void)

undefined4 FUN_141313966(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = '\0';
  local_88[0] = 0;
  FUN_1456bb102(local_b0);
  puVar4 = &local_80;
  FUN_1448729ea(param_1 + 0x28,puVar4,local_b0);
  if (local_60 == 3) {
    uVar3 = 3;
    uVar6 = local_80;
  }
  else {
    puVar5 = &local_58;
    FUN_1400b56fe(puVar5,&local_80,3);
    uVar6 = 0;
    if (local_38 != 0) {
      uVar6 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar3 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  FUN_1448173f8(local_88);
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141313b0e FUN_141313b0e body=743 status=ok
// SIG undefined FUN_141313b0e(void)

void FUN_141313b0e(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 == (longlong *)0x0) {
    param_2[2] = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar3;
    *(undefined8 *)(param_3 + 4) = DAT_14c846508;
    uVar6 = DAT_14c846500._4_4_;
    uVar5 = (undefined4)DAT_14c846500;
    uVar4 = DAT_14c8464f8._4_4_;
    *param_3 = (undefined4)DAT_14c8464f8;
    param_3[1] = uVar4;
    param_3[2] = uVar5;
    param_3[3] = uVar6;
    if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar7 = param_1[0x76];
    if (lVar7 == 0) {
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((((*(int *)((longlong)param_1 + 0x75b4) == 0) ||
                (uVar1 = *(uint *)(param_1 + 0xeb6), (int)uVar1 < 0)) ||
               (DAT_14c9647dc <= (int)uVar1)) ||
              ((plVar8 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)((longlong)param_1 + 0x75b4))
               ))) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_141313bdf;
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar7 = *plVar8;
          }
          else {
            lVar7 = 0;
          }
          lVar7 = lVar7 + 0x110;
        }
        else {
          lVar7 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
        }
        if (lVar7 == 0) goto LAB_141313bdf;
        lVar7 = *(longlong *)(lVar7 + 0x20);
      }
      else {
        lVar7 = (*pcVar2)(param_1);
      }
      if (lVar7 == 0) goto LAB_141313bdf;
      lVar7 = *(longlong *)(lVar7 + 0x3b0);
      goto LAB_141313c72;
    }
  }
  else {
    lVar7 = (*pcVar2)(param_1);
LAB_141313c72:
    if (lVar7 == 0) goto LAB_141313bdf;
  }
  if (((*(byte *)(lVar7 + 0x39a) & 8) == 0) && (lVar7 = param_1[0x78], lVar7 != 0)) {
    if (DAT_14caf9cd0 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1463c0cc2;
      local_68 = &LAB_147c9db5b;
      local_70 = &LAB_1463f9c44;
      local_78 = &DAT_149e063b2;
      local_80 = 0x2000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) ==
        DAT_14caf9cd0 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    }
  }
LAB_141313bdf:
  (**(code **)(*param_1 + 0x718))(param_1,&local_40);
  param_2[2] = local_30;
  *(undefined4 *)param_2 = (undefined4)local_40;
  *(undefined4 *)((longlong)param_2 + 4) = local_40._4_4_;
  *(undefined4 *)(param_2 + 1) = uStack_38;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_34;
  (**(code **)(*param_1 + 0x720))(param_1,&local_40);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = (undefined4)local_40;
  param_3[1] = local_40._4_4_;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
}



// FUNCTION 141313e12 FUN_141313e12 body=146 status=ok
// SIG undefined FUN_141313e12(void)

int FUN_141313e12(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[3];
  if ((longlong)iVar2 == 0) {
    iVar5 = (int)param_1[1];
    lVar6 = (longlong)iVar5;
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_1458e4102(param_1,iVar5);
    }
    lVar3 = *param_1;
    lVar4 = lVar6 * 0x50;
    *(undefined4 *)(lVar3 + lVar4) = 0xffffffff;
    puVar1 = (undefined8 *)(lVar3 + 8 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x18 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x38 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(lVar3 + 0x48 + lVar4) = 0;
  }
  else {
    iVar5 = *(int *)(param_1[2] + -4 + (longlong)iVar2 * 4);
    *(int *)(param_1 + 3) = iVar2 + -1;
    lVar6 = (longlong)iVar5;
  }
  *(undefined4 *)(*param_1 + lVar6 * 0x50) = param_2;
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  return iVar5;
}



// FUNCTION 141313ea4 FUN_141313ea4 body=94 status=ok
// SIG undefined FUN_141313ea4(void)

void FUN_141313ea4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a18e3f0;
  plVar3 = (longlong *)param_1[8];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141313efe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141313f02 FUN_141313f02 body=814 status=ok
// SIG undefined FUN_141313f02(void)

void FUN_141313f02(longlong param_1)

{
  uint *_Src;
  undefined2 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_f8 [32];
  undefined2 local_d8;
  undefined2 *local_c8;
  uint *local_c0;
  undefined2 local_b2;
  uint local_b0 [8];
  undefined8 local_90;
  undefined1 local_88 [32];
  ulonglong local_68;
  longlong local_60 [2];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = FUN_14038fb82();
  uVar1 = *(undefined2 *)(lVar7 + 0xe6);
  lVar7 = FUN_14009d2a0();
  uVar2 = *(undefined2 *)(lVar7 + 0x4a);
  lVar7 = *(longlong *)(param_1 + -0x18);
  cVar4 = FUN_14050a5e0(lVar7 + 0x28,param_1 + 0x30);
  if (cVar4 != '\0') {
    local_90 = 0x10000000000;
    local_68 = 0x10000000000;
    local_60[0] = 0;
    local_60[1] = 0;
    local_50 = 0;
    lVar8 = FUN_14009d2a0();
    local_b2 = *(undefined2 *)(lVar8 + 0x11a);
    local_c0 = local_b0;
    local_c8 = &local_b2;
    FUN_1447c44f6(local_b0);
    FUN_14767d262(local_b0,param_1 + 0x30);
    local_d8 = uVar1;
    FUN_141314282(*(undefined8 *)(param_1 + 8),lVar7,local_b0,uVar2);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  _Src = (uint *)(param_1 + 0x90);
  cVar4 = FUN_14050a5e0(lVar7 + 0x28,_Src);
  if (cVar4 != '\0') {
    local_90 = 0x10000000000;
    local_68 = 0x10000000000;
    local_60[0] = 0;
    local_60[1] = 0;
    local_50 = 0;
    lVar8 = FUN_14009d2a0();
    uVar3 = *(ushort *)(lVar8 + 0x11a);
    iVar12 = uVar3 + 1;
    iVar10 = iVar12;
    if (0xff < uVar3) {
      local_90 = CONCAT44(0x100,(int)local_90);
      FUN_14497ddce(local_b0,0);
      iVar10 = (int)local_90 + iVar12;
    }
    iVar5 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar5 = iVar10;
    }
    local_90 = CONCAT44(local_90._4_4_,iVar10);
    if (iVar10 % 0x20 != 0) {
      bVar9 = -(char)(iVar10 % 0x20);
      local_b0[iVar5 >> 5] = (local_b0[iVar5 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
    }
    FUN_1447c45ca(local_b0,0,iVar12,0);
    local_b0[uVar3 >> 5] = local_b0[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
    if (local_b0 != _Src) {
      iVar10 = *(int *)(param_1 + 0xb0);
      uVar6 = iVar10 + 0x1fU & 0xffffffe0;
      iVar12 = (int)(local_90 >> 0x20);
      local_90 = local_90 & 0xffffffff00000000;
      if (iVar12 < (int)uVar6 || 0x100 < iVar12) {
        uVar11 = 0x100;
        if (0x100 < (int)uVar6) {
          uVar11 = uVar6;
        }
        local_90 = (ulonglong)uVar11 << 0x20;
        FUN_14497ddce(local_b0,0);
        iVar10 = *(int *)(param_1 + 0xb0);
      }
      local_90 = CONCAT44(local_90._4_4_,iVar10);
      if (iVar10 != 0) {
        memcpy(local_b0,_Src,(ulonglong)(iVar10 + 0x1fU >> 3 & 0xfffffffc));
      }
      iVar10 = *(int *)(param_1 + 0xd8);
      uVar6 = iVar10 + 0x1fU & 0xffffffe0;
      iVar12 = (int)(local_68 >> 0x20);
      local_68 = local_68 & 0xffffffff00000000;
      if (iVar12 < (int)uVar6 || 0x100 < iVar12) {
        uVar11 = 0x100;
        if (0x100 < (int)uVar6) {
          uVar11 = uVar6;
        }
        local_68 = (ulonglong)uVar11 << 0x20;
        FUN_14497ddce(local_88,0);
        iVar10 = *(int *)(param_1 + 0xd8);
      }
      local_68 = CONCAT44(local_68._4_4_,iVar10);
      if (iVar10 != 0) {
        memcpy(local_88,(void *)(param_1 + 0xb8),(ulonglong)(iVar10 + 0x1fU >> 3 & 0xfffffffc));
      }
    }
    FUN_141314232(local_60,param_1 + 0xe0);
    local_d8 = uVar1;
    FUN_141314282(*(undefined8 *)(param_1 + 0x18),lVar7,local_b0,uVar2);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141314232 FUN_141314232 body=79 status=ok
// SIG undefined FUN_141314232(void)

undefined8 * FUN_141314232(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1403b8c86(param_1,iVar1);
      FUN_1403b8bfd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 141314282 FUN_141314282 body=2651 status=ok
// SIG undefined FUN_141314282(void)

void FUN_141314282(longlong param_1,longlong param_2,longlong param_3,ushort param_4,ushort param_5)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  undefined7 uVar21;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar22;
  undefined4 *puVar23;
  longlong *plVar24;
  bool bVar25;
  undefined1 auStack_2c8 [34];
  char local_2a6;
  byte local_2a5;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  longlong *local_290;
  longlong local_288;
  longlong local_280;
  longlong *local_278;
  longlong local_270;
  undefined8 local_268;
  ulonglong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  uint *local_240;
  longlong local_238;
  int local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  longlong local_208;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  int local_1e4;
  longlong local_1e0;
  int local_1d8;
  uint local_1cc;
  byte local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8 [2];
  undefined4 *local_1a0;
  ushort local_196;
  ushort local_194;
  ushort local_192;
  undefined1 local_18f;
  undefined4 local_18c;
  undefined1 local_188;
  uint local_180 [8];
  int local_160;
  int local_15c;
  longlong local_130;
  undefined8 local_100;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [80];
  longlong local_78;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_d0 = param_1;
  FUN_1403b8af8(local_c8,param_3);
  local_68 = *(undefined4 *)(param_3 + 0x60);
  lVar8 = FUN_14009d2a0();
  local_196 = *(ushort *)(lVar8 + 0x50);
  local_192 = param_5;
  local_18f = 0;
  local_18c = 0x6ff;
  local_188 = 0;
  local_194 = param_4;
  FUN_1403b8af8(local_180,param_3);
  iVar6 = local_160;
  uVar4 = local_196;
  local_100 = 0x10000000000;
  local_d8 = 0x10000000000;
  iVar11 = local_196 + 1;
  iVar14 = iVar11 - local_160;
  if (iVar14 != 0 && local_160 <= iVar11) {
    if (local_160 == 0) {
LAB_141314362:
      if (local_15c <= (int)(uint)local_196) {
        local_15c = 0x100;
        FUN_14497ddce(local_180,local_160);
        iVar11 = local_160 + iVar14;
      }
      iVar12 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar12 = iVar11;
      }
      local_160 = iVar11;
      iVar11 = local_160;
      if (iVar11 % 0x20 != 0) {
        bVar10 = -(char)(iVar11 % 0x20);
        local_180[iVar12 >> 5] = (local_180[iVar12 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
        iVar11 = local_160;
      }
    }
    else {
      iVar12 = local_160 + 0x1e;
      if (-1 < local_160 + -1) {
        iVar12 = local_160 + -1;
      }
      if (iVar12 >> 5 != (uint)(local_196 >> 5)) goto LAB_141314362;
    }
    local_160 = iVar11;
    FUN_1447c45ca(local_180,iVar6,iVar14,0);
  }
  uVar5 = local_194;
  local_180[uVar4 >> 5] = local_180[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  iVar6 = local_160;
  iVar11 = local_194 + 1;
  iVar14 = iVar11 - local_160;
  if (iVar14 != 0 && local_160 <= iVar11) {
    if (local_160 == 0) {
LAB_141314406:
      if (local_15c <= (int)(uint)local_194) {
        local_15c = 0x100;
        FUN_14497ddce(local_180,local_160);
        iVar11 = local_160 + iVar14;
      }
      iVar12 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar12 = iVar11;
      }
      local_160 = iVar11;
      iVar11 = local_160;
      if (iVar11 % 0x20 != 0) {
        bVar10 = -(char)(iVar11 % 0x20);
        local_180[iVar12 >> 5] = (local_180[iVar12 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
        iVar11 = local_160;
      }
    }
    else {
      iVar12 = local_160 + 0x1e;
      if (-1 < local_160 + -1) {
        iVar12 = local_160 + -1;
      }
      if (iVar12 >> 5 != (uint)(local_194 >> 5)) goto LAB_141314406;
    }
    local_160 = iVar11;
    FUN_1447c45ca(local_180,iVar6,iVar14,0);
  }
  uVar4 = local_192;
  local_180[uVar5 >> 5] = local_180[uVar5 >> 5] | 1 << ((byte)uVar5 & 0x1f);
  iVar6 = local_160;
  iVar11 = local_192 + 1;
  iVar14 = iVar11 - local_160;
  if (iVar14 == 0 || iVar11 < local_160) goto LAB_1413144fb;
  if (local_160 == 0) {
LAB_1413144a4:
    if (local_15c <= (int)(uint)local_192) {
      local_15c = 0x100;
      FUN_14497ddce(local_180,local_160);
      iVar11 = local_160 + iVar14;
    }
    iVar12 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar12 = iVar11;
    }
    local_160 = iVar11;
    iVar11 = local_160;
    if (iVar11 % 0x20 != 0) {
      bVar10 = -(char)(iVar11 % 0x20);
      local_180[iVar12 >> 5] = (local_180[iVar12 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
      iVar11 = local_160;
    }
  }
  else {
    iVar12 = local_160 + 0x1e;
    if (-1 < local_160 + -1) {
      iVar12 = local_160 + -1;
    }
    if (iVar12 >> 5 != (uint)(local_192 >> 5)) goto LAB_1413144a4;
  }
  local_160 = iVar11;
  FUN_1447c45ca(local_180,iVar6,iVar14,0);
LAB_1413144fb:
  local_180[uVar4 >> 5] = local_180[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  if (((local_196 != 0xffff) && (local_194 != 0xffff)) && (local_192 != 0xffff)) {
    local_238 = param_2 + 0x28;
    local_2a6 = *(char *)(param_2 + 0x298);
    if (local_2a6 == '\0') {
      *(int *)(param_2 + 0x28c) = *(int *)(param_2 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(param_2 + 0x28c) = *(int *)(param_2 + 0x28c) + 1;
      UNLOCK();
    }
    local_240 = local_180;
    iVar6 = FUN_1403b8464(&local_240,0);
    local_2a0 = *(int *)(param_2 + 0x38);
    local_230 = iVar6;
    if (iVar6 != local_2a0) {
      do {
        lVar13 = local_238;
        lVar8 = *(longlong *)(*(longlong *)(local_238 + 0x60) + (longlong)iVar6 * 8);
        if (local_2a6 == '\0') {
          *(undefined4 *)(lVar8 + 0x14) = 0;
          lVar20 = lVar8;
        }
        else {
          lVar20 = 0;
        }
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar15 = *(longlong **)(lVar8 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar15 + 0x1e) == local_192) goto LAB_1413145e4;
            plVar15 = plVar15 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar15 = (longlong *)0x0;
LAB_1413145e4:
        iVar11 = *(int *)(lVar8 + 0x14);
        local_230 = iVar6;
        if (iVar11 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar15 + 1));
        }
        LOCK();
        *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
        UNLOCK();
        local_248 = *plVar15;
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar24 = *(longlong **)(lVar8 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar24 + 0x1e) == local_194) goto LAB_141314634;
            plVar24 = plVar24 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar24 = (longlong *)0x0;
LAB_141314634:
        local_298 = *(int *)(lVar8 + 0x14);
        if (local_298 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar24 + 1));
        }
        LOCK();
        *(int *)(plVar24 + 3) = (int)plVar24[3] + 1;
        UNLOCK();
        local_288 = *plVar24;
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar16 = *(longlong **)(lVar8 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar16 + 0x1e) == local_196) goto LAB_14131468c;
            plVar16 = plVar16 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar16 = (longlong *)0x0;
LAB_14131468c:
        local_29c = *(int *)(lVar8 + 0x14);
        local_294 = iVar11;
        local_280 = lVar20;
        if (local_29c == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
        }
        lVar20 = local_d0;
        LOCK();
        *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
        UNLOCK();
        local_250 = *plVar16;
        local_258 = *(longlong *)(lVar8 + 0x18);
        local_1e0 = lVar13;
        local_1d8 = iVar6;
        FUN_140cd6274(&local_1cc,&local_1e0);
        uVar2 = local_1cc;
        local_2a5 = local_1c8;
        if (**(int **)(lVar20 + 0xb0) != 0 || (local_1c8 & 1) != 0) {
          uVar22 = (ulonglong)local_1cc;
          local_268 = FUN_140732858();
          local_260 = uVar22;
          if (0 < (int)uVar2) {
            local_270 = lVar20 + 200;
            local_278 = (longlong *)(lVar20 + 0x18);
            local_290 = (longlong *)(lVar20 + 0x68);
            uVar22 = 0;
            do {
              lVar8 = *(longlong *)(local_288 + uVar22 * 8);
              local_1c0 = 0;
              if (lVar8 != 0) {
                uVar2 = *(uint *)(lVar8 + 0xc);
                if ((int)uVar2 < DAT_14c9647dc) {
                  lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                }
                else {
                  lVar13 = 0;
                }
                iVar6 = *(int *)(lVar13 + 0x10);
                if (*(int *)(lVar13 + 0x10) == 0) {
                  LOCK();
                  iVar6 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar11 = DAT_14c964868 + 1;
                  bVar25 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar6;
                  if (bVar25) {
                    local_2a4 = iVar11;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar11);
                    iVar11 = local_2a4;
                  }
                  LOCK();
                  iVar6 = *(int *)(lVar13 + 0x10);
                  bVar25 = iVar6 == 0;
                  if (bVar25) {
                    *(int *)(lVar13 + 0x10) = iVar11;
                    iVar6 = 0;
                  }
                  UNLOCK();
                  if (bVar25) {
                    iVar6 = iVar11;
                  }
                }
                local_1c0 = CONCAT44(iVar6,uVar2);
              }
              puVar23 = (undefined4 *)(uVar22 * 0x10 + local_248);
              uStack_1b8 = *puVar23;
              uStack_1b4 = puVar23[1];
              uStack_1b0 = puVar23[2];
              uStack_1ac = puVar23[3];
              FUN_14027461a(local_270,&local_1ec,lVar8);
              uVar7 = FUN_141314d5a(&local_1c0);
              plVar3 = local_278;
              iVar6 = FUN_141314cde(local_278,uVar7,&local_1c0);
              if (((iVar6 == -1) || (lVar8 = (longlong)iVar6 * 0x24 + *plVar3, lVar8 == 0)) ||
                 (iVar6 = *(int *)(lVar8 + 0x18), iVar6 == -1)) {
                local_218 = CONCAT44(uStack_1ac,uStack_1b0);
                local_228._0_4_ = (undefined4)local_1c0;
                local_228._4_4_ = local_1c0._4_4_;
                uStack_220._0_4_ = uStack_1b8;
                uStack_220._4_4_ = uStack_1b4;
                FUN_1458e43ee(local_290,local_1a8);
                *(undefined8 *)(local_1a0 + 4) = local_218;
                *local_1a0 = (undefined4)local_228;
                local_1a0[1] = local_228._4_4_;
                local_1a0[2] = (undefined4)uStack_220;
                local_1a0[3] = uStack_220._4_4_;
                *(undefined8 *)(local_1a0 + 6) = 0;
                *(undefined8 *)(local_1a0 + 8) = 0;
                *(undefined8 *)(local_1a0 + 10) = 0;
                *(undefined8 *)(local_1a0 + 0xc) = 0;
                *(undefined8 *)(local_1a0 + 0xe) = 0;
                *(undefined8 *)(local_1a0 + 0x10) = 0;
                *(undefined1 *)(local_1a0 + 0x12) = 0;
                local_1c4 = local_1a8[0];
                local_228 = &local_1c0;
                uStack_220 = &local_1c4;
                FUN_1458e44de(plVar3,local_1a8,&local_228);
                iVar6 = local_1c4;
              }
              uStack_1e8 = *(undefined4 *)(lVar20 + 0xc0);
              local_1c0 = CONCAT62(local_1c0._2_6_,*(undefined2 *)(local_258 + uVar22 * 2));
              local_228 = (undefined8 *)CONCAT44(uStack_1e8,local_1ec);
              uStack_220 = (int *)CONCAT44(*(undefined4 *)(local_250 + uVar22 * 4),iVar6);
              local_218 = CONCAT71(local_218._1_7_,local_2a5);
              local_1e4 = iVar6;
              FUN_1449da5a2(local_268,&local_1c0);
              lVar8 = FUN_1400e4054(*(undefined8 *)(lVar20 + 0xb0),&local_1ec);
              if (lVar8 != 0) {
                bVar10 = *(byte *)(*local_290 + 0x48 + (longlong)local_1e4 * 0x50);
                uVar21 = (undefined7)((ulonglong)plVar3 >> 8);
                if (*(short *)(lVar8 + 0xe) == 0) {
                  if ((bVar10 & 1) == 0) {
                    uVar19 = CONCAT71(uVar21,1);
LAB_141314b99:
                    FUN_1458e428c(&local_228,*(undefined8 *)(local_288 + uVar22 * 8),puVar23);
                    FUN_1458e4306(lVar20,local_1e4,uVar19 & 0xffffffff,&local_228);
                    if (local_208 != 0) {
                      FUN_1400020a8();
                    }
                  }
                }
                else if (((bVar10 & 2) == 0 & bVar10) == 0) {
                  uVar2 = *(uint *)(lVar20 + 0xa8);
                  lVar8 = *(longlong *)(lVar20 + 0xa0);
                  uVar18 = 0;
                  uVar17 = uVar2;
                  if (0 < (int)uVar2) {
                    do {
                      uVar1 = (uVar17 >> 1) + uVar18;
                      if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x38) < local_1e4) {
                        uVar18 = uVar1 + (uVar17 & 1);
                      }
                      bVar25 = 1 < uVar17;
                      uVar17 = uVar17 >> 1;
                    } while (bVar25);
                  }
                  uVar19 = CONCAT71(uVar21,2);
                  if ((((int)uVar2 <= (int)uVar18) ||
                      (local_1e4 < *(int *)(lVar8 + (ulonglong)uVar18 * 0x38))) ||
                     (lVar8 + (ulonglong)uVar18 * 0x38 == -8)) goto LAB_141314b99;
                }
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 != local_260);
          }
        }
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
          UNLOCK();
          if (local_294 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar15 + 1));
          }
        }
        lVar8 = local_280;
        if (plVar24 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar24 + 3) = (int)plVar24[3] + -1;
          UNLOCK();
          if (local_298 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar24 + 1));
          }
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
          UNLOCK();
          if (local_29c == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
          }
        }
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0x14) = 1;
        }
        iVar6 = FUN_1403b8464(&local_240,local_230 + 1);
        local_230 = iVar6;
      } while (iVar6 != local_2a0);
    }
    if (local_240 != (uint *)0x0) {
      if (*(char *)(local_238 + 0x270) == '\0') {
        *(int *)(local_238 + 0x264) = *(int *)(local_238 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_238 + 0x264) = *(int *)(local_238 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141314cde FUN_141314cde body=124 status=ok
// SIG undefined FUN_141314cde(void)

int FUN_141314cde(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if ((((*(int *)(lVar3 + lVar5 * 0x24) == *param_3) &&
             (*(int *)(lVar3 + 4 + lVar5 * 0x24) == param_3[1])) &&
            (lVar1 = lVar3 + lVar5 * 0x24, *(int *)(lVar1 + 0x10) == param_3[4])) &&
           ((*(longlong *)(lVar1 + 8) == *(longlong *)(param_3 + 2) &&
            (*(char *)(lVar1 + 0x14) == (char)param_3[5])))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x1c + lVar5 * 0x24);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 141314d5a FUN_141314d5a body=334 status=ok
// SIG undefined FUN_141314d5a(void)

uint FUN_141314d5a(int *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar5 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar2 = (uint)uVar1 & 0xffff;
  uVar2 = ((uint)uVar1 << 0x10 | uVar2) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar2 >> 4) ^ param_1[4];
  uVar3 = *(byte *)(param_1 + 5) ^ uVar2;
  uVar5 = param_1[1];
  uVar4 = uVar5 >> 0xd ^ *param_1 - uVar5;
  uVar6 = uVar4 << 8 ^ (-0x61c88647 - uVar5) - uVar4;
  uVar8 = uVar6 >> 0xd ^ (uVar5 - uVar4) - uVar6;
  uVar7 = uVar8 >> 0xc ^ (uVar4 - uVar6) - uVar8;
  uVar5 = uVar7 << 0x10 ^ (uVar6 - uVar8) - uVar7;
  uVar4 = uVar5 >> 5 ^ (uVar8 - uVar7) - uVar5;
  uVar6 = uVar4 >> 3 ^ (uVar7 - uVar5) - uVar4;
  uVar5 = uVar6 << 10 ^ (uVar5 - uVar4) - uVar6;
  uVar5 = uVar2 >> 0xd ^ (uVar5 >> 0xf ^ uVar4 - (uVar6 + uVar5)) - uVar3;
  uVar4 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
  uVar2 = uVar4 >> 0xd ^ (uVar3 - uVar5) - uVar4;
  uVar5 = uVar2 >> 0xc ^ (uVar5 - uVar4) - uVar2;
  uVar4 = uVar5 << 0x10 ^ (uVar4 - uVar2) - uVar5;
  uVar3 = uVar4 >> 5 ^ (uVar2 - uVar5) - uVar4;
  uVar2 = uVar3 >> 3 ^ (uVar5 - uVar4) - uVar3;
  uVar5 = uVar2 << 10 ^ (uVar4 - uVar3) - uVar2;
  return uVar5 >> 0xf ^ uVar3 - (uVar2 + uVar5);
}



// FUNCTION 141314ea8 FUN_141314ea8 body=87 status=ok
// SIG undefined FUN_141314ea8(void)

undefined8 * FUN_141314ea8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  if (param_1 != param_2) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  return param_1;
}



// FUNCTION 141314f00 FUN_141314f00 body=164 status=ok
// SIG undefined FUN_141314f00(void)

undefined8 FUN_141314f00(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar1 = FUN_141314fa6(param_1,param_2,&local_30);
    if (iVar1 != -1) {
      *(longlong *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_143f7a762(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_141314f5b;
    }
  }
  uVar2 = 0;
LAB_141314f5b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141314fa6 FUN_141314fa6 body=202 status=ok
// SIG undefined FUN_141314fa6(void)

int FUN_141314fa6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 141315070 FUN_141315070 body=482 status=ok
// SIG undefined FUN_141315070(void)

int * FUN_141315070(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 141315252 FUN_141315252 body=731 status=ok
// SIG undefined FUN_141315252(void)

void FUN_141315252(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar13 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar13,4);
    if ((int)uVar13 < 1) goto LAB_1413152b8;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar13 != uVar3);
LAB_1413152b8:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar16 = 0;
    uVar14 = 1;
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar11 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar11 = iVar6 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar16) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar16 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar14 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar11 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar11) {
      iVar11 = iVar6;
    }
  }
  if (iVar11 < iVar6) {
    uVar13 = 0xffffffff;
    bVar2 = DAT_14c950c29;
    do {
      lVar15 = *param_1;
      uVar9 = *(ulonglong *)(lVar15 + (longlong)iVar11 * 0x10);
      if (((bVar2 & 1) != 0) && (uVar9 != 0)) {
        FUN_1456cec3c(uVar9);
        bVar2 = DAT_14c950c29;
      }
      lVar15 = lVar15 + (longlong)iVar11 * 0x10;
      uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar9 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar9;
      *(int *)(lVar15 + 0xc) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar15 + 8) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11;
      uVar13 = uVar13 & ~(uint)uVar14;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar11 = (int)uVar16;
      lVar15 = (longlong)iVar11;
      uVar3 = puVar4[lVar15] & uVar13;
      if (uVar3 == 0) {
        iVar7 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar7 = iVar6 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar7 <= iVar11) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar4[lVar15 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar15 == lVar12) {
            return;
          }
        }
        uVar16 = (ulonglong)(iVar11 + (int)lVar12 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar9 = uVar14 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar6);
  }
  return;
}



// FUNCTION 141315544 FUN_141315544 body=444 status=ok
// SIG undefined FUN_141315544(void)

void FUN_141315544(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar3 = FUN_141315702(lVar2);
  *(undefined1 *)(param_1 + 0xd7) = uVar3;
  iVar1 = *(int *)(lVar2 + 0xbf0);
  bVar6 = 0xff;
  if (0 < (longlong)iVar1) {
    lVar7 = 0;
    do {
      lVar9 = (longlong)*(int *)(*(longlong *)(lVar2 + 0xbe8) + 0x50 + lVar7 * 0x88);
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0xbe8) + 0x48 + lVar7 * 0x88) + lVar10) ==
              param_1) {
            bVar6 = (byte)lVar7;
            goto LAB_1413155ce;
          }
          lVar10 = lVar10 + 8;
        } while (lVar9 * 8 != lVar10);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != iVar1);
  }
LAB_1413155ce:
  if (((int)(uint)bVar6 < iVar1) &&
     (lVar7 = *(longlong *)
               (*(longlong *)(lVar2 + 0xbe8) + 0x40 + (ulonglong)bVar6 * 0x80 + (ulonglong)bVar6 * 8
               ), lVar7 != 0)) {
    *(byte *)(lVar7 + 0xc4) = *(byte *)(lVar7 + 0xc4) & 0xfc | 2;
    FUN_141315768(lVar7 + 0x68,local_50,param_1,FUN_14107b756);
    uVar4 = *(uint *)(lVar2 + 0xbf0);
    if ((char)uVar4 != '\0') {
      lVar9 = 0;
      uVar8 = 0;
      do {
        if ((((*(byte *)(param_1 + 0xd7) >> ((uint)uVar8 & 0x1f) & 1) == 0) &&
            ((longlong)uVar8 < (longlong)(int)uVar4)) &&
           (lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0xbe8) + 0x20 + lVar9), lVar10 != 0)) {
          lVar5 = FUN_14018fcd2();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            if ((longlong)uVar8 < (longlong)*(int *)(lVar2 + 0xbf0)) {
              lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0xbe8) + 0x40 + lVar9);
            }
            else {
              lVar5 = 0;
            }
            if (lVar5 == lVar7) {
              FUN_1458e507a(lVar10 + 0x70,local_50,param_1,FUN_1457dec64);
            }
          }
        }
        uVar8 = uVar8 + 1;
        uVar4 = *(uint *)(lVar2 + 0xbf0);
        lVar9 = lVar9 + 0x88;
      } while (uVar8 < (uVar4 & 0xff));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141315702 FUN_141315702 body=102 status=ok
// SIG undefined FUN_141315702(void)

byte FUN_141315702(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0xbf0) < 1) {
    bVar1 = 0;
  }
  else {
    lVar2 = 0;
    bVar1 = 0;
    do {
      lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0xbe8) + 0x50 + lVar2 * 0x88);
      if (lVar5 != 0) {
        lVar3 = 0;
        do {
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0xbe8) + 0x48 + lVar2 * 0x88) + lVar3) ==
              param_2) {
            bVar4 = (byte)(1 << ((byte)lVar2 & 0x1f));
            goto LAB_141315757;
          }
          lVar3 = lVar3 + 8;
        } while (lVar5 * 8 != lVar3);
      }
      bVar4 = 0;
LAB_141315757:
      bVar1 = bVar1 | bVar4;
      lVar2 = lVar2 + 1;
    } while (lVar2 != *(int *)(param_1 + 0xbf0));
  }
  return bVar1;
}



// FUNCTION 141315768 FUN_141315768 body=765 status=ok
// SIG undefined FUN_141315768(void)

undefined8 * FUN_141315768(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar2 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_149e06450;
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
  *local_58 = (longlong)&PTR_FUN_14b9e1020;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
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
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar8;
  plVar2[4] = param_4;
  *param_2 = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_141315914;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_1413158fe;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar8 = (int)param_1[1];
      iVar4 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)param_1[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar8) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar5 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar5 = local_48;
    }
    *param_2 = uVar5;
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_1447a71f6(param_1,iVar8);
    }
    lVar9 = *param_1;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_50;
LAB_1413158fe:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141315914:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141315a66 FUN_141315a66 body=962 status=ok
// SIG undefined FUN_141315a66(void)

void FUN_141315a66(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_a0 [4];
  undefined8 local_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != 0) {
    lVar4 = FUN_140890cca();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      *(undefined8 *)(param_1 + 0x130) = param_2;
      local_a8 = param_3;
      if (*(char *)(param_1 + 0x1ad) == '\x01') {
        FUN_1458e53d4(param_1 + 0x1c8);
      }
      else {
        FUN_1458e535a(param_1 + 0x1b8,*(undefined4 *)(param_1 + 0x160));
      }
      FUN_140aeed2c(param_1 + 0x20,*(undefined4 *)(param_1 + 0x160),1);
      if (0 < *(int *)(param_1 + 0x160)) {
        lVar11 = 0x10;
        lVar9 = 0;
        lVar10 = 0;
        lVar4 = 0;
        lVar12 = 0;
        do {
          if (*(char *)(param_1 + 0x1ad) == '\x01') {
            plVar8 = (longlong *)(lVar12 * 0x108 + *(longlong *)(param_1 + 0x1c8));
          }
          else {
            plVar8 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + lVar4);
          }
          lVar1 = *(longlong *)(param_1 + 0x158);
          *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar9) = plVar8;
          (**(code **)(*plVar8 + 0x180))(plVar8,*(undefined1 *)(param_1 + 0x1a8));
          (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined1 *)(param_1 + 0x19c));
          if (*(char *)(param_1 + 0x19c) == '\x01') {
            (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(param_1 + 0x1a0));
          }
          if (*(char *)(param_1 + 0x1ad) == '\x01') {
            lVar2 = *(longlong *)(param_1 + 0x1c8);
            *(undefined1 *)(lVar2 + 0x98 + lVar10) = *(undefined1 *)(param_1 + 0x1ac);
            if (*(int *)(lVar1 + lVar11) == 0) {
              *(undefined8 *)(lVar2 + 0xe4 + lVar10) = *(undefined8 *)(lVar1 + -0x10 + lVar11);
            }
            else {
              if (*(longlong *)(lVar1 + -8 + lVar11) == 0) {
LAB_141315dfe:
                lVar7 = 0;
              }
              else {
                lVar5 = FUN_1405b04b6();
                lVar1 = *(longlong *)(lVar1 + -8 + lVar11);
                if ((lVar1 == 0) || (lVar5 == 0)) goto LAB_141315dfe;
                lVar3 = *(longlong *)(lVar1 + 0x10);
                lVar7 = 0;
                if (lVar3 != 0) {
                  if (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38)) goto LAB_141315dfe;
                  lVar7 = lVar1;
                  if (*(longlong *)
                       (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                      lVar5 + 0x30) {
                    lVar7 = 0;
                  }
                }
              }
              (**(code **)(*(longlong *)(lVar2 + lVar10) + 0x1e0))
                        ((longlong *)(lVar2 + lVar10),lVar7);
            }
          }
          else {
            lVar2 = *(longlong *)(param_1 + 0x1b8);
            *(undefined1 *)(lVar2 + 0xa8 + lVar4) = *(undefined1 *)(param_1 + 0x1ac);
            if (*(int *)(lVar1 + lVar11) == 0) {
              *(undefined8 *)(lVar2 + 0xe8 + lVar4) = *(undefined8 *)(lVar1 + -0x10 + lVar11);
              goto LAB_141315cd7;
            }
            if (*(longlong *)(lVar1 + -8 + lVar11) == 0) {
LAB_141315e05:
              lVar7 = 0;
            }
            else {
              lVar5 = FUN_14063d1f6();
              lVar1 = *(longlong *)(lVar1 + -8 + lVar11);
              if ((lVar1 == 0) || (lVar5 == 0)) goto LAB_141315e05;
              lVar3 = *(longlong *)(lVar1 + 0x10);
              lVar7 = 0;
              if (lVar3 != 0) {
                if (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38)) goto LAB_141315e05;
                lVar7 = lVar1;
                if (*(longlong *)
                     (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                    lVar5 + 0x30) {
                  lVar7 = 0;
                }
              }
            }
            (**(code **)(*(longlong *)(lVar2 + lVar4) + 0x1a8))((longlong *)(lVar2 + lVar4),lVar7);
          }
LAB_141315cd7:
          lVar12 = lVar12 + 1;
          lVar4 = lVar4 + 0x100;
          lVar10 = lVar10 + 0x108;
          lVar9 = lVar9 + 0x10;
          lVar11 = lVar11 + 0x18;
        } while (lVar12 < *(int *)(param_1 + 0x160));
      }
      lVar4 = local_a8;
      if (*(char *)(local_a8 + 0x6a8) != '\0') {
        local_a0[0] = 0;
        local_70 = 0;
        local_68 = 0x400000000;
        local_9c = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        local_58 = 0;
        uStack_50 = 0;
        FUN_1412bb8d8(&uStack_90,param_1 + 0x158);
        local_60 = *(undefined1 *)(param_1 + 0x198);
        local_9c = CONCAT44(*(undefined4 *)(param_1 + 0x16c),(undefined4)local_9c);
        uStack_94 = *(undefined4 *)(param_1 + 0x168);
        if ((*(longlong *)(lVar4 + 0x638) != 0) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x638) + 0x11e8), lVar4 != 0)) {
          lVar4 = lVar4 + 0x3ae0;
          FUN_140e3d9d4(lVar4);
          uVar6 = FUN_1458e56d8(lVar4,param_1 + 0x170,local_a0);
          *(undefined8 *)(param_1 + 0x1e0) = uVar6;
        }
        FUN_144a80376(local_a0);
      }
      if (*(int *)(param_1 + 300) < 0) {
        *(undefined4 *)(param_1 + 0x128) = 0;
        FUN_14791bb40(param_1 + 0x100,0);
      }
      else {
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141315e2a FUN_141315e2a body=149 status=ok
// SIG undefined FUN_141315e2a(void)

void FUN_141315e2a(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *param_1 = &PTR_FUN_14a7be320;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x100;
  param_1[0xb] = 0;
  param_1[0xc] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x4120000041200000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0x13) = 1;
  return;
}



// FUNCTION 141315ec0 FUN_141315ec0 body=125 status=ok
// SIG undefined FUN_141315ec0(void)

void FUN_141315ec0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14a42de10;
  *(undefined2 *)(param_1 + 0xf) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x82) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  return;
}



// FUNCTION 141315f3e FUN_141315f3e body=884 status=ok
// SIG undefined FUN_141315f3e(void)

void FUN_141315f3e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar10 = (longlong *)(param_1 + 0x2e8);
  local_b0 = param_1 + 0x2f8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  iStack_50 = 0;
  uStack_60 = local_b0;
  if (*(int *)(param_1 + 0x310) == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    local_b4 = *(int *)(param_1 + 0x310);
  }
  uStack_70 = CONCAT44(uStack_4c,iStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_a0 = param_1;
  local_98 = plVar10;
  local_90 = plVar10;
  if ((iStack_54 != local_b4) || (uStack_60 != local_b0)) {
    do {
      lVar15 = *(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
      if (lVar15 != 0) {
        if (*(longlong **)(lVar15 + 0x30) != (longlong *)0x0) {
          plVar10 = (longlong *)(*local_90 + (longlong)iStack_74 * 0x20 + 0x10);
          (**(code **)(**(longlong **)(lVar15 + 0x30) + 0x20))();
          *(undefined8 *)(*plVar10 + 0x30) = 0;
          lVar15 = *plVar10;
        }
        local_a8 = lVar15 + 0x80;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        iStack_54 = 0;
        iStack_50 = 0;
        uStack_60 = local_a8;
        if (*(int *)(lVar15 + 0x98) == 0) {
          uVar17 = 1;
          iVar7 = 0;
          uVar9 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          uVar9 = local_68 & 0xffffffff;
          uVar17 = local_68 >> 0x20;
          iVar7 = *(int *)(lVar15 + 0x98);
        }
        lVar3 = uStack_60;
        uVar16 = local_58;
        iVar4 = iStack_54;
        iVar14 = iStack_50;
        if (iStack_54 != iVar7 || uStack_60 != local_a8) {
          do {
            iVar8 = (int)uVar9;
            lVar13 = *(longlong *)(lVar15 + 0x70);
            lVar11 = *(longlong *)(lVar13 + 0x10 + (longlong)iVar4 * 0x20);
            if ((lVar11 != 0) &&
               (((*(char *)(lVar11 + 0x2a) == '\0' || (*(char *)(lVar11 + 0x2a) == '\x01')) &&
                (*(longlong **)(lVar11 + 0x30) != (longlong *)0x0)))) {
              local_b8 = iVar14;
              (**(code **)(**(longlong **)(lVar11 + 0x30) + 0x20))();
              *(undefined8 *)(*(longlong *)(lVar13 + (longlong)iVar4 * 0x20 + 0x10) + 0x30) = 0;
              iVar14 = local_b8;
            }
            uVar16 = uVar16 & ~(uint)uVar17;
            lVar13 = *(longlong *)(lVar3 + 0x10);
            if (*(longlong *)(lVar3 + 0x10) == 0) {
              lVar13 = lVar3;
            }
            iVar2 = *(int *)(lVar3 + 0x18);
            lVar11 = (longlong)iVar8;
            uVar6 = *(uint *)(lVar13 + lVar11 * 4) & uVar16;
            if (uVar6 == 0) {
              iVar4 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar4 = iVar2 + -1;
              }
              iVar4 = iVar4 >> 5;
              iVar14 = iVar14 + 0x20;
              iVar5 = iVar4;
              if (iVar4 < iVar8) {
                iVar5 = iVar8;
              }
              if (iVar8 < iVar4) {
                lVar12 = 0;
                do {
                  uVar6 = *(uint *)(lVar13 + lVar11 * 4 + 4 + lVar12 * 4);
                  if (uVar6 != 0) {
                    uVar9 = (ulonglong)(iVar8 + (int)lVar12 + 1);
                    uVar16 = 0xffffffff;
                    goto LAB_1413161c9;
                  }
                  iVar14 = iVar14 + 0x20;
                  lVar12 = lVar12 + 1;
                } while (iVar5 - lVar11 != lVar12);
                uVar16 = 0xffffffff;
                iVar8 = iVar5;
              }
              uVar9 = (ulonglong)(iVar8 + 1);
              iVar4 = iVar2;
            }
            else {
LAB_1413161c9:
              uVar17 = (ulonglong)(-uVar6 & uVar6);
              uVar1 = uVar17 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar4 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar4) {
                iVar4 = iVar2;
              }
            }
          } while ((iVar4 != iVar7) || (lVar3 != local_a8));
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != local_98 ||
             (CONCAT44(uStack_7c,uStack_80) != local_b0 || iStack_74 != local_b4));
  }
  FUN_14042ef50(local_a0);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413162b4 FUN_1413162b4 body=44 status=ok
// SIG undefined FUN_1413162b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413162b4(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8bd7c = _DAT_14cb8bd7c + -1;
  *param_1 = DAT_14cb8bd70;
  DAT_14cb8bd70 = param_1;
  return;
}



// FUNCTION 1413162e0 FUN_1413162e0 body=7693 status=ok
// SIG undefined FUN_1413162e0(void)

undefined8 FUN_1413162e0(uint *param_1)

{
  code *******pppppppcVar1;
  code *******pppppppcVar2;
  uint *puVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  code *****pppppcVar7;
  longlong lVar8;
  code ****ppppcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  bool bVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  code ******ppppppcVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 *******pppppppuVar23;
  longlong lVar24;
  undefined8 uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint *puVar30;
  code ******ppppppcVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  undefined2 *puVar34;
  int iVar35;
  int *piVar36;
  uint uVar37;
  byte bVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined1 *puVar41;
  int iVar42;
  uint uVar43;
  undefined1 auStack_368 [32];
  code ******local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined8 local_330;
  wchar_t *local_328;
  code *local_320;
  undefined1 *local_318;
  code ******local_310;
  code *local_308;
  code *local_300;
  uint *local_2f8;
  code ***local_2f0;
  undefined8 *local_2e8;
  int local_2dc;
  longlong *local_2d8;
  ulonglong local_2d0;
  longlong local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined8 *local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  undefined8 uStack_290;
  longlong local_288;
  uint *local_280;
  longlong *local_278;
  undefined8 uStack_270;
  code *****local_260;
  undefined8 local_258;
  uint *local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 *****local_238;
  undefined8 uStack_230;
  code ****local_228;
  ulonglong uStack_220;
  uint local_218 [4];
  longlong local_208;
  int local_200;
  uint local_1fc;
  undefined4 uStack_1f8;
  int local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  code ******local_1d8;
  int iStack_1d0;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  undefined6 uStack_1c8;
  undefined2 uStack_1c2;
  longlong local_1c0;
  undefined8 uStack_1b8;
  uint local_1b0 [4];
  uint *local_1a0;
  int local_198;
  undefined8 local_194;
  undefined4 local_18c;
  longlong local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  longlong local_130;
  undefined4 local_128;
  undefined8 ******local_118;
  int iStack_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined6 uStack_108;
  undefined2 uStack_102;
  undefined8 uStack_100;
  uint *local_f8;
  int local_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((param_1[0x9c] & 4) != 0) || ((param_1[2] & 0x10) != 0)) {
    uVar25 = 0;
    goto LAB_141317262;
  }
  lVar16 = FUN_1405e2bf2();
  if (DAT_14c951858 == 0) {
    local_310 = (code ******)&local_118;
    local_118 = (undefined8 ******)FUN_1449e2820;
    local_300 = FUN_14081d0ea;
    local_308 = FUN_14081d0ea;
    local_318 = &LAB_1468c5283;
    local_320 = FUN_142809da0;
    local_328 = L"Engine";
    local_330 = 0x400000000;
    local_338 = 0x10000000;
    local_340 = 8;
    local_348 = (code ******)CONCAT44(local_348._4_4_,0x50);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar17 = *(longlong *)(param_1 + 8);
  local_2f8 = param_1;
  if (lVar17 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
         (lVar18 = lVar17,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) {
        lVar18 = 0;
      }
    } while ((lVar18 == 0) && (lVar17 = *(longlong *)(lVar17 + 0x20), lVar17 != 0));
    if (lVar18 != 0) {
      uVar37 = *(uint *)(lVar18 + 700);
      uVar27 = *(uint *)(lVar18 + 0x2c0);
      uVar43 = *(uint *)(lVar18 + 0x2c4);
      param_1[0xae] = *(uint *)(lVar18 + 0x2b8);
      param_1[0xaf] = uVar37;
      param_1[0xb0] = uVar27;
      param_1[0xb1] = uVar43;
      param_1[0xb2] = 0;
      param_1[0xb3] = 0;
      if (*(longlong *)(param_1 + 0x9a) != 0) {
        local_1d8 = (code ******)(lVar18 + 0x2b8);
        iStack_110 = (int)&local_1d8;
        uStack_10c = (undefined2)((ulonglong)&local_1d8 >> 0x20);
        uStack_10a = (undefined2)((ulonglong)&local_1d8 >> 0x30);
        local_118 = (undefined8 ******)FUN_14333da3e;
        FUN_140ec5510();
      }
    }
  }
  puVar30 = local_2f8;
  lVar16 = *(longlong *)(local_2f8 + 4);
  if (lVar16 == 0) {
LAB_14131717b:
    (**(code **)(*(longlong *)puVar30 + 0x308))(puVar30);
    bVar14 = true;
    lVar16 = 0;
  }
  else {
    lVar17 = FUN_140e64c66();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8
         ) != lVar17 + 0x30)) goto LAB_14131717b;
    local_298 = (longlong *)0x0;
    uStack_290 = 0;
    local_2a8 = (undefined8 *)0x0;
    uStack_2a0 = 0;
    lVar17 = *(longlong *)(puVar30 + 4);
    if (lVar17 == 0) {
      local_2c0 = 0;
      plVar22 = (longlong *)0x0;
      local_2dc = 0;
      puVar21 = (undefined8 *)0x0;
    }
    else {
      puVar21 = (undefined8 *)0x0;
      plVar22 = (longlong *)0x0;
      do {
        lVar18 = FUN_140e64c66();
        uVar40 = uStack_290;
        if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30)) break;
        uVar37 = *(uint *)(lVar17 + 1000);
        if (uVar37 != 0) {
          iVar26 = (int)uStack_290;
          lVar18 = (longlong)(int)uStack_290;
          uStack_290 = CONCAT44(uStack_290._4_4_,(int)uStack_290 + uVar37);
          if ((uint)(uStack_290._4_4_ - iVar26) < uVar37) {
            FUN_1477ace6e(&local_298,uVar40 & 0xffffffff);
            plVar22 = local_298;
          }
          FUN_1477ace56(plVar22 + lVar18,*(undefined8 *)(lVar17 + 0x3e0),uVar37);
          puVar30 = local_2f8;
        }
        uVar40 = uStack_2a0;
        uVar37 = *(uint *)(lVar17 + 0x3d8);
        if (uVar37 != 0) {
          iVar26 = (int)uStack_2a0;
          lVar18 = (longlong)(int)uStack_2a0;
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,(int)uStack_2a0 + uVar37);
          if ((uint)(uStack_2a0._4_4_ - iVar26) < uVar37) {
            FUN_1477acef4(&local_2a8,uVar40 & 0xffffffff);
            puVar21 = local_2a8;
          }
          FUN_1477acec4(puVar21 + lVar18 * 0xc,*(undefined8 *)(lVar17 + 0x3d0),uVar37);
          puVar30 = local_2f8;
        }
        lVar17 = *(longlong *)(lVar17 + 0x40);
      } while (lVar17 != 0);
      local_2dc = (int)uStack_2a0;
      local_2c0 = uStack_290 & 0xffffffff;
    }
    lVar17 = FUN_141318228(lVar16);
    lVar17 = *(longlong *)(lVar17 + 0x3b0);
    for (puVar3 = puVar30; local_280 = puVar30, puVar3 != (uint *)0x0;
        puVar3 = *(uint **)(puVar3 + 8)) {
      iVar26 = local_2dc;
      if ((puVar3[2] & 0x30) != 0) goto LAB_141317135;
    }
    lVar18 = *(longlong *)(puVar30 + 0x9a);
    plVar19 = *(longlong **)(puVar30 + 4);
    local_2e8 = puVar21;
    local_2d8 = plVar22;
    local_2c8 = lVar16;
    local_288 = lVar18;
    if (lVar18 == 0) {
      local_208 = 0;
      local_200 = 0;
      local_228 = (code ****)0x0;
      uStack_220 = 0;
      local_1fc = 0x80;
      uStack_1f8 = 0xffffffff;
      local_1f4 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      if (plVar19 != (longlong *)0x0) {
        lVar16 = FUN_140e64c66();
        if ((*(int *)(lVar16 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8)
            == lVar16 + 0x30)) {
          local_260 = &local_228;
          if ((longlong)(int)plVar19[0x7f] != 0) {
            puVar32 = (undefined8 *)plVar19[0x7e];
            puVar21 = puVar32 + (int)plVar19[0x7f];
            plVar22 = plVar19;
LAB_14131789b:
            do {
              pppppppuVar23 =
                   (undefined8 *******)
                   (**(code **)(*(longlong *)(plVar22[0x76] + 0x28) + 0x18))
                             (plVar22[0x76] + 0x28,*puVar32);
              if (pppppppuVar23 == (undefined8 *******)0x0) {
                plVar22 = (longlong *)plVar22[8];
                if (plVar22 != (longlong *)0x0) {
                  lVar16 = FUN_140e64c66();
                  if ((*(int *)(lVar16 + 0x38) <= *(int *)(plVar22[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar22[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
                      lVar16 + 0x30)) goto LAB_14131789b;
                }
              }
              else {
                local_118 = (undefined8 ******)*puVar32;
                local_1d8 = (code ******)pppppppuVar23;
                FUN_14333dd26(&local_260,&local_118,&local_1d8);
              }
              puVar32 = puVar32 + 1;
              plVar22 = plVar19;
            } while (puVar32 != puVar21);
          }
        }
      }
      puVar30 = local_2f8;
      if ((lVar17 != 0) &&
         (local_e8 = (code *******)CONCAT44(local_e8._4_4_,(int)local_e8),
         (local_2f8[2] >> 0xc & 1) == 0)) {
        local_1a0 = (uint *)0x0;
        local_198 = 0;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1d8 = (code ******)0x0;
        iStack_1d0 = 0;
        uStack_1cc = 0;
        uStack_1ca = 0;
        uStack_1c8 = 0;
        local_194 = 0xffffffff00000080;
        local_18c = 0;
        local_180 = 0;
        local_178 = 0;
        local_150 = 0;
        local_148 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_144 = 0xffffffff00000080;
        local_13c = 0;
        local_130 = 0;
        local_128 = 0;
        ppppppuVar4 = *(undefined8 *******)(lVar17 + 0x10);
        DAT_14cab9b48 = DAT_14cab9b48 + 1;
        FUN_14058b40c(local_2f8,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                     );
        local_c8 = (longlong *)0x0;
        local_98 = 0;
        uStack_108 = 0;
        uStack_102 = 0;
        local_f8 = (uint *)((ulonglong)local_f8 & 0xffffffffffff0000);
        iStack_110 = (int)puVar30;
        uStack_10c = (undefined2)((ulonglong)puVar30 >> 0x20);
        uStack_10a = (undefined2)((ulonglong)puVar30 >> 0x30);
        uStack_100 = 8;
        local_f0 = (int)lVar17;
        uStack_ec = (uint)((ulonglong)lVar17 >> 0x20);
        local_e0 = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        local_118 = ppppppuVar4;
        local_e8 = &local_1d8;
        lVar16 = FUN_1402710dd(&local_118);
        if (CONCAT44(uStack_d4,uStack_d8) != 0) {
          plVar22 = local_c8;
          if (local_c8 == (longlong *)0x0) {
            plVar22 = (longlong *)local_b8;
          }
          (**(code **)(*plVar22 + 0x10))();
        }
        if ((lVar16 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar16);
        }
        *(longlong *)(puVar30 + 0x9a) = lVar16;
        FUN_144757f48(lVar16,0x800040);
        if (local_198 == 0) {
          uVar33 = 1;
          uVar40 = 0;
          iVar26 = 0;
          iVar35 = 0;
        }
        else {
          puVar30 = local_1a0;
          if (local_1a0 == (uint *)0x0) {
            puVar30 = local_1b0;
          }
          uVar37 = *puVar30;
          if (uVar37 == 0) {
            iVar26 = local_198 + 0x1e;
            if (-1 < local_198 + -1) {
              iVar26 = local_198 + -1;
            }
            uVar40 = 0;
            uVar33 = (ulonglong)(uint)(iVar26 >> 5);
            if (iVar26 >> 5 < 1) {
              uVar33 = uVar40;
            }
            iVar35 = 0;
            do {
              if (uVar33 == uVar40) goto LAB_1413167a2;
              iVar35 = iVar35 + 0x20;
              uVar37 = puVar30[uVar40 + 1];
              uVar40 = uVar40 + 1;
            } while (uVar37 == 0);
          }
          else {
            uVar40 = 0;
            iVar35 = 0;
          }
          uVar33 = (ulonglong)(-uVar37 & uVar37);
          uVar39 = uVar33 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar39 != 0) {
            for (; uVar39 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar26 = (iVar35 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (local_198 <= iVar26) {
            iVar26 = local_198;
          }
        }
        if (iVar26 < local_198) {
          uVar37 = 0xffffffff;
          do {
            plVar22 = *(longlong **)(local_1c0 + 8 + (longlong)iVar26 * 0x18);
            if (plVar22 != (longlong *)0x0) {
              lVar16 = FUN_1405e2bf2();
              if ((*(int *)(lVar16 + 0x38) <= *(int *)(plVar22[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar22[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
                  lVar16 + 0x30)) {
                uVar27 = local_2f8[0xaf];
                uVar43 = local_2f8[0xb0];
                uVar13 = local_2f8[0xb1];
                *(uint *)(plVar22 + 0x57) = local_2f8[0xae];
                *(uint *)((longlong)plVar22 + 700) = uVar27;
                *(uint *)(plVar22 + 0x58) = uVar43;
                *(uint *)((longlong)plVar22 + 0x2c4) = uVar13;
                plVar22[0x59] = 0;
                if (plVar22[0x4d] != 0) {
                  local_260 = (code *****)(local_2f8 + 0xae);
                  iStack_110 = (int)&local_260;
                  uStack_10c = (undefined2)((ulonglong)&local_260 >> 0x20);
                  uStack_10a = (undefined2)((ulonglong)&local_260 >> 0x30);
                  local_118 = (undefined8 ******)FUN_14333da3e;
                  FUN_140ec5510();
                }
                (**(code **)(*plVar22 + 0x300))(plVar22);
              }
            }
            uVar37 = uVar37 & ~(uint)uVar33;
            puVar30 = local_1a0;
            if (local_1a0 == (uint *)0x0) {
              puVar30 = local_1b0;
            }
            iVar26 = (int)uVar40;
            lVar16 = (longlong)iVar26;
            uVar27 = puVar30[lVar16] & uVar37;
            if (uVar27 == 0) {
              iVar28 = local_198 + 0x1e;
              if (-1 < local_198 + -1) {
                iVar28 = local_198 + -1;
              }
              iVar28 = iVar28 >> 5;
              iVar29 = iVar28;
              if (iVar28 < iVar26) {
                iVar29 = iVar26;
              }
              if (iVar28 <= iVar26) break;
              lVar17 = 0;
              while( true ) {
                iVar35 = iVar35 + 0x20;
                uVar27 = puVar30[lVar17 + lVar16 + 1];
                if (uVar27 != 0) break;
                lVar17 = lVar17 + 1;
                if (iVar29 - lVar16 == lVar17) goto LAB_1413167a2;
              }
              uVar40 = (ulonglong)(iVar26 + (int)lVar17 + 1);
              uVar37 = 0xffffffff;
            }
            uVar33 = (ulonglong)(-uVar27 & uVar27);
            uVar39 = uVar33 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar39 != 0) {
              for (; uVar39 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar26 = (iVar35 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          } while (iVar26 < local_198);
        }
LAB_1413167a2:
        local_238 = (code ******)0x0;
        uStack_230 = 0;
        iVar26 = (int)uStack_220 - local_1f4;
        if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar26);
        }
        if (iVar26 != 0) {
          FUN_147771ea2(&local_238);
        }
        local_260 = (code *****)0x100000000;
        local_250 = (uint *)0xffffffff;
        local_248._0_4_ = 0;
        uVar10 = (uint)local_248;
        local_248._0_4_ = 0;
        local_258 = (code *******)local_218;
        if (local_200 != 0) {
          local_248._0_4_ = uVar10;
          FUN_1449c0562(&local_260);
        }
        uStack_100 = (longlong)local_250;
        local_f8 = (uint *)CONCAT44(local_248._4_4_,(uint)local_248);
        iStack_110 = (int)local_260;
        uStack_10c = (undefined2)((ulonglong)local_260 >> 0x20);
        uStack_10a = (undefined2)((ulonglong)local_260 >> 0x30);
        uStack_108 = SUB86(local_258,0);
        uStack_102 = (undefined2)((ulonglong)local_258 >> 0x30);
        local_118 = (undefined8 ******)&local_228;
        while (uVar40 = uStack_230, uVar37 = uStack_100._4_4_,
              (int)uStack_100._4_4_ < *(int *)(CONCAT26(uStack_102,uStack_108) + 0x18)) {
          pppppuVar5 = *local_118;
          lVar16 = (longlong)(int)uStack_230;
          uVar27 = (int)uStack_230 + 1;
          uStack_230 = CONCAT44(uStack_230._4_4_,uVar27);
          if (uStack_230._4_4_ < uVar27) {
            FUN_147771f02(&local_238,uVar40 & 0xffffffff);
          }
          local_238[lVar16] = pppppuVar5[(longlong)(int)uVar37 * 3 + 1];
          uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~CONCAT22(uStack_10a,uStack_10c)
                               );
          FUN_1449c0562(&iStack_110);
        }
        local_118 = (undefined8 ******)&DAT_100000000;
        iStack_110 = (int)local_218;
        uStack_10c = (undefined2)((ulonglong)local_218 >> 0x20);
        uStack_10a = (undefined2)((ulonglong)local_218 >> 0x30);
        uStack_108 = 0xffffffff;
        uStack_102 = 0;
        uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
        iVar26 = 0;
        if (local_200 != 0) {
          FUN_1449c0562(&local_118);
          iVar26 = local_200;
        }
        local_250 = (uint *)CONCAT26(uStack_10a,CONCAT24(uStack_10c,iStack_110));
        uVar25 = CONCAT26(uStack_102,uStack_108);
        local_240 = (uint)uStack_100;
        local_23c = uStack_100._4_4_;
        local_258 = (code *******)local_118;
        local_248._4_4_ = (int)((ulonglong)uVar25 >> 0x20);
        local_260 = &local_228;
        if ((local_248._4_4_ != iVar26) || (local_250 != local_218)) {
          puVar30 = local_2f8 + 0x5a;
          iVar35 = local_248._4_4_;
          local_248 = uVar25;
          do {
            pppppuVar5 = (undefined8 *****)*local_260;
            lVar16 = (**(code **)(*(longlong *)puVar30 + 0x18))
                               (puVar30,pppppuVar5[(longlong)iVar35 * 3]);
            if (lVar16 == 0) {
              pppppuVar5 = pppppuVar5 + (longlong)iVar35 * 3;
              ppppuVar6 = pppppuVar5[1];
              if (ppppuVar6 != (undefined8 ****)0x0) {
                local_278 = (longlong *)0x0;
                ppppcVar9 = (code ****)*pppppuVar5;
                uStack_270 = 1;
                FUN_1477ab722(&local_278,0);
                *local_278 = (longlong)ppppcVar9;
                local_278[1] = (longlong)ppppuVar6;
                local_2f0 = (code ***)ppppcVar9;
                if ((longlong)(int)uStack_230 != 0) {
                  ppppppcVar31 = (code ******)(local_238 + (int)uStack_230);
                  ppppppcVar20 = (code ******)local_238;
                  do {
                    while ((pppppcVar7 = *ppppppcVar20, pppppcVar7 != (code *****)0x0 &&
                           (pppppcVar7[3] == (code ****)local_2f0))) {
                      if (ppppppcVar20 == (code ******)0x0) goto LAB_141317e89;
                      puVar21 = (undefined8 *)FUN_14779c152(&local_228,pppppcVar7);
                      local_2f0 = (code ***)*puVar21;
                      lVar16 = (**(code **)(*(longlong *)puVar30 + 0x18))(puVar30);
                      uVar40 = uStack_270;
                      if (lVar16 != 0) goto LAB_141317e89;
                      lVar16 = (longlong)(int)uStack_270;
                      if (lVar16 != 0) {
                        lVar17 = lVar16 << 4;
                        plVar22 = local_278;
                        do {
                          if ((code ****)*plVar22 == (code ****)local_2f0) {
                            if (plVar22 != (longlong *)0x0) goto LAB_141317e89;
                            break;
                          }
                          plVar22 = plVar22 + 2;
                          lVar17 = lVar17 + -0x10;
                        } while (lVar17 != 0);
                      }
                      uVar37 = (int)uStack_270 + 1;
                      uStack_270 = CONCAT44(uStack_270._4_4_,uVar37);
                      if (uStack_270._4_4_ < uVar37) {
                        FUN_1477ab722(&local_278,uVar40 & 0xffffffff);
                      }
                      local_278[lVar16 * 2] = (longlong)local_2f0;
                      local_278[lVar16 * 2 + 1] = (longlong)pppppcVar7;
                      ppppppcVar31 = (code ******)(local_238 + (int)uStack_230);
                      ppppppcVar20 = (code ******)local_238;
                      if ((longlong)(int)uStack_230 == 0) goto LAB_141317e89;
                    }
                    ppppppcVar20 = ppppppcVar20 + 1;
                  } while (ppppppcVar20 != ppppppcVar31);
                }
LAB_141317e89:
                lVar16 = (longlong)(int)uStack_270;
                if (0 < lVar16) {
                  local_2f0 = (code ***)(lVar16 + 1);
                  lVar16 = lVar16 * 0x10 + -8;
                  do {
                    local_2d0 = *(ulonglong *)((longlong)local_278 + lVar16 + -8);
                    lVar17 = *(longlong *)((longlong)local_278 + lVar16);
                    local_e0 = 0;
                    uStack_d8 = 0;
                    uStack_100 = 0;
                    local_f8 = (uint *)0x0;
                    uStack_108 = 0;
                    local_118 = (code *******)0x0;
                    iStack_110 = 0;
                    uStack_10c = 0;
                    uStack_10a = 0;
                    uStack_d4 = 0x80;
                    uStack_d0 = 0xffffffff;
                    local_cc = 0;
                    local_c0 = 0;
                    local_b8[0] = 0;
                    local_90 = 0;
                    local_88 = 0;
                    local_b0 = 0;
                    uStack_a8 = 0;
                    local_84 = 0xffffffff00000080;
                    local_7c = 0;
                    local_70 = 0;
                    local_68 = 0;
                    local_2b8 = lVar17;
                    uVar25 = FUN_1412864c6();
                    uVar25 = FUN_144a78ede(lVar17,uVar25);
                    puVar3 = local_2f8;
                    FUN_14050314a(&local_118,*(longlong *)(local_2f8 + 0x9a),uVar25);
                    local_348 = (code ******)&local_118;
                    uVar25 = FUN_1477a9f33(*(longlong *)(puVar3 + 0x9a),
                                           *(undefined8 *)(local_2b8 + 0x10),
                                           *(undefined8 *)(local_2b8 + 0x18));
                    FUN_144757f48(uVar25,0x800040);
                    (**(code **)(*(longlong *)(local_2f8 + 0x5a) + 0x20))(puVar30,local_2d0,uVar25);
                    FUN_1401be4be(&local_118);
                    local_2f0 = (code ***)((longlong)local_2f0 + -1);
                    lVar16 = lVar16 + -0x10;
                  } while (&DAT_00000001 < local_2f0);
                }
                if (local_278 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            local_248 = CONCAT44(local_248._4_4_,(uint)local_248 & ~local_258._4_4_);
            FUN_1449c0562(&local_258);
            iVar35 = local_248._4_4_;
          } while (((local_248._4_4_ != iVar26) || (local_250 != local_218)) ||
                  (uVar25 = local_248, local_260 != &local_228));
        }
        local_248 = uVar25;
        if ((code ******)local_238 != (code ******)0x0) {
          FUN_1400020a8();
        }
        puVar30 = local_2f8;
        local_128 = 0;
        if (local_130 != 0) {
          FUN_1400020a8();
        }
        FUN_1401be552(&local_170);
        local_178 = 0;
        if (local_180 != 0) {
          FUN_1400020a8();
        }
        FUN_1401be51a(&local_1c0);
        DAT_14cab9b48 = DAT_14cab9b48 + -1;
      }
      lVar18 = *(longlong *)(puVar30 + 0x9a);
      local_1e0 = 0;
      local_288 = lVar18;
      if (local_1e8 != 0) {
        FUN_1400020a8();
      }
      uVar40 = uStack_220 >> 0x20;
      uStack_220 = uStack_220 & 0xffffffff00000000;
      if ((int)uVar40 != 0) {
        FUN_144727cd0(&local_228,0);
      }
      uStack_1f8 = 0xffffffff;
      local_1f4 = 0;
      local_200 = 0;
      if (0x80 < local_1fc) {
        local_1fc = 0x80;
        FUN_1446efbd8(local_218,0);
      }
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      if ((undefined8 *****)local_228 != (undefined8 *****)0x0) {
        FUN_1400020a8();
      }
      puVar21 = local_2e8;
      lVar16 = local_2c8;
      puVar30 = local_2f8;
      iVar26 = local_2dc;
      if (lVar18 != 0) {
        plVar19 = *(longlong **)(local_2f8 + 4);
        goto LAB_141316a38;
      }
    }
    else {
LAB_141316a38:
      local_f8 = (uint *)0x0;
      local_f0 = 0;
      local_118 = (code *******)0x0;
      iStack_110 = 0;
      uStack_10c = 0;
      uStack_10a = 0;
      uStack_ec = 0x80;
      local_e8._0_4_ = -1;
      local_e8._4_4_ = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      puVar30 = local_2f8;
      while (local_2f8 = puVar30, plVar19 != (longlong *)0x0) {
        ppppppcVar31 = (code ******)plVar19[10];
LAB_141316a7f:
        if (ppppppcVar31 != (code ******)0x0) {
          if ((~*(uint *)(ppppppcVar31[1] + 3) & 0x4008001) != 0) goto code_r0x000141316a98;
          local_2f0 = (code ***)plVar19;
LAB_141316ab9:
          iVar35 = (int)local_e8;
          iVar26 = iStack_110;
          ppppppcVar20 = (code ******)ppppppcVar31[4];
          if (local_e8._4_4_ == 0) {
            iStack_110 = iStack_110 + 1;
            if (CONCAT22(uStack_10a,uStack_10c) == iVar26) {
              FUN_14482b872(&local_118,iVar26);
            }
            iVar35 = local_f0;
            if (local_f0 == 0) {
              iVar28 = -1;
            }
            else {
              iVar28 = local_f0 + 0x1e;
              if (-1 < local_f0 + -1) {
                iVar28 = local_f0 + -1;
              }
              iVar28 = iVar28 >> 5;
            }
            iVar29 = local_f0 + 1;
            iVar42 = local_f0 + 0x1f;
            if (-1 < local_f0) {
              iVar42 = local_f0;
            }
            if (iVar42 >> 5 == iVar28) {
              local_f0 = iVar29;
            }
            else {
              if ((int)uStack_ec <= local_f0) {
                if (local_f0 + 0x20U < 0xa0) {
                  uStack_ec = 0x80;
                }
                else {
                  uVar37 = local_f0 + 0x20U >> 5;
                  local_2d0 = (ulonglong)uVar37;
                  if (uStack_ec + 0x1f < 0xa0) {
                    uVar27 = 4;
                    if (4 < uVar37) {
                      uVar27 = uVar37;
                    }
                  }
                  else {
                    uVar27 = (uVar37 * 3 >> 3) + uVar37 + 0x10;
                  }
                  uVar40 = FUN_144a3809e(uVar27 << 2,0);
                  iVar28 = (int)(uVar40 >> 2);
                  uStack_ec = iVar28 << 5;
                  if (iVar28 < (int)local_2d0) {
                    uStack_ec = 0xffffffe0;
                  }
                }
                FUN_1446efbd8(&uStack_108,local_f0);
                iVar29 = local_f0 + 1;
              }
              iVar28 = iVar29 + 0x1f;
              if (-1 < iVar29) {
                iVar28 = iVar29;
              }
              local_f0 = iVar29;
              if (iVar29 % 0x20 != 0) {
                puVar30 = local_f8;
                if (local_f8 == (uint *)0x0) {
                  puVar30 = (uint *)&uStack_108;
                }
                bVar38 = -(char)(iVar29 % 0x20);
                puVar30[iVar28 >> 5] = (puVar30[iVar28 >> 5] << (bVar38 & 0x1f)) >> (bVar38 & 0x1f);
              }
            }
            lVar16 = (longlong)iVar26;
            puVar30 = local_f8;
            if (local_f8 == (uint *)0x0) {
              puVar30 = (uint *)&uStack_108;
            }
            bVar38 = (byte)iVar35 & 0x1f;
            puVar30[iVar42 >> 5] =
                 puVar30[iVar42 >> 5] & (-2 << bVar38 | 0xfffffffeU >> 0x20 - bVar38);
            iVar35 = iVar26;
          }
          else {
            lVar16 = (longlong)(int)local_e8;
            local_e8._0_4_ = *(int *)((longlong)local_118 + lVar16 * 0x18 + 4);
            local_e8._4_4_ = local_e8._4_4_ + -1;
            if (local_e8._4_4_ != 0) {
              *(undefined4 *)(local_118 + (longlong)(int)local_e8 * 3) = 0xffffffff;
            }
          }
          puVar30 = local_f8;
          if (local_f8 == (uint *)0x0) {
            puVar30 = (uint *)&uStack_108;
          }
          iVar26 = iVar35 + 0x1f;
          if (-1 < iVar35) {
            iVar26 = iVar35;
          }
          puVar30[iVar26 >> 5] = puVar30[iVar26 >> 5] | 1 << ((byte)iVar35 & 0x1f);
          pppppppcVar1 = (code *******)(local_118 + lVar16 * 3);
          *pppppppcVar1 = ppppppcVar20;
          pppppppcVar1[1] = ppppppcVar31;
          *(undefined4 *)(pppppppcVar1 + 2) = 0xffffffff;
          uVar37 = (uint)((ulonglong)ppppppcVar20 >> 0x10);
          uVar27 = (uint)ppppppcVar20 & 0xffff;
          uVar37 = ((uint)ppppppcVar20 << 0x10 | uVar27) + (int)((ulonglong)ppppppcVar20 >> 0x20) +
                   (uVar37 << 0x13 | uVar37 & 0xffff) + (uVar27 >> 4);
          uVar27 = iStack_110 - local_e8._4_4_;
          if ((uVar27 == 0) || (uVar27 == 1)) {
LAB_141316c33:
            if (uVar27 < 4) {
              uVar43 = 1;
            }
            else {
              uVar40 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
              lVar16 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar43 = 1 << ((byte)lVar16 & 0x1f);
            }
            if (((int)uVar27 < 1) || ((int)uVar43 <= (int)uStack_d0)) {
              uVar37 = uStack_d0 - 1 & uVar37;
              *(uint *)((longlong)pppppppcVar1 + 0x14) = uVar37;
              puVar21 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
              if ((undefined8 *)CONCAT44(uStack_d4,uStack_d8) == (undefined8 *)0x0) {
                puVar21 = &local_e0;
              }
              *(undefined4 *)(pppppppcVar1 + 2) =
                   *(undefined4 *)
                    ((longlong)puVar21 + ((longlong)(int)uStack_d0 - 1U & (longlong)(int)uVar37) * 4
                    );
              puVar21 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
              if ((undefined8 *)CONCAT44(uStack_d4,uStack_d8) == (undefined8 *)0x0) {
                puVar21 = &local_e0;
              }
              *(int *)((longlong)puVar21 +
                      ((longlong)(int)uStack_d0 - 1U & (longlong)(int)uVar37) * 4) = iVar35;
            }
            else {
              uStack_d0 = uVar43;
              if (CONCAT44(uStack_d4,uStack_d8) != 0) {
                FUN_1446efa72(&uStack_d8,0,0,4);
              }
              uVar37 = uStack_d0;
              if (uStack_d0 == 1) {
                if (CONCAT44(uStack_d4,uStack_d8) != 0) {
                  FUN_1446efa72(&uStack_d8,0,0,4);
                }
LAB_141316d30:
                uVar27 = 0;
                do {
                  puVar21 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
                  if ((undefined8 *)CONCAT44(uStack_d4,uStack_d8) == (undefined8 *)0x0) {
                    puVar21 = &local_e0;
                  }
                  *(undefined4 *)
                   ((longlong)puVar21 + (ulonglong)(uStack_d0 + 0x7fffffff & uVar27) * 4) =
                       0xffffffff;
                  uVar27 = uVar27 + 1;
                } while (uVar37 != uVar27);
              }
              else {
                if (uStack_d0 == 0) goto LAB_141316cb7;
                FUN_1446efa72(&uStack_d8,0,uStack_d0,4);
                if (0 < (int)uVar37) goto LAB_141316d30;
              }
              if (local_f0 == 0) {
                uVar40 = 0;
                uVar33 = 1;
                iVar26 = 0;
                iVar35 = 0;
              }
              else {
                puVar30 = local_f8;
                if (local_f8 == (uint *)0x0) {
                  puVar30 = (uint *)&uStack_108;
                }
                uVar37 = *puVar30;
                if (uVar37 == 0) {
                  iVar26 = local_f0 + 0x1e;
                  if (-1 < local_f0 + -1) {
                    iVar26 = local_f0 + -1;
                  }
                  uVar40 = 0;
                  uVar27 = iVar26 >> 5;
                  if (iVar26 >> 5 < 1) {
                    uVar27 = 0;
                  }
                  iVar35 = 0;
                  do {
                    if (uVar27 == uVar40) goto LAB_141316cb7;
                    iVar35 = iVar35 + 0x20;
                    uVar37 = puVar30[uVar40 + 1];
                    uVar40 = uVar40 + 1;
                  } while (uVar37 == 0);
                }
                else {
                  uVar40 = 0;
                  iVar35 = 0;
                }
                uVar33 = (ulonglong)(-uVar37 & uVar37);
                uVar39 = uVar33 * 2 + 1;
                lVar16 = 0x3f;
                if (uVar39 != 0) {
                  for (; uVar39 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                iVar26 = (iVar35 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                if (local_f0 <= iVar26) {
                  iVar26 = local_f0;
                }
              }
              if (iVar26 < local_f0) {
                puVar41 = &DAT_ffffffff;
                do {
                  lVar16 = (longlong)iVar26;
                  ppppppcVar20 = (code ******)local_118[lVar16 * 3];
                  uVar37 = (uint)((ulonglong)ppppppcVar20 >> 0x10);
                  uVar27 = (uint)ppppppcVar20 & 0xffff;
                  uVar39 = (longlong)
                           (int)(((uint)ppppppcVar20 << 0x10 | uVar27) +
                                 (int)((ulonglong)ppppppcVar20 >> 0x20) +
                                 (uVar37 << 0x13 | uVar37 & 0xffff) + (uVar27 >> 4)) &
                           (longlong)(int)uStack_d0 - 1U;
                  iVar28 = (int)uVar39;
                  *(int *)((longlong)local_118 + lVar16 * 0x18 + 0x14) = iVar28;
                  puVar21 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
                  if ((undefined8 *)CONCAT44(uStack_d4,uStack_d8) == (undefined8 *)0x0) {
                    puVar21 = &local_e0;
                  }
                  *(undefined4 *)(local_118 + lVar16 * 3 + 2) =
                       *(undefined4 *)
                        ((longlong)puVar21 + ((longlong)(int)uStack_d0 - 1U & uVar39) * 4);
                  puVar21 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
                  if ((undefined8 *)CONCAT44(uStack_d4,uStack_d8) == (undefined8 *)0x0) {
                    puVar21 = &local_e0;
                  }
                  *(int *)((longlong)puVar21 +
                          ((longlong)iVar28 & (longlong)(int)uStack_d0 - 1U) * 4) = iVar26;
                  uVar37 = ~(uint)uVar33 & (uint)puVar41;
                  puVar30 = local_f8;
                  if (local_f8 == (uint *)0x0) {
                    puVar30 = (uint *)&uStack_108;
                  }
                  iVar26 = (int)uVar40;
                  lVar16 = (longlong)iVar26;
                  uVar27 = puVar30[lVar16] & uVar37;
                  if (uVar27 == 0) {
                    iVar28 = local_f0 + 0x1e;
                    if (-1 < local_f0 + -1) {
                      iVar28 = local_f0 + -1;
                    }
                    iVar28 = iVar28 >> 5;
                    iVar29 = iVar28;
                    if (iVar28 < iVar26) {
                      iVar29 = iVar26;
                    }
                    if (iVar28 <= iVar26) break;
                    lVar17 = 0;
                    while( true ) {
                      iVar35 = iVar35 + 0x20;
                      uVar27 = puVar30[lVar17 + lVar16 + 1];
                      if (uVar27 != 0) break;
                      lVar17 = lVar17 + 1;
                      if (iVar29 - lVar16 == lVar17) goto LAB_141316cb7;
                    }
                    uVar40 = (ulonglong)(iVar26 + (int)lVar17 + 1);
                    uVar37 = 0xffffffff;
                  }
                  puVar41 = (undefined1 *)(ulonglong)uVar37;
                  uVar33 = (ulonglong)(-uVar27 & uVar27);
                  uVar39 = uVar33 * 2 + 1;
                  lVar16 = 0x3f;
                  if (uVar39 != 0) {
                    for (; uVar39 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  iVar26 = (iVar35 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                } while (iVar26 < local_f0);
              }
            }
          }
          else {
            puVar21 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
            if ((undefined8 *)CONCAT44(uStack_d4,uStack_d8) == (undefined8 *)0x0) {
              puVar21 = &local_e0;
            }
            iVar26 = *(int *)((longlong)puVar21 + (ulonglong)(uStack_d0 - 1 & uVar37) * 4);
            while( true ) {
              if (iVar26 == -1) goto LAB_141316c33;
              pppppppcVar2 = (code *******)(local_118 + (longlong)iVar26 * 3);
              if (*pppppppcVar2 == ppppppcVar20) break;
              iVar26 = *(int *)(pppppppcVar2 + 2);
            }
            uVar10 = *(undefined4 *)((longlong)pppppppcVar1 + 4);
            uVar11 = *(undefined4 *)(pppppppcVar1 + 1);
            uVar12 = *(undefined4 *)((longlong)pppppppcVar1 + 0xc);
            *(undefined4 *)pppppppcVar2 = *(undefined4 *)pppppppcVar1;
            *(undefined4 *)((longlong)pppppppcVar2 + 4) = uVar10;
            *(undefined4 *)(pppppppcVar2 + 1) = uVar11;
            *(undefined4 *)((longlong)pppppppcVar2 + 0xc) = uVar12;
            FUN_1477acde4(&local_118,iVar35);
          }
LAB_141316cb7:
          ppppppcVar31 = ppppppcVar31 + 3;
          do {
            for (ppppppcVar31 = (code ******)*ppppppcVar31; ppppppcVar31 != (code ******)0x0;
                ppppppcVar31 = (code ******)ppppppcVar31[3]) {
              if ((~*(uint *)(ppppppcVar31[1] + 3) & 0x4008001) == 0) goto LAB_141316ab9;
            }
            local_2f0 = (code ***)(**(code **)((longlong)*local_2f0 + 0x2b0))();
            ppppppcVar31 = (code ******)(local_2f0 + 10);
          } while (local_2f0 != (code ***)0x0);
          local_2f0 = (code ***)0x0;
          lVar18 = local_288;
          puVar30 = local_280;
          break;
        }
        plVar19 = (longlong *)(**(code **)(*plVar19 + 0x2b0))(plVar19);
        puVar30 = local_2f8;
      }
      if ((int)local_2c0 != 0) {
        plVar22 = local_2d8 + (int)local_2c0;
        do {
          plVar19 = (longlong *)*local_2d8;
          lVar16 = (**(code **)(*plVar19 + 0x2e8))(plVar19);
          if ((lVar16 != 0) &&
             (lVar16 = (**(code **)(*plVar19 + 0x2e8))(plVar19), iStack_110 != local_e8._4_4_)) {
            ppppppcVar31 = *(code *******)(lVar16 + 0x18);
            uVar37 = (uint)((ulonglong)ppppppcVar31 >> 0x10);
            uVar27 = (uint)ppppppcVar31 & 0xffff;
            puVar21 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
            if ((undefined8 *)CONCAT44(uStack_d4,uStack_d8) == (undefined8 *)0x0) {
              puVar21 = &local_e0;
            }
            iVar26 = *(int *)((longlong)puVar21 +
                             (ulonglong)
                             (uStack_d0 - 1 &
                             (int)((ulonglong)ppppppcVar31 >> 0x20) +
                             ((uint)ppppppcVar31 << 0x10 | uVar27) +
                             (uVar37 << 0x13 | uVar37 & 0xffff) + (uVar27 >> 4)) * 4);
            while (iVar26 != -1) {
              pppppppcVar1 = (code *******)(local_118 + (longlong)iVar26 * 3);
              if (*pppppppcVar1 == ppppppcVar31) {
                if ((pppppppcVar1 + 1 != (code *******)0x0 && pppppppcVar1 != (code *******)0x0) &&
                   ((ppppppcVar31 = pppppppcVar1[1], plVar19 != (longlong *)0x0 ||
                    ((*(byte *)((longlong)ppppppcVar31 + 0x39) & 0x10) == 0)))) {
                  (*(code *)(*ppppppcVar31)[0x40])(ppppppcVar31,puVar30,plVar19,0);
                }
                break;
              }
              iVar26 = *(int *)(pppppppcVar1 + 2);
            }
          }
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 != plVar22);
      }
      local_1d8 = (code ******)&local_118;
      local_258 = &local_1d8;
      iStack_1d0 = (int)&local_280;
      uStack_1cc = (undefined2)((ulonglong)&local_280 >> 0x20);
      uStack_1ca = (undefined2)((ulonglong)&local_280 >> 0x30);
      uStack_1c8 = SUB86(&local_288,0);
      uStack_1c2 = (undefined2)((ulonglong)&local_288 >> 0x30);
      local_260 = (code *****)FUN_14333dd84;
      FUN_140ec5510(lVar18);
      puVar30 = local_280;
      if (local_2dc != 0) {
        puVar21 = local_2e8 + (longlong)local_2dc * 0xc;
        do {
          puVar34 = &DAT_149dfb77a;
          if (*(int *)(local_2e8 + 1) != 0) {
            puVar34 = (undefined2 *)*local_2e8;
          }
          FUN_1446f470e(&local_238,puVar34,1);
          if (iStack_110 != local_e8._4_4_) {
            uVar37 = (uint)((ulonglong)local_238 >> 0x10);
            uVar27 = (uint)local_238 & 0xffff;
            puVar32 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
            if ((undefined8 *)CONCAT44(uStack_d4,uStack_d8) == (undefined8 *)0x0) {
              puVar32 = &local_e0;
            }
            iVar26 = *(int *)((longlong)puVar32 +
                             (ulonglong)
                             (uStack_d0 - 1 &
                             (int)((ulonglong)local_238 >> 0x20) +
                             ((uint)local_238 << 0x10 | uVar27) + (uVar37 << 0x13 | uVar37 & 0xffff)
                             + (uVar27 >> 4)) * 4);
            while (iVar26 != -1) {
              pppppppcVar1 = (code *******)(local_118 + (longlong)iVar26 * 3);
              if (*pppppppcVar1 == (code ******)local_238) {
                if ((pppppppcVar1 + 1 != (code *******)0x0 && pppppppcVar1 != (code *******)0x0) &&
                   (ppppppcVar31 = pppppppcVar1[1],
                   lVar16 = (*(code *)(*ppppppcVar31)[0x44])(ppppppcVar31,puVar30,0), lVar16 != 0))
                {
                  lVar17 = FUN_140de7a58();
                  if ((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) {
                    local_2f0 = (code ***)(local_2e8 + 2);
                    FUN_1400021e4(local_2f0,&local_228);
                    FUN_144a882a8(&local_1d8,&local_228,L"Delegate");
                    pppppppuVar23 = (undefined8 *******)local_1d8;
                    if (iStack_1d0 == 0) {
                      pppppppuVar23 = (undefined8 *******)&DAT_149dfb77a;
                    }
                    FUN_1446f470e(&local_278,pppppppuVar23,1);
                    lVar17 = FUN_14779fba8(*(undefined8 *)(lVar16 + 0x10),local_278);
                    if ((undefined8 *******)local_1d8 != (undefined8 *******)0x0) {
                      FUN_1400020a8();
                    }
                    if ((undefined8 *****)local_228 != (undefined8 *****)0x0) {
                      FUN_1400020a8();
                    }
                    if ((((lVar17 != 0) ||
                         (lVar17 = FUN_14779fba8(*(undefined8 *)(lVar16 + 0x10),*local_2f0),
                         lVar17 != 0)) &&
                        ((*(int *)(local_2e8 + 5) < 1 ||
                         (cVar15 = FUN_14775edac(lVar16,lVar17,puVar30,local_2e8 + 4),
                         cVar15 == '\0')))) &&
                       (lVar16 = lVar16 + *(int *)(lVar17 + 0x44), lVar16 != 0)) {
                      FUN_14485c47a(lVar16,puVar30);
                      *(undefined8 *)(lVar16 + 8) = local_2e8[3];
                    }
                  }
                }
                break;
              }
              iVar26 = *(int *)(pppppppcVar1 + 2);
            }
          }
          local_2e8 = local_2e8 + 0xc;
        } while (local_2e8 != puVar21);
      }
      lVar16 = local_2c8;
      puVar30 = local_2f8;
      FUN_140a68de8(local_2c8,local_280);
      uStack_d0 = 0;
      if (CONCAT44(uStack_d4,uStack_d8) != 0) {
        FUN_1400020a8();
      }
      iStack_110 = 0;
      if (CONCAT22(uStack_10a,uStack_10c) != 0) {
        FUN_144727cd0(&local_118,0);
      }
      local_e8._0_4_ = 0xffffffff;
      local_e8._4_4_ = 0;
      local_f0 = 0;
      if (0x80 < uStack_ec) {
        uStack_ec = 0x80;
        FUN_1446efbd8(&uStack_108,0);
      }
      if (local_f8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if ((code *******)local_118 != (code *******)0x0) {
        FUN_1400020a8();
      }
      puVar21 = local_2a8;
      iVar26 = (int)uStack_2a0;
    }
LAB_141317135:
    FUN_1413180ee(puVar21,iVar26);
    if (puVar21 != (undefined8 *)0x0) {
      piVar36 = (int *)((longlong)puVar21 + (-8 - (ulonglong)*(uint *)(puVar21 + -1)));
      LOCK();
      *piVar36 = *piVar36 + -1;
      UNLOCK();
      if (*piVar36 == 0) {
        if (*(longlong *)(piVar36 + 0x10) - (longlong)piVar36 == 0x10000) {
          lVar17 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar17 = FUN_145bdc178();
          }
          FUN_140028df4(lVar17,piVar36);
        }
        else {
          FUN_144705e74(piVar36);
        }
      }
    }
    if (local_298 != (longlong *)0x0) {
      piVar36 = (int *)((longlong)local_298 + (-8 - (ulonglong)*(uint *)(local_298 + -1)));
      LOCK();
      *piVar36 = *piVar36 + -1;
      UNLOCK();
      if (*piVar36 == 0) {
        if (*(longlong *)(piVar36 + 0x10) - (longlong)piVar36 == 0x10000) {
          lVar17 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar17 = FUN_145bdc178();
          }
          FUN_140028df4(lVar17,piVar36);
        }
        else {
          FUN_144705e74(piVar36);
        }
      }
    }
    bVar14 = false;
  }
  if (*(longlong *)(puVar30 + 0x9a) == 0) {
    FUN_1446f470e(&local_2b0,L"WidgetTree",1);
    lVar17 = FUN_1458e5c37(puVar30,local_2b0);
    if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar17);
    }
    *(longlong *)(puVar30 + 0x9a) = lVar17;
  }
  else {
    FUN_144757f48(*(longlong *)(puVar30 + 0x9a),0x40);
    uVar37 = puVar30[0x94];
    if ((longlong)(int)uVar37 != 0) {
      lVar17 = *(longlong *)(local_2f8 + 0x92);
      lVar18 = 0;
      do {
        lVar8 = *(longlong *)(lVar17 + 8 + lVar18);
        if (lVar8 != 0) {
          plVar22 = (longlong *)
                    FUN_1408c92bc(*(longlong *)(local_2f8 + 4),*(undefined8 *)(lVar17 + lVar18),3);
          if (plVar22 != (longlong *)0x0) {
            plVar22 = (longlong *)(**(code **)(*plVar22 + 0x220))(plVar22,local_2f8,0);
            if (plVar22 != (longlong *)0x0) {
              lVar24 = FUN_145a6970c();
              if ((*(int *)(lVar24 + 0x38) <= *(int *)(plVar22[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar22[2] + 0x30) + (longlong)*(int *)(lVar24 + 0x38) * 8) ==
                  lVar24 + 0x30)) {
                (**(code **)(*plVar22 + 0x300))(plVar22);
                FUN_14772c428(plVar22,lVar8);
              }
            }
          }
        }
        lVar18 = lVar18 + 0x10;
      } while ((longlong)(int)uVar37 * 0x10 != lVar18);
    }
  }
  puVar30 = local_2f8;
  if (bVar14) {
    bVar38 = 0;
  }
  else {
    bVar38 = (*(byte *)(lVar16 + 0x3c8) & 2) >> 1;
  }
  cVar15 = FUN_141318136(local_2f8 + 0xae);
  if ((cVar15 != '\0') || (bVar38 != 0)) {
    (**(code **)(*(longlong *)puVar30 + 0x338))(puVar30);
  }
  *(byte *)(puVar30 + 0x9c) = (byte)puVar30[0x9c] | 4;
  uVar25 = 1;
LAB_141317262:
  if ((local_60 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar25;
code_r0x000141316a98:
  ppppppcVar31 = (code ******)ppppppcVar31[3];
  goto LAB_141316a7f;
}



// FUNCTION 1413180ee FUN_1413180ee body=58 status=ok
// SIG undefined FUN_1413180ee(void)

void FUN_1413180ee(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_141318128(param_1);
      if (*(longlong *)(param_1 + -0x20) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141318128 FUN_141318128 body=13 status=ok
// SIG undefined FUN_141318128(void)

void FUN_141318128(longlong *param_1)

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



// FUNCTION 141318136 FUN_141318136 body=242 status=ok
// SIG undefined FUN_141318136(void)

bool FUN_141318136(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (lVar2 = *plVar4, lVar2 != 0)) {
      if (((((param_1[3] == 0) || (uVar1 = param_1[2], (int)uVar1 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar1 ||
            ((plVar4 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar4 == (longlong *)0x0 || (*(uint *)(plVar4 + 2) != param_1[3])))))) ||
          ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) || (lVar3 = *plVar4, lVar3 == 0)) {
        plVar4 = (longlong *)FUN_14479d2ce();
        lVar3 = (**(code **)(*plVar4 + 0x180))(plVar4);
        if (lVar3 == 0) {
          return false;
        }
      }
      lVar2 = FUN_140334a94(lVar2,lVar3);
      if (lVar2 != 0) {
        return *(longlong *)(lVar2 + 0x430) != 0;
      }
    }
  }
  return false;
}



// FUNCTION 141318228 FUN_141318228 body=95 status=ok
// SIG undefined FUN_141318228(void)

longlong FUN_141318228(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1;
  do {
    FUN_1400337aa(lVar2);
    if (((*(longlong *)(lVar2 + 0x3b0) != 0) &&
        (lVar1 = lVar2, *(longlong *)(*(longlong *)(lVar2 + 0x3b0) + 0x30) != 0)) ||
       (lVar2 = *(longlong *)(lVar2 + 0x40), lVar1 = param_1, lVar2 == 0)) {
      return lVar1;
    }
    lVar1 = FUN_140e64c66();
    if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
      return param_1;
    }
  } while (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30);
  return param_1;
}



// FUNCTION 141318288 FUN_141318288 body=271 status=ok
// SIG undefined FUN_141318288(void)

void FUN_141318288(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((*(byte *)((longlong)param_1 + 0x20c) & 4) != 0) {
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (lVar3 == 0) {
      (**(code **)(*param_1 + 0x310))(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x498))();
      FUN_1408c9530(param_1[2],param_1[0x54],param_1);
    }
  }
  for (lVar3 = param_1[2]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x40)) {
    lVar4 = FUN_140e64c66();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) break;
    iVar1 = *(int *)(lVar3 + 0x3c0);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x3b8);
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar4 + lVar6);
        (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1);
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  if (0 < (int)param_1[0x4c]) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(param_1[0x4b] + lVar3 * 8) + 0x2a0))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x4c]);
  }
  uVar5 = FUN_14477b072(param_1,DAT_14cab9868);
                    /* WARNING: Could not recover jumptable at 0x000141318394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 141318398 FUN_141318398 body=661 status=ok
// SIG undefined FUN_141318398(void)

void FUN_141318398(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined8 *local_78;
  int local_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1449027d0(param_1,&local_70);
  plVar2 = local_68;
  local_88 = *(longlong **)(CONCAT44(uStack_6c,local_70) + 0x40);
  local_80 = *(longlong **)(CONCAT44(uStack_6c,local_70) + 0x48);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  uVar6 = FUN_14131862e(&local_88,param_3);
  plVar2 = local_88;
  SRWLock = (PSRWLOCK)(local_88 + 5);
  AcquireSRWLockExclusive(SRWLock);
  *(int *)(plVar2 + 4) = (int)plVar2[4] + 1;
  ReleaseSRWLockExclusive(SRWLock);
  if (((int)uVar6 < 0) || ((int)plVar2[1] <= (int)uVar6)) goto LAB_14131851a;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  lVar10 = *plVar2;
  piVar3 = (int *)(lVar10 + 0xf0 + (ulonglong)uVar6 * 0xf8);
  *piVar3 = *piVar3 + 1;
  FUN_1448d5e3c(&local_70,param_1 + 0x44);
  lVar4 = *(longlong *)(CONCAT44(uStack_6c,local_70) + 0x600);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa0));
  *(int *)(lVar4 + 0x98) = *(int *)(lVar4 + 0x98) + 1;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)local_68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  lVar10 = lVar10 + (ulonglong)uVar6 * 0xf8;
  if (param_3 == 0) {
    cVar5 = '\0';
  }
  else {
    lVar8 = FUN_1409e484c(param_2,param_3);
    cVar5 = *(char *)(lVar8 + 0x50);
  }
  if (*(char *)(lVar10 + 0x90) == cVar5) {
    if (*(int *)(lVar10 + 0x94) == 0) {
      iVar7 = 1;
      goto LAB_1413185a6;
    }
  }
  else {
    iVar7 = *(int *)(lVar10 + 0x94) + 1;
LAB_1413185a6:
    *(char *)(lVar10 + 0x90) = cVar5;
    *(int *)(lVar10 + 0x94) = iVar7;
  }
  puVar9 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_3 + 8);
  }
  FUN_1447a97f4(&local_70,puVar9);
  if (local_70 == DAT_14cb790f8) {
    if (*(char *)(lVar10 + 0x90) == '\x01') {
      local_78 = &DAT_14cbd8eb8;
      iVar7 = FUN_140c8411c(lVar4 + 0x68);
      if (0 < iVar7) goto LAB_141318576;
    }
    else {
      iVar7 = FUN_1412fabe8(lVar4 + 0x68,&DAT_14cbd8eb8);
      if (iVar7 != -1) {
LAB_141318576:
        *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
      }
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa0));
LAB_14131851a:
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14131862e FUN_14131862e body=224 status=ok
// SIG undefined FUN_14131862e(void)

int FUN_14131862e(longlong *param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = &DAT_14c9485f0;
  if (*(int **)(param_2 + 8) != (int *)0x0) {
    piVar6 = *(int **)(param_2 + 8);
  }
  plVar1 = (longlong *)*param_1;
  SRWLock = (PSRWLOCK)(plVar1 + 5);
  AcquireSRWLockShared(SRWLock);
  if ((longlong)(int)plVar1[1] != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(*plVar1 + uVar3) == *piVar6) {
        iVar5 = (int)(uVar3 >> 3) * -0x42108421;
        ReleaseSRWLockShared(SRWLock);
        if (iVar5 != -1) {
          return iVar5;
        }
        goto LAB_14131868f;
      }
      uVar3 = uVar3 + 0xf8;
    } while ((longlong)(int)plVar1[1] * 0xf8 - uVar3 != 0);
  }
  ReleaseSRWLockShared(SRWLock);
LAB_14131868f:
  lVar2 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x28));
  *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
  lVar4 = FUN_1458e5eaa(lVar2);
  *(int *)(lVar4 + 0xf0) = *(int *)(lVar4 + 0xf0) + 1;
  FUN_1447715ec(lVar4,piVar6);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x28));
  lVar2 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x28));
  *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
  iVar5 = *(int *)(lVar2 + 8);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x28));
  return iVar5 + -1;
}



// FUNCTION 14131870e FUN_14131870e body=787 status=ok
// SIG undefined FUN_14131870e(void)

void FUN_14131870e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_18 = 0;
  uStack_11 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_18 = (undefined7)uVar2;
      uStack_11 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_18);
    }
  }
  local_19 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1409f1a5c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_19);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_19);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_19 = (undefined1)uVar2;
      uStack_18 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_19);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141318a22(CONCAT17(uStack_11,uStack_18),local_19);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141318a22 FUN_141318a22 body=100 status=ok
// SIG undefined FUN_141318a22(void)

void FUN_141318a22(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1407ca880();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141318a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2,*(code **)(*plVar3 + 0x30));
        return;
      }
    }
  }
  return;
}



// FUNCTION 141318a86 FUN_141318a86 body=31 status=ok
// SIG undefined FUN_141318a86(void)

void FUN_141318a86(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x50))();
  FUN_140c4a7e8(uVar1,param_2,1);
  return;
}



// FUNCTION 141318aa6 FUN_141318aa6 body=655 status=ok
// SIG undefined FUN_141318aa6(void)

void FUN_141318aa6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b603e90;
  if (*(char *)((longlong)param_1 + 0x394) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x394) = 0;
  }
  if (*(char *)(param_1 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x65];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar2 = param_1 + 0x5b;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x5f) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x5e)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x5e)) {
    FUN_1400020a8(*plVar2);
  }
  plVar2 = (longlong *)param_1[0x4d];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar2 = (longlong *)param_1[0x43];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar2 = (longlong *)param_1[0x3a];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x144) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  }
  *param_1 = &PTR_FUN_14ac442c0;
  plVar2 = (longlong *)param_1[0x22];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x1e];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x1c];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 141318d36 FUN_141318d36 body=221 status=ok
// SIG undefined FUN_141318d36(void)

longlong FUN_141318d36(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a0590 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147088ecb;
    local_40 = &LAB_1462a0995;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1c8;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusConfigStore",&DAT_14c9a0590,&DAT_147088eca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0590;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141318e14 FUN_141318e14 body=221 status=ok
// SIG undefined FUN_141318e14(void)

longlong FUN_141318e14(void)

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
  if (DAT_14cabf5c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14785d00f;
    local_40 = FUN_14636fe5c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"BookmarkBase",&DAT_14cabf5c0,&DAT_14785d00e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf5c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141318efa FUN_141318efa body=547 status=ok
// SIG undefined FUN_141318efa(void)

undefined8 * FUN_141318efa(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b33e250;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xf00000d0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf00000d0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
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
  param_1[0x17] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x18) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
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
  param_1[0x19] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1a) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  return param_1;
}



// FUNCTION 14131911e FUN_14131911e body=426 status=ok
// SIG undefined FUN_14131911e(void)

void FUN_14131911e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x760))();
  param_1[0x87] = 0;
  (**(code **)(*param_1 + 0x6b0))(param_1,param_2);
  if (param_1[0x7a] == 0) {
    uVar2 = FUN_14477b072(param_1,DAT_14caf9a78);
                    /* WARNING: Could not recover jumptable at 0x00014131927b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,0,*(code **)(*param_1 + 0x248));
    return;
  }
  if ((*(byte *)(param_1[0x7a] + 0x61) & 1) == 0) {
    (**(code **)(*param_1 + 0xde0))(param_1);
    lVar3 = param_1[0x7a];
    plVar1 = *(longlong **)(lVar3 + 0x3c0);
    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    *(longlong **)(lVar3 + 0x3c0) = param_1;
    if (plVar1 != param_1) {
      lVar3 = 0x6e0;
      if (DAT_14c76146c != '\0') {
        lVar3 = 0x690;
      }
      (**(code **)(*(longlong *)param_1[0x7a] + lVar3))();
    }
    plVar1 = (longlong *)param_1[0x7a];
    (**(code **)(*plVar1 + 0x6f8))(plVar1);
    (**(code **)(*plVar1 + 0x6e8))(plVar1);
    if (*(byte *)(param_1 + 0x2f) < 3) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893040);
      if ((char)param_1[0x8b] == '\x01') {
        (**(code **)(*param_1 + 0xe40))(param_1,param_1[0x7a]);
                    /* WARNING: Could not recover jumptable at 0x00014131924b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xec8))(param_1);
        return;
      }
    }
    return;
  }
  FUN_1413ef136(param_1);
  (**(code **)(*param_1 + 0x6b0))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001413192af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xde0))(param_1,param_1[0x7a]);
  return;
}



// FUNCTION 1413192c8 FUN_1413192c8 body=23 status=ok
// SIG undefined FUN_1413192c8(void)

undefined4 FUN_1413192c8(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[10];
  if (-1 < iVar1) {
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < *(int *)(*param_1 + 0x398));
  }
  return 0;
}



// FUNCTION 1413192e0 FUN_1413192e0 body=123 status=ok
// SIG undefined FUN_1413192e0(void)

undefined8 *
FUN_1413192e0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = param_2;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  *(undefined4 *)(param_1 + 10) = param_4;
  param_1[0xb] = 0;
  FUN_14131935c(param_1);
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 14131935c FUN_14131935c body=185 status=ok
// SIG undefined FUN_14131935c(void)

void FUN_14131935c(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[0xb] = 0;
  uVar4 = *(uint *)(param_1 + 10);
  if (-1 < (int)uVar4) {
    do {
      if (*(int *)(*param_1 + 0x398) <= (int)uVar4) break;
      lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x390) + (ulonglong)uVar4 * 8);
      param_1[0xb] = lVar1;
      uVar5 = uVar4;
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0xa8) != '\0')) {
        pcVar2 = (code *)param_1[2];
        if (pcVar2 == (code *)0x0) break;
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 6;
        }
        local_30 = lVar1;
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar3 = (*pcVar2)(uVar6,&local_30);
        if (cVar3 != '\0') break;
        uVar5 = *(uint *)(param_1 + 10);
      }
      uVar4 = uVar5 + 1;
      *(uint *)(param_1 + 10) = uVar4;
    } while (-2 < (int)uVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141319416 FUN_141319416 body=160 status=ok
// SIG undefined FUN_141319416(void)

undefined * FUN_141319416(void)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c979e20) {
    FUN_144b3d300(&DAT_14c979e20);
    if (DAT_14c979e20 == -1) {
      local_10 = DAT_14c84635c;
      FUN_1412ce202(&DAT_14c979d70);
      atexit(FUN_142877c13);
      _Init_thread_footer(&DAT_14c979e20);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c979d70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413194b8 FUN_1413194b8 body=593 status=ok
// SIG undefined FUN_1413194b8(void)

longlong FUN_1413194b8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141160160(&local_40);
  uVar6 = (uint)local_40;
  iVar8 = (int)((ulonglong)local_40 >> 0x20);
  uVar3 = (uint)((ulonglong)local_40 >> 0x10);
  if (*(int *)(param_1 + 0x220) != *(int *)(param_1 + 0x24c)) {
    lVar5 = param_1 + 0x250;
    if (*(longlong *)(param_1 + 600) != 0) {
      lVar5 = *(longlong *)(param_1 + 600);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x260) - 1U &
                             iVar8 + (uVar6 << 0x10 | uVar6 & 0xffff) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + ((uVar6 & 0xffff) >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar7 * 0x18);
        if (*plVar4 == local_40) {
          if ((plVar4 != (longlong *)0x0) && (lVar5 = plVar4[1], plVar4[1] != 0))
          goto LAB_141319599;
          break;
        }
        iVar7 = (int)plVar4[2];
      } while (iVar7 != -1);
    }
  }
  if (*(int *)(param_1 + 0x310) != *(int *)(param_1 + 0x33c)) {
    lVar5 = param_1 + 0x340;
    if (*(longlong *)(param_1 + 0x348) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x348);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x350) - 1U &
                             iVar8 + (uVar6 << 0x10 | uVar6 & 0xffff) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + ((uVar6 & 0xffff) >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x308) + (longlong)iVar8 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar8 * 0x20) == local_40) {
          if ((lVar5 != 0) && (plVar4 = *(longlong **)(lVar5 + 0x10), plVar4 != (longlong *)0x0)) {
            lVar5 = *(longlong *)(lVar5 + 8);
            LOCK();
            *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
            UNLOCK();
            iVar8 = (int)plVar4[1];
            goto LAB_1413196b2;
          }
          break;
        }
        iVar8 = *(int *)(lVar5 + 0x18);
      } while (iVar8 != -1);
    }
  }
  goto LAB_141319588;
  while( true ) {
    LOCK();
    iVar7 = (int)plVar4[1];
    bVar9 = iVar8 == iVar7;
    if (bVar9) {
      *(int *)(plVar4 + 1) = iVar8 + 1;
      iVar7 = iVar8;
    }
    iVar8 = iVar7;
    UNLOCK();
    if (bVar9) break;
LAB_1413196b2:
    if (iVar8 == 0) {
      lVar5 = 0;
      goto LAB_1413196e5;
    }
  }
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
LAB_1413196e5:
  LOCK();
  piVar2 = (int *)((longlong)plVar4 + 0xc);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (*piVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (lVar5 != 0) goto LAB_141319599;
LAB_141319588:
  lVar5 = param_4;
  if ((*(longlong *)(param_1 + 0x3a8) != 0) &&
     (plVar4 = (longlong *)FUN_140a2b044(param_1 + 0x3a8), plVar4 != (longlong *)0x0)) {
    lVar5 = (**(code **)(*plVar4 + 0x58))(plVar4,param_2,param_3,param_4);
  }
LAB_141319599:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14131970a FUN_14131970a body=208 status=ok
// SIG undefined FUN_14131970a(void)

void FUN_14131970a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 *local_38;
  longlong *local_30;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined1 *)*param_2;
  if (puVar2 != (undefined1 *)0x0) {
    local_21 = '\0';
    local_30 = (longlong *)param_2[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
    }
    local_38 = puVar2;
    FUN_141319a40(param_1 + 0x120,local_40,&local_38,&local_21);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    if (local_21 == '\0') {
      local_38 = &LAB_140c3af8a;
      local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
      FUN_1413197dc(*param_2 + 0x20,local_40,param_1);
      *(undefined1 *)(param_1 + 0xf8) = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413197dc FUN_1413197dc body=611 status=ok
// SIG undefined FUN_1413197dc(void)

undefined8 * FUN_1413197dc(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar10 = param_4[1];
  lVar2 = *param_4;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_149e020b0;
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
  local_50[2] = lVar8;
  *local_50 = (longlong)&PTR_FUN_14b401b10;
  local_50[3] = param_3;
  local_50[4] = lVar2;
  *(int *)(local_50 + 5) = (int)lVar10;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar5 = (**(code **)(*local_50 + 0x30))(), cVar5 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_141319944;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_14131992e;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar6 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar6;
      if (iVar6 <= iVar1) {
        iVar6 = iVar1;
        if (0 < iVar1) {
          iVar9 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar9 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(param_1,iVar9);
              FUN_14005b248(param_1);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar6 = (int)param_1[1];
          } while (iVar9 < iVar6);
        }
        iVar9 = 2;
        if (2 < iVar6 * 2) {
          iVar9 = iVar6 * 2;
        }
        *(int *)(param_1 + 2) = iVar9;
        if ((iVar9 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    uVar7 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar7 = local_40;
    }
    *param_2 = uVar7;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar10 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar10) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar10) = 0;
    *(longlong **)(lVar2 + lVar10) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar10) = local_48;
LAB_14131992e:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141319944:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141319a40 FUN_141319a40 body=1585 status=ok
// SIG undefined FUN_141319a40(void)

int * FUN_141319a40(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  int iVar22;
  longlong *plVar23;
  bool bVar24;
  bool bVar25;
  longlong local_48;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar19) {
      FUN_14482b872(param_1,iVar19);
    }
    iVar15 = (int)param_1[5];
    if (iVar15 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar8 = iVar15 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar21 = param_1 + 2;
    iVar16 = iVar15 + 1;
    iVar22 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar22 = iVar15;
    }
    if (iVar22 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar16;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar16 = 0x80;
          iVar8 = iVar15;
        }
        else {
          uVar9 = iVar15 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar9) {
              uVar10 = uVar9;
            }
          }
          else {
            uVar10 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
          }
          uVar18 = FUN_144a3809e(uVar10 << 2,0);
          iVar8 = (int)(uVar18 >> 2);
          iVar16 = -0x20;
          if ((int)uVar9 <= iVar8) {
            iVar16 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar16;
        FUN_1446efbd8(plVar21,iVar8);
        iVar16 = (int)param_1[5] + 1;
      }
      iVar8 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar8 = iVar16;
      }
      *(int *)(param_1 + 5) = iVar16;
      if (iVar16 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar21;
        }
        bVar14 = -(char)(iVar16 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar8 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar15 & 0x1f;
    puVar4 = (uint *)((longlong)plVar21 + (longlong)(iVar22 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar19 = (int)param_1[6];
    lVar11 = (longlong)iVar19;
    iVar15 = *(int *)(*param_1 + 4 + lVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar15;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x18) = 0xffffffff;
    }
  }
  plVar21 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar21 = (longlong *)param_1[4];
  }
  iVar15 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar15 = iVar19;
  }
  puVar4 = (uint *)((longlong)plVar21 + (longlong)(iVar15 >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar19 & 0x1f);
  lVar17 = *param_1;
  *(undefined8 *)(lVar17 + lVar11 * 0x18) = *param_3;
  *(undefined8 *)(lVar17 + 8 + lVar11 * 0x18) = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(lVar17 + 0x10 + lVar11 * 0x18) = 0xffffffff;
  uVar18 = *(ulonglong *)(lVar17 + lVar11 * 0x18);
  plVar21 = *(longlong **)(lVar17 + 8 + lVar11 * 0x18);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar21 + 0xc) = *(int *)((longlong)plVar21 + 0xc) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)plVar21 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  plVar21 = (longlong *)(lVar17 + lVar11 * 0x18);
  uVar9 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  iVar8 = (int)param_1[1];
  iVar15 = *(int *)((longlong)param_1 + 0x34);
  if (iVar8 - iVar15 != 1) {
    lVar11 = *plVar21;
    plVar20 = (longlong *)plVar21[1];
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + 1;
      UNLOCK();
      iVar8 = (int)param_1[1];
      iVar15 = *(int *)((longlong)param_1 + 0x34);
    }
    if (iVar8 != iVar15) {
      plVar12 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar12 = (longlong *)param_1[8];
      }
      iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
      while (iVar15 != -1) {
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + 1;
          UNLOCK();
        }
        lVar17 = (longlong)iVar15;
        local_48 = *(longlong *)(*param_1 + lVar17 * 0x18);
        plVar12 = *(longlong **)(*param_1 + 8 + lVar17 * 0x18);
        if (plVar12 == (longlong *)0x0) {
LAB_141319eb2:
          plVar23 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
          UNLOCK();
          iVar8 = (int)plVar12[1];
          do {
            if (iVar8 == 0) goto LAB_141319eb2;
            LOCK();
            iVar16 = (int)plVar12[1];
            bVar24 = iVar8 == iVar16;
            if (bVar24) {
              *(int *)(plVar12 + 1) = iVar8 + 1;
              iVar16 = iVar8;
            }
            iVar8 = iVar16;
            UNLOCK();
            plVar23 = plVar12;
          } while (!bVar24);
        }
        bVar24 = true;
        if (plVar20 != (longlong *)0x0) {
          iVar8 = (int)plVar20[1];
          do {
            if (iVar8 == 0) goto LAB_141319c44;
            LOCK();
            iVar16 = (int)plVar20[1];
            bVar25 = iVar8 == iVar16;
            if (bVar25) {
              *(int *)(plVar20 + 1) = iVar8 + 1;
              iVar16 = iVar8;
            }
            iVar8 = iVar16;
            UNLOCK();
          } while (!bVar25);
          LOCK();
          plVar2 = plVar20 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
            bVar24 = false;
          }
          else {
            bVar24 = false;
          }
        }
LAB_141319c44:
        if (plVar23 == (longlong *)0x0) {
          local_48 = 0;
        }
        else {
          LOCK();
          plVar2 = plVar23 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        lVar13 = lVar11;
        if (bVar24) {
          lVar13 = 0;
        }
        if (local_48 == lVar13) goto LAB_141319ca0;
        iVar15 = *(int *)(*param_1 + 0x10 + lVar17 * 0x18);
      }
    }
    iVar15 = -1;
LAB_141319ca0:
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
    if (iVar15 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x18);
      plVar20 = *(longlong **)(puVar3 + 2);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar20 + 0x10))();
        }
      }
      uVar5 = *(undefined4 *)((longlong)plVar21 + 4);
      lVar11 = plVar21[1];
      uVar6 = *(undefined4 *)((longlong)plVar21 + 0xc);
      *puVar3 = (int)*plVar21;
      puVar3[1] = uVar5;
      puVar3[2] = (int)lVar11;
      puVar3[3] = uVar6;
      FUN_141178c1e(param_1,iVar19);
      cVar7 = '\x01';
      goto LAB_141319cbe;
    }
  }
  cVar7 = '\0';
  iVar15 = iVar19;
LAB_141319cbe:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar7;
  }
  if (cVar7 == '\0') {
    uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar10 < 4) {
      iVar19 = 1;
    }
    else {
      uVar18 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar19 <= (int)param_1[9])) {
      uVar9 = (int)param_1[9] - 1U & uVar9;
      *(uint *)((longlong)plVar21 + 0x14) = uVar9;
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = param_1 + 7;
      }
      *(undefined4 *)(plVar21 + 2) =
           *(undefined4 *)
            ((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = param_1 + 7;
      }
      *(int *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
           iVar15;
    }
    else {
      *(int *)(param_1 + 9) = iVar19;
      FUN_14131a072(param_1);
    }
  }
  *param_2 = iVar15;
  return param_2;
}



// FUNCTION 14131a072 FUN_14131a072 body=666 status=ok
// SIG undefined FUN_14131a072(void)

void FUN_14131a072(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4)
             = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_78 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar11 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    plVar10 = local_78;
    uVar14 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar16 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar13 = *param_1;
        lVar6 = (longlong)iVar12;
        uVar4 = *(ulonglong *)(lVar13 + lVar6 * 0x18);
        plVar7 = *(longlong **)(lVar13 + 8 + lVar6 * 0x18);
        local_7c = iVar16;
        local_70 = uVar11;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))();
            plVar10 = local_78;
          }
        }
        lVar13 = lVar13 + lVar6 * 0x18;
        uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar11 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar16 = (int)uVar11;
        *(int *)(lVar13 + 0x14) = iVar16;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar10;
        }
        *(undefined4 *)(lVar13 + 0x10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar10;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar7 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        iVar3 = (int)plVar1[3];
        iVar12 = (int)local_70;
        lVar13 = (longlong)iVar12;
        uVar5 = *(uint *)((longlong)plVar7 + lVar13 * 4) & uVar14;
        uVar11 = local_70;
        iVar16 = local_7c;
        if (uVar5 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar12) {
            iVar9 = iVar12;
          }
          if (iVar8 <= iVar12) break;
          lVar6 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar6 * 4 + lVar13 * 4 + 4);
            if (uVar5 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar9 - lVar13 == lVar6) goto LAB_14131a2cf;
          }
          uVar14 = 0xffffffff;
          uVar11 = (ulonglong)(iVar12 + (int)lVar6 + 1);
        }
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar4 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar12 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar3);
    }
  }
LAB_14131a2cf:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131a30e FUN_14131a30e body=228 status=ok
// SIG undefined FUN_14131a30e(void)

longlong FUN_14131a30e(void)

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
  if (DAT_14cb5dc90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14869c0dd;
    local_40 = FUN_1464de185;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxEquippedInventorySlotOwner",&DAT_14cb5dc90,&DAT_14869c0dc)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5dc90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131a3f4 FUN_14131a3f4 body=328 status=ok
// SIG undefined FUN_14131a3f4(void)

void FUN_14131a3f4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14066e964();
  cVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar3 == '\0') goto LAB_14131a421;
  uVar4 = FUN_14131a550();
  FUN_140f48956(param_1,&local_38,uVar4,FUN_145c8d1cc);
  if (local_30 == (longlong *)0x0) {
    param_1[0x1b] = local_38;
    plVar5 = (longlong *)param_1[0x1c];
    if (plVar5 == (longlong *)0x0) goto LAB_14131a421;
    param_1[0x1c] = 0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    param_1[0x1b] = local_38;
    plVar5 = (longlong *)param_1[0x1c];
    if (local_30 == plVar5) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) goto LAB_14131a421;
        goto LAB_14131a4ec;
      }
      goto LAB_14131a421;
    }
    param_1[0x1c] = (longlong)local_30;
    if (plVar5 == (longlong *)0x0) goto LAB_14131a421;
  }
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
LAB_14131a4ec:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
LAB_14131a421:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14131a550 FUN_14131a550 body=57 status=ok
// SIG undefined FUN_14131a550(void)

void FUN_14131a550(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aa98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aa98 = FUN_140002ddd(FUN_1464cb8e8,uVar1,L"GbxBrainService_EngagePlayers");
  }
  return;
}



// FUNCTION 14131a58a FUN_14131a58a body=870 status=ok
// SIG undefined FUN_14131a58a(void)

void FUN_14131a58a(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar4 = *(int *)(param_3 + 4);
  lVar8 = param_3 + 8;
  if (1 < iVar4) {
    lVar8 = *(longlong *)(param_3 + 0x18);
  }
  if (0 < *(int *)(param_3 + 0x24)) {
    lVar8 = *(longlong *)(param_3 + 0x18);
  }
  if (iVar4 != 0) {
    local_80 = *param_2;
    local_78 = (longlong *)param_2[1];
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    if (1 < iVar4) {
      lVar9 = 0;
      do {
        local_90 = *(undefined8 *)(lVar8 + lVar9);
        local_88 = *(undefined4 *)(lVar8 + 8 + lVar9);
        FUN_1448075d0(local_70,&local_90);
        local_f8 = 0;
        cVar6 = FUN_14131a924(&local_80,&local_80,local_70,1);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (cVar6 == '\0') {
          puVar3 = (undefined8 *)(lVar8 + lVar9);
          local_a8 = 0;
          plStack_a0 = (longlong *)0x0;
          FUN_14009b010(&local_a8,3,0);
          local_b8 = *puVar3;
          local_b0 = *(undefined4 *)(puVar3 + 1);
          local_f0 = puVar3;
          FUN_1448075d0(local_70);
          if (local_80 != 0) {
            local_f8 = 0;
            FUN_14014191c(local_80,local_70,&local_a8,0);
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          plVar5 = plStack_a0;
          if (plStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_a0)(plStack_a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          local_c8 = *local_f0;
          local_c0 = *(undefined4 *)(local_f0 + 1);
          FUN_1448075d0(local_70);
          uVar7 = FUN_14039d0c8(&local_80,local_70);
          FUN_1446dcc2e(&local_80,uVar7);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        lVar9 = lVar9 + 0xc;
      } while ((ulonglong)(iVar4 - 1U) * 0xc != lVar9);
    }
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    FUN_14009b010(&local_a8,3,0);
    puVar3 = (undefined8 *)(lVar8 + (longlong)(int)(iVar4 - 1U) * 0xc);
    local_d8 = *puVar3;
    local_d0 = *(undefined4 *)(puVar3 + 1);
    FUN_1448075d0(local_70);
    FUN_14131a8f2(&local_a8,local_70);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_e8 = *puVar3;
    local_e0 = *(undefined4 *)(puVar3 + 1);
    FUN_1448075d0(local_70);
    if (local_80 != 0) {
      local_f8 = 0;
      FUN_14014191c(local_80,local_70,&local_a8,0);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    plVar5 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131a8f2 FUN_14131a8f2 body=49 status=ok
// SIG undefined FUN_14131a8f2(void)

undefined8 FUN_14131a8f2(undefined8 *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 == (byte *)0x0) || ((pbVar1[1] & 2) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_14009aea0(&DAT_14c9a1320);
    *(undefined4 *)(pbVar1 + 0x24) = uVar2;
    *pbVar1 = *pbVar1 | 0x80;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14131a924 FUN_14131a924 body=329 status=ok
// SIG undefined FUN_14131a924(void)

undefined8
FUN_14131a924(undefined8 *param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,
             undefined1 param_5)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  
  pbVar3 = (byte *)*param_1;
  if ((pbVar3 == (byte *)0x0) || ((pbVar3[1] & 2) == 0)) {
    if ((*pbVar3 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar5 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar6[9];
      }
      iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar6[10] - 1U & *param_3) * 4);
      if (iVar8 != -1) {
        do {
          lVar2 = *plVar6 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar8 * 0x40) == *param_3) {
            if (lVar2 == 0) {
              return 0;
            }
            puVar7 = (undefined8 *)(lVar2 + 0x28);
            if (puVar7 == (undefined8 *)0x0) {
              return 0;
            }
            pbVar3 = (byte *)*puVar7;
            if (pbVar3 == (byte *)0x0) {
              return 0;
            }
            if ((*pbVar3 & 3) == 0) {
              return 0;
            }
            if ((pbVar3[1] & 2) == 0 && (char)param_4 == '\0') {
              FUN_1446dcc2e(param_2);
              return 1;
            }
            FUN_14131aa6e(puVar7,param_4,0,
                          CONCAT71((int7)((ulonglong)plVar5 >> 8),param_5) & 0xffffffff);
            if (param_2 == &DAT_14c9a1308) {
              return 1;
            }
            uVar4 = *(undefined8 *)(lVar2 + 0x28);
            lVar2 = *(longlong *)(lVar2 + 0x30);
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
            }
            plVar6 = (longlong *)param_2[1];
            *param_2 = uVar4;
            param_2[1] = lVar2;
            if (plVar6 == (longlong *)0x0) {
              return 1;
            }
            LOCK();
            plVar5 = plVar6 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 != 0) {
              return 1;
            }
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              return 1;
            }
            return 1;
          }
          iVar8 = *(int *)(lVar2 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  return 0;
}



// FUNCTION 14131aa6e FUN_14131aa6e body=185 status=ok
// SIG undefined FUN_14131aa6e(void)

void FUN_14131aa6e(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_4;
  FUN_1401412e0(param_1,&local_28,param_2,param_3);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[1];
  *param_1 = local_28;
  param_1[1] = local_20;
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131ab28 FUN_14131ab28 body=969 status=ok
// SIG undefined FUN_14131ab28(void)

void FUN_14131ab28(longlong param_1,longlong *param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  char local_d9;
  ulonglong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  int local_b4;
  longlong *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  longlong *local_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b0 = *(longlong **)(*param_2 + 0x1f0);
  lVar8 = (longlong)param_3;
  local_90 = lVar8 * 0x50;
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x148);
  plVar3 = (longlong *)(lVar16 + local_90);
  uVar14 = 0;
  local_98 = lVar8 * 0x70 + *(longlong *)(param_1 + 0x78);
  local_a0 = 0x60;
  if (1 < (byte)((char)local_b0[lVar8 * 10 + 1] - 1U)) {
    local_a0 = uVar14;
  }
  local_d8 = lVar16 + 0x10 + local_90;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_d9 = param_4;
  local_c8 = param_2;
  local_c0 = param_1;
  local_b4 = param_3;
  uStack_60 = local_d8;
  if (*(int *)(local_d8 + 0x18) == 0) {
    uVar17 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar17 = local_68 >> 0x20;
    uVar14 = (ulonglong)*(uint *)(plVar3 + 5);
  }
  uVar7 = uStack_60;
  if (local_58._4_4_ != (int)uVar14 || uStack_60 != local_d8) {
    iVar10 = (int)local_68;
    uVar15 = (uint)local_58;
    iVar9 = local_58._4_4_;
    iVar13 = local_50;
    local_d0 = plVar3;
    local_a8 = uVar14;
    do {
      puVar4 = (ulonglong *)(*local_d0 + (longlong)iVar9 * 0x18);
      local_68 = *puVar4;
      uVar14 = puVar4[1];
      puVar12 = &DAT_14c9a1308;
      uStack_60 = uVar14;
      if (*(longlong *)(local_98 + local_a0) != 0) {
        puVar12 = (undefined8 *)FUN_1446e60f4(*(longlong *)(local_98 + local_a0),&local_68);
      }
      FUN_14131aef2(local_88,puVar12);
      local_e8 = local_c8;
      FUN_14131af3e(uVar14,local_78,local_88,local_c0);
      if (*(longlong *)(local_98 + local_a0) != 0) {
        local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
        FUN_140516f2a(*(longlong *)(local_98 + local_a0),&local_68,local_78,0);
      }
      plVar3 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      uVar14 = *(ulonglong *)(uVar7 + 0x10);
      if (*(ulonglong *)(uVar7 + 0x10) == 0) {
        uVar14 = uVar7;
      }
      iVar5 = *(int *)(uVar7 + 0x18);
      lVar16 = (longlong)iVar10;
      uVar11 = *(uint *)(uVar14 + lVar16 * 4) & uVar15;
      if (uVar11 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar6 = iVar9;
        if (iVar9 < iVar10) {
          iVar6 = iVar10;
        }
        if (iVar10 < iVar9) {
          lVar8 = 0;
          do {
            uVar11 = *(uint *)(uVar14 + lVar16 * 4 + 4 + lVar8 * 4);
            if (uVar11 != 0) {
              iVar10 = iVar10 + (int)lVar8 + 1;
              uVar15 = 0xffffffff;
              goto LAB_14131ad82;
            }
            iVar13 = iVar13 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar6 - lVar16 != lVar8);
          uVar15 = 0xffffffff;
          iVar10 = iVar6;
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar5;
      }
      else {
LAB_14131ad82:
        uVar17 = (ulonglong)(-uVar11 & uVar11);
        uVar14 = uVar17 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar9 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar9) {
          iVar9 = iVar5;
        }
      }
    } while ((iVar9 != (int)local_a8) || (uVar7 != local_d8));
  }
  lVar16 = local_c0;
  if (local_d9 != '\0') {
    iVar10 = *(int *)(local_c0 + 0x80);
    if (local_b4 + 1 < iVar10) {
      local_b0 = (longlong *)((longlong)local_b0 + local_90);
      uVar14 = (ulonglong)(local_b4 + 1);
      lVar8 = uVar14 * 0x50 + 0xc;
      do {
        if (*(longlong *)(*(longlong *)(*local_c8 + 0x1f0) + lVar8) == *local_b0) {
          FUN_14131ab28(lVar16,local_c8,uVar14 & 0xffffffff,1);
          iVar10 = *(int *)(lVar16 + 0x80);
        }
        uVar14 = uVar14 + 1;
        lVar8 = lVar8 + 0x50;
      } while ((longlong)uVar14 < (longlong)iVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14131aef2 FUN_14131aef2 body=75 status=ok
// SIG undefined FUN_14131aef2(void)

longlong * FUN_14131aef2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 1) & 2) == 0)) {
    *param_1 = lVar1;
    lVar1 = param_2[1];
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    FUN_1401412e0(param_2,param_1,0,0,0);
  }
  return param_1;
}



// FUNCTION 14131af3e FUN_14131af3e body=633 status=ok
// SIG undefined FUN_14131af3e(void)

longlong *
FUN_14131af3e(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  byte *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong lStack_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14131b1b8(param_1,param_3,param_4,param_5);
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar2 = param_1 + 0x28;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar8 = 0;
  lStack_60 = lVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x40);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = lStack_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (lStack_60 != lVar2)) {
    do {
      puVar6 = (undefined8 *)(*local_90 + (longlong)iStack_74 * 0x18);
      local_68 = *puVar6;
      lStack_60 = puVar6[1];
      if (*param_3 == 0) {
        puVar6 = &DAT_14c9a1308;
      }
      else {
        puVar6 = (undefined8 *)FUN_1446e60f4(*param_3,&local_68);
      }
      local_a0 = (byte *)*puVar6;
      local_98 = (longlong *)puVar6[1];
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      FUN_14131b1b8(lStack_60,&local_a0,param_4,param_5);
      if ((local_a0 != (byte *)0x0) && ((*local_a0 & 0x6b) == 3)) {
        pbVar7 = (byte *)*param_3;
        if ((pbVar7 == (byte *)0x0) || ((*pbVar7 & 0x6b) != 3)) {
          FUN_14009b010(param_3,3,0);
          pbVar7 = (byte *)*param_3;
          if (pbVar7 == (byte *)0x0) goto LAB_14131b126;
        }
        local_a8 = 0;
        FUN_140516f2a(pbVar7,&local_68,&local_a0,0);
      }
LAB_14131b126:
      plVar3 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_98 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar4 = (int *)((longlong)plVar3 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar8) || (local_80 != lVar2)) || (local_90 != plVar1));
  }
  *param_2 = *param_3;
  lVar2 = param_3[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    plVar1 = (longlong *)param_3[1];
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar4 = (int *)((longlong)plVar1 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14131b1b8 FUN_14131b1b8 body=365 status=ok
// SIG undefined FUN_14131b1b8(void)

void FUN_14131b1b8(short *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  short sVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  byte *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 0x6b) != 3)) {
    sVar5 = *param_1;
    if (0 < sVar5) {
      lVar6 = 0;
      do {
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 4) + lVar6 * 2);
        if ((-1 < (short)uVar3) && ((int)(short)uVar3 < *(int *)(*param_4 + 200))) {
          plVar4 = *(longlong **)(*(longlong *)(*param_4 + 0xc0) + (ulonglong)uVar3 * 8);
          if ((DAT_14c950c29 == '\x01') && (plVar4 != (longlong *)0x0)) {
            FUN_1456cec3c(plVar4);
          }
          else if (plVar4 == (longlong *)0x0) goto LAB_14131b282;
          (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_50,param_4,param_3 + 0x2c);
          plVar4 = local_48;
          if ((local_50 != (byte *)0x0) && ((*local_50 & 0x6b) == 3)) {
            FUN_1446dcc2e(param_2,&local_50);
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_48 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)local_48 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_48 + 0x10))(local_48);
                }
              }
            }
            break;
          }
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_48 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          sVar5 = *param_1;
        }
LAB_14131b282:
        lVar6 = lVar6 + 1;
      } while (lVar6 < sVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131b326 FUN_14131b326 body=393 status=ok
// SIG undefined FUN_14131b326(void)

undefined8 * FUN_14131b326(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  byte *local_38;
  longlong *local_30;
  byte *local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (byte *)0x0;
  plStack_20 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x78) == 0) || (*(longlong *)(param_1 + 0x80) == 0)) {
LAB_14131b3c3:
    pbVar4 = (byte *)0x0;
LAB_14131b3c5:
    *param_2 = pbVar4;
    param_2[1] = plStack_20;
    if (plStack_20 == (longlong *)0x0) goto LAB_14131b3da;
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  else {
    FUN_14131b4b0(&local_38,param_1 + 0x78,param_1 + 0x80,param_1 + 0x88);
    plVar3 = plStack_20;
    local_28 = local_38;
    plStack_20 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
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
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
    if (local_28 == (byte *)0x0) goto LAB_14131b3c3;
    pbVar4 = local_28;
    if ((*local_28 & 0x68) != 0 || (*local_28 & 3) == 0) goto LAB_14131b3c5;
    local_48 = 0;
    FUN_1401412e0(&local_28,param_2,1,0);
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14131b3da:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14131b4b0 FUN_14131b4b0 body=429 status=ok
// SIG undefined FUN_14131b4b0(void)

longlong * FUN_14131b4b0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = DAT_14cb8dda0;
  if (DAT_14cb8dda0 != 0) {
    FUN_1446dcdd4(local_58);
    lVar4 = FUN_144837648(lVar4,local_58,1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (lVar4 != 0) {
      FUN_144837e54(lVar4,0);
      plVar5 = &DAT_14c9a1308;
      if (*(longlong *)(lVar4 + 0x48) != 0) {
        plVar5 = (longlong *)FUN_1446e60f4(*(longlong *)(lVar4 + 0x48),&DAT_14cb8dd80);
      }
      if (param_1 != &DAT_14c9a1308) {
        lVar4 = *plVar5;
        lVar3 = plVar5[1];
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        plVar5 = (longlong *)param_1[1];
        *param_1 = lVar4;
        param_1[1] = lVar3;
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
      }
      if (*param_3 != 0) {
        plVar5 = &DAT_14c9a1308;
        if (*param_1 != 0) {
          plVar5 = (longlong *)FUN_1446e60f4(*param_1,param_3);
        }
        if (param_1 != &DAT_14c9a1308) {
          lVar4 = *plVar5;
          lVar3 = plVar5[1];
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = (longlong *)param_1[1];
          *param_1 = lVar4;
          param_1[1] = lVar3;
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
        }
        if (*param_4 != 0) {
          if (*param_1 == 0) {
            puVar6 = &DAT_14c9a1308;
          }
          else {
            puVar6 = (undefined8 *)FUN_1446e60f4(*param_1,param_4);
          }
          FUN_1446dcc2e(param_1,puVar6);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131b65e FUN_14131b65e body=875 status=ok
// SIG undefined FUN_14131b65e(void)

ulonglong FUN_14131b65e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  int local_d8;
  longlong local_d0;
  int local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar7 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar7 = (longlong *)0x0;
  }
  if ((byte)(*(char *)(plVar7[0x3e] + 8 + (longlong)param_2 * 0x50) - 1U) < 2) {
    lVar8 = *(longlong *)(param_1 + 0x78);
    local_68 = DAT_14cb8dcf8;
    uStack_60 = CONCAT44(uStack_60._4_4_,DAT_14cb8dd00);
    FUN_1448075d0(&local_d0);
    iVar6 = *(int *)(lVar8 + 0x10 + (longlong)param_2 * 0x70);
    iVar9 = (int)local_d0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (iVar6 == iVar9) {
      uVar5 = 0;
      goto LAB_14131b798;
    }
  }
  uVar5 = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  uStack_78 = 0;
  cVar3 = FUN_1418b3762(plVar7,param_1,param_2);
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*plVar7 + 0x310))(plVar7,param_1,&local_68,&local_98);
    if (cVar3 == '\0') {
LAB_14131b77c:
      uVar5 = 0;
    }
    else {
      if (*(char *)(param_1 + 0x91) == '\0') {
        if ((*(int *)(param_1 + 0x2c) - 1U < 3) || (*(int *)(param_1 + 0x48) < 2))
        goto LAB_14131b77c;
        *(undefined1 *)(param_1 + 0x91) = 1;
      }
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      local_d0 = param_1;
      local_c8 = param_2;
      FUN_1447a97f4(local_c0,&local_68);
      local_e0 = (undefined8 *)0x0;
      local_d8 = 0;
      FUN_1446efa72(&local_e0,0,6,0x10);
      puVar2 = local_e0;
      local_d8 = 6;
      *local_e0 = &PTR_LAB_14b434d90;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_e0[2] = lVar4;
      *local_e0 = &PTR_FUN_14b434610;
      local_e0[3] = 0;
      iVar6 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_e0 + 3) = uVar1;
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
          iVar9 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar6 = *(int *)(lVar8 + 0x10);
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(lVar8 + 0x10) = iVar9;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar6 = iVar9;
          }
        }
      }
      *(int *)((longlong)puVar2 + 0x1c) = iVar6;
      puVar2[4] = local_d0;
      *(int *)(puVar2 + 5) = local_c8;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      FUN_1404e49fa(puVar2 + 6,local_c0);
      FUN_145840754(plVar7,param_1,&local_98,&local_e0);
      if (local_d8 == 0) {
LAB_14131b93c:
        if (local_e0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_e0 != (undefined8 *)0x0) {
        (**(code **)*local_e0)(local_e0,0);
        FUN_1446efa72(&local_e0,0,0,0x10);
        local_d8 = 0;
        goto LAB_14131b93c;
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      uVar5 = CONCAT71((int7)((ulonglong)&local_e0 >> 8),1);
    }
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
LAB_14131b798:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14131b9ca FUN_14131b9ca body=101 status=ok
// SIG undefined FUN_14131b9ca(void)

undefined8 * FUN_14131b9ca(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b2d14c0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14131ba30 FUN_14131ba30 body=175 status=ok
// SIG undefined FUN_14131ba30(void)

void FUN_14131ba30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  FUN_14131bae0(param_1 + 0x2a0);
  if (param_2 != (longlong *)0x0) {
    lVar6 = (**(code **)(*param_2 + 8))(param_2);
    lVar7 = FUN_140a1ada8();
    if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
         lVar7 + 0x30)) &&
       ((*(char *)((longlong)param_2 + 0x9e) == '\x01' &&
        (plVar3 = *(longlong **)(param_1 + 0x2c8), plVar3 != (longlong *)0x0)))) {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) {
          return;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar8 = iVar5 == iVar4;
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar8);
      if (*(longlong *)(param_1 + 0x2c0) != 0) {
        FUN_1458e9b9c();
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
                    /* WARNING: Could not recover jumptable at 0x00014131badb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14131bae0 FUN_14131bae0 body=162 status=ok
// SIG undefined FUN_14131bae0(void)

void FUN_14131bae0(longlong *param_1,undefined8 param_2)

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
        goto LAB_14131bb68;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14131bb68:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14131bb82 FUN_14131bb82 body=315 status=ok
// SIG undefined FUN_14131bb82(void)

void FUN_14131bb82(undefined8 *param_1,undefined8 param_2,float param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)*param_1;
  uVar3 = FUN_14011c2be(param_2);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_3c = 0xff;
  local_40 = 0;
  local_48 = 0;
  FUN_14493679e(uVar1,&local_58,uVar3,0);
  if ((((plStack_50 != (longlong *)0x0) && (local_58._4_4_ != 0)) && (-1 < (int)(uint)local_58)) &&
     ((int)(uint)local_58 < DAT_14c9647dc)) {
    lVar5 = (ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8);
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == local_58._4_4_)) &&
       ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plStack_50 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar4 = plStack_50 + 0xd9;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plStack_50 + 0x10))();
      }
      cVar2 = FUN_14486eb0e(plVar4,&local_58);
      if (cVar2 != '\0') {
        lVar5 = FUN_14008e0ae(&local_58);
        if (1.0 <= param_3) {
          param_3 = 1.0;
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        FUN_1409d461e(lVar5,(*(float *)(lVar5 + 0x30) - *(float *)(lVar5 + 0x24)) * param_3,0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131bcbe FUN_14131bcbe body=422 status=ok
// SIG undefined FUN_14131bcbe(void)

void FUN_14131bcbe(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar2 = FUN_140490c9a();
    lVar5 = FUN_14477b664(uVar2);
    param_2[1] = lVar5;
  }
  lVar4 = *param_2;
  if (param_2[2] == 0) {
    if (lVar5 == 0 || lVar4 == 0) goto LAB_14131bd9f;
    plVar3 = *(longlong **)(lVar5 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar5 = FUN_144aff482(uVar2,param_2);
        param_2[2] = lVar5;
        if (lVar5 == 0) goto LAB_14131bd9f;
        lVar4 = *param_2;
        lVar5 = param_2[1];
        goto LAB_14131bcfe;
      }
    }
    param_2[2] = 0;
  }
  else {
LAB_14131bcfe:
    local_50 = lVar4;
    uVar2 = FUN_14477b664(lVar5);
    local_48 = FUN_14477b664(uVar2);
    local_40 = param_2[2];
    lVar5 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      lVar5 = param_1 + 0x18;
    }
    if ((longlong)*(int *)(param_1 + 0x2e0) != 0) {
      lVar4 = (longlong)*(int *)(param_1 + 0x2e0) * 0x58;
      do {
        cVar1 = FUN_14131be66(&local_50,lVar5);
        if (cVar1 != '\0') {
          if (lVar5 != 0) {
            plVar3 = (longlong *)(lVar5 + 0x18);
            goto LAB_14131bd70;
          }
          break;
        }
        lVar5 = lVar5 + 0x58;
        lVar4 = lVar4 + -0x58;
      } while (lVar4 != 0);
    }
    plVar3 = (longlong *)FUN_14042880c(param_1 + 0x18,param_2);
LAB_14131bd70:
    lVar5 = *param_3;
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(plVar3 + 7)])(plVar3);
    *plVar3 = lVar5;
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    *(undefined1 *)(plVar3 + 7) = 1;
  }
LAB_14131bd9f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131be66 FUN_14131be66 body=542 status=ok
// SIG undefined FUN_14131be66(void)

undefined8 FUN_14131be66(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  
  if (param_2[1] == 0) {
    uVar11 = FUN_140490c9a();
    lVar8 = FUN_14477b664(uVar11);
    param_2[1] = lVar8;
  }
  lVar8 = param_1[1];
  if (lVar8 == 0) {
    lVar8 = FUN_140490c9a();
  }
  lVar1 = *param_1;
  lVar8 = FUN_14477b664(lVar8);
  iVar7 = 0;
  iVar6 = 0;
  if ((lVar8 != 0) && (plVar2 = *(longlong **)(lVar8 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar9 = *plVar2;
    pcVar3 = *(code **)(lVar9 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      iVar6 = 0;
      if (cVar5 == '\0') goto LAB_14131bf08;
      lVar9 = *plVar2;
    }
    pcVar3 = *(code **)(lVar9 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar6 = FUN_144aff48c(ppuVar12);
  }
LAB_14131bf08:
  lVar9 = *param_2;
  lVar4 = param_2[1];
  if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar10 = *plVar2;
    pcVar3 = *(code **)(lVar10 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      if (cVar5 == '\0') goto LAB_14131bf6f;
      lVar10 = *plVar2;
    }
    pcVar3 = *(code **)(lVar10 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar7 = FUN_144aff48c(ppuVar12);
  }
LAB_14131bf6f:
  uVar11 = 0;
  if ((((iVar7 == iVar6) && (lVar9 == lVar1)) && (uVar11 = 1, lVar4 != lVar8)) &&
     ((uVar11 = 0, lVar8 != 0 && (lVar4 != 0)))) {
    iVar6 = *(int *)(lVar8 + 0x38);
    iVar7 = *(int *)(lVar4 + 0x38);
    if ((iVar7 < iVar6) ||
       (uVar11 = 1, *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) != lVar8 + 0x30
       )) {
      if (iVar6 < iVar7) {
        uVar11 = 0;
      }
      else {
        uVar11 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar8 + 0x30) >> 8),
                          *(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar7 * 8) ==
                          lVar4 + 0x30);
      }
    }
  }
  return uVar11;
}



// FUNCTION 14131c084 FUN_14131c084 body=829 status=ok
// SIG undefined FUN_14131c084(void)

void FUN_14131c084(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  local_30 = 0;
  local_28 = 0x10019100;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14170fd90;
      local_60 = 0x8000000000000000;
      local_68 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_40 = local_28;
  local_38 = 0;
  FUN_14131c3c2(local_18);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131c3c2 FUN_14131c3c2 body=344 status=ok
// SIG undefined FUN_14131c3c2(void)

void FUN_14131c3c2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412cbf9c(&local_48,param_1);
  if (local_48 == 0) goto LAB_14131c4ca;
  uVar3 = FUN_1412cbf12(param_2);
  local_58 = 0;
  uStack_50 = 0;
  uVar4 = FUN_1406eea5e();
  lVar5 = FUN_14477b664(uVar4);
  lVar6 = FUN_1406eea5e();
  uVar4 = FUN_1406eea5e();
  FUN_1402d1bfa(&local_38,uVar4,uVar3);
  if (local_38 != 0) {
    uStack_50 = 0;
  }
  local_60 = local_38;
  lVar7 = FUN_1406eea5e();
  if (lVar6 == 0) {
LAB_14131c482:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_14131c482;
  if (lVar5 != lVar7) {
    uStack_50 = 0;
  }
  uVar4 = FUN_14477b664(lVar7);
  local_58 = FUN_14477b664(uVar4);
  if (local_58 != 0 && local_38 != 0) {
    uStack_50 = uVar3;
  }
  FUN_1414c5044(local_48,&local_60);
LAB_14131c4ca:
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131c51c FUN_14131c51c body=1166 status=ok
// SIG undefined FUN_14131c51c(void)

void FUN_14131c51c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined4 *_Src_00;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_29);
            goto LAB_14131c603;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_29,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_29,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_29,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
LAB_14131c603:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_14131c6cf;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_14131c6cf:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7b8))(param_1,local_29,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131c9ee FUN_14131c9ee body=267 status=ok
// SIG undefined FUN_14131c9ee(void)

undefined8 * FUN_14131c9ee(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar2 = *param_3;
  if ((lVar2 != 0) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) == lVar2) {
          if ((lVar1 != 0) && (lVar1 != -8)) {
            *param_2 = 0;
            iVar6 = *(int *)(lVar1 + 0x10);
            _Src = *(void **)(lVar1 + 8);
            *(int *)(param_2 + 1) = iVar6;
            if ((longlong)iVar6 != 0) {
              FUN_1446dd670(param_2,iVar6,0);
              memcpy((void *)*param_2,_Src,(longlong)iVar6 * 2);
              return param_2;
            }
            *(undefined4 *)((longlong)param_2 + 0xc) = 0;
            return param_2;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0xffffffff00000000;
  return param_2;
}



// FUNCTION 14131cafa FUN_14131cafa body=242 status=ok
// SIG undefined FUN_14131cafa(void)

longlong * FUN_14131cafa(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14131ccfc(param_1 + 0xe8,&local_58);
  lVar3 = local_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = (longlong)(int)uStack_50;
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if (*(int *)(lVar4 + 0x30) != -1) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14131cbee(param_2,iVar1);
          lVar4 = *(longlong *)(lVar3 + lVar7);
        }
        lVar2 = *param_2;
        *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = lVar4;
        lVar4 = *(longlong *)(lVar3 + 8 + lVar7);
        *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar6 * 0x10 != lVar7);
    uVar5 = uStack_50 & 0xffffffff;
  }
  FUN_14131cf14(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131cbee FUN_14131cbee body=269 status=ok
// SIG undefined FUN_14131cbee(void)

void FUN_14131cbee(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14131ccfc FUN_14131ccfc body=536 status=ok
// SIG undefined FUN_14131ccfc(void)

void FUN_14131ccfc(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  FUN_14131cf14(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar7) {
    FUN_14131cf60(param_2,iVar7);
  }
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar10 = 1;
    uVar13 = 0;
    iVar8 = 0;
    iVar12 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 2);
    }
    uVar11 = *puVar5;
    if (uVar11 == 0) {
      iVar8 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar8 = iVar7 + -1;
      }
      uVar13 = 0;
      uVar10 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar10 = uVar13;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar13) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar12 = 0;
    }
    uVar10 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar8) {
      iVar8 = iVar7;
    }
  }
  if (iVar8 < iVar7) {
    uVar11 = 0xffffffff;
    do {
      lVar9 = *param_1;
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_14131cbee(param_2,iVar7);
      }
      lVar9 = lVar9 + (longlong)iVar8 * 0x28;
      lVar6 = *param_2;
      *(undefined8 *)(lVar6 + (longlong)iVar7 * 0x10) = *(undefined8 *)(lVar9 + 0x10);
      lVar9 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar6 + 8 + (longlong)iVar7 * 0x10) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      uVar11 = uVar11 & ~(uint)uVar10;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar8 = (int)uVar13;
      lVar9 = (longlong)iVar8;
      uVar2 = puVar5[lVar9] & uVar11;
      if (uVar2 == 0) {
        iVar3 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar3 = iVar7 + -1;
        }
        iVar3 = iVar3 >> 5;
        iVar4 = iVar3;
        if (iVar3 < iVar8) {
          iVar4 = iVar8;
        }
        if (iVar3 <= iVar8) {
          return;
        }
        lVar6 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar2 = puVar5[lVar9 + lVar6 + 1];
          if (uVar2 != 0) break;
          lVar6 = lVar6 + 1;
          if (iVar4 - lVar9 == lVar6) {
            return;
          }
        }
        uVar13 = (ulonglong)(iVar8 + (int)lVar6 + 1);
        uVar11 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar2 & uVar2);
      uVar1 = uVar10 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar7);
  }
  return;
}



// FUNCTION 14131cf14 FUN_14131cf14 body=75 status=ok
// SIG undefined FUN_14131cf14(void)

void FUN_14131cf14(longlong param_1,int param_2)

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



// FUNCTION 14131cf60 FUN_14131cf60 body=212 status=ok
// SIG undefined FUN_14131cf60(void)

void FUN_14131cf60(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
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



// FUNCTION 14131d034 FUN_14131d034 body=480 status=ok
// SIG undefined FUN_14131d034(void)

undefined8 * FUN_14131d034(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined8 *local_50;
  longlong **local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar11 = (longlong *)(param_1 + 0x138);
  iVar3 = *(int *)(param_3 + 1);
  uVar7 = 0;
  iVar6 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar3 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_3;
    }
    lVar9 = 0;
    uVar7 = 0;
    do {
      uVar8 = ((uint)(0x19 < (ushort)puVar4[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar9]) -
              0x20;
      uVar10 = (uint)(uVar7 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar8) & 0xff) * 4);
      uVar7 = (ulonglong)
              (uVar10 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
      lVar9 = lVar9 + 1;
    } while (iVar6 != (int)lVar9);
  }
  iVar3 = FUN_14131d216(plVar11,uVar7,param_3);
  if (iVar3 != -1) {
    lVar9 = *plVar11 + (longlong)iVar3 * 0x28;
    if ((lVar9 != 0) && (*plVar11 + (longlong)iVar3 * 0x28 != -0x10)) {
      *param_2 = *(undefined8 *)(lVar9 + 0x10);
      lVar9 = *(longlong *)(lVar9 + 0x18);
      goto LAB_14131d11a;
    }
  }
  plVar5 = (longlong *)FUN_14001cc68(0x130);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b4f6c30;
  plVar1 = plVar5 + 2;
  memset(plVar1,0,0x120);
  FUN_1458eb1a2(plVar1);
  local_48 = &local_60;
  local_60 = plVar1;
  local_58 = plVar5;
  local_50 = param_3;
  FUN_1458eb2e0(plVar11,&local_3c);
  plVar1 = local_58;
  lVar9 = *plVar11;
  puVar12 = (undefined8 *)(lVar9 + (longlong)local_3c * 0x28 + 0x10);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_58 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_144a787a6(*puVar12,param_3);
  *param_2 = *puVar12;
  lVar9 = *(longlong *)(lVar9 + 0x18 + (longlong)local_3c * 0x28);
LAB_14131d11a:
  param_2[1] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131d216 FUN_14131d216 body=197 status=ok
// SIG undefined FUN_14131d216(void)

int FUN_14131d216(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14131d25c:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_14131d2b4;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14131d2b4;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14131d2c5;
    }
  }
  return -1;
LAB_14131d2b4:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14131d2c5:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14131d25c;
}



// FUNCTION 14131d2dc FUN_14131d2dc body=403 status=ok
// SIG undefined FUN_14131d2dc(void)

void FUN_14131d2dc(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459ca5e2(param_1,local_48 + 2,param_2);
  plVar2 = local_30;
  lVar4 = local_48[2];
  if (local_48[2] == 0) goto LAB_14131d30f;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  if (*(longlong **)(local_48[2] + 0x38) != (longlong *)0x0) {
    uVar6 = (**(code **)(**(longlong **)(local_48[2] + 0x38) + 0x100))();
    if (*(longlong *)(lVar4 + 0x40) != 0) {
      FUN_14480f766(uVar6);
    }
    *(undefined8 *)(lVar4 + 0x40) = 0;
  }
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) &&
     (*(longlong *)(local_48[2] + 0x38) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x288))();
    *(undefined8 *)(local_48[2] + 0x38) = 0;
  }
  plVar2 = *(longlong **)(local_48[2] + 0x18);
  plVar3 = *(longlong **)(local_48[2] + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_14131d414:
    local_48[0] = 0;
    local_48[1] = 0;
  }
  else {
    cVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (cVar5 == '\0') goto LAB_14131d414;
    (**(code **)(*plVar2 + 0x30))(plVar2,local_48);
  }
  FUN_145ad1bb0(param_1 + 0xe8,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_146207904(param_1);
  FUN_1458eaba4(param_1);
LAB_14131d30f:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131d470 FUN_14131d470 body=1098 status=ok
// SIG undefined FUN_14131d470(void)

void FUN_14131d470(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  undefined4 local_74;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(*param_2 + 0xa8) != '\0') goto LAB_14131d4a1;
  FUN_14131d034(param_1,&local_88);
  lVar11 = *param_2;
  cVar3 = FUN_1458eb138(local_88);
  if (cVar3 == '\0') {
    if (*(int *)(lVar11 + 0x28) == 2) {
      iVar5 = (int)param_3[1];
      uVar8 = 0;
      iVar7 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar7 = 0;
      }
      if (0 < iVar7) {
        if (iVar5 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        else {
          puVar10 = (undefined2 *)*param_3;
        }
        lVar9 = 0;
        uVar8 = 0;
        do {
          uVar4 = ((uint)(ushort)puVar10[lVar9] +
                  (uint)(0x19 < (ushort)puVar10[lVar9] - 0x61) * 0x20) - 0x20;
          uVar12 = (uint)(uVar8 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar4) & 0xff) * 4);
          uVar8 = (ulonglong)
                  (uVar12 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar4 >> 8 & 0xff) * 4));
          lVar9 = lVar9 + 1;
        } while (iVar7 != (int)lVar9);
      }
      iVar5 = FUN_148ab42a0(lVar11 + 0x58,uVar8,param_3);
      if (iVar5 == -1) {
        local_60 = (longlong *)0x0;
        local_58 = (longlong **)((ulonglong)local_58 & 0xffffffff00000000);
        FUN_1446efa72(&local_60,0,3,0x10);
        plVar1 = local_60;
        local_58._0_4_ = 3;
        *local_60 = (longlong)&PTR_LAB_14b456c10;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar11 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar11 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar11;
        local_60[2] = lVar9;
        *local_60 = (longlong)&PTR_FUN_14b4f6900;
        local_60[3] = 0;
        iVar5 = 0;
        if (param_1 != 0) {
          uVar4 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_60 + 3) = uVar4;
          if ((int)uVar4 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          iVar5 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar5 = *(int *)(lVar11 + 0x10);
            bVar13 = iVar5 == 0;
            if (bVar13) {
              *(int *)(lVar11 + 0x10) = iVar7;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar13) {
              iVar5 = iVar7;
            }
          }
        }
        *(int *)((longlong)plVar1 + 0x1c) = iVar5;
        plVar1[4] = (longlong)FUN_1460acec8;
        plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_14b4f6970;
        plVar1 = plVar6 + 2;
        local_a8 = &local_60;
        FUN_146015ce0(plVar1,param_1,param_2,param_3);
        local_98 = plVar1;
        local_90 = plVar6;
        FUN_148ab450a(&local_98,plVar1);
        if ((int)local_58 == 0) {
LAB_14131d768:
          if (local_60 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_60 != (longlong *)0x0) {
          (**(code **)*local_60)(local_60,0);
          FUN_1446efa72(&local_60,0,0,0x10);
          local_58._0_4_ = 0;
          goto LAB_14131d768;
        }
        local_60 = param_3;
        local_58 = &local_98;
        FUN_14615ea2a(*param_2 + 0x58,&local_70,&local_60);
        plVar1 = local_98;
        FUN_14131d034(local_98[4],&local_70,local_98 + 7);
        local_58 = (longlong **)&local_74;
        local_74 = 1;
        local_60 = (longlong *)(plVar1[5] + 0x30);
        FUN_145ca1206(local_70 + 0x10,local_4c,&local_60);
        *(undefined4 *)(plVar1 + 0xb) = 0;
        FUN_143f46faa(plVar1);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_68 + 0x10))(local_68);
            }
          }
        }
        plVar1 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_90 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
      }
    }
    else {
      local_60 = (longlong *)(lVar11 + 0x30);
      local_58 = &local_98;
      local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
      FUN_145ca1206(local_88 + 0x10,&local_70);
      if (*(int *)(*param_2 + 0x28) != 1) {
        FUN_14131d8bc(param_1,param_2);
      }
    }
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
LAB_14131d4a1:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14131d8bc FUN_14131d8bc body=754 status=ok
// SIG undefined FUN_14131d8bc(void)

void FUN_14131d8bc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(*param_2 + 0xa8) != '\0') goto LAB_14131d91c;
  *(undefined1 *)(*param_2 + 0xa9) = 0;
  lVar11 = *param_2;
  if (*(int *)(lVar11 + 0x28) - 1U < 2) goto LAB_14131d91c;
  if (*(int *)(lVar11 + 0x28) == 3) {
    *(undefined1 *)(lVar11 + 0xa9) = 1;
    goto LAB_14131d91c;
  }
  if (0.0 < *(float *)(lVar11 + 0xc4)) goto LAB_14131d91c;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar6 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b438ba0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_58[2] = lVar8;
  *local_58 = &PTR_FUN_14b4f6700;
  local_58[3] = 0;
  iVar9 = 0;
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar9 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar9 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar9 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar10;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar9 = iVar10;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar9;
  puVar6[4] = FUN_146207654;
  local_60 = param_1;
  plVar7 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_1460d690a(plVar7,&local_60,param_2,&local_58);
  plVar1 = plVar7 + 2;
  local_48 = plVar1;
  local_40 = plVar7;
  FUN_148ab3c1e(&local_48,plVar1);
  plVar5 = local_40;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if (local_50 == 0) {
LAB_14131daae:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_14131daae;
  }
  lVar11 = *param_2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar11 + 0x50);
  *(longlong **)(lVar11 + 0x48) = plVar1;
  *(longlong **)(lVar11 + 0x50) = plVar7;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined4 *)(plVar7[9] + 0x28) = 1;
  *(undefined4 *)(plVar7 + 0xb) = 0;
  FUN_143f46a06(plVar1);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
LAB_14131d91c:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14131dbb0 FUN_14131dbb0 body=446 status=ok
// SIG undefined FUN_14131dbb0(void)

void FUN_14131dbb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 **ppuStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  GetCurrentThreadId();
  FUN_1458b7e5c(param_1);
  FUN_1458eb942(param_2);
  if (*(int *)(param_1 + 0x1f8) != 0) {
    FUN_1458eba4e(param_1);
    local_58 = (undefined1 *)0x0;
    ppuStack_50 = (undefined4 **)0x0;
    FUN_1411591a0(*(undefined8 *)(param_1 + 0x1e8));
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x1e8) + 0x30);
    FUN_1458eb904(param_1 + 0x2d8,uVar4);
    FUN_1458eb9c6(param_1 + 0x2d8,uVar4);
    lVar1 = param_1 + 0x2b0;
    FUN_140250df4(lVar1);
    local_5c = 0;
    iVar5 = *(int *)(param_1 + 0x2b8);
    uVar3 = iVar5 + 1;
    *(uint *)(param_1 + 0x2b8) = uVar3;
    if (*(uint *)(param_1 + 700) < uVar3) {
      FUN_1447808da(lVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar5 * 4) = 0;
    if (*(int *)(param_1 + 0x1f8) < 1) {
      uVar4 = 0;
    }
    else {
      iVar5 = 0;
      local_70 = lVar1;
      do {
        local_58 = &LAB_14446c790;
        local_78 = &local_58;
        local_68 = &local_5c;
        ppuStack_50 = &local_68;
        FUN_14131dd70(param_1,param_2,iVar5,0xffffffff);
        uVar4 = local_5c;
        iVar2 = *(int *)(param_1 + 0x2b8);
        *(uint *)(param_1 + 0x2b8) = iVar2 + 1U;
        if (*(uint *)(param_1 + 700) < iVar2 + 1U) {
          FUN_1447808da(local_70,iVar2);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar2 * 4) = uVar4;
        iVar5 = iVar5 + 1;
        uVar4 = local_5c;
      } while (iVar5 < *(int *)(param_1 + 0x1f8));
    }
    *(undefined4 *)(param_1 + 0x2c0) = uVar4;
    FUN_145974750(param_2 + 0x1a8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14131dd70 FUN_14131dd70 body=765 status=ok
// SIG undefined FUN_14131dd70(void)

void FUN_14131dd70(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined8 local_70;
  uint local_68;
  int local_64;
  undefined2 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)(param_1 + 0x1e8);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x1f0) + (longlong)param_3 * 0x10);
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x1f0) + 8 + (longlong)param_3 * 0x10);
  local_70 = param_2;
  if (cVar1 == 'e') {
    local_68 = (uint)*(ushort *)(*plVar2 + 4 + *plVar5);
    if (local_68 != 0) {
      lVar4 = *plVar2 + *plVar5;
      piVar8 = (int *)((ulonglong)*(byte *)((longlong)plVar5 + 9) + lVar4 + 10);
      lVar4 = *(longlong *)
               (**(longlong **)(param_1 + 0x230) + (ulonglong)*(ushort *)(lVar4 + 2) * 8);
      uVar6 = (ulonglong)local_68;
      uVar7 = 0;
      do {
        lVar3 = *(longlong *)(lVar4 + 0x18);
        plVar5 = (longlong *)(lVar4 + 0x50);
        if (lVar3 != 0) {
          plVar5 = (longlong *)FUN_1490de3be(lVar3,local_68);
        }
        local_64 = (int)uVar7 + param_4;
        local_5c = CONCAT44((int)uVar7,param_3);
        local_54 = *(undefined8 *)(*plVar5 + uVar7 * 8);
        local_78 = piVar8;
        (*(code *)*param_5)(param_5[1],local_70,&local_64,&local_5c);
        uVar7 = uVar7 + 1;
        piVar8 = (int *)((longlong)piVar8 + 6);
      } while (uVar6 != uVar7);
    }
  }
  else {
    switch(cVar1) {
    case 'A':
    case 'B':
    case 'C':
    case 'E':
    case 'F':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'd':
    case 'f':
    case 'g':
      local_78 = (int *)(*plVar2 + *plVar5 + 2);
      local_5c = 0xffffffffffffffff;
      local_54 = 0;
      local_64 = param_4;
      (*(code *)*param_5)(param_5[1],param_2);
      break;
    case 'D':
    case 'Q':
      lVar4 = *plVar5;
      lVar3 = *plVar2;
      local_78 = (int *)(lVar3 + lVar4 + 2);
      local_5c = 0xffffffffffffffff;
      local_54 = 0;
      local_64 = param_4;
      (*(code *)*param_5)(param_5[1],param_2,&local_64,&local_5c);
      local_78 = (int *)(lVar3 + lVar4 + 8);
      local_5c = 0xffffffffffffffff;
      local_54 = 0;
      local_64 = param_4 + 1;
      (*(code *)*param_5)(param_5[1],param_2,&local_64,&local_5c);
      break;
    case 'G':
    case 'H':
      lVar4 = *plVar5;
      lVar3 = *plVar2;
      local_60 = *(undefined2 *)(lVar3 + 6 + lVar4);
      local_64 = *(int *)(lVar3 + 2 + lVar4);
      local_5c = 0xffffffffffffffff;
      local_54 = 0;
      local_78 = &local_64;
      local_4c = param_4;
      (*(code *)*param_5)(param_5[1],param_2,&local_4c,&local_5c);
      local_64 = *(int *)(lVar3 + 8 + lVar4);
      local_60 = *(undefined2 *)(lVar3 + 0xc + lVar4);
      local_5c = 0xffffffffffffffff;
      local_54 = 0;
      local_4c = param_4 + 1;
      local_78 = &local_64;
      (*(code *)*param_5)(param_5[1],param_2,&local_4c,&local_5c);
      local_64 = *(int *)(lVar3 + 0xe + lVar4);
      local_60 = *(undefined2 *)(lVar3 + 0x12 + lVar4);
      local_5c = 0xffffffffffffffff;
      local_54 = 0;
      local_4c = param_4 + 2;
      local_78 = &local_64;
      (*(code *)*param_5)(param_5[1],param_2,&local_4c,&local_5c);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14131e06e FUN_14131e06e body=8815 status=ok
// SIG undefined FUN_14131e06e(void)

void FUN_14131e06e(longlong param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  uint *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined ******ppppppuVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *****ppppplVar17;
  ulonglong uVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong *puVar25;
  longlong *plVar26;
  int iVar27;
  undefined8 *puVar28;
  ushort uVar29;
  longlong *plVar30;
  longlong *plVar31;
  undefined8 *puVar32;
  uint uVar33;
  float fVar34;
  undefined1 auStack_268 [32];
  void **local_248;
  undefined4 local_240;
  longlong *local_230;
  longlong *local_228;
  ulonglong *local_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong *local_208;
  longlong local_200;
  longlong *local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  ulonglong uStack_1c0;
  void *local_1b8;
  ulonglong uStack_1b0;
  void *local_1a8;
  ulonglong uStack_1a0;
  longlong *local_198;
  undefined4 local_190;
  longlong local_188;
  int local_180;
  longlong local_178 [2];
  longlong local_168 [2];
  longlong *local_158;
  undefined8 uStack_150;
  longlong *local_140;
  int local_138;
  undefined8 local_130;
  longlong *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  longlong *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  float local_f0;
  undefined1 *local_e8;
  undefined8 uStack_e0;
  undefined *****local_d8 [2];
  longlong ****local_c8;
  uint local_c0;
  uint uStack_bc;
  int local_b8;
  int iStack_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  uint local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_200 = param_1;
  if ((*param_2 == 0) || (param_2[1] == 0)) goto LAB_14131f012;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  local_1b8 = (void *)0x0;
  uStack_1b0 = 0;
  local_248 = &local_1c8;
  local_1c8 = (void *)0x0;
  uStack_1c0 = 0;
  cVar3 = FUN_14001cda4(param_2,param_3);
  local_230 = param_4;
  if (cVar3 == '\0') {
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_128 = (longlong *)0x0;
    uStack_120 = 0;
    local_d8[0] = (undefined *****)0x0;
    local_c8 = (longlong ****)&PTR_LAB_14b406f80;
    local_c0 = 0x44173666;
    uStack_bc = 1;
    local_e8 = &LAB_140255cce;
    if ((longlong)(int)param_2[3] == 0) {
LAB_14131e29b:
      ppppplVar17 = (longlong *****)local_d8[0];
      if ((longlong *****)local_d8[0] == (longlong *****)0x0) {
        ppppplVar17 = &local_c8;
      }
      (*(code *)(*ppppplVar17)[2])();
    }
    else {
      plVar24 = (longlong *)param_2[2];
      plVar22 = plVar24 + (int)param_2[3];
      do {
        uVar23 = uStack_120;
        lVar7 = *plVar24;
        if (lVar7 != 0) {
          FUN_140255aed(local_128,uStack_120 & 0xffffffff);
          uVar16 = uStack_120 >> 0x20;
          uStack_120 = uStack_120 & 0xffffffff00000000;
          if (((longlong)uVar23 < 0) && ((int)uVar16 != 0)) {
            FUN_1488ca408(&local_128,0);
          }
          FUN_140255b38(lVar7,&local_128);
          if ((longlong)(int)uStack_120 != 0) {
            plVar26 = local_128 + (longlong)(int)uStack_120 * 2;
            plVar30 = local_128;
            do {
              plVar2 = (longlong *)*plVar30;
              if (plVar2 != (longlong *)0x0) {
                lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
                lVar8 = FUN_14001d604();
                uVar23 = uStack_1d0;
                if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                    lVar8 + 0x30)) {
                  lVar7 = (longlong)(int)uStack_1d0;
                  if (lVar7 != 0) {
                    uVar16 = 0;
                    do {
                      if (*(longlong **)(local_1d8 + uVar16) == plVar2) {
                        if ((int)(~uVar16 >> 3) != 0) goto LAB_14131e268;
                        break;
                      }
                      uVar16 = uVar16 + 8;
                    } while (lVar7 * 8 - uVar16 != 0);
                  }
                  uVar14 = (int)uStack_1d0 + 1;
                  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar14);
                  if (uStack_1d0._4_4_ < uVar14) {
                    FUN_14001d74c(&local_1d8,uVar23 & 0xffffffff);
                  }
                  *(longlong **)(local_1d8 + lVar7 * 8) = plVar2;
                }
              }
LAB_14131e268:
              plVar30 = plVar30 + 2;
            } while (plVar30 != plVar26);
          }
        }
        plVar24 = plVar24 + 1;
      } while (plVar24 != plVar22);
      if (local_e8 != (undefined1 *)0x0) goto LAB_14131e29b;
    }
    FUN_140255aed(local_128,uStack_120 & 0xffffffff);
    if (local_128 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_1e8 = (longlong *)0x0;
    uStack_1e0 = 0;
    local_128 = (longlong *)0x0;
    uStack_120 = 0;
    local_d8[0] = (undefined *****)0x0;
    local_c8 = (longlong ****)&PTR_LAB_14b406f80;
    local_c0 = 0x4417367a;
    uStack_bc = 1;
    local_e8 = &LAB_140255cce;
    if ((longlong)(int)param_2[3] == 0) {
LAB_14131e470:
      ppppplVar17 = &local_c8;
      if ((longlong *****)local_d8[0] != (longlong *****)0x0) {
        ppppplVar17 = (longlong *****)local_d8[0];
      }
      (*(code *)(*ppppplVar17)[2])();
    }
    else {
      plVar24 = (longlong *)param_2[2];
      plVar22 = plVar24 + (int)param_2[3];
      do {
        uVar23 = uStack_120;
        lVar7 = *plVar24;
        if (lVar7 != 0) {
          FUN_140255aed(local_128,uStack_120 & 0xffffffff);
          uVar16 = uStack_120 >> 0x20;
          uStack_120 = uStack_120 & 0xffffffff00000000;
          if (((longlong)uVar23 < 0) && ((int)uVar16 != 0)) {
            FUN_1488ca408(&local_128,0);
          }
          FUN_140255b38(lVar7,&local_128);
          if ((longlong)(int)uStack_120 != 0) {
            plVar26 = local_128 + (longlong)(int)uStack_120 * 2;
            plVar30 = local_128;
            do {
              plVar2 = (longlong *)*plVar30;
              if (plVar2 != (longlong *)0x0) {
                lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
                lVar8 = FUN_1413202de();
                uVar23 = uStack_1e0;
                if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                    lVar8 + 0x30)) {
                  lVar7 = (longlong)(int)uStack_1e0;
                  if (lVar7 != 0) {
                    uVar16 = 0;
                    do {
                      if (*(longlong **)((longlong)local_1e8 + uVar16) == plVar2) {
                        if ((int)(~uVar16 >> 3) != 0) goto LAB_14131e440;
                        break;
                      }
                      uVar16 = uVar16 + 8;
                    } while (lVar7 * 8 - uVar16 != 0);
                  }
                  uVar14 = (int)uStack_1e0 + 1;
                  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar14);
                  if (uStack_1e0._4_4_ < uVar14) {
                    FUN_141320318(&local_1e8,uVar23 & 0xffffffff);
                  }
                  local_1e8[lVar7] = (longlong)plVar2;
                }
              }
LAB_14131e440:
              plVar30 = plVar30 + 2;
            } while (plVar30 != plVar26);
          }
        }
        plVar24 = plVar24 + 1;
      } while (plVar24 != plVar22);
      if (local_e8 != (undefined1 *)0x0) goto LAB_14131e470;
    }
    FUN_140255aed(local_128,uStack_120 & 0xffffffff);
    if (local_128 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar23 = 0;
    local_c8 = (longlong ****)0x0;
    local_c0 = 0;
    local_e8 = (undefined1 *)0x0;
    uStack_e0 = 0;
    uStack_bc = 0x80;
    local_b8 = -1;
    iStack_b4 = 0;
    local_a8 = (undefined1 *)0x0;
    local_a0 = 0;
    uVar16 = 0;
    if ((longlong)(int)uStack_1d0 != 0) {
      lVar7 = 0;
      do {
        if ((*(longlong *)(local_1d8 + lVar7) != 0) &&
           (uVar23 = *(ulonglong *)(*(longlong *)(local_1d8 + lVar7) + 0x30), uVar23 != 0)) {
          uVar16 = uVar23 & 0xffffffff00000000;
          goto LAB_14131e537;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)uStack_1d0 * 8 != lVar7);
      uVar23 = 0;
      uVar16 = 0;
    }
LAB_14131e537:
    uVar18 = uVar23 & 0xffffffff | uVar16;
    if ((uVar18 != 0) && (*(int *)(local_200 + 0x10) != *(int *)(local_200 + 0x3c))) {
      uVar14 = (uint)(uVar23 >> 0x10);
      uVar5 = (uint)uVar23 & 0xffff;
      lVar7 = local_200 + 0x40;
      if (*(longlong *)(local_200 + 0x48) != 0) {
        lVar7 = *(longlong *)(local_200 + 0x48);
      }
      iVar27 = *(int *)(lVar7 + (ulonglong)
                                (*(int *)(local_200 + 0x50) - 1U &
                                (int)(uVar16 >> 0x20) +
                                ((uint)uVar23 << 0x10 | uVar5) + (uVar5 >> 4) +
                                (uVar14 << 0x13 | uVar14 & 0xffff)) * 4);
      if (iVar27 != -1) {
        do {
          puVar25 = (ulonglong *)(*(longlong *)(local_200 + 8) + (longlong)iVar27 * 0x28);
          if (*puVar25 == uVar18) {
            if (((ulonglong)(puVar25 + 1) & 0xfffffffffffffff7) != 0) {
              if ((longlong)(int)uStack_1e0 != 0) {
                local_1f8 = local_1e8 + (int)uStack_1e0;
                plVar22 = local_1e8;
                local_220 = puVar25;
                goto LAB_14131f094;
              }
            }
            break;
          }
          iVar27 = (int)puVar25[4];
        } while (iVar27 != -1);
      }
    }
    goto LAB_14131e5db;
  }
  goto LAB_14131ef3b;
LAB_14131f094:
  do {
    lVar7 = *plVar22;
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) != 0)) && ((int)puVar25[3] != 0)) {
      FUN_1400021e4(*(longlong *)(lVar7 + 0x30) + 0x18,&local_188);
      if (1 < local_180) {
        local_118 = 0;
        plStack_110 = (longlong *)0x0;
        local_128 = (longlong *)0x0;
        uStack_120 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
          puVar25 = local_220;
        }
        local_198 = DAT_14c844840;
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
        local_190 = 0;
        if ((longlong)(int)puVar25[3] != 0) {
          puVar28 = (undefined8 *)puVar25[2];
          puVar32 = puVar28 + (longlong)(int)puVar25[3] * 6;
          plVar24 = local_198;
          do {
            FUN_1400021e4(puVar28 + 3,&local_140);
            if (local_138 < 2) {
              iVar27 = 7;
            }
            else {
              if (local_180 == local_138) {
                lVar8 = 0;
                while( true ) {
                  uVar19 = *(ushort *)(local_188 + lVar8);
                  uVar23 = (ulonglong)uVar19;
                  uVar29 = *(ushort *)((longlong)local_140 + lVar8);
                  if (uVar19 != uVar29) break;
                  if (uVar19 == 0) goto LAB_14131f203;
LAB_14131f1c1:
                  lVar8 = lVar8 + 2;
                }
                if ((uVar29 | uVar19) < 0x80) {
                  uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                  uVar16 = (ulonglong)uVar29;
                  uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
                  if ((&DAT_149e05da0)[uVar23] == (&DAT_149e05da0)[uVar16]) goto LAB_14131f1c1;
                }
                if (uVar19 != uVar29) goto LAB_14131f1fc;
              }
              else if (local_180 + local_138 != 1) {
LAB_14131f1fc:
                iVar27 = 0;
                goto LAB_14131f2ae;
              }
LAB_14131f203:
              if (local_128 != (longlong *)*puVar28) {
                local_118 = 0;
              }
              if (uStack_120 != puVar28[1]) {
                local_118 = 0;
              }
              local_128 = (longlong *)*puVar28;
              uVar9 = FUN_14477b664();
              uStack_120 = FUN_14477b664(uVar9);
              local_118 = puVar28[2];
              plStack_110 = (longlong *)puVar28[3];
              plVar30 = (longlong *)puVar28[4];
              plVar26 = plVar24;
              if (plVar24 != plVar30) {
                local_198 = plVar30;
                if (plVar30 != (longlong *)0x0) {
                  (**(code **)(*plVar30 + 8))(plVar30);
                }
                plVar26 = plVar30;
                if (plVar24 != (longlong *)0x0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                }
              }
              local_190 = *(undefined4 *)(puVar28 + 5);
              iVar27 = 6;
              plVar24 = plVar26;
            }
LAB_14131f2ae:
            if (local_140 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          } while (((iVar27 == 0) || (iVar27 == 7)) && (puVar28 = puVar28 + 6, puVar28 != puVar32));
        }
        if (((plStack_110 != (longlong *)0x0) && (cVar3 = FUN_140cac50e(&local_198), cVar3 == '\0'))
           && (lVar8 = FUN_140e28e64(&local_128), lVar8 != 0)) {
          local_130 = *(undefined8 *)(lVar7 + 0x10);
          FUN_1400021e4(&local_130,&local_140);
          local_158 = (longlong *)0x0;
          uStack_150 = 0;
          local_168[0] = 0;
          local_168[1] = 0;
          FUN_140056680(local_178,L"_tier_");
          local_240 = 0;
          local_248 = (void **)CONCAT44(local_248._4_4_,1);
          FUN_1407cdbc6(&local_140,local_178,&local_158,local_168);
          if (local_178[0] != 0) {
            FUN_1400020a8();
          }
          if ((int)uStack_150 < 2) {
            plVar24 = (longlong *)0x0;
            iVar27 = 0;
          }
          else {
            FUN_1400020e8(&local_158,&DAT_14b975812,3);
            plVar24 = local_158;
            iVar27 = (int)uStack_150;
            local_158 = (longlong *)0x0;
            uStack_150 = 0;
          }
          if (local_168[0] != 0) {
            FUN_1400020a8();
          }
          if (local_158 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_140 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          iVar6 = iVar27 + -1;
          if (iVar27 == 0) {
            iVar6 = 0;
          }
          FUN_1446f82e2(&local_140,iVar6,plVar24,1);
          plVar30 = local_140;
          if (plVar24 != (longlong *)0x0) {
            FUN_1400020a8(plVar24);
          }
          if ((int)uStack_e0 != iStack_b4) {
            uVar14 = (uint)((ulonglong)plVar30 >> 0x10);
            uVar5 = (uint)plVar30 & 0xffff;
            puVar12 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar12 = local_b0;
            }
            iVar27 = *(int *)(puVar12 +
                             (ulonglong)
                             (local_a0 - 1 &
                             (int)((ulonglong)plVar30 >> 0x20) + ((uint)plVar30 << 0x10 | uVar5) +
                             (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar5 >> 4)) * 4);
            while (iVar27 != -1) {
              lVar7 = (longlong)iVar27 * 0x50;
              if (*(longlong **)(local_e8 + lVar7) == plVar30) {
                if (((ulonglong)(local_e8 + lVar7 + 8) & 0xfffffffffffffff7) != 0) {
                  iVar27 = *(int *)(local_e8 + lVar7 + 0x38);
                  *(int *)(local_e8 + lVar7 + 0x38) = iVar27 + 1;
                  if (*(int *)(local_e8 + lVar7 + 0x3c) < 1) {
                    fVar34 = 0.0;
                  }
                  else {
                    fVar34 = (float)(iVar27 + 1) / (float)*(int *)(local_e8 + lVar7 + 0x3c);
                  }
                  if (fVar34 <= 0.0) {
                    fVar34 = 0.0;
                  }
                  *(float *)(local_e8 + lVar7 + 0x40) = fVar34;
                  goto LAB_14131fac8;
                }
                break;
              }
              iVar27 = *(int *)(local_e8 + lVar7 + 0x48);
            }
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
          plVar24 = DAT_14c844840;
          if (DAT_14c844840 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            else {
              (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
            }
          }
          plVar26 = local_128;
          local_228 = plVar22;
          uVar9 = FUN_14477b664(uStack_120);
          local_210 = FUN_14477b664(uVar9);
          plVar2 = plStack_110;
          uVar9 = local_118;
          plVar22 = local_198;
          plVar31 = plVar24;
          if (plVar24 != local_198) {
            if (local_198 != (longlong *)0x0) {
              (**(code **)(*local_198 + 8))(local_198);
            }
            plVar31 = plVar22;
            if (plVar24 != (longlong *)0x0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
          iVar6 = local_b8;
          uVar23 = uStack_e0;
          iVar27 = *(int *)(lVar8 + 0xc);
          local_218 = CONCAT44(local_218._4_4_,local_190);
          if (iVar27 < 1) {
            fVar34 = 0.0;
          }
          else {
            fVar34 = 1.0 / (float)iVar27;
          }
          local_208 = plVar2;
          if (iStack_b4 == 0) {
            iVar6 = (int)uStack_e0;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0 + 1);
            if (uStack_e0._4_4_ == iVar6) {
              FUN_1406fba42(&local_e8,uVar23 & 0xffffffff);
            }
            uVar14 = local_c0;
            if (local_c0 == 0) {
              iVar20 = -1;
            }
            else {
              iVar20 = local_c0 + 0x1e;
              if (-1 < (int)(local_c0 - 1)) {
                iVar20 = local_c0 - 1;
              }
              iVar20 = iVar20 >> 5;
            }
            uVar5 = local_c0 + 1;
            uVar33 = local_c0 + 0x1f;
            if (-1 < (int)local_c0) {
              uVar33 = local_c0;
            }
            if ((int)uVar33 >> 5 == iVar20) {
              local_c0 = uVar5;
            }
            else {
              if ((int)uStack_bc <= (int)local_c0) {
                if (local_c0 + 0x20 < 0xa0) {
                  uStack_bc = 0x80;
                }
                else {
                  uVar5 = local_c0 + 0x20 >> 5;
                  local_1f0 = (ulonglong)uVar5;
                  if (uStack_bc + 0x1f < 0xa0) {
                    uVar15 = 4;
                    if (4 < uVar5) {
                      uVar15 = uVar5;
                    }
                  }
                  else {
                    uVar15 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
                  }
                  uVar23 = FUN_144a3809e(uVar15 << 2,0);
                  iVar20 = (int)(uVar23 >> 2);
                  uStack_bc = 0xffffffe0;
                  if ((int)local_1f0 <= iVar20) {
                    uStack_bc = iVar20 << 5;
                  }
                }
                FUN_1446efbd8(local_d8,local_c0);
                uVar5 = local_c0 + 1;
              }
              uVar15 = uVar5 + 0x1f;
              if (-1 < (int)uVar5) {
                uVar15 = uVar5;
              }
              local_c0 = uVar5;
              if ((int)uVar5 % 0x20 != 0) {
                ppppppuVar10 = (undefined ******)local_c8;
                if ((undefined ******)local_c8 == (undefined ******)0x0) {
                  ppppppuVar10 = local_d8;
                }
                bVar13 = -(char)((int)uVar5 % 0x20);
                *(uint *)((longlong)ppppppuVar10 + (longlong)((int)uVar15 >> 5) * 4) =
                     (*(uint *)((longlong)ppppppuVar10 + (longlong)((int)uVar15 >> 5) * 4) <<
                     (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
              }
            }
            lVar7 = (longlong)iVar6;
            ppppppuVar10 = (undefined ******)local_c8;
            if ((undefined ******)local_c8 == (undefined ******)0x0) {
              ppppppuVar10 = local_d8;
            }
            bVar13 = (byte)uVar14 & 0x1f;
            puVar1 = (uint *)((longlong)ppppppuVar10 + (longlong)((int)uVar33 >> 5) * 4);
            *puVar1 = *puVar1 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
          }
          else {
            lVar7 = (longlong)local_b8;
            local_b8 = *(int *)(local_e8 + lVar7 * 0x50 + 4);
            iStack_b4 = iStack_b4 + -1;
            if (iStack_b4 != 0) {
              *(undefined4 *)(local_e8 + (longlong)*(int *)(local_e8 + lVar7 * 0x50 + 4) * 0x50) =
                   0xffffffff;
            }
          }
          puVar12 = local_e8;
          ppppppuVar10 = (undefined ******)local_c8;
          if ((undefined ******)local_c8 == (undefined ******)0x0) {
            ppppppuVar10 = local_d8;
          }
          iVar20 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar20 = iVar6;
          }
          puVar1 = (uint *)((longlong)ppppppuVar10 + (longlong)(iVar20 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
          lVar7 = lVar7 * 0x50;
          *(longlong **)(local_e8 + lVar7) = plVar30;
          *(longlong **)(local_e8 + lVar7 + 8) = plVar26;
          uVar11 = FUN_14477b664(local_210);
          uVar11 = FUN_14477b664(uVar11);
          *(undefined8 *)(puVar12 + lVar7 + 0x10) = uVar11;
          *(undefined8 *)(puVar12 + lVar7 + 0x18) = uVar9;
          *(longlong **)(puVar12 + lVar7 + 0x20) = local_208;
          *(longlong **)(puVar12 + lVar7 + 0x28) = plVar31;
          if (plVar31 != (longlong *)0x0) {
            (**(code **)(*plVar31 + 8))(plVar31);
          }
          puVar25 = local_220;
          plVar22 = local_228;
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          plVar24 = (longlong *)(puVar12 + lVar7);
          *(undefined4 *)(plVar24 + 6) = (undefined4)local_218;
          *(undefined4 *)(plVar24 + 7) = 1;
          *(int *)((longlong)plVar24 + 0x3c) = iVar27;
          *(float *)(plVar24 + 8) = fVar34;
          *(undefined4 *)(plVar24 + 9) = 0xffffffff;
          lVar7 = *plVar24;
          uVar14 = (uint)((ulonglong)lVar7 >> 0x10);
          uVar5 = (uint)lVar7 & 0xffff;
          uVar14 = ((uint)lVar7 << 0x10 | uVar5) + (int)((ulonglong)lVar7 >> 0x20) +
                   (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar5 >> 4);
          uVar5 = (int)uStack_e0 - iStack_b4;
          if (1 < uVar5) {
            puVar12 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar12 = local_b0;
            }
            iVar27 = *(int *)(puVar12 + (ulonglong)(local_a0 - 1 & uVar14) * 4);
            while (iVar27 != -1) {
              puVar12 = local_e8 + (longlong)iVar27 * 0x50;
              if (*(longlong *)(local_e8 + (longlong)iVar27 * 0x50) == lVar7) {
                if (*(longlong **)(puVar12 + 0x28) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)(puVar12 + 0x28) + 0x10))();
                }
                memmove(puVar12,plVar24,0x48);
                FUN_148d55306(&local_e8,iVar6);
                plVar22 = local_228;
                puVar25 = local_220;
                goto LAB_14131fab9;
              }
              iVar27 = *(int *)(puVar12 + 0x48);
            }
          }
          uVar33 = 1;
          if (3 < uVar5) {
            uVar23 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
            lVar7 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar33 = 1 << ((byte)lVar7 & 0x1f);
          }
          if (((int)uVar5 < 1) || ((int)uVar33 <= (int)local_a0)) {
            uVar14 = local_a0 - 1 & uVar14;
            *(uint *)((longlong)plVar24 + 0x4c) = uVar14;
            puVar12 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar12 = local_b0;
            }
            *(undefined4 *)(plVar24 + 9) =
                 *(undefined4 *)
                  (puVar12 + ((longlong)(int)local_a0 - 1U & (longlong)(int)uVar14) * 4);
            puVar12 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar12 = local_b0;
            }
            *(int *)(puVar12 + ((longlong)(int)local_a0 - 1U & (longlong)(int)uVar14) * 4) = iVar6;
          }
          else {
            local_a0 = uVar33;
            if (local_a8 != (undefined1 *)0x0) {
              FUN_1446efa72(&local_a8,0,0,4);
            }
            uVar14 = local_a0;
            if (local_a0 == 1) {
              if (local_a8 != (undefined1 *)0x0) {
                FUN_1446efa72(&local_a8,0,0,4);
              }
LAB_14131f83a:
              uVar5 = 0;
              do {
                puVar12 = local_a8;
                if (local_a8 == (undefined1 *)0x0) {
                  puVar12 = local_b0;
                }
                *(undefined4 *)(puVar12 + (ulonglong)(local_a0 + 0x7fffffff & uVar5) * 4) =
                     0xffffffff;
                uVar5 = uVar5 + 1;
              } while (uVar14 != uVar5);
            }
            else {
              if (local_a0 == 0) goto LAB_14131fab9;
              FUN_1446efa72(&local_a8,0,local_a0,4);
              if (0 < (int)uVar14) goto LAB_14131f83a;
            }
            if (local_c0 == 0) {
              uVar23 = 0;
              uVar16 = 1;
              uVar14 = 0;
              iVar27 = 0;
            }
            else {
              ppppppuVar10 = (undefined ******)local_c8;
              if ((undefined ******)local_c8 == (undefined ******)0x0) {
                ppppppuVar10 = local_d8;
              }
              uVar14 = *(uint *)ppppppuVar10;
              if (uVar14 == 0) {
                iVar27 = local_c0 + 0x1e;
                if (-1 < (int)(local_c0 - 1)) {
                  iVar27 = local_c0 - 1;
                }
                uVar23 = 0;
                uVar5 = iVar27 >> 5;
                if (iVar27 >> 5 < 1) {
                  uVar5 = 0;
                }
                iVar27 = 0;
                do {
                  if (uVar5 == uVar23) goto LAB_14131fab9;
                  iVar27 = iVar27 + 0x20;
                  uVar14 = *(uint *)((longlong)ppppppuVar10 + (uVar23 + 1) * 4);
                  uVar23 = uVar23 + 1;
                } while (uVar14 == 0);
              }
              else {
                uVar23 = 0;
                iVar27 = 0;
              }
              uVar16 = (ulonglong)(-uVar14 & uVar14);
              uVar18 = uVar16 * 2 + 1;
              lVar7 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              uVar14 = (iVar27 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
              if ((int)local_c0 <= (int)uVar14) {
                uVar14 = local_c0;
              }
            }
            if ((int)uVar14 < (int)local_c0) {
              uVar5 = 0xffffffff;
              do {
                lVar7 = (longlong)(int)uVar14 * 0x50;
                uVar9 = *(undefined8 *)(local_e8 + lVar7);
                uVar33 = (uint)((ulonglong)uVar9 >> 0x10);
                uVar15 = (uint)uVar9 & 0xffff;
                uVar18 = (longlong)
                         (int)(((uint)uVar9 << 0x10 | uVar15) + (int)((ulonglong)uVar9 >> 0x20) +
                               (uVar33 << 0x13 | uVar33 & 0xffff) + (uVar15 >> 4)) &
                         (longlong)(int)local_a0 - 1U;
                iVar6 = (int)uVar18;
                *(int *)(local_e8 + lVar7 + 0x4c) = iVar6;
                puVar12 = local_a8;
                if (local_a8 == (undefined1 *)0x0) {
                  puVar12 = local_b0;
                }
                *(undefined4 *)(local_e8 + lVar7 + 0x48) =
                     *(undefined4 *)(puVar12 + ((longlong)(int)local_a0 - 1U & uVar18) * 4);
                puVar12 = local_a8;
                if (local_a8 == (undefined1 *)0x0) {
                  puVar12 = local_b0;
                }
                *(uint *)(puVar12 + ((longlong)iVar6 & (longlong)(int)local_a0 - 1U) * 4) = uVar14;
                uVar5 = ~(uint)uVar16 & uVar5;
                ppppppuVar10 = (undefined ******)local_c8;
                if ((undefined ******)local_c8 == (undefined ******)0x0) {
                  ppppppuVar10 = local_d8;
                }
                iVar6 = (int)uVar23;
                lVar7 = (longlong)iVar6;
                uVar14 = *(uint *)((longlong)ppppppuVar10 + lVar7 * 4) & uVar5;
                if (uVar14 == 0) {
                  iVar20 = local_c0 + 0x1e;
                  if (-1 < (int)(local_c0 - 1)) {
                    iVar20 = local_c0 - 1;
                  }
                  iVar20 = iVar20 >> 5;
                  iVar21 = iVar20;
                  if (iVar20 < iVar6) {
                    iVar21 = iVar6;
                  }
                  if (iVar20 <= iVar6) break;
                  lVar8 = 0;
                  while( true ) {
                    iVar27 = iVar27 + 0x20;
                    uVar14 = *(uint *)((longlong)ppppppuVar10 + (lVar7 + lVar8 + 1) * 4);
                    if (uVar14 != 0) break;
                    lVar8 = lVar8 + 1;
                    if (iVar21 - lVar7 == lVar8) goto LAB_14131fab9;
                  }
                  uVar23 = (ulonglong)(iVar6 + (int)lVar8 + 1);
                  uVar5 = 0xffffffff;
                }
                uVar16 = (ulonglong)(-uVar14 & uVar14);
                uVar18 = uVar16 * 2 + 1;
                lVar7 = 0x3f;
                if (uVar18 != 0) {
                  for (; uVar18 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                  }
                }
                uVar14 = (iVar27 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
              } while ((int)uVar14 < (int)local_c0);
            }
          }
LAB_14131fab9:
          if (plVar31 != (longlong *)0x0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
          }
        }
LAB_14131fac8:
        if (local_198 != (longlong *)0x0) {
          (**(code **)(*local_198 + 0x10))();
        }
      }
      if (local_188 != 0) {
        FUN_1400020a8();
      }
    }
    plVar22 = plVar22 + 1;
  } while (plVar22 != local_1f8);
LAB_14131e5db:
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_128 = (longlong *)0x0;
  uStack_120 = 0;
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
  local_108 = DAT_14c844840;
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
  uVar23 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0.0;
  puVar25 = (ulonglong *)(ulonglong)local_c0;
  if (local_c0 == 0) {
    uVar16 = 1;
    uVar14 = 0;
    iVar27 = 0;
  }
  else {
    ppppppuVar10 = (undefined ******)local_c8;
    if ((undefined ******)local_c8 == (undefined ******)0x0) {
      ppppppuVar10 = local_d8;
    }
    uVar14 = *(uint *)ppppppuVar10;
    if (uVar14 == 0) {
      iVar27 = local_c0 + 0x1e;
      if (-1 < (int)(local_c0 - 1)) {
        iVar27 = local_c0 - 1;
      }
      uVar23 = 0;
      uVar16 = (ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        uVar16 = uVar23;
      }
      iVar27 = 0;
      do {
        if (uVar16 == uVar23) goto LAB_14131e8d5;
        iVar27 = iVar27 + 0x20;
        uVar14 = *(uint *)((longlong)ppppppuVar10 + (uVar23 + 1) * 4);
        uVar23 = uVar23 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar23 = 0;
      iVar27 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar18 = uVar16 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar14 = (iVar27 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)local_c0 <= (int)uVar14) {
      uVar14 = local_c0;
    }
  }
  if (uVar14 != local_c0) {
    local_208 = local_128;
    local_210 = uStack_120;
    local_218 = local_118;
    uVar33 = 0xffffffff;
    uVar4 = 0;
    local_228 = local_108;
    plVar22 = plStack_110;
    uVar5 = local_c0;
    local_220 = puVar25;
    do {
      puVar12 = local_e8;
      lVar7 = (longlong)(int)uVar14 * 0x50;
      if ((int)local_f8 < *(int *)(local_e8 + lVar7 + 0x38)) {
        local_208 = *(longlong **)(local_e8 + lVar7 + 8);
        uVar9 = FUN_14477b664(*(undefined8 *)(local_e8 + lVar7 + 0x10));
        local_210 = FUN_14477b664(uVar9);
        local_218 = *(undefined8 *)(puVar12 + lVar7 + 0x18);
        local_1f8 = *(longlong **)(puVar12 + lVar7 + 0x20);
        plVar22 = *(longlong **)(puVar12 + lVar7 + 0x28);
        plVar24 = local_228;
        if (local_228 != plVar22) {
          if (plVar22 != (longlong *)0x0) {
            (**(code **)(*plVar22 + 8))(plVar22);
          }
          plVar24 = plVar22;
          if (local_228 != (longlong *)0x0) {
            (**(code **)(*local_228 + 0x10))();
          }
        }
        uVar4 = *(undefined4 *)(puVar12 + lVar7 + 0x30);
        local_f0 = *(float *)(puVar12 + lVar7 + 0x40);
        local_f8 = *(ulonglong *)(puVar12 + lVar7 + 0x38);
        puVar25 = local_220;
        plVar22 = local_1f8;
        uVar5 = local_c0;
        local_228 = plVar24;
      }
      uVar33 = uVar33 & ~(uint)uVar16;
      ppppppuVar10 = (undefined ******)local_c8;
      if ((undefined ******)local_c8 == (undefined ******)0x0) {
        ppppppuVar10 = local_d8;
      }
      iVar6 = (int)uVar23;
      lVar7 = (longlong)iVar6;
      uVar14 = *(uint *)((longlong)ppppppuVar10 + lVar7 * 4) & uVar33;
      if (uVar14 == 0) {
        iVar20 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar20 = uVar5 - 1;
        }
        iVar20 = iVar20 >> 5;
        iVar27 = iVar27 + 0x20;
        iVar21 = iVar20;
        if (iVar20 < iVar6) {
          iVar21 = iVar6;
        }
        if (iVar6 < iVar20) {
          lVar8 = 0;
          do {
            uVar14 = *(uint *)((longlong)ppppppuVar10 + (lVar7 + lVar8 + 1) * 4);
            if (uVar14 != 0) {
              uVar23 = (ulonglong)(iVar6 + (int)lVar8 + 1);
              uVar33 = 0xffffffff;
              goto LAB_14131e85f;
            }
            iVar27 = iVar27 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar21 - lVar7 != lVar8);
          uVar33 = 0xffffffff;
          lVar7 = (longlong)iVar21;
        }
        uVar23 = lVar7 + 1U & 0xffffffff;
        uVar14 = uVar5;
      }
      else {
LAB_14131e85f:
        uVar16 = (ulonglong)(-uVar14 & uVar14);
        uVar18 = uVar16 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar14 = (iVar27 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar14) {
          uVar14 = uVar5;
        }
      }
    } while (uVar14 != (uint)puVar25);
    local_128 = local_208;
    local_118 = local_218;
    uStack_120 = local_210;
    local_108 = local_228;
    plStack_110 = plVar22;
    local_100 = uVar4;
  }
LAB_14131e8d5:
  if ((plStack_110 == (longlong *)0x0) || (cVar3 = FUN_140cac50e(&local_108), cVar3 != '\0')) {
LAB_14131fbe0:
    FUN_144a5dc74(&local_140);
  }
  else {
    if (((int)local_f8 < 1) || (*(int *)(local_200 + 0x60) < (int)local_f8)) goto LAB_14131fbe0;
    lVar7 = *(longlong *)(local_200 + 0x58);
    lVar8 = (local_f8 & 0xffffffff) * 0x10;
    local_140 = *(longlong **)(lVar7 + -0x10 + lVar8);
    if (local_140 != (longlong *)0x0) {
      (**(code **)(*local_140 + 8))();
    }
    local_138 = *(int *)(lVar7 + lVar8 + -8);
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  cVar3 = FUN_140cac50e(&local_140);
  if (cVar3 == '\0') {
    iVar27 = (int)local_230[1];
    *(uint *)(local_230 + 1) = iVar27 + 1U;
    if (*(uint *)((longlong)local_230 + 0xc) < iVar27 + 1U) {
      FUN_14001d63e(local_230,iVar27);
    }
    FUN_14023423e((longlong)iVar27 * 0x10 + *local_230,&local_140);
  }
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_128 = (longlong *)0x0;
  uStack_120 = 0;
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
  local_108 = DAT_14c844840;
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
  uVar14 = local_c0;
  uVar23 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0.0;
  if (local_c0 == 0) {
    uVar16 = 1;
    uVar5 = 0;
    iVar27 = 0;
  }
  else {
    ppppppuVar10 = (undefined ******)local_c8;
    if ((undefined ******)local_c8 == (undefined ******)0x0) {
      ppppppuVar10 = local_d8;
    }
    uVar5 = *(uint *)ppppppuVar10;
    if (uVar5 == 0) {
      iVar27 = local_c0 + 0x1e;
      if (-1 < (int)(local_c0 - 1)) {
        iVar27 = local_c0 - 1;
      }
      uVar23 = 0;
      uVar16 = (ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        uVar16 = uVar23;
      }
      iVar27 = 0;
      do {
        if (uVar16 == uVar23) goto LAB_14131ec70;
        iVar27 = iVar27 + 0x20;
        uVar5 = *(uint *)((longlong)ppppppuVar10 + (uVar23 + 1) * 4);
        uVar23 = uVar23 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar23 = 0;
      iVar27 = 0;
    }
    uVar16 = (ulonglong)(-uVar5 & uVar5);
    uVar18 = uVar16 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar5 = (iVar27 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)local_c0 <= (int)uVar5) {
      uVar5 = local_c0;
    }
  }
  if (uVar5 != local_c0) {
    uVar33 = 0xffffffff;
    do {
      puVar12 = local_e8;
      lVar7 = (longlong)(int)uVar5 * 0x50;
      cVar3 = FUN_140cac50e(&local_108);
      if (cVar3 == '\0') {
        fVar34 = *(float *)(puVar12 + lVar7 + 0x40);
        if (((fVar34 == local_f0) && (!NAN(fVar34) && !NAN(local_f0))) &&
           (*(int *)(puVar12 + lVar7 + 0x3c) < local_f8._4_4_)) {
          FUN_148d4b0d6(&local_128,puVar12 + lVar7 + 8);
          fVar34 = *(float *)(puVar12 + lVar7 + 0x40);
        }
        if (local_f0 < fVar34) goto LAB_14131eac6;
      }
      else {
LAB_14131eac6:
        plVar22 = *(longlong **)(puVar12 + lVar7 + 8);
        if (local_128 != plVar22) {
          local_118 = 0;
        }
        if (uStack_120 != *(longlong *)(puVar12 + lVar7 + 0x10)) {
          local_118 = 0;
        }
        local_128 = plVar22;
        uVar9 = FUN_14477b664();
        uStack_120 = FUN_14477b664(uVar9);
        plVar24 = local_108;
        local_118 = *(undefined8 *)(puVar12 + lVar7 + 0x18);
        plStack_110 = *(longlong **)(puVar12 + lVar7 + 0x20);
        plVar22 = *(longlong **)(puVar12 + lVar7 + 0x28);
        if (local_108 != plVar22) {
          local_108 = plVar22;
          if (plVar22 != (longlong *)0x0) {
            (**(code **)(*plVar22 + 8))();
          }
          if (plVar24 != (longlong *)0x0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
        local_100 = *(undefined4 *)(puVar12 + lVar7 + 0x30);
        local_f0 = *(float *)(puVar12 + lVar7 + 0x40);
        local_f8 = *(ulonglong *)(puVar12 + lVar7 + 0x38);
      }
      uVar33 = uVar33 & ~(uint)uVar16;
      ppppppuVar10 = (undefined ******)local_c8;
      if ((undefined ******)local_c8 == (undefined ******)0x0) {
        ppppppuVar10 = local_d8;
      }
      iVar6 = (int)uVar23;
      lVar7 = (longlong)iVar6;
      uVar5 = *(uint *)((longlong)ppppppuVar10 + lVar7 * 4) & uVar33;
      if (uVar5 == 0) {
        iVar20 = local_c0 + 0x1e;
        if (-1 < (int)(local_c0 - 1)) {
          iVar20 = local_c0 - 1;
        }
        iVar20 = iVar20 >> 5;
        iVar27 = iVar27 + 0x20;
        iVar21 = iVar20;
        if (iVar20 < iVar6) {
          iVar21 = iVar6;
        }
        if (iVar6 < iVar20) {
          lVar8 = 0;
          do {
            uVar5 = *(uint *)((longlong)ppppppuVar10 + (lVar7 + lVar8 + 1) * 4);
            if (uVar5 != 0) {
              uVar23 = (ulonglong)(iVar6 + (int)lVar8 + 1);
              uVar33 = 0xffffffff;
              goto LAB_14131ec02;
            }
            iVar27 = iVar27 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar21 - lVar7 != lVar8);
          uVar33 = 0xffffffff;
          iVar6 = iVar21;
        }
        uVar23 = (ulonglong)(iVar6 + 1);
        uVar5 = local_c0;
      }
      else {
LAB_14131ec02:
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar18 = uVar16 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar5 = (iVar27 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)local_c0 <= (int)uVar5) {
          uVar5 = local_c0;
        }
      }
    } while (uVar5 != uVar14);
  }
LAB_14131ec70:
  cVar3 = FUN_140cac50e(&local_108);
  plVar22 = local_230;
  if (cVar3 == '\0') {
    local_158 = local_108;
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 8))();
    }
    uStack_150 = CONCAT44(uStack_150._4_4_,local_100);
  }
  else {
    FUN_144a5dc74(&local_158);
    plVar22 = local_230;
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  cVar3 = FUN_140cac50e(&local_158);
  if (cVar3 == '\0') {
    iVar27 = (int)plVar22[1];
    *(uint *)(plVar22 + 1) = iVar27 + 1U;
    if (*(uint *)((longlong)plVar22 + 0xc) < iVar27 + 1U) {
      FUN_14001d63e(plVar22,iVar27);
    }
    lVar7 = *plVar22;
    *(longlong **)(lVar7 + (longlong)iVar27 * 0x10) = local_158;
    if (local_158 != (longlong *)0x0) {
      (**(code **)(*local_158 + 8))();
    }
    *(int *)(lVar7 + (longlong)iVar27 * 0x10 + 8) = (int)uStack_150;
  }
  lVar7 = (longlong)(int)(uint)uStack_1a0;
  if (lVar7 != 0) {
    iVar27 = (int)plVar22[1];
    *(uint *)(plVar22 + 1) = iVar27 + (uint)uStack_1a0;
    if ((uint)(*(int *)((longlong)plVar22 + 0xc) - iVar27) < (uint)uStack_1a0) {
      FUN_14001d63e(local_230,iVar27);
    }
    memmove((void *)((longlong)iVar27 * 0x10 + *local_230),local_1a8,lVar7 << 4);
    uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
  }
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x10))();
  }
  if (local_140 != (longlong *)0x0) {
    (**(code **)(*local_140 + 0x10))();
  }
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 == 0) {
    uVar16 = 0;
    uVar23 = 1;
    uVar14 = 0;
    iVar27 = 0;
  }
  else {
    ppppppuVar10 = (undefined ******)local_c8;
    if ((undefined ******)local_c8 == (undefined ******)0x0) {
      ppppppuVar10 = local_d8;
    }
    uVar14 = *(uint *)ppppppuVar10;
    if (uVar14 == 0) {
      iVar27 = local_c0 + 0x1e;
      if (-1 < (int)(local_c0 - 1)) {
        iVar27 = local_c0 - 1;
      }
      uVar16 = 0;
      uVar23 = (ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        uVar23 = uVar16;
      }
      iVar27 = 0;
      do {
        if (uVar23 == uVar16) goto LAB_14131eea3;
        iVar27 = iVar27 + 0x20;
        uVar14 = *(uint *)((longlong)ppppppuVar10 + (uVar16 + 1) * 4);
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar27 = 0;
    }
    uVar23 = (ulonglong)(-uVar14 & uVar14);
    uVar18 = uVar23 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar14 = (iVar27 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)local_c0 <= (int)uVar14) {
      uVar14 = local_c0;
    }
  }
  if ((int)uVar14 < (int)local_c0) {
    uVar33 = 0xffffffff;
    uVar5 = local_c0;
    do {
      if (*(longlong **)(local_e8 + (longlong)(int)uVar14 * 0x50 + 0x28) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(local_e8 + (longlong)(int)uVar14 * 0x50 + 0x28) + 0x10))();
        uVar5 = local_c0;
      }
      uVar33 = uVar33 & ~(uint)uVar23;
      ppppppuVar10 = (undefined ******)local_c8;
      if ((undefined ******)local_c8 == (undefined ******)0x0) {
        ppppppuVar10 = local_d8;
      }
      iVar6 = (int)uVar16;
      lVar7 = (longlong)iVar6;
      uVar14 = *(uint *)((longlong)ppppppuVar10 + lVar7 * 4) & uVar33;
      if (uVar14 == 0) {
        iVar20 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar20 = uVar5 - 1;
        }
        iVar20 = iVar20 >> 5;
        iVar21 = iVar20;
        if (iVar20 < iVar6) {
          iVar21 = iVar6;
        }
        if (iVar20 <= iVar6) break;
        lVar8 = 0;
        while( true ) {
          iVar27 = iVar27 + 0x20;
          uVar14 = *(uint *)((longlong)ppppppuVar10 + (lVar7 + lVar8 + 1) * 4);
          if (uVar14 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar21 - lVar7 == lVar8) goto LAB_14131eea3;
        }
        uVar16 = (ulonglong)(iVar6 + (int)lVar8 + 1);
        uVar33 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar14 & uVar14);
      uVar18 = uVar23 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar14 = (iVar27 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while ((int)uVar14 < (int)uVar5);
  }
LAB_14131eea3:
  uVar23 = uStack_e0 >> 0x20;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  if ((int)uVar23 != 0) {
    FUN_140e9549c(&local_e8,0);
  }
  param_4 = local_230;
  local_b8 = 0xffffffff;
  iStack_b4 = 0;
  local_c0 = 0;
  if (0x80 < uStack_bc) {
    uStack_bc = 0x80;
    FUN_1446efbd8(local_d8,0);
  }
  if ((undefined ******)local_c8 != (undefined ******)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
LAB_14131ef3b:
  lVar7 = (longlong)(int)(uint)uStack_1b0;
  if (lVar7 != 0) {
    iVar27 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar27 + (uint)uStack_1b0;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar27) < (uint)uStack_1b0) {
      FUN_14001d63e(param_4,iVar27);
    }
    memmove((void *)((longlong)iVar27 * 0x10 + *param_4),local_1b8,lVar7 << 4);
    uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
  }
  lVar7 = (longlong)(int)(uint)uStack_1c0;
  if (lVar7 != 0) {
    iVar27 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar27 + (uint)uStack_1c0;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar27) < (uint)uStack_1c0) {
      FUN_14001d63e(local_230,iVar27);
    }
    memmove((void *)((longlong)iVar27 * 0x10 + *local_230),local_1c8,lVar7 << 4);
    uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
  }
  FUN_140255aed(0,0);
  FUN_1401b9920(local_1c8,uStack_1c0 & 0xffffffff);
  if (local_1c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(local_1b8,uStack_1b0 & 0xffffffff);
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(local_1a8,uStack_1a0 & 0xffffffff);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14131f012:
  if ((local_90 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413202de FUN_1413202de body=57 status=ok
// SIG undefined FUN_1413202de(void)

void FUN_1413202de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0088 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0088 = FUN_140002ddd(FUN_1465a8358,uVar1,L"ClassModPassivesAspect");
  }
  return;
}



// FUNCTION 141320318 FUN_141320318 body=353 status=ok
// SIG undefined FUN_141320318(void)

void FUN_141320318(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14132039d;
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
LAB_14132039d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14132047a FUN_14132047a body=586 status=ok
// SIG undefined FUN_14132047a(void)

void FUN_14132047a(longlong param_1,ulonglong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [40];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 == (longlong *)0x0) {
LAB_141320561:
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar2 = (**(code **)(*plVar4 + 8))();
    lVar3 = FUN_1413206c6();
    if ((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) goto LAB_141320561;
    plVar7 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      plVar7 = plVar4;
    }
  }
  if ((param_3 != '\0') && ((plVar7 == (longlong *)0x0 || ((char)plVar7[0x5c] != '\x01'))))
  goto LAB_14132053e;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcd0c0) {
    FUN_144b3d300(&DAT_14cbcd0c0);
    if (DAT_14cbcd0c0 == -1) {
      FUN_1446ddc76(&DAT_14cbcd0b0,"GbxMeleeActionCarryLock",1);
      FUN_1446ddc76(&DAT_14cbcd0b8,"GbxMeleeCooldownCarryLock",1);
      _Init_thread_footer(&DAT_14cbcd0c0);
    }
  }
  param_2 = param_2 & 0xffffffff;
  lVar2 = param_1 + param_2 * 0x10;
  puVar8 = (undefined8 *)(lVar2 + 0x198);
  if (*(longlong *)(lVar2 + 0x1a0) != 0) {
    cVar1 = FUN_144729dda(puVar8);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(lVar2 + 0x1a0) + 0x60))();
      uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x1a0) + 0x20))();
      FUN_1418dfe60(uVar5,0,*(undefined8 *)(&DAT_14cbcd0b0 + param_2 * 8));
      *puVar8 = 0;
      *(undefined8 *)(lVar2 + 0x1a0) = 0;
    }
  }
  if (param_3 == '\0') goto LAB_14132053e;
  local_60[0] = 0;
  local_38 = 0;
  FUN_1457361f4(local_60,param_1 + 8);
  plVar4 = (longlong *)FUN_1447262c2(local_60);
  if (plVar4 == (longlong *)0x0) {
LAB_141320667:
    lVar6 = 0;
  }
  else {
    uVar5 = FUN_140338614();
    lVar3 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
    if (lVar3 == 0) goto LAB_141320667;
    uVar5 = FUN_140338614();
    lVar6 = FUN_144718840(lVar3,uVar5);
    if (lVar3 == lVar6) goto LAB_141320667;
  }
  FUN_1412d3686(&local_70,lVar6);
  *(undefined4 *)puVar8 = local_70;
  *(undefined4 *)(lVar2 + 0x19c) = uStack_6c;
  *(undefined4 *)(lVar2 + 0x1a0) = uStack_68;
  *(undefined4 *)(lVar2 + 0x1a4) = uStack_64;
  FUN_144a5ac3a(local_60);
  if (*(longlong *)(lVar2 + 0x1a0) != 0) {
    cVar1 = FUN_144729dda(puVar8);
    if (cVar1 != '\0') {
      uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x1a0) + 0x20))();
      FUN_1418dfe60(uVar5,1,*(undefined8 *)(&DAT_14cbcd0b0 + param_2 * 8));
    }
  }
LAB_14132053e:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413206c6 FUN_1413206c6 body=57 status=ok
// SIG undefined FUN_1413206c6(void)

void FUN_1413206c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacc70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacc70 = FUN_140002ddd(FUN_1465e40e4,uVar1,L"OakMeleeDef");
  }
  return;
}



// FUNCTION 141320700 FUN_141320700 body=245 status=ok
// SIG undefined FUN_141320700(void)

void FUN_141320700(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar4 = *(uint *)(param_1 + 8), -1 < (int)uVar4)) &&
     ((int)uVar4 < DAT_14c9647dc)) {
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar5;
      }
      else {
        uVar3 = 0;
      }
      lVar2 = FUN_1401b4c98(uVar3);
      lVar1 = *(longlong *)(param_1 + 0xf0);
      if (lVar1 != 0) {
        uVar4 = (uint)lVar1;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
          lVar6 = lVar2 + 0x18;
          if (*(longlong *)(lVar2 + 0x28) != 0) {
            lVar6 = *(longlong *)(lVar2 + 0x28);
          }
          if ((*(uint *)(lVar6 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) !=
              0) {
            lVar6 = *(longlong *)(lVar2 + 8);
            lVar7 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar6 + lVar7 != 0) && (*(longlong *)(lVar6 + 0x60 + lVar7) == lVar1)) &&
               (*(char *)(lVar6 + 1 + lVar7) != '\x04')) {
              FUN_1405a424c(lVar2);
            }
          }
        }
        *(undefined8 *)(param_1 + 0xf0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1413207f6 FUN_1413207f6 body=40 status=ok
// SIG undefined FUN_1413207f6(void)

undefined8 FUN_1413207f6(undefined8 param_1,int param_2)

{
  FUN_14132081e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14132081e FUN_14132081e body=447 status=ok
// SIG undefined FUN_14132081e(void)

void FUN_14132081e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b94fef0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xbc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0xbc) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x16) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x16) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x16) = 0;
  }
  plVar4 = (longlong *)param_1[0x15];
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
  FUN_140d7851c(param_1);
  return;
}



// FUNCTION 1413209de FUN_1413209de body=919 status=ok
// SIG undefined FUN_1413209de(void)

void FUN_1413209de(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x10c) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x10c) = 1;
    lVar11 = *(longlong *)(param_1 + 0x18);
    uVar14 = 1;
    lVar19 = 0;
    do {
      uVar17 = *(ulonglong *)(lVar11 + lVar19);
      if (((((uVar17 >> 0x20 != 0) && (uVar7 = (uint)uVar17, -1 < (int)uVar7)) &&
           ((int)uVar7 < DAT_14c9647dc)) &&
          ((puVar15 = (undefined8 *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8))),
           puVar15 != (undefined8 *)0x0 && (*(int *)(puVar15 + 2) == (int)(uVar17 >> 0x20))))) &&
         ((*(uint *)(puVar15 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar15 + 1) & 0x10200000) == 0) {
          uVar10 = *puVar15;
        }
        else {
          uVar10 = 0;
        }
        bVar3 = FUN_141320d76(uVar10);
        uVar14 = *(uint *)(param_1 + 0x10c);
        if ((byte)uVar14 < bVar3) {
          uVar14 = (uint)bVar3;
        }
        *(char *)(param_1 + 0x10c) = (char)uVar14;
      }
      lVar19 = lVar19 + 8;
    } while ((longlong)iVar2 * 8 != lVar19);
    *(char *)(param_1 + 0x10d) = (char)uVar14;
    FUN_1403062bc(param_1,(undefined8 *)(param_1 + 0x18));
    if (0 < *(int *)(param_1 + 0x20)) {
      puVar5 = *(uint **)(param_1 + 0x18);
      uVar14 = puVar5[1];
      if (((uVar14 != 0) && (uVar7 = *puVar5, -1 < (int)uVar7)) &&
         (((int)uVar7 < DAT_14c9647dc &&
          (((lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar11 != 0 &&
            (*(uint *)(lVar11 + 0x10) == uVar14)) && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))))
         ) {
        lVar11 = 0;
        FUN_1408d9e0e(param_1 + 0x120,0);
        uVar14 = (*(uint **)(param_1 + 0x18))[1];
        if (uVar14 != 0) {
          uVar7 = **(uint **)(param_1 + 0x18);
          lVar11 = 0;
          if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
            plVar12 = (longlong *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
            if ((plVar12 == (longlong *)0x0) ||
               ((*(uint *)(plVar12 + 2) != uVar14 || ((*(uint *)(plVar12 + 1) & 0x10200000) != 0))))
            {
              lVar11 = 0;
            }
            else {
              lVar11 = *plVar12;
            }
          }
        }
        lVar11 = *(longlong *)(lVar11 + 0xa8);
        if (lVar11 != 0) {
          iVar2 = *(int *)(lVar11 + 0x268);
          if (iVar2 == 0) {
            uVar17 = 0;
            uVar18 = 1;
            iVar6 = 0;
            iVar13 = 0;
          }
          else {
            puVar5 = *(uint **)(lVar11 + 0x260);
            if (*(uint **)(lVar11 + 0x260) == (uint *)0x0) {
              puVar5 = (uint *)(lVar11 + 0x250);
            }
            uVar14 = *puVar5;
            if (uVar14 == 0) {
              iVar6 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar6 = iVar2 + -1;
              }
              uVar17 = 0;
              uVar18 = (ulonglong)(uint)(iVar6 >> 5);
              if (iVar6 >> 5 < 1) {
                uVar18 = uVar17;
              }
              iVar13 = 0;
              do {
                if (uVar18 == uVar17) goto LAB_141320d01;
                iVar13 = iVar13 + 0x20;
                uVar14 = puVar5[uVar17 + 1];
                uVar17 = uVar17 + 1;
              } while (uVar14 == 0);
            }
            else {
              uVar17 = 0;
              iVar13 = 0;
            }
            uVar18 = (ulonglong)(-uVar14 & uVar14);
            uVar1 = uVar18 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar6 = (iVar13 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar6) {
              iVar6 = iVar2;
            }
          }
          if (iVar6 != iVar2) {
            uVar14 = 0xffffffff;
            iVar4 = iVar2;
            do {
              lVar19 = *(longlong *)(*(longlong *)(lVar11 + 0x240) + (longlong)iVar6 * 0x10);
              if (lVar19 != 0) {
                local_58 = *(undefined8 *)(lVar19 + 0x70);
                local_50 = *(undefined4 *)(lVar19 + 0x78);
                FUN_140ce09a0(param_1 + 0x120,&local_58);
                iVar4 = *(int *)(lVar11 + 0x268);
              }
              uVar14 = uVar14 & ~(uint)uVar18;
              puVar5 = *(uint **)(lVar11 + 0x260);
              if (*(uint **)(lVar11 + 0x260) == (uint *)0x0) {
                puVar5 = (uint *)(lVar11 + 0x250);
              }
              iVar6 = (int)uVar17;
              lVar19 = (longlong)iVar6;
              uVar7 = puVar5[lVar19] & uVar14;
              if (uVar7 == 0) {
                iVar8 = iVar4 + 0x1e;
                if (-1 < iVar4 + -1) {
                  iVar8 = iVar4 + -1;
                }
                iVar8 = iVar8 >> 5;
                iVar13 = iVar13 + 0x20;
                iVar9 = iVar8;
                if (iVar8 < iVar6) {
                  iVar9 = iVar6;
                }
                if (iVar6 < iVar8) {
                  lVar16 = 0;
                  do {
                    uVar7 = puVar5[lVar19 + lVar16 + 1];
                    if (uVar7 != 0) {
                      uVar17 = (ulonglong)(iVar6 + (int)lVar16 + 1);
                      uVar14 = 0xffffffff;
                      goto LAB_141320ccb;
                    }
                    iVar13 = iVar13 + 0x20;
                    lVar16 = lVar16 + 1;
                  } while (iVar9 - lVar19 != lVar16);
                  uVar14 = 0xffffffff;
                  iVar6 = iVar9;
                }
                uVar17 = (ulonglong)(iVar6 + 1);
                iVar6 = iVar4;
              }
              else {
LAB_141320ccb:
                uVar18 = (ulonglong)(-uVar7 & uVar7);
                uVar1 = uVar18 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                iVar6 = (iVar13 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                if (iVar4 <= iVar6) {
                  iVar6 = iVar4;
                }
              }
            } while (iVar6 != iVar2);
          }
        }
      }
    }
  }
LAB_141320d01:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141320d76 FUN_141320d76 body=194 status=ok
// SIG undefined FUN_141320d76(void)

char FUN_141320d76(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    cVar1 = '\0';
  }
  else {
    param_1 = param_1 + 0x410;
    FUN_1406900ec(param_1,&local_20);
    if (local_20 == DAT_14cbc6210) {
      cVar1 = '\x02';
    }
    else {
      FUN_1406900ec(param_1,&local_28);
      cVar1 = '\x02';
      if (local_28 != DAT_14cbc6218) {
        FUN_1406900ec(param_1,&local_20);
        cVar1 = '\x04';
        if (local_20 != DAT_14cbc6228) {
          FUN_1406900ec(param_1,&local_20);
          cVar1 = (local_20 == DAT_14cbc6220) * '\x02' + '\x01';
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141320e3a FUN_141320e3a body=887 status=ok
// SIG undefined FUN_141320e3a(void)

void FUN_141320e3a(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  ulonglong *local_a8;
  undefined8 uStack_a0;
  longlong local_98 [3];
  ulonglong *local_80;
  ulonglong *local_78;
  ulonglong *local_70;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98[0] = 0;
  local_98[1] = 0;
  iVar11 = 0;
  local_b0 = param_1;
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_70 = (ulonglong *)0x0;
  local_78 = (ulonglong *)0x0;
  (**(code **)(*plVar8 + 0x1c8))(plVar8,&local_78,&local_70);
  puVar3 = local_70;
  puVar2 = local_78;
  local_80._0_4_ = (uint)local_70;
  local_80._0_4_ = (uint)local_70;
  local_a8 = local_78;
  iVar9 = 0;
  if (0 < (int)(uint)local_70) {
    iVar9 = 0;
    uVar10 = 0x7fffffff;
    uVar6 = (uint)local_70;
    do {
      if (uVar10 == 0) {
        iVar9 = -1;
        break;
      }
      iVar4 = iVar9;
      if (((((ulonglong)local_a8 & 7) == 0) && (local_80._0_4_ = uVar6, 7 < uVar6)) &&
         (uVar7 = uVar10, 7 < (int)uVar10)) {
        while (uVar10 = uVar7, iVar4 = iVar9, local_80._0_4_ = uVar6,
              (*local_a8 & 0x8080808080808080) == 0) {
          local_a8 = local_a8 + 1;
          iVar9 = iVar9 + 8;
          local_80._0_4_ = uVar6 - 8;
          uVar10 = uVar7 - 8;
          bVar1 = (int)uVar6 < 0x10;
          uVar6 = (uint)local_80;
          iVar4 = iVar9;
          if ((bVar1) || (bVar1 = uVar7 < 0x10, uVar7 = uVar10, bVar1)) break;
        }
      }
LAB_141320f35:
      do {
        iVar9 = iVar4;
        if (((int)uVar6 < 1) || ((int)uVar10 < 1)) break;
        uVar7 = FUN_14003e942(&local_a8,&local_80);
        uVar6 = (uint)local_80;
        if (uVar7 < 0x10000) {
          uVar10 = uVar10 - 1;
          iVar4 = iVar9 + 1;
          if (0x7f < uVar7) goto LAB_141320f35;
        }
        else {
          if (1 < uVar10) {
            uVar10 = uVar10 - 2;
            iVar4 = iVar9 + 2;
            goto LAB_141320f35;
          }
          uVar10 = 0;
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar9;
      } while (((ulonglong)local_a8 & 7) != 0);
    } while (0 < (int)uVar6);
  }
  FUN_1409ee492(local_98,iVar9 + 1,1);
  *(undefined2 *)(local_98[0] + (longlong)iVar9 * 2) = 0;
  FUN_1446e71a3(local_98[0],(longlong)iVar9,puVar2,(ulonglong)puVar3 & 0xffffffff);
  local_a8 = (ulonglong *)0x0;
  uStack_a0 = 0;
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_78 = (ulonglong *)0x0;
  local_80 = (ulonglong *)0x0;
  (**(code **)(*plVar8 + 0x1c8))(plVar8,&local_80,&local_78);
  puVar3 = local_78;
  puVar2 = local_80;
  local_64 = (uint)local_78;
  local_70 = local_80;
  if (0 < (int)(uint)local_78) {
    iVar11 = 0;
    uVar10 = 0x7fffffff;
    uVar6 = (uint)local_78;
    do {
      if (uVar10 == 0) {
        iVar11 = -1;
        break;
      }
      iVar9 = iVar11;
      if (((((ulonglong)local_70 & 7) == 0) && (local_64 = uVar6, 7 < uVar6)) &&
         (uVar7 = uVar10, 7 < (int)uVar10)) {
        while (uVar10 = uVar7, iVar9 = iVar11, local_64 = uVar6,
              (*local_70 & 0x8080808080808080) == 0) {
          local_70 = local_70 + 1;
          iVar11 = iVar11 + 8;
          local_64 = uVar6 - 8;
          uVar10 = uVar7 - 8;
          bVar1 = (int)uVar6 < 0x10;
          uVar6 = local_64;
          iVar9 = iVar11;
          if ((bVar1) || (bVar1 = uVar7 < 0x10, uVar7 = uVar10, bVar1)) break;
        }
      }
LAB_141321065:
      do {
        iVar11 = iVar9;
        if (((int)uVar6 < 1) || ((int)uVar10 < 1)) break;
        uVar7 = FUN_14003e942(&local_70,&local_64);
        uVar6 = local_64;
        if (uVar7 < 0x10000) {
          uVar10 = uVar10 - 1;
          iVar9 = iVar11 + 1;
          if (0x7f < uVar7) goto LAB_141321065;
        }
        else {
          if (1 < uVar10) {
            uVar10 = uVar10 - 2;
            iVar9 = iVar11 + 2;
            goto LAB_141321065;
          }
          uVar10 = 0;
        }
        iVar11 = iVar11 + 1;
        iVar9 = iVar11;
      } while (((ulonglong)local_70 & 7) != 0);
    } while (0 < (int)uVar6);
  }
  FUN_1409ee492(&local_a8,iVar11 + 1,1);
  *(undefined2 *)((longlong)local_a8 + (longlong)iVar11 * 2) = 0;
  FUN_1446e71a3(local_a8,(longlong)iVar11,puVar2,(ulonglong)puVar3 & 0xffffffff);
  cVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar5 == '\0') {
    (**(code **)(local_b0 + 0x10))
              ((longlong)*(int *)(local_b0 + 0x18) + *(longlong *)(local_b0 + 8),local_98,&local_a8)
    ;
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_a8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


